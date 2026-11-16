# future_backtest::RunnerCore::run_multi
# ELF 00000000009cb2b0 bytes 42013
  9cb2b0:	55                   	push   rbp
  9cb2b1:	41 57                	push   r15
  9cb2b3:	41 56                	push   r14
  9cb2b5:	41 55                	push   r13
  9cb2b7:	41 54                	push   r12
  9cb2b9:	53                   	push   rbx
  9cb2ba:	48 81 ec 00 10 00 00 	sub    rsp,0x1000
  9cb2c1:	48 c7 04 24 00 00 00 	mov    QWORD PTR [rsp],0x0
  9cb2c8:	00 
  9cb2c9:	48 81 ec 00 10 00 00 	sub    rsp,0x1000
  9cb2d0:	48 c7 04 24 00 00 00 	mov    QWORD PTR [rsp],0x0
  9cb2d7:	00 
  9cb2d8:	48 81 ec 00 10 00 00 	sub    rsp,0x1000
  9cb2df:	48 c7 04 24 00 00 00 	mov    QWORD PTR [rsp],0x0
  9cb2e6:	00 
  9cb2e7:	48 81 ec f8 0f 00 00 	sub    rsp,0xff8
  9cb2ee:	48 89 cb             	mov    rbx,rcx
  9cb2f1:	49 89 d6             	mov    r14,rdx
  9cb2f4:	49 89 fc             	mov    r12,rdi
  9cb2f7:	48 89 b4 24 a8 00 00 	mov    QWORD PTR [rsp+0xa8],rsi
  9cb2fe:	00 
  9cb2ff:	4c 89 84 24 48 03 00 	mov    QWORD PTR [rsp+0x348],r8
  9cb306:	00 
  9cb307:	49 8b 00             	mov    rax,QWORD PTR [r8]
  9cb30a:	48 89 84 24 50 03 00 	mov    QWORD PTR [rsp+0x350],rax
  9cb311:	00 
  9cb312:	48 f7 d8             	neg    rax
  9cb315:	48 8d 05 00 9d 8b ff 	lea    rax,[rip+0xffffffffff8b9d00]        # 28501c <anon.609a31ba814f1e4156e50677fc366a7f.490.llvm.5215769359700358943+0x1f96>
  9cb31c:	48 8d 0d a9 3f 88 ff 	lea    rcx,[rip+0xffffffffff883fa9]        # 24f2cc <anon.be4fa2ff1152a799c3daca4003b01b7a.20.llvm.16549490518784692173+0x8>
  9cb323:	48 0f 40 c8          	cmovo  rcx,rax
  9cb327:	b8 0e 00 00 00       	mov    eax,0xe
  9cb32c:	ba 04 00 00 00       	mov    edx,0x4
  9cb331:	48 0f 40 d0          	cmovo  rdx,rax
  9cb335:	48 89 8c 24 80 1b 00 	mov    QWORD PTR [rsp+0x1b80],rcx
  9cb33c:	00 
  9cb33d:	48 89 94 24 88 1b 00 	mov    QWORD PTR [rsp+0x1b88],rdx
  9cb344:	00 
  9cb345:	48 8d 84 24 80 1b 00 	lea    rax,[rsp+0x1b80]
  9cb34c:	00 
  9cb34d:	48 89 84 24 d0 11 00 	mov    QWORD PTR [rsp+0x11d0],rax
  9cb354:	00 
  9cb355:	48 8d 05 c4 9f f2 ff 	lea    rax,[rip+0xfffffffffff29fc4]        # 8f5320 <<&T as core::fmt::Display>::fmt>
  9cb35c:	48 89 84 24 d8 11 00 	mov    QWORD PTR [rsp+0x11d8],rax
  9cb363:	00 
  9cb364:	48 8d 84 24 a8 00 00 	lea    rax,[rsp+0xa8]
  9cb36b:	00 
  9cb36c:	48 89 84 24 e0 11 00 	mov    QWORD PTR [rsp+0x11e0],rax
  9cb373:	00 
  9cb374:	48 8b 05 75 ba fd 00 	mov    rax,QWORD PTR [rip+0xfdba75]        # 19a6df0 <_DYNAMIC+0x5f0>
  9cb37b:	48 89 84 24 e8 11 00 	mov    QWORD PTR [rsp+0x11e8],rax
  9cb382:	00 
  9cb383:	48 8d 05 be 0b f3 00 	lea    rax,[rip+0xf30bbe]        # 18fbf48 <anon.609a31ba814f1e4156e50677fc366a7f.492.llvm.5215769359700358943+0x950>
  9cb38a:	48 89 84 24 10 06 00 	mov    QWORD PTR [rsp+0x610],rax
  9cb391:	00 
  9cb392:	48 c7 84 24 18 06 00 	mov    QWORD PTR [rsp+0x618],0x3
  9cb399:	00 03 00 00 00 
  9cb39e:	48 c7 84 24 30 06 00 	mov    QWORD PTR [rsp+0x630],0x0
  9cb3a5:	00 00 00 00 00 
  9cb3aa:	48 8d 84 24 d0 11 00 	lea    rax,[rsp+0x11d0]
  9cb3b1:	00 
  9cb3b2:	48 89 84 24 20 06 00 	mov    QWORD PTR [rsp+0x620],rax
  9cb3b9:	00 
  9cb3ba:	48 c7 84 24 28 06 00 	mov    QWORD PTR [rsp+0x628],0x2
  9cb3c1:	00 02 00 00 00 
  9cb3c6:	b0 01                	mov    al,0x1
  9cb3c8:	89 84 24 c8 00 00 00 	mov    DWORD PTR [rsp+0xc8],eax
  9cb3cf:	48 8d bc 24 10 06 00 	lea    rdi,[rsp+0x610]
  9cb3d6:	00 
  9cb3d7:	ff 15 7b b8 fd 00    	call   QWORD PTR [rip+0xfdb87b]        # 19a6c58 <_DYNAMIC+0x458>
  9cb3dd:	48 8b ac 24 a8 00 00 	mov    rbp,QWORD PTR [rsp+0xa8]
  9cb3e4:	00 
  9cb3e5:	b9 08 08 00 00       	mov    ecx,0x808
  9cb3ea:	48 89 e8             	mov    rax,rbp
  9cb3ed:	48 f7 e1             	mul    rcx
  9cb3f0:	49 89 c7             	mov    r15,rax
  9cb3f3:	0f 90 c0             	seto   al
  9cb3f6:	48 b9 00 00 00 00 00 	movabs rcx,0x8000000000000000
  9cb3fd:	00 00 80 
  9cb400:	48 8d 51 f8          	lea    rdx,[rcx-0x8]
  9cb404:	49 39 d7             	cmp    r15,rdx
  9cb407:	0f 97 c1             	seta   cl
  9cb40a:	08 c1                	or     cl,al
  9cb40c:	74 1b                	je     9cb429 <future_backtest::RunnerCore::run_multi+0x179>
  9cb40e:	45 31 ed             	xor    r13d,r13d
  9cb411:	48 8d 15 60 0b f3 00 	lea    rdx,[rip+0xf30b60]        # 18fbf78 <anon.609a31ba814f1e4156e50677fc366a7f.492.llvm.5215769359700358943+0x980>
  9cb418:	4c 89 ef             	mov    rdi,r13
  9cb41b:	4c 89 fe             	mov    rsi,r15
  9cb41e:	ff 15 74 b7 fd 00    	call   QWORD PTR [rip+0xfdb774]        # 19a6b98 <_DYNAMIC+0x398>
  9cb424:	e9 d3 8d 00 00       	jmp    9d41fc <future_backtest::RunnerCore::run_multi+0x8f4c>
  9cb429:	48 89 54 24 50       	mov    QWORD PTR [rsp+0x50],rdx
  9cb42e:	48 89 9c 24 a0 00 00 	mov    QWORD PTR [rsp+0xa0],rbx
  9cb435:	00 
  9cb436:	4d 85 ff             	test   r15,r15
  9cb439:	4c 89 74 24 60       	mov    QWORD PTR [rsp+0x60],r14
  9cb43e:	74 2c                	je     9cb46c <future_backtest::RunnerCore::run_multi+0x1bc>
  9cb440:	ff 15 fa b5 fd 00    	call   QWORD PTR [rip+0xfdb5fa]        # 19a6a40 <_DYNAMIC+0x240>
  9cb446:	41 bd 08 00 00 00    	mov    r13d,0x8
  9cb44c:	be 08 00 00 00       	mov    esi,0x8
  9cb451:	4c 89 ff             	mov    rdi,r15
  9cb454:	ff 15 be b5 fd 00    	call   QWORD PTR [rip+0xfdb5be]        # 19a6a18 <_DYNAMIC+0x218>
  9cb45a:	48 85 c0             	test   rax,rax
  9cb45d:	74 b2                	je     9cb411 <future_backtest::RunnerCore::run_multi+0x161>
  9cb45f:	48 89 c3             	mov    rbx,rax
  9cb462:	4c 8b b4 24 a8 00 00 	mov    r14,QWORD PTR [rsp+0xa8]
  9cb469:	00 
  9cb46a:	eb 0a                	jmp    9cb476 <future_backtest::RunnerCore::run_multi+0x1c6>
  9cb46c:	bb 08 00 00 00       	mov    ebx,0x8
  9cb471:	49 89 ee             	mov    r14,rbp
  9cb474:	31 ed                	xor    ebp,ebp
  9cb476:	48 89 ac 24 d0 00 00 	mov    QWORD PTR [rsp+0xd0],rbp
  9cb47d:	00 
  9cb47e:	48 89 9c 24 d8 00 00 	mov    QWORD PTR [rsp+0xd8],rbx
  9cb485:	00 
  9cb486:	48 c7 84 24 e0 00 00 	mov    QWORD PTR [rsp+0xe0],0x0
  9cb48d:	00 00 00 00 00 
  9cb492:	4d 85 f6             	test   r14,r14
  9cb495:	0f 84 db 00 00 00    	je     9cb576 <future_backtest::RunnerCore::run_multi+0x2c6>
  9cb49b:	49 c1 e6 04          	shl    r14,0x4
  9cb49f:	31 ed                	xor    ebp,ebp
  9cb4a1:	4c 8b 2d a0 b6 fd 00 	mov    r13,QWORD PTR [rip+0xfdb6a0]        # 19a6b48 <memcpy@GLIBC_2.14>
  9cb4a8:	eb 44                	jmp    9cb4ee <future_backtest::RunnerCore::run_multi+0x23e>
  9cb4aa:	66 0f 1f 44 00 00    	nop    WORD PTR [rax+rax*1+0x0]
  9cb4b0:	48 8b 9c 24 d8 00 00 	mov    rbx,QWORD PTR [rsp+0xd8]
  9cb4b7:	00 
  9cb4b8:	4c 89 f8             	mov    rax,r15
  9cb4bb:	48 c1 e0 0b          	shl    rax,0xb
  9cb4bf:	4a 8d 3c f8          	lea    rdi,[rax+r15*8]
  9cb4c3:	48 01 df             	add    rdi,rbx
  9cb4c6:	ba 08 08 00 00       	mov    edx,0x808
  9cb4cb:	48 8d b4 24 c8 22 00 	lea    rsi,[rsp+0x22c8]
  9cb4d2:	00 
  9cb4d3:	41 ff d5             	call   r13
  9cb4d6:	49 ff c7             	inc    r15
  9cb4d9:	4c 89 bc 24 e0 00 00 	mov    QWORD PTR [rsp+0xe0],r15
  9cb4e0:	00 
  9cb4e1:	48 83 c5 10          	add    rbp,0x10
  9cb4e5:	49 39 ee             	cmp    r14,rbp
  9cb4e8:	0f 84 8b 00 00 00    	je     9cb579 <future_backtest::RunnerCore::run_multi+0x2c9>
  9cb4ee:	49 8b 34 2c          	mov    rsi,QWORD PTR [r12+rbp*1]
  9cb4f2:	49 8b 54 2c 08       	mov    rdx,QWORD PTR [r12+rbp*1+0x8]
  9cb4f7:	48 8d bc 24 10 06 00 	lea    rdi,[rsp+0x610]
  9cb4fe:	00 
  9cb4ff:	e8 8c c1 ff ff       	call   9c7690 <future_backtest::RunnerCore::load_config>
  9cb504:	48 8b 9c 24 10 06 00 	mov    rbx,QWORD PTR [rsp+0x610]
  9cb50b:	00 
  9cb50c:	4c 8b bc 24 18 06 00 	mov    r15,QWORD PTR [rsp+0x618]
  9cb513:	00 
  9cb514:	48 83 fb 03          	cmp    rbx,0x3
  9cb518:	0f 84 ef 09 00 00    	je     9cbf0d <future_backtest::RunnerCore::run_multi+0xc5d>
  9cb51e:	ba f8 07 00 00       	mov    edx,0x7f8
  9cb523:	48 8d bc 24 d8 22 00 	lea    rdi,[rsp+0x22d8]
  9cb52a:	00 
  9cb52b:	48 8d b4 24 20 06 00 	lea    rsi,[rsp+0x620]
  9cb532:	00 
  9cb533:	41 ff d5             	call   r13
  9cb536:	48 89 9c 24 c8 22 00 	mov    QWORD PTR [rsp+0x22c8],rbx
  9cb53d:	00 
  9cb53e:	4c 89 bc 24 d0 22 00 	mov    QWORD PTR [rsp+0x22d0],r15
  9cb545:	00 
  9cb546:	4c 8b bc 24 e0 00 00 	mov    r15,QWORD PTR [rsp+0xe0]
  9cb54d:	00 
  9cb54e:	4c 3b bc 24 d0 00 00 	cmp    r15,QWORD PTR [rsp+0xd0]
  9cb555:	00 
  9cb556:	0f 85 54 ff ff ff    	jne    9cb4b0 <future_backtest::RunnerCore::run_multi+0x200>
  9cb55c:	48 8d bc 24 d0 00 00 	lea    rdi,[rsp+0xd0]
  9cb563:	00 
  9cb564:	48 8d 35 45 17 f3 00 	lea    rsi,[rip+0xf31745]        # 18fccb0 <anon.609a31ba814f1e4156e50677fc366a7f.492.llvm.5215769359700358943+0x16b8>
  9cb56b:	ff 15 ef b6 fd 00    	call   QWORD PTR [rip+0xfdb6ef]        # 19a6c60 <_DYNAMIC+0x460>
  9cb571:	e9 3a ff ff ff       	jmp    9cb4b0 <future_backtest::RunnerCore::run_multi+0x200>
  9cb576:	45 31 ff             	xor    r15d,r15d
  9cb579:	48 b8 00 00 00 00 00 	movabs rax,0x8000000000000000
  9cb580:	00 00 80 
  9cb583:	48 39 84 24 50 03 00 	cmp    QWORD PTR [rsp+0x350],rax
  9cb58a:	00 
  9cb58b:	0f 85 50 04 00 00    	jne    9cb9e1 <future_backtest::RunnerCore::run_multi+0x731>
  9cb591:	48 89 84 24 f0 19 00 	mov    QWORD PTR [rsp+0x19f0],rax
  9cb598:	00 
  9cb599:	b0 01                	mov    al,0x1
  9cb59b:	89 84 24 c8 00 00 00 	mov    DWORD PTR [rsp+0xc8],eax
  9cb5a2:	48 8b 8c 24 a8 00 00 	mov    rcx,QWORD PTR [rsp+0xa8]
  9cb5a9:	00 
  9cb5aa:	48 83 f9 02          	cmp    rcx,0x2
  9cb5ae:	0f 82 f6 00 00 00    	jb     9cb6aa <future_backtest::RunnerCore::run_multi+0x3fa>
  9cb5b4:	41 bb 01 00 00 00    	mov    r11d,0x1
  9cb5ba:	48 c7 c0 90 ff ff ff 	mov    rax,0xffffffffffffff90
  9cb5c1:	48 c7 c6 a8 ff ff ff 	mov    rsi,0xffffffffffffffa8
  9cb5c8:	4c 8b 84 24 d8 00 00 	mov    r8,QWORD PTR [rsp+0xd8]
  9cb5cf:	00 
  9cb5d0:	45 31 c9             	xor    r9d,r9d
  9cb5d3:	48 8d 15 3e 16 f3 00 	lea    rdx,[rip+0xf3163e]        # 18fcc18 <anon.609a31ba814f1e4156e50677fc366a7f.492.llvm.5215769359700358943+0x1620>
  9cb5da:	66 0f 28 05 6e 91 88 	movapd xmm0,XMMWORD PTR [rip+0xffffffffff88916e]        # 254750 <anon.1d60bbc5b7a6ca0614a4221d8538e6d9.2.llvm.10718084555993993690+0x30>
  9cb5e1:	ff 
  9cb5e2:	f2 0f 10 0d 16 80 88 	movsd  xmm1,QWORD PTR [rip+0xffffffffff888016]        # 253600 <anon.baa4d3160c6db26b1acb0467a3a6e91d.683.llvm.14045134056871974489+0x58>
  9cb5e9:	ff 
  9cb5ea:	45 31 d2             	xor    r10d,r10d
  9cb5ed:	4c 89 d7             	mov    rdi,r10
  9cb5f0:	4d 89 da             	mov    r10,r11
  9cb5f3:	48 89 bc 24 30 0e 00 	mov    QWORD PTR [rsp+0xe30],rdi
  9cb5fa:	00 
  9cb5fb:	4c 39 ff             	cmp    rdi,r15
  9cb5fe:	0f 83 7c 00 00 00    	jae    9cb680 <future_backtest::RunnerCore::run_multi+0x3d0>
  9cb604:	49 89 fb             	mov    r11,rdi
  9cb607:	49 c1 e3 0b          	shl    r11,0xb
  9cb60b:	49 8d 1c fb          	lea    rbx,[r11+rdi*8]
  9cb60f:	4c 01 c3             	add    rbx,r8
  9cb612:	4d 89 c3             	mov    r11,r8
  9cb615:	4c 89 d7             	mov    rdi,r10
  9cb618:	0f 1f 84 00 00 00 00 	nop    DWORD PTR [rax+rax*1+0x0]
  9cb61f:	00 
  9cb620:	48 39 f9             	cmp    rcx,rdi
  9cb623:	74 64                	je     9cb689 <future_backtest::RunnerCore::run_multi+0x3d9>
  9cb625:	48 89 bc 24 e0 05 00 	mov    QWORD PTR [rsp+0x5e0],rdi
  9cb62c:	00 
  9cb62d:	f2 0f 10 93 f0 04 00 	movsd  xmm2,QWORD PTR [rbx+0x4f0]
  9cb634:	00 
  9cb635:	f2 0f 58 93 f8 04 00 	addsd  xmm2,QWORD PTR [rbx+0x4f8]
  9cb63c:	00 
  9cb63d:	f2 0f 11 94 24 38 0e 	movsd  QWORD PTR [rsp+0xe38],xmm2
  9cb644:	00 00 
  9cb646:	4c 39 ff             	cmp    rdi,r15
  9cb649:	0f 83 81 87 00 00    	jae    9d3dd0 <future_backtest::RunnerCore::run_multi+0x8b20>
  9cb64f:	f2 43 0f 10 9c 0b f8 	movsd  xmm3,QWORD PTR [r11+r9*1+0xcf8]
  9cb656:	0c 00 00 
  9cb659:	f2 43 0f 58 9c 0b 00 	addsd  xmm3,QWORD PTR [r11+r9*1+0xd00]
  9cb660:	0d 00 00 
  9cb663:	f2 0f 5c d3          	subsd  xmm2,xmm3
  9cb667:	66 0f 54 d0          	andpd  xmm2,xmm0
  9cb66b:	49 81 c3 08 08 00 00 	add    r11,0x808
  9cb672:	48 ff c7             	inc    rdi
  9cb675:	66 0f 2e ca          	ucomisd xmm1,xmm2
  9cb679:	76 a5                	jbe    9cb620 <future_backtest::RunnerCore::run_multi+0x370>
  9cb67b:	e9 9b 08 00 00       	jmp    9cbf1b <future_backtest::RunnerCore::run_multi+0xc6b>
  9cb680:	49 39 ca             	cmp    r10,rcx
  9cb683:	0f 82 15 87 00 00    	jb     9d3d9e <future_backtest::RunnerCore::run_multi+0x8aee>
  9cb689:	4d 8d 5a 01          	lea    r11,[r10+0x1]
  9cb68d:	48 05 f8 f7 ff ff    	add    rax,0xfffffffffffff7f8
  9cb693:	48 81 c6 f8 f7 ff ff 	add    rsi,0xfffffffffffff7f8
  9cb69a:	49 81 c1 08 08 00 00 	add    r9,0x808
  9cb6a1:	49 39 ca             	cmp    r10,rcx
  9cb6a4:	0f 85 43 ff ff ff    	jne    9cb5ed <future_backtest::RunnerCore::run_multi+0x33d>
  9cb6aa:	4d 85 ff             	test   r15,r15
  9cb6ad:	0f 84 11 87 00 00    	je     9d3dc4 <future_backtest::RunnerCore::run_multi+0x8b14>
  9cb6b3:	48 8b 84 24 d8 00 00 	mov    rax,QWORD PTR [rsp+0xd8]
  9cb6ba:	00 
  9cb6bb:	0f b6 80 f4 07 00 00 	movzx  eax,BYTE PTR [rax+0x7f4]
  9cb6c2:	88 84 24 b8 00 00 00 	mov    BYTE PTR [rsp+0xb8],al
  9cb6c9:	40 b5 01             	mov    bpl,0x1
  9cb6cc:	48 8d bc 24 d0 11 00 	lea    rdi,[rsp+0x11d0]
  9cb6d3:	00 
  9cb6d4:	e8 87 d4 00 00       	call   9d8b60 <<future_backtest::Exchange::exchange::Exchange as core::default::Default>::default>
  9cb6d9:	48 8d 9c 24 28 06 00 	lea    rbx,[rsp+0x628]
  9cb6e0:	00 
  9cb6e1:	48 8d b4 24 d0 11 00 	lea    rsi,[rsp+0x11d0]
  9cb6e8:	00 
  9cb6e9:	ba 98 01 00 00       	mov    edx,0x198
  9cb6ee:	48 89 df             	mov    rdi,rbx
  9cb6f1:	ff 15 51 b4 fd 00    	call   QWORD PTR [rip+0xfdb451]        # 19a6b48 <memcpy@GLIBC_2.14>
  9cb6f7:	48 c7 84 24 10 06 00 	mov    QWORD PTR [rsp+0x610],0x1
  9cb6fe:	00 01 00 00 00 
  9cb703:	48 c7 84 24 18 06 00 	mov    QWORD PTR [rsp+0x618],0x1
  9cb70a:	00 01 00 00 00 
  9cb70f:	48 c7 84 24 20 06 00 	mov    QWORD PTR [rsp+0x620],0x0
  9cb716:	00 00 00 00 00 
  9cb71b:	ff 15 1f b3 fd 00    	call   QWORD PTR [rip+0xfdb31f]        # 19a6a40 <_DYNAMIC+0x240>
  9cb721:	bf b0 01 00 00       	mov    edi,0x1b0
  9cb726:	be 08 00 00 00       	mov    esi,0x8
  9cb72b:	ff 15 e7 b2 fd 00    	call   QWORD PTR [rip+0xfdb2e7]        # 19a6a18 <_DYNAMIC+0x218>
  9cb731:	48 85 c0             	test   rax,rax
  9cb734:	0f 84 89 6b 00 00    	je     9d22c3 <future_backtest::RunnerCore::run_multi+0x7013>
  9cb73a:	49 89 c6             	mov    r14,rax
  9cb73d:	48 8d b4 24 10 06 00 	lea    rsi,[rsp+0x610]
  9cb744:	00 
  9cb745:	ba b0 01 00 00       	mov    edx,0x1b0
  9cb74a:	48 89 c7             	mov    rdi,rax
  9cb74d:	ff 15 f5 b3 fd 00    	call   QWORD PTR [rip+0xfdb3f5]        # 19a6b48 <memcpy@GLIBC_2.14>
  9cb753:	4c 89 74 24 18       	mov    QWORD PTR [rsp+0x18],r14
  9cb758:	4c 89 b4 24 58 03 00 	mov    QWORD PTR [rsp+0x358],r14
  9cb75f:	00 
  9cb760:	64 48 8b 04 25 00 00 	mov    rax,QWORD PTR fs:0x0
  9cb767:	00 00 
  9cb769:	48 8d 80 d0 ff ff ff 	lea    rax,[rax-0x30]
  9cb770:	0f b6 70 10          	movzx  esi,BYTE PTR [rax+0x10]
  9cb774:	40 84 f6             	test   sil,sil
  9cb777:	48 89 44 24 68       	mov    QWORD PTR [rsp+0x68],rax
  9cb77c:	0f 84 75 6b 00 00    	je     9d22f7 <future_backtest::RunnerCore::run_multi+0x7047>
  9cb782:	49 89 c4             	mov    r12,rax
  9cb785:	48 8b 00             	mov    rax,QWORD PTR [rax]
  9cb788:	49 8b 54 24 08       	mov    rdx,QWORD PTR [r12+0x8]
  9cb78d:	48 8d 48 01          	lea    rcx,[rax+0x1]
  9cb791:	49 89 0c 24          	mov    QWORD PTR [r12],rcx
  9cb795:	0f 10 05 bc ee f2 00 	movups xmm0,XMMWORD PTR [rip+0xf2eebc]        # 18fa658 <anon.609a31ba814f1e4156e50677fc366a7f.248.llvm.5215769359700358943+0x90>
  9cb79c:	0f 29 84 24 e0 11 00 	movaps XMMWORD PTR [rsp+0x11e0],xmm0
  9cb7a3:	00 
  9cb7a4:	f3 0f 6f 05 9c ee f2 	movdqu xmm0,XMMWORD PTR [rip+0xf2ee9c]        # 18fa648 <anon.609a31ba814f1e4156e50677fc366a7f.248.llvm.5215769359700358943+0x80>
  9cb7ab:	00 
  9cb7ac:	66 0f 7f 84 24 d0 11 	movdqa XMMWORD PTR [rsp+0x11d0],xmm0
  9cb7b3:	00 00 
  9cb7b5:	48 89 84 24 f0 11 00 	mov    QWORD PTR [rsp+0x11f0],rax
  9cb7bc:	00 
  9cb7bd:	48 89 94 24 f8 11 00 	mov    QWORD PTR [rsp+0x11f8],rdx
  9cb7c4:	00 
  9cb7c5:	40 84 f6             	test   sil,sil
  9cb7c8:	0f 84 0a 6b 00 00    	je     9d22d8 <future_backtest::RunnerCore::run_multi+0x7028>
  9cb7ce:	48 8d 41 01          	lea    rax,[rcx+0x1]
  9cb7d2:	49 89 04 24          	mov    QWORD PTR [r12],rax
  9cb7d6:	66 0f 6f 84 24 d0 11 	movdqa xmm0,XMMWORD PTR [rsp+0x11d0]
  9cb7dd:	00 00 
  9cb7df:	66 0f 28 8c 24 e0 11 	movapd xmm1,XMMWORD PTR [rsp+0x11e0]
  9cb7e6:	00 00 
  9cb7e8:	48 8b bc 24 f0 11 00 	mov    rdi,QWORD PTR [rsp+0x11f0]
  9cb7ef:	00 
  9cb7f0:	48 89 bc 24 30 06 00 	mov    QWORD PTR [rsp+0x630],rdi
  9cb7f7:	00 
  9cb7f8:	48 8b bc 24 f8 11 00 	mov    rdi,QWORD PTR [rsp+0x11f8]
  9cb7ff:	00 
  9cb800:	48 89 bc 24 38 06 00 	mov    QWORD PTR [rsp+0x638],rdi
  9cb807:	00 
  9cb808:	66 0f 29 8c 24 20 06 	movapd XMMWORD PTR [rsp+0x620],xmm1
  9cb80f:	00 00 
  9cb811:	66 0f 7f 84 24 10 06 	movdqa XMMWORD PTR [rsp+0x610],xmm0
  9cb818:	00 00 
  9cb81a:	0f 10 35 27 ee f2 00 	movups xmm6,XMMWORD PTR [rip+0xf2ee27]        # 18fa648 <anon.609a31ba814f1e4156e50677fc366a7f.248.llvm.5215769359700358943+0x80>
  9cb821:	0f 29 b4 24 40 06 00 	movaps XMMWORD PTR [rsp+0x640],xmm6
  9cb828:	00 
  9cb829:	0f 10 3d 28 ee f2 00 	movups xmm7,XMMWORD PTR [rip+0xf2ee28]        # 18fa658 <anon.609a31ba814f1e4156e50677fc366a7f.248.llvm.5215769359700358943+0x90>
  9cb830:	0f 29 bc 24 50 06 00 	movaps XMMWORD PTR [rsp+0x650],xmm7
  9cb837:	00 
  9cb838:	48 89 8c 24 60 06 00 	mov    QWORD PTR [rsp+0x660],rcx
  9cb83f:	00 
  9cb840:	48 89 94 24 68 06 00 	mov    QWORD PTR [rsp+0x668],rdx
  9cb847:	00 
  9cb848:	40 84 f6             	test   sil,sil
  9cb84b:	0f 84 01 6b 00 00    	je     9d2352 <future_backtest::RunnerCore::run_multi+0x70a2>
  9cb851:	48 8d 48 01          	lea    rcx,[rax+0x1]
  9cb855:	49 89 0c 24          	mov    QWORD PTR [r12],rcx
  9cb859:	66 0f 6f 84 24 60 06 	movdqa xmm0,XMMWORD PTR [rsp+0x660]
  9cb860:	00 00 
  9cb862:	66 0f 7f 84 24 20 12 	movdqa XMMWORD PTR [rsp+0x1220],xmm0
  9cb869:	00 00 
  9cb86b:	66 0f 6f 8c 24 50 06 	movdqa xmm1,XMMWORD PTR [rsp+0x650]
  9cb872:	00 00 
  9cb874:	66 0f 7f 8c 24 10 12 	movdqa XMMWORD PTR [rsp+0x1210],xmm1
  9cb87b:	00 00 
  9cb87d:	66 0f 28 94 24 10 06 	movapd xmm2,XMMWORD PTR [rsp+0x610]
  9cb884:	00 00 
  9cb886:	66 0f 6f 9c 24 20 06 	movdqa xmm3,XMMWORD PTR [rsp+0x620]
  9cb88d:	00 00 
  9cb88f:	66 0f 28 a4 24 30 06 	movapd xmm4,XMMWORD PTR [rsp+0x630]
  9cb896:	00 00 
  9cb898:	66 0f 28 ac 24 40 06 	movapd xmm5,XMMWORD PTR [rsp+0x640]
  9cb89f:	00 00 
  9cb8a1:	66 0f 29 ac 24 00 12 	movapd XMMWORD PTR [rsp+0x1200],xmm5
  9cb8a8:	00 00 
  9cb8aa:	66 0f 29 a4 24 f0 11 	movapd XMMWORD PTR [rsp+0x11f0],xmm4
  9cb8b1:	00 00 
  9cb8b3:	66 0f 7f 9c 24 e0 11 	movdqa XMMWORD PTR [rsp+0x11e0],xmm3
  9cb8ba:	00 00 
  9cb8bc:	66 0f 29 94 24 d0 11 	movapd XMMWORD PTR [rsp+0x11d0],xmm2
  9cb8c3:	00 00 
  9cb8c5:	0f 29 b4 24 30 12 00 	movaps XMMWORD PTR [rsp+0x1230],xmm6
  9cb8cc:	00 
  9cb8cd:	0f 29 bc 24 40 12 00 	movaps XMMWORD PTR [rsp+0x1240],xmm7
  9cb8d4:	00 
  9cb8d5:	0f 11 bc 24 98 06 00 	movups XMMWORD PTR [rsp+0x698],xmm7
  9cb8dc:	00 
  9cb8dd:	0f 11 b4 24 88 06 00 	movups XMMWORD PTR [rsp+0x688],xmm6
  9cb8e4:	00 
  9cb8e5:	f3 0f 7f 84 24 78 06 	movdqu XMMWORD PTR [rsp+0x678],xmm0
  9cb8ec:	00 00 
  9cb8ee:	f3 0f 7f 8c 24 68 06 	movdqu XMMWORD PTR [rsp+0x668],xmm1
  9cb8f5:	00 00 
  9cb8f7:	66 0f 11 ac 24 58 06 	movupd XMMWORD PTR [rsp+0x658],xmm5
  9cb8fe:	00 00 
  9cb900:	66 0f 11 a4 24 48 06 	movupd XMMWORD PTR [rsp+0x648],xmm4
  9cb907:	00 00 
  9cb909:	f3 0f 7f 9c 24 38 06 	movdqu XMMWORD PTR [rsp+0x638],xmm3
  9cb910:	00 00 
  9cb912:	66 0f 11 94 24 28 06 	movupd XMMWORD PTR [rsp+0x628],xmm2
  9cb919:	00 00 
  9cb91b:	48 c7 84 24 10 06 00 	mov    QWORD PTR [rsp+0x610],0x1
  9cb922:	00 01 00 00 00 
  9cb927:	48 c7 84 24 18 06 00 	mov    QWORD PTR [rsp+0x618],0x1
  9cb92e:	00 01 00 00 00 
  9cb933:	48 c7 84 24 20 06 00 	mov    QWORD PTR [rsp+0x620],0x0
  9cb93a:	00 00 00 00 00 
  9cb93f:	48 89 84 24 a8 06 00 	mov    QWORD PTR [rsp+0x6a8],rax
  9cb946:	00 
  9cb947:	48 89 94 24 b0 06 00 	mov    QWORD PTR [rsp+0x6b0],rdx
  9cb94e:	00 
  9cb94f:	ff 15 eb b0 fd 00    	call   QWORD PTR [rip+0xfdb0eb]        # 19a6a40 <_DYNAMIC+0x240>
  9cb955:	bf a8 00 00 00       	mov    edi,0xa8
  9cb95a:	be 08 00 00 00       	mov    esi,0x8
  9cb95f:	ff 15 b3 b0 fd 00    	call   QWORD PTR [rip+0xfdb0b3]        # 19a6a18 <_DYNAMIC+0x218>
  9cb965:	48 85 c0             	test   rax,rax
  9cb968:	0f 84 11 6a 00 00    	je     9d237f <future_backtest::RunnerCore::run_multi+0x70cf>
  9cb96e:	48 89 c3             	mov    rbx,rax
  9cb971:	48 8d b4 24 10 06 00 	lea    rsi,[rsp+0x610]
  9cb978:	00 
  9cb979:	ba a8 00 00 00       	mov    edx,0xa8
  9cb97e:	48 89 c7             	mov    rdi,rax
  9cb981:	ff 15 c1 b1 fd 00    	call   QWORD PTR [rip+0xfdb1c1]        # 19a6b48 <memcpy@GLIBC_2.14>
  9cb987:	48 89 9c 24 88 00 00 	mov    QWORD PTR [rsp+0x88],rbx
  9cb98e:	00 
  9cb98f:	48 89 9c 24 60 03 00 	mov    QWORD PTR [rsp+0x360],rbx
  9cb996:	00 
  9cb997:	4c 8b b4 24 a8 00 00 	mov    r14,QWORD PTR [rsp+0xa8]
  9cb99e:	00 
  9cb99f:	b9 28 15 00 00       	mov    ecx,0x1528
  9cb9a4:	4c 89 f0             	mov    rax,r14
  9cb9a7:	48 f7 e1             	mul    rcx
  9cb9aa:	49 89 c7             	mov    r15,rax
  9cb9ad:	0f 90 c0             	seto   al
  9cb9b0:	4c 3b 7c 24 50       	cmp    r15,QWORD PTR [rsp+0x50]
  9cb9b5:	0f 97 c1             	seta   cl
  9cb9b8:	08 c1                	or     cl,al
  9cb9ba:	0f 84 85 07 00 00    	je     9cc145 <future_backtest::RunnerCore::run_multi+0xe95>
  9cb9c0:	45 31 e4             	xor    r12d,r12d
  9cb9c3:	b0 01                	mov    al,0x1
  9cb9c5:	89 44 24 20          	mov    DWORD PTR [rsp+0x20],eax
  9cb9c9:	48 8d 15 30 06 f3 00 	lea    rdx,[rip+0xf30630]        # 18fc000 <anon.609a31ba814f1e4156e50677fc366a7f.492.llvm.5215769359700358943+0xa08>
  9cb9d0:	4c 89 e7             	mov    rdi,r12
  9cb9d3:	4c 89 fe             	mov    rsi,r15
  9cb9d6:	ff 15 bc b1 fd 00    	call   QWORD PTR [rip+0xfdb1bc]        # 19a6b98 <_DYNAMIC+0x398>
  9cb9dc:	e9 1b 88 00 00       	jmp    9d41fc <future_backtest::RunnerCore::run_multi+0x8f4c>
  9cb9e1:	48 8d bc 24 10 06 00 	lea    rdi,[rsp+0x610]
  9cb9e8:	00 
  9cb9e9:	ba b8 00 00 00       	mov    edx,0xb8
  9cb9ee:	48 8b b4 24 48 03 00 	mov    rsi,QWORD PTR [rsp+0x348]
  9cb9f5:	00 
  9cb9f6:	ff 15 4c b1 fd 00    	call   QWORD PTR [rip+0xfdb14c]        # 19a6b48 <memcpy@GLIBC_2.14>
  9cb9fc:	4c 39 bc 24 a8 06 00 	cmp    QWORD PTR [rsp+0x6a8],r15
  9cba03:	00 
  9cba04:	0f 85 9f 66 00 00    	jne    9d20a9 <future_backtest::RunnerCore::run_multi+0x6df9>
  9cba0a:	4d 85 ff             	test   r15,r15
  9cba0d:	0f 84 dc 66 00 00    	je     9d20ef <future_backtest::RunnerCore::run_multi+0x6e3f>
  9cba13:	64 48 8b 04 25 00 00 	mov    rax,QWORD PTR fs:0x0
  9cba1a:	00 00 
  9cba1c:	48 8d 80 d0 ff ff ff 	lea    rax,[rax-0x30]
  9cba23:	49 89 c6             	mov    r14,rax
  9cba26:	0f b6 48 10          	movzx  ecx,BYTE PTR [rax+0x10]
  9cba2a:	84 c9                	test   cl,cl
  9cba2c:	0f 84 03 67 00 00    	je     9d2135 <future_backtest::RunnerCore::run_multi+0x6e85>
  9cba32:	49 8b 36             	mov    rsi,QWORD PTR [r14]
  9cba35:	49 8b 56 08          	mov    rdx,QWORD PTR [r14+0x8]
  9cba39:	48 8d 46 01          	lea    rax,[rsi+0x1]
  9cba3d:	49 89 06             	mov    QWORD PTR [r14],rax
  9cba40:	0f 10 05 c1 4e f3 00 	movups xmm0,XMMWORD PTR [rip+0xf34ec1]        # 1900908 <anon.306c05995557b157a5a4a5b5d20bb2f5.311.llvm.2664273085281908480+0x10>
  9cba47:	0f 29 84 24 70 18 00 	movaps XMMWORD PTR [rsp+0x1870],xmm0
  9cba4e:	00 
  9cba4f:	66 0f 10 05 a1 4e f3 	movupd xmm0,XMMWORD PTR [rip+0xf34ea1]        # 19008f8 <anon.306c05995557b157a5a4a5b5d20bb2f5.311.llvm.2664273085281908480>
  9cba56:	00 
  9cba57:	66 0f 29 84 24 60 18 	movapd XMMWORD PTR [rsp+0x1860],xmm0
  9cba5e:	00 00 
  9cba60:	48 89 b4 24 80 18 00 	mov    QWORD PTR [rsp+0x1880],rsi
  9cba67:	00 
  9cba68:	48 89 94 24 88 18 00 	mov    QWORD PTR [rsp+0x1888],rdx
  9cba6f:	00 
  9cba70:	84 c9                	test   cl,cl
  9cba72:	0f 84 0a 67 00 00    	je     9d2182 <future_backtest::RunnerCore::run_multi+0x6ed2>
  9cba78:	48 8d 48 01          	lea    rcx,[rax+0x1]
  9cba7c:	49 89 0e             	mov    QWORD PTR [r14],rcx
  9cba7f:	0f 10 05 82 4e f3 00 	movups xmm0,XMMWORD PTR [rip+0xf34e82]        # 1900908 <anon.306c05995557b157a5a4a5b5d20bb2f5.311.llvm.2664273085281908480+0x10>
  9cba86:	0f 29 84 24 f0 0e 00 	movaps XMMWORD PTR [rsp+0xef0],xmm0
  9cba8d:	00 
  9cba8e:	66 0f 10 05 62 4e f3 	movupd xmm0,XMMWORD PTR [rip+0xf34e62]        # 19008f8 <anon.306c05995557b157a5a4a5b5d20bb2f5.311.llvm.2664273085281908480>
  9cba95:	00 
  9cba96:	66 0f 29 84 24 e0 0e 	movapd XMMWORD PTR [rsp+0xee0],xmm0
  9cba9d:	00 00 
  9cba9f:	48 89 84 24 00 0f 00 	mov    QWORD PTR [rsp+0xf00],rax
  9cbaa6:	00 
  9cbaa7:	48 89 94 24 08 0f 00 	mov    QWORD PTR [rsp+0xf08],rdx
  9cbaae:	00 
  9cbaaf:	4c 89 f8             	mov    rax,r15
  9cbab2:	48 c1 e0 0b          	shl    rax,0xb
  9cbab6:	4a 8d 04 f8          	lea    rax,[rax+r15*8]
  9cbaba:	48 01 d8             	add    rax,rbx
  9cbabd:	48 89 84 24 90 00 00 	mov    QWORD PTR [rsp+0x90],rax
  9cbac4:	00 
  9cbac5:	48 8b 84 24 a0 06 00 	mov    rax,QWORD PTR [rsp+0x6a0]
  9cbacc:	00 
  9cbacd:	48 89 44 24 20       	mov    QWORD PTR [rsp+0x20],rax
  9cbad2:	48 8d 43 10          	lea    rax,[rbx+0x10]
  9cbad6:	48 89 84 24 80 00 00 	mov    QWORD PTR [rsp+0x80],rax
  9cbadd:	00 
  9cbade:	45 31 ed             	xor    r13d,r13d
  9cbae1:	48 89 d9             	mov    rcx,rbx
  9cbae4:	4c 89 ac 24 a0 03 00 	mov    QWORD PTR [rsp+0x3a0],r13
  9cbaeb:	00 
  9cbaec:	4c 89 ac 24 c8 00 00 	mov    QWORD PTR [rsp+0xc8],r13
  9cbaf3:	00 
  9cbaf4:	4d 39 fd             	cmp    r13,r15
  9cbaf7:	0f 84 89 82 00 00    	je     9d3d86 <future_backtest::RunnerCore::run_multi+0x8ad6>
  9cbafd:	4c 8b 71 60          	mov    r14,QWORD PTR [rcx+0x60]
  9cbb01:	48 89 8c 24 88 00 00 	mov    QWORD PTR [rsp+0x88],rcx
  9cbb08:	00 
  9cbb09:	48 8b 69 68          	mov    rbp,QWORD PTR [rcx+0x68]
  9cbb0d:	4c 89 f7             	mov    rdi,r14
  9cbb10:	48 89 ee             	mov    rsi,rbp
  9cbb13:	e8 38 81 d4 ff       	call   713c50 <core::str::<impl str>::trim_matches>
  9cbb18:	48 8b 84 24 c8 00 00 	mov    rax,QWORD PTR [rsp+0xc8]
  9cbb1f:	00 
  9cbb20:	48 8d 04 80          	lea    rax,[rax+rax*4]
  9cbb24:	48 c1 e0 04          	shl    rax,0x4
  9cbb28:	48 03 44 24 20       	add    rax,QWORD PTR [rsp+0x20]
  9cbb2d:	48 89 44 24 18       	mov    QWORD PTR [rsp+0x18],rax
  9cbb32:	48 85 d2             	test   rdx,rdx
  9cbb35:	0f 84 44 1a 00 00    	je     9cd57f <future_backtest::RunnerCore::run_multi+0x22cf>
  9cbb3b:	48 8b 84 24 88 00 00 	mov    rax,QWORD PTR [rsp+0x88]
  9cbb42:	00 
  9cbb43:	4c 8b 68 78          	mov    r13,QWORD PTR [rax+0x78]
  9cbb47:	4c 8b a0 80 00 00 00 	mov    r12,QWORD PTR [rax+0x80]
  9cbb4e:	4c 89 ef             	mov    rdi,r13
  9cbb51:	4c 89 e6             	mov    rsi,r12
  9cbb54:	e8 f7 80 d4 ff       	call   713c50 <core::str::<impl str>::trim_matches>
  9cbb59:	48 85 d2             	test   rdx,rdx
  9cbb5c:	0f 84 1d 1a 00 00    	je     9cd57f <future_backtest::RunnerCore::run_multi+0x22cf>
  9cbb62:	4c 89 b4 24 c0 01 00 	mov    QWORD PTR [rsp+0x1c0],r14
  9cbb69:	00 
  9cbb6a:	48 89 ac 24 c8 01 00 	mov    QWORD PTR [rsp+0x1c8],rbp
  9cbb71:	00 
  9cbb72:	4c 89 ac 24 d0 01 00 	mov    QWORD PTR [rsp+0x1d0],r13
  9cbb79:	00 
  9cbb7a:	4c 89 a4 24 d8 01 00 	mov    QWORD PTR [rsp+0x1d8],r12
  9cbb81:	00 
  9cbb82:	48 8b 84 24 d0 01 00 	mov    rax,QWORD PTR [rsp+0x1d0]
  9cbb89:	00 
  9cbb8a:	48 89 84 24 e0 11 00 	mov    QWORD PTR [rsp+0x11e0],rax
  9cbb91:	00 
  9cbb92:	48 8b 84 24 d8 01 00 	mov    rax,QWORD PTR [rsp+0x1d8]
  9cbb99:	00 
  9cbb9a:	48 89 84 24 e8 11 00 	mov    QWORD PTR [rsp+0x11e8],rax
  9cbba1:	00 
  9cbba2:	48 8b 84 24 c0 01 00 	mov    rax,QWORD PTR [rsp+0x1c0]
  9cbba9:	00 
  9cbbaa:	48 89 84 24 d0 11 00 	mov    QWORD PTR [rsp+0x11d0],rax
  9cbbb1:	00 
  9cbbb2:	48 8b 84 24 c8 01 00 	mov    rax,QWORD PTR [rsp+0x1c8]
  9cbbb9:	00 
  9cbbba:	48 89 84 24 d8 11 00 	mov    QWORD PTR [rsp+0x11d8],rax
  9cbbc1:	00 
  9cbbc2:	48 8d bc 24 60 18 00 	lea    rdi,[rsp+0x1860]
  9cbbc9:	00 
  9cbbca:	48 8d b4 24 d0 11 00 	lea    rsi,[rsp+0x11d0]
  9cbbd1:	00 
  9cbbd2:	e8 79 29 05 00       	call   a1e550 <hashbrown::map::HashMap<K,V,S,A>::insert>
  9cbbd7:	84 c0                	test   al,al
  9cbbd9:	0f 85 8f 2b 00 00    	jne    9ce76e <future_backtest::RunnerCore::run_multi+0x34be>
  9cbbdf:	48 8b 84 24 88 00 00 	mov    rax,QWORD PTR [rsp+0x88]
  9cbbe6:	00 
  9cbbe7:	80 b8 fb 07 00 00 00 	cmp    BYTE PTR [rax+0x7fb],0x0
  9cbbee:	74 0e                	je     9cbbfe <future_backtest::RunnerCore::run_multi+0x94e>
  9cbbf0:	80 b8 ff 07 00 00 01 	cmp    BYTE PTR [rax+0x7ff],0x1
  9cbbf7:	75 1a                	jne    9cbc13 <future_backtest::RunnerCore::run_multi+0x963>
  9cbbf9:	e9 92 2d 00 00       	jmp    9ce990 <future_backtest::RunnerCore::run_multi+0x36e0>
  9cbbfe:	48 8b 44 24 18       	mov    rax,QWORD PTR [rsp+0x18]
  9cbc03:	8b 70 48             	mov    esi,DWORD PTR [rax+0x48]
  9cbc06:	48 8d bc 24 e0 0e 00 	lea    rdi,[rsp+0xee0]
  9cbc0d:	00 
  9cbc0e:	e8 2d 0d 05 00       	call   a1c940 <hashbrown::map::HashMap<K,V,S,A>::insert>
  9cbc13:	4c 8b b4 24 88 00 00 	mov    r14,QWORD PTR [rsp+0x88]
  9cbc1a:	00 
  9cbc1b:	49 8b 96 30 01 00 00 	mov    rdx,QWORD PTR [r14+0x130]
  9cbc22:	48 3b 93 30 01 00 00 	cmp    rdx,QWORD PTR [rbx+0x130]
  9cbc29:	0f 85 4c 05 00 00    	jne    9cc17b <future_backtest::RunnerCore::run_multi+0xecb>
  9cbc2f:	48 8b b3 28 01 00 00 	mov    rsi,QWORD PTR [rbx+0x128]
  9cbc36:	49 8b be 28 01 00 00 	mov    rdi,QWORD PTR [r14+0x128]
  9cbc3d:	ff 15 75 b2 fd 00    	call   QWORD PTR [rip+0xfdb275]        # 19a6eb8 <bcmp@GLIBC_2.2.5>
  9cbc43:	85 c0                	test   eax,eax
  9cbc45:	0f 85 30 05 00 00    	jne    9cc17b <future_backtest::RunnerCore::run_multi+0xecb>
  9cbc4b:	49 8b 96 78 01 00 00 	mov    rdx,QWORD PTR [r14+0x178]
  9cbc52:	48 3b 93 78 01 00 00 	cmp    rdx,QWORD PTR [rbx+0x178]
  9cbc59:	0f 85 1c 05 00 00    	jne    9cc17b <future_backtest::RunnerCore::run_multi+0xecb>
  9cbc5f:	48 8b b3 70 01 00 00 	mov    rsi,QWORD PTR [rbx+0x170]
  9cbc66:	49 8b be 70 01 00 00 	mov    rdi,QWORD PTR [r14+0x170]
  9cbc6d:	ff 15 45 b2 fd 00    	call   QWORD PTR [rip+0xfdb245]        # 19a6eb8 <bcmp@GLIBC_2.2.5>
  9cbc73:	85 c0                	test   eax,eax
  9cbc75:	0f 85 00 05 00 00    	jne    9cc17b <future_backtest::RunnerCore::run_multi+0xecb>
  9cbc7b:	41 0f b6 86 f9 07 00 	movzx  eax,BYTE PTR [r14+0x7f9]
  9cbc82:	00 
  9cbc83:	3a 83 f9 07 00 00    	cmp    al,BYTE PTR [rbx+0x7f9]
  9cbc89:	0f 85 ec 04 00 00    	jne    9cc17b <future_backtest::RunnerCore::run_multi+0xecb>
  9cbc8f:	41 0f b6 86 f4 07 00 	movzx  eax,BYTE PTR [r14+0x7f4]
  9cbc96:	00 
  9cbc97:	3a 83 f4 07 00 00    	cmp    al,BYTE PTR [rbx+0x7f4]
  9cbc9d:	0f 85 d8 04 00 00    	jne    9cc17b <future_backtest::RunnerCore::run_multi+0xecb>
  9cbca3:	4d 8b a6 c0 06 00 00 	mov    r12,QWORD PTR [r14+0x6c0]
  9cbcaa:	4c 89 e0             	mov    rax,r12
  9cbcad:	48 b9 ff ff ff ff ff 	movabs rcx,0x7fffffffffffffff
  9cbcb4:	ff ff 7f 
  9cbcb7:	48 21 c8             	and    rax,rcx
  9cbcba:	48 ba ff ff ff ff ff 	movabs rdx,0x7fefffffffffffff
  9cbcc1:	ff ef 7f 
  9cbcc4:	48 39 d0             	cmp    rax,rdx
  9cbcc7:	0f 8f ea 17 00 00    	jg     9cd4b7 <future_backtest::RunnerCore::run_multi+0x2207>
  9cbccd:	4d 8b ae c8 06 00 00 	mov    r13,QWORD PTR [r14+0x6c8]
  9cbcd4:	4c 89 e8             	mov    rax,r13
  9cbcd7:	48 21 c8             	and    rax,rcx
  9cbcda:	48 ba 00 00 00 00 00 	movabs rdx,0x7ff0000000000000
  9cbce1:	00 f0 7f 
  9cbce4:	48 39 d0             	cmp    rax,rdx
  9cbce7:	0f 8d ca 17 00 00    	jge    9cd4b7 <future_backtest::RunnerCore::run_multi+0x2207>
  9cbced:	49 8b 96 d8 03 00 00 	mov    rdx,QWORD PTR [r14+0x3d8]
  9cbcf4:	48 89 d0             	mov    rax,rdx
  9cbcf7:	48 21 c8             	and    rax,rcx
  9cbcfa:	48 b9 ff ff ff ff ff 	movabs rcx,0x7fefffffffffffff
  9cbd01:	ff ef 7f 
  9cbd04:	48 39 c8             	cmp    rax,rcx
  9cbd07:	0f 8f aa 17 00 00    	jg     9cd4b7 <future_backtest::RunnerCore::run_multi+0x2207>
  9cbd0d:	48 89 54 24 70       	mov    QWORD PTR [rsp+0x70],rdx
  9cbd12:	49 8d 76 10          	lea    rsi,[r14+0x10]
  9cbd16:	48 8d bc 24 80 1b 00 	lea    rdi,[rsp+0x1b80]
  9cbd1d:	00 
  9cbd1e:	ff 15 64 c5 fd 00    	call   QWORD PTR [rip+0xfdc564]        # 19a8288 <_DYNAMIC+0x1a88>
  9cbd24:	48 8d bc 24 d0 11 00 	lea    rdi,[rsp+0x11d0]
  9cbd2b:	00 
  9cbd2c:	48 8b b4 24 80 00 00 	mov    rsi,QWORD PTR [rsp+0x80]
  9cbd33:	00 
  9cbd34:	ff 15 4e c5 fd 00    	call   QWORD PTR [rip+0xfdc54e]        # 19a8288 <_DYNAMIC+0x1a88>
  9cbd3a:	4c 8b b4 24 88 1b 00 	mov    r14,QWORD PTR [rsp+0x1b88]
  9cbd41:	00 
  9cbd42:	48 8b 94 24 90 1b 00 	mov    rdx,QWORD PTR [rsp+0x1b90]
  9cbd49:	00 
  9cbd4a:	48 8b ac 24 d8 11 00 	mov    rbp,QWORD PTR [rsp+0x11d8]
  9cbd51:	00 
  9cbd52:	48 3b 94 24 e0 11 00 	cmp    rdx,QWORD PTR [rsp+0x11e0]
  9cbd59:	00 
  9cbd5a:	0f 85 9c 18 00 00    	jne    9cd5fc <future_backtest::RunnerCore::run_multi+0x234c>
  9cbd60:	4c 89 f7             	mov    rdi,r14
  9cbd63:	48 89 ee             	mov    rsi,rbp
  9cbd66:	ff 15 4c b1 fd 00    	call   QWORD PTR [rip+0xfdb14c]        # 19a6eb8 <bcmp@GLIBC_2.2.5>
  9cbd6c:	85 c0                	test   eax,eax
  9cbd6e:	0f 85 88 18 00 00    	jne    9cd5fc <future_backtest::RunnerCore::run_multi+0x234c>
  9cbd74:	48 8b b4 24 d0 11 00 	mov    rsi,QWORD PTR [rsp+0x11d0]
  9cbd7b:	00 
  9cbd7c:	48 85 f6             	test   rsi,rsi
  9cbd7f:	74 0e                	je     9cbd8f <future_backtest::RunnerCore::run_multi+0xadf>
  9cbd81:	ba 01 00 00 00       	mov    edx,0x1
  9cbd86:	48 89 ef             	mov    rdi,rbp
  9cbd89:	ff 15 91 ac fd 00    	call   QWORD PTR [rip+0xfdac91]        # 19a6a20 <_DYNAMIC+0x220>
  9cbd8f:	48 8b b4 24 80 1b 00 	mov    rsi,QWORD PTR [rsp+0x1b80]
  9cbd96:	00 
  9cbd97:	48 85 f6             	test   rsi,rsi
  9cbd9a:	74 0e                	je     9cbdaa <future_backtest::RunnerCore::run_multi+0xafa>
  9cbd9c:	ba 01 00 00 00       	mov    edx,0x1
  9cbda1:	4c 89 f7             	mov    rdi,r14
  9cbda4:	ff 15 76 ac fd 00    	call   QWORD PTR [rip+0xfdac76]        # 19a6a20 <_DYNAMIC+0x220>
  9cbdaa:	4c 39 a3 c0 06 00 00 	cmp    QWORD PTR [rbx+0x6c0],r12
  9cbdb1:	48 8b 94 24 88 00 00 	mov    rdx,QWORD PTR [rsp+0x88]
  9cbdb8:	00 
  9cbdb9:	0f 85 73 18 00 00    	jne    9cd632 <future_backtest::RunnerCore::run_multi+0x2382>
  9cbdbf:	4c 39 ab c8 06 00 00 	cmp    QWORD PTR [rbx+0x6c8],r13
  9cbdc6:	0f 85 66 18 00 00    	jne    9cd632 <future_backtest::RunnerCore::run_multi+0x2382>
  9cbdcc:	48 8b 44 24 70       	mov    rax,QWORD PTR [rsp+0x70]
  9cbdd1:	48 39 83 d8 03 00 00 	cmp    QWORD PTR [rbx+0x3d8],rax
  9cbdd8:	0f 85 54 18 00 00    	jne    9cd632 <future_backtest::RunnerCore::run_multi+0x2382>
  9cbdde:	48 8b 8a 18 01 00 00 	mov    rcx,QWORD PTR [rdx+0x118]
  9cbde5:	48 83 f9 01          	cmp    rcx,0x1
  9cbde9:	48 89 c8             	mov    rax,rcx
  9cbdec:	48 83 d0 00          	adc    rax,0x0
  9cbdf0:	48 85 c9             	test   rcx,rcx
  9cbdf3:	74 09                	je     9cbdfe <future_backtest::RunnerCore::run_multi+0xb4e>
  9cbdf5:	4c 8b b2 10 01 00 00 	mov    r14,QWORD PTR [rdx+0x110]
  9cbdfc:	eb 07                	jmp    9cbe05 <future_backtest::RunnerCore::run_multi+0xb55>
  9cbdfe:	4c 8d b2 f0 00 00 00 	lea    r14,[rdx+0xf0]
  9cbe05:	4c 8b ac 24 c8 00 00 	mov    r13,QWORD PTR [rsp+0xc8]
  9cbe0c:	00 
  9cbe0d:	48 81 c2 08 08 00 00 	add    rdx,0x808
  9cbe14:	48 89 94 24 88 00 00 	mov    QWORD PTR [rsp+0x88],rdx
  9cbe1b:	00 
  9cbe1c:	49 ff c5             	inc    r13
  9cbe1f:	48 8b 4c 24 18       	mov    rcx,QWORD PTR [rsp+0x18]
  9cbe24:	8b 69 48             	mov    ebp,DWORD PTR [rcx+0x48]
  9cbe27:	48 c1 e0 03          	shl    rax,0x3
  9cbe2b:	4c 8d 24 40          	lea    r12,[rax+rax*2]
  9cbe2f:	90                   	nop
  9cbe30:	4d 85 e4             	test   r12,r12
  9cbe33:	0f 84 74 02 00 00    	je     9cc0ad <future_backtest::RunnerCore::run_multi+0xdfd>
  9cbe39:	49 8b 7e 08          	mov    rdi,QWORD PTR [r14+0x8]
  9cbe3d:	49 8b 76 10          	mov    rsi,QWORD PTR [r14+0x10]
  9cbe41:	ff 15 d9 b8 fd 00    	call   QWORD PTR [rip+0xfdb8d9]        # 19a7720 <_DYNAMIC+0xf20>
  9cbe47:	49 83 c6 18          	add    r14,0x18
  9cbe4b:	49 83 c4 e8          	add    r12,0xffffffffffffffe8
  9cbe4f:	a8 01                	test   al,0x1
  9cbe51:	74 dd                	je     9cbe30 <future_backtest::RunnerCore::run_multi+0xb80>
  9cbe53:	39 ea                	cmp    edx,ebp
  9cbe55:	75 d9                	jne    9cbe30 <future_backtest::RunnerCore::run_multi+0xb80>
  9cbe57:	48 8b 8c 24 88 00 00 	mov    rcx,QWORD PTR [rsp+0x88]
  9cbe5e:	00 
  9cbe5f:	48 3b 8c 24 90 00 00 	cmp    rcx,QWORD PTR [rsp+0x90]
  9cbe66:	00 
  9cbe67:	0f 85 77 fc ff ff    	jne    9cbae4 <future_backtest::RunnerCore::run_multi+0x834>
  9cbe6d:	48 8d bc 24 d0 11 00 	lea    rdi,[rsp+0x11d0]
  9cbe74:	00 
  9cbe75:	48 8d b4 24 10 06 00 	lea    rsi,[rsp+0x610]
  9cbe7c:	00 
  9cbe7d:	ff 15 05 be fd 00    	call   QWORD PTR [rip+0xfdbe05]        # 19a7c88 <_DYNAMIC+0x1488>
  9cbe83:	48 8b 84 24 d0 11 00 	mov    rax,QWORD PTR [rsp+0x11d0]
  9cbe8a:	00 
  9cbe8b:	48 8b 8c 24 d8 11 00 	mov    rcx,QWORD PTR [rsp+0x11d8]
  9cbe92:	00 
  9cbe93:	31 d2                	xor    edx,edx
  9cbe95:	48 89 c6             	mov    rsi,rax
  9cbe98:	48 85 c0             	test   rax,rax
  9cbe9b:	0f 95 c2             	setne  dl
  9cbe9e:	74 08                	je     9cbea8 <future_backtest::RunnerCore::run_multi+0xbf8>
  9cbea0:	48 8b b4 24 e0 11 00 	mov    rsi,QWORD PTR [rsp+0x11e0]
  9cbea7:	00 
  9cbea8:	48 89 94 24 d0 11 00 	mov    QWORD PTR [rsp+0x11d0],rdx
  9cbeaf:	00 
  9cbeb0:	48 c7 84 24 d8 11 00 	mov    QWORD PTR [rsp+0x11d8],0x0
  9cbeb7:	00 00 00 00 00 
  9cbebc:	48 89 84 24 e0 11 00 	mov    QWORD PTR [rsp+0x11e0],rax
  9cbec3:	00 
  9cbec4:	48 89 8c 24 e8 11 00 	mov    QWORD PTR [rsp+0x11e8],rcx
  9cbecb:	00 
  9cbecc:	48 89 94 24 f0 11 00 	mov    QWORD PTR [rsp+0x11f0],rdx
  9cbed3:	00 
  9cbed4:	48 c7 84 24 f8 11 00 	mov    QWORD PTR [rsp+0x11f8],0x0
  9cbedb:	00 00 00 00 00 
  9cbee0:	48 89 84 24 00 12 00 	mov    QWORD PTR [rsp+0x1200],rax
  9cbee7:	00 
  9cbee8:	48 89 8c 24 08 12 00 	mov    QWORD PTR [rsp+0x1208],rcx
  9cbeef:	00 
  9cbef0:	48 89 b4 24 10 12 00 	mov    QWORD PTR [rsp+0x1210],rsi
  9cbef7:	00 
  9cbef8:	4c 8d ac 24 d0 11 00 	lea    r13,[rsp+0x11d0]
  9cbeff:	00 
  9cbf00:	4c 8d bc 24 00 05 00 	lea    r15,[rsp+0x500]
  9cbf07:	00 
  9cbf08:	e9 1b 2a 00 00       	jmp    9ce928 <future_backtest::RunnerCore::run_multi+0x3678>
  9cbf0d:	b0 01                	mov    al,0x1
  9cbf0f:	89 84 24 c8 00 00 00 	mov    DWORD PTR [rsp+0xc8],eax
  9cbf16:	e9 7f 2b 00 00       	jmp    9cea9a <future_backtest::RunnerCore::run_multi+0x37ea>
  9cbf1b:	48 8d 4b 58          	lea    rcx,[rbx+0x58]
  9cbf1f:	48 83 c3 70          	add    rbx,0x70
  9cbf23:	4c 89 da             	mov    rdx,r11
  9cbf26:	48 29 f2             	sub    rdx,rsi
  9cbf29:	49 29 c3             	sub    r11,rax
  9cbf2c:	48 8d 84 24 30 0e 00 	lea    rax,[rsp+0xe30]
  9cbf33:	00 
  9cbf34:	48 89 84 24 10 06 00 	mov    QWORD PTR [rsp+0x610],rax
  9cbf3b:	00 
  9cbf3c:	48 8b 35 ad ae fd 00 	mov    rsi,QWORD PTR [rip+0xfdaead]        # 19a6df0 <_DYNAMIC+0x5f0>
  9cbf43:	48 89 b4 24 18 06 00 	mov    QWORD PTR [rsp+0x618],rsi
  9cbf4a:	00 
  9cbf4b:	48 89 8c 24 20 06 00 	mov    QWORD PTR [rsp+0x620],rcx
  9cbf52:	00 
  9cbf53:	48 8d 05 e6 e7 fd ff 	lea    rax,[rip+0xfffffffffffde7e6]        # 9aa740 <<alloc::string::String as core::fmt::Display>::fmt>
  9cbf5a:	48 89 84 24 28 06 00 	mov    QWORD PTR [rsp+0x628],rax
  9cbf61:	00 
  9cbf62:	48 89 9c 24 30 06 00 	mov    QWORD PTR [rsp+0x630],rbx
  9cbf69:	00 
  9cbf6a:	48 89 84 24 38 06 00 	mov    QWORD PTR [rsp+0x638],rax
  9cbf71:	00 
  9cbf72:	48 8d 8c 24 e0 05 00 	lea    rcx,[rsp+0x5e0]
  9cbf79:	00 
  9cbf7a:	48 89 8c 24 40 06 00 	mov    QWORD PTR [rsp+0x640],rcx
  9cbf81:	00 
  9cbf82:	48 89 b4 24 48 06 00 	mov    QWORD PTR [rsp+0x648],rsi
  9cbf89:	00 
  9cbf8a:	48 89 94 24 50 06 00 	mov    QWORD PTR [rsp+0x650],rdx
  9cbf91:	00 
  9cbf92:	48 89 84 24 58 06 00 	mov    QWORD PTR [rsp+0x658],rax
  9cbf99:	00 
  9cbf9a:	4c 89 9c 24 60 06 00 	mov    QWORD PTR [rsp+0x660],r11
  9cbfa1:	00 
  9cbfa2:	48 89 84 24 68 06 00 	mov    QWORD PTR [rsp+0x668],rax
  9cbfa9:	00 
  9cbfaa:	48 8d 84 24 38 0e 00 	lea    rax,[rsp+0xe38]
  9cbfb1:	00 
  9cbfb2:	48 89 84 24 70 06 00 	mov    QWORD PTR [rsp+0x670],rax
  9cbfb9:	00 
  9cbfba:	48 8b 05 a7 b5 fd 00 	mov    rax,QWORD PTR [rip+0xfdb5a7]        # 19a7568 <_DYNAMIC+0xd68>
  9cbfc1:	48 89 84 24 78 06 00 	mov    QWORD PTR [rsp+0x678],rax
  9cbfc8:	00 
  9cbfc9:	48 8d 05 60 0c f3 00 	lea    rax,[rip+0xf30c60]        # 18fcc30 <anon.609a31ba814f1e4156e50677fc366a7f.492.llvm.5215769359700358943+0x1638>
  9cbfd0:	48 89 84 24 d0 11 00 	mov    QWORD PTR [rsp+0x11d0],rax
  9cbfd7:	00 
  9cbfd8:	48 c7 84 24 d8 11 00 	mov    QWORD PTR [rsp+0x11d8],0x8
  9cbfdf:	00 08 00 00 00 
  9cbfe4:	48 c7 84 24 f0 11 00 	mov    QWORD PTR [rsp+0x11f0],0x0
  9cbfeb:	00 00 00 00 00 
  9cbff0:	48 8d 84 24 10 06 00 	lea    rax,[rsp+0x610]
  9cbff7:	00 
  9cbff8:	48 89 84 24 e0 11 00 	mov    QWORD PTR [rsp+0x11e0],rax
  9cbfff:	00 
  9cc000:	48 c7 84 24 e8 11 00 	mov    QWORD PTR [rsp+0x11e8],0x7
  9cc007:	00 07 00 00 00 
  9cc00c:	40 b5 01             	mov    bpl,0x1
  9cc00f:	48 8d bc 24 38 1b 00 	lea    rdi,[rsp+0x1b38]
  9cc016:	00 
  9cc017:	48 8d b4 24 d0 11 00 	lea    rsi,[rsp+0x11d0]
  9cc01e:	00 
  9cc01f:	ff 15 5b ad fd 00    	call   QWORD PTR [rip+0xfdad5b]        # 19a6d80 <_DYNAMIC+0x580>
  9cc025:	40 b5 01             	mov    bpl,0x1
  9cc028:	48 8d bc 24 38 1b 00 	lea    rdi,[rsp+0x1b38]
  9cc02f:	00 
  9cc030:	e8 db ad 04 00       	call   a16e10 <anyhow::error::<impl anyhow::Error>::msg>
  9cc035:	49 89 c7             	mov    r15,rax
  9cc038:	48 b8 00 00 00 00 00 	movabs rax,0x8000000000000000
  9cc03f:	00 00 80 
  9cc042:	48 39 84 24 f0 19 00 	cmp    QWORD PTR [rsp+0x19f0],rax
  9cc049:	00 
  9cc04a:	0f 84 4a 2a 00 00    	je     9cea9a <future_backtest::RunnerCore::run_multi+0x37ea>
  9cc050:	40 84 ed             	test   bpl,bpl
  9cc053:	0f 84 41 2a 00 00    	je     9cea9a <future_backtest::RunnerCore::run_multi+0x37ea>
  9cc059:	48 8d bc 24 f0 19 00 	lea    rdi,[rsp+0x19f0]
  9cc060:	00 
  9cc061:	e8 9a 97 fd ff       	call   9a5800 <core::ptr::drop_in_place<future_backtest::MetaControl::config::MetaManifest>>
  9cc066:	48 8b 9c 24 a8 1a 00 	mov    rbx,QWORD PTR [rsp+0x1aa8]
  9cc06d:	00 
  9cc06e:	48 8b b4 24 c0 1a 00 	mov    rsi,QWORD PTR [rsp+0x1ac0]
  9cc075:	00 
  9cc076:	48 85 f6             	test   rsi,rsi
  9cc079:	0f 84 7c 01 00 00    	je     9cc1fb <future_backtest::RunnerCore::run_multi+0xf4b>
  9cc07f:	48 8b bc 24 b8 1a 00 	mov    rdi,QWORD PTR [rsp+0x1ab8]
  9cc086:	00 
  9cc087:	31 c0                	xor    eax,eax
  9cc089:	48 39 df             	cmp    rdi,rbx
  9cc08c:	48 0f 43 c3          	cmovae rax,rbx
  9cc090:	48 29 c7             	sub    rdi,rax
  9cc093:	48 89 d8             	mov    rax,rbx
  9cc096:	48 29 f8             	sub    rax,rdi
  9cc099:	49 89 f5             	mov    r13,rsi
  9cc09c:	49 29 c5             	sub    r13,rax
  9cc09f:	0f 86 8f 14 00 00    	jbe    9cd534 <future_backtest::RunnerCore::run_multi+0x2284>
  9cc0a5:	48 89 de             	mov    rsi,rbx
  9cc0a8:	e9 8d 14 00 00       	jmp    9cd53a <future_backtest::RunnerCore::run_multi+0x228a>
  9cc0ad:	48 8b 4c 24 18       	mov    rcx,QWORD PTR [rsp+0x18]
  9cc0b2:	48 89 8c 24 80 1b 00 	mov    QWORD PTR [rsp+0x1b80],rcx
  9cc0b9:	00 
  9cc0ba:	48 83 c1 48          	add    rcx,0x48
  9cc0be:	48 8d 05 7b e6 fd ff 	lea    rax,[rip+0xfffffffffffde67b]        # 9aa740 <<alloc::string::String as core::fmt::Display>::fmt>
  9cc0c5:	48 89 84 24 88 1b 00 	mov    QWORD PTR [rsp+0x1b88],rax
  9cc0cc:	00 
  9cc0cd:	48 89 8c 24 90 1b 00 	mov    QWORD PTR [rsp+0x1b90],rcx
  9cc0d4:	00 
  9cc0d5:	48 8b 05 fc b3 fd 00 	mov    rax,QWORD PTR [rip+0xfdb3fc]        # 19a74d8 <_DYNAMIC+0xcd8>
  9cc0dc:	48 89 84 24 98 1b 00 	mov    QWORD PTR [rsp+0x1b98],rax
  9cc0e3:	00 
  9cc0e4:	48 8d 05 e5 fc f2 00 	lea    rax,[rip+0xf2fce5]        # 18fbdd0 <anon.609a31ba814f1e4156e50677fc366a7f.492.llvm.5215769359700358943+0x7d8>
  9cc0eb:	48 89 84 24 d0 11 00 	mov    QWORD PTR [rsp+0x11d0],rax
  9cc0f2:	00 
  9cc0f3:	48 c7 84 24 d8 11 00 	mov    QWORD PTR [rsp+0x11d8],0x3
  9cc0fa:	00 03 00 00 00 
  9cc0ff:	48 c7 84 24 f0 11 00 	mov    QWORD PTR [rsp+0x11f0],0x0
  9cc106:	00 00 00 00 00 
  9cc10b:	48 8d 84 24 80 1b 00 	lea    rax,[rsp+0x1b80]
  9cc112:	00 
  9cc113:	48 89 84 24 e0 11 00 	mov    QWORD PTR [rsp+0x11e0],rax
  9cc11a:	00 
  9cc11b:	48 c7 84 24 e8 11 00 	mov    QWORD PTR [rsp+0x11e8],0x2
  9cc122:	00 02 00 00 00 
  9cc127:	48 8d 9c 24 a8 19 00 	lea    rbx,[rsp+0x19a8]
  9cc12e:	00 
  9cc12f:	48 8d b4 24 d0 11 00 	lea    rsi,[rsp+0x11d0]
  9cc136:	00 
  9cc137:	48 89 df             	mov    rdi,rbx
  9cc13a:	ff 15 40 ac fd 00    	call   QWORD PTR [rip+0xfdac40]        # 19a6d80 <_DYNAMIC+0x580>
  9cc140:	e9 c3 28 00 00       	jmp    9cea08 <future_backtest::RunnerCore::run_multi+0x3758>
  9cc145:	4d 85 ff             	test   r15,r15
  9cc148:	0f 84 b9 00 00 00    	je     9cc207 <future_backtest::RunnerCore::run_multi+0xf57>
  9cc14e:	ff 15 ec a8 fd 00    	call   QWORD PTR [rip+0xfda8ec]        # 19a6a40 <_DYNAMIC+0x240>
  9cc154:	41 bc 08 00 00 00    	mov    r12d,0x8
  9cc15a:	be 08 00 00 00       	mov    esi,0x8
  9cc15f:	4c 89 ff             	mov    rdi,r15
  9cc162:	ff 15 b0 a8 fd 00    	call   QWORD PTR [rip+0xfda8b0]        # 19a6a18 <_DYNAMIC+0x218>
  9cc168:	48 85 c0             	test   rax,rax
  9cc16b:	0f 84 52 f8 ff ff    	je     9cb9c3 <future_backtest::RunnerCore::run_multi+0x713>
  9cc171:	4c 8b 64 24 68       	mov    r12,QWORD PTR [rsp+0x68]
  9cc176:	e9 94 00 00 00       	jmp    9cc20f <future_backtest::RunnerCore::run_multi+0xf5f>
  9cc17b:	48 8d 84 24 a0 03 00 	lea    rax,[rsp+0x3a0]
  9cc182:	00 
  9cc183:	48 89 84 24 80 1b 00 	mov    QWORD PTR [rsp+0x1b80],rax
  9cc18a:	00 
  9cc18b:	48 8b 05 5e ac fd 00 	mov    rax,QWORD PTR [rip+0xfdac5e]        # 19a6df0 <_DYNAMIC+0x5f0>
  9cc192:	48 89 84 24 88 1b 00 	mov    QWORD PTR [rsp+0x1b88],rax
  9cc199:	00 
  9cc19a:	48 8d 05 7f fc f2 00 	lea    rax,[rip+0xf2fc7f]        # 18fbe20 <anon.609a31ba814f1e4156e50677fc366a7f.492.llvm.5215769359700358943+0x828>
  9cc1a1:	48 89 84 24 d0 11 00 	mov    QWORD PTR [rsp+0x11d0],rax
  9cc1a8:	00 
  9cc1a9:	48 c7 84 24 d8 11 00 	mov    QWORD PTR [rsp+0x11d8],0x2
  9cc1b0:	00 02 00 00 00 
  9cc1b5:	48 c7 84 24 f0 11 00 	mov    QWORD PTR [rsp+0x11f0],0x0
  9cc1bc:	00 00 00 00 00 
  9cc1c1:	48 8d 84 24 80 1b 00 	lea    rax,[rsp+0x1b80]
  9cc1c8:	00 
  9cc1c9:	48 89 84 24 e0 11 00 	mov    QWORD PTR [rsp+0x11e0],rax
  9cc1d0:	00 
  9cc1d1:	48 c7 84 24 e8 11 00 	mov    QWORD PTR [rsp+0x11e8],0x1
  9cc1d8:	00 01 00 00 00 
  9cc1dd:	48 8d 9c 24 60 0e 00 	lea    rbx,[rsp+0xe60]
  9cc1e4:	00 
  9cc1e5:	48 8d b4 24 d0 11 00 	lea    rsi,[rsp+0x11d0]
  9cc1ec:	00 
  9cc1ed:	48 89 df             	mov    rdi,rbx
  9cc1f0:	ff 15 8a ab fd 00    	call   QWORD PTR [rip+0xfdab8a]        # 19a6d80 <_DYNAMIC+0x580>
  9cc1f6:	e9 0d 28 00 00       	jmp    9cea08 <future_backtest::RunnerCore::run_multi+0x3758>
  9cc1fb:	45 31 ed             	xor    r13d,r13d
  9cc1fe:	31 f6                	xor    esi,esi
  9cc200:	31 ff                	xor    edi,edi
  9cc202:	e9 33 13 00 00       	jmp    9cd53a <future_backtest::RunnerCore::run_multi+0x228a>
  9cc207:	b8 08 00 00 00       	mov    eax,0x8
  9cc20c:	45 31 f6             	xor    r14d,r14d
  9cc20f:	4c 89 74 24 38       	mov    QWORD PTR [rsp+0x38],r14
  9cc214:	48 89 44 24 40       	mov    QWORD PTR [rsp+0x40],rax
  9cc219:	48 c7 44 24 48 00 00 	mov    QWORD PTR [rsp+0x48],0x0
  9cc220:	00 00 
  9cc222:	48 8b 84 24 e0 00 00 	mov    rax,QWORD PTR [rsp+0xe0]
  9cc229:	00 
  9cc22a:	48 85 c0             	test   rax,rax
  9cc22d:	0f 84 b7 05 00 00    	je     9cc7ea <future_backtest::RunnerCore::run_multi+0x153a>
  9cc233:	4c 8b b4 24 d8 00 00 	mov    r14,QWORD PTR [rsp+0xd8]
  9cc23a:	00 
  9cc23b:	48 89 c1             	mov    rcx,rax
  9cc23e:	48 c1 e1 0b          	shl    rcx,0xb
  9cc242:	48 8d 1c c1          	lea    rbx,[rcx+rax*8]
  9cc246:	4c 8d bc 24 10 06 00 	lea    r15,[rsp+0x610]
  9cc24d:	00 
  9cc24e:	4c 8d a4 24 d0 2a 00 	lea    r12,[rsp+0x2ad0]
  9cc255:	00 
  9cc256:	48 8b 2d eb a8 fd 00 	mov    rbp,QWORD PTR [rip+0xfda8eb]        # 19a6b48 <memcpy@GLIBC_2.14>
  9cc25d:	eb 2f                	jmp    9cc28e <future_backtest::RunnerCore::run_multi+0xfde>
  9cc25f:	90                   	nop
  9cc260:	49 69 fd 28 15 00 00 	imul   rdi,r13,0x1528
  9cc267:	48 03 7c 24 40       	add    rdi,QWORD PTR [rsp+0x40]
  9cc26c:	ba 28 15 00 00       	mov    edx,0x1528
  9cc271:	4c 89 e6             	mov    rsi,r12
  9cc274:	ff d5                	call   rbp
  9cc276:	49 ff c5             	inc    r13
  9cc279:	4c 89 6c 24 48       	mov    QWORD PTR [rsp+0x48],r13
  9cc27e:	49 81 c6 08 08 00 00 	add    r14,0x808
  9cc285:	48 81 c3 f8 f7 ff ff 	add    rbx,0xfffffffffffff7f8
  9cc28c:	74 79                	je     9cc307 <future_backtest::RunnerCore::run_multi+0x1057>
  9cc28e:	48 8b 44 24 18       	mov    rax,QWORD PTR [rsp+0x18]
  9cc293:	48 ff 00             	inc    QWORD PTR [rax]
  9cc296:	0f 84 60 7f 00 00    	je     9d41fc <future_backtest::RunnerCore::run_multi+0x8f4c>
  9cc29c:	48 89 84 24 80 1b 00 	mov    QWORD PTR [rsp+0x1b80],rax
  9cc2a3:	00 
  9cc2a4:	4c 8b ac 24 88 00 00 	mov    r13,QWORD PTR [rsp+0x88]
  9cc2ab:	00 
  9cc2ac:	49 ff 45 00          	inc    QWORD PTR [r13+0x0]
  9cc2b0:	0f 84 46 7f 00 00    	je     9d41fc <future_backtest::RunnerCore::run_multi+0x8f4c>
  9cc2b6:	4c 89 ac 24 d0 11 00 	mov    QWORD PTR [rsp+0x11d0],r13
  9cc2bd:	00 
  9cc2be:	4c 89 ff             	mov    rdi,r15
  9cc2c1:	4c 89 f6             	mov    rsi,r14
  9cc2c4:	e8 07 9b 00 00       	call   9d5dd0 <<future_backtest::Config::config::StrategyConfig as core::clone::Clone>::clone>
  9cc2c9:	4c 89 e7             	mov    rdi,r12
  9cc2cc:	48 8b 74 24 18       	mov    rsi,QWORD PTR [rsp+0x18]
  9cc2d1:	4c 89 ea             	mov    rdx,r13
  9cc2d4:	4c 89 f9             	mov    rcx,r15
  9cc2d7:	45 31 c0             	xor    r8d,r8d
  9cc2da:	ff 15 80 ae fd 00    	call   QWORD PTR [rip+0xfdae80]        # 19a7160 <_DYNAMIC+0x960>
  9cc2e0:	4c 8b 6c 24 48       	mov    r13,QWORD PTR [rsp+0x48]
  9cc2e5:	4c 3b 6c 24 38       	cmp    r13,QWORD PTR [rsp+0x38]
  9cc2ea:	0f 85 70 ff ff ff    	jne    9cc260 <future_backtest::RunnerCore::run_multi+0xfb0>
  9cc2f0:	48 8d 7c 24 38       	lea    rdi,[rsp+0x38]
  9cc2f5:	48 8d 35 ec 08 f3 00 	lea    rsi,[rip+0xf308ec]        # 18fcbe8 <anon.609a31ba814f1e4156e50677fc366a7f.492.llvm.5215769359700358943+0x15f0>
  9cc2fc:	ff 15 be b8 fd 00    	call   QWORD PTR [rip+0xfdb8be]        # 19a7bc0 <_DYNAMIC+0x13c0>
  9cc302:	e9 59 ff ff ff       	jmp    9cc260 <future_backtest::RunnerCore::run_multi+0xfb0>
  9cc307:	48 8b 84 24 e0 00 00 	mov    rax,QWORD PTR [rsp+0xe0]
  9cc30e:	00 
  9cc30f:	48 85 c0             	test   rax,rax
  9cc312:	4c 8b 64 24 68       	mov    r12,QWORD PTR [rsp+0x68]
  9cc317:	0f 84 cd 04 00 00    	je     9cc7ea <future_backtest::RunnerCore::run_multi+0x153a>
  9cc31d:	4c 8b b4 24 d8 00 00 	mov    r14,QWORD PTR [rsp+0xd8]
  9cc324:	00 
  9cc325:	48 89 c1             	mov    rcx,rax
  9cc328:	48 c1 e1 0b          	shl    rcx,0xb
  9cc32c:	48 8d 04 c1          	lea    rax,[rcx+rax*8]
  9cc330:	4c 01 f0             	add    rax,r14
  9cc333:	48 89 84 24 90 00 00 	mov    QWORD PTR [rsp+0x90],rax
  9cc33a:	00 
  9cc33b:	49 8d 86 08 08 00 00 	lea    rax,[r14+0x808]
  9cc342:	4c 8d ac 24 f8 0e 00 	lea    r13,[rsp+0xef8]
  9cc349:	00 
  9cc34a:	48 8b 8c 24 88 00 00 	mov    rcx,QWORD PTR [rsp+0x88]
  9cc351:	00 
  9cc352:	48 8d 51 18          	lea    rdx,[rcx+0x18]
  9cc356:	48 89 94 24 80 00 00 	mov    QWORD PTR [rsp+0x80],rdx
  9cc35d:	00 
  9cc35e:	48 83 c1 48          	add    rcx,0x48
  9cc362:	48 89 4c 24 70       	mov    QWORD PTR [rsp+0x70],rcx
  9cc367:	48 8d ac 24 d0 11 00 	lea    rbp,[rsp+0x11d0]
  9cc36e:	00 
  9cc36f:	48 8b 1d 0a a9 fd 00 	mov    rbx,QWORD PTR [rip+0xfda90a]        # 19a6c80 <_DYNAMIC+0x480>
  9cc376:	4c 8d bc 24 10 06 00 	lea    r15,[rsp+0x610]
  9cc37d:	00 
  9cc37e:	48 8d 0d 4b 08 f3 00 	lea    rcx,[rip+0xf3084b]        # 18fcbd0 <anon.609a31ba814f1e4156e50677fc366a7f.492.llvm.5215769359700358943+0x15d8>
  9cc385:	48 89 8c 24 10 01 00 	mov    QWORD PTR [rsp+0x110],rcx
  9cc38c:	00 
  9cc38d:	0f 1f 00             	nop    DWORD PTR [rax]
  9cc390:	48 89 44 24 20       	mov    QWORD PTR [rsp+0x20],rax
  9cc395:	49 8d 76 58          	lea    rsi,[r14+0x58]
  9cc399:	48 89 ef             	mov    rdi,rbp
  9cc39c:	48 8d 15 e5 07 f3 00 	lea    rdx,[rip+0xf307e5]        # 18fcb88 <anon.609a31ba814f1e4156e50677fc366a7f.492.llvm.5215769359700358943+0x1590>
  9cc3a3:	ff d3                	call   rbx
  9cc3a5:	49 83 c6 70          	add    r14,0x70
  9cc3a9:	4c 89 ff             	mov    rdi,r15
  9cc3ac:	4c 89 f6             	mov    rsi,r14
  9cc3af:	48 8d 15 ea 07 f3 00 	lea    rdx,[rip+0xf307ea]        # 18fcba0 <anon.609a31ba814f1e4156e50677fc366a7f.492.llvm.5215769359700358943+0x15a8>
  9cc3b6:	ff d3                	call   rbx
  9cc3b8:	48 8b 84 24 e0 11 00 	mov    rax,QWORD PTR [rsp+0x11e0]
  9cc3bf:	00 
  9cc3c0:	48 89 84 24 f0 0e 00 	mov    QWORD PTR [rsp+0xef0],rax
  9cc3c7:	00 
  9cc3c8:	0f 10 84 24 d0 11 00 	movups xmm0,XMMWORD PTR [rsp+0x11d0]
  9cc3cf:	00 
  9cc3d0:	0f 29 84 24 e0 0e 00 	movaps XMMWORD PTR [rsp+0xee0],xmm0
  9cc3d7:	00 
  9cc3d8:	48 8b 84 24 20 06 00 	mov    rax,QWORD PTR [rsp+0x620]
  9cc3df:	00 
  9cc3e0:	49 89 45 10          	mov    QWORD PTR [r13+0x10],rax
  9cc3e4:	f3 0f 6f 84 24 10 06 	movdqu xmm0,XMMWORD PTR [rsp+0x610]
  9cc3eb:	00 00 
  9cc3ed:	f3 41 0f 7f 45 00    	movdqu XMMWORD PTR [r13+0x0],xmm0
  9cc3f3:	48 8b 84 24 88 00 00 	mov    rax,QWORD PTR [rsp+0x88]
  9cc3fa:	00 
  9cc3fb:	48 83 78 10 00       	cmp    QWORD PTR [rax+0x10],0x0
  9cc400:	4c 8d b4 24 80 1b 00 	lea    r14,[rsp+0x1b80]
  9cc407:	00 
  9cc408:	0f 85 22 79 00 00    	jne    9d3d30 <future_backtest::RunnerCore::run_multi+0x8a80>
  9cc40e:	48 c7 40 10 ff ff ff 	mov    QWORD PTR [rax+0x10],0xffffffffffffffff
  9cc415:	ff 
  9cc416:	4c 89 f7             	mov    rdi,r14
  9cc419:	48 8d b4 24 e0 0e 00 	lea    rsi,[rsp+0xee0]
  9cc420:	00 
  9cc421:	48 8d 15 e0 d4 f2 00 	lea    rdx,[rip+0xf2d4e0]        # 18f9908 <anon.609a31ba814f1e4156e50677fc366a7f.99.llvm.5215769359700358943+0x18>
  9cc428:	ff d3                	call   rbx
  9cc42a:	48 8d bc 24 98 1b 00 	lea    rdi,[rsp+0x1b98]
  9cc431:	00 
  9cc432:	4c 89 ee             	mov    rsi,r13
  9cc435:	48 8d 15 cc d4 f2 00 	lea    rdx,[rip+0xf2d4cc]        # 18f9908 <anon.609a31ba814f1e4156e50677fc366a7f.99.llvm.5215769359700358943+0x18>
  9cc43c:	ff d3                	call   rbx
  9cc43e:	48 8d 84 24 90 06 00 	lea    rax,[rsp+0x690]
  9cc445:	00 
  9cc446:	66 0f ef c0          	pxor   xmm0,xmm0
  9cc44a:	f3 0f 7f 40 10       	movdqu XMMWORD PTR [rax+0x10],xmm0
  9cc44f:	f3 0f 7f 00          	movdqu XMMWORD PTR [rax],xmm0
  9cc453:	48 b8 00 00 00 00 00 	movabs rax,0x8000000000000000
  9cc45a:	00 00 80 
  9cc45d:	48 89 84 24 78 06 00 	mov    QWORD PTR [rsp+0x678],rax
  9cc464:	00 
  9cc465:	48 c7 84 24 10 06 00 	mov    QWORD PTR [rsp+0x610],0x2
  9cc46c:	00 02 00 00 00 
  9cc471:	48 89 ef             	mov    rdi,rbp
  9cc474:	48 8b b4 24 80 00 00 	mov    rsi,QWORD PTR [rsp+0x80]
  9cc47b:	00 
  9cc47c:	4c 89 f2             	mov    rdx,r14
  9cc47f:	4c 89 f9             	mov    rcx,r15
  9cc482:	e8 b9 4b 05 00       	call   a21040 <hashbrown::map::HashMap<K,V,S,A>::insert>
  9cc487:	48 8b 9c 24 d0 11 00 	mov    rbx,QWORD PTR [rsp+0x11d0]
  9cc48e:	00 
  9cc48f:	48 83 fb 03          	cmp    rbx,0x3
  9cc493:	0f 84 37 01 00 00    	je     9cc5d0 <future_backtest::RunnerCore::run_multi+0x1320>
  9cc499:	48 8b b4 24 38 12 00 	mov    rsi,QWORD PTR [rsp+0x1238]
  9cc4a0:	00 
  9cc4a1:	48 b8 00 00 00 00 00 	movabs rax,0x8000000000000000
  9cc4a8:	00 00 80 
  9cc4ab:	48 39 c6             	cmp    rsi,rax
  9cc4ae:	74 18                	je     9cc4c8 <future_backtest::RunnerCore::run_multi+0x1218>
  9cc4b0:	48 85 f6             	test   rsi,rsi
  9cc4b3:	74 13                	je     9cc4c8 <future_backtest::RunnerCore::run_multi+0x1218>
  9cc4b5:	48 8b bc 24 40 12 00 	mov    rdi,QWORD PTR [rsp+0x1240]
  9cc4bc:	00 
  9cc4bd:	ba 01 00 00 00       	mov    edx,0x1
  9cc4c2:	ff 15 58 a5 fd 00    	call   QWORD PTR [rip+0xfda558]        # 19a6a20 <_DYNAMIC+0x220>
  9cc4c8:	83 fb 02             	cmp    ebx,0x2
  9cc4cb:	0f 84 ff 00 00 00    	je     9cc5d0 <future_backtest::RunnerCore::run_multi+0x1320>
  9cc4d1:	4c 8b bc 24 00 12 00 	mov    r15,QWORD PTR [rsp+0x1200]
  9cc4d8:	00 
  9cc4d9:	4d 85 ff             	test   r15,r15
  9cc4dc:	0f 84 ee 00 00 00    	je     9cc5d0 <future_backtest::RunnerCore::run_multi+0x1320>
  9cc4e2:	4c 8b b4 24 10 12 00 	mov    r14,QWORD PTR [rsp+0x1210]
  9cc4e9:	00 
  9cc4ea:	4d 85 f6             	test   r14,r14
  9cc4ed:	0f 84 8b 00 00 00    	je     9cc57e <future_backtest::RunnerCore::run_multi+0x12ce>
  9cc4f3:	4c 8b ac 24 f8 11 00 	mov    r13,QWORD PTR [rsp+0x11f8]
  9cc4fa:	00 
  9cc4fb:	66 41 0f 6f 45 00    	movdqa xmm0,XMMWORD PTR [r13+0x0]
  9cc501:	66 0f d7 e8          	pmovmskb ebp,xmm0
  9cc505:	f7 d5                	not    ebp
  9cc507:	49 8d 5d 10          	lea    rbx,[r13+0x10]
  9cc50b:	eb 12                	jmp    9cc51f <future_backtest::RunnerCore::run_multi+0x126f>
  9cc50d:	0f 1f 00             	nop    DWORD PTR [rax]
  9cc510:	49 ff ce             	dec    r14
  9cc513:	8d 45 ff             	lea    eax,[rbp-0x1]
  9cc516:	21 e8                	and    eax,ebp
  9cc518:	89 c5                	mov    ebp,eax
  9cc51a:	4d 85 f6             	test   r14,r14
  9cc51d:	74 5f                	je     9cc57e <future_backtest::RunnerCore::run_multi+0x12ce>
  9cc51f:	66 85 ed             	test   bp,bp
  9cc522:	75 29                	jne    9cc54d <future_backtest::RunnerCore::run_multi+0x129d>
  9cc524:	66 66 66 2e 0f 1f 84 	data16 data16 cs nop WORD PTR [rax+rax*1+0x0]
  9cc52b:	00 00 00 00 00 
  9cc530:	66 0f 6f 03          	movdqa xmm0,XMMWORD PTR [rbx]
  9cc534:	66 0f d7 e8          	pmovmskb ebp,xmm0
  9cc538:	49 81 c5 80 fd ff ff 	add    r13,0xfffffffffffffd80
  9cc53f:	48 83 c3 10          	add    rbx,0x10
  9cc543:	81 fd ff ff 00 00    	cmp    ebp,0xffff
  9cc549:	74 e5                	je     9cc530 <future_backtest::RunnerCore::run_multi+0x1280>
  9cc54b:	f7 d5                	not    ebp
  9cc54d:	f3 0f bc c5          	tzcnt  eax,ebp
  9cc551:	48 f7 d8             	neg    rax
  9cc554:	48 8d 04 80          	lea    rax,[rax+rax*4]
  9cc558:	49 8b 74 c5 d8       	mov    rsi,QWORD PTR [r13+rax*8-0x28]
  9cc55d:	48 85 f6             	test   rsi,rsi
  9cc560:	74 ae                	je     9cc510 <future_backtest::RunnerCore::run_multi+0x1260>
  9cc562:	48 8d 04 c5 00 00 00 	lea    rax,[rax*8+0x0]
  9cc569:	00 
  9cc56a:	4c 01 e8             	add    rax,r13
  9cc56d:	48 8b 78 e0          	mov    rdi,QWORD PTR [rax-0x20]
  9cc571:	ba 01 00 00 00       	mov    edx,0x1
  9cc576:	ff 15 a4 a4 fd 00    	call   QWORD PTR [rip+0xfda4a4]        # 19a6a20 <_DYNAMIC+0x220>
  9cc57c:	eb 92                	jmp    9cc510 <future_backtest::RunnerCore::run_multi+0x1260>
  9cc57e:	4b 8d 04 bf          	lea    rax,[r15+r15*4]
  9cc582:	48 8d 04 c5 37 00 00 	lea    rax,[rax*8+0x37]
  9cc589:	00 
  9cc58a:	48 83 e0 f0          	and    rax,0xfffffffffffffff0
  9cc58e:	49 01 c7             	add    r15,rax
  9cc591:	49 83 c7 11          	add    r15,0x11
  9cc595:	4c 8d ac 24 f8 0e 00 	lea    r13,[rsp+0xef8]
  9cc59c:	00 
  9cc59d:	48 8d ac 24 d0 11 00 	lea    rbp,[rsp+0x11d0]
  9cc5a4:	00 
  9cc5a5:	4c 8d b4 24 80 1b 00 	lea    r14,[rsp+0x1b80]
  9cc5ac:	00 
  9cc5ad:	74 21                	je     9cc5d0 <future_backtest::RunnerCore::run_multi+0x1320>
  9cc5af:	48 8b bc 24 f8 11 00 	mov    rdi,QWORD PTR [rsp+0x11f8]
  9cc5b6:	00 
  9cc5b7:	48 29 c7             	sub    rdi,rax
  9cc5ba:	ba 10 00 00 00       	mov    edx,0x10
  9cc5bf:	4c 89 fe             	mov    rsi,r15
  9cc5c2:	ff 15 58 a4 fd 00    	call   QWORD PTR [rip+0xfda458]        # 19a6a20 <_DYNAMIC+0x220>
  9cc5c8:	0f 1f 84 00 00 00 00 	nop    DWORD PTR [rax+rax*1+0x0]
  9cc5cf:	00 
  9cc5d0:	48 8b 84 24 88 00 00 	mov    rax,QWORD PTR [rsp+0x88]
  9cc5d7:	00 
  9cc5d8:	48 ff 40 10          	inc    QWORD PTR [rax+0x10]
  9cc5dc:	0f 85 3f 77 00 00    	jne    9d3d21 <future_backtest::RunnerCore::run_multi+0x8a71>
  9cc5e2:	48 c7 40 10 ff ff ff 	mov    QWORD PTR [rax+0x10],0xffffffffffffffff
  9cc5e9:	ff 
  9cc5ea:	66 0f 6f 84 24 e0 0e 	movdqa xmm0,XMMWORD PTR [rsp+0xee0]
  9cc5f1:	00 00 
  9cc5f3:	66 0f 6f 8c 24 f0 0e 	movdqa xmm1,XMMWORD PTR [rsp+0xef0]
  9cc5fa:	00 00 
  9cc5fc:	66 0f 28 94 24 00 0f 	movapd xmm2,XMMWORD PTR [rsp+0xf00]
  9cc603:	00 00 
  9cc605:	66 0f 29 94 24 f0 11 	movapd XMMWORD PTR [rsp+0x11f0],xmm2
  9cc60c:	00 00 
  9cc60e:	66 0f 7f 8c 24 e0 11 	movdqa XMMWORD PTR [rsp+0x11e0],xmm1
  9cc615:	00 00 
  9cc617:	66 0f 7f 84 24 d0 11 	movdqa XMMWORD PTR [rsp+0x11d0],xmm0
  9cc61e:	00 00 
  9cc620:	41 80 7c 24 10 01    	cmp    BYTE PTR [r12+0x10],0x1
  9cc626:	4c 8d bc 24 10 06 00 	lea    r15,[rsp+0x610]
  9cc62d:	00 
  9cc62e:	0f 85 9c 01 00 00    	jne    9cc7d0 <future_backtest::RunnerCore::run_multi+0x1520>
  9cc634:	49 8b 04 24          	mov    rax,QWORD PTR [r12]
  9cc638:	49 8b 54 24 08       	mov    rdx,QWORD PTR [r12+0x8]
  9cc63d:	48 8b 1d 3c a6 fd 00 	mov    rbx,QWORD PTR [rip+0xfda63c]        # 19a6c80 <_DYNAMIC+0x480>
  9cc644:	48 8d 48 01          	lea    rcx,[rax+0x1]
  9cc648:	49 89 0c 24          	mov    QWORD PTR [r12],rcx
  9cc64c:	0f 10 05 05 e0 f2 00 	movups xmm0,XMMWORD PTR [rip+0xf2e005]        # 18fa658 <anon.609a31ba814f1e4156e50677fc366a7f.248.llvm.5215769359700358943+0x90>
  9cc653:	0f 29 84 24 20 06 00 	movaps XMMWORD PTR [rsp+0x620],xmm0
  9cc65a:	00 
  9cc65b:	f3 0f 6f 05 e5 df f2 	movdqu xmm0,XMMWORD PTR [rip+0xf2dfe5]        # 18fa648 <anon.609a31ba814f1e4156e50677fc366a7f.248.llvm.5215769359700358943+0x80>
  9cc662:	00 
  9cc663:	66 0f 7f 84 24 10 06 	movdqa XMMWORD PTR [rsp+0x610],xmm0
  9cc66a:	00 00 
  9cc66c:	48 89 84 24 30 06 00 	mov    QWORD PTR [rsp+0x630],rax
  9cc673:	00 
  9cc674:	48 89 94 24 38 06 00 	mov    QWORD PTR [rsp+0x638],rdx
  9cc67b:	00 
  9cc67c:	4c 89 f7             	mov    rdi,r14
  9cc67f:	48 8b 74 24 70       	mov    rsi,QWORD PTR [rsp+0x70]
  9cc684:	48 89 ea             	mov    rdx,rbp
  9cc687:	4c 89 f9             	mov    rcx,r15
  9cc68a:	e8 61 69 05 00       	call   a22ff0 <hashbrown::map::HashMap<K,V,S,A>::insert>
  9cc68f:	48 8b ac 24 80 1b 00 	mov    rbp,QWORD PTR [rsp+0x1b80]
  9cc696:	00 
  9cc697:	48 85 ed             	test   rbp,rbp
  9cc69a:	0f 84 f4 00 00 00    	je     9cc794 <future_backtest::RunnerCore::run_multi+0x14e4>
  9cc6a0:	4c 8b b4 24 88 1b 00 	mov    r14,QWORD PTR [rsp+0x1b88]
  9cc6a7:	00 
  9cc6a8:	4d 85 f6             	test   r14,r14
  9cc6ab:	0f 84 e3 00 00 00    	je     9cc794 <future_backtest::RunnerCore::run_multi+0x14e4>
  9cc6b1:	4c 8b ac 24 98 1b 00 	mov    r13,QWORD PTR [rsp+0x1b98]
  9cc6b8:	00 
  9cc6b9:	4d 85 ed             	test   r13,r13
  9cc6bc:	0f 84 8e 00 00 00    	je     9cc750 <future_backtest::RunnerCore::run_multi+0x14a0>
  9cc6c2:	66 0f 6f 45 00       	movdqa xmm0,XMMWORD PTR [rbp+0x0]
  9cc6c7:	66 44 0f d7 e0       	pmovmskb r12d,xmm0
  9cc6cc:	41 f7 d4             	not    r12d
  9cc6cf:	48 8d 5d 10          	lea    rbx,[rbp+0x10]
  9cc6d3:	49 89 ef             	mov    r15,rbp
  9cc6d6:	eb 1b                	jmp    9cc6f3 <future_backtest::RunnerCore::run_multi+0x1443>
  9cc6d8:	0f 1f 84 00 00 00 00 	nop    DWORD PTR [rax+rax*1+0x0]
  9cc6df:	00 
  9cc6e0:	49 ff cd             	dec    r13
  9cc6e3:	41 8d 44 24 ff       	lea    eax,[r12-0x1]
  9cc6e8:	44 21 e0             	and    eax,r12d
  9cc6eb:	41 89 c4             	mov    r12d,eax
  9cc6ee:	4d 85 ed             	test   r13,r13
  9cc6f1:	74 5d                	je     9cc750 <future_backtest::RunnerCore::run_multi+0x14a0>
  9cc6f3:	66 45 85 e4          	test   r12w,r12w
  9cc6f7:	75 27                	jne    9cc720 <future_backtest::RunnerCore::run_multi+0x1470>
  9cc6f9:	0f 1f 80 00 00 00 00 	nop    DWORD PTR [rax+0x0]
  9cc700:	66 0f 6f 03          	movdqa xmm0,XMMWORD PTR [rbx]
  9cc704:	66 44 0f d7 e0       	pmovmskb r12d,xmm0
  9cc709:	49 81 c7 00 fe ff ff 	add    r15,0xfffffffffffffe00
  9cc710:	48 83 c3 10          	add    rbx,0x10
  9cc714:	41 81 fc ff ff 00 00 	cmp    r12d,0xffff
  9cc71b:	74 e3                	je     9cc700 <future_backtest::RunnerCore::run_multi+0x1450>
  9cc71d:	41 f7 d4             	not    r12d
  9cc720:	f3 41 0f bc cc       	tzcnt  ecx,r12d
  9cc725:	c1 e1 05             	shl    ecx,0x5
  9cc728:	4c 89 f8             	mov    rax,r15
  9cc72b:	48 29 c8             	sub    rax,rcx
  9cc72e:	48 8b 70 e0          	mov    rsi,QWORD PTR [rax-0x20]
  9cc732:	48 85 f6             	test   rsi,rsi
  9cc735:	74 a9                	je     9cc6e0 <future_backtest::RunnerCore::run_multi+0x1430>
  9cc737:	48 8b 78 e8          	mov    rdi,QWORD PTR [rax-0x18]
  9cc73b:	ba 01 00 00 00       	mov    edx,0x1
  9cc740:	ff 15 da a2 fd 00    	call   QWORD PTR [rip+0xfda2da]        # 19a6a20 <_DYNAMIC+0x220>
  9cc746:	eb 98                	jmp    9cc6e0 <future_backtest::RunnerCore::run_multi+0x1430>
  9cc748:	0f 1f 84 00 00 00 00 	nop    DWORD PTR [rax+rax*1+0x0]
  9cc74f:	00 
  9cc750:	4c 89 f0             	mov    rax,r14
  9cc753:	48 c1 e0 05          	shl    rax,0x5
  9cc757:	49 01 c6             	add    r14,rax
  9cc75a:	49 83 c6 31          	add    r14,0x31
  9cc75e:	4c 8b 64 24 68       	mov    r12,QWORD PTR [rsp+0x68]
  9cc763:	4c 8d ac 24 f8 0e 00 	lea    r13,[rsp+0xef8]
  9cc76a:	00 
  9cc76b:	48 8b 1d 0e a5 fd 00 	mov    rbx,QWORD PTR [rip+0xfda50e]        # 19a6c80 <_DYNAMIC+0x480>
  9cc772:	4c 8d bc 24 10 06 00 	lea    r15,[rsp+0x610]
  9cc779:	00 
  9cc77a:	74 18                	je     9cc794 <future_backtest::RunnerCore::run_multi+0x14e4>
  9cc77c:	48 29 c5             	sub    rbp,rax
  9cc77f:	48 83 c5 e0          	add    rbp,0xffffffffffffffe0
  9cc783:	ba 10 00 00 00       	mov    edx,0x10
  9cc788:	48 89 ef             	mov    rdi,rbp
  9cc78b:	4c 89 f6             	mov    rsi,r14
  9cc78e:	ff 15 8c a2 fd 00    	call   QWORD PTR [rip+0xfda28c]        # 19a6a20 <_DYNAMIC+0x220>
  9cc794:	48 8b 84 24 88 00 00 	mov    rax,QWORD PTR [rsp+0x88]
  9cc79b:	00 
  9cc79c:	48 ff 40 10          	inc    QWORD PTR [rax+0x10]
  9cc7a0:	48 8b 4c 24 20       	mov    rcx,QWORD PTR [rsp+0x20]
  9cc7a5:	48 8d 81 08 08 00 00 	lea    rax,[rcx+0x808]
  9cc7ac:	48 3b 8c 24 90 00 00 	cmp    rcx,QWORD PTR [rsp+0x90]
  9cc7b3:	00 
  9cc7b4:	48 0f 44 c1          	cmove  rax,rcx
  9cc7b8:	48 8d ac 24 d0 11 00 	lea    rbp,[rsp+0x11d0]
  9cc7bf:	00 
  9cc7c0:	74 28                	je     9cc7ea <future_backtest::RunnerCore::run_multi+0x153a>
  9cc7c2:	49 89 ce             	mov    r14,rcx
  9cc7c5:	48 85 c9             	test   rcx,rcx
  9cc7c8:	0f 85 c2 fb ff ff    	jne    9cc390 <future_backtest::RunnerCore::run_multi+0x10e0>
  9cc7ce:	eb 1a                	jmp    9cc7ea <future_backtest::RunnerCore::run_multi+0x153a>
  9cc7d0:	ff 15 ba a3 fd 00    	call   QWORD PTR [rip+0xfda3ba]        # 19a6b90 <_DYNAMIC+0x390>
  9cc7d6:	49 89 04 24          	mov    QWORD PTR [r12],rax
  9cc7da:	49 89 54 24 08       	mov    QWORD PTR [r12+0x8],rdx
  9cc7df:	41 c6 44 24 10 01    	mov    BYTE PTR [r12+0x10],0x1
  9cc7e5:	e9 53 fe ff ff       	jmp    9cc63d <future_backtest::RunnerCore::run_multi+0x138d>
  9cc7ea:	41 80 7c 24 10 01    	cmp    BYTE PTR [r12+0x10],0x1
  9cc7f0:	0f 85 1a 5d 00 00    	jne    9d2510 <future_backtest::RunnerCore::run_multi+0x7260>
  9cc7f6:	49 8b 04 24          	mov    rax,QWORD PTR [r12]
  9cc7fa:	49 8b 54 24 08       	mov    rdx,QWORD PTR [r12+0x8]
  9cc7ff:	48 8d 48 01          	lea    rcx,[rax+0x1]
  9cc803:	49 89 0c 24          	mov    QWORD PTR [r12],rcx
  9cc807:	0f 10 05 4a de f2 00 	movups xmm0,XMMWORD PTR [rip+0xf2de4a]        # 18fa658 <anon.609a31ba814f1e4156e50677fc366a7f.248.llvm.5215769359700358943+0x90>
  9cc80e:	0f 29 84 24 70 0e 00 	movaps XMMWORD PTR [rsp+0xe70],xmm0
  9cc815:	00 
  9cc816:	66 0f 10 05 2a de f2 	movupd xmm0,XMMWORD PTR [rip+0xf2de2a]        # 18fa648 <anon.609a31ba814f1e4156e50677fc366a7f.248.llvm.5215769359700358943+0x80>
  9cc81d:	00 
  9cc81e:	66 0f 29 84 24 60 0e 	movapd XMMWORD PTR [rsp+0xe60],xmm0
  9cc825:	00 00 
  9cc827:	48 89 84 24 80 0e 00 	mov    QWORD PTR [rsp+0xe80],rax
  9cc82e:	00 
  9cc82f:	48 89 94 24 88 0e 00 	mov    QWORD PTR [rsp+0xe88],rdx
  9cc836:	00 
  9cc837:	48 8b 9c 24 d8 00 00 	mov    rbx,QWORD PTR [rsp+0xd8]
  9cc83e:	00 
  9cc83f:	48 8b 84 24 e0 00 00 	mov    rax,QWORD PTR [rsp+0xe0]
  9cc846:	00 
  9cc847:	48 85 c0             	test   rax,rax
  9cc84a:	0f 84 17 0c 00 00    	je     9cd467 <future_backtest::RunnerCore::run_multi+0x21b7>
  9cc850:	48 89 c1             	mov    rcx,rax
  9cc853:	48 c1 e1 0b          	shl    rcx,0xb
  9cc857:	48 8d 04 c1          	lea    rax,[rcx+rax*8]
  9cc85b:	48 01 d8             	add    rax,rbx
  9cc85e:	48 89 84 24 90 00 00 	mov    QWORD PTR [rsp+0x90],rax
  9cc865:	00 
  9cc866:	48 8d 83 08 08 00 00 	lea    rax,[rbx+0x808]
  9cc86d:	4c 8b 35 0c a4 fd 00 	mov    r14,QWORD PTR [rip+0xfda40c]        # 19a6c80 <_DYNAMIC+0x480>
  9cc874:	48 8d 15 8d f1 f2 00 	lea    rdx,[rip+0xf2f18d]        # 18fba08 <anon.609a31ba814f1e4156e50677fc366a7f.492.llvm.5215769359700358943+0x410>
  9cc87b:	48 8d bc 24 00 05 00 	lea    rdi,[rsp+0x500]
  9cc882:	00 
  9cc883:	48 83 bb 18 01 00 00 	cmp    QWORD PTR [rbx+0x118],0x0
  9cc88a:	00 
  9cc88b:	48 89 5c 24 20       	mov    QWORD PTR [rsp+0x20],rbx
  9cc890:	48 89 44 24 70       	mov    QWORD PTR [rsp+0x70],rax
  9cc895:	74 29                	je     9cc8c0 <future_backtest::RunnerCore::run_multi+0x1610>
  9cc897:	48 8d b3 08 01 00 00 	lea    rsi,[rbx+0x108]
  9cc89e:	e8 bd 54 fa ff       	call   971d60 <<alloc::vec::Vec<T,A> as core::clone::Clone>::clone>
  9cc8a3:	48 8b 84 24 08 05 00 	mov    rax,QWORD PTR [rsp+0x508]
  9cc8aa:	00 
  9cc8ab:	48 89 84 24 80 00 00 	mov    QWORD PTR [rsp+0x80],rax
  9cc8b2:	00 
  9cc8b3:	4c 8b b4 24 10 05 00 	mov    r14,QWORD PTR [rsp+0x510]
  9cc8ba:	00 
  9cc8bb:	e9 87 00 00 00       	jmp    9cc947 <future_backtest::RunnerCore::run_multi+0x1697>
  9cc8c0:	ff 15 7a a1 fd 00    	call   QWORD PTR [rip+0xfda17a]        # 19a6a40 <_DYNAMIC+0x240>
  9cc8c6:	bf 18 00 00 00       	mov    edi,0x18
  9cc8cb:	be 08 00 00 00       	mov    esi,0x8
  9cc8d0:	ff 15 42 a1 fd 00    	call   QWORD PTR [rip+0xfda142]        # 19a6a18 <_DYNAMIC+0x218>
  9cc8d6:	48 89 84 24 80 00 00 	mov    QWORD PTR [rsp+0x80],rax
  9cc8dd:	00 
  9cc8de:	48 85 c0             	test   rax,rax
  9cc8e1:	0f 84 aa 62 00 00    	je     9d2b91 <future_backtest::RunnerCore::run_multi+0x78e1>
  9cc8e7:	48 8d b3 f0 00 00 00 	lea    rsi,[rbx+0xf0]
  9cc8ee:	48 8d bc 24 10 06 00 	lea    rdi,[rsp+0x610]
  9cc8f5:	00 
  9cc8f6:	48 8d 15 f3 f0 f2 00 	lea    rdx,[rip+0xf2f0f3]        # 18fb9f0 <anon.609a31ba814f1e4156e50677fc366a7f.492.llvm.5215769359700358943+0x3f8>
  9cc8fd:	41 ff d6             	call   r14
  9cc900:	48 8b 84 24 20 06 00 	mov    rax,QWORD PTR [rsp+0x620]
  9cc907:	00 
  9cc908:	48 8b 8c 24 80 00 00 	mov    rcx,QWORD PTR [rsp+0x80]
  9cc90f:	00 
  9cc910:	48 89 41 10          	mov    QWORD PTR [rcx+0x10],rax
  9cc914:	66 0f 10 84 24 10 06 	movupd xmm0,XMMWORD PTR [rsp+0x610]
  9cc91b:	00 00 
  9cc91d:	66 0f 11 01          	movupd XMMWORD PTR [rcx],xmm0
  9cc921:	48 c7 84 24 00 05 00 	mov    QWORD PTR [rsp+0x500],0x1
  9cc928:	00 01 00 00 00 
  9cc92d:	48 89 8c 24 08 05 00 	mov    QWORD PTR [rsp+0x508],rcx
  9cc934:	00 
  9cc935:	48 c7 84 24 10 05 00 	mov    QWORD PTR [rsp+0x510],0x1
  9cc93c:	00 01 00 00 00 
  9cc941:	41 be 01 00 00 00    	mov    r14d,0x1
  9cc947:	48 c7 84 24 b0 10 00 	mov    QWORD PTR [rsp+0x10b0],0x0
  9cc94e:	00 00 00 00 00 
  9cc953:	48 c7 84 24 b8 10 00 	mov    QWORD PTR [rsp+0x10b8],0x8
  9cc95a:	00 08 00 00 00 
  9cc95f:	48 c7 84 24 c0 10 00 	mov    QWORD PTR [rsp+0x10c0],0x0
  9cc966:	00 00 00 00 00 
  9cc96b:	48 c7 84 24 a0 03 00 	mov    QWORD PTR [rsp+0x3a0],0x0
  9cc972:	00 00 00 00 00 
  9cc977:	48 c7 84 24 a8 03 00 	mov    QWORD PTR [rsp+0x3a8],0x8
  9cc97e:	00 08 00 00 00 
  9cc983:	48 c7 84 24 b0 03 00 	mov    QWORD PTR [rsp+0x3b0],0x0
  9cc98a:	00 00 00 00 00 
  9cc98f:	4d 85 f6             	test   r14,r14
  9cc992:	0f 84 c0 01 00 00    	je     9ccb58 <future_backtest::RunnerCore::run_multi+0x18a8>
  9cc998:	48 8b 44 24 20       	mov    rax,QWORD PTR [rsp+0x20]
  9cc99d:	4c 8d a8 20 01 00 00 	lea    r13,[rax+0x120]
  9cc9a4:	48 8d a8 38 01 00 00 	lea    rbp,[rax+0x138]
  9cc9ab:	4a 8d 04 f5 00 00 00 	lea    rax,[r14*8+0x0]
  9cc9b2:	00 
  9cc9b3:	4c 8d 24 40          	lea    r12,[rax+rax*2]
  9cc9b7:	4c 8b bc 24 80 00 00 	mov    r15,QWORD PTR [rsp+0x80]
  9cc9be:	00 
  9cc9bf:	eb 4f                	jmp    9cca10 <future_backtest::RunnerCore::run_multi+0x1760>
  9cc9c1:	66 66 66 66 66 66 2e 	data16 data16 data16 data16 data16 cs nop WORD PTR [rax+rax*1+0x0]
  9cc9c8:	0f 1f 84 00 00 00 00 
  9cc9cf:	00 
  9cc9d0:	48 8b 84 24 a8 03 00 	mov    rax,QWORD PTR [rsp+0x3a8]
  9cc9d7:	00 
  9cc9d8:	48 8d 0c 5b          	lea    rcx,[rbx+rbx*2]
  9cc9dc:	48 8b 94 24 d0 01 00 	mov    rdx,QWORD PTR [rsp+0x1d0]
  9cc9e3:	00 
  9cc9e4:	48 89 54 c8 10       	mov    QWORD PTR [rax+rcx*8+0x10],rdx
  9cc9e9:	66 0f 10 84 24 c0 01 	movupd xmm0,XMMWORD PTR [rsp+0x1c0]
  9cc9f0:	00 00 
  9cc9f2:	66 0f 11 04 c8       	movupd XMMWORD PTR [rax+rcx*8],xmm0
  9cc9f7:	48 ff c3             	inc    rbx
  9cc9fa:	48 89 9c 24 b0 03 00 	mov    QWORD PTR [rsp+0x3b0],rbx
  9cca01:	00 
  9cca02:	49 83 c7 18          	add    r15,0x18
  9cca06:	49 83 c4 e8          	add    r12,0xffffffffffffffe8
  9cca0a:	0f 84 48 01 00 00    	je     9ccb58 <future_backtest::RunnerCore::run_multi+0x18a8>
  9cca10:	4c 89 bc 24 40 01 00 	mov    QWORD PTR [rsp+0x140],r15
  9cca17:	00 
  9cca18:	48 8d bc 24 10 06 00 	lea    rdi,[rsp+0x610]
  9cca1f:	00 
  9cca20:	4c 89 fe             	mov    rsi,r15
  9cca23:	48 8d 15 86 f0 f2 00 	lea    rdx,[rip+0xf2f086]        # 18fbab0 <anon.609a31ba814f1e4156e50677fc366a7f.492.llvm.5215769359700358943+0x4b8>
  9cca2a:	ff 15 50 a2 fd 00    	call   QWORD PTR [rip+0xfda250]        # 19a6c80 <_DYNAMIC+0x480>
  9cca30:	48 8b 9c 24 c0 10 00 	mov    rbx,QWORD PTR [rsp+0x10c0]
  9cca37:	00 
  9cca38:	48 3b 9c 24 b0 10 00 	cmp    rbx,QWORD PTR [rsp+0x10b0]
  9cca3f:	00 
  9cca40:	75 15                	jne    9cca57 <future_backtest::RunnerCore::run_multi+0x17a7>
  9cca42:	48 8d bc 24 b0 10 00 	lea    rdi,[rsp+0x10b0]
  9cca49:	00 
  9cca4a:	48 8d 35 77 f0 f2 00 	lea    rsi,[rip+0xf2f077]        # 18fbac8 <anon.609a31ba814f1e4156e50677fc366a7f.492.llvm.5215769359700358943+0x4d0>
  9cca51:	ff 15 71 a2 fd 00    	call   QWORD PTR [rip+0xfda271]        # 19a6cc8 <_DYNAMIC+0x4c8>
  9cca57:	48 8b 84 24 b8 10 00 	mov    rax,QWORD PTR [rsp+0x10b8]
  9cca5e:	00 
  9cca5f:	48 8d 0c 5b          	lea    rcx,[rbx+rbx*2]
  9cca63:	48 8b 94 24 20 06 00 	mov    rdx,QWORD PTR [rsp+0x620]
  9cca6a:	00 
  9cca6b:	48 89 54 c8 10       	mov    QWORD PTR [rax+rcx*8+0x10],rdx
  9cca70:	66 0f 10 84 24 10 06 	movupd xmm0,XMMWORD PTR [rsp+0x610]
  9cca77:	00 00 
  9cca79:	66 0f 11 04 c8       	movupd XMMWORD PTR [rax+rcx*8],xmm0
  9cca7e:	48 ff c3             	inc    rbx
  9cca81:	48 89 9c 24 c0 10 00 	mov    QWORD PTR [rsp+0x10c0],rbx
  9cca88:	00 
  9cca89:	48 89 ac 24 10 06 00 	mov    QWORD PTR [rsp+0x610],rbp
  9cca90:	00 
  9cca91:	48 8d 05 a8 dc fd ff 	lea    rax,[rip+0xfffffffffffddca8]        # 9aa740 <<alloc::string::String as core::fmt::Display>::fmt>
  9cca98:	48 89 84 24 18 06 00 	mov    QWORD PTR [rsp+0x618],rax
  9cca9f:	00 
  9ccaa0:	48 8d 8c 24 40 01 00 	lea    rcx,[rsp+0x140]
  9ccaa7:	00 
  9ccaa8:	48 89 8c 24 20 06 00 	mov    QWORD PTR [rsp+0x620],rcx
  9ccaaf:	00 
  9ccab0:	48 8d 0d 99 88 f2 ff 	lea    rcx,[rip+0xfffffffffff28899]        # 8f5350 <<&T as core::fmt::Display>::fmt>
  9ccab7:	48 89 8c 24 28 06 00 	mov    QWORD PTR [rsp+0x628],rcx
  9ccabe:	00 
  9ccabf:	4c 89 ac 24 30 06 00 	mov    QWORD PTR [rsp+0x630],r13
  9ccac6:	00 
  9ccac7:	48 89 84 24 38 06 00 	mov    QWORD PTR [rsp+0x638],rax
  9ccace:	00 
  9ccacf:	48 8d 05 22 e3 f2 00 	lea    rax,[rip+0xf2e322]        # 18fadf8 <anon.609a31ba814f1e4156e50677fc366a7f.248.llvm.5215769359700358943+0x830>
  9ccad6:	48 89 84 24 d0 11 00 	mov    QWORD PTR [rsp+0x11d0],rax
  9ccadd:	00 
  9ccade:	48 c7 84 24 d8 11 00 	mov    QWORD PTR [rsp+0x11d8],0x3
  9ccae5:	00 03 00 00 00 
  9ccaea:	48 c7 84 24 f0 11 00 	mov    QWORD PTR [rsp+0x11f0],0x0
  9ccaf1:	00 00 00 00 00 
  9ccaf6:	48 8d 84 24 10 06 00 	lea    rax,[rsp+0x610]
  9ccafd:	00 
  9ccafe:	48 89 84 24 e0 11 00 	mov    QWORD PTR [rsp+0x11e0],rax
  9ccb05:	00 
  9ccb06:	48 c7 84 24 e8 11 00 	mov    QWORD PTR [rsp+0x11e8],0x3
  9ccb0d:	00 03 00 00 00 
  9ccb12:	48 8d bc 24 c0 01 00 	lea    rdi,[rsp+0x1c0]
  9ccb19:	00 
  9ccb1a:	48 8d b4 24 d0 11 00 	lea    rsi,[rsp+0x11d0]
  9ccb21:	00 
  9ccb22:	ff 15 58 a2 fd 00    	call   QWORD PTR [rip+0xfda258]        # 19a6d80 <_DYNAMIC+0x580>
  9ccb28:	48 8b 9c 24 b0 03 00 	mov    rbx,QWORD PTR [rsp+0x3b0]
  9ccb2f:	00 
  9ccb30:	48 3b 9c 24 a0 03 00 	cmp    rbx,QWORD PTR [rsp+0x3a0]
  9ccb37:	00 
  9ccb38:	0f 85 92 fe ff ff    	jne    9cc9d0 <future_backtest::RunnerCore::run_multi+0x1720>
  9ccb3e:	48 8d bc 24 a0 03 00 	lea    rdi,[rsp+0x3a0]
  9ccb45:	00 
  9ccb46:	48 8d 35 93 ef f2 00 	lea    rsi,[rip+0xf2ef93]        # 18fbae0 <anon.609a31ba814f1e4156e50677fc366a7f.492.llvm.5215769359700358943+0x4e8>
  9ccb4d:	ff 15 75 a1 fd 00    	call   QWORD PTR [rip+0xfda175]        # 19a6cc8 <_DYNAMIC+0x4c8>
  9ccb53:	e9 78 fe ff ff       	jmp    9cc9d0 <future_backtest::RunnerCore::run_multi+0x1720>
  9ccb58:	48 b8 00 00 00 00 00 	movabs rax,0x8000000000000000
  9ccb5f:	00 00 80 
  9ccb62:	48 8b 4c 24 20       	mov    rcx,QWORD PTR [rsp+0x20]
  9ccb67:	48 39 81 68 03 00 00 	cmp    QWORD PTR [rcx+0x368],rax
  9ccb6e:	0f 84 f4 01 00 00    	je     9ccd68 <future_backtest::RunnerCore::run_multi+0x1ab8>
  9ccb74:	48 8b 44 24 20       	mov    rax,QWORD PTR [rsp+0x20]
  9ccb79:	48 05 68 03 00 00    	add    rax,0x368
  9ccb7f:	48 89 44 24 68       	mov    QWORD PTR [rsp+0x68],rax
  9ccb84:	48 89 84 24 a8 19 00 	mov    QWORD PTR [rsp+0x19a8],rax
  9ccb8b:	00 
  9ccb8c:	48 8b 84 24 c0 10 00 	mov    rax,QWORD PTR [rsp+0x10c0]
  9ccb93:	00 
  9ccb94:	48 85 c0             	test   rax,rax
  9ccb97:	74 51                	je     9ccbea <future_backtest::RunnerCore::run_multi+0x193a>
  9ccb99:	4c 8b a4 24 b8 10 00 	mov    r12,QWORD PTR [rsp+0x10b8]
  9ccba0:	00 
  9ccba1:	48 8b 4c 24 20       	mov    rcx,QWORD PTR [rsp+0x20]
  9ccba6:	48 8b a9 70 03 00 00 	mov    rbp,QWORD PTR [rcx+0x370]
  9ccbad:	4c 8b a9 78 03 00 00 	mov    r13,QWORD PTR [rcx+0x378]
  9ccbb4:	48 c1 e0 03          	shl    rax,0x3
  9ccbb8:	4c 8d 3c 40          	lea    r15,[rax+rax*2]
  9ccbbc:	31 db                	xor    ebx,ebx
  9ccbbe:	eb 09                	jmp    9ccbc9 <future_backtest::RunnerCore::run_multi+0x1919>
  9ccbc0:	48 83 c3 18          	add    rbx,0x18
  9ccbc4:	49 39 df             	cmp    r15,rbx
  9ccbc7:	74 21                	je     9ccbea <future_backtest::RunnerCore::run_multi+0x193a>
  9ccbc9:	4d 39 6c 1c 10       	cmp    QWORD PTR [r12+rbx*1+0x10],r13
  9ccbce:	75 f0                	jne    9ccbc0 <future_backtest::RunnerCore::run_multi+0x1910>
  9ccbd0:	49 8b 7c 1c 08       	mov    rdi,QWORD PTR [r12+rbx*1+0x8]
  9ccbd5:	48 89 ee             	mov    rsi,rbp
  9ccbd8:	4c 89 ea             	mov    rdx,r13
  9ccbdb:	ff 15 d7 a2 fd 00    	call   QWORD PTR [rip+0xfda2d7]        # 19a6eb8 <bcmp@GLIBC_2.2.5>
  9ccbe1:	85 c0                	test   eax,eax
  9ccbe3:	75 db                	jne    9ccbc0 <future_backtest::RunnerCore::run_multi+0x1910>
  9ccbe5:	e9 7e 01 00 00       	jmp    9ccd68 <future_backtest::RunnerCore::run_multi+0x1ab8>
  9ccbea:	48 8d bc 24 10 06 00 	lea    rdi,[rsp+0x610]
  9ccbf1:	00 
  9ccbf2:	48 8b 74 24 68       	mov    rsi,QWORD PTR [rsp+0x68]
  9ccbf7:	48 8d 15 22 ee f2 00 	lea    rdx,[rip+0xf2ee22]        # 18fba20 <anon.609a31ba814f1e4156e50677fc366a7f.492.llvm.5215769359700358943+0x428>
  9ccbfe:	ff 15 7c a0 fd 00    	call   QWORD PTR [rip+0xfda07c]        # 19a6c80 <_DYNAMIC+0x480>
  9ccc04:	48 8b 9c 24 c0 10 00 	mov    rbx,QWORD PTR [rsp+0x10c0]
  9ccc0b:	00 
  9ccc0c:	48 3b 9c 24 b0 10 00 	cmp    rbx,QWORD PTR [rsp+0x10b0]
  9ccc13:	00 
  9ccc14:	75 15                	jne    9ccc2b <future_backtest::RunnerCore::run_multi+0x197b>
  9ccc16:	48 8d bc 24 b0 10 00 	lea    rdi,[rsp+0x10b0]
  9ccc1d:	00 
  9ccc1e:	48 8d 35 13 ee f2 00 	lea    rsi,[rip+0xf2ee13]        # 18fba38 <anon.609a31ba814f1e4156e50677fc366a7f.492.llvm.5215769359700358943+0x440>
  9ccc25:	ff 15 9d a0 fd 00    	call   QWORD PTR [rip+0xfda09d]        # 19a6cc8 <_DYNAMIC+0x4c8>
  9ccc2b:	48 8b 84 24 b8 10 00 	mov    rax,QWORD PTR [rsp+0x10b8]
  9ccc32:	00 
  9ccc33:	48 8d 0c 5b          	lea    rcx,[rbx+rbx*2]
  9ccc37:	48 8b 94 24 20 06 00 	mov    rdx,QWORD PTR [rsp+0x620]
  9ccc3e:	00 
  9ccc3f:	48 89 54 c8 10       	mov    QWORD PTR [rax+rcx*8+0x10],rdx
  9ccc44:	66 0f 10 84 24 10 06 	movupd xmm0,XMMWORD PTR [rsp+0x610]
  9ccc4b:	00 00 
  9ccc4d:	66 0f 11 04 c8       	movupd XMMWORD PTR [rax+rcx*8],xmm0
  9ccc52:	48 ff c3             	inc    rbx
  9ccc55:	48 89 9c 24 c0 10 00 	mov    QWORD PTR [rsp+0x10c0],rbx
  9ccc5c:	00 
  9ccc5d:	48 8b 4c 24 20       	mov    rcx,QWORD PTR [rsp+0x20]
  9ccc62:	48 8d 81 20 01 00 00 	lea    rax,[rcx+0x120]
  9ccc69:	48 81 c1 38 01 00 00 	add    rcx,0x138
  9ccc70:	48 89 8c 24 10 06 00 	mov    QWORD PTR [rsp+0x610],rcx
  9ccc77:	00 
  9ccc78:	48 8d 0d c1 da fd ff 	lea    rcx,[rip+0xfffffffffffddac1]        # 9aa740 <<alloc::string::String as core::fmt::Display>::fmt>
  9ccc7f:	48 89 8c 24 18 06 00 	mov    QWORD PTR [rsp+0x618],rcx
  9ccc86:	00 
  9ccc87:	48 8d 94 24 a8 19 00 	lea    rdx,[rsp+0x19a8]
  9ccc8e:	00 
  9ccc8f:	48 89 94 24 20 06 00 	mov    QWORD PTR [rsp+0x620],rdx
  9ccc96:	00 
  9ccc97:	48 8d 15 b2 86 f2 ff 	lea    rdx,[rip+0xfffffffffff286b2]        # 8f5350 <<&T as core::fmt::Display>::fmt>
  9ccc9e:	48 89 94 24 28 06 00 	mov    QWORD PTR [rsp+0x628],rdx
  9ccca5:	00 
  9ccca6:	48 89 84 24 30 06 00 	mov    QWORD PTR [rsp+0x630],rax
  9cccad:	00 
  9cccae:	48 89 8c 24 38 06 00 	mov    QWORD PTR [rsp+0x638],rcx
  9cccb5:	00 
  9cccb6:	48 8d 05 3b e1 f2 00 	lea    rax,[rip+0xf2e13b]        # 18fadf8 <anon.609a31ba814f1e4156e50677fc366a7f.248.llvm.5215769359700358943+0x830>
  9cccbd:	48 89 84 24 d0 11 00 	mov    QWORD PTR [rsp+0x11d0],rax
  9cccc4:	00 
  9cccc5:	48 c7 84 24 d8 11 00 	mov    QWORD PTR [rsp+0x11d8],0x3
  9ccccc:	00 03 00 00 00 
  9cccd1:	48 c7 84 24 f0 11 00 	mov    QWORD PTR [rsp+0x11f0],0x0
  9cccd8:	00 00 00 00 00 
  9cccdd:	48 8d 84 24 10 06 00 	lea    rax,[rsp+0x610]
  9ccce4:	00 
  9ccce5:	48 89 84 24 e0 11 00 	mov    QWORD PTR [rsp+0x11e0],rax
  9cccec:	00 
  9ccced:	48 c7 84 24 e8 11 00 	mov    QWORD PTR [rsp+0x11e8],0x3
  9cccf4:	00 03 00 00 00 
  9cccf9:	48 8d bc 24 60 18 00 	lea    rdi,[rsp+0x1860]
  9ccd00:	00 
  9ccd01:	48 8d b4 24 d0 11 00 	lea    rsi,[rsp+0x11d0]
  9ccd08:	00 
  9ccd09:	ff 15 71 a0 fd 00    	call   QWORD PTR [rip+0xfda071]        # 19a6d80 <_DYNAMIC+0x580>
  9ccd0f:	48 8b 9c 24 b0 03 00 	mov    rbx,QWORD PTR [rsp+0x3b0]
  9ccd16:	00 
  9ccd17:	48 3b 9c 24 a0 03 00 	cmp    rbx,QWORD PTR [rsp+0x3a0]
  9ccd1e:	00 
  9ccd1f:	75 15                	jne    9ccd36 <future_backtest::RunnerCore::run_multi+0x1a86>
  9ccd21:	48 8d bc 24 a0 03 00 	lea    rdi,[rsp+0x3a0]
  9ccd28:	00 
  9ccd29:	48 8d 35 20 ed f2 00 	lea    rsi,[rip+0xf2ed20]        # 18fba50 <anon.609a31ba814f1e4156e50677fc366a7f.492.llvm.5215769359700358943+0x458>
  9ccd30:	ff 15 92 9f fd 00    	call   QWORD PTR [rip+0xfd9f92]        # 19a6cc8 <_DYNAMIC+0x4c8>
  9ccd36:	48 8b 84 24 a8 03 00 	mov    rax,QWORD PTR [rsp+0x3a8]
  9ccd3d:	00 
  9ccd3e:	48 8d 0c 5b          	lea    rcx,[rbx+rbx*2]
  9ccd42:	48 8b 94 24 70 18 00 	mov    rdx,QWORD PTR [rsp+0x1870]
  9ccd49:	00 
  9ccd4a:	48 89 54 c8 10       	mov    QWORD PTR [rax+rcx*8+0x10],rdx
  9ccd4f:	66 0f 10 84 24 60 18 	movupd xmm0,XMMWORD PTR [rsp+0x1860]
  9ccd56:	00 00 
  9ccd58:	66 0f 11 04 c8       	movupd XMMWORD PTR [rax+rcx*8],xmm0
  9ccd5d:	48 ff c3             	inc    rbx
  9ccd60:	48 89 9c 24 b0 03 00 	mov    QWORD PTR [rsp+0x3b0],rbx
  9ccd67:	00 
  9ccd68:	48 b8 00 00 00 00 00 	movabs rax,0x8000000000000000
  9ccd6f:	00 00 80 
  9ccd72:	48 8b 4c 24 20       	mov    rcx,QWORD PTR [rsp+0x20]
  9ccd77:	48 39 81 80 03 00 00 	cmp    QWORD PTR [rcx+0x380],rax
  9ccd7e:	0f 84 f4 01 00 00    	je     9ccf78 <future_backtest::RunnerCore::run_multi+0x1cc8>
  9ccd84:	48 8b 44 24 20       	mov    rax,QWORD PTR [rsp+0x20]
  9ccd89:	48 05 80 03 00 00    	add    rax,0x380
  9ccd8f:	48 89 44 24 68       	mov    QWORD PTR [rsp+0x68],rax
  9ccd94:	48 89 84 24 90 0e 00 	mov    QWORD PTR [rsp+0xe90],rax
  9ccd9b:	00 
  9ccd9c:	48 8b 84 24 c0 10 00 	mov    rax,QWORD PTR [rsp+0x10c0]
  9ccda3:	00 
  9ccda4:	48 85 c0             	test   rax,rax
  9ccda7:	74 51                	je     9ccdfa <future_backtest::RunnerCore::run_multi+0x1b4a>
  9ccda9:	4c 8b a4 24 b8 10 00 	mov    r12,QWORD PTR [rsp+0x10b8]
  9ccdb0:	00 
  9ccdb1:	48 8b 4c 24 20       	mov    rcx,QWORD PTR [rsp+0x20]
  9ccdb6:	48 8b a9 88 03 00 00 	mov    rbp,QWORD PTR [rcx+0x388]
  9ccdbd:	4c 8b a9 90 03 00 00 	mov    r13,QWORD PTR [rcx+0x390]
  9ccdc4:	48 c1 e0 03          	shl    rax,0x3
  9ccdc8:	4c 8d 3c 40          	lea    r15,[rax+rax*2]
  9ccdcc:	31 db                	xor    ebx,ebx
  9ccdce:	eb 09                	jmp    9ccdd9 <future_backtest::RunnerCore::run_multi+0x1b29>
  9ccdd0:	48 83 c3 18          	add    rbx,0x18
  9ccdd4:	49 39 df             	cmp    r15,rbx
  9ccdd7:	74 21                	je     9ccdfa <future_backtest::RunnerCore::run_multi+0x1b4a>
  9ccdd9:	4d 39 6c 1c 10       	cmp    QWORD PTR [r12+rbx*1+0x10],r13
  9ccdde:	75 f0                	jne    9ccdd0 <future_backtest::RunnerCore::run_multi+0x1b20>
  9ccde0:	49 8b 7c 1c 08       	mov    rdi,QWORD PTR [r12+rbx*1+0x8]
  9ccde5:	48 89 ee             	mov    rsi,rbp
  9ccde8:	4c 89 ea             	mov    rdx,r13
  9ccdeb:	ff 15 c7 a0 fd 00    	call   QWORD PTR [rip+0xfda0c7]        # 19a6eb8 <bcmp@GLIBC_2.2.5>
  9ccdf1:	85 c0                	test   eax,eax
  9ccdf3:	75 db                	jne    9ccdd0 <future_backtest::RunnerCore::run_multi+0x1b20>
  9ccdf5:	e9 7e 01 00 00       	jmp    9ccf78 <future_backtest::RunnerCore::run_multi+0x1cc8>
  9ccdfa:	48 8d bc 24 10 06 00 	lea    rdi,[rsp+0x610]
  9cce01:	00 
  9cce02:	48 8b 74 24 68       	mov    rsi,QWORD PTR [rsp+0x68]
  9cce07:	48 8d 15 5a ec f2 00 	lea    rdx,[rip+0xf2ec5a]        # 18fba68 <anon.609a31ba814f1e4156e50677fc366a7f.492.llvm.5215769359700358943+0x470>
  9cce0e:	ff 15 6c 9e fd 00    	call   QWORD PTR [rip+0xfd9e6c]        # 19a6c80 <_DYNAMIC+0x480>
  9cce14:	48 8b 9c 24 c0 10 00 	mov    rbx,QWORD PTR [rsp+0x10c0]
  9cce1b:	00 
  9cce1c:	48 3b 9c 24 b0 10 00 	cmp    rbx,QWORD PTR [rsp+0x10b0]
  9cce23:	00 
  9cce24:	75 15                	jne    9cce3b <future_backtest::RunnerCore::run_multi+0x1b8b>
  9cce26:	48 8d bc 24 b0 10 00 	lea    rdi,[rsp+0x10b0]
  9cce2d:	00 
  9cce2e:	48 8d 35 4b ec f2 00 	lea    rsi,[rip+0xf2ec4b]        # 18fba80 <anon.609a31ba814f1e4156e50677fc366a7f.492.llvm.5215769359700358943+0x488>
  9cce35:	ff 15 8d 9e fd 00    	call   QWORD PTR [rip+0xfd9e8d]        # 19a6cc8 <_DYNAMIC+0x4c8>
  9cce3b:	48 8b 84 24 b8 10 00 	mov    rax,QWORD PTR [rsp+0x10b8]
  9cce42:	00 
  9cce43:	48 8d 0c 5b          	lea    rcx,[rbx+rbx*2]
  9cce47:	48 8b 94 24 20 06 00 	mov    rdx,QWORD PTR [rsp+0x620]
  9cce4e:	00 
  9cce4f:	48 89 54 c8 10       	mov    QWORD PTR [rax+rcx*8+0x10],rdx
  9cce54:	66 0f 10 84 24 10 06 	movupd xmm0,XMMWORD PTR [rsp+0x610]
  9cce5b:	00 00 
  9cce5d:	66 0f 11 04 c8       	movupd XMMWORD PTR [rax+rcx*8],xmm0
  9cce62:	48 ff c3             	inc    rbx
  9cce65:	48 89 9c 24 c0 10 00 	mov    QWORD PTR [rsp+0x10c0],rbx
  9cce6c:	00 
  9cce6d:	48 8b 4c 24 20       	mov    rcx,QWORD PTR [rsp+0x20]
  9cce72:	48 8d 81 20 01 00 00 	lea    rax,[rcx+0x120]
  9cce79:	48 81 c1 38 01 00 00 	add    rcx,0x138
  9cce80:	48 89 8c 24 10 06 00 	mov    QWORD PTR [rsp+0x610],rcx
  9cce87:	00 
  9cce88:	48 8d 0d b1 d8 fd ff 	lea    rcx,[rip+0xfffffffffffdd8b1]        # 9aa740 <<alloc::string::String as core::fmt::Display>::fmt>
  9cce8f:	48 89 8c 24 18 06 00 	mov    QWORD PTR [rsp+0x618],rcx
  9cce96:	00 
  9cce97:	48 8d 94 24 90 0e 00 	lea    rdx,[rsp+0xe90]
  9cce9e:	00 
  9cce9f:	48 89 94 24 20 06 00 	mov    QWORD PTR [rsp+0x620],rdx
  9ccea6:	00 
  9ccea7:	48 8d 15 a2 84 f2 ff 	lea    rdx,[rip+0xfffffffffff284a2]        # 8f5350 <<&T as core::fmt::Display>::fmt>
  9cceae:	48 89 94 24 28 06 00 	mov    QWORD PTR [rsp+0x628],rdx
  9cceb5:	00 
  9cceb6:	48 89 84 24 30 06 00 	mov    QWORD PTR [rsp+0x630],rax
  9ccebd:	00 
  9ccebe:	48 89 8c 24 38 06 00 	mov    QWORD PTR [rsp+0x638],rcx
  9ccec5:	00 
  9ccec6:	48 8d 05 2b df f2 00 	lea    rax,[rip+0xf2df2b]        # 18fadf8 <anon.609a31ba814f1e4156e50677fc366a7f.248.llvm.5215769359700358943+0x830>
  9ccecd:	48 89 84 24 d0 11 00 	mov    QWORD PTR [rsp+0x11d0],rax
  9cced4:	00 
  9cced5:	48 c7 84 24 d8 11 00 	mov    QWORD PTR [rsp+0x11d8],0x3
  9ccedc:	00 03 00 00 00 
  9ccee1:	48 c7 84 24 f0 11 00 	mov    QWORD PTR [rsp+0x11f0],0x0
  9ccee8:	00 00 00 00 00 
  9cceed:	48 8d 84 24 10 06 00 	lea    rax,[rsp+0x610]
  9ccef4:	00 
  9ccef5:	48 89 84 24 e0 11 00 	mov    QWORD PTR [rsp+0x11e0],rax
  9ccefc:	00 
  9ccefd:	48 c7 84 24 e8 11 00 	mov    QWORD PTR [rsp+0x11e8],0x3
  9ccf04:	00 03 00 00 00 
  9ccf09:	48 8d bc 24 e0 0e 00 	lea    rdi,[rsp+0xee0]
  9ccf10:	00 
  9ccf11:	48 8d b4 24 d0 11 00 	lea    rsi,[rsp+0x11d0]
  9ccf18:	00 
  9ccf19:	ff 15 61 9e fd 00    	call   QWORD PTR [rip+0xfd9e61]        # 19a6d80 <_DYNAMIC+0x580>
  9ccf1f:	48 8b 9c 24 b0 03 00 	mov    rbx,QWORD PTR [rsp+0x3b0]
  9ccf26:	00 
  9ccf27:	48 3b 9c 24 a0 03 00 	cmp    rbx,QWORD PTR [rsp+0x3a0]
  9ccf2e:	00 
  9ccf2f:	75 15                	jne    9ccf46 <future_backtest::RunnerCore::run_multi+0x1c96>
  9ccf31:	48 8d bc 24 a0 03 00 	lea    rdi,[rsp+0x3a0]
  9ccf38:	00 
  9ccf39:	48 8d 35 58 eb f2 00 	lea    rsi,[rip+0xf2eb58]        # 18fba98 <anon.609a31ba814f1e4156e50677fc366a7f.492.llvm.5215769359700358943+0x4a0>
  9ccf40:	ff 15 82 9d fd 00    	call   QWORD PTR [rip+0xfd9d82]        # 19a6cc8 <_DYNAMIC+0x4c8>
  9ccf46:	48 8b 84 24 a8 03 00 	mov    rax,QWORD PTR [rsp+0x3a8]
  9ccf4d:	00 
  9ccf4e:	48 8d 0c 5b          	lea    rcx,[rbx+rbx*2]
  9ccf52:	48 8b 94 24 f0 0e 00 	mov    rdx,QWORD PTR [rsp+0xef0]
  9ccf59:	00 
  9ccf5a:	48 89 54 c8 10       	mov    QWORD PTR [rax+rcx*8+0x10],rdx
  9ccf5f:	66 0f 10 84 24 e0 0e 	movupd xmm0,XMMWORD PTR [rsp+0xee0]
  9ccf66:	00 00 
  9ccf68:	66 0f 11 04 c8       	movupd XMMWORD PTR [rax+rcx*8],xmm0
  9ccf6d:	48 ff c3             	inc    rbx
  9ccf70:	48 89 9c 24 b0 03 00 	mov    QWORD PTR [rsp+0x3b0],rbx
  9ccf77:	00 
  9ccf78:	48 8b 84 24 c0 10 00 	mov    rax,QWORD PTR [rsp+0x10c0]
  9ccf7f:	00 
  9ccf80:	48 89 84 24 90 1b 00 	mov    QWORD PTR [rsp+0x1b90],rax
  9ccf87:	00 
  9ccf88:	0f 10 84 24 b0 10 00 	movups xmm0,XMMWORD PTR [rsp+0x10b0]
  9ccf8f:	00 
  9ccf90:	0f 29 84 24 80 1b 00 	movaps XMMWORD PTR [rsp+0x1b80],xmm0
  9ccf97:	00 
  9ccf98:	48 8b 84 24 b0 03 00 	mov    rax,QWORD PTR [rsp+0x3b0]
  9ccf9f:	00 
  9ccfa0:	4c 8d a4 24 98 1b 00 	lea    r12,[rsp+0x1b98]
  9ccfa7:	00 
  9ccfa8:	49 89 44 24 10       	mov    QWORD PTR [r12+0x10],rax
  9ccfad:	66 0f 10 84 24 a0 03 	movupd xmm0,XMMWORD PTR [rsp+0x3a0]
  9ccfb4:	00 00 
  9ccfb6:	66 41 0f 11 04 24    	movupd XMMWORD PTR [r12],xmm0
  9ccfbc:	4d 85 f6             	test   r14,r14
  9ccfbf:	4c 8b 2d ba 9c fd 00 	mov    r13,QWORD PTR [rip+0xfd9cba]        # 19a6c80 <_DYNAMIC+0x480>
  9ccfc6:	48 8b 2d 53 9a fd 00 	mov    rbp,QWORD PTR [rip+0xfd9a53]        # 19a6a20 <_DYNAMIC+0x220>
  9ccfcd:	74 2f                	je     9ccffe <future_backtest::RunnerCore::run_multi+0x1d4e>
  9ccfcf:	48 8b 84 24 80 00 00 	mov    rax,QWORD PTR [rsp+0x80]
  9ccfd6:	00 
  9ccfd7:	4c 8d 78 08          	lea    r15,[rax+0x8]
  9ccfdb:	eb 0c                	jmp    9ccfe9 <future_backtest::RunnerCore::run_multi+0x1d39>
  9ccfdd:	0f 1f 00             	nop    DWORD PTR [rax]
  9ccfe0:	49 83 c7 18          	add    r15,0x18
  9ccfe4:	49 ff ce             	dec    r14
  9ccfe7:	74 15                	je     9ccffe <future_backtest::RunnerCore::run_multi+0x1d4e>
  9ccfe9:	49 8b 77 f8          	mov    rsi,QWORD PTR [r15-0x8]
  9ccfed:	48 85 f6             	test   rsi,rsi
  9ccff0:	74 ee                	je     9ccfe0 <future_backtest::RunnerCore::run_multi+0x1d30>
  9ccff2:	49 8b 3f             	mov    rdi,QWORD PTR [r15]
  9ccff5:	ba 01 00 00 00       	mov    edx,0x1
  9ccffa:	ff d5                	call   rbp
  9ccffc:	eb e2                	jmp    9ccfe0 <future_backtest::RunnerCore::run_multi+0x1d30>
  9ccffe:	48 8b 84 24 00 05 00 	mov    rax,QWORD PTR [rsp+0x500]
  9cd005:	00 
  9cd006:	48 85 c0             	test   rax,rax
  9cd009:	48 8b 5c 24 20       	mov    rbx,QWORD PTR [rsp+0x20]
  9cd00e:	74 17                	je     9cd027 <future_backtest::RunnerCore::run_multi+0x1d77>
  9cd010:	48 c1 e0 03          	shl    rax,0x3
  9cd014:	48 8d 34 40          	lea    rsi,[rax+rax*2]
  9cd018:	ba 08 00 00 00       	mov    edx,0x8
  9cd01d:	48 8b bc 24 80 00 00 	mov    rdi,QWORD PTR [rsp+0x80]
  9cd024:	00 
  9cd025:	ff d5                	call   rbp
  9cd027:	48 8b 84 24 90 1b 00 	mov    rax,QWORD PTR [rsp+0x1b90]
  9cd02e:	00 
  9cd02f:	48 89 84 24 b0 03 00 	mov    QWORD PTR [rsp+0x3b0],rax
  9cd036:	00 
  9cd037:	0f 28 84 24 80 1b 00 	movaps xmm0,XMMWORD PTR [rsp+0x1b80]
  9cd03e:	00 
  9cd03f:	0f 29 84 24 a0 03 00 	movaps XMMWORD PTR [rsp+0x3a0],xmm0
  9cd046:	00 
  9cd047:	49 8b 44 24 10       	mov    rax,QWORD PTR [r12+0x10]
  9cd04c:	48 89 84 24 d0 01 00 	mov    QWORD PTR [rsp+0x1d0],rax
  9cd053:	00 
  9cd054:	41 0f 10 04 24       	movups xmm0,XMMWORD PTR [r12]
  9cd059:	0f 29 84 24 c0 01 00 	movaps XMMWORD PTR [rsp+0x1c0],xmm0
  9cd060:	00 
  9cd061:	48 8d 73 58          	lea    rsi,[rbx+0x58]
  9cd065:	48 8d bc 24 d0 11 00 	lea    rdi,[rsp+0x11d0]
  9cd06c:	00 
  9cd06d:	48 8d 15 e4 fa f2 00 	lea    rdx,[rip+0xf2fae4]        # 18fcb58 <anon.609a31ba814f1e4156e50677fc366a7f.492.llvm.5215769359700358943+0x1560>
  9cd074:	41 ff d5             	call   r13
  9cd077:	4c 8b 74 24 50       	mov    r14,QWORD PTR [rsp+0x50]
  9cd07c:	48 8d 73 70          	lea    rsi,[rbx+0x70]
  9cd080:	48 8d bc 24 10 06 00 	lea    rdi,[rsp+0x610]
  9cd087:	00 
  9cd088:	48 8d 15 e1 fa f2 00 	lea    rdx,[rip+0xf2fae1]        # 18fcb70 <anon.609a31ba814f1e4156e50677fc366a7f.492.llvm.5215769359700358943+0x1578>
  9cd08f:	41 ff d5             	call   r13
  9cd092:	48 8b 84 24 e0 11 00 	mov    rax,QWORD PTR [rsp+0x11e0]
  9cd099:	00 
  9cd09a:	48 89 84 24 90 1b 00 	mov    QWORD PTR [rsp+0x1b90],rax
  9cd0a1:	00 
  9cd0a2:	0f 10 84 24 d0 11 00 	movups xmm0,XMMWORD PTR [rsp+0x11d0]
  9cd0a9:	00 
  9cd0aa:	0f 29 84 24 80 1b 00 	movaps XMMWORD PTR [rsp+0x1b80],xmm0
  9cd0b1:	00 
  9cd0b2:	48 8b 84 24 20 06 00 	mov    rax,QWORD PTR [rsp+0x620]
  9cd0b9:	00 
  9cd0ba:	49 89 44 24 10       	mov    QWORD PTR [r12+0x10],rax
  9cd0bf:	0f 10 84 24 10 06 00 	movups xmm0,XMMWORD PTR [rsp+0x610]
  9cd0c6:	00 
  9cd0c7:	41 0f 11 04 24       	movups XMMWORD PTR [r12],xmm0
  9cd0cc:	48 b8 00 00 00 00 00 	movabs rax,0x8000000000000000
  9cd0d3:	00 00 80 
  9cd0d6:	48 39 83 00 02 00 00 	cmp    QWORD PTR [rbx+0x200],rax
  9cd0dd:	75 0a                	jne    9cd0e9 <future_backtest::RunnerCore::run_multi+0x1e39>
  9cd0df:	48 89 84 24 60 18 00 	mov    QWORD PTR [rsp+0x1860],rax
  9cd0e6:	00 
  9cd0e7:	eb 1b                	jmp    9cd104 <future_backtest::RunnerCore::run_multi+0x1e54>
  9cd0e9:	48 8d b3 00 02 00 00 	lea    rsi,[rbx+0x200]
  9cd0f0:	48 8d bc 24 60 18 00 	lea    rdi,[rsp+0x1860]
  9cd0f7:	00 
  9cd0f8:	48 8d 15 81 dc f2 00 	lea    rdx,[rip+0xf2dc81]        # 18fad80 <anon.609a31ba814f1e4156e50677fc366a7f.248.llvm.5215769359700358943+0x7b8>
  9cd0ff:	e8 5c 4c fa ff       	call   971d60 <<alloc::vec::Vec<T,A> as core::clone::Clone>::clone>
  9cd104:	48 8d b3 d0 01 00 00 	lea    rsi,[rbx+0x1d0]
  9cd10b:	48 8d bc 24 e0 0e 00 	lea    rdi,[rsp+0xee0]
  9cd112:	00 
  9cd113:	48 8d 15 ee fb f2 00 	lea    rdx,[rip+0xf2fbee]        # 18fcd08 <anon.609a31ba814f1e4156e50677fc366a7f.492.llvm.5215769359700358943+0x1710>
  9cd11a:	e8 41 4c fa ff       	call   971d60 <<alloc::vec::Vec<T,A> as core::clone::Clone>::clone>
  9cd11f:	4c 8b a3 f8 01 00 00 	mov    r12,QWORD PTR [rbx+0x1f8]
  9cd126:	4e 8d 3c e5 00 00 00 	lea    r15,[r12*8+0x0]
  9cd12d:	00 
  9cd12e:	48 b8 ff ff ff ff ff 	movabs rax,0x1fffffffffffffff
  9cd135:	ff ff 1f 
  9cd138:	49 39 c4             	cmp    r12,rax
  9cd13b:	0f 97 c0             	seta   al
  9cd13e:	4d 39 f7             	cmp    r15,r14
  9cd141:	0f 97 c1             	seta   cl
  9cd144:	08 c1                	or     cl,al
  9cd146:	0f 85 00 03 00 00    	jne    9cd44c <future_backtest::RunnerCore::run_multi+0x219c>
  9cd14c:	4c 8b ab f0 01 00 00 	mov    r13,QWORD PTR [rbx+0x1f0]
  9cd153:	4d 85 ff             	test   r15,r15
  9cd156:	74 30                	je     9cd188 <future_backtest::RunnerCore::run_multi+0x1ed8>
  9cd158:	ff 15 e2 98 fd 00    	call   QWORD PTR [rip+0xfd98e2]        # 19a6a40 <_DYNAMIC+0x240>
  9cd15e:	41 be 08 00 00 00    	mov    r14d,0x8
  9cd164:	be 08 00 00 00       	mov    esi,0x8
  9cd169:	4c 89 ff             	mov    rdi,r15
  9cd16c:	ff 15 a6 98 fd 00    	call   QWORD PTR [rip+0xfd98a6]        # 19a6a18 <_DYNAMIC+0x218>
  9cd172:	48 85 c0             	test   rax,rax
  9cd175:	0f 84 d4 02 00 00    	je     9cd44f <future_backtest::RunnerCore::run_multi+0x219f>
  9cd17b:	48 89 c5             	mov    rbp,rax
  9cd17e:	4c 89 e3             	mov    rbx,r12
  9cd181:	4c 8b 74 24 50       	mov    r14,QWORD PTR [rsp+0x50]
  9cd186:	eb 07                	jmp    9cd18f <future_backtest::RunnerCore::run_multi+0x1edf>
  9cd188:	bd 08 00 00 00       	mov    ebp,0x8
  9cd18d:	31 db                	xor    ebx,ebx
  9cd18f:	48 89 ef             	mov    rdi,rbp
  9cd192:	4c 89 ee             	mov    rsi,r13
  9cd195:	4c 89 fa             	mov    rdx,r15
  9cd198:	ff 15 aa 99 fd 00    	call   QWORD PTR [rip+0xfd99aa]        # 19a6b48 <memcpy@GLIBC_2.14>
  9cd19e:	0f 10 84 24 60 18 00 	movups xmm0,XMMWORD PTR [rsp+0x1860]
  9cd1a5:	00 
  9cd1a6:	48 8d 8c 24 00 12 00 	lea    rcx,[rsp+0x1200]
  9cd1ad:	00 
  9cd1ae:	0f 11 01             	movups XMMWORD PTR [rcx],xmm0
  9cd1b1:	48 8b 84 24 70 18 00 	mov    rax,QWORD PTR [rsp+0x1870]
  9cd1b8:	00 
  9cd1b9:	48 89 41 10          	mov    QWORD PTR [rcx+0x10],rax
  9cd1bd:	0f 10 84 24 e0 0e 00 	movups xmm0,XMMWORD PTR [rsp+0xee0]
  9cd1c4:	00 
  9cd1c5:	0f 29 84 24 d0 11 00 	movaps XMMWORD PTR [rsp+0x11d0],xmm0
  9cd1cc:	00 
  9cd1cd:	48 8b 84 24 f0 0e 00 	mov    rax,QWORD PTR [rsp+0xef0]
  9cd1d4:	00 
  9cd1d5:	48 89 84 24 e0 11 00 	mov    QWORD PTR [rsp+0x11e0],rax
  9cd1dc:	00 
  9cd1dd:	48 89 9c 24 e8 11 00 	mov    QWORD PTR [rsp+0x11e8],rbx
  9cd1e4:	00 
  9cd1e5:	48 89 ac 24 f0 11 00 	mov    QWORD PTR [rsp+0x11f0],rbp
  9cd1ec:	00 
  9cd1ed:	4c 89 a4 24 f8 11 00 	mov    QWORD PTR [rsp+0x11f8],r12
  9cd1f4:	00 
  9cd1f5:	48 b8 00 00 00 00 00 	movabs rax,0x8000000000000000
  9cd1fc:	00 00 80 
  9cd1ff:	48 8b 5c 24 20       	mov    rbx,QWORD PTR [rsp+0x20]
  9cd204:	48 39 83 48 02 00 00 	cmp    QWORD PTR [rbx+0x248],rax
  9cd20b:	75 0a                	jne    9cd217 <future_backtest::RunnerCore::run_multi+0x1f67>
  9cd20d:	48 89 84 24 60 18 00 	mov    QWORD PTR [rsp+0x1860],rax
  9cd214:	00 
  9cd215:	eb 1b                	jmp    9cd232 <future_backtest::RunnerCore::run_multi+0x1f82>
  9cd217:	48 8d b3 48 02 00 00 	lea    rsi,[rbx+0x248]
  9cd21e:	48 8d bc 24 60 18 00 	lea    rdi,[rsp+0x1860]
  9cd225:	00 
  9cd226:	48 8d 15 53 db f2 00 	lea    rdx,[rip+0xf2db53]        # 18fad80 <anon.609a31ba814f1e4156e50677fc366a7f.248.llvm.5215769359700358943+0x7b8>
  9cd22d:	e8 2e 4b fa ff       	call   971d60 <<alloc::vec::Vec<T,A> as core::clone::Clone>::clone>
  9cd232:	48 8d b3 18 02 00 00 	lea    rsi,[rbx+0x218]
  9cd239:	48 8d bc 24 e0 0e 00 	lea    rdi,[rsp+0xee0]
  9cd240:	00 
  9cd241:	48 8d 15 c0 fa f2 00 	lea    rdx,[rip+0xf2fac0]        # 18fcd08 <anon.609a31ba814f1e4156e50677fc366a7f.492.llvm.5215769359700358943+0x1710>
  9cd248:	e8 13 4b fa ff       	call   971d60 <<alloc::vec::Vec<T,A> as core::clone::Clone>::clone>
  9cd24d:	4c 8b a3 40 02 00 00 	mov    r12,QWORD PTR [rbx+0x240]
  9cd254:	4e 8d 3c e5 00 00 00 	lea    r15,[r12*8+0x0]
  9cd25b:	00 
  9cd25c:	48 b8 ff ff ff ff ff 	movabs rax,0x1fffffffffffffff
  9cd263:	ff ff 1f 
  9cd266:	49 39 c4             	cmp    r12,rax
  9cd269:	0f 97 c0             	seta   al
  9cd26c:	4d 39 f7             	cmp    r15,r14
  9cd26f:	0f 97 c1             	seta   cl
  9cd272:	08 c1                	or     cl,al
  9cd274:	0f 85 35 04 00 00    	jne    9cd6af <future_backtest::RunnerCore::run_multi+0x23ff>
  9cd27a:	48 8b ab 38 02 00 00 	mov    rbp,QWORD PTR [rbx+0x238]
  9cd281:	4d 85 ff             	test   r15,r15
  9cd284:	74 2b                	je     9cd2b1 <future_backtest::RunnerCore::run_multi+0x2001>
  9cd286:	ff 15 b4 97 fd 00    	call   QWORD PTR [rip+0xfd97b4]        # 19a6a40 <_DYNAMIC+0x240>
  9cd28c:	41 be 08 00 00 00    	mov    r14d,0x8
  9cd292:	be 08 00 00 00       	mov    esi,0x8
  9cd297:	4c 89 ff             	mov    rdi,r15
  9cd29a:	ff 15 78 97 fd 00    	call   QWORD PTR [rip+0xfd9778]        # 19a6a18 <_DYNAMIC+0x218>
  9cd2a0:	48 85 c0             	test   rax,rax
  9cd2a3:	0f 84 09 04 00 00    	je     9cd6b2 <future_backtest::RunnerCore::run_multi+0x2402>
  9cd2a9:	49 89 c5             	mov    r13,rax
  9cd2ac:	4d 89 e6             	mov    r14,r12
  9cd2af:	eb 09                	jmp    9cd2ba <future_backtest::RunnerCore::run_multi+0x200a>
  9cd2b1:	41 bd 08 00 00 00    	mov    r13d,0x8
  9cd2b7:	45 31 f6             	xor    r14d,r14d
  9cd2ba:	4c 89 ef             	mov    rdi,r13
  9cd2bd:	48 89 ee             	mov    rsi,rbp
  9cd2c0:	4c 89 fa             	mov    rdx,r15
  9cd2c3:	ff 15 7f 98 fd 00    	call   QWORD PTR [rip+0xfd987f]        # 19a6b48 <memcpy@GLIBC_2.14>
  9cd2c9:	48 8b 84 24 70 18 00 	mov    rax,QWORD PTR [rsp+0x1870]
  9cd2d0:	00 
  9cd2d1:	48 8d 8c 24 58 06 00 	lea    rcx,[rsp+0x658]
  9cd2d8:	00 
  9cd2d9:	48 89 41 40          	mov    QWORD PTR [rcx+0x40],rax
  9cd2dd:	0f 10 84 24 60 18 00 	movups xmm0,XMMWORD PTR [rsp+0x1860]
  9cd2e4:	00 
  9cd2e5:	0f 11 41 30          	movups XMMWORD PTR [rcx+0x30],xmm0
  9cd2e9:	48 8b 84 24 f0 0e 00 	mov    rax,QWORD PTR [rsp+0xef0]
  9cd2f0:	00 
  9cd2f1:	48 89 41 10          	mov    QWORD PTR [rcx+0x10],rax
  9cd2f5:	0f 10 84 24 e0 0e 00 	movups xmm0,XMMWORD PTR [rsp+0xee0]
  9cd2fc:	00 
  9cd2fd:	0f 11 01             	movups XMMWORD PTR [rcx],xmm0
  9cd300:	48 8b 84 24 b0 03 00 	mov    rax,QWORD PTR [rsp+0x3b0]
  9cd307:	00 
  9cd308:	48 89 41 58          	mov    QWORD PTR [rcx+0x58],rax
  9cd30c:	0f 28 84 24 a0 03 00 	movaps xmm0,XMMWORD PTR [rsp+0x3a0]
  9cd313:	00 
  9cd314:	0f 11 41 48          	movups XMMWORD PTR [rcx+0x48],xmm0
  9cd318:	48 8b 84 24 d0 01 00 	mov    rax,QWORD PTR [rsp+0x1d0]
  9cd31f:	00 
  9cd320:	48 89 41 70          	mov    QWORD PTR [rcx+0x70],rax
  9cd324:	0f 28 84 24 c0 01 00 	movaps xmm0,XMMWORD PTR [rsp+0x1c0]
  9cd32b:	00 
  9cd32c:	0f 11 41 60          	movups XMMWORD PTR [rcx+0x60],xmm0
  9cd330:	f2 0f 10 83 f0 04 00 	movsd  xmm0,QWORD PTR [rbx+0x4f0]
  9cd337:	00 
  9cd338:	66 0f 6f 8c 24 d0 11 	movdqa xmm1,XMMWORD PTR [rsp+0x11d0]
  9cd33f:	00 00 
  9cd341:	66 0f 28 94 24 e0 11 	movapd xmm2,XMMWORD PTR [rsp+0x11e0]
  9cd348:	00 00 
  9cd34a:	66 0f 6f 9c 24 f0 11 	movdqa xmm3,XMMWORD PTR [rsp+0x11f0]
  9cd351:	00 00 
  9cd353:	66 0f 28 a4 24 00 12 	movapd xmm4,XMMWORD PTR [rsp+0x1200]
  9cd35a:	00 00 
  9cd35c:	66 0f 7f 8c 24 10 06 	movdqa XMMWORD PTR [rsp+0x610],xmm1
  9cd363:	00 00 
  9cd365:	66 0f 29 94 24 20 06 	movapd XMMWORD PTR [rsp+0x620],xmm2
  9cd36c:	00 00 
  9cd36e:	66 0f 7f 9c 24 30 06 	movdqa XMMWORD PTR [rsp+0x630],xmm3
  9cd375:	00 00 
  9cd377:	66 0f 29 a4 24 40 06 	movapd XMMWORD PTR [rsp+0x640],xmm4
  9cd37e:	00 00 
  9cd380:	48 8b 84 24 10 12 00 	mov    rax,QWORD PTR [rsp+0x1210]
  9cd387:	00 
  9cd388:	48 89 84 24 50 06 00 	mov    QWORD PTR [rsp+0x650],rax
  9cd38f:	00 
  9cd390:	4c 89 b4 24 70 06 00 	mov    QWORD PTR [rsp+0x670],r14
  9cd397:	00 
  9cd398:	4c 89 ac 24 78 06 00 	mov    QWORD PTR [rsp+0x678],r13
  9cd39f:	00 
  9cd3a0:	4c 89 a4 24 80 06 00 	mov    QWORD PTR [rsp+0x680],r12
  9cd3a7:	00 
  9cd3a8:	f2 0f 11 84 24 d0 06 	movsd  QWORD PTR [rsp+0x6d0],xmm0
  9cd3af:	00 00 
  9cd3b1:	48 8d bc 24 d0 11 00 	lea    rdi,[rsp+0x11d0]
  9cd3b8:	00 
  9cd3b9:	48 8d b4 24 60 0e 00 	lea    rsi,[rsp+0xe60]
  9cd3c0:	00 
  9cd3c1:	48 8d 94 24 80 1b 00 	lea    rdx,[rsp+0x1b80]
  9cd3c8:	00 
  9cd3c9:	48 8d 8c 24 10 06 00 	lea    rcx,[rsp+0x610]
  9cd3d0:	00 
  9cd3d1:	e8 5a 35 05 00       	call   a20930 <hashbrown::map::HashMap<K,V,S,A>::insert>
  9cd3d6:	48 b8 00 00 00 00 00 	movabs rax,0x8000000000000000
  9cd3dd:	00 00 80 
  9cd3e0:	48 39 84 24 d0 11 00 	cmp    QWORD PTR [rsp+0x11d0],rax
  9cd3e7:	00 
  9cd3e8:	4c 8b 35 91 98 fd 00 	mov    r14,QWORD PTR [rip+0xfd9891]        # 19a6c80 <_DYNAMIC+0x480>
  9cd3ef:	48 8d 15 12 e6 f2 00 	lea    rdx,[rip+0xf2e612]        # 18fba08 <anon.609a31ba814f1e4156e50677fc366a7f.492.llvm.5215769359700358943+0x410>
  9cd3f6:	48 8d bc 24 00 05 00 	lea    rdi,[rsp+0x500]
  9cd3fd:	00 
  9cd3fe:	74 19                	je     9cd419 <future_backtest::RunnerCore::run_multi+0x2169>
  9cd400:	49 89 ff             	mov    r15,rdi
  9cd403:	48 8d bc 24 d0 11 00 	lea    rdi,[rsp+0x11d0]
  9cd40a:	00 
  9cd40b:	48 89 d3             	mov    rbx,rdx
  9cd40e:	e8 cd 53 fd ff       	call   9a27e0 <core::ptr::drop_in_place<(future_backtest::Config::config::FilterCode,future_backtest::Config::config::FilterCode,alloc::vec::Vec<alloc::string::String>,alloc::vec::Vec<alloc::string::String>,f64)>>
  9cd413:	4c 89 ff             	mov    rdi,r15
  9cd416:	48 89 da             	mov    rdx,rbx
  9cd419:	48 8b 4c 24 70       	mov    rcx,QWORD PTR [rsp+0x70]
  9cd41e:	48 8d 81 08 08 00 00 	lea    rax,[rcx+0x808]
  9cd425:	48 89 cb             	mov    rbx,rcx
  9cd428:	48 3b 8c 24 90 00 00 	cmp    rcx,QWORD PTR [rsp+0x90]
  9cd42f:	00 
  9cd430:	48 0f 44 c1          	cmove  rax,rcx
  9cd434:	0f 85 49 f4 ff ff    	jne    9cc883 <future_backtest::RunnerCore::run_multi+0x15d3>
  9cd43a:	48 8b 9c 24 d8 00 00 	mov    rbx,QWORD PTR [rsp+0xd8]
  9cd441:	00 
  9cd442:	48 8b 94 24 e0 00 00 	mov    rdx,QWORD PTR [rsp+0xe0]
  9cd449:	00 
  9cd44a:	eb 1d                	jmp    9cd469 <future_backtest::RunnerCore::run_multi+0x21b9>
  9cd44c:	45 31 f6             	xor    r14d,r14d
  9cd44f:	48 8d 15 72 ab f2 00 	lea    rdx,[rip+0xf2ab72]        # 18f7fc8 <anon.793b25f609afd3960f1a0d096d3931cc.31.llvm.1325298290625399205>
  9cd456:	4c 89 f7             	mov    rdi,r14
  9cd459:	4c 89 fe             	mov    rsi,r15
  9cd45c:	ff 15 36 97 fd 00    	call   QWORD PTR [rip+0xfd9736]        # 19a6b98 <_DYNAMIC+0x398>
  9cd462:	e9 95 6d 00 00       	jmp    9d41fc <future_backtest::RunnerCore::run_multi+0x8f4c>
  9cd467:	31 d2                	xor    edx,edx
  9cd469:	48 89 d6             	mov    rsi,rdx
  9cd46c:	48 c1 e6 0b          	shl    rsi,0xb
  9cd470:	48 8d 04 d6          	lea    rax,[rsi+rdx*8]
  9cd474:	48 8d 2c 03          	lea    rbp,[rbx+rax*1]
  9cd478:	48 89 d9             	mov    rcx,rbx
  9cd47b:	0f 1f 44 00 00       	nop    DWORD PTR [rax+rax*1+0x0]
  9cd480:	48 85 c0             	test   rax,rax
  9cd483:	0f 84 41 02 00 00    	je     9cd6ca <future_backtest::RunnerCore::run_multi+0x241a>
  9cd489:	48 05 f8 f7 ff ff    	add    rax,0xfffffffffffff7f8
  9cd48f:	48 83 b9 e0 01 00 00 	cmp    QWORD PTR [rcx+0x1e0],0x0
  9cd496:	00 
  9cd497:	48 8d 89 08 08 00 00 	lea    rcx,[rcx+0x808]
  9cd49e:	75 e0                	jne    9cd480 <future_backtest::RunnerCore::run_multi+0x21d0>
  9cd4a0:	48 b8 00 00 00 00 00 	movabs rax,0x8000000000000000
  9cd4a7:	00 00 80 
  9cd4aa:	48 89 84 24 80 1b 00 	mov    QWORD PTR [rsp+0x1b80],rax
  9cd4b1:	00 
  9cd4b2:	e9 e4 03 00 00       	jmp    9cd89b <future_backtest::RunnerCore::run_multi+0x25eb>
  9cd4b7:	48 8b 44 24 18       	mov    rax,QWORD PTR [rsp+0x18]
  9cd4bc:	48 89 84 24 80 1b 00 	mov    QWORD PTR [rsp+0x1b80],rax
  9cd4c3:	00 
  9cd4c4:	48 8d 05 75 d2 fd ff 	lea    rax,[rip+0xfffffffffffdd275]        # 9aa740 <<alloc::string::String as core::fmt::Display>::fmt>
  9cd4cb:	48 89 84 24 88 1b 00 	mov    QWORD PTR [rsp+0x1b88],rax
  9cd4d2:	00 
  9cd4d3:	48 8d 05 d6 e8 f2 00 	lea    rax,[rip+0xf2e8d6]        # 18fbdb0 <anon.609a31ba814f1e4156e50677fc366a7f.492.llvm.5215769359700358943+0x7b8>
  9cd4da:	48 89 84 24 d0 11 00 	mov    QWORD PTR [rsp+0x11d0],rax
  9cd4e1:	00 
  9cd4e2:	48 c7 84 24 d8 11 00 	mov    QWORD PTR [rsp+0x11d8],0x2
  9cd4e9:	00 02 00 00 00 
  9cd4ee:	48 c7 84 24 f0 11 00 	mov    QWORD PTR [rsp+0x11f0],0x0
  9cd4f5:	00 00 00 00 00 
  9cd4fa:	48 8d 84 24 80 1b 00 	lea    rax,[rsp+0x1b80]
  9cd501:	00 
  9cd502:	48 89 84 24 e0 11 00 	mov    QWORD PTR [rsp+0x11e0],rax
  9cd509:	00 
  9cd50a:	48 c7 84 24 e8 11 00 	mov    QWORD PTR [rsp+0x11e8],0x1
  9cd511:	00 01 00 00 00 
  9cd516:	48 8d 9c 24 70 01 00 	lea    rbx,[rsp+0x170]
  9cd51d:	00 
  9cd51e:	48 8d b4 24 d0 11 00 	lea    rsi,[rsp+0x11d0]
  9cd525:	00 
  9cd526:	48 89 df             	mov    rdi,rbx
  9cd529:	ff 15 51 98 fd 00    	call   QWORD PTR [rip+0xfd9851]        # 19a6d80 <_DYNAMIC+0x580>
  9cd52f:	e9 d4 14 00 00       	jmp    9cea08 <future_backtest::RunnerCore::run_multi+0x3758>
  9cd534:	48 01 fe             	add    rsi,rdi
  9cd537:	45 31 ed             	xor    r13d,r13d
  9cd53a:	4c 8b b4 24 b0 1a 00 	mov    r14,QWORD PTR [rsp+0x1ab0]
  9cd541:	00 
  9cd542:	48 29 fe             	sub    rsi,rdi
  9cd545:	48 c1 e7 06          	shl    rdi,0x6
  9cd549:	4c 01 f7             	add    rdi,r14
  9cd54c:	e8 ef 4a 0c 00       	call   a92040 <_ZN4core3ptr89drop_in_place$LT$$u5b$future_backtest..MetaControl..router..MetaDecisionSnapshot$u5d$$GT$17hf1a8d774989df26aE.llvm.12364612859142937606>
  9cd551:	4c 89 f7             	mov    rdi,r14
  9cd554:	4c 89 ee             	mov    rsi,r13
  9cd557:	e8 e4 4a 0c 00       	call   a92040 <_ZN4core3ptr89drop_in_place$LT$$u5b$future_backtest..MetaControl..router..MetaDecisionSnapshot$u5d$$GT$17hf1a8d774989df26aE.llvm.12364612859142937606>
  9cd55c:	48 85 db             	test   rbx,rbx
  9cd55f:	0f 84 35 15 00 00    	je     9cea9a <future_backtest::RunnerCore::run_multi+0x37ea>
  9cd565:	48 c1 e3 06          	shl    rbx,0x6
  9cd569:	ba 08 00 00 00       	mov    edx,0x8
  9cd56e:	4c 89 f7             	mov    rdi,r14
  9cd571:	48 89 de             	mov    rsi,rbx
  9cd574:	ff 15 a6 94 fd 00    	call   QWORD PTR [rip+0xfd94a6]        # 19a6a20 <_DYNAMIC+0x220>
  9cd57a:	e9 1b 15 00 00       	jmp    9cea9a <future_backtest::RunnerCore::run_multi+0x37ea>
  9cd57f:	48 8b 44 24 18       	mov    rax,QWORD PTR [rsp+0x18]
  9cd584:	48 89 84 24 80 1b 00 	mov    QWORD PTR [rsp+0x1b80],rax
  9cd58b:	00 
  9cd58c:	48 8d 05 ad d1 fd ff 	lea    rax,[rip+0xfffffffffffdd1ad]        # 9aa740 <<alloc::string::String as core::fmt::Display>::fmt>
  9cd593:	48 89 84 24 88 1b 00 	mov    QWORD PTR [rsp+0x1b88],rax
  9cd59a:	00 
  9cd59b:	48 8d 05 ce e7 f2 00 	lea    rax,[rip+0xf2e7ce]        # 18fbd70 <anon.609a31ba814f1e4156e50677fc366a7f.492.llvm.5215769359700358943+0x778>
  9cd5a2:	48 89 84 24 d0 11 00 	mov    QWORD PTR [rsp+0x11d0],rax
  9cd5a9:	00 
  9cd5aa:	48 c7 84 24 d8 11 00 	mov    QWORD PTR [rsp+0x11d8],0x2
  9cd5b1:	00 02 00 00 00 
  9cd5b6:	48 c7 84 24 f0 11 00 	mov    QWORD PTR [rsp+0x11f0],0x0
  9cd5bd:	00 00 00 00 00 
  9cd5c2:	48 8d 84 24 80 1b 00 	lea    rax,[rsp+0x1b80]
  9cd5c9:	00 
  9cd5ca:	48 89 84 24 e0 11 00 	mov    QWORD PTR [rsp+0x11e0],rax
  9cd5d1:	00 
  9cd5d2:	48 c7 84 24 e8 11 00 	mov    QWORD PTR [rsp+0x11e8],0x1
  9cd5d9:	00 01 00 00 00 
  9cd5de:	48 8d 9c 24 70 03 00 	lea    rbx,[rsp+0x370]
  9cd5e5:	00 
  9cd5e6:	48 8d b4 24 d0 11 00 	lea    rsi,[rsp+0x11d0]
  9cd5ed:	00 
  9cd5ee:	48 89 df             	mov    rdi,rbx
  9cd5f1:	ff 15 89 97 fd 00    	call   QWORD PTR [rip+0xfd9789]        # 19a6d80 <_DYNAMIC+0x580>
  9cd5f7:	e9 0c 14 00 00       	jmp    9cea08 <future_backtest::RunnerCore::run_multi+0x3758>
  9cd5fc:	48 8b b4 24 d0 11 00 	mov    rsi,QWORD PTR [rsp+0x11d0]
  9cd603:	00 
  9cd604:	48 85 f6             	test   rsi,rsi
  9cd607:	74 0e                	je     9cd617 <future_backtest::RunnerCore::run_multi+0x2367>
  9cd609:	ba 01 00 00 00       	mov    edx,0x1
  9cd60e:	48 89 ef             	mov    rdi,rbp
  9cd611:	ff 15 09 94 fd 00    	call   QWORD PTR [rip+0xfd9409]        # 19a6a20 <_DYNAMIC+0x220>
  9cd617:	48 8b b4 24 80 1b 00 	mov    rsi,QWORD PTR [rsp+0x1b80]
  9cd61e:	00 
  9cd61f:	48 85 f6             	test   rsi,rsi
  9cd622:	74 0e                	je     9cd632 <future_backtest::RunnerCore::run_multi+0x2382>
  9cd624:	ba 01 00 00 00       	mov    edx,0x1
  9cd629:	4c 89 f7             	mov    rdi,r14
  9cd62c:	ff 15 ee 93 fd 00    	call   QWORD PTR [rip+0xfd93ee]        # 19a6a20 <_DYNAMIC+0x220>
  9cd632:	48 8b 44 24 18       	mov    rax,QWORD PTR [rsp+0x18]
  9cd637:	48 89 84 24 80 1b 00 	mov    QWORD PTR [rsp+0x1b80],rax
  9cd63e:	00 
  9cd63f:	48 8d 05 fa d0 fd ff 	lea    rax,[rip+0xfffffffffffdd0fa]        # 9aa740 <<alloc::string::String as core::fmt::Display>::fmt>
  9cd646:	48 89 84 24 88 1b 00 	mov    QWORD PTR [rsp+0x1b88],rax
  9cd64d:	00 
  9cd64e:	48 8d 05 ab e7 f2 00 	lea    rax,[rip+0xf2e7ab]        # 18fbe00 <anon.609a31ba814f1e4156e50677fc366a7f.492.llvm.5215769359700358943+0x808>
  9cd655:	48 89 84 24 d0 11 00 	mov    QWORD PTR [rsp+0x11d0],rax
  9cd65c:	00 
  9cd65d:	48 c7 84 24 d8 11 00 	mov    QWORD PTR [rsp+0x11d8],0x2
  9cd664:	00 02 00 00 00 
  9cd669:	48 c7 84 24 f0 11 00 	mov    QWORD PTR [rsp+0x11f0],0x0
  9cd670:	00 00 00 00 00 
  9cd675:	48 8d 84 24 80 1b 00 	lea    rax,[rsp+0x1b80]
  9cd67c:	00 
  9cd67d:	48 89 84 24 e0 11 00 	mov    QWORD PTR [rsp+0x11e0],rax
  9cd684:	00 
  9cd685:	48 c7 84 24 e8 11 00 	mov    QWORD PTR [rsp+0x11e8],0x1
  9cd68c:	00 01 00 00 00 
  9cd691:	48 8d 9c 24 40 01 00 	lea    rbx,[rsp+0x140]
  9cd698:	00 
  9cd699:	48 8d b4 24 d0 11 00 	lea    rsi,[rsp+0x11d0]
  9cd6a0:	00 
  9cd6a1:	48 89 df             	mov    rdi,rbx
  9cd6a4:	ff 15 d6 96 fd 00    	call   QWORD PTR [rip+0xfd96d6]        # 19a6d80 <_DYNAMIC+0x580>
  9cd6aa:	e9 59 13 00 00       	jmp    9cea08 <future_backtest::RunnerCore::run_multi+0x3758>
  9cd6af:	45 31 f6             	xor    r14d,r14d
  9cd6b2:	48 8d 15 0f a9 f2 00 	lea    rdx,[rip+0xf2a90f]        # 18f7fc8 <anon.793b25f609afd3960f1a0d096d3931cc.31.llvm.1325298290625399205>
  9cd6b9:	4c 89 f7             	mov    rdi,r14
  9cd6bc:	4c 89 fe             	mov    rsi,r15
  9cd6bf:	ff 15 d3 94 fd 00    	call   QWORD PTR [rip+0xfd94d3]        # 19a6b98 <_DYNAMIC+0x398>
  9cd6c5:	e9 32 6b 00 00       	jmp    9d41fc <future_backtest::RunnerCore::run_multi+0x8f4c>
  9cd6ca:	48 89 b4 24 90 00 00 	mov    QWORD PTR [rsp+0x90],rsi
  9cd6d1:	00 
  9cd6d2:	48 89 54 24 70       	mov    QWORD PTR [rsp+0x70],rdx
  9cd6d7:	48 c7 84 24 d0 11 00 	mov    QWORD PTR [rsp+0x11d0],0x0
  9cd6de:	00 00 00 00 00 
  9cd6e3:	48 c7 84 24 d8 11 00 	mov    QWORD PTR [rsp+0x11d8],0x8
  9cd6ea:	00 08 00 00 00 
  9cd6ef:	48 c7 84 24 e0 11 00 	mov    QWORD PTR [rsp+0x11e0],0x0
  9cd6f6:	00 00 00 00 00 
  9cd6fb:	31 f6                	xor    esi,esi
  9cd6fd:	45 31 ed             	xor    r13d,r13d
  9cd700:	49 89 dc             	mov    r12,rbx
  9cd703:	48 8b 84 24 d8 11 00 	mov    rax,QWORD PTR [rsp+0x11d8]
  9cd70a:	00 
  9cd70b:	48 8d 0c 76          	lea    rcx,[rsi+rsi*2]
  9cd70f:	48 89 44 24 20       	mov    QWORD PTR [rsp+0x20],rax
  9cd714:	48 8d 0c c8          	lea    rcx,[rax+rcx*8]
  9cd718:	eb 06                	jmp    9cd720 <future_backtest::RunnerCore::run_multi+0x2470>
  9cd71a:	4c 89 fb             	mov    rbx,r15
  9cd71d:	48 89 c6             	mov    rsi,rax
  9cd720:	4d 85 ed             	test   r13,r13
  9cd723:	74 1b                	je     9cd740 <future_backtest::RunnerCore::run_multi+0x2490>
  9cd725:	4c 3b ac 24 80 00 00 	cmp    r13,QWORD PTR [rsp+0x80]
  9cd72c:	00 
  9cd72d:	74 11                	je     9cd740 <future_backtest::RunnerCore::run_multi+0x2490>
  9cd72f:	48 89 f0             	mov    rax,rsi
  9cd732:	49 89 df             	mov    r15,rbx
  9cd735:	4c 89 ee             	mov    rsi,r13
  9cd738:	eb 41                	jmp    9cd77b <future_backtest::RunnerCore::run_multi+0x24cb>
  9cd73a:	66 0f 1f 44 00 00    	nop    WORD PTR [rax+rax*1+0x0]
  9cd740:	49 39 ec             	cmp    r12,rbp
  9cd743:	0f 84 23 01 00 00    	je     9cd86c <future_backtest::RunnerCore::run_multi+0x25bc>
  9cd749:	49 8b 94 24 e0 01 00 	mov    rdx,QWORD PTR [r12+0x1e0]
  9cd750:	00 
  9cd751:	49 81 c4 08 08 00 00 	add    r12,0x808
  9cd758:	48 85 d2             	test   rdx,rdx
  9cd75b:	74 e3                	je     9cd740 <future_backtest::RunnerCore::run_multi+0x2490>
  9cd75d:	48 89 f0             	mov    rax,rsi
  9cd760:	49 89 df             	mov    r15,rbx
  9cd763:	49 8b b4 24 d0 f9 ff 	mov    rsi,QWORD PTR [r12-0x630]
  9cd76a:	ff 
  9cd76b:	48 8d 14 52          	lea    rdx,[rdx+rdx*2]
  9cd76f:	48 8d 14 d6          	lea    rdx,[rsi+rdx*8]
  9cd773:	48 89 94 24 80 00 00 	mov    QWORD PTR [rsp+0x80],rdx
  9cd77a:	00 
  9cd77b:	4c 8d 6e 18          	lea    r13,[rsi+0x18]
  9cd77f:	48 85 c0             	test   rax,rax
  9cd782:	74 6c                	je     9cd7f0 <future_backtest::RunnerCore::run_multi+0x2540>
  9cd784:	48 8b 56 08          	mov    rdx,QWORD PTR [rsi+0x8]
  9cd788:	48 8b 7e 10          	mov    rdi,QWORD PTR [rsi+0x10]
  9cd78c:	4c 8b 44 24 20       	mov    r8,QWORD PTR [rsp+0x20]
  9cd791:	eb 09                	jmp    9cd79c <future_backtest::RunnerCore::run_multi+0x24ec>
  9cd793:	49 83 c0 18          	add    r8,0x18
  9cd797:	49 39 c8             	cmp    r8,rcx
  9cd79a:	74 54                	je     9cd7f0 <future_backtest::RunnerCore::run_multi+0x2540>
  9cd79c:	49 39 78 10          	cmp    QWORD PTR [r8+0x10],rdi
  9cd7a0:	75 f1                	jne    9cd793 <future_backtest::RunnerCore::run_multi+0x24e3>
  9cd7a2:	4d 8b 48 08          	mov    r9,QWORD PTR [r8+0x8]
  9cd7a6:	45 31 d2             	xor    r10d,r10d
  9cd7a9:	0f 1f 80 00 00 00 00 	nop    DWORD PTR [rax+0x0]
  9cd7b0:	4c 39 d7             	cmp    rdi,r10
  9cd7b3:	0f 84 61 ff ff ff    	je     9cd71a <future_backtest::RunnerCore::run_multi+0x246a>
  9cd7b9:	47 0f b6 1c 11       	movzx  r11d,BYTE PTR [r9+r10*1]
  9cd7be:	41 8d 5b bf          	lea    ebx,[r11-0x41]
  9cd7c2:	80 fb 1a             	cmp    bl,0x1a
  9cd7c5:	0f 92 c3             	setb   bl
  9cd7c8:	c0 e3 05             	shl    bl,0x5
  9cd7cb:	44 08 db             	or     bl,r11b
  9cd7ce:	46 0f b6 1c 12       	movzx  r11d,BYTE PTR [rdx+r10*1]
  9cd7d3:	45 8d 73 bf          	lea    r14d,[r11-0x41]
  9cd7d7:	41 80 fe 1a          	cmp    r14b,0x1a
  9cd7db:	41 0f 92 c6          	setb   r14b
  9cd7df:	41 c0 e6 05          	shl    r14b,0x5
  9cd7e3:	45 08 de             	or     r14b,r11b
  9cd7e6:	49 ff c2             	inc    r10
  9cd7e9:	44 38 f3             	cmp    bl,r14b
  9cd7ec:	74 c2                	je     9cd7b0 <future_backtest::RunnerCore::run_multi+0x2500>
  9cd7ee:	eb a3                	jmp    9cd793 <future_backtest::RunnerCore::run_multi+0x24e3>
  9cd7f0:	48 8d bc 24 10 06 00 	lea    rdi,[rsp+0x610]
  9cd7f7:	00 
  9cd7f8:	48 8d 15 71 e6 f2 00 	lea    rdx,[rip+0xf2e671]        # 18fbe70 <anon.609a31ba814f1e4156e50677fc366a7f.492.llvm.5215769359700358943+0x878>
  9cd7ff:	ff 15 7b 94 fd 00    	call   QWORD PTR [rip+0xfd947b]        # 19a6c80 <_DYNAMIC+0x480>
  9cd805:	48 8b 84 24 e0 11 00 	mov    rax,QWORD PTR [rsp+0x11e0]
  9cd80c:	00 
  9cd80d:	49 89 c6             	mov    r14,rax
  9cd810:	48 3b 84 24 d0 11 00 	cmp    rax,QWORD PTR [rsp+0x11d0]
  9cd817:	00 
  9cd818:	4c 89 fb             	mov    rbx,r15
  9cd81b:	75 15                	jne    9cd832 <future_backtest::RunnerCore::run_multi+0x2582>
  9cd81d:	48 8d bc 24 d0 11 00 	lea    rdi,[rsp+0x11d0]
  9cd824:	00 
  9cd825:	48 8d 35 5c e6 f2 00 	lea    rsi,[rip+0xf2e65c]        # 18fbe88 <anon.609a31ba814f1e4156e50677fc366a7f.492.llvm.5215769359700358943+0x890>
  9cd82c:	ff 15 96 94 fd 00    	call   QWORD PTR [rip+0xfd9496]        # 19a6cc8 <_DYNAMIC+0x4c8>
  9cd832:	48 8b 84 24 d8 11 00 	mov    rax,QWORD PTR [rsp+0x11d8]
  9cd839:	00 
  9cd83a:	4c 89 f6             	mov    rsi,r14
  9cd83d:	4b 8d 0c 76          	lea    rcx,[r14+r14*2]
  9cd841:	48 8b 94 24 20 06 00 	mov    rdx,QWORD PTR [rsp+0x620]
  9cd848:	00 
  9cd849:	48 89 54 c8 10       	mov    QWORD PTR [rax+rcx*8+0x10],rdx
  9cd84e:	66 0f 10 84 24 10 06 	movupd xmm0,XMMWORD PTR [rsp+0x610]
  9cd855:	00 00 
  9cd857:	66 0f 11 04 c8       	movupd XMMWORD PTR [rax+rcx*8],xmm0
  9cd85c:	48 ff c6             	inc    rsi
  9cd85f:	48 89 b4 24 e0 11 00 	mov    QWORD PTR [rsp+0x11e0],rsi
  9cd866:	00 
  9cd867:	e9 97 fe ff ff       	jmp    9cd703 <future_backtest::RunnerCore::run_multi+0x2453>
  9cd86c:	48 8b 84 24 e0 11 00 	mov    rax,QWORD PTR [rsp+0x11e0]
  9cd873:	00 
  9cd874:	48 89 84 24 90 1b 00 	mov    QWORD PTR [rsp+0x1b90],rax
  9cd87b:	00 
  9cd87c:	66 0f 10 84 24 d0 11 	movupd xmm0,XMMWORD PTR [rsp+0x11d0]
  9cd883:	00 00 
  9cd885:	66 0f 29 84 24 80 1b 	movapd XMMWORD PTR [rsp+0x1b80],xmm0
  9cd88c:	00 00 
  9cd88e:	48 8b 54 24 70       	mov    rdx,QWORD PTR [rsp+0x70]
  9cd893:	48 8b b4 24 90 00 00 	mov    rsi,QWORD PTR [rsp+0x90]
  9cd89a:	00 
  9cd89b:	48 8d 04 d6          	lea    rax,[rsi+rdx*8]
  9cd89f:	48 89 d9             	mov    rcx,rbx
  9cd8a2:	66 66 66 66 66 2e 0f 	data16 data16 data16 data16 cs nop WORD PTR [rax+rax*1+0x0]
  9cd8a9:	1f 84 00 00 00 00 00 
  9cd8b0:	48 85 c0             	test   rax,rax
  9cd8b3:	74 29                	je     9cd8de <future_backtest::RunnerCore::run_multi+0x262e>
  9cd8b5:	48 05 f8 f7 ff ff    	add    rax,0xfffffffffffff7f8
  9cd8bb:	48 83 b9 f8 01 00 00 	cmp    QWORD PTR [rcx+0x1f8],0x0
  9cd8c2:	00 
  9cd8c3:	48 8d 89 08 08 00 00 	lea    rcx,[rcx+0x808]
  9cd8ca:	75 e4                	jne    9cd8b0 <future_backtest::RunnerCore::run_multi+0x2600>
  9cd8cc:	48 ba 00 00 00 00 00 	movabs rdx,0x8000000000000000
  9cd8d3:	00 00 80 
  9cd8d6:	48 89 d0             	mov    rax,rdx
  9cd8d9:	e9 28 02 00 00       	jmp    9cdb06 <future_backtest::RunnerCore::run_multi+0x2856>
  9cd8de:	48 c7 84 24 10 06 00 	mov    QWORD PTR [rsp+0x610],0x0
  9cd8e5:	00 00 00 00 00 
  9cd8ea:	48 c7 84 24 18 06 00 	mov    QWORD PTR [rsp+0x618],0x8
  9cd8f1:	00 08 00 00 00 
  9cd8f6:	45 31 ed             	xor    r13d,r13d
  9cd8f9:	48 8d 35 a0 e5 f2 00 	lea    rsi,[rip+0xf2e5a0]        # 18fbea0 <anon.609a31ba814f1e4156e50677fc366a7f.492.llvm.5215769359700358943+0x8a8>
  9cd900:	48 8d bc 24 10 06 00 	lea    rdi,[rsp+0x610]
  9cd907:	00 
  9cd908:	4c 8b 1d b1 93 fd 00 	mov    r11,QWORD PTR [rip+0xfd93b1]        # 19a6cc0 <_DYNAMIC+0x4c0>
  9cd90f:	45 31 e4             	xor    r12d,r12d
  9cd912:	4c 89 e9             	mov    rcx,r13
  9cd915:	48 83 e1 f8          	and    rcx,0xfffffffffffffff8
  9cd919:	4c 89 ac 24 20 06 00 	mov    QWORD PTR [rsp+0x620],r13
  9cd920:	00 
  9cd921:	48 8b 84 24 18 06 00 	mov    rax,QWORD PTR [rsp+0x618]
  9cd928:	00 
  9cd929:	44 89 ea             	mov    edx,r13d
  9cd92c:	83 e2 07             	and    edx,0x7
  9cd92f:	4d 85 e4             	test   r12,r12
  9cd932:	74 0c                	je     9cd940 <future_backtest::RunnerCore::run_multi+0x2690>
  9cd934:	4d 39 f4             	cmp    r12,r14
  9cd937:	75 2e                	jne    9cd967 <future_backtest::RunnerCore::run_multi+0x26b7>
  9cd939:	0f 1f 80 00 00 00 00 	nop    DWORD PTR [rax+0x0]
  9cd940:	48 39 eb             	cmp    rbx,rbp
  9cd943:	0f 84 96 01 00 00    	je     9cdadf <future_backtest::RunnerCore::run_multi+0x282f>
  9cd949:	4c 8b 83 f8 01 00 00 	mov    r8,QWORD PTR [rbx+0x1f8]
  9cd950:	48 81 c3 08 08 00 00 	add    rbx,0x808
  9cd957:	4d 85 c0             	test   r8,r8
  9cd95a:	74 e4                	je     9cd940 <future_backtest::RunnerCore::run_multi+0x2690>
  9cd95c:	4c 8b a3 e8 f9 ff ff 	mov    r12,QWORD PTR [rbx-0x618]
  9cd963:	4f 8d 34 c4          	lea    r14,[r12+r8*8]
  9cd967:	f2 41 0f 10 04 24    	movsd  xmm0,QWORD PTR [r12]
  9cd96d:	49 83 c4 08          	add    r12,0x8
  9cd971:	66 0f 29 44 24 20    	movapd XMMWORD PTR [rsp+0x20],xmm0
  9cd977:	66 0f 14 c0          	unpcklpd xmm0,xmm0
  9cd97b:	45 31 c0             	xor    r8d,r8d
  9cd97e:	66 90                	xchg   ax,ax
  9cd980:	4c 39 c1             	cmp    rcx,r8
  9cd983:	74 4e                	je     9cd9d3 <future_backtest::RunnerCore::run_multi+0x2723>
  9cd985:	66 42 0f 10 0c c0    	movupd xmm1,XMMWORD PTR [rax+r8*8]
  9cd98b:	66 42 0f 10 54 c0 10 	movupd xmm2,XMMWORD PTR [rax+r8*8+0x10]
  9cd992:	66 42 0f 10 5c c0 20 	movupd xmm3,XMMWORD PTR [rax+r8*8+0x20]
  9cd999:	66 42 0f 10 64 c0 30 	movupd xmm4,XMMWORD PTR [rax+r8*8+0x30]
  9cd9a0:	66 0f c2 d0 00       	cmpeqpd xmm2,xmm0
  9cd9a5:	66 0f c2 c8 00       	cmpeqpd xmm1,xmm0
  9cd9aa:	66 0f 6b ca          	packssdw xmm1,xmm2
  9cd9ae:	66 0f c2 d8 00       	cmpeqpd xmm3,xmm0
  9cd9b3:	66 0f c2 e0 00       	cmpeqpd xmm4,xmm0
  9cd9b8:	66 0f 6b dc          	packssdw xmm3,xmm4
  9cd9bc:	66 0f 6b cb          	packssdw xmm1,xmm3
  9cd9c0:	66 44 0f d7 c9       	pmovmskb r9d,xmm1
  9cd9c5:	49 83 c0 08          	add    r8,0x8
  9cd9c9:	45 85 c9             	test   r9d,r9d
  9cd9cc:	74 b2                	je     9cd980 <future_backtest::RunnerCore::run_multi+0x26d0>
  9cd9ce:	e9 5c ff ff ff       	jmp    9cd92f <future_backtest::RunnerCore::run_multi+0x267f>
  9cd9d3:	48 85 d2             	test   rdx,rdx
  9cd9d6:	0f 84 c5 00 00 00    	je     9cdaa1 <future_backtest::RunnerCore::run_multi+0x27f1>
  9cd9dc:	f2 0f 10 04 c8       	movsd  xmm0,QWORD PTR [rax+rcx*8]
  9cd9e1:	66 0f 2e 44 24 20    	ucomisd xmm0,QWORD PTR [rsp+0x20]
  9cd9e7:	75 06                	jne    9cd9ef <future_backtest::RunnerCore::run_multi+0x273f>
  9cd9e9:	0f 8b 40 ff ff ff    	jnp    9cd92f <future_backtest::RunnerCore::run_multi+0x267f>
  9cd9ef:	83 fa 01             	cmp    edx,0x1
  9cd9f2:	0f 84 a9 00 00 00    	je     9cdaa1 <future_backtest::RunnerCore::run_multi+0x27f1>
  9cd9f8:	f2 0f 10 44 c8 08    	movsd  xmm0,QWORD PTR [rax+rcx*8+0x8]
  9cd9fe:	66 0f 2e 44 24 20    	ucomisd xmm0,QWORD PTR [rsp+0x20]
  9cda04:	75 06                	jne    9cda0c <future_backtest::RunnerCore::run_multi+0x275c>
  9cda06:	0f 8b 23 ff ff ff    	jnp    9cd92f <future_backtest::RunnerCore::run_multi+0x267f>
  9cda0c:	83 fa 02             	cmp    edx,0x2
  9cda0f:	0f 84 8c 00 00 00    	je     9cdaa1 <future_backtest::RunnerCore::run_multi+0x27f1>
  9cda15:	f2 0f 10 44 c8 10    	movsd  xmm0,QWORD PTR [rax+rcx*8+0x10]
  9cda1b:	66 0f 2e 44 24 20    	ucomisd xmm0,QWORD PTR [rsp+0x20]
  9cda21:	75 06                	jne    9cda29 <future_backtest::RunnerCore::run_multi+0x2779>
  9cda23:	0f 8b 06 ff ff ff    	jnp    9cd92f <future_backtest::RunnerCore::run_multi+0x267f>
  9cda29:	83 fa 03             	cmp    edx,0x3
  9cda2c:	74 73                	je     9cdaa1 <future_backtest::RunnerCore::run_multi+0x27f1>
  9cda2e:	f2 0f 10 44 c8 18    	movsd  xmm0,QWORD PTR [rax+rcx*8+0x18]
  9cda34:	66 0f 2e 44 24 20    	ucomisd xmm0,QWORD PTR [rsp+0x20]
  9cda3a:	75 06                	jne    9cda42 <future_backtest::RunnerCore::run_multi+0x2792>
  9cda3c:	0f 8b ed fe ff ff    	jnp    9cd92f <future_backtest::RunnerCore::run_multi+0x267f>
  9cda42:	83 fa 04             	cmp    edx,0x4
  9cda45:	74 5a                	je     9cdaa1 <future_backtest::RunnerCore::run_multi+0x27f1>
  9cda47:	f2 0f 10 44 c8 20    	movsd  xmm0,QWORD PTR [rax+rcx*8+0x20]
  9cda4d:	66 0f 2e 44 24 20    	ucomisd xmm0,QWORD PTR [rsp+0x20]
  9cda53:	75 06                	jne    9cda5b <future_backtest::RunnerCore::run_multi+0x27ab>
  9cda55:	0f 8b d4 fe ff ff    	jnp    9cd92f <future_backtest::RunnerCore::run_multi+0x267f>
  9cda5b:	83 fa 05             	cmp    edx,0x5
  9cda5e:	74 41                	je     9cdaa1 <future_backtest::RunnerCore::run_multi+0x27f1>
  9cda60:	f2 0f 10 44 c8 28    	movsd  xmm0,QWORD PTR [rax+rcx*8+0x28]
  9cda66:	66 0f 2e 44 24 20    	ucomisd xmm0,QWORD PTR [rsp+0x20]
  9cda6c:	75 06                	jne    9cda74 <future_backtest::RunnerCore::run_multi+0x27c4>
  9cda6e:	0f 8b bb fe ff ff    	jnp    9cd92f <future_backtest::RunnerCore::run_multi+0x267f>
  9cda74:	83 fa 06             	cmp    edx,0x6
  9cda77:	74 28                	je     9cdaa1 <future_backtest::RunnerCore::run_multi+0x27f1>
  9cda79:	48 83 fa 07          	cmp    rdx,0x7
  9cda7d:	41 0f 95 c1          	setne  r9b
  9cda81:	66 0f 28 44 24 20    	movapd xmm0,XMMWORD PTR [rsp+0x20]
  9cda87:	66 0f 2e 44 c8 30    	ucomisd xmm0,QWORD PTR [rax+rcx*8+0x30]
  9cda8d:	41 0f 9b c2          	setnp  r10b
  9cda91:	41 0f 94 c0          	sete   r8b
  9cda95:	45 20 d0             	and    r8b,r10b
  9cda98:	45 08 c8             	or     r8b,r9b
  9cda9b:	0f 85 8e fe ff ff    	jne    9cd92f <future_backtest::RunnerCore::run_multi+0x267f>
  9cdaa1:	4c 3b ac 24 10 06 00 	cmp    r13,QWORD PTR [rsp+0x610]
  9cdaa8:	00 
  9cdaa9:	75 20                	jne    9cdacb <future_backtest::RunnerCore::run_multi+0x281b>
  9cdaab:	49 89 f7             	mov    r15,rsi
  9cdaae:	41 ff d3             	call   r11
  9cdab1:	48 8b 84 24 18 06 00 	mov    rax,QWORD PTR [rsp+0x618]
  9cdab8:	00 
  9cdab9:	4c 89 fe             	mov    rsi,r15
  9cdabc:	48 8d bc 24 10 06 00 	lea    rdi,[rsp+0x610]
  9cdac3:	00 
  9cdac4:	4c 8b 1d f5 91 fd 00 	mov    r11,QWORD PTR [rip+0xfd91f5]        # 19a6cc0 <_DYNAMIC+0x4c0>
  9cdacb:	66 0f 28 44 24 20    	movapd xmm0,XMMWORD PTR [rsp+0x20]
  9cdad1:	f2 42 0f 11 04 e8    	movsd  QWORD PTR [rax+r13*8],xmm0
  9cdad7:	49 ff c5             	inc    r13
  9cdada:	e9 33 fe ff ff       	jmp    9cd912 <future_backtest::RunnerCore::run_multi+0x2662>
  9cdadf:	48 8b 84 24 10 06 00 	mov    rax,QWORD PTR [rsp+0x610]
  9cdae6:	00 
  9cdae7:	48 8d 8c 24 18 06 00 	lea    rcx,[rsp+0x618]
  9cdaee:	00 
  9cdaef:	66 0f 10 01          	movupd xmm0,XMMWORD PTR [rcx]
  9cdaf3:	66 0f 29 84 24 d0 11 	movapd XMMWORD PTR [rsp+0x11d0],xmm0
  9cdafa:	00 00 
  9cdafc:	48 ba 00 00 00 00 00 	movabs rdx,0x8000000000000000
  9cdb03:	00 00 80 
  9cdb06:	48 8b 8c 24 90 1b 00 	mov    rcx,QWORD PTR [rsp+0x1b90]
  9cdb0d:	00 
  9cdb0e:	48 89 8c 24 d0 19 00 	mov    QWORD PTR [rsp+0x19d0],rcx
  9cdb15:	00 
  9cdb16:	0f 28 84 24 80 1b 00 	movaps xmm0,XMMWORD PTR [rsp+0x1b80]
  9cdb1d:	00 
  9cdb1e:	0f 11 84 24 c0 19 00 	movups XMMWORD PTR [rsp+0x19c0],xmm0
  9cdb25:	00 
  9cdb26:	48 89 94 24 a8 19 00 	mov    QWORD PTR [rsp+0x19a8],rdx
  9cdb2d:	00 
  9cdb2e:	48 89 84 24 d8 19 00 	mov    QWORD PTR [rsp+0x19d8],rax
  9cdb35:	00 
  9cdb36:	66 0f 28 84 24 d0 11 	movapd xmm0,XMMWORD PTR [rsp+0x11d0]
  9cdb3d:	00 00 
  9cdb3f:	66 0f 11 84 24 e0 19 	movupd XMMWORD PTR [rsp+0x19e0],xmm0
  9cdb46:	00 00 
  9cdb48:	48 83 bc 24 e0 00 00 	cmp    QWORD PTR [rsp+0xe0],0x0
  9cdb4f:	00 00 
  9cdb51:	0f 84 9c 62 00 00    	je     9d3df3 <future_backtest::RunnerCore::run_multi+0x8b43>
  9cdb57:	be 68 01 00 00       	mov    esi,0x168
  9cdb5c:	48 03 b4 24 d8 00 00 	add    rsi,QWORD PTR [rsp+0xd8]
  9cdb63:	00 
  9cdb64:	48 8d 15 c5 e4 f2 00 	lea    rdx,[rip+0xf2e4c5]        # 18fc030 <anon.609a31ba814f1e4156e50677fc366a7f.492.llvm.5215769359700358943+0xa38>
  9cdb6b:	48 8d bc 24 40 0e 00 	lea    rdi,[rsp+0xe40]
  9cdb72:	00 
  9cdb73:	ff 15 07 91 fd 00    	call   QWORD PTR [rip+0xfd9107]        # 19a6c80 <_DYNAMIC+0x480>
  9cdb79:	48 83 bc 24 e0 00 00 	cmp    QWORD PTR [rsp+0xe0],0x0
  9cdb80:	00 00 
  9cdb82:	4c 8d b4 24 80 1b 00 	lea    r14,[rsp+0x1b80]
  9cdb89:	00 
  9cdb8a:	0f 84 79 62 00 00    	je     9d3e09 <future_backtest::RunnerCore::run_multi+0x8b59>
  9cdb90:	48 8b 84 24 d8 00 00 	mov    rax,QWORD PTR [rsp+0xd8]
  9cdb97:	00 
  9cdb98:	0f b6 b0 f9 07 00 00 	movzx  esi,BYTE PTR [rax+0x7f9]
  9cdb9f:	66 0f 6f 84 24 60 0e 	movdqa xmm0,XMMWORD PTR [rsp+0xe60]
  9cdba6:	00 00 
  9cdba8:	66 0f 6f 8c 24 70 0e 	movdqa xmm1,XMMWORD PTR [rsp+0xe70]
  9cdbaf:	00 00 
  9cdbb1:	66 0f 6f 94 24 80 0e 	movdqa xmm2,XMMWORD PTR [rsp+0xe80]
  9cdbb8:	00 00 
  9cdbba:	66 0f 7f 94 24 30 06 	movdqa XMMWORD PTR [rsp+0x630],xmm2
  9cdbc1:	00 00 
  9cdbc3:	66 0f 7f 8c 24 20 06 	movdqa XMMWORD PTR [rsp+0x620],xmm1
  9cdbca:	00 00 
  9cdbcc:	66 0f 7f 84 24 10 06 	movdqa XMMWORD PTR [rsp+0x610],xmm0
  9cdbd3:	00 00 
  9cdbd5:	40 b5 01             	mov    bpl,0x1
  9cdbd8:	48 8d bc 24 60 18 00 	lea    rdi,[rsp+0x1860]
  9cdbdf:	00 
  9cdbe0:	48 8d 94 24 40 0e 00 	lea    rdx,[rsp+0xe40]
  9cdbe7:	00 
  9cdbe8:	48 8d 8c 24 a8 19 00 	lea    rcx,[rsp+0x19a8]
  9cdbef:	00 
  9cdbf0:	4c 8d 84 24 10 06 00 	lea    r8,[rsp+0x610]
  9cdbf7:	00 
  9cdbf8:	ff 15 02 a8 fd 00    	call   QWORD PTR [rip+0xfda802]        # 19a8400 <_DYNAMIC+0x1c00>
  9cdbfe:	48 8b 1d eb 91 fd 00 	mov    rbx,QWORD PTR [rip+0xfd91eb]        # 19a6df0 <_DYNAMIC+0x5f0>
  9cdc05:	40 b5 01             	mov    bpl,0x1
  9cdc08:	0f b6 94 24 b8 00 00 	movzx  edx,BYTE PTR [rsp+0xb8]
  9cdc0f:	00 
  9cdc10:	48 8d bc 24 10 06 00 	lea    rdi,[rsp+0x610]
  9cdc17:	00 
  9cdc18:	48 8d b4 24 60 18 00 	lea    rsi,[rsp+0x1860]
  9cdc1f:	00 
  9cdc20:	ff 15 e2 a7 fd 00    	call   QWORD PTR [rip+0xfda7e2]        # 19a8408 <_DYNAMIC+0x1c08>
  9cdc26:	4c 8b bc 24 18 06 00 	mov    r15,QWORD PTR [rsp+0x618]
  9cdc2d:	00 
  9cdc2e:	f6 84 24 10 06 00 00 	test   BYTE PTR [rsp+0x610],0x1
  9cdc35:	01 
  9cdc36:	40 b5 01             	mov    bpl,0x1
  9cdc39:	0f 85 e9 0b 00 00    	jne    9ce828 <future_backtest::RunnerCore::run_multi+0x3578>
  9cdc3f:	4d 85 ff             	test   r15,r15
  9cdc42:	0f 84 58 51 00 00    	je     9d2da0 <future_backtest::RunnerCore::run_multi+0x7af0>
  9cdc48:	48 8b 94 24 20 06 00 	mov    rdx,QWORD PTR [rsp+0x620]
  9cdc4f:	00 
  9cdc50:	40 b5 01             	mov    bpl,0x1
  9cdc53:	48 8d 0d 96 bc f2 00 	lea    rcx,[rip+0xf2bc96]        # 18f98f0 <anon.609a31ba814f1e4156e50677fc366a7f.99.llvm.5215769359700358943>
  9cdc5a:	48 8d bc 24 a8 01 00 	lea    rdi,[rsp+0x1a8]
  9cdc61:	00 
  9cdc62:	4c 89 fe             	mov    rsi,r15
  9cdc65:	e8 d6 d3 fa ff       	call   97b040 <<alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter>
  9cdc6a:	48 b8 00 00 00 00 00 	movabs rax,0x8000000000000000
  9cdc71:	00 00 80 
  9cdc74:	48 39 84 24 f0 19 00 	cmp    QWORD PTR [rsp+0x19f0],rax
  9cdc7b:	00 
  9cdc7c:	74 6a                	je     9cdce8 <future_backtest::RunnerCore::run_multi+0x2a38>
  9cdc7e:	80 bc 24 48 1a 00 00 	cmp    BYTE PTR [rsp+0x1a48],0x0
  9cdc85:	00 
  9cdc86:	75 60                	jne    9cdce8 <future_backtest::RunnerCore::run_multi+0x2a38>
  9cdc88:	48 8b 9c 24 b0 01 00 	mov    rbx,QWORD PTR [rsp+0x1b0]
  9cdc8f:	00 
  9cdc90:	4c 8b ac 24 b8 01 00 	mov    r13,QWORD PTR [rsp+0x1b8]
  9cdc97:	00 
  9cdc98:	49 69 f5 28 01 00 00 	imul   rsi,r13,0x128
  9cdc9f:	48 01 de             	add    rsi,rbx
  9cdca2:	48 89 df             	mov    rdi,rbx
  9cdca5:	e8 76 ab fd ff       	call   9a8820 <core::iter::traits::iterator::Iterator::reduce>
  9cdcaa:	a8 01                	test   al,0x1
  9cdcac:	0f 84 d3 5f 00 00    	je     9d3c85 <future_backtest::RunnerCore::run_multi+0x89d5>
  9cdcb2:	48 8d bc 24 a8 1a 00 	lea    rdi,[rsp+0x1aa8]
  9cdcb9:	00 
  9cdcba:	66 0f d6 84 24 e0 0e 	movq   QWORD PTR [rsp+0xee0],xmm0
  9cdcc1:	00 00 
  9cdcc3:	48 8d b4 24 f0 19 00 	lea    rsi,[rsp+0x19f0]
  9cdcca:	00 
  9cdccb:	ff 15 2f a8 fd 00    	call   QWORD PTR [rip+0xfda82f]        # 19a8500 <_DYNAMIC+0x1d00>
  9cdcd1:	84 c0                	test   al,al
  9cdcd3:	0f 84 91 0f 00 00    	je     9cec6a <future_backtest::RunnerCore::run_multi+0x39ba>
  9cdcd9:	48 8b 1d 10 91 fd 00 	mov    rbx,QWORD PTR [rip+0xfd9110]        # 19a6df0 <_DYNAMIC+0x5f0>
  9cdce0:	4c 8d b4 24 80 1b 00 	lea    r14,[rsp+0x1b80]
  9cdce7:	00 
  9cdce8:	48 8b 84 24 b8 01 00 	mov    rax,QWORD PTR [rsp+0x1b8]
  9cdcef:	00 
  9cdcf0:	48 83 f8 02          	cmp    rax,0x2
  9cdcf4:	0f 82 76 03 00 00    	jb     9ce070 <future_backtest::RunnerCore::run_multi+0x2dc0>
  9cdcfa:	48 8b 8c 24 b0 01 00 	mov    rcx,QWORD PTR [rsp+0x1b0]
  9cdd01:	00 
  9cdd02:	48 89 c2             	mov    rdx,rax
  9cdd05:	48 d1 ea             	shr    rdx,1
  9cdd08:	48 69 f0 28 01 00 00 	imul   rsi,rax,0x128
  9cdd0f:	48 01 ce             	add    rsi,rcx
  9cdd12:	48 83 c6 f8          	add    rsi,0xfffffffffffffff8
  9cdd16:	48 81 c1 20 01 00 00 	add    rcx,0x120
  9cdd1d:	48 8b b9 e0 fe ff ff 	mov    rdi,QWORD PTR [rcx-0x120]
  9cdd24:	4c 8b 86 e0 fe ff ff 	mov    r8,QWORD PTR [rsi-0x120]
  9cdd2b:	4c 89 81 e0 fe ff ff 	mov    QWORD PTR [rcx-0x120],r8
  9cdd32:	48 89 be e0 fe ff ff 	mov    QWORD PTR [rsi-0x120],rdi
  9cdd39:	48 8b b9 e8 fe ff ff 	mov    rdi,QWORD PTR [rcx-0x118]
  9cdd40:	4c 8b 86 e8 fe ff ff 	mov    r8,QWORD PTR [rsi-0x118]
  9cdd47:	4c 89 81 e8 fe ff ff 	mov    QWORD PTR [rcx-0x118],r8
  9cdd4e:	48 89 be e8 fe ff ff 	mov    QWORD PTR [rsi-0x118],rdi
  9cdd55:	48 8b b9 f0 fe ff ff 	mov    rdi,QWORD PTR [rcx-0x110]
  9cdd5c:	4c 8b 86 f0 fe ff ff 	mov    r8,QWORD PTR [rsi-0x110]
  9cdd63:	4c 89 81 f0 fe ff ff 	mov    QWORD PTR [rcx-0x110],r8
  9cdd6a:	48 89 be f0 fe ff ff 	mov    QWORD PTR [rsi-0x110],rdi
  9cdd71:	48 8b b9 f8 fe ff ff 	mov    rdi,QWORD PTR [rcx-0x108]
  9cdd78:	4c 8b 86 f8 fe ff ff 	mov    r8,QWORD PTR [rsi-0x108]
  9cdd7f:	4c 89 81 f8 fe ff ff 	mov    QWORD PTR [rcx-0x108],r8
  9cdd86:	48 89 be f8 fe ff ff 	mov    QWORD PTR [rsi-0x108],rdi
  9cdd8d:	48 8b b9 00 ff ff ff 	mov    rdi,QWORD PTR [rcx-0x100]
  9cdd94:	4c 8b 86 00 ff ff ff 	mov    r8,QWORD PTR [rsi-0x100]
  9cdd9b:	4c 89 81 00 ff ff ff 	mov    QWORD PTR [rcx-0x100],r8
  9cdda2:	48 89 be 00 ff ff ff 	mov    QWORD PTR [rsi-0x100],rdi
  9cdda9:	48 8b b9 08 ff ff ff 	mov    rdi,QWORD PTR [rcx-0xf8]
  9cddb0:	4c 8b 86 08 ff ff ff 	mov    r8,QWORD PTR [rsi-0xf8]
  9cddb7:	4c 89 81 08 ff ff ff 	mov    QWORD PTR [rcx-0xf8],r8
  9cddbe:	48 89 be 08 ff ff ff 	mov    QWORD PTR [rsi-0xf8],rdi
  9cddc5:	48 8b b9 10 ff ff ff 	mov    rdi,QWORD PTR [rcx-0xf0]
  9cddcc:	4c 8b 86 10 ff ff ff 	mov    r8,QWORD PTR [rsi-0xf0]
  9cddd3:	4c 89 81 10 ff ff ff 	mov    QWORD PTR [rcx-0xf0],r8
  9cddda:	48 89 be 10 ff ff ff 	mov    QWORD PTR [rsi-0xf0],rdi
  9cdde1:	48 8b b9 18 ff ff ff 	mov    rdi,QWORD PTR [rcx-0xe8]
  9cdde8:	4c 8b 86 18 ff ff ff 	mov    r8,QWORD PTR [rsi-0xe8]
  9cddef:	4c 89 81 18 ff ff ff 	mov    QWORD PTR [rcx-0xe8],r8
  9cddf6:	48 89 be 18 ff ff ff 	mov    QWORD PTR [rsi-0xe8],rdi
  9cddfd:	48 8b b9 20 ff ff ff 	mov    rdi,QWORD PTR [rcx-0xe0]
  9cde04:	4c 8b 86 20 ff ff ff 	mov    r8,QWORD PTR [rsi-0xe0]
  9cde0b:	4c 89 81 20 ff ff ff 	mov    QWORD PTR [rcx-0xe0],r8
  9cde12:	48 89 be 20 ff ff ff 	mov    QWORD PTR [rsi-0xe0],rdi
  9cde19:	48 8b b9 28 ff ff ff 	mov    rdi,QWORD PTR [rcx-0xd8]
  9cde20:	4c 8b 86 28 ff ff ff 	mov    r8,QWORD PTR [rsi-0xd8]
  9cde27:	4c 89 81 28 ff ff ff 	mov    QWORD PTR [rcx-0xd8],r8
  9cde2e:	48 89 be 28 ff ff ff 	mov    QWORD PTR [rsi-0xd8],rdi
  9cde35:	48 8b b9 30 ff ff ff 	mov    rdi,QWORD PTR [rcx-0xd0]
  9cde3c:	4c 8b 86 30 ff ff ff 	mov    r8,QWORD PTR [rsi-0xd0]
  9cde43:	4c 89 81 30 ff ff ff 	mov    QWORD PTR [rcx-0xd0],r8
  9cde4a:	48 89 be 30 ff ff ff 	mov    QWORD PTR [rsi-0xd0],rdi
  9cde51:	48 8b b9 38 ff ff ff 	mov    rdi,QWORD PTR [rcx-0xc8]
  9cde58:	4c 8b 86 38 ff ff ff 	mov    r8,QWORD PTR [rsi-0xc8]
  9cde5f:	4c 89 81 38 ff ff ff 	mov    QWORD PTR [rcx-0xc8],r8
  9cde66:	48 89 be 38 ff ff ff 	mov    QWORD PTR [rsi-0xc8],rdi
  9cde6d:	48 8b b9 40 ff ff ff 	mov    rdi,QWORD PTR [rcx-0xc0]
  9cde74:	4c 8b 86 40 ff ff ff 	mov    r8,QWORD PTR [rsi-0xc0]
  9cde7b:	4c 89 81 40 ff ff ff 	mov    QWORD PTR [rcx-0xc0],r8
  9cde82:	48 89 be 40 ff ff ff 	mov    QWORD PTR [rsi-0xc0],rdi
  9cde89:	48 8b b9 48 ff ff ff 	mov    rdi,QWORD PTR [rcx-0xb8]
  9cde90:	4c 8b 86 48 ff ff ff 	mov    r8,QWORD PTR [rsi-0xb8]
  9cde97:	4c 89 81 48 ff ff ff 	mov    QWORD PTR [rcx-0xb8],r8
  9cde9e:	48 89 be 48 ff ff ff 	mov    QWORD PTR [rsi-0xb8],rdi
  9cdea5:	48 8b b9 50 ff ff ff 	mov    rdi,QWORD PTR [rcx-0xb0]
  9cdeac:	4c 8b 86 50 ff ff ff 	mov    r8,QWORD PTR [rsi-0xb0]
  9cdeb3:	4c 89 81 50 ff ff ff 	mov    QWORD PTR [rcx-0xb0],r8
  9cdeba:	48 89 be 50 ff ff ff 	mov    QWORD PTR [rsi-0xb0],rdi
  9cdec1:	48 8b b9 58 ff ff ff 	mov    rdi,QWORD PTR [rcx-0xa8]
  9cdec8:	4c 8b 86 58 ff ff ff 	mov    r8,QWORD PTR [rsi-0xa8]
  9cdecf:	4c 89 81 58 ff ff ff 	mov    QWORD PTR [rcx-0xa8],r8
  9cded6:	48 89 be 58 ff ff ff 	mov    QWORD PTR [rsi-0xa8],rdi
  9cdedd:	48 8b b9 60 ff ff ff 	mov    rdi,QWORD PTR [rcx-0xa0]
  9cdee4:	4c 8b 86 60 ff ff ff 	mov    r8,QWORD PTR [rsi-0xa0]
  9cdeeb:	4c 89 81 60 ff ff ff 	mov    QWORD PTR [rcx-0xa0],r8
  9cdef2:	48 89 be 60 ff ff ff 	mov    QWORD PTR [rsi-0xa0],rdi
  9cdef9:	48 8b b9 68 ff ff ff 	mov    rdi,QWORD PTR [rcx-0x98]
  9cdf00:	4c 8b 86 68 ff ff ff 	mov    r8,QWORD PTR [rsi-0x98]
  9cdf07:	4c 89 81 68 ff ff ff 	mov    QWORD PTR [rcx-0x98],r8
  9cdf0e:	48 89 be 68 ff ff ff 	mov    QWORD PTR [rsi-0x98],rdi
  9cdf15:	48 8b b9 70 ff ff ff 	mov    rdi,QWORD PTR [rcx-0x90]
  9cdf1c:	4c 8b 86 70 ff ff ff 	mov    r8,QWORD PTR [rsi-0x90]
  9cdf23:	4c 89 81 70 ff ff ff 	mov    QWORD PTR [rcx-0x90],r8
  9cdf2a:	48 89 be 70 ff ff ff 	mov    QWORD PTR [rsi-0x90],rdi
  9cdf31:	48 8b b9 78 ff ff ff 	mov    rdi,QWORD PTR [rcx-0x88]
  9cdf38:	4c 8b 86 78 ff ff ff 	mov    r8,QWORD PTR [rsi-0x88]
  9cdf3f:	4c 89 81 78 ff ff ff 	mov    QWORD PTR [rcx-0x88],r8
  9cdf46:	48 89 be 78 ff ff ff 	mov    QWORD PTR [rsi-0x88],rdi
  9cdf4d:	48 8b 79 80          	mov    rdi,QWORD PTR [rcx-0x80]
  9cdf51:	4c 8b 46 80          	mov    r8,QWORD PTR [rsi-0x80]
  9cdf55:	4c 89 41 80          	mov    QWORD PTR [rcx-0x80],r8
  9cdf59:	48 89 7e 80          	mov    QWORD PTR [rsi-0x80],rdi
  9cdf5d:	48 8b 79 88          	mov    rdi,QWORD PTR [rcx-0x78]
  9cdf61:	4c 8b 46 88          	mov    r8,QWORD PTR [rsi-0x78]
  9cdf65:	4c 89 41 88          	mov    QWORD PTR [rcx-0x78],r8
  9cdf69:	48 89 7e 88          	mov    QWORD PTR [rsi-0x78],rdi
  9cdf6d:	48 8b 79 90          	mov    rdi,QWORD PTR [rcx-0x70]
  9cdf71:	4c 8b 46 90          	mov    r8,QWORD PTR [rsi-0x70]
  9cdf75:	4c 89 41 90          	mov    QWORD PTR [rcx-0x70],r8
  9cdf79:	48 89 7e 90          	mov    QWORD PTR [rsi-0x70],rdi
  9cdf7d:	48 8b 79 98          	mov    rdi,QWORD PTR [rcx-0x68]
  9cdf81:	4c 8b 46 98          	mov    r8,QWORD PTR [rsi-0x68]
  9cdf85:	4c 89 41 98          	mov    QWORD PTR [rcx-0x68],r8
  9cdf89:	48 89 7e 98          	mov    QWORD PTR [rsi-0x68],rdi
  9cdf8d:	48 8b 79 a0          	mov    rdi,QWORD PTR [rcx-0x60]
  9cdf91:	4c 8b 46 a0          	mov    r8,QWORD PTR [rsi-0x60]
  9cdf95:	4c 89 41 a0          	mov    QWORD PTR [rcx-0x60],r8
  9cdf99:	48 89 7e a0          	mov    QWORD PTR [rsi-0x60],rdi
  9cdf9d:	48 8b 79 a8          	mov    rdi,QWORD PTR [rcx-0x58]
  9cdfa1:	4c 8b 46 a8          	mov    r8,QWORD PTR [rsi-0x58]
  9cdfa5:	4c 89 41 a8          	mov    QWORD PTR [rcx-0x58],r8
  9cdfa9:	48 89 7e a8          	mov    QWORD PTR [rsi-0x58],rdi
  9cdfad:	48 8b 79 b0          	mov    rdi,QWORD PTR [rcx-0x50]
  9cdfb1:	4c 8b 46 b0          	mov    r8,QWORD PTR [rsi-0x50]
  9cdfb5:	4c 89 41 b0          	mov    QWORD PTR [rcx-0x50],r8
  9cdfb9:	48 89 7e b0          	mov    QWORD PTR [rsi-0x50],rdi
  9cdfbd:	48 8b 79 b8          	mov    rdi,QWORD PTR [rcx-0x48]
  9cdfc1:	4c 8b 46 b8          	mov    r8,QWORD PTR [rsi-0x48]
  9cdfc5:	4c 89 41 b8          	mov    QWORD PTR [rcx-0x48],r8
  9cdfc9:	48 89 7e b8          	mov    QWORD PTR [rsi-0x48],rdi
  9cdfcd:	48 8b 79 c0          	mov    rdi,QWORD PTR [rcx-0x40]
  9cdfd1:	4c 8b 46 c0          	mov    r8,QWORD PTR [rsi-0x40]
  9cdfd5:	4c 89 41 c0          	mov    QWORD PTR [rcx-0x40],r8
  9cdfd9:	48 89 7e c0          	mov    QWORD PTR [rsi-0x40],rdi
  9cdfdd:	48 8b 79 c8          	mov    rdi,QWORD PTR [rcx-0x38]
  9cdfe1:	4c 8b 46 c8          	mov    r8,QWORD PTR [rsi-0x38]
  9cdfe5:	4c 89 41 c8          	mov    QWORD PTR [rcx-0x38],r8
  9cdfe9:	48 89 7e c8          	mov    QWORD PTR [rsi-0x38],rdi
  9cdfed:	48 8b 79 d0          	mov    rdi,QWORD PTR [rcx-0x30]
  9cdff1:	4c 8b 46 d0          	mov    r8,QWORD PTR [rsi-0x30]
  9cdff5:	4c 89 41 d0          	mov    QWORD PTR [rcx-0x30],r8
  9cdff9:	48 89 7e d0          	mov    QWORD PTR [rsi-0x30],rdi
  9cdffd:	48 8b 79 d8          	mov    rdi,QWORD PTR [rcx-0x28]
  9ce001:	4c 8b 46 d8          	mov    r8,QWORD PTR [rsi-0x28]
  9ce005:	4c 89 41 d8          	mov    QWORD PTR [rcx-0x28],r8
  9ce009:	48 89 7e d8          	mov    QWORD PTR [rsi-0x28],rdi
  9ce00d:	48 8b 79 e0          	mov    rdi,QWORD PTR [rcx-0x20]
  9ce011:	4c 8b 46 e0          	mov    r8,QWORD PTR [rsi-0x20]
  9ce015:	4c 89 41 e0          	mov    QWORD PTR [rcx-0x20],r8
  9ce019:	48 89 7e e0          	mov    QWORD PTR [rsi-0x20],rdi
  9ce01d:	48 8b 79 e8          	mov    rdi,QWORD PTR [rcx-0x18]
  9ce021:	4c 8b 46 e8          	mov    r8,QWORD PTR [rsi-0x18]
  9ce025:	4c 89 41 e8          	mov    QWORD PTR [rcx-0x18],r8
  9ce029:	48 89 7e e8          	mov    QWORD PTR [rsi-0x18],rdi
  9ce02d:	48 8b 79 f0          	mov    rdi,QWORD PTR [rcx-0x10]
  9ce031:	4c 8b 46 f0          	mov    r8,QWORD PTR [rsi-0x10]
  9ce035:	4c 89 41 f0          	mov    QWORD PTR [rcx-0x10],r8
  9ce039:	48 89 7e f0          	mov    QWORD PTR [rsi-0x10],rdi
  9ce03d:	48 8b 79 f8          	mov    rdi,QWORD PTR [rcx-0x8]
  9ce041:	4c 8b 46 f8          	mov    r8,QWORD PTR [rsi-0x8]
  9ce045:	4c 89 41 f8          	mov    QWORD PTR [rcx-0x8],r8
  9ce049:	48 89 7e f8          	mov    QWORD PTR [rsi-0x8],rdi
  9ce04d:	48 8b 39             	mov    rdi,QWORD PTR [rcx]
  9ce050:	4c 8b 06             	mov    r8,QWORD PTR [rsi]
  9ce053:	4c 89 01             	mov    QWORD PTR [rcx],r8
  9ce056:	48 89 3e             	mov    QWORD PTR [rsi],rdi
  9ce059:	48 81 c1 28 01 00 00 	add    rcx,0x128
  9ce060:	48 81 c6 d8 fe ff ff 	add    rsi,0xfffffffffffffed8
  9ce067:	48 ff ca             	dec    rdx
  9ce06a:	0f 85 ad fc ff ff    	jne    9cdd1d <future_backtest::RunnerCore::run_multi+0x2a6d>
  9ce070:	48 89 84 24 80 1b 00 	mov    QWORD PTR [rsp+0x1b80],rax
  9ce077:	00 
  9ce078:	4c 89 b4 24 d0 11 00 	mov    QWORD PTR [rsp+0x11d0],r14
  9ce07f:	00 
  9ce080:	48 89 9c 24 d8 11 00 	mov    QWORD PTR [rsp+0x11d8],rbx
  9ce087:	00 
  9ce088:	48 8d 05 21 e0 f2 00 	lea    rax,[rip+0xf2e021]        # 18fc0b0 <anon.609a31ba814f1e4156e50677fc366a7f.492.llvm.5215769359700358943+0xab8>
  9ce08f:	48 89 84 24 10 06 00 	mov    QWORD PTR [rsp+0x610],rax
  9ce096:	00 
  9ce097:	48 c7 84 24 18 06 00 	mov    QWORD PTR [rsp+0x618],0x2
  9ce09e:	00 02 00 00 00 
  9ce0a3:	48 c7 84 24 30 06 00 	mov    QWORD PTR [rsp+0x630],0x0
  9ce0aa:	00 00 00 00 00 
  9ce0af:	48 8d 84 24 d0 11 00 	lea    rax,[rsp+0x11d0]
  9ce0b6:	00 
  9ce0b7:	48 89 84 24 20 06 00 	mov    QWORD PTR [rsp+0x620],rax
  9ce0be:	00 
  9ce0bf:	48 c7 84 24 28 06 00 	mov    QWORD PTR [rsp+0x628],0x1
  9ce0c6:	00 01 00 00 00 
  9ce0cb:	48 8d bc 24 10 06 00 	lea    rdi,[rsp+0x610]
  9ce0d2:	00 
  9ce0d3:	ff 15 7f 8b fd 00    	call   QWORD PTR [rip+0xfd8b7f]        # 19a6c58 <_DYNAMIC+0x458>
  9ce0d9:	48 8d b4 24 78 18 00 	lea    rsi,[rsp+0x1878]
  9ce0e0:	00 
  9ce0e1:	48 8d 15 e8 df f2 00 	lea    rdx,[rip+0xf2dfe8]        # 18fc0d0 <anon.609a31ba814f1e4156e50677fc366a7f.492.llvm.5215769359700358943+0xad8>
  9ce0e8:	48 8d bc 24 f8 05 00 	lea    rdi,[rsp+0x5f8]
  9ce0ef:	00 
  9ce0f0:	e8 6b 3c fa ff       	call   971d60 <<alloc::vec::Vec<T,A> as core::clone::Clone>::clone>
  9ce0f5:	48 8b 44 24 48       	mov    rax,QWORD PTR [rsp+0x48]
  9ce0fa:	48 85 c0             	test   rax,rax
  9ce0fd:	0f 84 cd 05 00 00    	je     9ce6d0 <future_backtest::RunnerCore::run_multi+0x3420>
  9ce103:	48 8b 5c 24 40       	mov    rbx,QWORD PTR [rsp+0x40]
  9ce108:	4c 69 e0 28 15 00 00 	imul   r12,rax,0x1528
  9ce10f:	49 01 dc             	add    r12,rbx
  9ce112:	48 8d 83 28 15 00 00 	lea    rax,[rbx+0x1528]
  9ce119:	4c 8d ac 24 80 1b 00 	lea    r13,[rsp+0x1b80]
  9ce120:	00 
  9ce121:	48 8b 2d 58 8b fd 00 	mov    rbp,QWORD PTR [rip+0xfd8b58]        # 19a6c80 <_DYNAMIC+0x480>
  9ce128:	4c 8d b4 24 10 06 00 	lea    r14,[rsp+0x610]
  9ce12f:	00 
  9ce130:	4c 8b 3d e9 88 fd 00 	mov    r15,QWORD PTR [rip+0xfd88e9]        # 19a6a20 <_DYNAMIC+0x220>
  9ce137:	4c 89 a4 24 c0 00 00 	mov    QWORD PTR [rsp+0xc0],r12
  9ce13e:	00 
  9ce13f:	eb 1f                	jmp    9ce160 <future_backtest::RunnerCore::run_multi+0x2eb0>
  9ce141:	48 8b 8c 24 80 00 00 	mov    rcx,QWORD PTR [rsp+0x80]
  9ce148:	00 
  9ce149:	48 8d 81 28 15 00 00 	lea    rax,[rcx+0x1528]
  9ce150:	48 89 cb             	mov    rbx,rcx
  9ce153:	4c 39 e1             	cmp    rcx,r12
  9ce156:	48 0f 44 c1          	cmove  rax,rcx
  9ce15a:	0f 84 70 05 00 00    	je     9ce6d0 <future_backtest::RunnerCore::run_multi+0x3420>
  9ce160:	48 89 84 24 80 00 00 	mov    QWORD PTR [rsp+0x80],rax
  9ce167:	00 
  9ce168:	48 8d b3 e0 12 00 00 	lea    rsi,[rbx+0x12e0]
  9ce16f:	4c 89 ef             	mov    rdi,r13
  9ce172:	48 8d 15 97 e9 f2 00 	lea    rdx,[rip+0xf2e997]        # 18fcb10 <anon.609a31ba814f1e4156e50677fc366a7f.492.llvm.5215769359700358943+0x1518>
  9ce179:	ff d5                	call   rbp
  9ce17b:	48 8d 73 48          	lea    rsi,[rbx+0x48]
  9ce17f:	4c 89 f7             	mov    rdi,r14
  9ce182:	48 8d 15 9f e9 f2 00 	lea    rdx,[rip+0xf2e99f]        # 18fcb28 <anon.609a31ba814f1e4156e50677fc366a7f.492.llvm.5215769359700358943+0x1530>
  9ce189:	ff d5                	call   rbp
  9ce18b:	48 8b 84 24 90 1b 00 	mov    rax,QWORD PTR [rsp+0x1b90]
  9ce192:	00 
  9ce193:	48 89 84 24 e0 11 00 	mov    QWORD PTR [rsp+0x11e0],rax
  9ce19a:	00 
  9ce19b:	0f 10 84 24 80 1b 00 	movups xmm0,XMMWORD PTR [rsp+0x1b80]
  9ce1a2:	00 
  9ce1a3:	0f 29 84 24 d0 11 00 	movaps XMMWORD PTR [rsp+0x11d0],xmm0
  9ce1aa:	00 
  9ce1ab:	48 8b 84 24 20 06 00 	mov    rax,QWORD PTR [rsp+0x620]
  9ce1b2:	00 
  9ce1b3:	48 8d 8c 24 e8 11 00 	lea    rcx,[rsp+0x11e8]
  9ce1ba:	00 
  9ce1bb:	48 89 41 10          	mov    QWORD PTR [rcx+0x10],rax
  9ce1bf:	f3 0f 6f 84 24 10 06 	movdqu xmm0,XMMWORD PTR [rsp+0x610]
  9ce1c6:	00 00 
  9ce1c8:	f3 0f 7f 01          	movdqu XMMWORD PTR [rcx],xmm0
  9ce1cc:	4c 89 f7             	mov    rdi,r14
  9ce1cf:	48 8d b4 24 f8 05 00 	lea    rsi,[rsp+0x5f8]
  9ce1d6:	00 
  9ce1d7:	48 8d 15 62 e9 f2 00 	lea    rdx,[rip+0xf2e962]        # 18fcb40 <anon.609a31ba814f1e4156e50677fc366a7f.492.llvm.5215769359700358943+0x1548>
  9ce1de:	e8 7d 3b fa ff       	call   971d60 <<alloc::vec::Vec<T,A> as core::clone::Clone>::clone>
  9ce1e3:	48 89 df             	mov    rdi,rbx
  9ce1e6:	4c 89 f6             	mov    rsi,r14
  9ce1e9:	ff 15 79 8f fd 00    	call   QWORD PTR [rip+0xfd8f79]        # 19a7168 <_DYNAMIC+0x968>
  9ce1ef:	48 83 bc 24 50 19 00 	cmp    QWORD PTR [rsp+0x1950],0x0
  9ce1f6:	00 00 
  9ce1f8:	0f 84 bd 01 00 00    	je     9ce3bb <future_backtest::RunnerCore::run_multi+0x310b>
  9ce1fe:	48 8d bc 24 58 19 00 	lea    rdi,[rsp+0x1958]
  9ce205:	00 
  9ce206:	48 8d b4 24 d0 11 00 	lea    rsi,[rsp+0x11d0]
  9ce20d:	00 
  9ce20e:	e8 bd 4a e3 ff       	call   802cd0 <core::hash::BuildHasher::hash_one>
  9ce213:	48 89 c1             	mov    rcx,rax
  9ce216:	48 c1 e9 39          	shr    rcx,0x39
  9ce21a:	48 8b 94 24 38 19 00 	mov    rdx,QWORD PTR [rsp+0x1938]
  9ce221:	00 
  9ce222:	48 8b b4 24 40 19 00 	mov    rsi,QWORD PTR [rsp+0x1940]
  9ce229:	00 
  9ce22a:	66 0f 6e c1          	movd   xmm0,ecx
  9ce22e:	66 0f 60 c0          	punpcklbw xmm0,xmm0
  9ce232:	f2 0f 70 c0 00       	pshuflw xmm0,xmm0,0x0
  9ce237:	66 0f 70 c8 00       	pshufd xmm1,xmm0,0x0
  9ce23c:	48 8d 7a b8          	lea    rdi,[rdx-0x48]
  9ce240:	48 8b 8c 24 d8 11 00 	mov    rcx,QWORD PTR [rsp+0x11d8]
  9ce247:	00 
  9ce248:	48 89 4c 24 70       	mov    QWORD PTR [rsp+0x70],rcx
  9ce24d:	4c 8b 84 24 e0 11 00 	mov    r8,QWORD PTR [rsp+0x11e0]
  9ce254:	00 
  9ce255:	48 8b 8c 24 f8 11 00 	mov    rcx,QWORD PTR [rsp+0x11f8]
  9ce25c:	00 
  9ce25d:	48 89 4c 24 20       	mov    QWORD PTR [rsp+0x20],rcx
  9ce262:	48 8b 8c 24 f0 11 00 	mov    rcx,QWORD PTR [rsp+0x11f0]
  9ce269:	00 
  9ce26a:	48 89 8c 24 90 00 00 	mov    QWORD PTR [rsp+0x90],rcx
  9ce271:	00 
  9ce272:	45 31 c9             	xor    r9d,r9d
  9ce275:	48 21 f0             	and    rax,rsi
  9ce278:	f3 0f 6f 14 02       	movdqu xmm2,XMMWORD PTR [rdx+rax*1]
  9ce27d:	66 0f 6f c2          	movdqa xmm0,xmm2
  9ce281:	66 0f 74 c1          	pcmpeqb xmm0,xmm1
  9ce285:	66 0f d7 c8          	pmovmskb ecx,xmm0
  9ce289:	85 c9                	test   ecx,ecx
  9ce28b:	0f 84 0a 01 00 00    	je     9ce39b <future_backtest::RunnerCore::run_multi+0x30eb>
  9ce291:	48 89 84 24 20 01 00 	mov    QWORD PTR [rsp+0x120],rax
  9ce298:	00 
  9ce299:	48 89 94 24 10 01 00 	mov    QWORD PTR [rsp+0x110],rdx
  9ce2a0:	00 
  9ce2a1:	48 89 b4 24 08 01 00 	mov    QWORD PTR [rsp+0x108],rsi
  9ce2a8:	00 
  9ce2a9:	66 0f 7f 8c 24 30 01 	movdqa XMMWORD PTR [rsp+0x130],xmm1
  9ce2b0:	00 00 
  9ce2b2:	48 89 7c 24 68       	mov    QWORD PTR [rsp+0x68],rdi
  9ce2b7:	4c 89 84 24 b8 00 00 	mov    QWORD PTR [rsp+0xb8],r8
  9ce2be:	00 
  9ce2bf:	4c 89 8c 24 00 01 00 	mov    QWORD PTR [rsp+0x100],r9
  9ce2c6:	00 
  9ce2c7:	66 0f 7f 94 24 d0 04 	movdqa XMMWORD PTR [rsp+0x4d0],xmm2
  9ce2ce:	00 00 
  9ce2d0:	48 89 8c 24 28 01 00 	mov    QWORD PTR [rsp+0x128],rcx
  9ce2d7:	00 
  9ce2d8:	f3 0f bc c9          	tzcnt  ecx,ecx
  9ce2dc:	48 01 c1             	add    rcx,rax
  9ce2df:	48 21 f1             	and    rcx,rsi
  9ce2e2:	48 f7 d9             	neg    rcx
  9ce2e5:	4c 8d 24 c9          	lea    r12,[rcx+rcx*8]
  9ce2e9:	4e 3b 44 e7 10       	cmp    r8,QWORD PTR [rdi+r12*8+0x10]
  9ce2ee:	75 4e                	jne    9ce33e <future_backtest::RunnerCore::run_multi+0x308e>
  9ce2f0:	48 8b 44 24 68       	mov    rax,QWORD PTR [rsp+0x68]
  9ce2f5:	4a 8d 2c e0          	lea    rbp,[rax+r12*8]
  9ce2f9:	48 8b 75 08          	mov    rsi,QWORD PTR [rbp+0x8]
  9ce2fd:	48 8b 7c 24 70       	mov    rdi,QWORD PTR [rsp+0x70]
  9ce302:	48 8b 94 24 b8 00 00 	mov    rdx,QWORD PTR [rsp+0xb8]
  9ce309:	00 
  9ce30a:	ff 15 a8 8b fd 00    	call   QWORD PTR [rip+0xfd8ba8]        # 19a6eb8 <bcmp@GLIBC_2.2.5>
  9ce310:	85 c0                	test   eax,eax
  9ce312:	75 2a                	jne    9ce33e <future_backtest::RunnerCore::run_multi+0x308e>
  9ce314:	48 8b 44 24 20       	mov    rax,QWORD PTR [rsp+0x20]
  9ce319:	48 3b 45 28          	cmp    rax,QWORD PTR [rbp+0x28]
  9ce31d:	75 1f                	jne    9ce33e <future_backtest::RunnerCore::run_multi+0x308e>
  9ce31f:	48 8b 75 20          	mov    rsi,QWORD PTR [rbp+0x20]
  9ce323:	48 8b bc 24 90 00 00 	mov    rdi,QWORD PTR [rsp+0x90]
  9ce32a:	00 
  9ce32b:	48 8b 54 24 20       	mov    rdx,QWORD PTR [rsp+0x20]
  9ce330:	ff 15 82 8b fd 00    	call   QWORD PTR [rip+0xfd8b82]        # 19a6eb8 <bcmp@GLIBC_2.2.5>
  9ce336:	85 c0                	test   eax,eax
  9ce338:	0f 84 e8 00 00 00    	je     9ce426 <future_backtest::RunnerCore::run_multi+0x3176>
  9ce33e:	48 8b 8c 24 28 01 00 	mov    rcx,QWORD PTR [rsp+0x128]
  9ce345:	00 
  9ce346:	8d 41 ff             	lea    eax,[rcx-0x1]
  9ce349:	66 21 c8             	and    ax,cx
  9ce34c:	89 c1                	mov    ecx,eax
  9ce34e:	48 8b 84 24 20 01 00 	mov    rax,QWORD PTR [rsp+0x120]
  9ce355:	00 
  9ce356:	4c 8b a4 24 c0 00 00 	mov    r12,QWORD PTR [rsp+0xc0]
  9ce35d:	00 
  9ce35e:	48 8b 94 24 10 01 00 	mov    rdx,QWORD PTR [rsp+0x110]
  9ce365:	00 
  9ce366:	48 8b b4 24 08 01 00 	mov    rsi,QWORD PTR [rsp+0x108]
  9ce36d:	00 
  9ce36e:	66 0f 6f 8c 24 30 01 	movdqa xmm1,XMMWORD PTR [rsp+0x130]
  9ce375:	00 00 
  9ce377:	48 8b 7c 24 68       	mov    rdi,QWORD PTR [rsp+0x68]
  9ce37c:	4c 8b 84 24 b8 00 00 	mov    r8,QWORD PTR [rsp+0xb8]
  9ce383:	00 
  9ce384:	4c 8b 8c 24 00 01 00 	mov    r9,QWORD PTR [rsp+0x100]
  9ce38b:	00 
  9ce38c:	66 0f 6f 94 24 d0 04 	movdqa xmm2,XMMWORD PTR [rsp+0x4d0]
  9ce393:	00 00 
  9ce395:	0f 85 35 ff ff ff    	jne    9ce2d0 <future_backtest::RunnerCore::run_multi+0x3020>
  9ce39b:	66 0f 74 15 7d 63 88 	pcmpeqb xmm2,XMMWORD PTR [rip+0xffffffffff88637d]        # 254720 <anon.1d60bbc5b7a6ca0614a4221d8538e6d9.2.llvm.10718084555993993690>
  9ce3a2:	ff 
  9ce3a3:	66 0f d7 ca          	pmovmskb ecx,xmm2
  9ce3a7:	85 c9                	test   ecx,ecx
  9ce3a9:	75 10                	jne    9ce3bb <future_backtest::RunnerCore::run_multi+0x310b>
  9ce3ab:	4c 01 c8             	add    rax,r9
  9ce3ae:	48 83 c0 10          	add    rax,0x10
  9ce3b2:	49 83 c1 10          	add    r9,0x10
  9ce3b6:	e9 ba fe ff ff       	jmp    9ce275 <future_backtest::RunnerCore::run_multi+0x2fc5>
  9ce3bb:	31 ed                	xor    ebp,ebp
  9ce3bd:	48 c7 44 24 20 00 00 	mov    QWORD PTR [rsp+0x20],0x0
  9ce3c4:	00 00 
  9ce3c6:	48 8b 8b f0 14 00 00 	mov    rcx,QWORD PTR [rbx+0x14f0]
  9ce3cd:	48 85 c9             	test   rcx,rcx
  9ce3d0:	0f 84 cc 00 00 00    	je     9ce4a2 <future_backtest::RunnerCore::run_multi+0x31f2>
  9ce3d6:	48 8b 93 f8 14 00 00 	mov    rdx,QWORD PTR [rbx+0x14f8]
  9ce3dd:	48 8b 83 00 15 00 00 	mov    rax,QWORD PTR [rbx+0x1500]
  9ce3e4:	48 c7 84 24 18 06 00 	mov    QWORD PTR [rsp+0x618],0x0
  9ce3eb:	00 00 00 00 00 
  9ce3f0:	48 89 8c 24 20 06 00 	mov    QWORD PTR [rsp+0x620],rcx
  9ce3f7:	00 
  9ce3f8:	48 89 94 24 28 06 00 	mov    QWORD PTR [rsp+0x628],rdx
  9ce3ff:	00 
  9ce400:	48 c7 84 24 38 06 00 	mov    QWORD PTR [rsp+0x638],0x0
  9ce407:	00 00 00 00 00 
  9ce40c:	48 89 8c 24 40 06 00 	mov    QWORD PTR [rsp+0x640],rcx
  9ce413:	00 
  9ce414:	48 89 94 24 48 06 00 	mov    QWORD PTR [rsp+0x648],rdx
  9ce41b:	00 
  9ce41c:	b9 01 00 00 00       	mov    ecx,0x1
  9ce421:	e9 80 00 00 00       	jmp    9ce4a6 <future_backtest::RunnerCore::run_multi+0x31f6>
  9ce426:	48 8b 84 24 10 01 00 	mov    rax,QWORD PTR [rsp+0x110]
  9ce42d:	00 
  9ce42e:	4a 83 7c e0 f8 00    	cmp    QWORD PTR [rax+r12*8-0x8],0x0
  9ce434:	74 3c                	je     9ce472 <future_backtest::RunnerCore::run_multi+0x31c2>
  9ce436:	4a 8d 04 e0          	lea    rax,[rax+r12*8]
  9ce43a:	48 8b 70 e8          	mov    rsi,QWORD PTR [rax-0x18]
  9ce43e:	48 85 f6             	test   rsi,rsi
  9ce441:	4c 8b a4 24 c0 00 00 	mov    r12,QWORD PTR [rsp+0xc0]
  9ce448:	00 
  9ce449:	0f 84 47 3d 00 00    	je     9d2196 <future_backtest::RunnerCore::run_multi+0x6ee6>
  9ce44f:	48 8b 50 f0          	mov    rdx,QWORD PTR [rax-0x10]
  9ce453:	4c 89 f7             	mov    rdi,r14
  9ce456:	e8 45 42 d5 ff       	call   7226a0 <_ZN96_$LT$alloc..collections..btree..map..BTreeMap$LT$K$C$V$C$A$GT$$u20$as$u20$core..clone..Clone$GT$5clone13clone_subtree17h642a0bc4b69bf6efE.llvm.1643563994444475245>
  9ce45b:	48 8b ac 24 10 06 00 	mov    rbp,QWORD PTR [rsp+0x610]
  9ce462:	00 
  9ce463:	48 8b 84 24 20 06 00 	mov    rax,QWORD PTR [rsp+0x620]
  9ce46a:	00 
  9ce46b:	48 89 44 24 20       	mov    QWORD PTR [rsp+0x20],rax
  9ce470:	eb 13                	jmp    9ce485 <future_backtest::RunnerCore::run_multi+0x31d5>
  9ce472:	48 c7 44 24 20 00 00 	mov    QWORD PTR [rsp+0x20],0x0
  9ce479:	00 00 
  9ce47b:	31 ed                	xor    ebp,ebp
  9ce47d:	4c 8b a4 24 c0 00 00 	mov    r12,QWORD PTR [rsp+0xc0]
  9ce484:	00 
  9ce485:	48 8b 84 24 18 06 00 	mov    rax,QWORD PTR [rsp+0x618]
  9ce48c:	00 
  9ce48d:	48 89 44 24 70       	mov    QWORD PTR [rsp+0x70],rax
  9ce492:	48 8b 8b f0 14 00 00 	mov    rcx,QWORD PTR [rbx+0x14f0]
  9ce499:	48 85 c9             	test   rcx,rcx
  9ce49c:	0f 85 34 ff ff ff    	jne    9ce3d6 <future_backtest::RunnerCore::run_multi+0x3126>
  9ce4a2:	31 c9                	xor    ecx,ecx
  9ce4a4:	31 c0                	xor    eax,eax
  9ce4a6:	48 89 8c 24 10 06 00 	mov    QWORD PTR [rsp+0x610],rcx
  9ce4ad:	00 
  9ce4ae:	48 89 8c 24 30 06 00 	mov    QWORD PTR [rsp+0x630],rcx
  9ce4b5:	00 
  9ce4b6:	48 89 84 24 50 06 00 	mov    QWORD PTR [rsp+0x650],rax
  9ce4bd:	00 
  9ce4be:	4c 89 ef             	mov    rdi,r13
  9ce4c1:	4c 89 f6             	mov    rsi,r14
  9ce4c4:	e8 17 b7 d4 ff       	call   719be0 <_ZN5alloc11collections5btree3map25IntoIter$LT$K$C$V$C$A$GT$10dying_next17h81e3870da105acd2E.llvm.1643563994444475245>
  9ce4c9:	eb 10                	jmp    9ce4db <future_backtest::RunnerCore::run_multi+0x322b>
  9ce4cb:	0f 1f 44 00 00       	nop    DWORD PTR [rax+rax*1+0x0]
  9ce4d0:	4c 89 ef             	mov    rdi,r13
  9ce4d3:	4c 89 f6             	mov    rsi,r14
  9ce4d6:	e8 05 b7 d4 ff       	call   719be0 <_ZN5alloc11collections5btree3map25IntoIter$LT$K$C$V$C$A$GT$10dying_next17h81e3870da105acd2E.llvm.1643563994444475245>
  9ce4db:	48 8b 84 24 80 1b 00 	mov    rax,QWORD PTR [rsp+0x1b80]
  9ce4e2:	00 
  9ce4e3:	48 85 c0             	test   rax,rax
  9ce4e6:	74 2c                	je     9ce514 <future_backtest::RunnerCore::run_multi+0x3264>
  9ce4e8:	48 8b 8c 24 90 1b 00 	mov    rcx,QWORD PTR [rsp+0x1b90]
  9ce4ef:	00 
  9ce4f0:	48 8d 0c 49          	lea    rcx,[rcx+rcx*2]
  9ce4f4:	48 8b 74 c8 08       	mov    rsi,QWORD PTR [rax+rcx*8+0x8]
  9ce4f9:	48 85 f6             	test   rsi,rsi
  9ce4fc:	74 d2                	je     9ce4d0 <future_backtest::RunnerCore::run_multi+0x3220>
  9ce4fe:	48 8d 04 c8          	lea    rax,[rax+rcx*8]
  9ce502:	48 83 c0 08          	add    rax,0x8
  9ce506:	48 8b 78 08          	mov    rdi,QWORD PTR [rax+0x8]
  9ce50a:	ba 01 00 00 00       	mov    edx,0x1
  9ce50f:	41 ff d7             	call   r15
  9ce512:	eb bc                	jmp    9ce4d0 <future_backtest::RunnerCore::run_multi+0x3220>
  9ce514:	48 89 ab f0 14 00 00 	mov    QWORD PTR [rbx+0x14f0],rbp
  9ce51b:	48 8b 44 24 70       	mov    rax,QWORD PTR [rsp+0x70]
  9ce520:	48 89 83 f8 14 00 00 	mov    QWORD PTR [rbx+0x14f8],rax
  9ce527:	48 8b 44 24 20       	mov    rax,QWORD PTR [rsp+0x20]
  9ce52c:	48 89 83 00 15 00 00 	mov    QWORD PTR [rbx+0x1500],rax
  9ce533:	48 83 bc 24 78 19 00 	cmp    QWORD PTR [rsp+0x1978],0x0
  9ce53a:	00 00 
  9ce53c:	0f 84 86 00 00 00    	je     9ce5c8 <future_backtest::RunnerCore::run_multi+0x3318>
  9ce542:	48 8b b4 24 68 19 00 	mov    rsi,QWORD PTR [rsp+0x1968]
  9ce549:	00 
  9ce54a:	48 85 f6             	test   rsi,rsi
  9ce54d:	48 8b 2d 2c 87 fd 00 	mov    rbp,QWORD PTR [rip+0xfd872c]        # 19a6c80 <_DYNAMIC+0x480>
  9ce554:	0f 84 3c 3c 00 00    	je     9d2196 <future_backtest::RunnerCore::run_multi+0x6ee6>
  9ce55a:	48 8b 94 24 70 19 00 	mov    rdx,QWORD PTR [rsp+0x1970]
  9ce561:	00 
  9ce562:	48 8d bc 24 e0 0e 00 	lea    rdi,[rsp+0xee0]
  9ce569:	00 
  9ce56a:	e8 31 66 d5 ff       	call   724ba0 <_ZN96_$LT$alloc..collections..btree..map..BTreeMap$LT$K$C$V$C$A$GT$$u20$as$u20$core..clone..Clone$GT$5clone13clone_subtree17hb2be7ccb670d6265E.llvm.1643563994444475245>
  9ce56f:	48 8b 8b 08 15 00 00 	mov    rcx,QWORD PTR [rbx+0x1508]
  9ce576:	48 85 c9             	test   rcx,rcx
  9ce579:	74 78                	je     9ce5f3 <future_backtest::RunnerCore::run_multi+0x3343>
  9ce57b:	48 8b 93 10 15 00 00 	mov    rdx,QWORD PTR [rbx+0x1510]
  9ce582:	48 8b 83 18 15 00 00 	mov    rax,QWORD PTR [rbx+0x1518]
  9ce589:	48 c7 84 24 18 06 00 	mov    QWORD PTR [rsp+0x618],0x0
  9ce590:	00 00 00 00 00 
  9ce595:	48 89 8c 24 20 06 00 	mov    QWORD PTR [rsp+0x620],rcx
  9ce59c:	00 
  9ce59d:	48 89 94 24 28 06 00 	mov    QWORD PTR [rsp+0x628],rdx
  9ce5a4:	00 
  9ce5a5:	48 c7 84 24 38 06 00 	mov    QWORD PTR [rsp+0x638],0x0
  9ce5ac:	00 00 00 00 00 
  9ce5b1:	48 89 8c 24 40 06 00 	mov    QWORD PTR [rsp+0x640],rcx
  9ce5b8:	00 
  9ce5b9:	48 89 94 24 48 06 00 	mov    QWORD PTR [rsp+0x648],rdx
  9ce5c0:	00 
  9ce5c1:	b9 01 00 00 00       	mov    ecx,0x1
  9ce5c6:	eb 2f                	jmp    9ce5f7 <future_backtest::RunnerCore::run_multi+0x3347>
  9ce5c8:	48 c7 84 24 e0 0e 00 	mov    QWORD PTR [rsp+0xee0],0x0
  9ce5cf:	00 00 00 00 00 
  9ce5d4:	48 c7 84 24 f0 0e 00 	mov    QWORD PTR [rsp+0xef0],0x0
  9ce5db:	00 00 00 00 00 
  9ce5e0:	48 8b 2d 99 86 fd 00 	mov    rbp,QWORD PTR [rip+0xfd8699]        # 19a6c80 <_DYNAMIC+0x480>
  9ce5e7:	48 8b 8b 08 15 00 00 	mov    rcx,QWORD PTR [rbx+0x1508]
  9ce5ee:	48 85 c9             	test   rcx,rcx
  9ce5f1:	75 88                	jne    9ce57b <future_backtest::RunnerCore::run_multi+0x32cb>
  9ce5f3:	31 c9                	xor    ecx,ecx
  9ce5f5:	31 c0                	xor    eax,eax
  9ce5f7:	48 81 c3 08 15 00 00 	add    rbx,0x1508
  9ce5fe:	48 89 8c 24 10 06 00 	mov    QWORD PTR [rsp+0x610],rcx
  9ce605:	00 
  9ce606:	48 89 8c 24 30 06 00 	mov    QWORD PTR [rsp+0x630],rcx
  9ce60d:	00 
  9ce60e:	48 89 84 24 50 06 00 	mov    QWORD PTR [rsp+0x650],rax
  9ce615:	00 
  9ce616:	4c 89 ef             	mov    rdi,r13
  9ce619:	4c 89 f6             	mov    rsi,r14
  9ce61c:	e8 3f 96 d4 ff       	call   717c60 <_ZN5alloc11collections5btree3map25IntoIter$LT$K$C$V$C$A$GT$10dying_next17h2c48ad6f02f1ee4fE.llvm.1643563994444475245>
  9ce621:	eb 18                	jmp    9ce63b <future_backtest::RunnerCore::run_multi+0x338b>
  9ce623:	66 66 66 66 2e 0f 1f 	data16 data16 data16 cs nop WORD PTR [rax+rax*1+0x0]
  9ce62a:	84 00 00 00 00 00 
  9ce630:	4c 89 ef             	mov    rdi,r13
  9ce633:	4c 89 f6             	mov    rsi,r14
  9ce636:	e8 25 96 d4 ff       	call   717c60 <_ZN5alloc11collections5btree3map25IntoIter$LT$K$C$V$C$A$GT$10dying_next17h2c48ad6f02f1ee4fE.llvm.1643563994444475245>
  9ce63b:	48 8b 84 24 80 1b 00 	mov    rax,QWORD PTR [rsp+0x1b80]
  9ce642:	00 
  9ce643:	48 85 c0             	test   rax,rax
  9ce646:	74 2c                	je     9ce674 <future_backtest::RunnerCore::run_multi+0x33c4>
  9ce648:	48 8b 8c 24 90 1b 00 	mov    rcx,QWORD PTR [rsp+0x1b90]
  9ce64f:	00 
  9ce650:	48 8d 0c 49          	lea    rcx,[rcx+rcx*2]
  9ce654:	48 8b 74 c8 08       	mov    rsi,QWORD PTR [rax+rcx*8+0x8]
  9ce659:	48 85 f6             	test   rsi,rsi
  9ce65c:	74 d2                	je     9ce630 <future_backtest::RunnerCore::run_multi+0x3380>
  9ce65e:	48 8d 04 c8          	lea    rax,[rax+rcx*8]
  9ce662:	48 83 c0 08          	add    rax,0x8
  9ce666:	48 8b 78 08          	mov    rdi,QWORD PTR [rax+0x8]
  9ce66a:	ba 01 00 00 00       	mov    edx,0x1
  9ce66f:	41 ff d7             	call   r15
  9ce672:	eb bc                	jmp    9ce630 <future_backtest::RunnerCore::run_multi+0x3380>
  9ce674:	48 8b 84 24 f0 0e 00 	mov    rax,QWORD PTR [rsp+0xef0]
  9ce67b:	00 
  9ce67c:	48 89 43 10          	mov    QWORD PTR [rbx+0x10],rax
  9ce680:	f3 0f 6f 84 24 e0 0e 	movdqu xmm0,XMMWORD PTR [rsp+0xee0]
  9ce687:	00 00 
  9ce689:	f3 0f 7f 03          	movdqu XMMWORD PTR [rbx],xmm0
  9ce68d:	48 8b b4 24 d0 11 00 	mov    rsi,QWORD PTR [rsp+0x11d0]
  9ce694:	00 
  9ce695:	48 85 f6             	test   rsi,rsi
  9ce698:	74 10                	je     9ce6aa <future_backtest::RunnerCore::run_multi+0x33fa>
  9ce69a:	48 8b bc 24 d8 11 00 	mov    rdi,QWORD PTR [rsp+0x11d8]
  9ce6a1:	00 
  9ce6a2:	ba 01 00 00 00       	mov    edx,0x1
  9ce6a7:	41 ff d7             	call   r15
  9ce6aa:	48 8b b4 24 e8 11 00 	mov    rsi,QWORD PTR [rsp+0x11e8]
  9ce6b1:	00 
  9ce6b2:	48 85 f6             	test   rsi,rsi
  9ce6b5:	0f 84 86 fa ff ff    	je     9ce141 <future_backtest::RunnerCore::run_multi+0x2e91>
  9ce6bb:	48 8b bc 24 f0 11 00 	mov    rdi,QWORD PTR [rsp+0x11f0]
  9ce6c2:	00 
  9ce6c3:	ba 01 00 00 00       	mov    edx,0x1
  9ce6c8:	41 ff d7             	call   r15
  9ce6cb:	e9 71 fa ff ff       	jmp    9ce141 <future_backtest::RunnerCore::run_multi+0x2e91>
  9ce6d0:	4c 8b 74 24 18       	mov    r14,QWORD PTR [rsp+0x18]
  9ce6d5:	49 83 7e 10 00       	cmp    QWORD PTR [r14+0x10],0x0
  9ce6da:	0f 85 3f 57 00 00    	jne    9d3e1f <future_backtest::RunnerCore::run_multi+0x8b6f>
  9ce6e0:	49 c7 46 10 ff ff ff 	mov    QWORD PTR [r14+0x10],0xffffffffffffffff
  9ce6e7:	ff 
  9ce6e8:	49 8d 5e 18          	lea    rbx,[r14+0x18]
  9ce6ec:	48 8b 84 24 08 06 00 	mov    rax,QWORD PTR [rsp+0x608]
  9ce6f3:	00 
  9ce6f4:	48 89 84 24 20 06 00 	mov    QWORD PTR [rsp+0x620],rax
  9ce6fb:	00 
  9ce6fc:	f3 0f 6f 84 24 f8 05 	movdqu xmm0,XMMWORD PTR [rsp+0x5f8]
  9ce703:	00 00 
  9ce705:	66 0f 7f 84 24 10 06 	movdqa XMMWORD PTR [rsp+0x610],xmm0
  9ce70c:	00 00 
  9ce70e:	48 8d b4 24 10 06 00 	lea    rsi,[rsp+0x610]
  9ce715:	00 
  9ce716:	48 89 df             	mov    rdi,rbx
  9ce719:	ff 15 b1 97 fd 00    	call   QWORD PTR [rip+0xfd97b1]        # 19a7ed0 <_DYNAMIC+0x16d0>
  9ce71f:	49 89 c7             	mov    r15,rax
  9ce722:	49 ff 46 10          	inc    QWORD PTR [r14+0x10]
  9ce726:	48 85 c0             	test   rax,rax
  9ce729:	0f 84 06 04 00 00    	je     9ceb35 <future_backtest::RunnerCore::run_multi+0x3885>
  9ce72f:	40 b5 01             	mov    bpl,0x1
  9ce732:	48 8b 9c 24 b0 01 00 	mov    rbx,QWORD PTR [rsp+0x1b0]
  9ce739:	00 
  9ce73a:	4c 8b ac 24 b8 01 00 	mov    r13,QWORD PTR [rsp+0x1b8]
  9ce741:	00 
  9ce742:	49 ff c5             	inc    r13
  9ce745:	48 89 df             	mov    rdi,rbx
  9ce748:	0f 1f 84 00 00 00 00 	nop    DWORD PTR [rax+rax*1+0x0]
  9ce74f:	00 
  9ce750:	49 83 fd 01          	cmp    r13,0x1
  9ce754:	0f 84 ac 00 00 00    	je     9ce806 <future_backtest::RunnerCore::run_multi+0x3556>
  9ce75a:	4c 8d b7 28 01 00 00 	lea    r14,[rdi+0x128]
  9ce761:	49 ff cd             	dec    r13
  9ce764:	e8 c7 ca f9 ff       	call   96b230 <_ZN4core3ptr73drop_in_place$LT$future_backtest..DataStruct..event_slice..EventSlice$GT$17h4393e6a5cd212903E.llvm.1325298290625399205>
  9ce769:	4c 89 f7             	mov    rdi,r14
  9ce76c:	eb e2                	jmp    9ce750 <future_backtest::RunnerCore::run_multi+0x34a0>
  9ce76e:	48 8d 84 24 c0 01 00 	lea    rax,[rsp+0x1c0]
  9ce775:	00 
  9ce776:	48 89 84 24 80 1b 00 	mov    QWORD PTR [rsp+0x1b80],rax
  9ce77d:	00 
  9ce77e:	48 8d 05 9b 6b f2 ff 	lea    rax,[rip+0xfffffffffff26b9b]        # 8f5320 <<&T as core::fmt::Display>::fmt>
  9ce785:	48 89 84 24 88 1b 00 	mov    QWORD PTR [rsp+0x1b88],rax
  9ce78c:	00 
  9ce78d:	48 8d 8c 24 d0 01 00 	lea    rcx,[rsp+0x1d0]
  9ce794:	00 
  9ce795:	48 89 8c 24 90 1b 00 	mov    QWORD PTR [rsp+0x1b90],rcx
  9ce79c:	00 
  9ce79d:	48 89 84 24 98 1b 00 	mov    QWORD PTR [rsp+0x1b98],rax
  9ce7a4:	00 
  9ce7a5:	48 8d 05 e4 d5 f2 00 	lea    rax,[rip+0xf2d5e4]        # 18fbd90 <anon.609a31ba814f1e4156e50677fc366a7f.492.llvm.5215769359700358943+0x798>
  9ce7ac:	48 89 84 24 d0 11 00 	mov    QWORD PTR [rsp+0x11d0],rax
  9ce7b3:	00 
  9ce7b4:	48 c7 84 24 d8 11 00 	mov    QWORD PTR [rsp+0x11d8],0x2
  9ce7bb:	00 02 00 00 00 
  9ce7c0:	48 c7 84 24 f0 11 00 	mov    QWORD PTR [rsp+0x11f0],0x0
  9ce7c7:	00 00 00 00 00 
  9ce7cc:	48 8d 84 24 80 1b 00 	lea    rax,[rsp+0x1b80]
  9ce7d3:	00 
  9ce7d4:	48 89 84 24 e0 11 00 	mov    QWORD PTR [rsp+0x11e0],rax
  9ce7db:	00 
  9ce7dc:	48 c7 84 24 e8 11 00 	mov    QWORD PTR [rsp+0x11e8],0x2
  9ce7e3:	00 02 00 00 00 
  9ce7e8:	48 8d 9c 24 e8 04 00 	lea    rbx,[rsp+0x4e8]
  9ce7ef:	00 
  9ce7f0:	48 8d b4 24 d0 11 00 	lea    rsi,[rsp+0x11d0]
  9ce7f7:	00 
  9ce7f8:	48 89 df             	mov    rdi,rbx
  9ce7fb:	ff 15 7f 85 fd 00    	call   QWORD PTR [rip+0xfd857f]        # 19a6d80 <_DYNAMIC+0x580>
  9ce801:	e9 02 02 00 00       	jmp    9cea08 <future_backtest::RunnerCore::run_multi+0x3758>
  9ce806:	48 8b 84 24 a8 01 00 	mov    rax,QWORD PTR [rsp+0x1a8]
  9ce80d:	00 
  9ce80e:	48 85 c0             	test   rax,rax
  9ce811:	74 15                	je     9ce828 <future_backtest::RunnerCore::run_multi+0x3578>
  9ce813:	48 69 f0 28 01 00 00 	imul   rsi,rax,0x128
  9ce81a:	ba 08 00 00 00       	mov    edx,0x8
  9ce81f:	48 89 df             	mov    rdi,rbx
  9ce822:	ff 15 f8 81 fd 00    	call   QWORD PTR [rip+0xfd81f8]        # 19a6a20 <_DYNAMIC+0x220>
  9ce828:	48 8d bc 24 60 18 00 	lea    rdi,[rsp+0x1860]
  9ce82f:	00 
  9ce830:	e8 cb 8a fd ff       	call   9a7300 <core::ptr::drop_in_place<future_backtest::MultiStrategy::event_producer::EventProducer>>
  9ce835:	48 8b 7c 24 40       	mov    rdi,QWORD PTR [rsp+0x40]
  9ce83a:	4c 8b 74 24 48       	mov    r14,QWORD PTR [rsp+0x48]
  9ce83f:	49 ff c6             	inc    r14
  9ce842:	66 66 66 66 66 2e 0f 	data16 data16 data16 data16 cs nop WORD PTR [rax+rax*1+0x0]
  9ce849:	1f 84 00 00 00 00 00 
  9ce850:	49 83 fe 01          	cmp    r14,0x1
  9ce854:	74 14                	je     9ce86a <future_backtest::RunnerCore::run_multi+0x35ba>
  9ce856:	48 8d 9f 28 15 00 00 	lea    rbx,[rdi+0x1528]
  9ce85d:	49 ff ce             	dec    r14
  9ce860:	e8 5b b5 f9 ff       	call   969dc0 <_ZN4core3ptr66drop_in_place$LT$future_backtest..Strategy..strategy..Strategy$GT$17hb325f64ad9ac2d20E.llvm.1325298290625399205>
  9ce865:	48 89 df             	mov    rdi,rbx
  9ce868:	eb e6                	jmp    9ce850 <future_backtest::RunnerCore::run_multi+0x35a0>
  9ce86a:	48 8b 44 24 38       	mov    rax,QWORD PTR [rsp+0x38]
  9ce86f:	48 85 c0             	test   rax,rax
  9ce872:	74 17                	je     9ce88b <future_backtest::RunnerCore::run_multi+0x35db>
  9ce874:	48 8b 7c 24 40       	mov    rdi,QWORD PTR [rsp+0x40]
  9ce879:	48 69 f0 28 15 00 00 	imul   rsi,rax,0x1528
  9ce880:	ba 08 00 00 00       	mov    edx,0x8
  9ce885:	ff 15 95 81 fd 00    	call   QWORD PTR [rip+0xfd8195]        # 19a6a20 <_DYNAMIC+0x220>
  9ce88b:	48 8b 84 24 88 00 00 	mov    rax,QWORD PTR [rsp+0x88]
  9ce892:	00 
  9ce893:	48 ff 08             	dec    QWORD PTR [rax]
  9ce896:	75 0e                	jne    9ce8a6 <future_backtest::RunnerCore::run_multi+0x35f6>
  9ce898:	48 8d bc 24 60 03 00 	lea    rdi,[rsp+0x360]
  9ce89f:	00 
  9ce8a0:	ff 15 42 8f fd 00    	call   QWORD PTR [rip+0xfd8f42]        # 19a77e8 <_DYNAMIC+0xfe8>
  9ce8a6:	48 8b 44 24 18       	mov    rax,QWORD PTR [rsp+0x18]
  9ce8ab:	48 ff 08             	dec    QWORD PTR [rax]
  9ce8ae:	0f 85 84 d7 ff ff    	jne    9cc038 <future_backtest::RunnerCore::run_multi+0xd88>
  9ce8b4:	48 8d bc 24 58 03 00 	lea    rdi,[rsp+0x358]
  9ce8bb:	00 
  9ce8bc:	ff 15 2e 8f fd 00    	call   QWORD PTR [rip+0xfd8f2e]        # 19a77f0 <_DYNAMIC+0xff0>
  9ce8c2:	e9 71 d7 ff ff       	jmp    9cc038 <future_backtest::RunnerCore::run_multi+0xd88>
  9ce8c7:	48 21 d0             	and    rax,rdx
  9ce8ca:	f3 0f 6f 0c 01       	movdqu xmm1,XMMWORD PTR [rcx+rax*1]
  9ce8cf:	66 0f 6f d1          	movdqa xmm2,xmm1
  9ce8d3:	66 0f 74 d0          	pcmpeqb xmm2,xmm0
  9ce8d7:	66 0f d7 fa          	pmovmskb edi,xmm2
  9ce8db:	85 ff                	test   edi,edi
  9ce8dd:	74 28                	je     9ce907 <future_backtest::RunnerCore::run_multi+0x3657>
  9ce8df:	f3 44 0f bc c7       	tzcnt  r8d,edi
  9ce8e4:	49 01 c0             	add    r8,rax
  9ce8e7:	49 21 d0             	and    r8,rdx
  9ce8ea:	49 c1 e0 02          	shl    r8,0x2
  9ce8ee:	49 89 c9             	mov    r9,rcx
  9ce8f1:	4d 29 c1             	sub    r9,r8
  9ce8f4:	41 3b 69 fc          	cmp    ebp,DWORD PTR [r9-0x4]
  9ce8f8:	74 2e                	je     9ce928 <future_backtest::RunnerCore::run_multi+0x3678>
  9ce8fa:	44 8d 47 ff          	lea    r8d,[rdi-0x1]
  9ce8fe:	66 41 21 f8          	and    r8w,di
  9ce902:	44 89 c7             	mov    edi,r8d
  9ce905:	75 d8                	jne    9ce8df <future_backtest::RunnerCore::run_multi+0x362f>
  9ce907:	66 0f 74 0d 11 5e 88 	pcmpeqb xmm1,XMMWORD PTR [rip+0xffffffffff885e11]        # 254720 <anon.1d60bbc5b7a6ca0614a4221d8538e6d9.2.llvm.10718084555993993690>
  9ce90e:	ff 
  9ce90f:	66 0f d7 f9          	pmovmskb edi,xmm1
  9ce913:	85 ff                	test   edi,edi
  9ce915:	0f 85 45 02 00 00    	jne    9ceb60 <future_backtest::RunnerCore::run_multi+0x38b0>
  9ce91b:	48 01 f0             	add    rax,rsi
  9ce91e:	48 83 c0 10          	add    rax,0x10
  9ce922:	48 83 c6 10          	add    rsi,0x10
  9ce926:	eb 9f                	jmp    9ce8c7 <future_backtest::RunnerCore::run_multi+0x3617>
  9ce928:	4c 89 ef             	mov    rdi,r13
  9ce92b:	e8 c0 96 d3 ff       	call   707ff0 <<alloc::collections::btree::map::IntoIter<K,V,A> as core::iter::traits::iterator::Iterator>::next>
  9ce930:	a8 01                	test   al,0x1
  9ce932:	0f 84 9b 0f 00 00    	je     9cf8d3 <future_backtest::RunnerCore::run_multi+0x4623>
  9ce938:	89 d5                	mov    ebp,edx
  9ce93a:	89 94 24 00 05 00 00 	mov    DWORD PTR [rsp+0x500],edx
  9ce941:	48 83 bc 24 f8 0e 00 	cmp    QWORD PTR [rsp+0xef8],0x0
  9ce948:	00 00 
  9ce94a:	0f 84 10 02 00 00    	je     9ceb60 <future_backtest::RunnerCore::run_multi+0x38b0>
  9ce950:	48 8d bc 24 00 0f 00 	lea    rdi,[rsp+0xf00]
  9ce957:	00 
  9ce958:	4c 89 fe             	mov    rsi,r15
  9ce95b:	e8 90 4f e3 ff       	call   8038f0 <core::hash::BuildHasher::hash_one>
  9ce960:	48 89 c6             	mov    rsi,rax
  9ce963:	48 c1 ee 39          	shr    rsi,0x39
  9ce967:	48 8b 8c 24 e0 0e 00 	mov    rcx,QWORD PTR [rsp+0xee0]
  9ce96e:	00 
  9ce96f:	48 8b 94 24 e8 0e 00 	mov    rdx,QWORD PTR [rsp+0xee8]
  9ce976:	00 
  9ce977:	66 0f 6e c6          	movd   xmm0,esi
  9ce97b:	66 0f 60 c0          	punpcklbw xmm0,xmm0
  9ce97f:	f2 0f 70 c0 00       	pshuflw xmm0,xmm0,0x0
  9ce984:	66 0f 70 c0 00       	pshufd xmm0,xmm0,0x0
  9ce989:	31 f6                	xor    esi,esi
  9ce98b:	e9 37 ff ff ff       	jmp    9ce8c7 <future_backtest::RunnerCore::run_multi+0x3617>
  9ce990:	48 8b 44 24 18       	mov    rax,QWORD PTR [rsp+0x18]
  9ce995:	48 89 84 24 80 1b 00 	mov    QWORD PTR [rsp+0x1b80],rax
  9ce99c:	00 
  9ce99d:	48 8d 05 9c bd fd ff 	lea    rax,[rip+0xfffffffffffdbd9c]        # 9aa740 <<alloc::string::String as core::fmt::Display>::fmt>
  9ce9a4:	48 89 84 24 88 1b 00 	mov    QWORD PTR [rsp+0x1b88],rax
  9ce9ab:	00 
  9ce9ac:	48 8d 05 8d d4 f2 00 	lea    rax,[rip+0xf2d48d]        # 18fbe40 <anon.609a31ba814f1e4156e50677fc366a7f.492.llvm.5215769359700358943+0x848>
  9ce9b3:	48 89 84 24 d0 11 00 	mov    QWORD PTR [rsp+0x11d0],rax
  9ce9ba:	00 
  9ce9bb:	48 c7 84 24 d8 11 00 	mov    QWORD PTR [rsp+0x11d8],0x2
  9ce9c2:	00 02 00 00 00 
  9ce9c7:	48 c7 84 24 f0 11 00 	mov    QWORD PTR [rsp+0x11f0],0x0
  9ce9ce:	00 00 00 00 00 
  9ce9d3:	48 8d 84 24 80 1b 00 	lea    rax,[rsp+0x1b80]
  9ce9da:	00 
  9ce9db:	48 89 84 24 e0 11 00 	mov    QWORD PTR [rsp+0x11e0],rax
  9ce9e2:	00 
  9ce9e3:	48 c7 84 24 e8 11 00 	mov    QWORD PTR [rsp+0x11e8],0x1
  9ce9ea:	00 01 00 00 00 
  9ce9ef:	48 8d 9c 24 20 03 00 	lea    rbx,[rsp+0x320]
  9ce9f6:	00 
  9ce9f7:	48 8d b4 24 d0 11 00 	lea    rsi,[rsp+0x11d0]
  9ce9fe:	00 
  9ce9ff:	48 89 df             	mov    rdi,rbx
  9cea02:	ff 15 78 83 fd 00    	call   QWORD PTR [rip+0xfd8378]        # 19a6d80 <_DYNAMIC+0x580>
  9cea08:	48 89 df             	mov    rdi,rbx
  9cea0b:	e8 00 84 04 00       	call   a16e10 <anyhow::error::<impl anyhow::Error>::msg>
  9cea10:	49 89 c7             	mov    r15,rax
  9cea13:	48 8b b4 24 e8 0e 00 	mov    rsi,QWORD PTR [rsp+0xee8]
  9cea1a:	00 
  9cea1b:	48 85 f6             	test   rsi,rsi
  9cea1e:	74 2b                	je     9cea4b <future_backtest::RunnerCore::run_multi+0x379b>
  9cea20:	48 8d 04 b5 13 00 00 	lea    rax,[rsi*4+0x13]
  9cea27:	00 
  9cea28:	48 83 e0 f0          	and    rax,0xfffffffffffffff0
  9cea2c:	48 01 c6             	add    rsi,rax
  9cea2f:	48 83 c6 11          	add    rsi,0x11
  9cea33:	74 16                	je     9cea4b <future_backtest::RunnerCore::run_multi+0x379b>
  9cea35:	48 8b bc 24 e0 0e 00 	mov    rdi,QWORD PTR [rsp+0xee0]
  9cea3c:	00 
  9cea3d:	48 29 c7             	sub    rdi,rax
  9cea40:	ba 10 00 00 00       	mov    edx,0x10
  9cea45:	ff 15 d5 7f fd 00    	call   QWORD PTR [rip+0xfd7fd5]        # 19a6a20 <_DYNAMIC+0x220>
  9cea4b:	48 8b b4 24 68 18 00 	mov    rsi,QWORD PTR [rsp+0x1868]
  9cea52:	00 
  9cea53:	48 85 f6             	test   rsi,rsi
  9cea56:	74 2a                	je     9cea82 <future_backtest::RunnerCore::run_multi+0x37d2>
  9cea58:	48 89 f0             	mov    rax,rsi
  9cea5b:	48 c1 e0 05          	shl    rax,0x5
  9cea5f:	48 01 c6             	add    rsi,rax
  9cea62:	48 83 c6 31          	add    rsi,0x31
  9cea66:	74 1a                	je     9cea82 <future_backtest::RunnerCore::run_multi+0x37d2>
  9cea68:	48 8b bc 24 60 18 00 	mov    rdi,QWORD PTR [rsp+0x1860]
  9cea6f:	00 
  9cea70:	48 29 c7             	sub    rdi,rax
  9cea73:	48 83 c7 e0          	add    rdi,0xffffffffffffffe0
  9cea77:	ba 10 00 00 00       	mov    edx,0x10
  9cea7c:	ff 15 9e 7f fd 00    	call   QWORD PTR [rip+0xfd7f9e]        # 19a6a20 <_DYNAMIC+0x220>
  9cea82:	48 8d bc 24 10 06 00 	lea    rdi,[rsp+0x610]
  9cea89:	00 
  9cea8a:	e8 71 6d fd ff       	call   9a5800 <core::ptr::drop_in_place<future_backtest::MetaControl::config::MetaManifest>>
  9cea8f:	c7 84 24 c8 00 00 00 	mov    DWORD PTR [rsp+0xc8],0x0
  9cea96:	00 00 00 00 
  9cea9a:	48 8b bc 24 d8 00 00 	mov    rdi,QWORD PTR [rsp+0xd8]
  9ceaa1:	00 
  9ceaa2:	4c 8b b4 24 e0 00 00 	mov    r14,QWORD PTR [rsp+0xe0]
  9ceaa9:	00 
  9ceaaa:	49 ff c6             	inc    r14
  9ceaad:	0f 1f 00             	nop    DWORD PTR [rax]
  9ceab0:	49 83 fe 01          	cmp    r14,0x1
  9ceab4:	74 14                	je     9ceaca <future_backtest::RunnerCore::run_multi+0x381a>
  9ceab6:	48 8d 9f 08 08 00 00 	lea    rbx,[rdi+0x808]
  9ceabd:	49 ff ce             	dec    r14
  9ceac0:	e8 1b b9 f9 ff       	call   96a3e0 <_ZN4core3ptr68drop_in_place$LT$future_backtest..Config..config..StrategyConfig$GT$17h915a237d4f00a607E.llvm.1325298290625399205>
  9ceac5:	48 89 df             	mov    rdi,rbx
  9ceac8:	eb e6                	jmp    9ceab0 <future_backtest::RunnerCore::run_multi+0x3800>
  9ceaca:	48 8b 84 24 d0 00 00 	mov    rax,QWORD PTR [rsp+0xd0]
  9cead1:	00 
  9cead2:	48 85 c0             	test   rax,rax
  9cead5:	74 1e                	je     9ceaf5 <future_backtest::RunnerCore::run_multi+0x3845>
  9cead7:	48 8b bc 24 d8 00 00 	mov    rdi,QWORD PTR [rsp+0xd8]
  9ceade:	00 
  9ceadf:	48 89 c1             	mov    rcx,rax
  9ceae2:	48 c1 e1 0b          	shl    rcx,0xb
  9ceae6:	48 8d 34 c1          	lea    rsi,[rcx+rax*8]
  9ceaea:	ba 08 00 00 00       	mov    edx,0x8
  9ceaef:	ff 15 2b 7f fd 00    	call   QWORD PTR [rip+0xfd7f2b]        # 19a6a20 <_DYNAMIC+0x220>
  9ceaf5:	48 b8 00 00 00 00 00 	movabs rax,0x8000000000000000
  9ceafc:	00 00 80 
  9ceaff:	48 39 84 24 50 03 00 	cmp    QWORD PTR [rsp+0x350],rax
  9ceb06:	00 
  9ceb07:	74 17                	je     9ceb20 <future_backtest::RunnerCore::run_multi+0x3870>
  9ceb09:	80 bc 24 c8 00 00 00 	cmp    BYTE PTR [rsp+0xc8],0x0
  9ceb10:	00 
  9ceb11:	74 0d                	je     9ceb20 <future_backtest::RunnerCore::run_multi+0x3870>
  9ceb13:	48 8b bc 24 48 03 00 	mov    rdi,QWORD PTR [rsp+0x348]
  9ceb1a:	00 
  9ceb1b:	e8 e0 6c fd ff       	call   9a5800 <core::ptr::drop_in_place<future_backtest::MetaControl::config::MetaManifest>>
  9ceb20:	4c 89 f8             	mov    rax,r15
  9ceb23:	48 81 c4 f8 3f 00 00 	add    rsp,0x3ff8
  9ceb2a:	5b                   	pop    rbx
  9ceb2b:	41 5c                	pop    r12
  9ceb2d:	41 5d                	pop    r13
  9ceb2f:	41 5e                	pop    r14
  9ceb31:	41 5f                	pop    r15
  9ceb33:	5d                   	pop    rbp
  9ceb34:	c3                   	ret    
  9ceb35:	48 b8 00 00 00 00 00 	movabs rax,0x8000000000000000
  9ceb3c:	00 00 80 
  9ceb3f:	48 39 84 24 f0 19 00 	cmp    QWORD PTR [rsp+0x19f0],rax
  9ceb46:	00 
  9ceb47:	0f 85 be 00 00 00    	jne    9cec0b <future_backtest::RunnerCore::run_multi+0x395b>
  9ceb4d:	48 c7 84 24 e0 0e 00 	mov    QWORD PTR [rsp+0xee0],0x2
  9ceb54:	00 02 00 00 00 
  9ceb59:	b0 01                	mov    al,0x1
  9ceb5b:	e9 86 01 00 00       	jmp    9cece6 <future_backtest::RunnerCore::run_multi+0x3a36>
  9ceb60:	4c 89 bc 24 b0 10 00 	mov    QWORD PTR [rsp+0x10b0],r15
  9ceb67:	00 
  9ceb68:	48 8b 05 69 89 fd 00 	mov    rax,QWORD PTR [rip+0xfd8969]        # 19a74d8 <_DYNAMIC+0xcd8>
  9ceb6f:	48 89 84 24 b8 10 00 	mov    QWORD PTR [rsp+0x10b8],rax
  9ceb76:	00 
  9ceb77:	48 8d 05 ba d1 f2 00 	lea    rax,[rip+0xf2d1ba]        # 18fbd38 <anon.609a31ba814f1e4156e50677fc366a7f.492.llvm.5215769359700358943+0x740>
  9ceb7e:	48 89 84 24 80 1b 00 	mov    QWORD PTR [rsp+0x1b80],rax
  9ceb85:	00 
  9ceb86:	48 c7 84 24 88 1b 00 	mov    QWORD PTR [rsp+0x1b88],0x2
  9ceb8d:	00 02 00 00 00 
  9ceb92:	48 c7 84 24 a0 1b 00 	mov    QWORD PTR [rsp+0x1ba0],0x0
  9ceb99:	00 00 00 00 00 
  9ceb9e:	48 8d 84 24 b0 10 00 	lea    rax,[rsp+0x10b0]
  9ceba5:	00 
  9ceba6:	48 89 84 24 90 1b 00 	mov    QWORD PTR [rsp+0x1b90],rax
  9cebad:	00 
  9cebae:	48 c7 84 24 98 1b 00 	mov    QWORD PTR [rsp+0x1b98],0x1
  9cebb5:	00 01 00 00 00 
  9cebba:	48 8d bc 24 90 0e 00 	lea    rdi,[rsp+0xe90]
  9cebc1:	00 
  9cebc2:	48 8d b4 24 80 1b 00 	lea    rsi,[rsp+0x1b80]
  9cebc9:	00 
  9cebca:	ff 15 b0 81 fd 00    	call   QWORD PTR [rip+0xfd81b0]        # 19a6d80 <_DYNAMIC+0x580>
  9cebd0:	48 8d bc 24 90 0e 00 	lea    rdi,[rsp+0xe90]
  9cebd7:	00 
  9cebd8:	e8 33 82 04 00       	call   a16e10 <anyhow::error::<impl anyhow::Error>::msg>
  9cebdd:	49 89 c7             	mov    r15,rax
  9cebe0:	48 8d 9c 24 80 1b 00 	lea    rbx,[rsp+0x1b80]
  9cebe7:	00 
  9cebe8:	4c 8d b4 24 d0 11 00 	lea    r14,[rsp+0x11d0]
  9cebef:	00 
  9cebf0:	48 89 df             	mov    rdi,rbx
  9cebf3:	4c 89 f6             	mov    rsi,r14
  9cebf6:	e8 a5 c3 d4 ff       	call   71afa0 <_ZN5alloc11collections5btree3map25IntoIter$LT$K$C$V$C$A$GT$10dying_next17he5722eb1ea305e80E.llvm.1643563994444475245>
  9cebfb:	48 83 bc 24 80 1b 00 	cmp    QWORD PTR [rsp+0x1b80],0x0
  9cec02:	00 00 
  9cec04:	75 ea                	jne    9cebf0 <future_backtest::RunnerCore::run_multi+0x3940>
  9cec06:	e9 08 fe ff ff       	jmp    9cea13 <future_backtest::RunnerCore::run_multi+0x3763>
  9cec0b:	4c 8d b4 24 10 22 00 	lea    r14,[rsp+0x2210]
  9cec12:	00 
  9cec13:	48 8d b4 24 f0 19 00 	lea    rsi,[rsp+0x19f0]
  9cec1a:	00 
  9cec1b:	ba b8 00 00 00       	mov    edx,0xb8
  9cec20:	4c 89 f7             	mov    rdi,r14
  9cec23:	ff 15 1f 7f fd 00    	call   QWORD PTR [rip+0xfd7f1f]        # 19a6b48 <memcpy@GLIBC_2.14>
  9cec29:	48 8d 94 24 a8 1a 00 	lea    rdx,[rsp+0x1aa8]
  9cec30:	00 
  9cec31:	31 ed                	xor    ebp,ebp
  9cec33:	48 8b 4c 24 40       	mov    rcx,QWORD PTR [rsp+0x40]
  9cec38:	4c 8b 44 24 48       	mov    r8,QWORD PTR [rsp+0x48]
  9cec3d:	48 8d bc 24 10 06 00 	lea    rdi,[rsp+0x610]
  9cec44:	00 
  9cec45:	4c 89 f6             	mov    rsi,r14
  9cec48:	e8 63 9e ff ff       	call   9c8ab0 <future_backtest::RunnerCore::MetaRunState::new>
  9cec4d:	4c 8b b4 24 10 06 00 	mov    r14,QWORD PTR [rsp+0x610]
  9cec54:	00 
  9cec55:	4c 8b bc 24 18 06 00 	mov    r15,QWORD PTR [rsp+0x618]
  9cec5c:	00 
  9cec5d:	49 83 fe 02          	cmp    r14,0x2
  9cec61:	75 56                	jne    9cecb9 <future_backtest::RunnerCore::run_multi+0x3a09>
  9cec63:	31 ed                	xor    ebp,ebp
  9cec65:	e9 c8 fa ff ff       	jmp    9ce732 <future_backtest::RunnerCore::run_multi+0x3482>
  9cec6a:	48 8b 84 24 c0 1a 00 	mov    rax,QWORD PTR [rsp+0x1ac0]
  9cec71:	00 
  9cec72:	48 85 c0             	test   rax,rax
  9cec75:	0f 84 25 03 00 00    	je     9cefa0 <future_backtest::RunnerCore::run_multi+0x3cf0>
  9cec7b:	48 8b 8c 24 b8 1a 00 	mov    rcx,QWORD PTR [rsp+0x1ab8]
  9cec82:	00 
  9cec83:	48 01 c8             	add    rax,rcx
  9cec86:	48 ff c8             	dec    rax
  9cec89:	48 8b 8c 24 a8 1a 00 	mov    rcx,QWORD PTR [rsp+0x1aa8]
  9cec90:	00 
  9cec91:	48 8b 94 24 b0 1a 00 	mov    rdx,QWORD PTR [rsp+0x1ab0]
  9cec98:	00 
  9cec99:	31 f6                	xor    esi,esi
  9cec9b:	48 39 c8             	cmp    rax,rcx
  9cec9e:	48 0f 43 f1          	cmovae rsi,rcx
  9ceca2:	48 29 f0             	sub    rax,rsi
  9ceca5:	48 c1 e0 06          	shl    rax,0x6
  9ceca9:	f3 0f 7e 44 02 18    	movq   xmm0,QWORD PTR [rdx+rax*1+0x18]
  9cecaf:	b8 01 00 00 00       	mov    eax,0x1
  9cecb4:	e9 e9 02 00 00       	jmp    9cefa2 <future_backtest::RunnerCore::run_multi+0x3cf2>
  9cecb9:	48 8d b4 24 20 06 00 	lea    rsi,[rsp+0x620]
  9cecc0:	00 
  9cecc1:	48 8d bc 24 f0 0e 00 	lea    rdi,[rsp+0xef0]
  9cecc8:	00 
  9cecc9:	ba b8 01 00 00       	mov    edx,0x1b8
  9cecce:	ff 15 74 7e fd 00    	call   QWORD PTR [rip+0xfd7e74]        # 19a6b48 <memcpy@GLIBC_2.14>
  9cecd4:	4c 89 b4 24 e0 0e 00 	mov    QWORD PTR [rsp+0xee0],r14
  9cecdb:	00 
  9cecdc:	4c 89 bc 24 e8 0e 00 	mov    QWORD PTR [rsp+0xee8],r15
  9cece3:	00 
  9cece4:	31 c0                	xor    eax,eax
  9cece6:	48 89 9c 24 80 00 00 	mov    QWORD PTR [rsp+0x80],rbx
  9ceced:	00 
  9cecee:	89 44 24 20          	mov    DWORD PTR [rsp+0x20],eax
  9cecf2:	48 83 7c 24 48 00    	cmp    QWORD PTR [rsp+0x48],0x0
  9cecf8:	0f 84 69 51 00 00    	je     9d3e67 <future_backtest::RunnerCore::run_multi+0x8bb7>
  9cecfe:	48 8b 74 24 40       	mov    rsi,QWORD PTR [rsp+0x40]
  9ced03:	48 8d bc 24 80 1b 00 	lea    rdi,[rsp+0x1b80]
  9ced0a:	00 
  9ced0b:	e8 b0 8c 00 00       	call   9d79c0 <<future_backtest::Customer::customer_params::StrategyParams as core::clone::Clone>::clone>
  9ced10:	4c 8b 8c 24 a8 1b 00 	mov    r9,QWORD PTR [rsp+0x1ba8]
  9ced17:	00 
  9ced18:	48 8b b4 24 60 1c 00 	mov    rsi,QWORD PTR [rsp+0x1c60]
  9ced1f:	00 
  9ced20:	48 8b 94 24 68 1c 00 	mov    rdx,QWORD PTR [rsp+0x1c68]
  9ced27:	00 
  9ced28:	48 8b 8c 24 78 1c 00 	mov    rcx,QWORD PTR [rsp+0x1c78]
  9ced2f:	00 
  9ced30:	4c 8b 84 24 80 1c 00 	mov    r8,QWORD PTR [rsp+0x1c80]
  9ced37:	00 
  9ced38:	0f b6 84 24 07 22 00 	movzx  eax,BYTE PTR [rsp+0x2207]
  9ced3f:	00 
  9ced40:	48 8d 3d 11 3e 88 ff 	lea    rdi,[rip+0xffffffffff883e11]        # 252b58 <anon.baa4d3160c6db26b1acb0467a3a6e91d.628.llvm.14045134056871974489+0x80>
  9ced47:	48 89 7c 24 08       	mov    QWORD PTR [rsp+0x8],rdi
  9ced4c:	89 04 24             	mov    DWORD PTR [rsp],eax
  9ced4f:	48 c7 44 24 10 08 00 	mov    QWORD PTR [rsp+0x10],0x8
  9ced56:	00 00 
  9ced58:	48 8d bc 24 90 0e 00 	lea    rdi,[rsp+0xe90]
  9ced5f:	00 
  9ced60:	ff 15 da 87 fd 00    	call   QWORD PTR [rip+0xfd87da]        # 19a7540 <_DYNAMIC+0xd40>
  9ced66:	48 8b 9c 24 80 00 00 	mov    rbx,QWORD PTR [rsp+0x80]
  9ced6d:	00 
  9ced6e:	4c 8b 74 24 18       	mov    r14,QWORD PTR [rsp+0x18]
  9ced73:	49 83 7e 10 00       	cmp    QWORD PTR [r14+0x10],0x0
  9ced78:	0f 85 ff 50 00 00    	jne    9d3e7d <future_backtest::RunnerCore::run_multi+0x8bcd>
  9ced7e:	49 c7 46 10 ff ff ff 	mov    QWORD PTR [r14+0x10],0xffffffffffffffff
  9ced85:	ff 
  9ced86:	48 89 df             	mov    rdi,rbx
  9ced89:	e8 02 78 f2 ff       	call   8f6590 <_ZN4core3ptr67drop_in_place$LT$future_backtest..Logging..logging..BacktestLog$GT$17h7bb157681f2fc1e4E.llvm.3900561041070810133>
  9ced8e:	0f 10 84 24 d0 0e 00 	movups xmm0,XMMWORD PTR [rsp+0xed0]
  9ced95:	00 
  9ced96:	0f 11 43 40          	movups XMMWORD PTR [rbx+0x40],xmm0
  9ced9a:	66 0f 10 84 24 90 0e 	movupd xmm0,XMMWORD PTR [rsp+0xe90]
  9ceda1:	00 00 
  9ceda3:	f3 0f 6f 8c 24 a0 0e 	movdqu xmm1,XMMWORD PTR [rsp+0xea0]
  9cedaa:	00 00 
  9cedac:	f3 0f 6f 94 24 b0 0e 	movdqu xmm2,XMMWORD PTR [rsp+0xeb0]
  9cedb3:	00 00 
  9cedb5:	f3 0f 6f 9c 24 c0 0e 	movdqu xmm3,XMMWORD PTR [rsp+0xec0]
  9cedbc:	00 00 
  9cedbe:	f3 0f 7f 5b 30       	movdqu XMMWORD PTR [rbx+0x30],xmm3
  9cedc3:	f3 0f 7f 53 20       	movdqu XMMWORD PTR [rbx+0x20],xmm2
  9cedc8:	f3 0f 7f 4b 10       	movdqu XMMWORD PTR [rbx+0x10],xmm1
  9cedcd:	66 0f 11 03          	movupd XMMWORD PTR [rbx],xmm0
  9cedd1:	49 ff 46 10          	inc    QWORD PTR [r14+0x10]
  9cedd5:	48 8b 44 24 48       	mov    rax,QWORD PTR [rsp+0x48]
  9cedda:	48 85 c0             	test   rax,rax
  9ceddd:	48 8d 9c 24 d0 11 00 	lea    rbx,[rsp+0x11d0]
  9cede4:	00 
  9cede5:	0f 84 a7 00 00 00    	je     9cee92 <future_backtest::RunnerCore::run_multi+0x3be2>
  9cedeb:	4c 8b 74 24 40       	mov    r14,QWORD PTR [rsp+0x40]
  9cedf0:	49 81 c6 f0 13 00 00 	add    r14,0x13f0
  9cedf7:	4c 69 e0 28 15 00 00 	imul   r12,rax,0x1528
  9cedfe:	49 bf 00 00 00 00 00 	movabs r15,0x408f400000000000
  9cee05:	40 8f 40 
  9cee08:	4c 89 f7             	mov    rdi,r14
  9cee0b:	e8 d0 30 fd ff       	call   9a1ee0 <core::ptr::drop_in_place<core::option::Option<future_backtest::BacktestResult::backtest_result::BacktestResult>>>
  9cee10:	49 c7 06 00 00 00 00 	mov    QWORD PTR [r14],0x0
  9cee17:	49 c7 46 08 08 00 00 	mov    QWORD PTR [r14+0x8],0x8
  9cee1e:	00 
  9cee1f:	66 0f 57 c0          	xorpd  xmm0,xmm0
  9cee23:	66 41 0f 11 46 10    	movupd XMMWORD PTR [r14+0x10],xmm0
  9cee29:	49 c7 46 20 08 00 00 	mov    QWORD PTR [r14+0x20],0x8
  9cee30:	00 
  9cee31:	66 41 0f 11 46 28    	movupd XMMWORD PTR [r14+0x28],xmm0
  9cee37:	49 c7 46 38 08 00 00 	mov    QWORD PTR [r14+0x38],0x8
  9cee3e:	00 
  9cee3f:	66 41 0f 11 46 40    	movupd XMMWORD PTR [r14+0x40],xmm0
  9cee45:	49 c7 46 50 08 00 00 	mov    QWORD PTR [r14+0x50],0x8
  9cee4c:	00 
  9cee4d:	49 c7 46 58 00 00 00 	mov    QWORD PTR [r14+0x58],0x0
  9cee54:	00 
  9cee55:	48 b8 00 00 00 00 00 	movabs rax,0x8000000000000000
  9cee5c:	00 00 80 
  9cee5f:	49 89 46 60          	mov    QWORD PTR [r14+0x60],rax
  9cee63:	49 89 46 78          	mov    QWORD PTR [r14+0x78],rax
  9cee67:	49 89 86 90 00 00 00 	mov    QWORD PTR [r14+0x90],rax
  9cee6e:	4d 89 be a8 00 00 00 	mov    QWORD PTR [r14+0xa8],r15
  9cee75:	66 41 0f 11 86 b0 00 	movupd XMMWORD PTR [r14+0xb0],xmm0
  9cee7c:	00 00 
  9cee7e:	49 81 c6 28 15 00 00 	add    r14,0x1528
  9cee85:	49 81 c4 d8 ea ff ff 	add    r12,0xffffffffffffead8
  9cee8c:	0f 85 76 ff ff ff    	jne    9cee08 <future_backtest::RunnerCore::run_multi+0x3b58>
  9cee92:	4c 8b ac 24 a8 00 00 	mov    r13,QWORD PTR [rsp+0xa8]
  9cee99:	00 
  9cee9a:	4e 8d 34 ed 00 00 00 	lea    r14,[r13*8+0x0]
  9ceea1:	00 
  9ceea2:	4c 89 e8             	mov    rax,r13
  9ceea5:	48 c1 e8 3d          	shr    rax,0x3d
  9ceea9:	0f 95 c0             	setne  al
  9ceeac:	4c 3b 74 24 50       	cmp    r14,QWORD PTR [rsp+0x50]
  9ceeb1:	0f 97 c1             	seta   cl
  9ceeb4:	08 c1                	or     cl,al
  9ceeb6:	74 1b                	je     9ceed3 <future_backtest::RunnerCore::run_multi+0x3c23>
  9ceeb8:	45 31 ff             	xor    r15d,r15d
  9ceebb:	48 8d 15 3e d2 f2 00 	lea    rdx,[rip+0xf2d23e]        # 18fc100 <anon.609a31ba814f1e4156e50677fc366a7f.492.llvm.5215769359700358943+0xb08>
  9ceec2:	4c 89 ff             	mov    rdi,r15
  9ceec5:	4c 89 f6             	mov    rsi,r14
  9ceec8:	ff 15 ca 7c fd 00    	call   QWORD PTR [rip+0xfd7cca]        # 19a6b98 <_DYNAMIC+0x398>
  9ceece:	e9 29 53 00 00       	jmp    9d41fc <future_backtest::RunnerCore::run_multi+0x8f4c>
  9ceed3:	4d 85 f6             	test   r14,r14
  9ceed6:	74 31                	je     9cef09 <future_backtest::RunnerCore::run_multi+0x3c59>
  9ceed8:	ff 15 62 7b fd 00    	call   QWORD PTR [rip+0xfd7b62]        # 19a6a40 <_DYNAMIC+0x240>
  9ceede:	41 bf 08 00 00 00    	mov    r15d,0x8
  9ceee4:	be 08 00 00 00       	mov    esi,0x8
  9ceee9:	4c 89 f7             	mov    rdi,r14
  9ceeec:	ff 15 26 7b fd 00    	call   QWORD PTR [rip+0xfd7b26]        # 19a6a18 <_DYNAMIC+0x218>
  9ceef2:	48 85 c0             	test   rax,rax
  9ceef5:	74 c4                	je     9ceebb <future_backtest::RunnerCore::run_multi+0x3c0b>
  9ceef7:	4c 8b a4 24 a8 00 00 	mov    r12,QWORD PTR [rsp+0xa8]
  9ceefe:	00 
  9ceeff:	4e 8d 34 e5 00 00 00 	lea    r14,[r12*8+0x0]
  9cef06:	00 
  9cef07:	eb 0e                	jmp    9cef17 <future_backtest::RunnerCore::run_multi+0x3c67>
  9cef09:	b8 08 00 00 00       	mov    eax,0x8
  9cef0e:	45 31 f6             	xor    r14d,r14d
  9cef11:	4d 89 ec             	mov    r12,r13
  9cef14:	45 31 ed             	xor    r13d,r13d
  9cef17:	48 b9 ff ff ff ff ff 	movabs rcx,0x1fffffffffffffff
  9cef1e:	ff ff 1f 
  9cef21:	4c 89 ac 24 e8 02 00 	mov    QWORD PTR [rsp+0x2e8],r13
  9cef28:	00 
  9cef29:	48 89 84 24 f0 02 00 	mov    QWORD PTR [rsp+0x2f0],rax
  9cef30:	00 
  9cef31:	48 c7 84 24 f8 02 00 	mov    QWORD PTR [rsp+0x2f8],0x0
  9cef38:	00 00 00 00 00 
  9cef3d:	49 39 cc             	cmp    r12,rcx
  9cef40:	0f 97 c0             	seta   al
  9cef43:	4c 3b 74 24 50       	cmp    r14,QWORD PTR [rsp+0x50]
  9cef48:	0f 97 c1             	seta   cl
  9cef4b:	08 c1                	or     cl,al
  9cef4d:	74 1b                	je     9cef6a <future_backtest::RunnerCore::run_multi+0x3cba>
  9cef4f:	45 31 ff             	xor    r15d,r15d
  9cef52:	48 8d 15 bf d1 f2 00 	lea    rdx,[rip+0xf2d1bf]        # 18fc118 <anon.609a31ba814f1e4156e50677fc366a7f.492.llvm.5215769359700358943+0xb20>
  9cef59:	4c 89 ff             	mov    rdi,r15
  9cef5c:	4c 89 f6             	mov    rsi,r14
  9cef5f:	ff 15 33 7c fd 00    	call   QWORD PTR [rip+0xfd7c33]        # 19a6b98 <_DYNAMIC+0x398>
  9cef65:	e9 92 52 00 00       	jmp    9d41fc <future_backtest::RunnerCore::run_multi+0x8f4c>
  9cef6a:	4d 85 f6             	test   r14,r14
  9cef6d:	0f 84 ef 00 00 00    	je     9cf062 <future_backtest::RunnerCore::run_multi+0x3db2>
  9cef73:	ff 15 c7 7a fd 00    	call   QWORD PTR [rip+0xfd7ac7]        # 19a6a40 <_DYNAMIC+0x240>
  9cef79:	41 bf 08 00 00 00    	mov    r15d,0x8
  9cef7f:	be 08 00 00 00       	mov    esi,0x8
  9cef84:	4c 89 f7             	mov    rdi,r14
  9cef87:	ff 15 8b 7a fd 00    	call   QWORD PTR [rip+0xfd7a8b]        # 19a6a18 <_DYNAMIC+0x218>
  9cef8d:	48 85 c0             	test   rax,rax
  9cef90:	4c 8b ac 24 a0 00 00 	mov    r13,QWORD PTR [rsp+0xa0]
  9cef97:	00 
  9cef98:	0f 85 d4 00 00 00    	jne    9cf072 <future_backtest::RunnerCore::run_multi+0x3dc2>
  9cef9e:	eb b2                	jmp    9cef52 <future_backtest::RunnerCore::run_multi+0x3ca2>
  9cefa0:	31 c0                	xor    eax,eax
  9cefa2:	48 89 84 24 80 1b 00 	mov    QWORD PTR [rsp+0x1b80],rax
  9cefa9:	00 
  9cefaa:	66 0f d6 84 24 88 1b 	movq   QWORD PTR [rsp+0x1b88],xmm0
  9cefb1:	00 00 
  9cefb3:	48 8d 84 24 80 1b 00 	lea    rax,[rsp+0x1b80]
  9cefba:	00 
  9cefbb:	48 89 84 24 d0 11 00 	mov    QWORD PTR [rsp+0x11d0],rax
  9cefc2:	00 
  9cefc3:	48 8d 05 f6 bb fd ff 	lea    rax,[rip+0xfffffffffffdbbf6]        # 9aabc0 <<core::option::Option<T> as core::fmt::Debug>::fmt>
  9cefca:	48 89 84 24 d8 11 00 	mov    QWORD PTR [rsp+0x11d8],rax
  9cefd1:	00 
  9cefd2:	48 8d 84 24 e0 0e 00 	lea    rax,[rsp+0xee0]
  9cefd9:	00 
  9cefda:	48 89 84 24 e0 11 00 	mov    QWORD PTR [rsp+0x11e0],rax
  9cefe1:	00 
  9cefe2:	48 8b 05 7f 85 fd 00 	mov    rax,QWORD PTR [rip+0xfd857f]        # 19a7568 <_DYNAMIC+0xd68>
  9cefe9:	48 89 84 24 e8 11 00 	mov    QWORD PTR [rsp+0x11e8],rax
  9ceff0:	00 
  9ceff1:	48 8d 05 88 d0 f2 00 	lea    rax,[rip+0xf2d088]        # 18fc080 <anon.609a31ba814f1e4156e50677fc366a7f.492.llvm.5215769359700358943+0xa88>
  9ceff8:	48 89 84 24 10 06 00 	mov    QWORD PTR [rsp+0x610],rax
  9cefff:	00 
  9cf000:	48 c7 84 24 18 06 00 	mov    QWORD PTR [rsp+0x618],0x3
  9cf007:	00 03 00 00 00 
  9cf00c:	48 c7 84 24 30 06 00 	mov    QWORD PTR [rsp+0x630],0x0
  9cf013:	00 00 00 00 00 
  9cf018:	48 8d 84 24 d0 11 00 	lea    rax,[rsp+0x11d0]
  9cf01f:	00 
  9cf020:	48 89 84 24 20 06 00 	mov    QWORD PTR [rsp+0x620],rax
  9cf027:	00 
  9cf028:	48 c7 84 24 28 06 00 	mov    QWORD PTR [rsp+0x628],0x2
  9cf02f:	00 02 00 00 00 
  9cf034:	48 8d bc 24 50 1b 00 	lea    rdi,[rsp+0x1b50]
  9cf03b:	00 
  9cf03c:	48 8d b4 24 10 06 00 	lea    rsi,[rsp+0x610]
  9cf043:	00 
  9cf044:	ff 15 36 7d fd 00    	call   QWORD PTR [rip+0xfd7d36]        # 19a6d80 <_DYNAMIC+0x580>
  9cf04a:	48 8d bc 24 50 1b 00 	lea    rdi,[rsp+0x1b50]
  9cf051:	00 
  9cf052:	e8 b9 7d 04 00       	call   a16e10 <anyhow::error::<impl anyhow::Error>::msg>
  9cf057:	49 89 c7             	mov    r15,rax
  9cf05a:	40 b5 01             	mov    bpl,0x1
  9cf05d:	e9 e0 f6 ff ff       	jmp    9ce742 <future_backtest::RunnerCore::run_multi+0x3492>
  9cf062:	b8 08 00 00 00       	mov    eax,0x8
  9cf067:	45 31 e4             	xor    r12d,r12d
  9cf06a:	4c 8b ac 24 a0 00 00 	mov    r13,QWORD PTR [rsp+0xa0]
  9cf071:	00 
  9cf072:	4c 89 a4 24 e8 00 00 	mov    QWORD PTR [rsp+0xe8],r12
  9cf079:	00 
  9cf07a:	48 89 84 24 f0 00 00 	mov    QWORD PTR [rsp+0xf0],rax
  9cf081:	00 
  9cf082:	48 c7 84 24 f8 00 00 	mov    QWORD PTR [rsp+0xf8],0x0
  9cf089:	00 00 00 00 00 
  9cf08e:	4d 85 ed             	test   r13,r13
  9cf091:	0f 84 13 06 00 00    	je     9cf6aa <future_backtest::RunnerCore::run_multi+0x43fa>
  9cf097:	49 c1 e5 04          	shl    r13,0x4
  9cf09b:	48 b8 00 00 00 00 00 	movabs rax,0x8000000000000000
  9cf0a2:	00 00 80 
  9cf0a5:	48 83 c0 11          	add    rax,0x11
  9cf0a9:	48 89 44 24 50       	mov    QWORD PTR [rsp+0x50],rax
  9cf0ae:	4c 8d a4 24 b0 10 00 	lea    r12,[rsp+0x10b0]
  9cf0b5:	00 
  9cf0b6:	31 ed                	xor    ebp,ebp
  9cf0b8:	eb 3d                	jmp    9cf0f7 <future_backtest::RunnerCore::run_multi+0x3e47>
  9cf0ba:	48 83 44 24 60 10    	add    QWORD PTR [rsp+0x60],0x10
  9cf0c0:	48 8b 84 24 f0 00 00 	mov    rax,QWORD PTR [rsp+0xf0]
  9cf0c7:	00 
  9cf0c8:	4e 89 3c e0          	mov    QWORD PTR [rax+r12*8],r15
  9cf0cc:	49 ff c4             	inc    r12
  9cf0cf:	4c 89 a4 24 f8 00 00 	mov    QWORD PTR [rsp+0xf8],r12
  9cf0d6:	00 
  9cf0d7:	48 ff c5             	inc    rbp
  9cf0da:	49 89 dd             	mov    r13,rbx
  9cf0dd:	49 83 c5 f0          	add    r13,0xfffffffffffffff0
  9cf0e1:	48 8d 9c 24 d0 11 00 	lea    rbx,[rsp+0x11d0]
  9cf0e8:	00 
  9cf0e9:	4c 8d a4 24 b0 10 00 	lea    r12,[rsp+0x10b0]
  9cf0f0:	00 
  9cf0f1:	0f 84 b3 05 00 00    	je     9cf6aa <future_backtest::RunnerCore::run_multi+0x43fa>
  9cf0f7:	48 89 ac 24 40 01 00 	mov    QWORD PTR [rsp+0x140],rbp
  9cf0fe:	00 
  9cf0ff:	48 8b 44 24 60       	mov    rax,QWORD PTR [rsp+0x60]
  9cf104:	48 89 84 24 00 05 00 	mov    QWORD PTR [rsp+0x500],rax
  9cf10b:	00 
  9cf10c:	48 8d 84 24 40 01 00 	lea    rax,[rsp+0x140]
  9cf113:	00 
  9cf114:	48 89 84 24 d0 11 00 	mov    QWORD PTR [rsp+0x11d0],rax
  9cf11b:	00 
  9cf11c:	48 8b 05 cd 7c fd 00 	mov    rax,QWORD PTR [rip+0xfd7ccd]        # 19a6df0 <_DYNAMIC+0x5f0>
  9cf123:	48 89 84 24 d8 11 00 	mov    QWORD PTR [rsp+0x11d8],rax
  9cf12a:	00 
  9cf12b:	48 8d 84 24 00 05 00 	lea    rax,[rsp+0x500]
  9cf132:	00 
  9cf133:	48 89 84 24 e0 11 00 	mov    QWORD PTR [rsp+0x11e0],rax
  9cf13a:	00 
  9cf13b:	48 8d 05 3e 62 f2 ff 	lea    rax,[rip+0xfffffffffff2623e]        # 8f5380 <<&T as core::fmt::Display>::fmt>
  9cf142:	48 89 84 24 e8 11 00 	mov    QWORD PTR [rsp+0x11e8],rax
  9cf149:	00 
  9cf14a:	48 8d 05 2f d9 f2 00 	lea    rax,[rip+0xf2d92f]        # 18fca80 <anon.609a31ba814f1e4156e50677fc366a7f.492.llvm.5215769359700358943+0x1488>
  9cf151:	48 89 84 24 10 06 00 	mov    QWORD PTR [rsp+0x610],rax
  9cf158:	00 
  9cf159:	48 c7 84 24 18 06 00 	mov    QWORD PTR [rsp+0x618],0x3
  9cf160:	00 03 00 00 00 
  9cf165:	48 c7 84 24 30 06 00 	mov    QWORD PTR [rsp+0x630],0x0
  9cf16c:	00 00 00 00 00 
  9cf171:	48 89 9c 24 20 06 00 	mov    QWORD PTR [rsp+0x620],rbx
  9cf178:	00 
  9cf179:	48 c7 84 24 28 06 00 	mov    QWORD PTR [rsp+0x628],0x2
  9cf180:	00 02 00 00 00 
  9cf185:	4c 8d bc 24 10 06 00 	lea    r15,[rsp+0x610]
  9cf18c:	00 
  9cf18d:	4c 89 ff             	mov    rdi,r15
  9cf190:	ff 15 c2 7a fd 00    	call   QWORD PTR [rip+0xfd7ac2]        # 19a6c58 <_DYNAMIC+0x458>
  9cf196:	48 8b 84 24 00 05 00 	mov    rax,QWORD PTR [rsp+0x500]
  9cf19d:	00 
  9cf19e:	48 8b 30             	mov    rsi,QWORD PTR [rax]
  9cf1a1:	48 8b 50 08          	mov    rdx,QWORD PTR [rax+0x8]
  9cf1a5:	48 89 df             	mov    rdi,rbx
  9cf1a8:	b9 01 00 00 00       	mov    ecx,0x1
  9cf1ad:	e8 2e 6e 03 00       	call   a05fe0 <libloading::os::unix::Library::open>
  9cf1b2:	48 8b 8c 24 d0 11 00 	mov    rcx,QWORD PTR [rsp+0x11d0]
  9cf1b9:	00 
  9cf1ba:	48 8b 84 24 d8 11 00 	mov    rax,QWORD PTR [rsp+0x11d8]
  9cf1c1:	00 
  9cf1c2:	48 3b 4c 24 50       	cmp    rcx,QWORD PTR [rsp+0x50]
  9cf1c7:	0f 85 c7 31 00 00    	jne    9d2394 <future_backtest::RunnerCore::run_multi+0x70e4>
  9cf1cd:	48 89 84 24 b0 10 00 	mov    QWORD PTR [rsp+0x10b0],rax
  9cf1d4:	00 
  9cf1d5:	c7 84 24 70 03 00 00 	mov    DWORD PTR [rsp+0x370],0x4
  9cf1dc:	04 00 00 00 
  9cf1e0:	b9 1c 00 00 00       	mov    ecx,0x1c
  9cf1e5:	4c 89 ff             	mov    rdi,r15
  9cf1e8:	4c 89 e6             	mov    rsi,r12
  9cf1eb:	48 8d 15 c4 e2 88 ff 	lea    rdx,[rip+0xffffffffff88e2c4]        # 25d4b6 <anon.3a6d2b86dc1bb50257a917c3dcf9a912.147.llvm.12364612859142937606+0x105>
  9cf1f2:	e8 f9 6e 03 00       	call   a060f0 <libloading::os::unix::Library::get_impl>
  9cf1f7:	48 8b 44 24 50       	mov    rax,QWORD PTR [rsp+0x50]
  9cf1fc:	48 39 84 24 10 06 00 	cmp    QWORD PTR [rsp+0x610],rax
  9cf203:	00 
  9cf204:	75 0a                	jne    9cf210 <future_backtest::RunnerCore::run_multi+0x3f60>
  9cf206:	48 8b 84 24 18 06 00 	mov    rax,QWORD PTR [rsp+0x618]
  9cf20d:	00 
  9cf20e:	eb 3a                	jmp    9cf24a <future_backtest::RunnerCore::run_multi+0x3f9a>
  9cf210:	66 0f 10 84 24 10 06 	movupd xmm0,XMMWORD PTR [rsp+0x610]
  9cf217:	00 00 
  9cf219:	f3 0f 6f 8c 24 20 06 	movdqu xmm1,XMMWORD PTR [rsp+0x620]
  9cf220:	00 00 
  9cf222:	66 0f 29 84 24 d0 11 	movapd XMMWORD PTR [rsp+0x11d0],xmm0
  9cf229:	00 00 
  9cf22b:	66 0f 7f 8c 24 e0 11 	movdqa XMMWORD PTR [rsp+0x11e0],xmm1
  9cf232:	00 00 
  9cf234:	48 39 84 24 d0 11 00 	cmp    QWORD PTR [rsp+0x11d0],rax
  9cf23b:	00 
  9cf23c:	0f 85 89 4a 00 00    	jne    9d3ccb <future_backtest::RunnerCore::run_multi+0x8a1b>
  9cf242:	48 8b 84 24 d8 11 00 	mov    rax,QWORD PTR [rsp+0x11d8]
  9cf249:	00 
  9cf24a:	ff d0                	call   rax
  9cf24c:	89 84 24 e8 04 00 00 	mov    DWORD PTR [rsp+0x4e8],eax
  9cf253:	66 0f 57 c0          	xorpd  xmm0,xmm0
  9cf257:	66 0f 29 84 24 d0 01 	movapd XMMWORD PTR [rsp+0x1d0],xmm0
  9cf25e:	00 00 
  9cf260:	66 0f 29 84 24 c0 01 	movapd XMMWORD PTR [rsp+0x1c0],xmm0
  9cf267:	00 00 
  9cf269:	b9 1c 00 00 00       	mov    ecx,0x1c
  9cf26e:	4c 89 ff             	mov    rdi,r15
  9cf271:	4c 89 e6             	mov    rsi,r12
  9cf274:	48 8d 15 52 67 89 ff 	lea    rdx,[rip+0xffffffffff896752]        # 2659cd <anon.6a344bec5b47d5ff54613f8a5571a5ae.118.llvm.4820274406621013443+0x63>
  9cf27b:	e8 70 6e 03 00       	call   a060f0 <libloading::os::unix::Library::get_impl>
  9cf280:	48 8b 4c 24 50       	mov    rcx,QWORD PTR [rsp+0x50]
  9cf285:	48 39 8c 24 10 06 00 	cmp    QWORD PTR [rsp+0x610],rcx
  9cf28c:	00 
  9cf28d:	75 1a                	jne    9cf2a9 <future_backtest::RunnerCore::run_multi+0x3ff9>
  9cf28f:	48 8b 84 24 18 06 00 	mov    rax,QWORD PTR [rsp+0x618]
  9cf296:	00 
  9cf297:	48 89 84 24 d8 11 00 	mov    QWORD PTR [rsp+0x11d8],rax
  9cf29e:	00 
  9cf29f:	48 89 8c 24 d0 11 00 	mov    QWORD PTR [rsp+0x11d0],rcx
  9cf2a6:	00 
  9cf2a7:	eb 3a                	jmp    9cf2e3 <future_backtest::RunnerCore::run_multi+0x4033>
  9cf2a9:	66 0f 10 84 24 10 06 	movupd xmm0,XMMWORD PTR [rsp+0x610]
  9cf2b0:	00 00 
  9cf2b2:	f3 0f 6f 8c 24 20 06 	movdqu xmm1,XMMWORD PTR [rsp+0x620]
  9cf2b9:	00 00 
  9cf2bb:	66 0f 29 84 24 d0 11 	movapd XMMWORD PTR [rsp+0x11d0],xmm0
  9cf2c2:	00 00 
  9cf2c4:	66 0f 7f 8c 24 e0 11 	movdqa XMMWORD PTR [rsp+0x11e0],xmm1
  9cf2cb:	00 00 
  9cf2cd:	48 39 8c 24 d0 11 00 	cmp    QWORD PTR [rsp+0x11d0],rcx
  9cf2d4:	00 
  9cf2d5:	0f 85 c6 00 00 00    	jne    9cf3a1 <future_backtest::RunnerCore::run_multi+0x40f1>
  9cf2db:	48 8b 84 24 d8 11 00 	mov    rax,QWORD PTR [rsp+0x11d8]
  9cf2e2:	00 
  9cf2e3:	be 20 00 00 00       	mov    esi,0x20
  9cf2e8:	4c 8d b4 24 c0 01 00 	lea    r14,[rsp+0x1c0]
  9cf2ef:	00 
  9cf2f0:	4c 89 f7             	mov    rdi,r14
  9cf2f3:	ff d0                	call   rax
  9cf2f5:	48 83 f8 21          	cmp    rax,0x21
  9cf2f9:	0f 83 44 4a 00 00    	jae    9d3d43 <future_backtest::RunnerCore::run_multi+0x8a93>
  9cf2ff:	4c 89 ff             	mov    rdi,r15
  9cf302:	4c 89 f6             	mov    rsi,r14
  9cf305:	48 89 c2             	mov    rdx,rax
  9cf308:	ff 15 92 89 fd 00    	call   QWORD PTR [rip+0xfd8992]        # 19a7ca0 <_DYNAMIC+0x14a0>
  9cf30e:	48 b8 00 00 00 00 00 	movabs rax,0x8000000000000000
  9cf315:	00 00 80 
  9cf318:	48 39 84 24 10 06 00 	cmp    QWORD PTR [rsp+0x610],rax
  9cf31f:	00 
  9cf320:	75 58                	jne    9cf37a <future_backtest::RunnerCore::run_multi+0x40ca>
  9cf322:	4c 89 eb             	mov    rbx,r13
  9cf325:	4c 8b bc 24 20 06 00 	mov    r15,QWORD PTR [rsp+0x620]
  9cf32c:	00 
  9cf32d:	41 b5 01             	mov    r13b,0x1
  9cf330:	4d 85 ff             	test   r15,r15
  9cf333:	0f 88 7a 05 00 00    	js     9cf8b3 <future_backtest::RunnerCore::run_multi+0x4603>
  9cf339:	48 8b b4 24 18 06 00 	mov    rsi,QWORD PTR [rsp+0x618]
  9cf340:	00 
  9cf341:	0f 84 cc 00 00 00    	je     9cf413 <future_backtest::RunnerCore::run_multi+0x4163>
  9cf347:	49 89 f6             	mov    r14,rsi
  9cf34a:	ff 15 f0 76 fd 00    	call   QWORD PTR [rip+0xfd76f0]        # 19a6a40 <_DYNAMIC+0x240>
  9cf350:	41 bc 01 00 00 00    	mov    r12d,0x1
  9cf356:	be 01 00 00 00       	mov    esi,0x1
  9cf35b:	4c 89 ff             	mov    rdi,r15
  9cf35e:	ff 15 b4 76 fd 00    	call   QWORD PTR [rip+0xfd76b4]        # 19a6a18 <_DYNAMIC+0x218>
  9cf364:	48 89 44 24 70       	mov    QWORD PTR [rsp+0x70],rax
  9cf369:	48 85 c0             	test   rax,rax
  9cf36c:	0f 84 49 05 00 00    	je     9cf8bb <future_backtest::RunnerCore::run_multi+0x460b>
  9cf372:	4c 89 f6             	mov    rsi,r14
  9cf375:	e9 a3 00 00 00       	jmp    9cf41d <future_backtest::RunnerCore::run_multi+0x416d>
  9cf37a:	48 8b 84 24 20 06 00 	mov    rax,QWORD PTR [rsp+0x620]
  9cf381:	00 
  9cf382:	48 89 84 24 b0 03 00 	mov    QWORD PTR [rsp+0x3b0],rax
  9cf389:	00 
  9cf38a:	66 0f 10 84 24 10 06 	movupd xmm0,XMMWORD PTR [rsp+0x610]
  9cf391:	00 00 
  9cf393:	66 0f 29 84 24 a0 03 	movapd XMMWORD PTR [rsp+0x3a0],xmm0
  9cf39a:	00 00 
  9cf39c:	e9 c0 00 00 00       	jmp    9cf461 <future_backtest::RunnerCore::run_multi+0x41b1>
  9cf3a1:	ff 15 99 76 fd 00    	call   QWORD PTR [rip+0xfd7699]        # 19a6a40 <_DYNAMIC+0x240>
  9cf3a7:	41 bf 07 00 00 00    	mov    r15d,0x7
  9cf3ad:	41 bc 01 00 00 00    	mov    r12d,0x1
  9cf3b3:	bf 07 00 00 00       	mov    edi,0x7
  9cf3b8:	be 01 00 00 00       	mov    esi,0x1
  9cf3bd:	ff 15 55 76 fd 00    	call   QWORD PTR [rip+0xfd7655]        # 19a6a18 <_DYNAMIC+0x218>
  9cf3c3:	48 85 c0             	test   rax,rax
  9cf3c6:	0f 84 7b 4b 00 00    	je     9d3f47 <future_backtest::RunnerCore::run_multi+0x8c97>
  9cf3cc:	c7 40 03 6e 6f 77 6e 	mov    DWORD PTR [rax+0x3],0x6e776f6e
  9cf3d3:	c7 00 75 6e 6b 6e    	mov    DWORD PTR [rax],0x6e6b6e75
  9cf3d9:	48 c7 84 24 a0 03 00 	mov    QWORD PTR [rsp+0x3a0],0x7
  9cf3e0:	00 07 00 00 00 
  9cf3e5:	48 89 84 24 a8 03 00 	mov    QWORD PTR [rsp+0x3a8],rax
  9cf3ec:	00 
  9cf3ed:	48 c7 84 24 b0 03 00 	mov    QWORD PTR [rsp+0x3b0],0x7
  9cf3f4:	00 07 00 00 00 
  9cf3f9:	48 89 df             	mov    rdi,rbx
  9cf3fc:	e8 df 45 fd ff       	call   9a39e0 <core::ptr::drop_in_place<libloading::error::Error>>
  9cf401:	4c 8d bc 24 10 06 00 	lea    r15,[rsp+0x610]
  9cf408:	00 
  9cf409:	4c 8d a4 24 b0 10 00 	lea    r12,[rsp+0x10b0]
  9cf410:	00 
  9cf411:	eb 4e                	jmp    9cf461 <future_backtest::RunnerCore::run_multi+0x41b1>
  9cf413:	b8 01 00 00 00       	mov    eax,0x1
  9cf418:	48 89 44 24 70       	mov    QWORD PTR [rsp+0x70],rax
  9cf41d:	4c 8b 74 24 70       	mov    r14,QWORD PTR [rsp+0x70]
  9cf422:	4c 89 f7             	mov    rdi,r14
  9cf425:	4c 89 fa             	mov    rdx,r15
  9cf428:	ff 15 1a 77 fd 00    	call   QWORD PTR [rip+0xfd771a]        # 19a6b48 <memcpy@GLIBC_2.14>
  9cf42e:	4c 89 bc 24 a0 03 00 	mov    QWORD PTR [rsp+0x3a0],r15
  9cf435:	00 
  9cf436:	4c 89 b4 24 a8 03 00 	mov    QWORD PTR [rsp+0x3a8],r14
  9cf43d:	00 
  9cf43e:	4c 89 bc 24 b0 03 00 	mov    QWORD PTR [rsp+0x3b0],r15
  9cf445:	00 
  9cf446:	49 89 dd             	mov    r13,rbx
  9cf449:	48 8d 9c 24 d0 11 00 	lea    rbx,[rsp+0x11d0]
  9cf450:	00 
  9cf451:	4c 8d bc 24 10 06 00 	lea    r15,[rsp+0x610]
  9cf458:	00 
  9cf459:	4c 8d a4 24 b0 10 00 	lea    r12,[rsp+0x10b0]
  9cf460:	00 
  9cf461:	48 8d 84 24 70 03 00 	lea    rax,[rsp+0x370]
  9cf468:	00 
  9cf469:	48 89 84 24 10 06 00 	mov    QWORD PTR [rsp+0x610],rax
  9cf470:	00 
  9cf471:	48 8b 05 00 7f fd 00 	mov    rax,QWORD PTR [rip+0xfd7f00]        # 19a7378 <_DYNAMIC+0xb78>
  9cf478:	48 89 84 24 18 06 00 	mov    QWORD PTR [rsp+0x618],rax
  9cf47f:	00 
  9cf480:	48 8d 8c 24 a0 03 00 	lea    rcx,[rsp+0x3a0]
  9cf487:	00 
  9cf488:	48 89 8c 24 20 06 00 	mov    QWORD PTR [rsp+0x620],rcx
  9cf48f:	00 
  9cf490:	48 8d 0d a9 b2 fd ff 	lea    rcx,[rip+0xfffffffffffdb2a9]        # 9aa740 <<alloc::string::String as core::fmt::Display>::fmt>
  9cf497:	48 89 8c 24 28 06 00 	mov    QWORD PTR [rsp+0x628],rcx
  9cf49e:	00 
  9cf49f:	48 8d 8c 24 e8 04 00 	lea    rcx,[rsp+0x4e8]
  9cf4a6:	00 
  9cf4a7:	48 89 8c 24 30 06 00 	mov    QWORD PTR [rsp+0x630],rcx
  9cf4ae:	00 
  9cf4af:	48 89 84 24 38 06 00 	mov    QWORD PTR [rsp+0x638],rax
  9cf4b6:	00 
  9cf4b7:	48 8d 05 82 c6 f2 00 	lea    rax,[rip+0xf2c682]        # 18fbb40 <anon.609a31ba814f1e4156e50677fc366a7f.492.llvm.5215769359700358943+0x548>
  9cf4be:	48 89 84 24 d0 11 00 	mov    QWORD PTR [rsp+0x11d0],rax
  9cf4c5:	00 
  9cf4c6:	48 c7 84 24 d8 11 00 	mov    QWORD PTR [rsp+0x11d8],0x4
  9cf4cd:	00 04 00 00 00 
  9cf4d2:	48 c7 84 24 f0 11 00 	mov    QWORD PTR [rsp+0x11f0],0x0
  9cf4d9:	00 00 00 00 00 
  9cf4de:	4c 89 bc 24 e0 11 00 	mov    QWORD PTR [rsp+0x11e0],r15
  9cf4e5:	00 
  9cf4e6:	48 c7 84 24 e8 11 00 	mov    QWORD PTR [rsp+0x11e8],0x3
  9cf4ed:	00 03 00 00 00 
  9cf4f2:	48 89 df             	mov    rdi,rbx
  9cf4f5:	ff 15 5d 77 fd 00    	call   QWORD PTR [rip+0xfd775d]        # 19a6c58 <_DYNAMIC+0x458>
  9cf4fb:	8b 84 24 e8 04 00 00 	mov    eax,DWORD PTR [rsp+0x4e8]
  9cf502:	c7 84 24 20 03 00 00 	mov    DWORD PTR [rsp+0x320],0x4
  9cf509:	04 00 00 00 
  9cf50d:	89 84 24 70 01 00 00 	mov    DWORD PTR [rsp+0x170],eax
  9cf514:	83 f8 04             	cmp    eax,0x4
  9cf517:	0f 85 e4 00 00 00    	jne    9cf601 <future_backtest::RunnerCore::run_multi+0x4351>
  9cf51d:	45 31 ff             	xor    r15d,r15d
  9cf520:	48 8b b4 24 a0 03 00 	mov    rsi,QWORD PTR [rsp+0x3a0]
  9cf527:	00 
  9cf528:	48 85 f6             	test   rsi,rsi
  9cf52b:	74 13                	je     9cf540 <future_backtest::RunnerCore::run_multi+0x4290>
  9cf52d:	48 8b bc 24 a8 03 00 	mov    rdi,QWORD PTR [rsp+0x3a8]
  9cf534:	00 
  9cf535:	ba 01 00 00 00       	mov    edx,0x1
  9cf53a:	ff 15 e0 74 fd 00    	call   QWORD PTR [rip+0xfd74e0]        # 19a6a20 <_DYNAMIC+0x220>
  9cf540:	4d 85 ff             	test   r15,r15
  9cf543:	0f 85 b8 2e 00 00    	jne    9d2401 <future_backtest::RunnerCore::run_multi+0x7151>
  9cf549:	b9 10 00 00 00       	mov    ecx,0x10
  9cf54e:	48 89 df             	mov    rdi,rbx
  9cf551:	4c 89 e6             	mov    rsi,r12
  9cf554:	48 8d 15 05 2b 89 ff 	lea    rdx,[rip+0xffffffffff892b05]        # 262060 <anon.5ab355837303ce95b24d7b0f77f323d8.20.llvm.14255860597723985694+0x363>
  9cf55b:	e8 90 6b 03 00       	call   a060f0 <libloading::os::unix::Library::get_impl>
  9cf560:	48 8b 8c 24 d0 11 00 	mov    rcx,QWORD PTR [rsp+0x11d0]
  9cf567:	00 
  9cf568:	48 8b 84 24 d8 11 00 	mov    rax,QWORD PTR [rsp+0x11d8]
  9cf56f:	00 
  9cf570:	48 3b 4c 24 50       	cmp    rcx,QWORD PTR [rsp+0x50]
  9cf575:	0f 85 54 2e 00 00    	jne    9d23cf <future_backtest::RunnerCore::run_multi+0x711f>
  9cf57b:	4c 89 eb             	mov    rbx,r13
  9cf57e:	ff d0                	call   rax
  9cf580:	49 89 c7             	mov    r15,rax
  9cf583:	4c 8b ac 24 b0 10 00 	mov    r13,QWORD PTR [rsp+0x10b0]
  9cf58a:	00 
  9cf58b:	4c 89 ac 24 10 06 00 	mov    QWORD PTR [rsp+0x610],r13
  9cf592:	00 
  9cf593:	4c 8b a4 24 f8 02 00 	mov    r12,QWORD PTR [rsp+0x2f8]
  9cf59a:	00 
  9cf59b:	4c 3b a4 24 e8 02 00 	cmp    r12,QWORD PTR [rsp+0x2e8]
  9cf5a2:	00 
  9cf5a3:	75 15                	jne    9cf5ba <future_backtest::RunnerCore::run_multi+0x430a>
  9cf5a5:	48 8d bc 24 e8 02 00 	lea    rdi,[rsp+0x2e8]
  9cf5ac:	00 
  9cf5ad:	48 8d 35 fc d4 f2 00 	lea    rsi,[rip+0xf2d4fc]        # 18fcab0 <anon.609a31ba814f1e4156e50677fc366a7f.492.llvm.5215769359700358943+0x14b8>
  9cf5b4:	ff 15 7e 87 fd 00    	call   QWORD PTR [rip+0xfd877e]        # 19a7d38 <_DYNAMIC+0x1538>
  9cf5ba:	48 8b 84 24 f0 02 00 	mov    rax,QWORD PTR [rsp+0x2f0]
  9cf5c1:	00 
  9cf5c2:	4e 89 2c e0          	mov    QWORD PTR [rax+r12*8],r13
  9cf5c6:	49 ff c4             	inc    r12
  9cf5c9:	4c 89 a4 24 f8 02 00 	mov    QWORD PTR [rsp+0x2f8],r12
  9cf5d0:	00 
  9cf5d1:	4c 8b a4 24 f8 00 00 	mov    r12,QWORD PTR [rsp+0xf8]
  9cf5d8:	00 
  9cf5d9:	4c 3b a4 24 e8 00 00 	cmp    r12,QWORD PTR [rsp+0xe8]
  9cf5e0:	00 
  9cf5e1:	0f 85 d3 fa ff ff    	jne    9cf0ba <future_backtest::RunnerCore::run_multi+0x3e0a>
  9cf5e7:	48 8d bc 24 e8 00 00 	lea    rdi,[rsp+0xe8]
  9cf5ee:	00 
  9cf5ef:	48 8d 35 d2 d4 f2 00 	lea    rsi,[rip+0xf2d4d2]        # 18fcac8 <anon.609a31ba814f1e4156e50677fc366a7f.492.llvm.5215769359700358943+0x14d0>
  9cf5f6:	ff 15 f4 85 fd 00    	call   QWORD PTR [rip+0xfd85f4]        # 19a7bf0 <_DYNAMIC+0x13f0>
  9cf5fc:	e9 b9 fa ff ff       	jmp    9cf0ba <future_backtest::RunnerCore::run_multi+0x3e0a>
  9cf601:	48 8d 84 24 20 03 00 	lea    rax,[rsp+0x320]
  9cf608:	00 
  9cf609:	48 89 84 24 d0 11 00 	mov    QWORD PTR [rsp+0x11d0],rax
  9cf610:	00 
  9cf611:	48 8b 05 60 7d fd 00 	mov    rax,QWORD PTR [rip+0xfd7d60]        # 19a7378 <_DYNAMIC+0xb78>
  9cf618:	48 89 84 24 d8 11 00 	mov    QWORD PTR [rsp+0x11d8],rax
  9cf61f:	00 
  9cf620:	48 8d 8c 24 70 01 00 	lea    rcx,[rsp+0x170]
  9cf627:	00 
  9cf628:	48 89 8c 24 e0 11 00 	mov    QWORD PTR [rsp+0x11e0],rcx
  9cf62f:	00 
  9cf630:	48 89 84 24 e8 11 00 	mov    QWORD PTR [rsp+0x11e8],rax
  9cf637:	00 
  9cf638:	48 8d 05 b9 c4 f2 00 	lea    rax,[rip+0xf2c4b9]        # 18fbaf8 <anon.609a31ba814f1e4156e50677fc366a7f.492.llvm.5215769359700358943+0x500>
  9cf63f:	48 89 84 24 10 06 00 	mov    QWORD PTR [rsp+0x610],rax
  9cf646:	00 
  9cf647:	48 c7 84 24 18 06 00 	mov    QWORD PTR [rsp+0x618],0x3
  9cf64e:	00 03 00 00 00 
  9cf653:	48 c7 84 24 30 06 00 	mov    QWORD PTR [rsp+0x630],0x0
  9cf65a:	00 00 00 00 00 
  9cf65f:	48 89 9c 24 20 06 00 	mov    QWORD PTR [rsp+0x620],rbx
  9cf666:	00 
  9cf667:	48 c7 84 24 28 06 00 	mov    QWORD PTR [rsp+0x628],0x2
  9cf66e:	00 02 00 00 00 
  9cf673:	48 8d bc 24 c0 01 00 	lea    rdi,[rsp+0x1c0]
  9cf67a:	00 
  9cf67b:	4c 89 fe             	mov    rsi,r15
  9cf67e:	ff 15 fc 76 fd 00    	call   QWORD PTR [rip+0xfd76fc]        # 19a6d80 <_DYNAMIC+0x580>
  9cf684:	48 8d bc 24 c0 01 00 	lea    rdi,[rsp+0x1c0]
  9cf68b:	00 
  9cf68c:	e8 7f 77 04 00       	call   a16e10 <anyhow::error::<impl anyhow::Error>::msg>
  9cf691:	49 89 c7             	mov    r15,rax
  9cf694:	48 8b b4 24 a0 03 00 	mov    rsi,QWORD PTR [rsp+0x3a0]
  9cf69b:	00 
  9cf69c:	48 85 f6             	test   rsi,rsi
  9cf69f:	0f 85 88 fe ff ff    	jne    9cf52d <future_backtest::RunnerCore::run_multi+0x427d>
  9cf6a5:	e9 96 fe ff ff       	jmp    9cf540 <future_backtest::RunnerCore::run_multi+0x4290>
  9cf6aa:	48 83 7c 24 48 00    	cmp    QWORD PTR [rsp+0x48],0x0
  9cf6b0:	0f 84 99 48 00 00    	je     9d3f4f <future_backtest::RunnerCore::run_multi+0x8c9f>
  9cf6b6:	b0 01                	mov    al,0x1
  9cf6b8:	89 44 24 68          	mov    DWORD PTR [rsp+0x68],eax
  9cf6bc:	48 8b 74 24 40       	mov    rsi,QWORD PTR [rsp+0x40]
  9cf6c1:	48 8d bc 24 d0 11 00 	lea    rdi,[rsp+0x11d0]
  9cf6c8:	00 
  9cf6c9:	e8 f2 82 00 00       	call   9d79c0 <<future_backtest::Customer::customer_params::StrategyParams as core::clone::Clone>::clone>
  9cf6ce:	48 83 bc 24 a8 00 00 	cmp    QWORD PTR [rsp+0xa8],0x0
  9cf6d5:	00 00 
  9cf6d7:	0f 84 36 05 00 00    	je     9cfc13 <future_backtest::RunnerCore::run_multi+0x4963>
  9cf6dd:	4c 8d b4 24 e0 0e 00 	lea    r14,[rsp+0xee0]
  9cf6e4:	00 
  9cf6e5:	4c 8d a4 24 10 06 00 	lea    r12,[rsp+0x610]
  9cf6ec:	00 
  9cf6ed:	31 db                	xor    ebx,ebx
  9cf6ef:	31 ed                	xor    ebp,ebp
  9cf6f1:	eb 1b                	jmp    9cf70e <future_backtest::RunnerCore::run_multi+0x445e>
  9cf6f3:	48 8b b4 24 a8 00 00 	mov    rsi,QWORD PTR [rsp+0xa8]
  9cf6fa:	00 
  9cf6fb:	48 ff c5             	inc    rbp
  9cf6fe:	48 81 c3 28 15 00 00 	add    rbx,0x1528
  9cf705:	48 39 f5             	cmp    rbp,rsi
  9cf708:	0f 83 07 05 00 00    	jae    9cfc15 <future_backtest::RunnerCore::run_multi+0x4965>
  9cf70e:	48 89 ac 24 b0 10 00 	mov    QWORD PTR [rsp+0x10b0],rbp
  9cf715:	00 
  9cf716:	48 8b 74 24 48       	mov    rsi,QWORD PTR [rsp+0x48]
  9cf71b:	48 39 f5             	cmp    rbp,rsi
  9cf71e:	0f 83 6b 47 00 00    	jae    9d3e8f <future_backtest::RunnerCore::run_multi+0x8bdf>
  9cf724:	48 8b 74 24 40       	mov    rsi,QWORD PTR [rsp+0x40]
  9cf729:	48 01 de             	add    rsi,rbx
  9cf72c:	83 bc 24 e0 0e 00 00 	cmp    DWORD PTR [rsp+0xee0],0x2
  9cf733:	02 
  9cf734:	4c 89 f1             	mov    rcx,r14
  9cf737:	b8 00 00 00 00       	mov    eax,0x0
  9cf73c:	48 0f 44 c8          	cmove  rcx,rax
  9cf740:	4c 89 e7             	mov    rdi,r12
  9cf743:	48 89 ea             	mov    rdx,rbp
  9cf746:	45 31 c0             	xor    r8d,r8d
  9cf749:	e8 a2 b6 ff ff       	call   9cadf0 <future_backtest::RunnerCore::make_ffi_ctx>
  9cf74e:	4c 8b ac 24 10 06 00 	mov    r13,QWORD PTR [rsp+0x610]
  9cf755:	00 
  9cf756:	4c 8b bc 24 18 06 00 	mov    r15,QWORD PTR [rsp+0x618]
  9cf75d:	00 
  9cf75e:	49 83 fd 03          	cmp    r13,0x3
  9cf762:	0f 84 69 37 00 00    	je     9d2ed1 <future_backtest::RunnerCore::run_multi+0x7c21>
  9cf768:	ba e8 00 00 00       	mov    edx,0xe8
  9cf76d:	48 8d bc 24 d0 01 00 	lea    rdi,[rsp+0x1d0]
  9cf774:	00 
  9cf775:	48 8d b4 24 20 06 00 	lea    rsi,[rsp+0x620]
  9cf77c:	00 
  9cf77d:	ff 15 c5 73 fd 00    	call   QWORD PTR [rip+0xfd73c5]        # 19a6b48 <memcpy@GLIBC_2.14>
  9cf783:	4c 89 ac 24 c0 01 00 	mov    QWORD PTR [rsp+0x1c0],r13
  9cf78a:	00 
  9cf78b:	4c 89 bc 24 c8 01 00 	mov    QWORD PTR [rsp+0x1c8],r15
  9cf792:	00 
  9cf793:	48 8b bc 24 b0 10 00 	mov    rdi,QWORD PTR [rsp+0x10b0]
  9cf79a:	00 
  9cf79b:	48 8b b4 24 f8 00 00 	mov    rsi,QWORD PTR [rsp+0xf8]
  9cf7a2:	00 
  9cf7a3:	48 39 f7             	cmp    rdi,rsi
  9cf7a6:	0f 83 f8 46 00 00    	jae    9d3ea4 <future_backtest::RunnerCore::run_multi+0x8bf4>
  9cf7ac:	48 8b 84 24 f0 00 00 	mov    rax,QWORD PTR [rsp+0xf0]
  9cf7b3:	00 
  9cf7b4:	48 8b 04 f8          	mov    rax,QWORD PTR [rax+rdi*8]
  9cf7b8:	48 8b 38             	mov    rdi,QWORD PTR [rax]
  9cf7bb:	48 8d b4 24 c0 01 00 	lea    rsi,[rsp+0x1c0]
  9cf7c2:	00 
  9cf7c3:	ff 50 08             	call   QWORD PTR [rax+0x8]
  9cf7c6:	89 84 24 88 03 00 00 	mov    DWORD PTR [rsp+0x388],eax
  9cf7cd:	85 c0                	test   eax,eax
  9cf7cf:	0f 88 35 2a 00 00    	js     9d220a <future_backtest::RunnerCore::run_multi+0x6f5a>
  9cf7d5:	48 8d 84 24 b0 10 00 	lea    rax,[rsp+0x10b0]
  9cf7dc:	00 
  9cf7dd:	48 89 84 24 a0 03 00 	mov    QWORD PTR [rsp+0x3a0],rax
  9cf7e4:	00 
  9cf7e5:	48 8b 05 04 76 fd 00 	mov    rax,QWORD PTR [rip+0xfd7604]        # 19a6df0 <_DYNAMIC+0x5f0>
  9cf7ec:	48 89 84 24 a8 03 00 	mov    QWORD PTR [rsp+0x3a8],rax
  9cf7f3:	00 
  9cf7f4:	48 8d 05 45 d2 f2 00 	lea    rax,[rip+0xf2d245]        # 18fca40 <anon.609a31ba814f1e4156e50677fc366a7f.492.llvm.5215769359700358943+0x1448>
  9cf7fb:	48 89 84 24 10 06 00 	mov    QWORD PTR [rsp+0x610],rax
  9cf802:	00 
  9cf803:	48 c7 84 24 18 06 00 	mov    QWORD PTR [rsp+0x618],0x2
  9cf80a:	00 02 00 00 00 
  9cf80f:	48 c7 84 24 30 06 00 	mov    QWORD PTR [rsp+0x630],0x0
  9cf816:	00 00 00 00 00 
  9cf81b:	48 8d 84 24 a0 03 00 	lea    rax,[rsp+0x3a0]
  9cf822:	00 
  9cf823:	48 89 84 24 20 06 00 	mov    QWORD PTR [rsp+0x620],rax
  9cf82a:	00 
  9cf82b:	48 c7 84 24 28 06 00 	mov    QWORD PTR [rsp+0x628],0x1
  9cf832:	00 01 00 00 00 
  9cf837:	4c 89 e7             	mov    rdi,r12
  9cf83a:	ff 15 18 74 fd 00    	call   QWORD PTR [rip+0xfd7418]        # 19a6c58 <_DYNAMIC+0x458>
  9cf840:	48 8b b4 24 90 02 00 	mov    rsi,QWORD PTR [rsp+0x290]
  9cf847:	00 
  9cf848:	48 85 f6             	test   rsi,rsi
  9cf84b:	74 13                	je     9cf860 <future_backtest::RunnerCore::run_multi+0x45b0>
  9cf84d:	48 8b bc 24 98 02 00 	mov    rdi,QWORD PTR [rsp+0x298]
  9cf854:	00 
  9cf855:	ba 01 00 00 00       	mov    edx,0x1
  9cf85a:	ff 15 c0 71 fd 00    	call   QWORD PTR [rip+0xfd71c0]        # 19a6a20 <_DYNAMIC+0x220>
  9cf860:	83 bc 24 c0 01 00 00 	cmp    DWORD PTR [rsp+0x1c0],0x2
  9cf867:	02 
  9cf868:	0f 84 85 fe ff ff    	je     9cf6f3 <future_backtest::RunnerCore::run_multi+0x4443>
  9cf86e:	48 8b b4 24 28 02 00 	mov    rsi,QWORD PTR [rsp+0x228]
  9cf875:	00 
  9cf876:	48 85 f6             	test   rsi,rsi
  9cf879:	74 13                	je     9cf88e <future_backtest::RunnerCore::run_multi+0x45de>
  9cf87b:	48 8b bc 24 30 02 00 	mov    rdi,QWORD PTR [rsp+0x230]
  9cf882:	00 
  9cf883:	ba 01 00 00 00       	mov    edx,0x1
  9cf888:	ff 15 92 71 fd 00    	call   QWORD PTR [rip+0xfd7192]        # 19a6a20 <_DYNAMIC+0x220>
  9cf88e:	48 8b 84 24 40 02 00 	mov    rax,QWORD PTR [rsp+0x240]
  9cf895:	00 
  9cf896:	f0 48 ff 08          	lock dec QWORD PTR [rax]
  9cf89a:	0f 85 53 fe ff ff    	jne    9cf6f3 <future_backtest::RunnerCore::run_multi+0x4443>
  9cf8a0:	48 8d bc 24 40 02 00 	lea    rdi,[rsp+0x240]
  9cf8a7:	00 
  9cf8a8:	ff 15 da 7b fd 00    	call   QWORD PTR [rip+0xfd7bda]        # 19a7488 <_DYNAMIC+0xc88>
  9cf8ae:	e9 40 fe ff ff       	jmp    9cf6f3 <future_backtest::RunnerCore::run_multi+0x4443>
  9cf8b3:	45 31 e4             	xor    r12d,r12d
  9cf8b6:	4c 8b 7c 24 70       	mov    r15,QWORD PTR [rsp+0x70]
  9cf8bb:	48 8d 15 06 ad f2 00 	lea    rdx,[rip+0xf2ad06]        # 18fa5c8 <anon.609a31ba814f1e4156e50677fc366a7f.248.llvm.5215769359700358943>
  9cf8c2:	4c 89 e7             	mov    rdi,r12
  9cf8c5:	4c 89 fe             	mov    rsi,r15
  9cf8c8:	ff 15 ca 72 fd 00    	call   QWORD PTR [rip+0xfd72ca]        # 19a6b98 <_DYNAMIC+0x398>
  9cf8ce:	e9 29 49 00 00       	jmp    9d41fc <future_backtest::RunnerCore::run_multi+0x8f4c>
  9cf8d3:	4c 8d b4 24 80 1b 00 	lea    r14,[rsp+0x1b80]
  9cf8da:	00 
  9cf8db:	4c 8d bc 24 d0 11 00 	lea    r15,[rsp+0x11d0]
  9cf8e2:	00 
  9cf8e3:	4c 89 f7             	mov    rdi,r14
  9cf8e6:	4c 89 fe             	mov    rsi,r15
  9cf8e9:	e8 b2 b6 d4 ff       	call   71afa0 <_ZN5alloc11collections5btree3map25IntoIter$LT$K$C$V$C$A$GT$10dying_next17he5722eb1ea305e80E.llvm.1643563994444475245>
  9cf8ee:	48 83 bc 24 80 1b 00 	cmp    QWORD PTR [rsp+0x1b80],0x0
  9cf8f5:	00 00 
  9cf8f7:	75 ea                	jne    9cf8e3 <future_backtest::RunnerCore::run_multi+0x4633>
  9cf8f9:	48 8d 0d f0 9f f2 00 	lea    rcx,[rip+0xf29ff0]        # 18f98f0 <anon.609a31ba814f1e4156e50677fc366a7f.99.llvm.5215769359700358943>
  9cf900:	48 8d bc 24 00 05 00 	lea    rdi,[rsp+0x500]
  9cf907:	00 
  9cf908:	48 89 de             	mov    rsi,rbx
  9cf90b:	48 8b 94 24 90 00 00 	mov    rdx,QWORD PTR [rsp+0x90]
  9cf912:	00 
  9cf913:	e8 38 07 fb ff       	call   980050 <<alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter>
  9cf918:	48 8b bc 24 08 05 00 	mov    rdi,QWORD PTR [rsp+0x508]
  9cf91f:	00 
  9cf920:	48 8b 84 24 10 05 00 	mov    rax,QWORD PTR [rsp+0x510]
  9cf927:	00 
  9cf928:	48 85 c0             	test   rax,rax
  9cf92b:	0f 84 92 01 00 00    	je     9cfac3 <future_backtest::RunnerCore::run_multi+0x4813>
  9cf931:	48 89 c1             	mov    rcx,rax
  9cf934:	48 c1 e1 04          	shl    rcx,0x4
  9cf938:	48 01 f9             	add    rcx,rdi
  9cf93b:	31 d2                	xor    edx,edx
  9cf93d:	48 be ff ff ff ff ff 	movabs rsi,0xfffffffffffff
  9cf944:	ff 0f 00 
  9cf947:	49 b8 00 00 00 00 00 	movabs r8,0xfff0000000000000
  9cf94e:	00 f0 ff 
  9cf951:	66 0f 57 c0          	xorpd  xmm0,xmm0
  9cf955:	49 89 f9             	mov    r9,rdi
  9cf958:	f3 41 0f 7e 09       	movq   xmm1,QWORD PTR [r9]
  9cf95d:	f3 41 0f 7e 51 08    	movq   xmm2,QWORD PTR [r9+0x8]
  9cf963:	66 49 0f 7e ca       	movq   r10,xmm1
  9cf968:	48 89 54 24 38       	mov    QWORD PTR [rsp+0x38],rdx
  9cf96d:	66 0f d6 8c 24 40 0e 	movq   QWORD PTR [rsp+0xe40],xmm1
  9cf974:	00 00 
  9cf976:	66 0f d6 94 24 a8 01 	movq   QWORD PTR [rsp+0x1a8],xmm2
  9cf97d:	00 00 
  9cf97f:	49 bb ff ff ff ff ff 	movabs r11,0x7fffffffffffffff
  9cf986:	ff ff 7f 
  9cf989:	4d 21 da             	and    r10,r11
  9cf98c:	49 bb ff ff ff ff ff 	movabs r11,0x7fefffffffffffff
  9cf993:	ff ef 7f 
  9cf996:	4d 39 da             	cmp    r10,r11
  9cf999:	0f 8f dd 32 00 00    	jg     9d2c7c <future_backtest::RunnerCore::run_multi+0x79cc>
  9cf99f:	66 49 0f 7e d2       	movq   r10,xmm2
  9cf9a4:	4d 89 d6             	mov    r14,r10
  9cf9a7:	49 bb ff ff ff ff ff 	movabs r11,0x7fffffffffffffff
  9cf9ae:	ff ff 7f 
  9cf9b1:	4d 21 de             	and    r14,r11
  9cf9b4:	4d 8d 5e ff          	lea    r11,[r14-0x1]
  9cf9b8:	49 39 f3             	cmp    r11,rsi
  9cf9bb:	41 0f 92 c3          	setb   r11b
  9cf9bf:	4d 85 d2             	test   r10,r10
  9cf9c2:	41 0f 98 c2          	sets   r10b
  9cf9c6:	48 bb 00 00 00 00 00 	movabs rbx,0x7ff0000000000000
  9cf9cd:	00 f0 7f 
  9cf9d0:	49 39 de             	cmp    r14,rbx
  9cf9d3:	40 0f 9f c5          	setg   bpl
  9cf9d7:	0f 94 c3             	sete   bl
  9cf9da:	4d 01 c6             	add    r14,r8
  9cf9dd:	49 c1 ee 35          	shr    r14,0x35
  9cf9e1:	41 81 fe ff 03 00 00 	cmp    r14d,0x3ff
  9cf9e8:	41 0f 92 c6          	setb   r14b
  9cf9ec:	66 0f 2e c1          	ucomisd xmm0,xmm1
  9cf9f0:	0f 87 86 32 00 00    	ja     9d2c7c <future_backtest::RunnerCore::run_multi+0x79cc>
  9cf9f6:	45 20 d3             	and    r11b,r10b
  9cf9f9:	40 08 eb             	or     bl,bpl
  9cf9fc:	44 08 db             	or     bl,r11b
  9cf9ff:	45 20 d6             	and    r14b,r10b
  9cfa02:	41 08 de             	or     r14b,bl
  9cfa05:	0f 85 71 32 00 00    	jne    9d2c7c <future_backtest::RunnerCore::run_multi+0x79cc>
  9cfa0b:	49 83 c1 10          	add    r9,0x10
  9cfa0f:	48 ff c2             	inc    rdx
  9cfa12:	49 39 c9             	cmp    r9,rcx
  9cfa15:	0f 85 3d ff ff ff    	jne    9cf958 <future_backtest::RunnerCore::run_multi+0x46a8>
  9cfa1b:	48 83 f8 01          	cmp    rax,0x1
  9cfa1f:	0f 84 9e 00 00 00    	je     9cfac3 <future_backtest::RunnerCore::run_multi+0x4813>
  9cfa25:	48 8d 4f 18          	lea    rcx,[rdi+0x18]
  9cfa29:	ba 01 00 00 00       	mov    edx,0x1
  9cfa2e:	31 f6                	xor    esi,esi
  9cfa30:	66 0f 28 05 18 4d 88 	movapd xmm0,XMMWORD PTR [rip+0xffffffffff884d18]        # 254750 <anon.1d60bbc5b7a6ca0614a4221d8538e6d9.2.llvm.10718084555993993690+0x30>
  9cfa37:	ff 
  9cfa38:	66 0f 28 0d 40 a1 88 	movapd xmm1,XMMWORD PTR [rip+0xffffffffff88a140]        # 259b80 <anon.9c839d8261a2d9b6655a6b7286b1e655.225.llvm.5528135186037708526+0xa0>
  9cfa3f:	ff 
  9cfa40:	66 0f 28 15 d8 75 88 	movapd xmm2,XMMWORD PTR [rip+0xffffffffff8875d8]        # 257020 <anon.fe1b35fd190af3ec62b163d2072132da.353.llvm.6880758764856161+0x20>
  9cfa47:	ff 
  9cfa48:	49 89 f0             	mov    r8,rsi
  9cfa4b:	49 c1 e0 04          	shl    r8,0x4
  9cfa4f:	f2 42 0f 10 5c 07 08 	movsd  xmm3,QWORD PTR [rdi+r8*1+0x8]
  9cfa56:	f2 42 0f 10 24 07    	movsd  xmm4,QWORD PTR [rdi+r8*1]
  9cfa5c:	f2 0f 58 e3          	addsd  xmm4,xmm3
  9cfa60:	66 0f 14 dc          	unpcklpd xmm3,xmm4
  9cfa64:	49 89 c9             	mov    r9,rcx
  9cfa67:	49 89 d0             	mov    r8,rdx
  9cfa6a:	f2 41 0f 10 29       	movsd  xmm5,QWORD PTR [r9]
  9cfa6f:	f2 41 0f 10 61 f8    	movsd  xmm4,QWORD PTR [r9-0x8]
  9cfa75:	f2 0f 58 e5          	addsd  xmm4,xmm5
  9cfa79:	66 0f 14 ec          	unpcklpd xmm5,xmm4
  9cfa7d:	66 0f 28 e3          	movapd xmm4,xmm3
  9cfa81:	66 0f 5c e5          	subpd  xmm4,xmm5
  9cfa85:	66 0f 54 e0          	andpd  xmm4,xmm0
  9cfa89:	66 0f 28 ec          	movapd xmm5,xmm4
  9cfa8d:	66 0f 58 e9          	addpd  xmm5,xmm1
  9cfa91:	66 0f c2 ea 01       	cmpltpd xmm5,xmm2
  9cfa96:	66 44 0f 50 d5       	movmskpd r10d,xmm5
  9cfa9b:	45 85 d2             	test   r10d,r10d
  9cfa9e:	0f 85 76 29 00 00    	jne    9d241a <future_backtest::RunnerCore::run_multi+0x716a>
  9cfaa4:	49 ff c0             	inc    r8
  9cfaa7:	49 83 c1 10          	add    r9,0x10
  9cfaab:	4c 39 c0             	cmp    rax,r8
  9cfaae:	75 ba                	jne    9cfa6a <future_backtest::RunnerCore::run_multi+0x47ba>
  9cfab0:	48 89 d6             	mov    rsi,rdx
  9cfab3:	4c 8d 42 01          	lea    r8,[rdx+0x1]
  9cfab7:	48 83 c1 10          	add    rcx,0x10
  9cfabb:	4c 89 c2             	mov    rdx,r8
  9cfabe:	49 39 c0             	cmp    r8,rax
  9cfac1:	75 85                	jne    9cfa48 <future_backtest::RunnerCore::run_multi+0x4798>
  9cfac3:	48 8b b4 24 00 05 00 	mov    rsi,QWORD PTR [rsp+0x500]
  9cfaca:	00 
  9cfacb:	48 85 f6             	test   rsi,rsi
  9cface:	74 0f                	je     9cfadf <future_backtest::RunnerCore::run_multi+0x482f>
  9cfad0:	48 c1 e6 04          	shl    rsi,0x4
  9cfad4:	ba 08 00 00 00       	mov    edx,0x8
  9cfad9:	ff 15 41 6f fd 00    	call   QWORD PTR [rip+0xfd6f41]        # 19a6a20 <_DYNAMIC+0x220>
  9cfadf:	48 8d 9c 24 e0 0e 00 	lea    rbx,[rsp+0xee0]
  9cfae6:	00 
  9cfae7:	48 89 df             	mov    rdi,rbx
  9cfaea:	e8 b1 b7 07 00       	call   a4b2a0 <<hashbrown::raw::RawTable<T,A> as core::ops::drop::Drop>::drop>
  9cfaef:	4c 8d b4 24 60 18 00 	lea    r14,[rsp+0x1860]
  9cfaf6:	00 
  9cfaf7:	4c 89 f7             	mov    rdi,r14
  9cfafa:	e8 c1 ca 07 00       	call   a4c5c0 <<hashbrown::raw::RawTable<T,A> as core::ops::drop::Drop>::drop>
  9cfaff:	80 bc 24 68 06 00 00 	cmp    BYTE PTR [rsp+0x668],0x0
  9cfb06:	00 
  9cfb07:	0f 84 9b 26 00 00    	je     9d21a8 <future_backtest::RunnerCore::run_multi+0x6ef8>
  9cfb0d:	48 8d bc 24 80 1b 00 	lea    rdi,[rsp+0x1b80]
  9cfb14:	00 
  9cfb15:	48 8d b4 24 10 06 00 	lea    rsi,[rsp+0x610]
  9cfb1c:	00 
  9cfb1d:	ff 15 65 81 fd 00    	call   QWORD PTR [rip+0xfd8165]        # 19a7c88 <_DYNAMIC+0x1488>
  9cfb23:	48 8b 84 24 90 1b 00 	mov    rax,QWORD PTR [rsp+0x1b90]
  9cfb2a:	00 
  9cfb2b:	48 89 84 24 60 18 00 	mov    QWORD PTR [rsp+0x1860],rax
  9cfb32:	00 
  9cfb33:	4c 89 b4 24 e0 0e 00 	mov    QWORD PTR [rsp+0xee0],r14
  9cfb3a:	00 
  9cfb3b:	48 8b 05 ae 72 fd 00 	mov    rax,QWORD PTR [rip+0xfd72ae]        # 19a6df0 <_DYNAMIC+0x5f0>
  9cfb42:	48 89 84 24 e8 0e 00 	mov    QWORD PTR [rsp+0xee8],rax
  9cfb49:	00 
  9cfb4a:	48 8d 05 77 c4 f2 00 	lea    rax,[rip+0xf2c477]        # 18fbfc8 <anon.609a31ba814f1e4156e50677fc366a7f.492.llvm.5215769359700358943+0x9d0>
  9cfb51:	48 89 84 24 d0 11 00 	mov    QWORD PTR [rsp+0x11d0],rax
  9cfb58:	00 
  9cfb59:	48 c7 84 24 d8 11 00 	mov    QWORD PTR [rsp+0x11d8],0x2
  9cfb60:	00 02 00 00 00 
  9cfb65:	48 c7 84 24 f0 11 00 	mov    QWORD PTR [rsp+0x11f0],0x0
  9cfb6c:	00 00 00 00 00 
  9cfb71:	48 89 9c 24 e0 11 00 	mov    QWORD PTR [rsp+0x11e0],rbx
  9cfb78:	00 
  9cfb79:	48 c7 84 24 e8 11 00 	mov    QWORD PTR [rsp+0x11e8],0x1
  9cfb80:	00 01 00 00 00 
  9cfb85:	48 8d bc 24 d0 11 00 	lea    rdi,[rsp+0x11d0]
  9cfb8c:	00 
  9cfb8d:	ff 15 c5 70 fd 00    	call   QWORD PTR [rip+0xfd70c5]        # 19a6c58 <_DYNAMIC+0x458>
  9cfb93:	48 8d bc 24 80 1b 00 	lea    rdi,[rsp+0x1b80]
  9cfb9a:	00 
  9cfb9b:	e8 e0 5f d5 ff       	call   725b80 <<alloc::collections::btree::map::BTreeMap<K,V,A> as core::ops::drop::Drop>::drop>
  9cfba0:	41 bf 08 00 00 00    	mov    r15d,0x8
  9cfba6:	45 31 e4             	xor    r12d,r12d
  9cfba9:	31 db                	xor    ebx,ebx
  9cfbab:	45 31 ed             	xor    r13d,r13d
  9cfbae:	48 8d bc 24 f0 19 00 	lea    rdi,[rsp+0x19f0]
  9cfbb5:	00 
  9cfbb6:	48 8d b4 24 10 06 00 	lea    rsi,[rsp+0x610]
  9cfbbd:	00 
  9cfbbe:	ba b8 00 00 00       	mov    edx,0xb8
  9cfbc3:	ff 15 7f 6f fd 00    	call   QWORD PTR [rip+0xfd6f7f]        # 19a6b48 <memcpy@GLIBC_2.14>
  9cfbc9:	4c 89 a4 24 a8 1a 00 	mov    QWORD PTR [rsp+0x1aa8],r12
  9cfbd0:	00 
  9cfbd1:	4c 89 bc 24 b0 1a 00 	mov    QWORD PTR [rsp+0x1ab0],r15
  9cfbd8:	00 
  9cfbd9:	48 89 9c 24 b8 1a 00 	mov    QWORD PTR [rsp+0x1ab8],rbx
  9cfbe0:	00 
  9cfbe1:	4c 89 ac 24 c0 1a 00 	mov    QWORD PTR [rsp+0x1ac0],r13
  9cfbe8:	00 
  9cfbe9:	c7 84 24 c8 00 00 00 	mov    DWORD PTR [rsp+0xc8],0x0
  9cfbf0:	00 00 00 00 
  9cfbf4:	4c 8b bc 24 e0 00 00 	mov    r15,QWORD PTR [rsp+0xe0]
  9cfbfb:	00 
  9cfbfc:	48 8b 8c 24 a8 00 00 	mov    rcx,QWORD PTR [rsp+0xa8]
  9cfc03:	00 
  9cfc04:	48 83 f9 02          	cmp    rcx,0x2
  9cfc08:	0f 83 a6 b9 ff ff    	jae    9cb5b4 <future_backtest::RunnerCore::run_multi+0x304>
  9cfc0e:	e9 97 ba ff ff       	jmp    9cb6aa <future_backtest::RunnerCore::run_multi+0x3fa>
  9cfc13:	31 f6                	xor    esi,esi
  9cfc15:	48 c7 84 24 e8 05 00 	mov    QWORD PTR [rsp+0x5e8],0x0
  9cfc1c:	00 00 00 00 00 
  9cfc21:	48 8d bc 24 00 03 00 	lea    rdi,[rsp+0x300]
  9cfc28:	00 
  9cfc29:	e8 22 ae fd ff       	call   9aaa50 <<T as alloc::vec::spec_from_elem::SpecFromElem>::from_elem>
  9cfc2e:	48 8b 84 24 b8 01 00 	mov    rax,QWORD PTR [rsp+0x1b8]
  9cfc35:	00 
  9cfc36:	48 85 c0             	test   rax,rax
  9cfc39:	0f 84 e9 21 00 00    	je     9d1e28 <future_backtest::RunnerCore::run_multi+0x6b78>
  9cfc3f:	48 8b 8c 24 88 00 00 	mov    rcx,QWORD PTR [rsp+0x88]
  9cfc46:	00 
  9cfc47:	48 83 c1 18          	add    rcx,0x18
  9cfc4b:	48 89 8c 24 28 01 00 	mov    QWORD PTR [rsp+0x128],rcx
  9cfc52:	00 
  9cfc53:	48 8b 4c 24 18       	mov    rcx,QWORD PTR [rsp+0x18]
  9cfc58:	48 89 ca             	mov    rdx,rcx
  9cfc5b:	48 81 c2 50 01 00 00 	add    rdx,0x150
  9cfc62:	48 89 94 24 20 01 00 	mov    QWORD PTR [rsp+0x120],rdx
  9cfc69:	00 
  9cfc6a:	48 81 c1 80 00 00 00 	add    rcx,0x80
  9cfc71:	48 89 8c 24 c0 00 00 	mov    QWORD PTR [rsp+0xc0],rcx
  9cfc78:	00 
  9cfc79:	4c 8d b4 24 b0 10 00 	lea    r14,[rsp+0x10b0]
  9cfc80:	00 
  9cfc81:	4c 8b 3d c0 6e fd 00 	mov    r15,QWORD PTR [rip+0xfd6ec0]        # 19a6b48 <memcpy@GLIBC_2.14>
  9cfc88:	48 8d 0d b9 c8 f2 00 	lea    rcx,[rip+0xf2c8b9]        # 18fc548 <anon.609a31ba814f1e4156e50677fc366a7f.492.llvm.5215769359700358943+0xf50>
  9cfc8f:	48 89 8c 24 00 01 00 	mov    QWORD PTR [rsp+0x100],rcx
  9cfc96:	00 
  9cfc97:	48 8d 0d ca c5 f2 00 	lea    rcx,[rip+0xf2c5ca]        # 18fc268 <anon.609a31ba814f1e4156e50677fc366a7f.492.llvm.5215769359700358943+0xc70>
  9cfc9e:	48 89 8c 24 d8 05 00 	mov    QWORD PTR [rsp+0x5d8],rcx
  9cfca5:	00 
  9cfca6:	48 8d 0d 23 c8 f2 00 	lea    rcx,[rip+0xf2c823]        # 18fc4d0 <anon.609a31ba814f1e4156e50677fc366a7f.492.llvm.5215769359700358943+0xed8>
  9cfcad:	48 89 8c 24 30 01 00 	mov    QWORD PTR [rsp+0x130],rcx
  9cfcb4:	00 
  9cfcb5:	48 8d 0d 44 c8 f2 00 	lea    rcx,[rip+0xf2c844]        # 18fc500 <anon.609a31ba814f1e4156e50677fc366a7f.492.llvm.5215769359700358943+0xf08>
  9cfcbc:	48 89 8c 24 d0 04 00 	mov    QWORD PTR [rsp+0x4d0],rcx
  9cfcc3:	00 
  9cfcc4:	48 8d 0d 95 c8 f2 00 	lea    rcx,[rip+0xf2c895]        # 18fc560 <anon.609a31ba814f1e4156e50677fc366a7f.492.llvm.5215769359700358943+0xf68>
  9cfccb:	48 89 8c 24 08 01 00 	mov    QWORD PTR [rsp+0x108],rcx
  9cfcd2:	00 
  9cfcd3:	48 ff c8             	dec    rax
  9cfcd6:	48 89 84 24 b8 01 00 	mov    QWORD PTR [rsp+0x1b8],rax
  9cfcdd:	00 
  9cfcde:	48 8b 8c 24 b0 01 00 	mov    rcx,QWORD PTR [rsp+0x1b0]
  9cfce5:	00 
  9cfce6:	48 69 c0 28 01 00 00 	imul   rax,rax,0x128
  9cfced:	48 8b 1c 01          	mov    rbx,QWORD PTR [rcx+rax*1]
  9cfcf1:	48 8d 34 01          	lea    rsi,[rcx+rax*1]
  9cfcf5:	48 83 c6 08          	add    rsi,0x8
  9cfcf9:	ba 20 01 00 00       	mov    edx,0x120
  9cfcfe:	4c 89 f7             	mov    rdi,r14
  9cfd01:	41 ff d7             	call   r15
  9cfd04:	48 b8 00 00 00 00 00 	movabs rax,0x8000000000000000
  9cfd0b:	00 00 80 
  9cfd0e:	48 83 c0 05          	add    rax,0x5
  9cfd12:	48 39 c3             	cmp    rbx,rax
  9cfd15:	0f 84 0d 21 00 00    	je     9d1e28 <future_backtest::RunnerCore::run_multi+0x6b78>
  9cfd1b:	48 89 9c 24 a0 03 00 	mov    QWORD PTR [rsp+0x3a0],rbx
  9cfd22:	00 
  9cfd23:	ba 20 01 00 00       	mov    edx,0x120
  9cfd28:	48 8d bc 24 a8 03 00 	lea    rdi,[rsp+0x3a8]
  9cfd2f:	00 
  9cfd30:	4c 89 f6             	mov    rsi,r14
  9cfd33:	41 ff d7             	call   r15
  9cfd36:	83 bc 24 e0 0e 00 00 	cmp    DWORD PTR [rsp+0xee0],0x2
  9cfd3d:	02 
  9cfd3e:	0f 84 89 00 00 00    	je     9cfdcd <future_backtest::RunnerCore::run_multi+0x4b1d>
  9cfd44:	48 89 d8             	mov    rax,rbx
  9cfd47:	48 b9 00 00 00 00 00 	movabs rcx,0x8000000000000000
  9cfd4e:	00 00 80 
  9cfd51:	48 31 c8             	xor    rax,rcx
  9cfd54:	48 85 db             	test   rbx,rbx
  9cfd57:	b9 01 00 00 00       	mov    ecx,0x1
  9cfd5c:	48 0f 49 c1          	cmovns rax,rcx
  9cfd60:	48 8d 0d a5 27 8b ff 	lea    rcx,[rip+0xffffffffff8b27a5]        # 28250c <future_backtest::future_info::dynamic_info::INSTRUMENT_INFO+0x7ff>
  9cfd67:	48 63 04 81          	movsxd rax,DWORD PTR [rcx+rax*4]
  9cfd6b:	48 01 c8             	add    rax,rcx
  9cfd6e:	ff e0                	jmp    rax
  9cfd70:	f2 0f 10 84 24 20 04 	movsd  xmm0,QWORD PTR [rsp+0x420]
  9cfd77:	00 00 
  9cfd79:	eb 27                	jmp    9cfda2 <future_backtest::RunnerCore::run_multi+0x4af2>
  9cfd7b:	f2 0f 10 84 24 30 04 	movsd  xmm0,QWORD PTR [rsp+0x430]
  9cfd82:	00 00 
  9cfd84:	eb 1c                	jmp    9cfda2 <future_backtest::RunnerCore::run_multi+0x4af2>
  9cfd86:	f2 0f 10 84 24 c0 03 	movsd  xmm0,QWORD PTR [rsp+0x3c0]
  9cfd8d:	00 00 
  9cfd8f:	f2 0f 5e 05 59 44 88 	divsd  xmm0,QWORD PTR [rip+0xffffffffff884459]        # 2541f0 <anon.baa4d3160c6db26b1acb0467a3a6e91d.545.llvm.14045134056871974489+0x20>
  9cfd96:	ff 
  9cfd97:	eb 09                	jmp    9cfda2 <future_backtest::RunnerCore::run_multi+0x4af2>
  9cfd99:	f2 0f 10 84 24 d0 03 	movsd  xmm0,QWORD PTR [rsp+0x3d0]
  9cfda0:	00 00 
  9cfda2:	48 8b 74 24 40       	mov    rsi,QWORD PTR [rsp+0x40]
  9cfda7:	48 8b 54 24 48       	mov    rdx,QWORD PTR [rsp+0x48]
  9cfdac:	48 8d bc 24 e0 0e 00 	lea    rdi,[rsp+0xee0]
  9cfdb3:	00 
  9cfdb4:	e8 d7 96 ff ff       	call   9c9490 <future_backtest::RunnerCore::MetaRunState::apply_due>
  9cfdb9:	49 89 c7             	mov    r15,rax
  9cfdbc:	48 85 c0             	test   rax,rax
  9cfdbf:	0f 85 db 30 00 00    	jne    9d2ea0 <future_backtest::RunnerCore::run_multi+0x7bf0>
  9cfdc5:	48 8b 9c 24 a0 03 00 	mov    rbx,QWORD PTR [rsp+0x3a0]
  9cfdcc:	00 
  9cfdcd:	48 89 d8             	mov    rax,rbx
  9cfdd0:	48 b9 00 00 00 00 00 	movabs rcx,0x8000000000000000
  9cfdd7:	00 00 80 
  9cfdda:	48 31 c8             	xor    rax,rcx
  9cfddd:	48 85 db             	test   rbx,rbx
  9cfde0:	b9 01 00 00 00       	mov    ecx,0x1
  9cfde5:	48 0f 49 c1          	cmovns rax,rcx
  9cfde9:	48 83 f8 01          	cmp    rax,0x1
  9cfded:	0f 84 34 05 00 00    	je     9d0327 <future_backtest::RunnerCore::run_multi+0x5077>
  9cfdf3:	48 83 f8 02          	cmp    rax,0x2
  9cfdf7:	4c 8d a4 24 10 06 00 	lea    r12,[rsp+0x610]
  9cfdfe:	00 
  9cfdff:	0f 85 ee 1f 00 00    	jne    9d1df3 <future_backtest::RunnerCore::run_multi+0x6b43>
  9cfe05:	48 83 bc 24 a8 00 00 	cmp    QWORD PTR [rsp+0xa8],0x0
  9cfe0c:	00 00 
  9cfe0e:	0f 84 df 1f 00 00    	je     9d1df3 <future_backtest::RunnerCore::run_multi+0x6b43>
  9cfe14:	31 db                	xor    ebx,ebx
  9cfe16:	31 ed                	xor    ebp,ebp
  9cfe18:	eb 18                	jmp    9cfe32 <future_backtest::RunnerCore::run_multi+0x4b82>
  9cfe1a:	48 81 c5 28 15 00 00 	add    rbp,0x1528
  9cfe21:	48 ff c3             	inc    rbx
  9cfe24:	48 3b 9c 24 a8 00 00 	cmp    rbx,QWORD PTR [rsp+0xa8]
  9cfe2b:	00 
  9cfe2c:	0f 83 c1 1f 00 00    	jae    9d1df3 <future_backtest::RunnerCore::run_multi+0x6b43>
  9cfe32:	48 89 9c 24 68 03 00 	mov    QWORD PTR [rsp+0x368],rbx
  9cfe39:	00 
  9cfe3a:	48 8b 74 24 48       	mov    rsi,QWORD PTR [rsp+0x48]
  9cfe3f:	48 39 f3             	cmp    rbx,rsi
  9cfe42:	0f 83 a4 40 00 00    	jae    9d3eec <future_backtest::RunnerCore::run_multi+0x8c3c>
  9cfe48:	48 8b 7c 24 40       	mov    rdi,QWORD PTR [rsp+0x40]
  9cfe4d:	48 01 ef             	add    rdi,rbp
  9cfe50:	48 8d b4 24 a0 03 00 	lea    rsi,[rsp+0x3a0]
  9cfe57:	00 
  9cfe58:	ff 15 0a 72 fd 00    	call   QWORD PTR [rip+0xfd720a]        # 19a7068 <_DYNAMIC+0x868>
  9cfe5e:	48 8b 74 24 48       	mov    rsi,QWORD PTR [rsp+0x48]
  9cfe63:	48 8b 94 24 68 03 00 	mov    rdx,QWORD PTR [rsp+0x368]
  9cfe6a:	00 
  9cfe6b:	48 39 f2             	cmp    rdx,rsi
  9cfe6e:	0f 83 66 40 00 00    	jae    9d3eda <future_backtest::RunnerCore::run_multi+0x8c2a>
  9cfe74:	48 69 f2 28 15 00 00 	imul   rsi,rdx,0x1528
  9cfe7b:	48 03 74 24 40       	add    rsi,QWORD PTR [rsp+0x40]
  9cfe80:	83 bc 24 e0 0e 00 00 	cmp    DWORD PTR [rsp+0xee0],0x2
  9cfe87:	02 
  9cfe88:	48 8d 8c 24 e0 0e 00 	lea    rcx,[rsp+0xee0]
  9cfe8f:	00 
  9cfe90:	b8 00 00 00 00       	mov    eax,0x0
  9cfe95:	48 0f 44 c8          	cmove  rcx,rax
  9cfe99:	44 0f b6 84 24 50 04 	movzx  r8d,BYTE PTR [rsp+0x450]
  9cfea0:	00 00 
  9cfea2:	4c 89 e7             	mov    rdi,r12
  9cfea5:	e8 46 af ff ff       	call   9cadf0 <future_backtest::RunnerCore::make_ffi_ctx>
  9cfeaa:	4c 8b b4 24 10 06 00 	mov    r14,QWORD PTR [rsp+0x610]
  9cfeb1:	00 
  9cfeb2:	4c 8b bc 24 18 06 00 	mov    r15,QWORD PTR [rsp+0x618]
  9cfeb9:	00 
  9cfeba:	49 83 fe 03          	cmp    r14,0x3
  9cfebe:	0f 84 dc 2f 00 00    	je     9d2ea0 <future_backtest::RunnerCore::run_multi+0x7bf0>
  9cfec4:	ba e8 00 00 00       	mov    edx,0xe8
  9cfec9:	48 8d bc 24 d0 01 00 	lea    rdi,[rsp+0x1d0]
  9cfed0:	00 
  9cfed1:	48 8d b4 24 20 06 00 	lea    rsi,[rsp+0x620]
  9cfed8:	00 
  9cfed9:	ff 15 69 6c fd 00    	call   QWORD PTR [rip+0xfd6c69]        # 19a6b48 <memcpy@GLIBC_2.14>
  9cfedf:	4c 89 b4 24 c0 01 00 	mov    QWORD PTR [rsp+0x1c0],r14
  9cfee6:	00 
  9cfee7:	4c 89 bc 24 c8 01 00 	mov    QWORD PTR [rsp+0x1c8],r15
  9cfeee:	00 
  9cfeef:	48 8b b4 24 b0 03 00 	mov    rsi,QWORD PTR [rsp+0x3b0]
  9cfef6:	00 
  9cfef7:	48 8b 94 24 b8 03 00 	mov    rdx,QWORD PTR [rsp+0x3b8]
  9cfefe:	00 
  9cfeff:	4c 89 e7             	mov    rdi,r12
  9cff02:	ff 15 00 86 fd 00    	call   QWORD PTR [rip+0xfd8600]        # 19a8508 <_DYNAMIC+0x1d08>
  9cff08:	4c 8b b4 24 10 06 00 	mov    r14,QWORD PTR [rsp+0x610]
  9cff0f:	00 
  9cff10:	48 b8 00 00 00 00 00 	movabs rax,0x8000000000000000
  9cff17:	00 00 80 
  9cff1a:	49 39 c6             	cmp    r14,rax
  9cff1d:	75 1f                	jne    9cff3e <future_backtest::RunnerCore::run_multi+0x4c8e>
  9cff1f:	48 8b 84 24 18 06 00 	mov    rax,QWORD PTR [rsp+0x618]
  9cff26:	00 
  9cff27:	48 89 44 24 50       	mov    QWORD PTR [rsp+0x50],rax
  9cff2c:	48 8b 84 24 20 06 00 	mov    rax,QWORD PTR [rsp+0x620]
  9cff33:	00 
  9cff34:	48 89 84 24 90 00 00 	mov    QWORD PTR [rsp+0x90],rax
  9cff3b:	00 
  9cff3c:	eb 2e                	jmp    9cff6c <future_backtest::RunnerCore::run_multi+0x4cbc>
  9cff3e:	ff 15 84 84 fd 00    	call   QWORD PTR [rip+0xfd8484]        # 19a83c8 <_DYNAMIC+0x1bc8>
  9cff44:	48 89 94 24 90 00 00 	mov    QWORD PTR [rsp+0x90],rdx
  9cff4b:	00 
  9cff4c:	48 89 44 24 50       	mov    QWORD PTR [rsp+0x50],rax
  9cff51:	4d 85 f6             	test   r14,r14
  9cff54:	74 16                	je     9cff6c <future_backtest::RunnerCore::run_multi+0x4cbc>
  9cff56:	48 8b bc 24 18 06 00 	mov    rdi,QWORD PTR [rsp+0x618]
  9cff5d:	00 
  9cff5e:	ba 01 00 00 00       	mov    edx,0x1
  9cff63:	4c 89 f6             	mov    rsi,r14
  9cff66:	ff 15 b4 6a fd 00    	call   QWORD PTR [rip+0xfd6ab4]        # 19a6a20 <_DYNAMIC+0x220>
  9cff6c:	48 8b b4 24 c8 03 00 	mov    rsi,QWORD PTR [rsp+0x3c8]
  9cff73:	00 
  9cff74:	48 8b 94 24 d0 03 00 	mov    rdx,QWORD PTR [rsp+0x3d0]
  9cff7b:	00 
  9cff7c:	4c 89 e7             	mov    rdi,r12
  9cff7f:	ff 15 83 85 fd 00    	call   QWORD PTR [rip+0xfd8583]        # 19a8508 <_DYNAMIC+0x1d08>
  9cff85:	4c 8b b4 24 10 06 00 	mov    r14,QWORD PTR [rsp+0x610]
  9cff8c:	00 
  9cff8d:	48 b8 00 00 00 00 00 	movabs rax,0x8000000000000000
  9cff94:	00 00 80 
  9cff97:	49 39 c6             	cmp    r14,rax
  9cff9a:	75 1c                	jne    9cffb8 <future_backtest::RunnerCore::run_multi+0x4d08>
  9cff9c:	48 8b 84 24 18 06 00 	mov    rax,QWORD PTR [rsp+0x618]
  9cffa3:	00 
  9cffa4:	48 89 44 24 70       	mov    QWORD PTR [rsp+0x70],rax
  9cffa9:	48 8b 84 24 20 06 00 	mov    rax,QWORD PTR [rsp+0x620]
  9cffb0:	00 
  9cffb1:	48 89 44 24 60       	mov    QWORD PTR [rsp+0x60],rax
  9cffb6:	eb 2b                	jmp    9cffe3 <future_backtest::RunnerCore::run_multi+0x4d33>
  9cffb8:	ff 15 0a 84 fd 00    	call   QWORD PTR [rip+0xfd840a]        # 19a83c8 <_DYNAMIC+0x1bc8>
  9cffbe:	48 89 54 24 60       	mov    QWORD PTR [rsp+0x60],rdx
  9cffc3:	48 89 44 24 70       	mov    QWORD PTR [rsp+0x70],rax
  9cffc8:	4d 85 f6             	test   r14,r14
  9cffcb:	74 16                	je     9cffe3 <future_backtest::RunnerCore::run_multi+0x4d33>
  9cffcd:	48 8b bc 24 18 06 00 	mov    rdi,QWORD PTR [rsp+0x618]
  9cffd4:	00 
  9cffd5:	ba 01 00 00 00       	mov    edx,0x1
  9cffda:	4c 89 f6             	mov    rsi,r14
  9cffdd:	ff 15 3d 6a fd 00    	call   QWORD PTR [rip+0xfd6a3d]        # 19a6a20 <_DYNAMIC+0x220>
  9cffe3:	48 8b b4 24 e0 03 00 	mov    rsi,QWORD PTR [rsp+0x3e0]
  9cffea:	00 
  9cffeb:	48 8b 94 24 e8 03 00 	mov    rdx,QWORD PTR [rsp+0x3e8]
  9cfff2:	00 
  9cfff3:	4c 89 e7             	mov    rdi,r12
  9cfff6:	ff 15 0c 85 fd 00    	call   QWORD PTR [rip+0xfd850c]        # 19a8508 <_DYNAMIC+0x1d08>
  9cfffc:	4c 8b b4 24 10 06 00 	mov    r14,QWORD PTR [rsp+0x610]
  9d0003:	00 
  9d0004:	48 b8 00 00 00 00 00 	movabs rax,0x8000000000000000
  9d000b:	00 00 80 
  9d000e:	49 39 c6             	cmp    r14,rax
  9d0011:	75 1a                	jne    9d002d <future_backtest::RunnerCore::run_multi+0x4d7d>
  9d0013:	4c 8b bc 24 18 06 00 	mov    r15,QWORD PTR [rsp+0x618]
  9d001a:	00 
  9d001b:	48 8b 84 24 20 06 00 	mov    rax,QWORD PTR [rsp+0x620]
  9d0022:	00 
  9d0023:	48 89 84 24 a0 00 00 	mov    QWORD PTR [rsp+0xa0],rax
  9d002a:	00 
  9d002b:	eb 2c                	jmp    9d0059 <future_backtest::RunnerCore::run_multi+0x4da9>
  9d002d:	ff 15 95 83 fd 00    	call   QWORD PTR [rip+0xfd8395]        # 19a83c8 <_DYNAMIC+0x1bc8>
  9d0033:	49 89 c7             	mov    r15,rax
  9d0036:	48 89 94 24 a0 00 00 	mov    QWORD PTR [rsp+0xa0],rdx
  9d003d:	00 
  9d003e:	4d 85 f6             	test   r14,r14
  9d0041:	74 16                	je     9d0059 <future_backtest::RunnerCore::run_multi+0x4da9>
  9d0043:	48 8b bc 24 18 06 00 	mov    rdi,QWORD PTR [rsp+0x618]
  9d004a:	00 
  9d004b:	ba 01 00 00 00       	mov    edx,0x1
  9d0050:	4c 89 f6             	mov    rsi,r14
  9d0053:	ff 15 c7 69 fd 00    	call   QWORD PTR [rip+0xfd69c7]        # 19a6a20 <_DYNAMIC+0x220>
  9d0059:	48 8b b4 24 f8 03 00 	mov    rsi,QWORD PTR [rsp+0x3f8]
  9d0060:	00 
  9d0061:	48 8b 94 24 00 04 00 	mov    rdx,QWORD PTR [rsp+0x400]
  9d0068:	00 
  9d0069:	4c 89 e7             	mov    rdi,r12
  9d006c:	ff 15 96 84 fd 00    	call   QWORD PTR [rip+0xfd8496]        # 19a8508 <_DYNAMIC+0x1d08>
  9d0072:	4c 8b a4 24 10 06 00 	mov    r12,QWORD PTR [rsp+0x610]
  9d0079:	00 
  9d007a:	48 b8 00 00 00 00 00 	movabs rax,0x8000000000000000
  9d0081:	00 00 80 
  9d0084:	49 39 c4             	cmp    r12,rax
  9d0087:	75 12                	jne    9d009b <future_backtest::RunnerCore::run_multi+0x4deb>
  9d0089:	4c 8b b4 24 18 06 00 	mov    r14,QWORD PTR [rsp+0x618]
  9d0090:	00 
  9d0091:	4c 8b ac 24 20 06 00 	mov    r13,QWORD PTR [rsp+0x620]
  9d0098:	00 
  9d0099:	eb 27                	jmp    9d00c2 <future_backtest::RunnerCore::run_multi+0x4e12>
  9d009b:	ff 15 27 83 fd 00    	call   QWORD PTR [rip+0xfd8327]        # 19a83c8 <_DYNAMIC+0x1bc8>
  9d00a1:	49 89 c6             	mov    r14,rax
  9d00a4:	49 89 d5             	mov    r13,rdx
  9d00a7:	4d 85 e4             	test   r12,r12
  9d00aa:	74 16                	je     9d00c2 <future_backtest::RunnerCore::run_multi+0x4e12>
  9d00ac:	48 8b bc 24 18 06 00 	mov    rdi,QWORD PTR [rsp+0x618]
  9d00b3:	00 
  9d00b4:	ba 01 00 00 00       	mov    edx,0x1
  9d00b9:	4c 89 e6             	mov    rsi,r12
  9d00bc:	ff 15 5e 69 fd 00    	call   QWORD PTR [rip+0xfd695e]        # 19a6a20 <_DYNAMIC+0x220>
  9d00c2:	f3 0f 10 84 24 4c 04 	movss  xmm0,DWORD PTR [rsp+0x44c]
  9d00c9:	00 00 
  9d00cb:	0f b6 84 24 50 04 00 	movzx  eax,BYTE PTR [rsp+0x450]
  9d00d2:	00 
  9d00d3:	f3 0f 6f 8c 24 18 04 	movdqu xmm1,XMMWORD PTR [rsp+0x418]
  9d00da:	00 00 
  9d00dc:	f3 0f 6f 94 24 28 04 	movdqu xmm2,XMMWORD PTR [rsp+0x428]
  9d00e3:	00 00 
  9d00e5:	f3 0f 6f 9c 24 38 04 	movdqu xmm3,XMMWORD PTR [rsp+0x438]
  9d00ec:	00 00 
  9d00ee:	66 0f 7f 8c 24 10 06 	movdqa XMMWORD PTR [rsp+0x610],xmm1
  9d00f5:	00 00 
  9d00f7:	48 8b 4c 24 50       	mov    rcx,QWORD PTR [rsp+0x50]
  9d00fc:	48 89 8c 24 20 06 00 	mov    QWORD PTR [rsp+0x620],rcx
  9d0103:	00 
  9d0104:	48 8b 4c 24 70       	mov    rcx,QWORD PTR [rsp+0x70]
  9d0109:	48 89 8c 24 28 06 00 	mov    QWORD PTR [rsp+0x628],rcx
  9d0110:	00 
  9d0111:	66 0f 7f 9c 24 30 06 	movdqa XMMWORD PTR [rsp+0x630],xmm3
  9d0118:	00 00 
  9d011a:	f3 0f 11 84 24 40 06 	movss  DWORD PTR [rsp+0x640],xmm0
  9d0121:	00 00 
  9d0123:	4c 89 bc 24 48 06 00 	mov    QWORD PTR [rsp+0x648],r15
  9d012a:	00 
  9d012b:	4c 89 b4 24 50 06 00 	mov    QWORD PTR [rsp+0x650],r14
  9d0132:	00 
  9d0133:	88 84 24 58 06 00 00 	mov    BYTE PTR [rsp+0x658],al
  9d013a:	66 0f 7f 94 24 60 06 	movdqa XMMWORD PTR [rsp+0x660],xmm2
  9d0141:	00 00 
  9d0143:	48 8b b4 24 f8 00 00 	mov    rsi,QWORD PTR [rsp+0xf8]
  9d014a:	00 
  9d014b:	48 8b bc 24 68 03 00 	mov    rdi,QWORD PTR [rsp+0x368]
  9d0152:	00 
  9d0153:	48 39 f7             	cmp    rdi,rsi
  9d0156:	4c 8d a4 24 10 06 00 	lea    r12,[rsp+0x610]
  9d015d:	00 
  9d015e:	0f 83 9e 3d 00 00    	jae    9d3f02 <future_backtest::RunnerCore::run_multi+0x8c52>
  9d0164:	48 8b 84 24 f0 00 00 	mov    rax,QWORD PTR [rsp+0xf0]
  9d016b:	00 
  9d016c:	48 8b 04 f8          	mov    rax,QWORD PTR [rax+rdi*8]
  9d0170:	48 8b 38             	mov    rdi,QWORD PTR [rax]
  9d0173:	4c 89 e6             	mov    rsi,r12
  9d0176:	48 8d 94 24 c0 01 00 	lea    rdx,[rsp+0x1c0]
  9d017d:	00 
  9d017e:	ff 50 10             	call   QWORD PTR [rax+0x10]
  9d0181:	89 84 24 98 03 00 00 	mov    DWORD PTR [rsp+0x398],eax
  9d0188:	85 c0                	test   eax,eax
  9d018a:	0f 89 ae 00 00 00    	jns    9d023e <future_backtest::RunnerCore::run_multi+0x4f8e>
  9d0190:	48 8d 84 24 68 03 00 	lea    rax,[rsp+0x368]
  9d0197:	00 
  9d0198:	48 89 84 24 00 05 00 	mov    QWORD PTR [rsp+0x500],rax
  9d019f:	00 
  9d01a0:	48 8b 05 49 6c fd 00 	mov    rax,QWORD PTR [rip+0xfd6c49]        # 19a6df0 <_DYNAMIC+0x5f0>
  9d01a7:	48 89 84 24 08 05 00 	mov    QWORD PTR [rsp+0x508],rax
  9d01ae:	00 
  9d01af:	48 8d 84 24 98 03 00 	lea    rax,[rsp+0x398]
  9d01b6:	00 
  9d01b7:	48 89 84 24 10 05 00 	mov    QWORD PTR [rsp+0x510],rax
  9d01be:	00 
  9d01bf:	48 8b 05 12 73 fd 00 	mov    rax,QWORD PTR [rip+0xfd7312]        # 19a74d8 <_DYNAMIC+0xcd8>
  9d01c6:	48 89 84 24 18 05 00 	mov    QWORD PTR [rsp+0x518],rax
  9d01cd:	00 
  9d01ce:	48 8d 84 24 18 04 00 	lea    rax,[rsp+0x418]
  9d01d5:	00 
  9d01d6:	48 89 84 24 20 05 00 	mov    QWORD PTR [rsp+0x520],rax
  9d01dd:	00 
  9d01de:	48 8b 05 83 73 fd 00 	mov    rax,QWORD PTR [rip+0xfd7383]        # 19a7568 <_DYNAMIC+0xd68>
  9d01e5:	48 89 84 24 28 05 00 	mov    QWORD PTR [rsp+0x528],rax
  9d01ec:	00 
  9d01ed:	48 8d 05 b4 c3 f2 00 	lea    rax,[rip+0xf2c3b4]        # 18fc5a8 <anon.609a31ba814f1e4156e50677fc366a7f.492.llvm.5215769359700358943+0xfb0>
  9d01f4:	48 89 84 24 40 01 00 	mov    QWORD PTR [rsp+0x140],rax
  9d01fb:	00 
  9d01fc:	48 c7 84 24 48 01 00 	mov    QWORD PTR [rsp+0x148],0x4
  9d0203:	00 04 00 00 00 
  9d0208:	48 c7 84 24 60 01 00 	mov    QWORD PTR [rsp+0x160],0x0
  9d020f:	00 00 00 00 00 
  9d0214:	48 8d 84 24 00 05 00 	lea    rax,[rsp+0x500]
  9d021b:	00 
  9d021c:	48 89 84 24 50 01 00 	mov    QWORD PTR [rsp+0x150],rax
  9d0223:	00 
  9d0224:	48 c7 84 24 58 01 00 	mov    QWORD PTR [rsp+0x158],0x3
  9d022b:	00 03 00 00 00 
  9d0230:	48 8d bc 24 40 01 00 	lea    rdi,[rsp+0x140]
  9d0237:	00 
  9d0238:	ff 15 b2 70 fd 00    	call   QWORD PTR [rip+0xfd70b2]        # 19a72f0 <_DYNAMIC+0xaf0>
  9d023e:	48 8b 7c 24 50       	mov    rdi,QWORD PTR [rsp+0x50]
  9d0243:	c6 07 00             	mov    BYTE PTR [rdi],0x0
  9d0246:	48 8b b4 24 90 00 00 	mov    rsi,QWORD PTR [rsp+0x90]
  9d024d:	00 
  9d024e:	48 85 f6             	test   rsi,rsi
  9d0251:	74 0b                	je     9d025e <future_backtest::RunnerCore::run_multi+0x4fae>
  9d0253:	ba 01 00 00 00       	mov    edx,0x1
  9d0258:	ff 15 c2 67 fd 00    	call   QWORD PTR [rip+0xfd67c2]        # 19a6a20 <_DYNAMIC+0x220>
  9d025e:	48 8b 7c 24 70       	mov    rdi,QWORD PTR [rsp+0x70]
  9d0263:	c6 07 00             	mov    BYTE PTR [rdi],0x0
  9d0266:	48 8b 74 24 60       	mov    rsi,QWORD PTR [rsp+0x60]
  9d026b:	48 85 f6             	test   rsi,rsi
  9d026e:	74 0b                	je     9d027b <future_backtest::RunnerCore::run_multi+0x4fcb>
  9d0270:	ba 01 00 00 00       	mov    edx,0x1
  9d0275:	ff 15 a5 67 fd 00    	call   QWORD PTR [rip+0xfd67a5]        # 19a6a20 <_DYNAMIC+0x220>
  9d027b:	41 c6 07 00          	mov    BYTE PTR [r15],0x0
  9d027f:	48 8b b4 24 a0 00 00 	mov    rsi,QWORD PTR [rsp+0xa0]
  9d0286:	00 
  9d0287:	48 85 f6             	test   rsi,rsi
  9d028a:	74 0e                	je     9d029a <future_backtest::RunnerCore::run_multi+0x4fea>
  9d028c:	ba 01 00 00 00       	mov    edx,0x1
  9d0291:	4c 89 ff             	mov    rdi,r15
  9d0294:	ff 15 86 67 fd 00    	call   QWORD PTR [rip+0xfd6786]        # 19a6a20 <_DYNAMIC+0x220>
  9d029a:	41 c6 06 00          	mov    BYTE PTR [r14],0x0
  9d029e:	4d 85 ed             	test   r13,r13
  9d02a1:	74 11                	je     9d02b4 <future_backtest::RunnerCore::run_multi+0x5004>
  9d02a3:	ba 01 00 00 00       	mov    edx,0x1
  9d02a8:	4c 89 f7             	mov    rdi,r14
  9d02ab:	4c 89 ee             	mov    rsi,r13
  9d02ae:	ff 15 6c 67 fd 00    	call   QWORD PTR [rip+0xfd676c]        # 19a6a20 <_DYNAMIC+0x220>
  9d02b4:	48 8b b4 24 90 02 00 	mov    rsi,QWORD PTR [rsp+0x290]
  9d02bb:	00 
  9d02bc:	48 85 f6             	test   rsi,rsi
  9d02bf:	74 13                	je     9d02d4 <future_backtest::RunnerCore::run_multi+0x5024>
  9d02c1:	48 8b bc 24 98 02 00 	mov    rdi,QWORD PTR [rsp+0x298]
  9d02c8:	00 
  9d02c9:	ba 01 00 00 00       	mov    edx,0x1
  9d02ce:	ff 15 4c 67 fd 00    	call   QWORD PTR [rip+0xfd674c]        # 19a6a20 <_DYNAMIC+0x220>
  9d02d4:	83 bc 24 c0 01 00 00 	cmp    DWORD PTR [rsp+0x1c0],0x2
  9d02db:	02 
  9d02dc:	0f 84 38 fb ff ff    	je     9cfe1a <future_backtest::RunnerCore::run_multi+0x4b6a>
  9d02e2:	48 8b b4 24 28 02 00 	mov    rsi,QWORD PTR [rsp+0x228]
  9d02e9:	00 
  9d02ea:	48 85 f6             	test   rsi,rsi
  9d02ed:	74 13                	je     9d0302 <future_backtest::RunnerCore::run_multi+0x5052>
  9d02ef:	48 8b bc 24 30 02 00 	mov    rdi,QWORD PTR [rsp+0x230]
  9d02f6:	00 
  9d02f7:	ba 01 00 00 00       	mov    edx,0x1
  9d02fc:	ff 15 1e 67 fd 00    	call   QWORD PTR [rip+0xfd671e]        # 19a6a20 <_DYNAMIC+0x220>
  9d0302:	48 8b 84 24 40 02 00 	mov    rax,QWORD PTR [rsp+0x240]
  9d0309:	00 
  9d030a:	f0 48 ff 08          	lock dec QWORD PTR [rax]
  9d030e:	0f 85 06 fb ff ff    	jne    9cfe1a <future_backtest::RunnerCore::run_multi+0x4b6a>
  9d0314:	48 8d bc 24 40 02 00 	lea    rdi,[rsp+0x240]
  9d031b:	00 
  9d031c:	ff 15 66 71 fd 00    	call   QWORD PTR [rip+0xfd7166]        # 19a7488 <_DYNAMIC+0xc88>
  9d0322:	e9 f3 fa ff ff       	jmp    9cfe1a <future_backtest::RunnerCore::run_multi+0x4b6a>
  9d0327:	48 8d bc 24 70 03 00 	lea    rdi,[rsp+0x370]
  9d032e:	00 
  9d032f:	48 8d b4 24 a0 03 00 	lea    rsi,[rsp+0x3a0]
  9d0336:	00 
  9d0337:	48 8d 15 22 be f2 00 	lea    rdx,[rip+0xf2be22]        # 18fc160 <anon.609a31ba814f1e4156e50677fc366a7f.492.llvm.5215769359700358943+0xb68>
  9d033e:	ff 15 3c 69 fd 00    	call   QWORD PTR [rip+0xfd693c]        # 19a6c80 <_DYNAMIC+0x480>
  9d0344:	48 8b 44 24 18       	mov    rax,QWORD PTR [rsp+0x18]
  9d0349:	48 83 78 10 00       	cmp    QWORD PTR [rax+0x10],0x0
  9d034e:	0f 85 9a 3e 00 00    	jne    9d41ee <future_backtest::RunnerCore::run_multi+0x8f3e>
  9d0354:	48 8b 44 24 18       	mov    rax,QWORD PTR [rsp+0x18]
  9d0359:	48 c7 40 10 ff ff ff 	mov    QWORD PTR [rax+0x10],0xffffffffffffffff
  9d0360:	ff 
  9d0361:	0f 10 84 24 b8 03 00 	movups xmm0,XMMWORD PTR [rsp+0x3b8]
  9d0368:	00 
  9d0369:	0f 29 44 24 50       	movaps XMMWORD PTR [rsp+0x50],xmm0
  9d036e:	0f 10 84 24 c8 03 00 	movups xmm0,XMMWORD PTR [rsp+0x3c8]
  9d0375:	00 
  9d0376:	0f 29 44 24 70       	movaps XMMWORD PTR [rsp+0x70],xmm0
  9d037b:	f2 0f 10 84 24 d8 03 	movsd  xmm0,QWORD PTR [rsp+0x3d8]
  9d0382:	00 00 
  9d0384:	f2 0f 11 84 24 90 00 	movsd  QWORD PTR [rsp+0x90],xmm0
  9d038b:	00 00 
  9d038d:	48 8d bc 24 c0 01 00 	lea    rdi,[rsp+0x1c0]
  9d0394:	00 
  9d0395:	48 8d b4 24 a0 03 00 	lea    rsi,[rsp+0x3a0]
  9d039c:	00 
  9d039d:	48 8d 15 04 ac f2 00 	lea    rdx,[rip+0xf2ac04]        # 18fafa8 <anon.609a31ba814f1e4156e50677fc366a7f.248.llvm.5215769359700358943+0x9e0>
  9d03a4:	ff 15 d6 68 fd 00    	call   QWORD PTR [rip+0xfd68d6]        # 19a6c80 <_DYNAMIC+0x480>
  9d03aa:	0f b6 84 24 c0 04 00 	movzx  eax,BYTE PTR [rsp+0x4c0]
  9d03b1:	00 
  9d03b2:	48 8d 8c 24 a8 03 00 	lea    rcx,[rsp+0x3a8]
  9d03b9:	00 
  9d03ba:	0f 10 41 78          	movups xmm0,XMMWORD PTR [rcx+0x78]
  9d03be:	48 8d 94 24 20 06 00 	lea    rdx,[rsp+0x620]
  9d03c5:	00 
  9d03c6:	0f 11 42 70          	movups XMMWORD PTR [rdx+0x70],xmm0
  9d03ca:	0f 10 41 38          	movups xmm0,XMMWORD PTR [rcx+0x38]
  9d03ce:	0f 10 49 48          	movups xmm1,XMMWORD PTR [rcx+0x48]
  9d03d2:	0f 10 51 58          	movups xmm2,XMMWORD PTR [rcx+0x58]
  9d03d6:	0f 10 59 68          	movups xmm3,XMMWORD PTR [rcx+0x68]
  9d03da:	0f 11 5a 60          	movups XMMWORD PTR [rdx+0x60],xmm3
  9d03de:	0f 11 52 50          	movups XMMWORD PTR [rdx+0x50],xmm2
  9d03e2:	0f 11 4a 40          	movups XMMWORD PTR [rdx+0x40],xmm1
  9d03e6:	0f 11 42 30          	movups XMMWORD PTR [rdx+0x30],xmm0
  9d03ea:	0f 10 81 c8 00 00 00 	movups xmm0,XMMWORD PTR [rcx+0xc8]
  9d03f1:	0f 11 82 c0 00 00 00 	movups XMMWORD PTR [rdx+0xc0],xmm0
  9d03f8:	0f 10 81 88 00 00 00 	movups xmm0,XMMWORD PTR [rcx+0x88]
  9d03ff:	f3 0f 6f 89 98 00 00 	movdqu xmm1,XMMWORD PTR [rcx+0x98]
  9d0406:	00 
  9d0407:	f3 0f 6f 91 a8 00 00 	movdqu xmm2,XMMWORD PTR [rcx+0xa8]
  9d040e:	00 
  9d040f:	f3 0f 6f 99 b8 00 00 	movdqu xmm3,XMMWORD PTR [rcx+0xb8]
  9d0416:	00 
  9d0417:	f3 0f 7f 9a b0 00 00 	movdqu XMMWORD PTR [rdx+0xb0],xmm3
  9d041e:	00 
  9d041f:	f3 0f 7f 92 a0 00 00 	movdqu XMMWORD PTR [rdx+0xa0],xmm2
  9d0426:	00 
  9d0427:	f3 0f 7f 8a 90 00 00 	movdqu XMMWORD PTR [rdx+0x90],xmm1
  9d042e:	00 
  9d042f:	0f 11 82 80 00 00 00 	movups XMMWORD PTR [rdx+0x80],xmm0
  9d0436:	0f b6 8c 24 c1 04 00 	movzx  ecx,BYTE PTR [rsp+0x4c1]
  9d043d:	00 
  9d043e:	0f 28 44 24 50       	movaps xmm0,XMMWORD PTR [rsp+0x50]
  9d0443:	0f 11 84 24 28 06 00 	movups XMMWORD PTR [rsp+0x628],xmm0
  9d044a:	00 
  9d044b:	0f 28 44 24 70       	movaps xmm0,XMMWORD PTR [rsp+0x70]
  9d0450:	0f 11 84 24 38 06 00 	movups XMMWORD PTR [rsp+0x638],xmm0
  9d0457:	00 
  9d0458:	f2 0f 10 84 24 90 00 	movsd  xmm0,QWORD PTR [rsp+0x90]
  9d045f:	00 00 
  9d0461:	f2 0f 11 84 24 48 06 	movsd  QWORD PTR [rsp+0x648],xmm0
  9d0468:	00 00 
  9d046a:	0f 10 84 24 c0 01 00 	movups xmm0,XMMWORD PTR [rsp+0x1c0]
  9d0471:	00 
  9d0472:	0f 29 84 24 10 06 00 	movaps XMMWORD PTR [rsp+0x610],xmm0
  9d0479:	00 
  9d047a:	48 8b 94 24 d0 01 00 	mov    rdx,QWORD PTR [rsp+0x1d0]
  9d0481:	00 
  9d0482:	48 89 94 24 20 06 00 	mov    QWORD PTR [rsp+0x620],rdx
  9d0489:	00 
  9d048a:	88 84 24 30 07 00 00 	mov    BYTE PTR [rsp+0x730],al
  9d0491:	0f 10 84 24 80 04 00 	movups xmm0,XMMWORD PTR [rsp+0x480]
  9d0498:	00 
  9d0499:	0f 29 84 24 f0 06 00 	movaps XMMWORD PTR [rsp+0x6f0],xmm0
  9d04a0:	00 
  9d04a1:	0f 10 84 24 90 04 00 	movups xmm0,XMMWORD PTR [rsp+0x490]
  9d04a8:	00 
  9d04a9:	0f 29 84 24 00 07 00 	movaps XMMWORD PTR [rsp+0x700],xmm0
  9d04b0:	00 
  9d04b1:	0f 10 84 24 a0 04 00 	movups xmm0,XMMWORD PTR [rsp+0x4a0]
  9d04b8:	00 
  9d04b9:	0f 29 84 24 10 07 00 	movaps XMMWORD PTR [rsp+0x710],xmm0
  9d04c0:	00 
  9d04c1:	66 0f 10 84 24 b0 04 	movupd xmm0,XMMWORD PTR [rsp+0x4b0]
  9d04c8:	00 00 
  9d04ca:	66 0f 29 84 24 20 07 	movapd XMMWORD PTR [rsp+0x720],xmm0
  9d04d1:	00 00 
  9d04d3:	88 8c 24 31 07 00 00 	mov    BYTE PTR [rsp+0x731],cl
  9d04da:	48 8b bc 24 80 00 00 	mov    rdi,QWORD PTR [rsp+0x80]
  9d04e1:	00 
  9d04e2:	48 8d b4 24 10 06 00 	lea    rsi,[rsp+0x610]
  9d04e9:	00 
  9d04ea:	ff 15 08 7a fd 00    	call   QWORD PTR [rip+0xfd7a08]        # 19a7ef8 <_DYNAMIC+0x16f8>
  9d04f0:	49 89 c7             	mov    r15,rax
  9d04f3:	48 8b 44 24 18       	mov    rax,QWORD PTR [rsp+0x18]
  9d04f8:	48 ff 40 10          	inc    QWORD PTR [rax+0x10]
  9d04fc:	4d 85 ff             	test   r15,r15
  9d04ff:	0f 85 7b 29 00 00    	jne    9d2e80 <future_backtest::RunnerCore::run_multi+0x7bd0>
  9d0505:	48 8b 7c 24 40       	mov    rdi,QWORD PTR [rsp+0x40]
  9d050a:	48 69 5c 24 48 28 15 	imul   rbx,QWORD PTR [rsp+0x48],0x1528
  9d0511:	00 00 
  9d0513:	48 01 fb             	add    rbx,rdi
  9d0516:	4c 8b 25 53 6c fd 00 	mov    r12,QWORD PTR [rip+0xfd6c53]        # 19a7170 <_DYNAMIC+0x970>
  9d051d:	4c 8d b7 28 15 00 00 	lea    r14,[rdi+0x1528]
  9d0524:	48 39 df             	cmp    rdi,rbx
  9d0527:	4c 0f 44 f7          	cmove  r14,rdi
  9d052b:	74 13                	je     9d0540 <future_backtest::RunnerCore::run_multi+0x5290>
  9d052d:	41 ff d4             	call   r12
  9d0530:	49 89 c7             	mov    r15,rax
  9d0533:	4c 89 f7             	mov    rdi,r14
  9d0536:	48 85 c0             	test   rax,rax
  9d0539:	74 e2                	je     9d051d <future_backtest::RunnerCore::run_multi+0x526d>
  9d053b:	e9 40 29 00 00       	jmp    9d2e80 <future_backtest::RunnerCore::run_multi+0x7bd0>
  9d0540:	83 bc 24 e0 0e 00 00 	cmp    DWORD PTR [rsp+0xee0],0x2
  9d0547:	02 
  9d0548:	74 23                	je     9d056d <future_backtest::RunnerCore::run_multi+0x52bd>
  9d054a:	48 8b 74 24 40       	mov    rsi,QWORD PTR [rsp+0x40]
  9d054f:	48 8b 54 24 48       	mov    rdx,QWORD PTR [rsp+0x48]
  9d0554:	48 8d bc 24 e0 0e 00 	lea    rdi,[rsp+0xee0]
  9d055b:	00 
  9d055c:	e8 bf 8d ff ff       	call   9c9320 <future_backtest::RunnerCore::MetaRunState::refresh_capital>
  9d0561:	49 89 c7             	mov    r15,rax
  9d0564:	48 85 c0             	test   rax,rax
  9d0567:	0f 85 13 29 00 00    	jne    9d2e80 <future_backtest::RunnerCore::run_multi+0x7bd0>
  9d056d:	48 8b 84 24 a8 00 00 	mov    rax,QWORD PTR [rsp+0xa8]
  9d0574:	00 
  9d0575:	48 85 c0             	test   rax,rax
  9d0578:	0f 84 ce 05 00 00    	je     9d0b4c <future_backtest::RunnerCore::run_multi+0x589c>
  9d057e:	b9 01 00 00 00       	mov    ecx,0x1
  9d0583:	31 d2                	xor    edx,edx
  9d0585:	eb 26                	jmp    9d05ad <future_backtest::RunnerCore::run_multi+0x52fd>
  9d0587:	48 8b 84 24 a8 00 00 	mov    rax,QWORD PTR [rsp+0xa8]
  9d058e:	00 
  9d058f:	48 8b b4 24 10 01 00 	mov    rsi,QWORD PTR [rsp+0x110]
  9d0596:	00 
  9d0597:	48 39 c6             	cmp    rsi,rax
  9d059a:	48 89 f1             	mov    rcx,rsi
  9d059d:	48 83 d1 00          	adc    rcx,0x0
  9d05a1:	48 89 f2             	mov    rdx,rsi
  9d05a4:	48 39 c6             	cmp    rsi,rax
  9d05a7:	0f 83 9f 05 00 00    	jae    9d0b4c <future_backtest::RunnerCore::run_multi+0x589c>
  9d05ad:	48 89 8c 24 10 01 00 	mov    QWORD PTR [rsp+0x110],rcx
  9d05b4:	00 
  9d05b5:	48 89 94 24 18 03 00 	mov    QWORD PTR [rsp+0x318],rdx
  9d05bc:	00 
  9d05bd:	48 8b 5c 24 48       	mov    rbx,QWORD PTR [rsp+0x48]
  9d05c2:	48 39 da             	cmp    rdx,rbx
  9d05c5:	0f 83 38 3b 00 00    	jae    9d4103 <future_backtest::RunnerCore::run_multi+0x8e53>
  9d05cb:	48 8b 9c 24 10 03 00 	mov    rbx,QWORD PTR [rsp+0x310]
  9d05d2:	00 
  9d05d3:	48 39 da             	cmp    rdx,rbx
  9d05d6:	0f 83 cc 39 00 00    	jae    9d3fa8 <future_backtest::RunnerCore::run_multi+0x8cf8>
  9d05dc:	48 8b 4c 24 40       	mov    rcx,QWORD PTR [rsp+0x40]
  9d05e1:	48 69 f2 28 15 00 00 	imul   rsi,rdx,0x1528
  9d05e8:	4c 8b 84 31 f8 08 00 	mov    r8,QWORD PTR [rcx+rsi*1+0x8f8]
  9d05ef:	00 
  9d05f0:	48 8b bc 24 08 03 00 	mov    rdi,QWORD PTR [rsp+0x308]
  9d05f7:	00 
  9d05f8:	48 8b 14 d7          	mov    rdx,QWORD PTR [rdi+rdx*8]
  9d05fc:	49 39 d0             	cmp    r8,rdx
  9d05ff:	76 8e                	jbe    9d058f <future_backtest::RunnerCore::run_multi+0x52df>
  9d0601:	48 8b 84 31 f0 08 00 	mov    rax,QWORD PTR [rcx+rsi*1+0x8f0]
  9d0608:	00 
  9d0609:	48 69 f2 a0 02 00 00 	imul   rsi,rdx,0x2a0
  9d0610:	48 01 c6             	add    rsi,rax
  9d0613:	4c 89 84 24 40 03 00 	mov    QWORD PTR [rsp+0x340],r8
  9d061a:	00 
  9d061b:	49 69 d0 a0 02 00 00 	imul   rdx,r8,0x2a0
  9d0622:	48 01 c2             	add    rdx,rax
  9d0625:	48 8d bc 24 70 01 00 	lea    rdi,[rsp+0x170]
  9d062c:	00 
  9d062d:	48 8d 0d bc 92 f2 00 	lea    rcx,[rip+0xf292bc]        # 18f98f0 <anon.609a31ba814f1e4156e50677fc366a7f.99.llvm.5215769359700358943>
  9d0634:	e8 27 3a fb ff       	call   984060 <<alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter>
  9d0639:	48 8b b4 24 f8 00 00 	mov    rsi,QWORD PTR [rsp+0xf8]
  9d0640:	00 
  9d0641:	48 8b bc 24 18 03 00 	mov    rdi,QWORD PTR [rsp+0x318]
  9d0648:	00 
  9d0649:	48 39 f7             	cmp    rdi,rsi
  9d064c:	0f 83 b1 39 00 00    	jae    9d4003 <future_backtest::RunnerCore::run_multi+0x8d53>
  9d0652:	48 8b 84 24 80 01 00 	mov    rax,QWORD PTR [rsp+0x180]
  9d0659:	00 
  9d065a:	48 85 c0             	test   rax,rax
  9d065d:	0f 84 ba 04 00 00    	je     9d0b1d <future_backtest::RunnerCore::run_multi+0x586d>
  9d0663:	48 8b 8c 24 f0 00 00 	mov    rcx,QWORD PTR [rsp+0xf0]
  9d066a:	00 
  9d066b:	48 8b 0c f9          	mov    rcx,QWORD PTR [rcx+rdi*8]
  9d066f:	48 89 8c 24 a0 00 00 	mov    QWORD PTR [rsp+0xa0],rcx
  9d0676:	00 
  9d0677:	4c 8b a4 24 78 01 00 	mov    r12,QWORD PTR [rsp+0x178]
  9d067e:	00 
  9d067f:	48 69 c0 a0 02 00 00 	imul   rax,rax,0x2a0
  9d0686:	48 89 84 24 b8 00 00 	mov    QWORD PTR [rsp+0xb8],rax
  9d068d:	00 
  9d068e:	45 31 f6             	xor    r14d,r14d
  9d0691:	eb 15                	jmp    9d06a8 <future_backtest::RunnerCore::run_multi+0x53f8>
  9d0693:	49 81 c6 a0 02 00 00 	add    r14,0x2a0
  9d069a:	4c 39 b4 24 b8 00 00 	cmp    QWORD PTR [rsp+0xb8],r14
  9d06a1:	00 
  9d06a2:	0f 84 65 04 00 00    	je     9d0b0d <future_backtest::RunnerCore::run_multi+0x585d>
  9d06a8:	4b 8b b4 34 88 00 00 	mov    rsi,QWORD PTR [r12+r14*1+0x88]
  9d06af:	00 
  9d06b0:	4b 8b 94 34 90 00 00 	mov    rdx,QWORD PTR [r12+r14*1+0x90]
  9d06b7:	00 
  9d06b8:	48 8d bc 24 10 06 00 	lea    rdi,[rsp+0x610]
  9d06bf:	00 
  9d06c0:	ff 15 42 7e fd 00    	call   QWORD PTR [rip+0xfd7e42]        # 19a8508 <_DYNAMIC+0x1d08>
  9d06c6:	48 8b 9c 24 10 06 00 	mov    rbx,QWORD PTR [rsp+0x610]
  9d06cd:	00 
  9d06ce:	48 b8 00 00 00 00 00 	movabs rax,0x8000000000000000
  9d06d5:	00 00 80 
  9d06d8:	48 39 c3             	cmp    rbx,rax
  9d06db:	75 17                	jne    9d06f4 <future_backtest::RunnerCore::run_multi+0x5444>
  9d06dd:	4c 8b ac 24 18 06 00 	mov    r13,QWORD PTR [rsp+0x618]
  9d06e4:	00 
  9d06e5:	48 8b 84 24 20 06 00 	mov    rax,QWORD PTR [rsp+0x620]
  9d06ec:	00 
  9d06ed:	48 89 44 24 70       	mov    QWORD PTR [rsp+0x70],rax
  9d06f2:	eb 29                	jmp    9d071d <future_backtest::RunnerCore::run_multi+0x546d>
  9d06f4:	ff 15 ce 7c fd 00    	call   QWORD PTR [rip+0xfd7cce]        # 19a83c8 <_DYNAMIC+0x1bc8>
  9d06fa:	49 89 c5             	mov    r13,rax
  9d06fd:	48 89 54 24 70       	mov    QWORD PTR [rsp+0x70],rdx
  9d0702:	48 85 db             	test   rbx,rbx
  9d0705:	74 16                	je     9d071d <future_backtest::RunnerCore::run_multi+0x546d>
  9d0707:	48 8b bc 24 18 06 00 	mov    rdi,QWORD PTR [rsp+0x618]
  9d070e:	00 
  9d070f:	ba 01 00 00 00       	mov    edx,0x1
  9d0714:	48 89 de             	mov    rsi,rbx
  9d0717:	ff 15 03 63 fd 00    	call   QWORD PTR [rip+0xfd6303]        # 19a6a20 <_DYNAMIC+0x220>
  9d071d:	4b 8b 74 34 58       	mov    rsi,QWORD PTR [r12+r14*1+0x58]
  9d0722:	4b 8b 54 34 60       	mov    rdx,QWORD PTR [r12+r14*1+0x60]
  9d0727:	48 8d bc 24 10 06 00 	lea    rdi,[rsp+0x610]
  9d072e:	00 
  9d072f:	ff 15 d3 7d fd 00    	call   QWORD PTR [rip+0xfd7dd3]        # 19a8508 <_DYNAMIC+0x1d08>
  9d0735:	48 8b 9c 24 10 06 00 	mov    rbx,QWORD PTR [rsp+0x610]
  9d073c:	00 
  9d073d:	48 b8 00 00 00 00 00 	movabs rax,0x8000000000000000
  9d0744:	00 00 80 
  9d0747:	48 39 c3             	cmp    rbx,rax
  9d074a:	75 1f                	jne    9d076b <future_backtest::RunnerCore::run_multi+0x54bb>
  9d074c:	48 8b 84 24 18 06 00 	mov    rax,QWORD PTR [rsp+0x618]
  9d0753:	00 
  9d0754:	48 89 44 24 50       	mov    QWORD PTR [rsp+0x50],rax
  9d0759:	48 8b 84 24 20 06 00 	mov    rax,QWORD PTR [rsp+0x620]
  9d0760:	00 
  9d0761:	48 89 84 24 90 00 00 	mov    QWORD PTR [rsp+0x90],rax
  9d0768:	00 
  9d0769:	eb 2e                	jmp    9d0799 <future_backtest::RunnerCore::run_multi+0x54e9>
  9d076b:	ff 15 57 7c fd 00    	call   QWORD PTR [rip+0xfd7c57]        # 19a83c8 <_DYNAMIC+0x1bc8>
  9d0771:	48 89 44 24 50       	mov    QWORD PTR [rsp+0x50],rax
  9d0776:	48 89 94 24 90 00 00 	mov    QWORD PTR [rsp+0x90],rdx
  9d077d:	00 
  9d077e:	48 85 db             	test   rbx,rbx
  9d0781:	74 16                	je     9d0799 <future_backtest::RunnerCore::run_multi+0x54e9>
  9d0783:	48 8b bc 24 18 06 00 	mov    rdi,QWORD PTR [rsp+0x618]
  9d078a:	00 
  9d078b:	ba 01 00 00 00       	mov    edx,0x1
  9d0790:	48 89 de             	mov    rsi,rbx
  9d0793:	ff 15 87 62 fd 00    	call   QWORD PTR [rip+0xfd6287]        # 19a6a20 <_DYNAMIC+0x220>
  9d0799:	4b 8b b4 34 b8 00 00 	mov    rsi,QWORD PTR [r12+r14*1+0xb8]
  9d07a0:	00 
  9d07a1:	4b 8b 94 34 c0 00 00 	mov    rdx,QWORD PTR [r12+r14*1+0xc0]
  9d07a8:	00 
  9d07a9:	48 8d bc 24 10 06 00 	lea    rdi,[rsp+0x610]
  9d07b0:	00 
  9d07b1:	ff 15 51 7d fd 00    	call   QWORD PTR [rip+0xfd7d51]        # 19a8508 <_DYNAMIC+0x1d08>
  9d07b7:	4c 8b bc 24 10 06 00 	mov    r15,QWORD PTR [rsp+0x610]
  9d07be:	00 
  9d07bf:	48 b8 00 00 00 00 00 	movabs rax,0x8000000000000000
  9d07c6:	00 00 80 
  9d07c9:	49 39 c7             	cmp    r15,rax
  9d07cc:	75 17                	jne    9d07e5 <future_backtest::RunnerCore::run_multi+0x5535>
  9d07ce:	48 8b ac 24 18 06 00 	mov    rbp,QWORD PTR [rsp+0x618]
  9d07d5:	00 
  9d07d6:	48 8b 84 24 20 06 00 	mov    rax,QWORD PTR [rsp+0x620]
  9d07dd:	00 
  9d07de:	48 89 44 24 60       	mov    QWORD PTR [rsp+0x60],rax
  9d07e3:	eb 29                	jmp    9d080e <future_backtest::RunnerCore::run_multi+0x555e>
  9d07e5:	ff 15 dd 7b fd 00    	call   QWORD PTR [rip+0xfd7bdd]        # 19a83c8 <_DYNAMIC+0x1bc8>
  9d07eb:	48 89 c5             	mov    rbp,rax
  9d07ee:	48 89 54 24 60       	mov    QWORD PTR [rsp+0x60],rdx
  9d07f3:	4d 85 ff             	test   r15,r15
  9d07f6:	74 16                	je     9d080e <future_backtest::RunnerCore::run_multi+0x555e>
  9d07f8:	48 8b bc 24 18 06 00 	mov    rdi,QWORD PTR [rsp+0x618]
  9d07ff:	00 
  9d0800:	ba 01 00 00 00       	mov    edx,0x1
  9d0805:	4c 89 fe             	mov    rsi,r15
  9d0808:	ff 15 12 62 fd 00    	call   QWORD PTR [rip+0xfd6212]        # 19a6a20 <_DYNAMIC+0x220>
  9d080e:	f2 43 0f 10 84 34 e0 	movsd  xmm0,QWORD PTR [r12+r14*1+0xe0]
  9d0815:	00 00 00 
  9d0818:	f3 43 0f 7e 8c 34 78 	movq   xmm1,QWORD PTR [r12+r14*1+0x178]
  9d081f:	01 00 00 
  9d0822:	43 0f b6 84 34 9e 02 	movzx  eax,BYTE PTR [r12+r14*1+0x29e]
  9d0829:	00 00 
  9d082b:	43 0f b6 8c 34 94 02 	movzx  ecx,BYTE PTR [r12+r14*1+0x294]
  9d0832:	00 00 
  9d0834:	83 f1 01             	xor    ecx,0x1
  9d0837:	01 c9                	add    ecx,ecx
  9d0839:	f2 0f 11 84 24 00 05 	movsd  QWORD PTR [rsp+0x500],xmm0
  9d0840:	00 00 
  9d0842:	43 0f 10 84 34 58 01 	movups xmm0,XMMWORD PTR [r12+r14*1+0x158]
  9d0849:	00 00 
  9d084b:	0f c6 c0 4e          	shufps xmm0,xmm0,0x4e
  9d084f:	0f 11 84 24 08 05 00 	movups XMMWORD PTR [rsp+0x508],xmm0
  9d0856:	00 
  9d0857:	4c 89 ac 24 18 05 00 	mov    QWORD PTR [rsp+0x518],r13
  9d085e:	00 
  9d085f:	48 8b 54 24 50       	mov    rdx,QWORD PTR [rsp+0x50]
  9d0864:	48 89 94 24 20 05 00 	mov    QWORD PTR [rsp+0x520],rdx
  9d086b:	00 
  9d086c:	48 89 ac 24 28 05 00 	mov    QWORD PTR [rsp+0x528],rbp
  9d0873:	00 
  9d0874:	43 0f 10 84 34 90 01 	movups xmm0,XMMWORD PTR [r12+r14*1+0x190]
  9d087b:	00 00 
  9d087d:	0f c6 c0 4e          	shufps xmm0,xmm0,0x4e
  9d0881:	0f 11 84 24 30 05 00 	movups XMMWORD PTR [rsp+0x530],xmm0
  9d0888:	00 
  9d0889:	66 0f d6 8c 24 40 05 	movq   QWORD PTR [rsp+0x540],xmm1
  9d0890:	00 00 
  9d0892:	43 0f 10 84 34 a0 01 	movups xmm0,XMMWORD PTR [r12+r14*1+0x1a0]
  9d0899:	00 00 
  9d089b:	0f c6 c0 4e          	shufps xmm0,xmm0,0x4e
  9d089f:	0f 11 84 24 48 05 00 	movups XMMWORD PTR [rsp+0x548],xmm0
  9d08a6:	00 
  9d08a7:	43 0f b7 94 34 9b 02 	movzx  edx,WORD PTR [r12+r14*1+0x29b]
  9d08ae:	00 00 
  9d08b0:	66 0f 6e c2          	movd   xmm0,edx
  9d08b4:	66 0f ef c9          	pxor   xmm1,xmm1
  9d08b8:	66 0f 60 c1          	punpcklbw xmm0,xmm1
  9d08bc:	66 0f 61 c1          	punpcklwd xmm0,xmm1
  9d08c0:	66 0f d6 84 24 58 05 	movq   QWORD PTR [rsp+0x558],xmm0
  9d08c7:	00 00 
  9d08c9:	89 84 24 60 05 00 00 	mov    DWORD PTR [rsp+0x560],eax
  9d08d0:	89 8c 24 64 05 00 00 	mov    DWORD PTR [rsp+0x564],ecx
  9d08d7:	66 43 0f 10 84 34 10 	movupd xmm0,XMMWORD PTR [r12+r14*1+0x110]
  9d08de:	01 00 00 
  9d08e1:	66 0f 11 84 24 68 05 	movupd XMMWORD PTR [rsp+0x568],xmm0
  9d08e8:	00 00 
  9d08ea:	48 8b 74 24 48       	mov    rsi,QWORD PTR [rsp+0x48]
  9d08ef:	48 8b 94 24 18 03 00 	mov    rdx,QWORD PTR [rsp+0x318]
  9d08f6:	00 
  9d08f7:	48 39 f2             	cmp    rdx,rsi
  9d08fa:	0f 83 14 36 00 00    	jae    9d3f14 <future_backtest::RunnerCore::run_multi+0x8c64>
  9d0900:	4c 89 eb             	mov    rbx,r13
  9d0903:	48 69 f2 28 15 00 00 	imul   rsi,rdx,0x1528
  9d090a:	48 03 74 24 40       	add    rsi,QWORD PTR [rsp+0x40]
  9d090f:	83 bc 24 e0 0e 00 00 	cmp    DWORD PTR [rsp+0xee0],0x2
  9d0916:	02 
  9d0917:	48 8d 8c 24 e0 0e 00 	lea    rcx,[rsp+0xee0]
  9d091e:	00 
  9d091f:	b8 00 00 00 00       	mov    eax,0x0
  9d0924:	48 0f 44 c8          	cmove  rcx,rax
  9d0928:	44 0f b6 84 24 c1 04 	movzx  r8d,BYTE PTR [rsp+0x4c1]
  9d092f:	00 00 
  9d0931:	48 8d bc 24 10 06 00 	lea    rdi,[rsp+0x610]
  9d0938:	00 
  9d0939:	e8 b2 a4 ff ff       	call   9cadf0 <future_backtest::RunnerCore::make_ffi_ctx>
  9d093e:	4c 8b ac 24 10 06 00 	mov    r13,QWORD PTR [rsp+0x610]
  9d0945:	00 
  9d0946:	4c 8b bc 24 18 06 00 	mov    r15,QWORD PTR [rsp+0x618]
  9d094d:	00 
  9d094e:	49 83 fd 03          	cmp    r13,0x3
  9d0952:	0f 84 47 20 00 00    	je     9d299f <future_backtest::RunnerCore::run_multi+0x76ef>
  9d0958:	ba e8 00 00 00       	mov    edx,0xe8
  9d095d:	48 8d bc 24 d0 01 00 	lea    rdi,[rsp+0x1d0]
  9d0964:	00 
  9d0965:	48 8d b4 24 20 06 00 	lea    rsi,[rsp+0x620]
  9d096c:	00 
  9d096d:	ff 15 d5 61 fd 00    	call   QWORD PTR [rip+0xfd61d5]        # 19a6b48 <memcpy@GLIBC_2.14>
  9d0973:	4c 89 ac 24 c0 01 00 	mov    QWORD PTR [rsp+0x1c0],r13
  9d097a:	00 
  9d097b:	4c 89 bc 24 c8 01 00 	mov    QWORD PTR [rsp+0x1c8],r15
  9d0982:	00 
  9d0983:	48 8b 84 24 a0 00 00 	mov    rax,QWORD PTR [rsp+0xa0]
  9d098a:	00 
  9d098b:	48 8b 38             	mov    rdi,QWORD PTR [rax]
  9d098e:	48 8d b4 24 00 05 00 	lea    rsi,[rsp+0x500]
  9d0995:	00 
  9d0996:	48 8d 94 24 c0 01 00 	lea    rdx,[rsp+0x1c0]
  9d099d:	00 
  9d099e:	ff 50 28             	call   QWORD PTR [rax+0x28]
  9d09a1:	89 84 24 8c 03 00 00 	mov    DWORD PTR [rsp+0x38c],eax
  9d09a8:	85 c0                	test   eax,eax
  9d09aa:	49 89 df             	mov    r15,rbx
  9d09ad:	0f 89 8f 00 00 00    	jns    9d0a42 <future_backtest::RunnerCore::run_multi+0x5792>
  9d09b3:	48 8d 84 24 18 03 00 	lea    rax,[rsp+0x318]
  9d09ba:	00 
  9d09bb:	48 89 84 24 40 01 00 	mov    QWORD PTR [rsp+0x140],rax
  9d09c2:	00 
  9d09c3:	48 8b 05 26 64 fd 00 	mov    rax,QWORD PTR [rip+0xfd6426]        # 19a6df0 <_DYNAMIC+0x5f0>
  9d09ca:	48 89 84 24 48 01 00 	mov    QWORD PTR [rsp+0x148],rax
  9d09d1:	00 
  9d09d2:	48 8d 84 24 8c 03 00 	lea    rax,[rsp+0x38c]
  9d09d9:	00 
  9d09da:	48 89 84 24 50 01 00 	mov    QWORD PTR [rsp+0x150],rax
  9d09e1:	00 
  9d09e2:	48 8b 05 ef 6a fd 00 	mov    rax,QWORD PTR [rip+0xfd6aef]        # 19a74d8 <_DYNAMIC+0xcd8>
  9d09e9:	48 89 84 24 58 01 00 	mov    QWORD PTR [rsp+0x158],rax
  9d09f0:	00 
  9d09f1:	48 8d 05 78 ba f2 00 	lea    rax,[rip+0xf2ba78]        # 18fc470 <anon.609a31ba814f1e4156e50677fc366a7f.492.llvm.5215769359700358943+0xe78>
  9d09f8:	48 89 84 24 10 06 00 	mov    QWORD PTR [rsp+0x610],rax
  9d09ff:	00 
  9d0a00:	48 c7 84 24 18 06 00 	mov    QWORD PTR [rsp+0x618],0x3
  9d0a07:	00 03 00 00 00 
  9d0a0c:	48 c7 84 24 30 06 00 	mov    QWORD PTR [rsp+0x630],0x0
  9d0a13:	00 00 00 00 00 
  9d0a18:	48 8d 84 24 40 01 00 	lea    rax,[rsp+0x140]
  9d0a1f:	00 
  9d0a20:	48 89 84 24 20 06 00 	mov    QWORD PTR [rsp+0x620],rax
  9d0a27:	00 
  9d0a28:	48 c7 84 24 28 06 00 	mov    QWORD PTR [rsp+0x628],0x2
  9d0a2f:	00 02 00 00 00 
  9d0a34:	48 8d bc 24 10 06 00 	lea    rdi,[rsp+0x610]
  9d0a3b:	00 
  9d0a3c:	ff 15 ae 68 fd 00    	call   QWORD PTR [rip+0xfd68ae]        # 19a72f0 <_DYNAMIC+0xaf0>
  9d0a42:	41 c6 07 00          	mov    BYTE PTR [r15],0x0
  9d0a46:	48 8b 74 24 70       	mov    rsi,QWORD PTR [rsp+0x70]
  9d0a4b:	48 85 f6             	test   rsi,rsi
  9d0a4e:	74 0e                	je     9d0a5e <future_backtest::RunnerCore::run_multi+0x57ae>
  9d0a50:	ba 01 00 00 00       	mov    edx,0x1
  9d0a55:	4c 89 ff             	mov    rdi,r15
  9d0a58:	ff 15 c2 5f fd 00    	call   QWORD PTR [rip+0xfd5fc2]        # 19a6a20 <_DYNAMIC+0x220>
  9d0a5e:	48 8b 7c 24 50       	mov    rdi,QWORD PTR [rsp+0x50]
  9d0a63:	c6 07 00             	mov    BYTE PTR [rdi],0x0
  9d0a66:	48 8b b4 24 90 00 00 	mov    rsi,QWORD PTR [rsp+0x90]
  9d0a6d:	00 
  9d0a6e:	48 85 f6             	test   rsi,rsi
  9d0a71:	74 0b                	je     9d0a7e <future_backtest::RunnerCore::run_multi+0x57ce>
  9d0a73:	ba 01 00 00 00       	mov    edx,0x1
  9d0a78:	ff 15 a2 5f fd 00    	call   QWORD PTR [rip+0xfd5fa2]        # 19a6a20 <_DYNAMIC+0x220>
  9d0a7e:	c6 45 00 00          	mov    BYTE PTR [rbp+0x0],0x0
  9d0a82:	48 8b 74 24 60       	mov    rsi,QWORD PTR [rsp+0x60]
  9d0a87:	48 85 f6             	test   rsi,rsi
  9d0a8a:	74 0e                	je     9d0a9a <future_backtest::RunnerCore::run_multi+0x57ea>
  9d0a8c:	ba 01 00 00 00       	mov    edx,0x1
  9d0a91:	48 89 ef             	mov    rdi,rbp
  9d0a94:	ff 15 86 5f fd 00    	call   QWORD PTR [rip+0xfd5f86]        # 19a6a20 <_DYNAMIC+0x220>
  9d0a9a:	48 8b b4 24 90 02 00 	mov    rsi,QWORD PTR [rsp+0x290]
  9d0aa1:	00 
  9d0aa2:	48 85 f6             	test   rsi,rsi
  9d0aa5:	74 13                	je     9d0aba <future_backtest::RunnerCore::run_multi+0x580a>
  9d0aa7:	48 8b bc 24 98 02 00 	mov    rdi,QWORD PTR [rsp+0x298]
  9d0aae:	00 
  9d0aaf:	ba 01 00 00 00       	mov    edx,0x1
  9d0ab4:	ff 15 66 5f fd 00    	call   QWORD PTR [rip+0xfd5f66]        # 19a6a20 <_DYNAMIC+0x220>
  9d0aba:	83 bc 24 c0 01 00 00 	cmp    DWORD PTR [rsp+0x1c0],0x2
  9d0ac1:	02 
  9d0ac2:	0f 84 cb fb ff ff    	je     9d0693 <future_backtest::RunnerCore::run_multi+0x53e3>
  9d0ac8:	48 8b b4 24 28 02 00 	mov    rsi,QWORD PTR [rsp+0x228]
  9d0acf:	00 
  9d0ad0:	48 85 f6             	test   rsi,rsi
  9d0ad3:	74 13                	je     9d0ae8 <future_backtest::RunnerCore::run_multi+0x5838>
  9d0ad5:	48 8b bc 24 30 02 00 	mov    rdi,QWORD PTR [rsp+0x230]
  9d0adc:	00 
  9d0add:	ba 01 00 00 00       	mov    edx,0x1
  9d0ae2:	ff 15 38 5f fd 00    	call   QWORD PTR [rip+0xfd5f38]        # 19a6a20 <_DYNAMIC+0x220>
  9d0ae8:	48 8b 84 24 40 02 00 	mov    rax,QWORD PTR [rsp+0x240]
  9d0aef:	00 
  9d0af0:	f0 48 ff 08          	lock dec QWORD PTR [rax]
  9d0af4:	0f 85 99 fb ff ff    	jne    9d0693 <future_backtest::RunnerCore::run_multi+0x53e3>
  9d0afa:	48 8d bc 24 40 02 00 	lea    rdi,[rsp+0x240]
  9d0b01:	00 
  9d0b02:	ff 15 80 69 fd 00    	call   QWORD PTR [rip+0xfd6980]        # 19a7488 <_DYNAMIC+0xc88>
  9d0b08:	e9 86 fb ff ff       	jmp    9d0693 <future_backtest::RunnerCore::run_multi+0x53e3>
  9d0b0d:	48 8b bc 24 18 03 00 	mov    rdi,QWORD PTR [rsp+0x318]
  9d0b14:	00 
  9d0b15:	48 8b 9c 24 10 03 00 	mov    rbx,QWORD PTR [rsp+0x310]
  9d0b1c:	00 
  9d0b1d:	48 39 df             	cmp    rdi,rbx
  9d0b20:	0f 83 cb 34 00 00    	jae    9d3ff1 <future_backtest::RunnerCore::run_multi+0x8d41>
  9d0b26:	48 8b 84 24 08 03 00 	mov    rax,QWORD PTR [rsp+0x308]
  9d0b2d:	00 
  9d0b2e:	48 8b 8c 24 40 03 00 	mov    rcx,QWORD PTR [rsp+0x340]
  9d0b35:	00 
  9d0b36:	48 89 0c f8          	mov    QWORD PTR [rax+rdi*8],rcx
  9d0b3a:	48 8d bc 24 70 01 00 	lea    rdi,[rsp+0x170]
  9d0b41:	00 
  9d0b42:	e8 29 75 fd ff       	call   9a8070 <core::ptr::drop_in_place<alloc::vec::Vec<future_backtest::Order::trade_order::TradingOrder>>>
  9d0b47:	e9 3b fa ff ff       	jmp    9d0587 <future_backtest::RunnerCore::run_multi+0x52d7>
  9d0b4c:	48 8b 44 24 18       	mov    rax,QWORD PTR [rsp+0x18]
  9d0b51:	48 83 78 10 00       	cmp    QWORD PTR [rax+0x10],0x0
  9d0b56:	0f 85 10 35 00 00    	jne    9d406c <future_backtest::RunnerCore::run_multi+0x8dbc>
  9d0b5c:	48 8b 44 24 18       	mov    rax,QWORD PTR [rsp+0x18]
  9d0b61:	48 c7 40 10 ff ff ff 	mov    QWORD PTR [rax+0x10],0xffffffffffffffff
  9d0b68:	ff 
  9d0b69:	48 8d bc 24 10 06 00 	lea    rdi,[rsp+0x610]
  9d0b70:	00 
  9d0b71:	48 8d b4 24 70 03 00 	lea    rsi,[rsp+0x370]
  9d0b78:	00 
  9d0b79:	48 8d 15 f8 b5 f2 00 	lea    rdx,[rip+0xf2b5f8]        # 18fc178 <anon.609a31ba814f1e4156e50677fc366a7f.492.llvm.5215769359700358943+0xb80>
  9d0b80:	ff 15 fa 60 fd 00    	call   QWORD PTR [rip+0xfd60fa]        # 19a6c80 <_DYNAMIC+0x480>
  9d0b86:	48 8b 84 24 20 06 00 	mov    rax,QWORD PTR [rsp+0x620]
  9d0b8d:	00 
  9d0b8e:	48 89 84 24 d0 01 00 	mov    QWORD PTR [rsp+0x1d0],rax
  9d0b95:	00 
  9d0b96:	66 0f 10 84 24 10 06 	movupd xmm0,XMMWORD PTR [rsp+0x610]
  9d0b9d:	00 00 
  9d0b9f:	66 0f 29 84 24 c0 01 	movapd XMMWORD PTR [rsp+0x1c0],xmm0
  9d0ba6:	00 00 
  9d0ba8:	48 8b bc 24 80 00 00 	mov    rdi,QWORD PTR [rsp+0x80]
  9d0baf:	00 
  9d0bb0:	48 8d b4 24 c0 01 00 	lea    rsi,[rsp+0x1c0]
  9d0bb7:	00 
  9d0bb8:	ff 15 5a 73 fd 00    	call   QWORD PTR [rip+0xfd735a]        # 19a7f18 <_DYNAMIC+0x1718>
  9d0bbe:	49 89 c7             	mov    r15,rax
  9d0bc1:	48 8b 4c 24 18       	mov    rcx,QWORD PTR [rsp+0x18]
  9d0bc6:	48 8b 41 10          	mov    rax,QWORD PTR [rcx+0x10]
  9d0bca:	48 ff c0             	inc    rax
  9d0bcd:	48 89 41 10          	mov    QWORD PTR [rcx+0x10],rax
  9d0bd1:	4d 85 ff             	test   r15,r15
  9d0bd4:	0f 85 a6 22 00 00    	jne    9d2e80 <future_backtest::RunnerCore::run_multi+0x7bd0>
  9d0bda:	48 85 c0             	test   rax,rax
  9d0bdd:	0f 85 a7 34 00 00    	jne    9d408a <future_backtest::RunnerCore::run_multi+0x8dda>
  9d0be3:	48 8b 44 24 18       	mov    rax,QWORD PTR [rsp+0x18]
  9d0be8:	48 c7 40 10 ff ff ff 	mov    QWORD PTR [rax+0x10],0xffffffffffffffff
  9d0bef:	ff 
  9d0bf0:	0f 10 84 24 b8 03 00 	movups xmm0,XMMWORD PTR [rsp+0x3b8]
  9d0bf7:	00 
  9d0bf8:	0f 29 44 24 50       	movaps XMMWORD PTR [rsp+0x50],xmm0
  9d0bfd:	0f 10 84 24 c8 03 00 	movups xmm0,XMMWORD PTR [rsp+0x3c8]
  9d0c04:	00 
  9d0c05:	0f 29 44 24 70       	movaps XMMWORD PTR [rsp+0x70],xmm0
  9d0c0a:	f2 0f 10 84 24 d8 03 	movsd  xmm0,QWORD PTR [rsp+0x3d8]
  9d0c11:	00 00 
  9d0c13:	f2 0f 11 84 24 90 00 	movsd  QWORD PTR [rsp+0x90],xmm0
  9d0c1a:	00 00 
  9d0c1c:	48 8d bc 24 10 06 00 	lea    rdi,[rsp+0x610]
  9d0c23:	00 
  9d0c24:	48 8d b4 24 a0 03 00 	lea    rsi,[rsp+0x3a0]
  9d0c2b:	00 
  9d0c2c:	48 8d 15 75 a3 f2 00 	lea    rdx,[rip+0xf2a375]        # 18fafa8 <anon.609a31ba814f1e4156e50677fc366a7f.248.llvm.5215769359700358943+0x9e0>
  9d0c33:	ff 15 47 60 fd 00    	call   QWORD PTR [rip+0xfd6047]        # 19a6c80 <_DYNAMIC+0x480>
  9d0c39:	0f b6 84 24 c0 04 00 	movzx  eax,BYTE PTR [rsp+0x4c0]
  9d0c40:	00 
  9d0c41:	48 8d 8c 24 a8 03 00 	lea    rcx,[rsp+0x3a8]
  9d0c48:	00 
  9d0c49:	0f 10 41 78          	movups xmm0,XMMWORD PTR [rcx+0x78]
  9d0c4d:	48 8d 94 24 d0 01 00 	lea    rdx,[rsp+0x1d0]
  9d0c54:	00 
  9d0c55:	0f 11 42 70          	movups XMMWORD PTR [rdx+0x70],xmm0
  9d0c59:	0f 10 41 38          	movups xmm0,XMMWORD PTR [rcx+0x38]
  9d0c5d:	0f 10 49 48          	movups xmm1,XMMWORD PTR [rcx+0x48]
  9d0c61:	0f 10 51 58          	movups xmm2,XMMWORD PTR [rcx+0x58]
  9d0c65:	0f 10 59 68          	movups xmm3,XMMWORD PTR [rcx+0x68]
  9d0c69:	0f 11 5a 60          	movups XMMWORD PTR [rdx+0x60],xmm3
  9d0c6d:	0f 11 52 50          	movups XMMWORD PTR [rdx+0x50],xmm2
  9d0c71:	0f 11 4a 40          	movups XMMWORD PTR [rdx+0x40],xmm1
  9d0c75:	0f 11 42 30          	movups XMMWORD PTR [rdx+0x30],xmm0
  9d0c79:	0f 10 81 c8 00 00 00 	movups xmm0,XMMWORD PTR [rcx+0xc8]
  9d0c80:	0f 11 82 c0 00 00 00 	movups XMMWORD PTR [rdx+0xc0],xmm0
  9d0c87:	0f 10 81 88 00 00 00 	movups xmm0,XMMWORD PTR [rcx+0x88]
  9d0c8e:	f3 0f 6f 89 98 00 00 	movdqu xmm1,XMMWORD PTR [rcx+0x98]
  9d0c95:	00 
  9d0c96:	f3 0f 6f 91 a8 00 00 	movdqu xmm2,XMMWORD PTR [rcx+0xa8]
  9d0c9d:	00 
  9d0c9e:	f3 0f 6f 99 b8 00 00 	movdqu xmm3,XMMWORD PTR [rcx+0xb8]
  9d0ca5:	00 
  9d0ca6:	f3 0f 7f 9a b0 00 00 	movdqu XMMWORD PTR [rdx+0xb0],xmm3
  9d0cad:	00 
  9d0cae:	f3 0f 7f 92 a0 00 00 	movdqu XMMWORD PTR [rdx+0xa0],xmm2
  9d0cb5:	00 
  9d0cb6:	f3 0f 7f 8a 90 00 00 	movdqu XMMWORD PTR [rdx+0x90],xmm1
  9d0cbd:	00 
  9d0cbe:	0f 11 82 80 00 00 00 	movups XMMWORD PTR [rdx+0x80],xmm0
  9d0cc5:	0f b6 8c 24 c1 04 00 	movzx  ecx,BYTE PTR [rsp+0x4c1]
  9d0ccc:	00 
  9d0ccd:	0f 28 44 24 50       	movaps xmm0,XMMWORD PTR [rsp+0x50]
  9d0cd2:	0f 11 84 24 d8 01 00 	movups XMMWORD PTR [rsp+0x1d8],xmm0
  9d0cd9:	00 
  9d0cda:	0f 28 44 24 70       	movaps xmm0,XMMWORD PTR [rsp+0x70]
  9d0cdf:	0f 11 84 24 e8 01 00 	movups XMMWORD PTR [rsp+0x1e8],xmm0
  9d0ce6:	00 
  9d0ce7:	f2 0f 10 84 24 90 00 	movsd  xmm0,QWORD PTR [rsp+0x90]
  9d0cee:	00 00 
  9d0cf0:	f2 0f 11 84 24 f8 01 	movsd  QWORD PTR [rsp+0x1f8],xmm0
  9d0cf7:	00 00 
  9d0cf9:	0f 10 84 24 10 06 00 	movups xmm0,XMMWORD PTR [rsp+0x610]
  9d0d00:	00 
  9d0d01:	0f 29 84 24 c0 01 00 	movaps XMMWORD PTR [rsp+0x1c0],xmm0
  9d0d08:	00 
  9d0d09:	48 8b 94 24 20 06 00 	mov    rdx,QWORD PTR [rsp+0x620]
  9d0d10:	00 
  9d0d11:	48 89 94 24 d0 01 00 	mov    QWORD PTR [rsp+0x1d0],rdx
  9d0d18:	00 
  9d0d19:	88 84 24 e0 02 00 00 	mov    BYTE PTR [rsp+0x2e0],al
  9d0d20:	0f 10 84 24 80 04 00 	movups xmm0,XMMWORD PTR [rsp+0x480]
  9d0d27:	00 
  9d0d28:	0f 29 84 24 a0 02 00 	movaps XMMWORD PTR [rsp+0x2a0],xmm0
  9d0d2f:	00 
  9d0d30:	0f 10 84 24 90 04 00 	movups xmm0,XMMWORD PTR [rsp+0x490]
  9d0d37:	00 
  9d0d38:	0f 29 84 24 b0 02 00 	movaps XMMWORD PTR [rsp+0x2b0],xmm0
  9d0d3f:	00 
  9d0d40:	0f 10 84 24 a0 04 00 	movups xmm0,XMMWORD PTR [rsp+0x4a0]
  9d0d47:	00 
  9d0d48:	0f 29 84 24 c0 02 00 	movaps XMMWORD PTR [rsp+0x2c0],xmm0
  9d0d4f:	00 
  9d0d50:	66 0f 10 84 24 b0 04 	movupd xmm0,XMMWORD PTR [rsp+0x4b0]
  9d0d57:	00 00 
  9d0d59:	66 0f 29 84 24 d0 02 	movapd XMMWORD PTR [rsp+0x2d0],xmm0
  9d0d60:	00 00 
  9d0d62:	88 8c 24 e1 02 00 00 	mov    BYTE PTR [rsp+0x2e1],cl
  9d0d69:	48 8d bc 24 10 06 00 	lea    rdi,[rsp+0x610]
  9d0d70:	00 
  9d0d71:	48 8d b4 24 d0 11 00 	lea    rsi,[rsp+0x11d0]
  9d0d78:	00 
  9d0d79:	e8 42 6c 00 00       	call   9d79c0 <<future_backtest::Customer::customer_params::StrategyParams as core::clone::Clone>::clone>
  9d0d7e:	48 8b bc 24 80 00 00 	mov    rdi,QWORD PTR [rsp+0x80]
  9d0d85:	00 
  9d0d86:	48 8d b4 24 c0 01 00 	lea    rsi,[rsp+0x1c0]
  9d0d8d:	00 
  9d0d8e:	48 8d 94 24 10 06 00 	lea    rdx,[rsp+0x610]
  9d0d95:	00 
  9d0d96:	ff 15 64 71 fd 00    	call   QWORD PTR [rip+0xfd7164]        # 19a7f00 <_DYNAMIC+0x1700>
  9d0d9c:	49 89 c7             	mov    r15,rax
  9d0d9f:	48 8b 44 24 18       	mov    rax,QWORD PTR [rsp+0x18]
  9d0da4:	48 ff 40 10          	inc    QWORD PTR [rax+0x10]
  9d0da8:	4d 85 ff             	test   r15,r15
  9d0dab:	0f 85 cf 20 00 00    	jne    9d2e80 <future_backtest::RunnerCore::run_multi+0x7bd0>
  9d0db1:	48 8b 8c 24 e0 0e 00 	mov    rcx,QWORD PTR [rsp+0xee0]
  9d0db8:	00 
  9d0db9:	48 8d 9c 24 e0 0e 00 	lea    rbx,[rsp+0xee0]
  9d0dc0:	00 
  9d0dc1:	48 89 8c 24 28 0e 00 	mov    QWORD PTR [rsp+0xe28],rcx
  9d0dc8:	00 
  9d0dc9:	48 83 f9 02          	cmp    rcx,0x2
  9d0dcd:	b8 00 00 00 00       	mov    eax,0x0
  9d0dd2:	48 0f 44 d8          	cmove  rbx,rax
  9d0dd6:	74 71                	je     9d0e49 <future_backtest::RunnerCore::run_multi+0x5b99>
  9d0dd8:	4c 8b 74 24 40       	mov    r14,QWORD PTR [rsp+0x40]
  9d0ddd:	4c 69 64 24 48 28 15 	imul   r12,QWORD PTR [rsp+0x48],0x1528
  9d0de4:	00 00 
  9d0de6:	4d 01 f4             	add    r12,r14
  9d0de9:	4d 8d ae 28 15 00 00 	lea    r13,[r14+0x1528]
  9d0df0:	4d 39 e6             	cmp    r14,r12
  9d0df3:	4d 0f 44 ee          	cmove  r13,r14
  9d0df7:	74 32                	je     9d0e2b <future_backtest::RunnerCore::run_multi+0x5b7b>
  9d0df9:	4c 89 f7             	mov    rdi,r14
  9d0dfc:	48 8d b4 24 a0 03 00 	lea    rsi,[rsp+0x3a0]
  9d0e03:	00 
  9d0e04:	ff 15 5e 62 fd 00    	call   QWORD PTR [rip+0xfd625e]        # 19a7068 <_DYNAMIC+0x868>
  9d0e0a:	4c 89 f7             	mov    rdi,r14
  9d0e0d:	48 8d b4 24 a0 03 00 	lea    rsi,[rsp+0x3a0]
  9d0e14:	00 
  9d0e15:	ff 15 55 62 fd 00    	call   QWORD PTR [rip+0xfd6255]        # 19a7070 <_DYNAMIC+0x870>
  9d0e1b:	49 89 c7             	mov    r15,rax
  9d0e1e:	4d 89 ee             	mov    r14,r13
  9d0e21:	48 85 c0             	test   rax,rax
  9d0e24:	74 c3                	je     9d0de9 <future_backtest::RunnerCore::run_multi+0x5b39>
  9d0e26:	e9 55 20 00 00       	jmp    9d2e80 <future_backtest::RunnerCore::run_multi+0x7bd0>
  9d0e2b:	48 8b 74 24 40       	mov    rsi,QWORD PTR [rsp+0x40]
  9d0e30:	48 8b 54 24 48       	mov    rdx,QWORD PTR [rsp+0x48]
  9d0e35:	48 89 df             	mov    rdi,rbx
  9d0e38:	e8 e3 84 ff ff       	call   9c9320 <future_backtest::RunnerCore::MetaRunState::refresh_capital>
  9d0e3d:	49 89 c7             	mov    r15,rax
  9d0e40:	48 85 c0             	test   rax,rax
  9d0e43:	0f 85 37 20 00 00    	jne    9d2e80 <future_backtest::RunnerCore::run_multi+0x7bd0>
  9d0e49:	48 83 bc 24 a8 00 00 	cmp    QWORD PTR [rsp+0xa8],0x0
  9d0e50:	00 00 
  9d0e52:	0f 84 42 0c 00 00    	je     9d1a9a <future_backtest::RunnerCore::run_multi+0x67ea>
  9d0e58:	b8 01 00 00 00       	mov    eax,0x1
  9d0e5d:	31 d2                	xor    edx,edx
  9d0e5f:	48 89 84 24 40 03 00 	mov    QWORD PTR [rsp+0x340],rax
  9d0e66:	00 
  9d0e67:	48 89 94 24 b0 00 00 	mov    QWORD PTR [rsp+0xb0],rdx
  9d0e6e:	00 
  9d0e6f:	83 bc 24 28 0e 00 00 	cmp    DWORD PTR [rsp+0xe28],0x2
  9d0e76:	02 
  9d0e77:	75 6c                	jne    9d0ee5 <future_backtest::RunnerCore::run_multi+0x5c35>
  9d0e79:	48 8b 5c 24 48       	mov    rbx,QWORD PTR [rsp+0x48]
  9d0e7e:	48 39 da             	cmp    rdx,rbx
  9d0e81:	0f 83 f1 31 00 00    	jae    9d4078 <future_backtest::RunnerCore::run_multi+0x8dc8>
  9d0e87:	48 69 fa 28 15 00 00 	imul   rdi,rdx,0x1528
  9d0e8e:	48 03 7c 24 40       	add    rdi,QWORD PTR [rsp+0x40]
  9d0e93:	48 8d b4 24 a0 03 00 	lea    rsi,[rsp+0x3a0]
  9d0e9a:	00 
  9d0e9b:	ff 15 c7 61 fd 00    	call   QWORD PTR [rip+0xfd61c7]        # 19a7068 <_DYNAMIC+0x868>
  9d0ea1:	48 8b 5c 24 48       	mov    rbx,QWORD PTR [rsp+0x48]
  9d0ea6:	48 8b 94 24 b0 00 00 	mov    rdx,QWORD PTR [rsp+0xb0]
  9d0ead:	00 
  9d0eae:	48 39 da             	cmp    rdx,rbx
  9d0eb1:	0f 83 ca 31 00 00    	jae    9d4081 <future_backtest::RunnerCore::run_multi+0x8dd1>
  9d0eb7:	48 69 fa 28 15 00 00 	imul   rdi,rdx,0x1528
  9d0ebe:	48 03 7c 24 40       	add    rdi,QWORD PTR [rsp+0x40]
  9d0ec3:	48 8d b4 24 a0 03 00 	lea    rsi,[rsp+0x3a0]
  9d0eca:	00 
  9d0ecb:	ff 15 9f 61 fd 00    	call   QWORD PTR [rip+0xfd619f]        # 19a7070 <_DYNAMIC+0x870>
  9d0ed1:	49 89 c7             	mov    r15,rax
  9d0ed4:	48 85 c0             	test   rax,rax
  9d0ed7:	0f 85 a3 1f 00 00    	jne    9d2e80 <future_backtest::RunnerCore::run_multi+0x7bd0>
  9d0edd:	48 8b 94 24 b0 00 00 	mov    rdx,QWORD PTR [rsp+0xb0]
  9d0ee4:	00 
  9d0ee5:	48 8b 5c 24 48       	mov    rbx,QWORD PTR [rsp+0x48]
  9d0eea:	48 39 da             	cmp    rdx,rbx
  9d0eed:	0f 83 23 31 00 00    	jae    9d4016 <future_backtest::RunnerCore::run_multi+0x8d66>
  9d0ef3:	48 8b 84 24 10 03 00 	mov    rax,QWORD PTR [rsp+0x310]
  9d0efa:	00 
  9d0efb:	48 89 84 24 38 03 00 	mov    QWORD PTR [rsp+0x338],rax
  9d0f02:	00 
  9d0f03:	48 39 c2             	cmp    rdx,rax
  9d0f06:	0f 83 16 31 00 00    	jae    9d4022 <future_backtest::RunnerCore::run_multi+0x8d72>
  9d0f0c:	48 8b 44 24 40       	mov    rax,QWORD PTR [rsp+0x40]
  9d0f11:	48 69 ca 28 15 00 00 	imul   rcx,rdx,0x1528
  9d0f18:	48 8b bc 08 f8 08 00 	mov    rdi,QWORD PTR [rax+rcx*1+0x8f8]
  9d0f1f:	00 
  9d0f20:	48 8b b4 24 08 03 00 	mov    rsi,QWORD PTR [rsp+0x308]
  9d0f27:	00 
  9d0f28:	48 89 b4 24 20 0e 00 	mov    QWORD PTR [rsp+0xe20],rsi
  9d0f2f:	00 
  9d0f30:	48 8b 34 d6          	mov    rsi,QWORD PTR [rsi+rdx*8]
  9d0f34:	48 89 bc 24 10 01 00 	mov    QWORD PTR [rsp+0x110],rdi
  9d0f3b:	00 
  9d0f3c:	48 39 f7             	cmp    rdi,rsi
  9d0f3f:	0f 86 f8 03 00 00    	jbe    9d133d <future_backtest::RunnerCore::run_multi+0x608d>
  9d0f45:	48 8b 84 08 f0 08 00 	mov    rax,QWORD PTR [rax+rcx*1+0x8f0]
  9d0f4c:	00 
  9d0f4d:	48 69 f6 a0 02 00 00 	imul   rsi,rsi,0x2a0
  9d0f54:	48 01 c6             	add    rsi,rax
  9d0f57:	48 69 94 24 10 01 00 	imul   rdx,QWORD PTR [rsp+0x110],0x2a0
  9d0f5e:	00 a0 02 00 00 
  9d0f63:	48 01 c2             	add    rdx,rax
  9d0f66:	48 8d bc 24 70 01 00 	lea    rdi,[rsp+0x170]
  9d0f6d:	00 
  9d0f6e:	48 8d 0d 7b 89 f2 00 	lea    rcx,[rip+0xf2897b]        # 18f98f0 <anon.609a31ba814f1e4156e50677fc366a7f.99.llvm.5215769359700358943>
  9d0f75:	e8 e6 30 fb ff       	call   984060 <<alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter>
  9d0f7a:	48 8b b4 24 f8 00 00 	mov    rsi,QWORD PTR [rsp+0xf8]
  9d0f81:	00 
  9d0f82:	48 8b bc 24 b0 00 00 	mov    rdi,QWORD PTR [rsp+0xb0]
  9d0f89:	00 
  9d0f8a:	48 39 f7             	cmp    rdi,rsi
  9d0f8d:	0f 83 4e 31 00 00    	jae    9d40e1 <future_backtest::RunnerCore::run_multi+0x8e31>
  9d0f93:	48 8b 84 24 80 01 00 	mov    rax,QWORD PTR [rsp+0x180]
  9d0f9a:	00 
  9d0f9b:	48 85 c0             	test   rax,rax
  9d0f9e:	0f 84 5d 03 00 00    	je     9d1301 <future_backtest::RunnerCore::run_multi+0x6051>
  9d0fa4:	48 8b 8c 24 f0 00 00 	mov    rcx,QWORD PTR [rsp+0xf0]
  9d0fab:	00 
  9d0fac:	48 8b 0c f9          	mov    rcx,QWORD PTR [rcx+rdi*8]
  9d0fb0:	48 89 8c 24 a0 00 00 	mov    QWORD PTR [rsp+0xa0],rcx
  9d0fb7:	00 
  9d0fb8:	4c 8b a4 24 78 01 00 	mov    r12,QWORD PTR [rsp+0x178]
  9d0fbf:	00 
  9d0fc0:	48 69 c0 a0 02 00 00 	imul   rax,rax,0x2a0
  9d0fc7:	48 89 84 24 b8 00 00 	mov    QWORD PTR [rsp+0xb8],rax
  9d0fce:	00 
  9d0fcf:	45 31 f6             	xor    r14d,r14d
  9d0fd2:	4b 8b b4 34 88 00 00 	mov    rsi,QWORD PTR [r12+r14*1+0x88]
  9d0fd9:	00 
  9d0fda:	4b 8b 94 34 90 00 00 	mov    rdx,QWORD PTR [r12+r14*1+0x90]
  9d0fe1:	00 
  9d0fe2:	48 8d 9c 24 10 06 00 	lea    rbx,[rsp+0x610]
  9d0fe9:	00 
  9d0fea:	48 89 df             	mov    rdi,rbx
  9d0fed:	ff 15 15 75 fd 00    	call   QWORD PTR [rip+0xfd7515]        # 19a8508 <_DYNAMIC+0x1d08>
  9d0ff3:	48 89 df             	mov    rdi,rbx
  9d0ff6:	e8 d5 7e fd ff       	call   9a8ed0 <core::result::Result<T,E>::unwrap_or_default>
  9d0ffb:	48 89 54 24 50       	mov    QWORD PTR [rsp+0x50],rdx
  9d1000:	49 89 c7             	mov    r15,rax
  9d1003:	4b 8b 74 34 58       	mov    rsi,QWORD PTR [r12+r14*1+0x58]
  9d1008:	4b 8b 54 34 60       	mov    rdx,QWORD PTR [r12+r14*1+0x60]
  9d100d:	48 89 df             	mov    rdi,rbx
  9d1010:	48 89 44 24 70       	mov    QWORD PTR [rsp+0x70],rax
  9d1015:	ff 15 ed 74 fd 00    	call   QWORD PTR [rip+0xfd74ed]        # 19a8508 <_DYNAMIC+0x1d08>
  9d101b:	48 89 df             	mov    rdi,rbx
  9d101e:	e8 ad 7e fd ff       	call   9a8ed0 <core::result::Result<T,E>::unwrap_or_default>
  9d1023:	48 89 94 24 90 00 00 	mov    QWORD PTR [rsp+0x90],rdx
  9d102a:	00 
  9d102b:	49 89 c5             	mov    r13,rax
  9d102e:	4b 8b b4 34 b8 00 00 	mov    rsi,QWORD PTR [r12+r14*1+0xb8]
  9d1035:	00 
  9d1036:	4b 8b 94 34 c0 00 00 	mov    rdx,QWORD PTR [r12+r14*1+0xc0]
  9d103d:	00 
  9d103e:	48 89 df             	mov    rdi,rbx
  9d1041:	ff 15 c1 74 fd 00    	call   QWORD PTR [rip+0xfd74c1]        # 19a8508 <_DYNAMIC+0x1d08>
  9d1047:	48 89 df             	mov    rdi,rbx
  9d104a:	e8 81 7e fd ff       	call   9a8ed0 <core::result::Result<T,E>::unwrap_or_default>
  9d104f:	48 89 54 24 60       	mov    QWORD PTR [rsp+0x60],rdx
  9d1054:	48 89 c5             	mov    rbp,rax
  9d1057:	f2 43 0f 10 84 34 e0 	movsd  xmm0,QWORD PTR [r12+r14*1+0xe0]
  9d105e:	00 00 00 
  9d1061:	f3 43 0f 7e 8c 34 78 	movq   xmm1,QWORD PTR [r12+r14*1+0x178]
  9d1068:	01 00 00 
  9d106b:	43 0f b6 84 34 9e 02 	movzx  eax,BYTE PTR [r12+r14*1+0x29e]
  9d1072:	00 00 
  9d1074:	43 0f b6 8c 34 94 02 	movzx  ecx,BYTE PTR [r12+r14*1+0x294]
  9d107b:	00 00 
  9d107d:	83 f1 01             	xor    ecx,0x1
  9d1080:	01 c9                	add    ecx,ecx
  9d1082:	f2 0f 11 84 24 00 05 	movsd  QWORD PTR [rsp+0x500],xmm0
  9d1089:	00 00 
  9d108b:	43 0f 10 84 34 58 01 	movups xmm0,XMMWORD PTR [r12+r14*1+0x158]
  9d1092:	00 00 
  9d1094:	0f c6 c0 4e          	shufps xmm0,xmm0,0x4e
  9d1098:	0f 11 84 24 08 05 00 	movups XMMWORD PTR [rsp+0x508],xmm0
  9d109f:	00 
  9d10a0:	4c 89 bc 24 18 05 00 	mov    QWORD PTR [rsp+0x518],r15
  9d10a7:	00 
  9d10a8:	4c 89 ac 24 20 05 00 	mov    QWORD PTR [rsp+0x520],r13
  9d10af:	00 
  9d10b0:	48 89 ac 24 28 05 00 	mov    QWORD PTR [rsp+0x528],rbp
  9d10b7:	00 
  9d10b8:	43 0f 10 84 34 90 01 	movups xmm0,XMMWORD PTR [r12+r14*1+0x190]
  9d10bf:	00 00 
  9d10c1:	0f c6 c0 4e          	shufps xmm0,xmm0,0x4e
  9d10c5:	0f 11 84 24 30 05 00 	movups XMMWORD PTR [rsp+0x530],xmm0
  9d10cc:	00 
  9d10cd:	66 0f d6 8c 24 40 05 	movq   QWORD PTR [rsp+0x540],xmm1
  9d10d4:	00 00 
  9d10d6:	43 0f 10 84 34 a0 01 	movups xmm0,XMMWORD PTR [r12+r14*1+0x1a0]
  9d10dd:	00 00 
  9d10df:	0f c6 c0 4e          	shufps xmm0,xmm0,0x4e
  9d10e3:	0f 11 84 24 48 05 00 	movups XMMWORD PTR [rsp+0x548],xmm0
  9d10ea:	00 
  9d10eb:	43 0f b7 94 34 9b 02 	movzx  edx,WORD PTR [r12+r14*1+0x29b]
  9d10f2:	00 00 
  9d10f4:	66 0f 6e c2          	movd   xmm0,edx
  9d10f8:	66 0f ef c9          	pxor   xmm1,xmm1
  9d10fc:	66 0f 60 c1          	punpcklbw xmm0,xmm1
  9d1100:	66 0f 61 c1          	punpcklwd xmm0,xmm1
  9d1104:	66 0f d6 84 24 58 05 	movq   QWORD PTR [rsp+0x558],xmm0
  9d110b:	00 00 
  9d110d:	89 84 24 60 05 00 00 	mov    DWORD PTR [rsp+0x560],eax
  9d1114:	89 8c 24 64 05 00 00 	mov    DWORD PTR [rsp+0x564],ecx
  9d111b:	66 43 0f 10 84 34 10 	movupd xmm0,XMMWORD PTR [r12+r14*1+0x110]
  9d1122:	01 00 00 
  9d1125:	66 0f 11 84 24 68 05 	movupd XMMWORD PTR [rsp+0x568],xmm0
  9d112c:	00 00 
  9d112e:	48 8b 74 24 48       	mov    rsi,QWORD PTR [rsp+0x48]
  9d1133:	48 8b 94 24 b0 00 00 	mov    rdx,QWORD PTR [rsp+0xb0]
  9d113a:	00 
  9d113b:	48 39 f2             	cmp    rdx,rsi
  9d113e:	0f 83 49 2e 00 00    	jae    9d3f8d <future_backtest::RunnerCore::run_multi+0x8cdd>
  9d1144:	4c 89 eb             	mov    rbx,r13
  9d1147:	48 69 f2 28 15 00 00 	imul   rsi,rdx,0x1528
  9d114e:	48 03 74 24 40       	add    rsi,QWORD PTR [rsp+0x40]
  9d1153:	83 bc 24 e0 0e 00 00 	cmp    DWORD PTR [rsp+0xee0],0x2
  9d115a:	02 
  9d115b:	48 8d 8c 24 e0 0e 00 	lea    rcx,[rsp+0xee0]
  9d1162:	00 
  9d1163:	b8 00 00 00 00       	mov    eax,0x0
  9d1168:	48 0f 44 c8          	cmove  rcx,rax
  9d116c:	44 0f b6 84 24 c1 04 	movzx  r8d,BYTE PTR [rsp+0x4c1]
  9d1173:	00 00 
  9d1175:	48 8d bc 24 10 06 00 	lea    rdi,[rsp+0x610]
  9d117c:	00 
  9d117d:	e8 6e 9c ff ff       	call   9cadf0 <future_backtest::RunnerCore::make_ffi_ctx>
  9d1182:	4c 8b ac 24 10 06 00 	mov    r13,QWORD PTR [rsp+0x610]
  9d1189:	00 
  9d118a:	4c 8b bc 24 18 06 00 	mov    r15,QWORD PTR [rsp+0x618]
  9d1191:	00 
  9d1192:	49 83 fd 03          	cmp    r13,0x3
  9d1196:	0f 84 53 1c 00 00    	je     9d2def <future_backtest::RunnerCore::run_multi+0x7b3f>
  9d119c:	ba e8 00 00 00       	mov    edx,0xe8
  9d11a1:	48 8d bc 24 d0 01 00 	lea    rdi,[rsp+0x1d0]
  9d11a8:	00 
  9d11a9:	48 8d b4 24 20 06 00 	lea    rsi,[rsp+0x620]
  9d11b0:	00 
  9d11b1:	ff 15 91 59 fd 00    	call   QWORD PTR [rip+0xfd5991]        # 19a6b48 <memcpy@GLIBC_2.14>
  9d11b7:	4c 89 ac 24 c0 01 00 	mov    QWORD PTR [rsp+0x1c0],r13
  9d11be:	00 
  9d11bf:	4c 89 bc 24 c8 01 00 	mov    QWORD PTR [rsp+0x1c8],r15
  9d11c6:	00 
  9d11c7:	48 8b 84 24 a0 00 00 	mov    rax,QWORD PTR [rsp+0xa0]
  9d11ce:	00 
  9d11cf:	48 8b 38             	mov    rdi,QWORD PTR [rax]
  9d11d2:	48 8d b4 24 00 05 00 	lea    rsi,[rsp+0x500]
  9d11d9:	00 
  9d11da:	48 8d 94 24 c0 01 00 	lea    rdx,[rsp+0x1c0]
  9d11e1:	00 
  9d11e2:	ff 50 28             	call   QWORD PTR [rax+0x28]
  9d11e5:	89 84 24 90 03 00 00 	mov    DWORD PTR [rsp+0x390],eax
  9d11ec:	85 c0                	test   eax,eax
  9d11ee:	0f 89 8f 00 00 00    	jns    9d1283 <future_backtest::RunnerCore::run_multi+0x5fd3>
  9d11f4:	48 8d 84 24 b0 00 00 	lea    rax,[rsp+0xb0]
  9d11fb:	00 
  9d11fc:	48 89 84 24 40 01 00 	mov    QWORD PTR [rsp+0x140],rax
  9d1203:	00 
  9d1204:	48 8b 05 e5 5b fd 00 	mov    rax,QWORD PTR [rip+0xfd5be5]        # 19a6df0 <_DYNAMIC+0x5f0>
  9d120b:	48 89 84 24 48 01 00 	mov    QWORD PTR [rsp+0x148],rax
  9d1212:	00 
  9d1213:	48 8d 84 24 90 03 00 	lea    rax,[rsp+0x390]
  9d121a:	00 
  9d121b:	48 89 84 24 50 01 00 	mov    QWORD PTR [rsp+0x150],rax
  9d1222:	00 
  9d1223:	48 8b 05 ae 62 fd 00 	mov    rax,QWORD PTR [rip+0xfd62ae]        # 19a74d8 <_DYNAMIC+0xcd8>
  9d122a:	48 89 84 24 58 01 00 	mov    QWORD PTR [rsp+0x158],rax
  9d1231:	00 
  9d1232:	48 8d 05 37 b2 f2 00 	lea    rax,[rip+0xf2b237]        # 18fc470 <anon.609a31ba814f1e4156e50677fc366a7f.492.llvm.5215769359700358943+0xe78>
  9d1239:	48 89 84 24 10 06 00 	mov    QWORD PTR [rsp+0x610],rax
  9d1240:	00 
  9d1241:	48 c7 84 24 18 06 00 	mov    QWORD PTR [rsp+0x618],0x3
  9d1248:	00 03 00 00 00 
  9d124d:	48 c7 84 24 30 06 00 	mov    QWORD PTR [rsp+0x630],0x0
  9d1254:	00 00 00 00 00 
  9d1259:	48 8d 84 24 40 01 00 	lea    rax,[rsp+0x140]
  9d1260:	00 
  9d1261:	48 89 84 24 20 06 00 	mov    QWORD PTR [rsp+0x620],rax
  9d1268:	00 
  9d1269:	48 c7 84 24 28 06 00 	mov    QWORD PTR [rsp+0x628],0x2
  9d1270:	00 02 00 00 00 
  9d1275:	48 8d bc 24 10 06 00 	lea    rdi,[rsp+0x610]
  9d127c:	00 
  9d127d:	ff 15 6d 60 fd 00    	call   QWORD PTR [rip+0xfd606d]        # 19a72f0 <_DYNAMIC+0xaf0>
  9d1283:	48 8b 44 24 70       	mov    rax,QWORD PTR [rsp+0x70]
  9d1288:	48 89 84 24 10 06 00 	mov    QWORD PTR [rsp+0x610],rax
  9d128f:	00 
  9d1290:	48 8b 44 24 50       	mov    rax,QWORD PTR [rsp+0x50]
  9d1295:	48 89 84 24 18 06 00 	mov    QWORD PTR [rsp+0x618],rax
  9d129c:	00 
  9d129d:	48 89 9c 24 20 06 00 	mov    QWORD PTR [rsp+0x620],rbx
  9d12a4:	00 
  9d12a5:	48 8b 84 24 90 00 00 	mov    rax,QWORD PTR [rsp+0x90]
  9d12ac:	00 
  9d12ad:	48 89 84 24 28 06 00 	mov    QWORD PTR [rsp+0x628],rax
  9d12b4:	00 
  9d12b5:	48 89 ac 24 30 06 00 	mov    QWORD PTR [rsp+0x630],rbp
  9d12bc:	00 
  9d12bd:	48 8b 44 24 60       	mov    rax,QWORD PTR [rsp+0x60]
  9d12c2:	48 89 84 24 38 06 00 	mov    QWORD PTR [rsp+0x638],rax
  9d12c9:	00 
  9d12ca:	48 8d bc 24 10 06 00 	lea    rdi,[rsp+0x610]
  9d12d1:	00 
  9d12d2:	e8 29 0b fd ff       	call   9a1e00 <core::ptr::drop_in_place<(alloc::ffi::c_str::CString,alloc::ffi::c_str::CString,alloc::ffi::c_str::CString)>>
  9d12d7:	48 8d bc 24 c0 01 00 	lea    rdi,[rsp+0x1c0]
  9d12de:	00 
  9d12df:	e8 fc 2b fd ff       	call   9a3ee0 <core::ptr::drop_in_place<future_backtest::ffi::FfiCtx>>
  9d12e4:	49 81 c6 a0 02 00 00 	add    r14,0x2a0
  9d12eb:	4c 39 b4 24 b8 00 00 	cmp    QWORD PTR [rsp+0xb8],r14
  9d12f2:	00 
  9d12f3:	0f 85 d9 fc ff ff    	jne    9d0fd2 <future_backtest::RunnerCore::run_multi+0x5d22>
  9d12f9:	48 8b bc 24 b0 00 00 	mov    rdi,QWORD PTR [rsp+0xb0]
  9d1300:	00 
  9d1301:	48 3b bc 24 38 03 00 	cmp    rdi,QWORD PTR [rsp+0x338]
  9d1308:	00 
  9d1309:	0f 83 bb 2d 00 00    	jae    9d40ca <future_backtest::RunnerCore::run_multi+0x8e1a>
  9d130f:	48 8b 84 24 10 01 00 	mov    rax,QWORD PTR [rsp+0x110]
  9d1316:	00 
  9d1317:	48 8b 8c 24 20 0e 00 	mov    rcx,QWORD PTR [rsp+0xe20]
  9d131e:	00 
  9d131f:	48 89 04 f9          	mov    QWORD PTR [rcx+rdi*8],rax
  9d1323:	48 8d bc 24 70 01 00 	lea    rdi,[rsp+0x170]
  9d132a:	00 
  9d132b:	e8 40 6d fd ff       	call   9a8070 <core::ptr::drop_in_place<alloc::vec::Vec<future_backtest::Order::trade_order::TradingOrder>>>
  9d1330:	48 8b 5c 24 48       	mov    rbx,QWORD PTR [rsp+0x48]
  9d1335:	48 8b 94 24 b0 00 00 	mov    rdx,QWORD PTR [rsp+0xb0]
  9d133c:	00 
  9d133d:	48 39 da             	cmp    rdx,rbx
  9d1340:	0f 83 f0 2c 00 00    	jae    9d4036 <future_backtest::RunnerCore::run_multi+0x8d86>
  9d1346:	48 8b 44 24 40       	mov    rax,QWORD PTR [rsp+0x40]
  9d134b:	48 69 ca 28 15 00 00 	imul   rcx,rdx,0x1528
  9d1352:	4c 8d 3c 08          	lea    r15,[rax+rcx*1]
  9d1356:	49 81 c7 58 13 00 00 	add    r15,0x1358
  9d135d:	48 8d 3c 08          	lea    rdi,[rax+rcx*1]
  9d1361:	48 81 c7 68 07 00 00 	add    rdi,0x768
  9d1368:	4c 89 fe             	mov    rsi,r15
  9d136b:	e8 70 dc fd ff       	call   9aefe0 <hashbrown::map::HashMap<K,V,S,A>::get_inner>
  9d1370:	49 89 c6             	mov    r14,rax
  9d1373:	48 85 c0             	test   rax,rax
  9d1376:	74 0f                	je     9d1387 <future_backtest::RunnerCore::run_multi+0x60d7>
  9d1378:	f2 41 0f 10 86 60 02 	movsd  xmm0,QWORD PTR [r14+0x260]
  9d137f:	00 00 
  9d1381:	f2 0f 11 44 24 70    	movsd  QWORD PTR [rsp+0x70],xmm0
  9d1387:	48 8b 5c 24 48       	mov    rbx,QWORD PTR [rsp+0x48]
  9d138c:	48 8b 94 24 b0 00 00 	mov    rdx,QWORD PTR [rsp+0xb0]
  9d1393:	00 
  9d1394:	48 39 da             	cmp    rdx,rbx
  9d1397:	0f 83 a5 2c 00 00    	jae    9d4042 <future_backtest::RunnerCore::run_multi+0x8d92>
  9d139d:	48 8b 44 24 40       	mov    rax,QWORD PTR [rsp+0x40]
  9d13a2:	48 69 ca 28 15 00 00 	imul   rcx,rdx,0x1528
  9d13a9:	48 8d 3c 08          	lea    rdi,[rax+rcx*1]
  9d13ad:	48 81 c7 80 09 00 00 	add    rdi,0x980
  9d13b4:	4c 89 fe             	mov    rsi,r15
  9d13b7:	e8 84 dd fd ff       	call   9af140 <hashbrown::map::HashMap<K,V,S,A>::get_inner>
  9d13bc:	48 85 c0             	test   rax,rax
  9d13bf:	0f 84 b9 03 00 00    	je     9d177e <future_backtest::RunnerCore::run_multi+0x64ce>
  9d13c5:	4d 85 f6             	test   r14,r14
  9d13c8:	0f 84 b0 03 00 00    	je     9d177e <future_backtest::RunnerCore::run_multi+0x64ce>
  9d13ce:	48 8b 5c 24 48       	mov    rbx,QWORD PTR [rsp+0x48]
  9d13d3:	48 8b 94 24 b0 00 00 	mov    rdx,QWORD PTR [rsp+0xb0]
  9d13da:	00 
  9d13db:	48 39 da             	cmp    rdx,rbx
  9d13de:	0f 83 10 2d 00 00    	jae    9d40f4 <future_backtest::RunnerCore::run_multi+0x8e44>
  9d13e4:	0f 10 40 18          	movups xmm0,XMMWORD PTR [rax+0x18]
  9d13e8:	0f 29 84 24 90 00 00 	movaps XMMWORD PTR [rsp+0x90],xmm0
  9d13ef:	00 
  9d13f0:	48 8b 44 24 40       	mov    rax,QWORD PTR [rsp+0x40]
  9d13f5:	48 69 ca 28 15 00 00 	imul   rcx,rdx,0x1528
  9d13fc:	48 8d 34 08          	lea    rsi,[rax+rcx*1]
  9d1400:	48 81 c6 58 13 00 00 	add    rsi,0x1358
  9d1407:	66 0f 10 84 08 d0 13 	movupd xmm0,XMMWORD PTR [rax+rcx*1+0x13d0]
  9d140e:	00 00 
  9d1410:	66 0f 29 44 24 50    	movapd XMMWORD PTR [rsp+0x50],xmm0
  9d1416:	48 8d bc 24 e8 04 00 	lea    rdi,[rsp+0x4e8]
  9d141d:	00 
  9d141e:	48 8d 15 bb ae f2 00 	lea    rdx,[rip+0xf2aebb]        # 18fc2e0 <anon.609a31ba814f1e4156e50677fc366a7f.492.llvm.5215769359700358943+0xce8>
  9d1425:	ff 15 55 58 fd 00    	call   QWORD PTR [rip+0xfd5855]        # 19a6c80 <_DYNAMIC+0x480>
  9d142b:	48 8b 74 24 48       	mov    rsi,QWORD PTR [rsp+0x48]
  9d1430:	48 8b bc 24 b0 00 00 	mov    rdi,QWORD PTR [rsp+0xb0]
  9d1437:	00 
  9d1438:	48 39 f7             	cmp    rdi,rsi
  9d143b:	0f 83 db 2c 00 00    	jae    9d411c <future_backtest::RunnerCore::run_multi+0x8e6c>
  9d1441:	48 8b 44 24 40       	mov    rax,QWORD PTR [rsp+0x40]
  9d1446:	48 69 cf 28 15 00 00 	imul   rcx,rdi,0x1528
  9d144d:	48 8d 34 08          	lea    rsi,[rax+rcx*1]
  9d1451:	48 81 c6 30 0b 00 00 	add    rsi,0xb30
  9d1458:	48 8d bc 24 20 03 00 	lea    rdi,[rsp+0x320]
  9d145f:	00 
  9d1460:	48 8d 15 a9 ae f2 00 	lea    rdx,[rip+0xf2aea9]        # 18fc310 <anon.609a31ba814f1e4156e50677fc366a7f.492.llvm.5215769359700358943+0xd18>
  9d1467:	ff 15 13 58 fd 00    	call   QWORD PTR [rip+0xfd5813]        # 19a6c80 <_DYNAMIC+0x480>
  9d146d:	48 8b 74 24 48       	mov    rsi,QWORD PTR [rsp+0x48]
  9d1472:	48 8b bc 24 b0 00 00 	mov    rdi,QWORD PTR [rsp+0xb0]
  9d1479:	00 
  9d147a:	48 39 f7             	cmp    rdi,rsi
  9d147d:	0f 83 ab 2c 00 00    	jae    9d412e <future_backtest::RunnerCore::run_multi+0x8e7e>
  9d1483:	48 8b 44 24 40       	mov    rax,QWORD PTR [rsp+0x40]
  9d1488:	48 69 cf 28 15 00 00 	imul   rcx,rdi,0x1528
  9d148f:	48 8d 34 08          	lea    rsi,[rax+rcx*1]
  9d1493:	48 81 c6 48 0b 00 00 	add    rsi,0xb48
  9d149a:	48 8d bc 24 70 01 00 	lea    rdi,[rsp+0x170]
  9d14a1:	00 
  9d14a2:	48 8d 15 97 ae f2 00 	lea    rdx,[rip+0xf2ae97]        # 18fc340 <anon.609a31ba814f1e4156e50677fc366a7f.492.llvm.5215769359700358943+0xd48>
  9d14a9:	ff 15 d1 57 fd 00    	call   QWORD PTR [rip+0xfd57d1]        # 19a6c80 <_DYNAMIC+0x480>
  9d14af:	48 8b 9c 24 e8 04 00 	mov    rbx,QWORD PTR [rsp+0x4e8]
  9d14b6:	00 
  9d14b7:	4c 8b b4 24 f0 04 00 	mov    r14,QWORD PTR [rsp+0x4f0]
  9d14be:	00 
  9d14bf:	48 8b 74 24 48       	mov    rsi,QWORD PTR [rsp+0x48]
  9d14c4:	48 8b bc 24 b0 00 00 	mov    rdi,QWORD PTR [rsp+0xb0]
  9d14cb:	00 
  9d14cc:	48 39 f7             	cmp    rdi,rsi
  9d14cf:	0f 83 6b 2c 00 00    	jae    9d4140 <future_backtest::RunnerCore::run_multi+0x8e90>
  9d14d5:	48 8b 44 24 40       	mov    rax,QWORD PTR [rsp+0x40]
  9d14da:	48 69 cf 28 15 00 00 	imul   rcx,rdi,0x1528
  9d14e1:	48 ba 00 00 00 00 00 	movabs rdx,0x8000000000000000
  9d14e8:	00 00 80 
  9d14eb:	48 39 94 08 f0 13 00 	cmp    QWORD PTR [rax+rcx*1+0x13f0],rdx
  9d14f2:	00 
  9d14f3:	75 1f                	jne    9d1514 <future_backtest::RunnerCore::run_multi+0x6264>
  9d14f5:	48 85 db             	test   rbx,rbx
  9d14f8:	0f 84 c2 00 00 00    	je     9d15c0 <future_backtest::RunnerCore::run_multi+0x6310>
  9d14fe:	ba 01 00 00 00       	mov    edx,0x1
  9d1503:	4c 89 f7             	mov    rdi,r14
  9d1506:	48 89 de             	mov    rsi,rbx
  9d1509:	ff 15 11 55 fd 00    	call   QWORD PTR [rip+0xfd5511]        # 19a6a20 <_DYNAMIC+0x220>
  9d150f:	e9 ac 00 00 00       	jmp    9d15c0 <future_backtest::RunnerCore::run_multi+0x6310>
  9d1514:	48 8d 3c 08          	lea    rdi,[rax+rcx*1]
  9d1518:	48 81 c7 f0 13 00 00 	add    rdi,0x13f0
  9d151f:	48 8b 94 24 f8 04 00 	mov    rdx,QWORD PTR [rsp+0x4f8]
  9d1526:	00 
  9d1527:	f2 0f 10 84 08 d8 07 	movsd  xmm0,QWORD PTR [rax+rcx*1+0x7d8]
  9d152e:	00 00 
  9d1530:	48 89 9c 24 c8 1a 00 	mov    QWORD PTR [rsp+0x1ac8],rbx
  9d1537:	00 
  9d1538:	4c 89 b4 24 d0 1a 00 	mov    QWORD PTR [rsp+0x1ad0],r14
  9d153f:	00 
  9d1540:	48 89 94 24 d8 1a 00 	mov    QWORD PTR [rsp+0x1ad8],rdx
  9d1547:	00 
  9d1548:	0f 28 4c 24 50       	movaps xmm1,XMMWORD PTR [rsp+0x50]
  9d154d:	0f 11 8c 24 e0 1a 00 	movups XMMWORD PTR [rsp+0x1ae0],xmm1
  9d1554:	00 
  9d1555:	48 c7 84 24 f0 1a 00 	mov    QWORD PTR [rsp+0x1af0],0x0
  9d155c:	00 00 00 00 00 
  9d1561:	f2 0f 10 4c 24 70    	movsd  xmm1,QWORD PTR [rsp+0x70]
  9d1567:	f2 0f 11 8c 24 f8 1a 	movsd  QWORD PTR [rsp+0x1af8],xmm1
  9d156e:	00 00 
  9d1570:	66 0f 6f 8c 24 90 00 	movdqa xmm1,XMMWORD PTR [rsp+0x90]
  9d1577:	00 00 
  9d1579:	f3 0f 7f 8c 24 00 1b 	movdqu XMMWORD PTR [rsp+0x1b00],xmm1
  9d1580:	00 00 
  9d1582:	f2 0f 11 84 24 10 1b 	movsd  QWORD PTR [rsp+0x1b10],xmm0
  9d1589:	00 00 
  9d158b:	0f 10 84 08 08 08 00 	movups xmm0,XMMWORD PTR [rax+rcx*1+0x808]
  9d1592:	00 
  9d1593:	0f 11 84 24 18 1b 00 	movups XMMWORD PTR [rsp+0x1b18],xmm0
  9d159a:	00 
  9d159b:	66 0f 10 84 08 c8 07 	movupd xmm0,XMMWORD PTR [rax+rcx*1+0x7c8]
  9d15a2:	00 00 
  9d15a4:	66 0f c6 c0 01       	shufpd xmm0,xmm0,0x1
  9d15a9:	66 0f 11 84 24 28 1b 	movupd XMMWORD PTR [rsp+0x1b28],xmm0
  9d15b0:	00 00 
  9d15b2:	48 8d b4 24 c8 1a 00 	lea    rsi,[rsp+0x1ac8]
  9d15b9:	00 
  9d15ba:	ff 15 b8 61 fd 00    	call   QWORD PTR [rip+0xfd61b8]        # 19a7778 <_DYNAMIC+0xf78>
  9d15c0:	48 8b 74 24 48       	mov    rsi,QWORD PTR [rsp+0x48]
  9d15c5:	48 8b bc 24 b0 00 00 	mov    rdi,QWORD PTR [rsp+0xb0]
  9d15cc:	00 
  9d15cd:	48 39 f7             	cmp    rdi,rsi
  9d15d0:	0f 83 7c 2b 00 00    	jae    9d4152 <future_backtest::RunnerCore::run_multi+0x8ea2>
  9d15d6:	48 8b 44 24 40       	mov    rax,QWORD PTR [rsp+0x40]
  9d15db:	48 69 cf 28 15 00 00 	imul   rcx,rdi,0x1528
  9d15e2:	66 0f 10 84 08 58 07 	movupd xmm0,XMMWORD PTR [rax+rcx*1+0x758]
  9d15e9:	00 00 
  9d15eb:	66 0f 29 44 24 70    	movapd XMMWORD PTR [rsp+0x70],xmm0
  9d15f1:	48 8d bc 24 10 06 00 	lea    rdi,[rsp+0x610]
  9d15f8:	00 
  9d15f9:	48 8d b4 24 20 03 00 	lea    rsi,[rsp+0x320]
  9d1600:	00 
  9d1601:	48 8d 15 80 ad f2 00 	lea    rdx,[rip+0xf2ad80]        # 18fc388 <anon.609a31ba814f1e4156e50677fc366a7f.492.llvm.5215769359700358943+0xd90>
  9d1608:	ff 15 72 56 fd 00    	call   QWORD PTR [rip+0xfd5672]        # 19a6c80 <_DYNAMIC+0x480>
  9d160e:	48 8b 84 24 20 06 00 	mov    rax,QWORD PTR [rsp+0x620]
  9d1615:	00 
  9d1616:	48 8d 8c 24 68 05 00 	lea    rcx,[rsp+0x568]
  9d161d:	00 
  9d161e:	48 89 41 10          	mov    QWORD PTR [rcx+0x10],rax
  9d1622:	0f 10 84 24 10 06 00 	movups xmm0,XMMWORD PTR [rsp+0x610]
  9d1629:	00 
  9d162a:	0f 11 01             	movups XMMWORD PTR [rcx],xmm0
  9d162d:	0f 28 44 24 50       	movaps xmm0,XMMWORD PTR [rsp+0x50]
  9d1632:	0f 11 84 24 80 05 00 	movups XMMWORD PTR [rsp+0x580],xmm0
  9d1639:	00 
  9d163a:	66 0f 28 44 24 70    	movapd xmm0,XMMWORD PTR [rsp+0x70]
  9d1640:	66 0f 11 84 24 90 05 	movupd XMMWORD PTR [rsp+0x590],xmm0
  9d1647:	00 00 
  9d1649:	48 c7 84 24 00 05 00 	mov    QWORD PTR [rsp+0x500],0x2
  9d1650:	00 02 00 00 00 
  9d1655:	48 8b 74 24 48       	mov    rsi,QWORD PTR [rsp+0x48]
  9d165a:	48 8b bc 24 b0 00 00 	mov    rdi,QWORD PTR [rsp+0xb0]
  9d1661:	00 
  9d1662:	48 39 f7             	cmp    rdi,rsi
  9d1665:	0f 83 f9 2a 00 00    	jae    9d4164 <future_backtest::RunnerCore::run_multi+0x8eb4>
  9d166b:	48 8b 5c 24 40       	mov    rbx,QWORD PTR [rsp+0x40]
  9d1670:	4c 69 f7 28 15 00 00 	imul   r14,rdi,0x1528
  9d1677:	48 b8 00 00 00 00 00 	movabs rax,0x8000000000000000
  9d167e:	00 00 80 
  9d1681:	4a 39 84 33 f0 13 00 	cmp    QWORD PTR [rbx+r14*1+0x13f0],rax
  9d1688:	00 
  9d1689:	74 2e                	je     9d16b9 <future_backtest::RunnerCore::run_multi+0x6409>
  9d168b:	48 8d bc 24 10 06 00 	lea    rdi,[rsp+0x610]
  9d1692:	00 
  9d1693:	48 8d b4 24 00 05 00 	lea    rsi,[rsp+0x500]
  9d169a:	00 
  9d169b:	e8 30 77 00 00       	call   9d8dd0 <<future_backtest::BacktestResult::backtest_result::BacktestShareStatusSlice as core::clone::Clone>::clone>
  9d16a0:	4a 8d 3c 33          	lea    rdi,[rbx+r14*1]
  9d16a4:	48 81 c7 f0 13 00 00 	add    rdi,0x13f0
  9d16ab:	48 8d b4 24 10 06 00 	lea    rsi,[rsp+0x610]
  9d16b2:	00 
  9d16b3:	ff 15 b7 5f fd 00    	call   QWORD PTR [rip+0xfd5fb7]        # 19a7670 <_DYNAMIC+0xe70>
  9d16b9:	48 8b 84 24 88 00 00 	mov    rax,QWORD PTR [rsp+0x88]
  9d16c0:	00 
  9d16c1:	48 83 78 10 00       	cmp    QWORD PTR [rax+0x10],0x0
  9d16c6:	0f 85 aa 2a 00 00    	jne    9d4176 <future_backtest::RunnerCore::run_multi+0x8ec6>
  9d16cc:	48 8b 84 24 88 00 00 	mov    rax,QWORD PTR [rsp+0x88]
  9d16d3:	00 
  9d16d4:	48 c7 40 10 ff ff ff 	mov    QWORD PTR [rax+0x10],0xffffffffffffffff
  9d16db:	ff 
  9d16dc:	48 8b 84 24 30 03 00 	mov    rax,QWORD PTR [rsp+0x330]
  9d16e3:	00 
  9d16e4:	48 89 84 24 50 01 00 	mov    QWORD PTR [rsp+0x150],rax
  9d16eb:	00 
  9d16ec:	0f 10 84 24 20 03 00 	movups xmm0,XMMWORD PTR [rsp+0x320]
  9d16f3:	00 
  9d16f4:	0f 29 84 24 40 01 00 	movaps XMMWORD PTR [rsp+0x140],xmm0
  9d16fb:	00 
  9d16fc:	48 8b 84 24 80 01 00 	mov    rax,QWORD PTR [rsp+0x180]
  9d1703:	00 
  9d1704:	48 8d 8c 24 58 01 00 	lea    rcx,[rsp+0x158]
  9d170b:	00 
  9d170c:	48 89 41 10          	mov    QWORD PTR [rcx+0x10],rax
  9d1710:	66 0f 10 84 24 70 01 	movupd xmm0,XMMWORD PTR [rsp+0x170]
  9d1717:	00 00 
  9d1719:	66 0f 11 01          	movupd XMMWORD PTR [rcx],xmm0
  9d171d:	ba a0 00 00 00       	mov    edx,0xa0
  9d1722:	48 8d 9c 24 10 06 00 	lea    rbx,[rsp+0x610]
  9d1729:	00 
  9d172a:	48 89 df             	mov    rdi,rbx
  9d172d:	48 8d b4 24 00 05 00 	lea    rsi,[rsp+0x500]
  9d1734:	00 
  9d1735:	ff 15 0d 54 fd 00    	call   QWORD PTR [rip+0xfd540d]        # 19a6b48 <memcpy@GLIBC_2.14>
  9d173b:	48 8d bc 24 c0 01 00 	lea    rdi,[rsp+0x1c0]
  9d1742:	00 
  9d1743:	48 8b b4 24 28 01 00 	mov    rsi,QWORD PTR [rsp+0x128]
  9d174a:	00 
  9d174b:	48 8d 94 24 40 01 00 	lea    rdx,[rsp+0x140]
  9d1752:	00 
  9d1753:	48 89 d9             	mov    rcx,rbx
  9d1756:	e8 e5 f8 04 00       	call   a21040 <hashbrown::map::HashMap<K,V,S,A>::insert>
  9d175b:	83 bc 24 c0 01 00 00 	cmp    DWORD PTR [rsp+0x1c0],0x3
  9d1762:	03 
  9d1763:	74 0d                	je     9d1772 <future_backtest::RunnerCore::run_multi+0x64c2>
  9d1765:	48 8d bc 24 c0 01 00 	lea    rdi,[rsp+0x1c0]
  9d176c:	00 
  9d176d:	e8 7e 6b fd ff       	call   9a82f0 <core::ptr::drop_in_place<future_backtest::BacktestResult::backtest_result::BacktestShareStatusSlice>>
  9d1772:	48 8b 84 24 88 00 00 	mov    rax,QWORD PTR [rsp+0x88]
  9d1779:	00 
  9d177a:	48 ff 40 10          	inc    QWORD PTR [rax+0x10]
  9d177e:	48 8b 5c 24 48       	mov    rbx,QWORD PTR [rsp+0x48]
  9d1783:	48 8b 94 24 b0 00 00 	mov    rdx,QWORD PTR [rsp+0xb0]
  9d178a:	00 
  9d178b:	48 39 da             	cmp    rdx,rbx
  9d178e:	0f 83 ba 28 00 00    	jae    9d404e <future_backtest::RunnerCore::run_multi+0x8d9e>
  9d1794:	48 69 f2 28 15 00 00 	imul   rsi,rdx,0x1528
  9d179b:	48 03 74 24 40       	add    rsi,QWORD PTR [rsp+0x40]
  9d17a0:	83 bc 24 e0 0e 00 00 	cmp    DWORD PTR [rsp+0xee0],0x2
  9d17a7:	02 
  9d17a8:	48 8d 8c 24 e0 0e 00 	lea    rcx,[rsp+0xee0]
  9d17af:	00 
  9d17b0:	b8 00 00 00 00       	mov    eax,0x0
  9d17b5:	48 0f 44 c8          	cmove  rcx,rax
  9d17b9:	44 0f b6 84 24 c1 04 	movzx  r8d,BYTE PTR [rsp+0x4c1]
  9d17c0:	00 00 
  9d17c2:	48 8d bc 24 10 06 00 	lea    rdi,[rsp+0x610]
  9d17c9:	00 
  9d17ca:	e8 21 96 ff ff       	call   9cadf0 <future_backtest::RunnerCore::make_ffi_ctx>
  9d17cf:	48 8b 9c 24 10 06 00 	mov    rbx,QWORD PTR [rsp+0x610]
  9d17d6:	00 
  9d17d7:	4c 8b bc 24 18 06 00 	mov    r15,QWORD PTR [rsp+0x618]
  9d17de:	00 
  9d17df:	48 83 fb 03          	cmp    rbx,0x3
  9d17e3:	0f 84 97 16 00 00    	je     9d2e80 <future_backtest::RunnerCore::run_multi+0x7bd0>
  9d17e9:	ba e8 00 00 00       	mov    edx,0xe8
  9d17ee:	48 8d bc 24 d0 01 00 	lea    rdi,[rsp+0x1d0]
  9d17f5:	00 
  9d17f6:	48 8d b4 24 20 06 00 	lea    rsi,[rsp+0x620]
  9d17fd:	00 
  9d17fe:	ff 15 44 53 fd 00    	call   QWORD PTR [rip+0xfd5344]        # 19a6b48 <memcpy@GLIBC_2.14>
  9d1804:	48 89 9c 24 c0 01 00 	mov    QWORD PTR [rsp+0x1c0],rbx
  9d180b:	00 
  9d180c:	4c 89 bc 24 c8 01 00 	mov    QWORD PTR [rsp+0x1c8],r15
  9d1813:	00 
  9d1814:	48 8b b4 24 a8 03 00 	mov    rsi,QWORD PTR [rsp+0x3a8]
  9d181b:	00 
  9d181c:	48 8b 94 24 b0 03 00 	mov    rdx,QWORD PTR [rsp+0x3b0]
  9d1823:	00 
  9d1824:	48 8d bc 24 10 06 00 	lea    rdi,[rsp+0x610]
  9d182b:	00 
  9d182c:	ff 15 d6 6c fd 00    	call   QWORD PTR [rip+0xfd6cd6]        # 19a8508 <_DYNAMIC+0x1d08>
  9d1832:	48 8d bc 24 10 06 00 	lea    rdi,[rsp+0x610]
  9d1839:	00 
  9d183a:	e8 91 76 fd ff       	call   9a8ed0 <core::result::Result<T,E>::unwrap_or_default>
  9d183f:	49 89 c6             	mov    r14,rax
  9d1842:	48 89 d3             	mov    rbx,rdx
  9d1845:	48 8b 44 24 18       	mov    rax,QWORD PTR [rsp+0x18]
  9d184a:	48 8b 40 10          	mov    rax,QWORD PTR [rax+0x10]
  9d184e:	48 b9 00 00 00 00 00 	movabs rcx,0x8000000000000000
  9d1855:	00 00 80 
  9d1858:	48 ff c9             	dec    rcx
  9d185b:	48 39 c8             	cmp    rax,rcx
  9d185e:	0f 83 f6 27 00 00    	jae    9d405a <future_backtest::RunnerCore::run_multi+0x8daa>
  9d1864:	48 ff c0             	inc    rax
  9d1867:	48 8b 4c 24 18       	mov    rcx,QWORD PTR [rsp+0x18]
  9d186c:	48 89 41 10          	mov    QWORD PTR [rcx+0x10],rax
  9d1870:	48 8b bc 24 c0 00 00 	mov    rdi,QWORD PTR [rsp+0xc0]
  9d1877:	00 
  9d1878:	48 8d b4 24 a0 03 00 	lea    rsi,[rsp+0x3a0]
  9d187f:	00 
  9d1880:	e8 fb d5 fd ff       	call   9aee80 <hashbrown::map::HashMap<K,V,S,A>::get_inner>
  9d1885:	48 85 c0             	test   rax,rax
  9d1888:	0f 84 b6 01 00 00    	je     9d1a44 <future_backtest::RunnerCore::run_multi+0x6794>
  9d188e:	48 83 c0 18          	add    rax,0x18
  9d1892:	48 8d bc 24 10 06 00 	lea    rdi,[rsp+0x610]
  9d1899:	00 
  9d189a:	48 8d b4 24 a0 03 00 	lea    rsi,[rsp+0x3a0]
  9d18a1:	00 
  9d18a2:	4c 89 f2             	mov    rdx,r14
  9d18a5:	48 89 c1             	mov    rcx,rax
  9d18a8:	e8 93 3e 00 00       	call   9d5740 <future_backtest::RunnerCore::run_multi::{{closure}}>
  9d18ad:	48 8b 84 24 20 06 00 	mov    rax,QWORD PTR [rsp+0x620]
  9d18b4:	00 
  9d18b5:	48 89 84 24 30 03 00 	mov    QWORD PTR [rsp+0x330],rax
  9d18bc:	00 
  9d18bd:	66 0f 10 84 24 10 06 	movupd xmm0,XMMWORD PTR [rsp+0x610]
  9d18c4:	00 00 
  9d18c6:	66 0f 29 84 24 20 03 	movapd XMMWORD PTR [rsp+0x320],xmm0
  9d18cd:	00 00 
  9d18cf:	0f b6 ac 24 28 06 00 	movzx  ebp,BYTE PTR [rsp+0x628]
  9d18d6:	00 
  9d18d7:	ba cf 00 00 00       	mov    edx,0xcf
  9d18dc:	48 8d bc 24 00 05 00 	lea    rdi,[rsp+0x500]
  9d18e3:	00 
  9d18e4:	48 8d b4 24 29 06 00 	lea    rsi,[rsp+0x629]
  9d18eb:	00 
  9d18ec:	ff 15 56 52 fd 00    	call   QWORD PTR [rip+0xfd5256]        # 19a6b48 <memcpy@GLIBC_2.14>
  9d18f2:	48 8b 44 24 18       	mov    rax,QWORD PTR [rsp+0x18]
  9d18f7:	48 ff 48 10          	dec    QWORD PTR [rax+0x10]
  9d18fb:	40 80 fd 02          	cmp    bpl,0x2
  9d18ff:	0f 84 48 01 00 00    	je     9d1a4d <future_backtest::RunnerCore::run_multi+0x679d>
  9d1905:	48 8b 84 24 30 03 00 	mov    rax,QWORD PTR [rsp+0x330]
  9d190c:	00 
  9d190d:	48 89 84 24 20 06 00 	mov    QWORD PTR [rsp+0x620],rax
  9d1914:	00 
  9d1915:	66 0f 28 84 24 20 03 	movapd xmm0,XMMWORD PTR [rsp+0x320]
  9d191c:	00 00 
  9d191e:	66 0f 29 84 24 10 06 	movapd XMMWORD PTR [rsp+0x610],xmm0
  9d1925:	00 00 
  9d1927:	40 88 ac 24 28 06 00 	mov    BYTE PTR [rsp+0x628],bpl
  9d192e:	00 
  9d192f:	ba cf 00 00 00       	mov    edx,0xcf
  9d1934:	48 8d bc 24 29 06 00 	lea    rdi,[rsp+0x629]
  9d193b:	00 
  9d193c:	48 8d b4 24 00 05 00 	lea    rsi,[rsp+0x500]
  9d1943:	00 
  9d1944:	ff 15 fe 51 fd 00    	call   QWORD PTR [rip+0xfd51fe]        # 19a6b48 <memcpy@GLIBC_2.14>
  9d194a:	48 8b b4 24 f8 00 00 	mov    rsi,QWORD PTR [rsp+0xf8]
  9d1951:	00 
  9d1952:	48 8b bc 24 b0 00 00 	mov    rdi,QWORD PTR [rsp+0xb0]
  9d1959:	00 
  9d195a:	48 39 f7             	cmp    rdi,rsi
  9d195d:	0f 83 31 28 00 00    	jae    9d4194 <future_backtest::RunnerCore::run_multi+0x8ee4>
  9d1963:	48 8b 84 24 f0 00 00 	mov    rax,QWORD PTR [rsp+0xf0]
  9d196a:	00 
  9d196b:	48 8b 04 f8          	mov    rax,QWORD PTR [rax+rdi*8]
  9d196f:	48 8b 38             	mov    rdi,QWORD PTR [rax]
  9d1972:	48 8d b4 24 10 06 00 	lea    rsi,[rsp+0x610]
  9d1979:	00 
  9d197a:	48 8d 94 24 c0 01 00 	lea    rdx,[rsp+0x1c0]
  9d1981:	00 
  9d1982:	ff 50 18             	call   QWORD PTR [rax+0x18]
  9d1985:	89 84 24 94 03 00 00 	mov    DWORD PTR [rsp+0x394],eax
  9d198c:	85 c0                	test   eax,eax
  9d198e:	0f 89 b9 00 00 00    	jns    9d1a4d <future_backtest::RunnerCore::run_multi+0x679d>
  9d1994:	48 8d 84 24 b0 00 00 	lea    rax,[rsp+0xb0]
  9d199b:	00 
  9d199c:	48 89 84 24 40 01 00 	mov    QWORD PTR [rsp+0x140],rax
  9d19a3:	00 
  9d19a4:	48 8b 05 45 54 fd 00 	mov    rax,QWORD PTR [rip+0xfd5445]        # 19a6df0 <_DYNAMIC+0x5f0>
  9d19ab:	48 89 84 24 48 01 00 	mov    QWORD PTR [rsp+0x148],rax
  9d19b2:	00 
  9d19b3:	48 8d 84 24 94 03 00 	lea    rax,[rsp+0x394]
  9d19ba:	00 
  9d19bb:	48 89 84 24 50 01 00 	mov    QWORD PTR [rsp+0x150],rax
  9d19c2:	00 
  9d19c3:	48 8b 05 0e 5b fd 00 	mov    rax,QWORD PTR [rip+0xfd5b0e]        # 19a74d8 <_DYNAMIC+0xcd8>
  9d19ca:	48 89 84 24 58 01 00 	mov    QWORD PTR [rsp+0x158],rax
  9d19d1:	00 
  9d19d2:	48 8d 84 24 c8 03 00 	lea    rax,[rsp+0x3c8]
  9d19d9:	00 
  9d19da:	48 89 84 24 60 01 00 	mov    QWORD PTR [rsp+0x160],rax
  9d19e1:	00 
  9d19e2:	48 8b 05 7f 5b fd 00 	mov    rax,QWORD PTR [rip+0xfd5b7f]        # 19a7568 <_DYNAMIC+0xd68>
  9d19e9:	48 89 84 24 68 01 00 	mov    QWORD PTR [rsp+0x168],rax
  9d19f0:	00 
  9d19f1:	48 8d 05 08 aa f2 00 	lea    rax,[rip+0xf2aa08]        # 18fc400 <anon.609a31ba814f1e4156e50677fc366a7f.492.llvm.5215769359700358943+0xe08>
  9d19f8:	48 89 84 24 70 01 00 	mov    QWORD PTR [rsp+0x170],rax
  9d19ff:	00 
  9d1a00:	48 c7 84 24 78 01 00 	mov    QWORD PTR [rsp+0x178],0x4
  9d1a07:	00 04 00 00 00 
  9d1a0c:	48 c7 84 24 90 01 00 	mov    QWORD PTR [rsp+0x190],0x0
  9d1a13:	00 00 00 00 00 
  9d1a18:	48 8d 84 24 40 01 00 	lea    rax,[rsp+0x140]
  9d1a1f:	00 
  9d1a20:	48 89 84 24 80 01 00 	mov    QWORD PTR [rsp+0x180],rax
  9d1a27:	00 
  9d1a28:	48 c7 84 24 88 01 00 	mov    QWORD PTR [rsp+0x188],0x3
  9d1a2f:	00 03 00 00 00 
  9d1a34:	48 8d bc 24 70 01 00 	lea    rdi,[rsp+0x170]
  9d1a3b:	00 
  9d1a3c:	ff 15 ae 58 fd 00    	call   QWORD PTR [rip+0xfd58ae]        # 19a72f0 <_DYNAMIC+0xaf0>
  9d1a42:	eb 09                	jmp    9d1a4d <future_backtest::RunnerCore::run_multi+0x679d>
  9d1a44:	48 8b 44 24 18       	mov    rax,QWORD PTR [rsp+0x18]
  9d1a49:	48 ff 48 10          	dec    QWORD PTR [rax+0x10]
  9d1a4d:	41 c6 06 00          	mov    BYTE PTR [r14],0x0
  9d1a51:	48 85 db             	test   rbx,rbx
  9d1a54:	74 11                	je     9d1a67 <future_backtest::RunnerCore::run_multi+0x67b7>
  9d1a56:	ba 01 00 00 00       	mov    edx,0x1
  9d1a5b:	4c 89 f7             	mov    rdi,r14
  9d1a5e:	48 89 de             	mov    rsi,rbx
  9d1a61:	ff 15 b9 4f fd 00    	call   QWORD PTR [rip+0xfd4fb9]        # 19a6a20 <_DYNAMIC+0x220>
  9d1a67:	48 8d bc 24 c0 01 00 	lea    rdi,[rsp+0x1c0]
  9d1a6e:	00 
  9d1a6f:	e8 6c 24 fd ff       	call   9a3ee0 <core::ptr::drop_in_place<future_backtest::ffi::FfiCtx>>
  9d1a74:	48 8b 8c 24 a8 00 00 	mov    rcx,QWORD PTR [rsp+0xa8]
  9d1a7b:	00 
  9d1a7c:	48 8b b4 24 40 03 00 	mov    rsi,QWORD PTR [rsp+0x340]
  9d1a83:	00 
  9d1a84:	48 39 ce             	cmp    rsi,rcx
  9d1a87:	48 89 f0             	mov    rax,rsi
  9d1a8a:	48 83 d0 00          	adc    rax,0x0
  9d1a8e:	48 89 f2             	mov    rdx,rsi
  9d1a91:	48 39 ce             	cmp    rsi,rcx
  9d1a94:	0f 82 c5 f3 ff ff    	jb     9d0e5f <future_backtest::RunnerCore::run_multi+0x5baf>
  9d1a9a:	83 bc 24 e0 0e 00 00 	cmp    DWORD PTR [rsp+0xee0],0x2
  9d1aa1:	02 
  9d1aa2:	74 1f                	je     9d1ac3 <future_backtest::RunnerCore::run_multi+0x6813>
  9d1aa4:	f2 0f 10 84 24 c8 03 	movsd  xmm0,QWORD PTR [rsp+0x3c8]
  9d1aab:	00 00 
  9d1aad:	f3 0f 7e 8c 24 d0 03 	movq   xmm1,QWORD PTR [rsp+0x3d0]
  9d1ab4:	00 00 
  9d1ab6:	48 8d bc 24 e0 0e 00 	lea    rdi,[rsp+0xee0]
  9d1abd:	00 
  9d1abe:	e8 4d 8d ff ff       	call   9ca810 <future_backtest::RunnerCore::MetaRunState::record_portfolio>
  9d1ac3:	48 8b 44 24 18       	mov    rax,QWORD PTR [rsp+0x18]
  9d1ac8:	48 83 78 10 00       	cmp    QWORD PTR [rax+0x10],0x0
  9d1acd:	0f 85 f4 26 00 00    	jne    9d41c7 <future_backtest::RunnerCore::run_multi+0x8f17>
  9d1ad3:	48 8b 44 24 18       	mov    rax,QWORD PTR [rsp+0x18]
  9d1ad8:	48 c7 40 10 ff ff ff 	mov    QWORD PTR [rax+0x10],0xffffffffffffffff
  9d1adf:	ff 
  9d1ae0:	48 8d bc 24 10 06 00 	lea    rdi,[rsp+0x610]
  9d1ae7:	00 
  9d1ae8:	48 8d b4 24 70 03 00 	lea    rsi,[rsp+0x370]
  9d1aef:	00 
  9d1af0:	48 8d 15 99 a6 f2 00 	lea    rdx,[rip+0xf2a699]        # 18fc190 <anon.609a31ba814f1e4156e50677fc366a7f.492.llvm.5215769359700358943+0xb98>
  9d1af7:	ff 15 83 51 fd 00    	call   QWORD PTR [rip+0xfd5183]        # 19a6c80 <_DYNAMIC+0x480>
  9d1afd:	48 8b 84 24 20 06 00 	mov    rax,QWORD PTR [rsp+0x620]
  9d1b04:	00 
  9d1b05:	48 89 84 24 d0 01 00 	mov    QWORD PTR [rsp+0x1d0],rax
  9d1b0c:	00 
  9d1b0d:	66 0f 10 84 24 10 06 	movupd xmm0,XMMWORD PTR [rsp+0x610]
  9d1b14:	00 00 
  9d1b16:	66 0f 29 84 24 c0 01 	movapd XMMWORD PTR [rsp+0x1c0],xmm0
  9d1b1d:	00 00 
  9d1b1f:	48 8b bc 24 80 00 00 	mov    rdi,QWORD PTR [rsp+0x80]
  9d1b26:	00 
  9d1b27:	48 8d b4 24 c0 01 00 	lea    rsi,[rsp+0x1c0]
  9d1b2e:	00 
  9d1b2f:	ff 15 bb 63 fd 00    	call   QWORD PTR [rip+0xfd63bb]        # 19a7ef0 <_DYNAMIC+0x16f0>
  9d1b35:	49 89 c7             	mov    r15,rax
  9d1b38:	48 8b 54 24 18       	mov    rdx,QWORD PTR [rsp+0x18]
  9d1b3d:	48 8b 42 10          	mov    rax,QWORD PTR [rdx+0x10]
  9d1b41:	48 8d 48 01          	lea    rcx,[rax+0x1]
  9d1b45:	48 89 4a 10          	mov    QWORD PTR [rdx+0x10],rcx
  9d1b49:	4d 85 ff             	test   r15,r15
  9d1b4c:	0f 85 2e 13 00 00    	jne    9d2e80 <future_backtest::RunnerCore::run_multi+0x7bd0>
  9d1b52:	48 ba 00 00 00 00 00 	movabs rdx,0x8000000000000000
  9d1b59:	00 00 80 
  9d1b5c:	48 ff ca             	dec    rdx
  9d1b5f:	48 39 d1             	cmp    rcx,rdx
  9d1b62:	0f 83 68 26 00 00    	jae    9d41d0 <future_backtest::RunnerCore::run_multi+0x8f20>
  9d1b68:	48 83 c0 02          	add    rax,0x2
  9d1b6c:	48 8b 4c 24 18       	mov    rcx,QWORD PTR [rsp+0x18]
  9d1b71:	48 89 41 10          	mov    QWORD PTR [rcx+0x10],rax
  9d1b75:	0f 10 81 70 01 00 00 	movups xmm0,XMMWORD PTR [rcx+0x170]
  9d1b7c:	0f 29 44 24 50       	movaps XMMWORD PTR [rsp+0x50],xmm0
  9d1b81:	48 8d bc 24 10 06 00 	lea    rdi,[rsp+0x610]
  9d1b88:	00 
  9d1b89:	48 8b b4 24 20 01 00 	mov    rsi,QWORD PTR [rsp+0x120]
  9d1b90:	00 
  9d1b91:	e8 0a 67 07 00       	call   a482a0 <<hashbrown::raw::RawTable<T,A> as core::clone::Clone>::clone>
  9d1b96:	0f 28 44 24 50       	movaps xmm0,XMMWORD PTR [rsp+0x50]
  9d1b9b:	0f 11 84 24 30 06 00 	movups XMMWORD PTR [rsp+0x630],xmm0
  9d1ba2:	00 
  9d1ba3:	0f 10 84 24 10 06 00 	movups xmm0,XMMWORD PTR [rsp+0x610]
  9d1baa:	00 
  9d1bab:	f3 0f 6f 8c 24 20 06 	movdqu xmm1,XMMWORD PTR [rsp+0x620]
  9d1bb2:	00 00 
  9d1bb4:	0f 29 84 24 70 01 00 	movaps XMMWORD PTR [rsp+0x170],xmm0
  9d1bbb:	00 
  9d1bbc:	66 0f 7f 8c 24 80 01 	movdqa XMMWORD PTR [rsp+0x180],xmm1
  9d1bc3:	00 00 
  9d1bc5:	66 0f 10 84 24 30 06 	movupd xmm0,XMMWORD PTR [rsp+0x630]
  9d1bcc:	00 00 
  9d1bce:	66 0f 29 84 24 90 01 	movapd XMMWORD PTR [rsp+0x190],xmm0
  9d1bd5:	00 00 
  9d1bd7:	48 8b 44 24 18       	mov    rax,QWORD PTR [rsp+0x18]
  9d1bdc:	48 ff 48 10          	dec    QWORD PTR [rax+0x10]
  9d1be0:	48 8d 3d 59 8a f2 00 	lea    rdi,[rip+0xf28a59]        # 18fa640 <anon.609a31ba814f1e4156e50677fc366a7f.248.llvm.5215769359700358943+0x78>
  9d1be7:	e8 b4 e9 03 00       	call   a105a0 <std::thread::local::LocalKey<T>::with>
  9d1bec:	0f 10 05 65 8a f2 00 	movups xmm0,XMMWORD PTR [rip+0xf28a65]        # 18fa658 <anon.609a31ba814f1e4156e50677fc366a7f.248.llvm.5215769359700358943+0x90>
  9d1bf3:	0f 29 84 24 50 01 00 	movaps XMMWORD PTR [rsp+0x150],xmm0
  9d1bfa:	00 
  9d1bfb:	66 0f 10 05 45 8a f2 	movupd xmm0,XMMWORD PTR [rip+0xf28a45]        # 18fa648 <anon.609a31ba814f1e4156e50677fc366a7f.248.llvm.5215769359700358943+0x80>
  9d1c02:	00 
  9d1c03:	66 0f 29 84 24 40 01 	movapd XMMWORD PTR [rsp+0x140],xmm0
  9d1c0a:	00 00 
  9d1c0c:	48 89 84 24 60 01 00 	mov    QWORD PTR [rsp+0x160],rax
  9d1c13:	00 
  9d1c14:	48 89 94 24 68 01 00 	mov    QWORD PTR [rsp+0x168],rdx
  9d1c1b:	00 
  9d1c1c:	45 31 e4             	xor    r12d,r12d
  9d1c1f:	31 db                	xor    ebx,ebx
  9d1c21:	48 3b 9c 24 a8 00 00 	cmp    rbx,QWORD PTR [rsp+0xa8]
  9d1c28:	00 
  9d1c29:	0f 83 40 01 00 00    	jae    9d1d6f <future_backtest::RunnerCore::run_multi+0x6abf>
  9d1c2f:	48 8b 74 24 48       	mov    rsi,QWORD PTR [rsp+0x48]
  9d1c34:	48 39 f3             	cmp    rbx,rsi
  9d1c37:	0f 83 9f 23 00 00    	jae    9d3fdc <future_backtest::RunnerCore::run_multi+0x8d2c>
  9d1c3d:	4c 8b 74 24 40       	mov    r14,QWORD PTR [rsp+0x40]
  9d1c42:	f2 43 0f 10 84 26 d0 	movsd  xmm0,QWORD PTR [r14+r12*1+0x13d0]
  9d1c49:	13 00 00 
  9d1c4c:	f2 0f 11 44 24 70    	movsd  QWORD PTR [rsp+0x70],xmm0
  9d1c52:	f2 43 0f 10 84 26 d8 	movsd  xmm0,QWORD PTR [r14+r12*1+0x13d8]
  9d1c59:	13 00 00 
  9d1c5c:	f2 0f 11 84 24 90 00 	movsd  QWORD PTR [rsp+0x90],xmm0
  9d1c63:	00 00 
  9d1c65:	66 0f 28 84 24 90 01 	movapd xmm0,XMMWORD PTR [rsp+0x190]
  9d1c6c:	00 00 
  9d1c6e:	66 0f 29 44 24 50    	movapd XMMWORD PTR [rsp+0x50],xmm0
  9d1c74:	48 8d bc 24 10 06 00 	lea    rdi,[rsp+0x610]
  9d1c7b:	00 
  9d1c7c:	48 8d b4 24 70 01 00 	lea    rsi,[rsp+0x170]
  9d1c83:	00 
  9d1c84:	e8 17 66 07 00       	call   a482a0 <<hashbrown::raw::RawTable<T,A> as core::clone::Clone>::clone>
  9d1c89:	0f 28 44 24 50       	movaps xmm0,XMMWORD PTR [rsp+0x50]
  9d1c8e:	0f 11 84 24 30 06 00 	movups XMMWORD PTR [rsp+0x630],xmm0
  9d1c95:	00 
  9d1c96:	0f 10 84 24 10 06 00 	movups xmm0,XMMWORD PTR [rsp+0x610]
  9d1c9d:	00 
  9d1c9e:	f3 0f 6f 8c 24 20 06 	movdqu xmm1,XMMWORD PTR [rsp+0x620]
  9d1ca5:	00 00 
  9d1ca7:	0f 29 84 24 00 05 00 	movaps XMMWORD PTR [rsp+0x500],xmm0
  9d1cae:	00 
  9d1caf:	66 0f 7f 8c 24 10 05 	movdqa XMMWORD PTR [rsp+0x510],xmm1
  9d1cb6:	00 00 
  9d1cb8:	0f 10 84 24 30 06 00 	movups xmm0,XMMWORD PTR [rsp+0x630]
  9d1cbf:	00 
  9d1cc0:	0f 29 84 24 20 05 00 	movaps XMMWORD PTR [rsp+0x520],xmm0
  9d1cc7:	00 
  9d1cc8:	66 0f 28 84 24 60 01 	movapd xmm0,XMMWORD PTR [rsp+0x160]
  9d1ccf:	00 00 
  9d1cd1:	66 0f 29 44 24 50    	movapd XMMWORD PTR [rsp+0x50],xmm0
  9d1cd7:	48 8d bc 24 10 06 00 	lea    rdi,[rsp+0x610]
  9d1cde:	00 
  9d1cdf:	48 8d b4 24 40 01 00 	lea    rsi,[rsp+0x140]
  9d1ce6:	00 
  9d1ce7:	e8 24 6b 07 00       	call   a48810 <<hashbrown::raw::RawTable<T,A> as core::clone::Clone>::clone>
  9d1cec:	4d 01 e6             	add    r14,r12
  9d1cef:	0f 28 44 24 50       	movaps xmm0,XMMWORD PTR [rsp+0x50]
  9d1cf4:	0f 11 84 24 30 06 00 	movups XMMWORD PTR [rsp+0x630],xmm0
  9d1cfb:	00 
  9d1cfc:	0f 10 84 24 10 06 00 	movups xmm0,XMMWORD PTR [rsp+0x610]
  9d1d03:	00 
  9d1d04:	0f 10 8c 24 20 06 00 	movups xmm1,XMMWORD PTR [rsp+0x620]
  9d1d0b:	00 
  9d1d0c:	0f 29 84 24 c0 01 00 	movaps XMMWORD PTR [rsp+0x1c0],xmm0
  9d1d13:	00 
  9d1d14:	0f 29 8c 24 d0 01 00 	movaps XMMWORD PTR [rsp+0x1d0],xmm1
  9d1d1b:	00 
  9d1d1c:	0f 10 84 24 30 06 00 	movups xmm0,XMMWORD PTR [rsp+0x630]
  9d1d23:	00 
  9d1d24:	0f 29 84 24 e0 01 00 	movaps XMMWORD PTR [rsp+0x1e0],xmm0
  9d1d2b:	00 
  9d1d2c:	4c 89 f7             	mov    rdi,r14
  9d1d2f:	f2 0f 10 84 24 90 00 	movsd  xmm0,QWORD PTR [rsp+0x90]
  9d1d36:	00 00 
  9d1d38:	f3 0f 7e 4c 24 70    	movq   xmm1,QWORD PTR [rsp+0x70]
  9d1d3e:	48 8d b4 24 00 05 00 	lea    rsi,[rsp+0x500]
  9d1d45:	00 
  9d1d46:	48 8d 94 24 c0 01 00 	lea    rdx,[rsp+0x1c0]
  9d1d4d:	00 
  9d1d4e:	ff 15 8c 54 fd 00    	call   QWORD PTR [rip+0xfd548c]        # 19a71e0 <_DYNAMIC+0x9e0>
  9d1d54:	49 89 c7             	mov    r15,rax
  9d1d57:	49 81 c4 28 15 00 00 	add    r12,0x1528
  9d1d5e:	48 ff c3             	inc    rbx
  9d1d61:	48 85 c0             	test   rax,rax
  9d1d64:	0f 84 b7 fe ff ff    	je     9d1c21 <future_backtest::RunnerCore::run_multi+0x6971>
  9d1d6a:	e9 f7 10 00 00       	jmp    9d2e66 <future_backtest::RunnerCore::run_multi+0x7bb6>
  9d1d6f:	48 8d bc 24 40 01 00 	lea    rdi,[rsp+0x140]
  9d1d76:	00 
  9d1d77:	e8 64 a7 07 00       	call   a4c4e0 <<hashbrown::raw::RawTable<T,A> as core::ops::drop::Drop>::drop>
  9d1d7c:	48 8d bc 24 70 01 00 	lea    rdi,[rsp+0x170]
  9d1d83:	00 
  9d1d84:	e8 77 b4 07 00       	call   a4d200 <<hashbrown::raw::RawTable<T,A> as core::ops::drop::Drop>::drop>
  9d1d89:	48 8b 44 24 18       	mov    rax,QWORD PTR [rsp+0x18]
  9d1d8e:	48 83 78 10 00       	cmp    QWORD PTR [rax+0x10],0x0
  9d1d93:	0f 85 46 24 00 00    	jne    9d41df <future_backtest::RunnerCore::run_multi+0x8f2f>
  9d1d99:	48 8b 44 24 18       	mov    rax,QWORD PTR [rsp+0x18]
  9d1d9e:	48 c7 40 10 ff ff ff 	mov    QWORD PTR [rax+0x10],0xffffffffffffffff
  9d1da5:	ff 
  9d1da6:	48 8b 84 24 80 03 00 	mov    rax,QWORD PTR [rsp+0x380]
  9d1dad:	00 
  9d1dae:	48 89 84 24 20 06 00 	mov    QWORD PTR [rsp+0x620],rax
  9d1db5:	00 
  9d1db6:	66 0f 10 84 24 70 03 	movupd xmm0,XMMWORD PTR [rsp+0x370]
  9d1dbd:	00 00 
  9d1dbf:	66 0f 29 84 24 10 06 	movapd XMMWORD PTR [rsp+0x610],xmm0
  9d1dc6:	00 00 
  9d1dc8:	48 8b bc 24 80 00 00 	mov    rdi,QWORD PTR [rsp+0x80]
  9d1dcf:	00 
  9d1dd0:	48 8d b4 24 10 06 00 	lea    rsi,[rsp+0x610]
  9d1dd7:	00 
  9d1dd8:	ff 15 3a 61 fd 00    	call   QWORD PTR [rip+0xfd613a]        # 19a7f18 <_DYNAMIC+0x1718>
  9d1dde:	49 89 c7             	mov    r15,rax
  9d1de1:	48 8b 44 24 18       	mov    rax,QWORD PTR [rsp+0x18]
  9d1de6:	48 ff 40 10          	inc    QWORD PTR [rax+0x10]
  9d1dea:	4d 85 ff             	test   r15,r15
  9d1ded:	0f 85 ad 10 00 00    	jne    9d2ea0 <future_backtest::RunnerCore::run_multi+0x7bf0>
  9d1df3:	48 ff 84 24 e8 05 00 	inc    QWORD PTR [rsp+0x5e8]
  9d1dfa:	00 
  9d1dfb:	48 8d bc 24 a0 03 00 	lea    rdi,[rsp+0x3a0]
  9d1e02:	00 
  9d1e03:	e8 48 3d fd ff       	call   9a5b50 <core::ptr::drop_in_place<future_backtest::DataStruct::event_slice::EventSlice>>
  9d1e08:	48 8b 84 24 b8 01 00 	mov    rax,QWORD PTR [rsp+0x1b8]
  9d1e0f:	00 
  9d1e10:	48 85 c0             	test   rax,rax
  9d1e13:	4c 8d b4 24 b0 10 00 	lea    r14,[rsp+0x10b0]
  9d1e1a:	00 
  9d1e1b:	4c 8b 3d 26 4d fd 00 	mov    r15,QWORD PTR [rip+0xfd4d26]        # 19a6b48 <memcpy@GLIBC_2.14>
  9d1e22:	0f 85 ab de ff ff    	jne    9cfcd3 <future_backtest::RunnerCore::run_multi+0x4a23>
  9d1e28:	48 8d 84 24 e8 05 00 	lea    rax,[rsp+0x5e8]
  9d1e2f:	00 
  9d1e30:	48 89 84 24 c0 01 00 	mov    QWORD PTR [rsp+0x1c0],rax
  9d1e37:	00 
  9d1e38:	48 8b 05 b1 4f fd 00 	mov    rax,QWORD PTR [rip+0xfd4fb1]        # 19a6df0 <_DYNAMIC+0x5f0>
  9d1e3f:	48 89 84 24 c8 01 00 	mov    QWORD PTR [rsp+0x1c8],rax
  9d1e46:	00 
  9d1e47:	48 8d 05 9a a7 f2 00 	lea    rax,[rip+0xf2a79a]        # 18fc5e8 <anon.609a31ba814f1e4156e50677fc366a7f.492.llvm.5215769359700358943+0xff0>
  9d1e4e:	48 89 84 24 10 06 00 	mov    QWORD PTR [rsp+0x610],rax
  9d1e55:	00 
  9d1e56:	48 c7 84 24 18 06 00 	mov    QWORD PTR [rsp+0x618],0x2
  9d1e5d:	00 02 00 00 00 
  9d1e62:	48 c7 84 24 30 06 00 	mov    QWORD PTR [rsp+0x630],0x0
  9d1e69:	00 00 00 00 00 
  9d1e6e:	48 8d 84 24 c0 01 00 	lea    rax,[rsp+0x1c0]
  9d1e75:	00 
  9d1e76:	48 89 84 24 20 06 00 	mov    QWORD PTR [rsp+0x620],rax
  9d1e7d:	00 
  9d1e7e:	48 c7 84 24 28 06 00 	mov    QWORD PTR [rsp+0x628],0x1
  9d1e85:	00 01 00 00 00 
  9d1e8a:	48 8d bc 24 10 06 00 	lea    rdi,[rsp+0x610]
  9d1e91:	00 
  9d1e92:	ff 15 c0 4d fd 00    	call   QWORD PTR [rip+0xfd4dc0]        # 19a6c58 <_DYNAMIC+0x458>
  9d1e98:	48 83 bc 24 a8 00 00 	cmp    QWORD PTR [rsp+0xa8],0x0
  9d1e9f:	00 00 
  9d1ea1:	0f 84 88 06 00 00    	je     9d252f <future_backtest::RunnerCore::run_multi+0x727f>
  9d1ea7:	48 8d 05 02 ab f2 00 	lea    rax,[rip+0xf2ab02]        # 18fc9b0 <anon.609a31ba814f1e4156e50677fc366a7f.492.llvm.5215769359700358943+0x13b8>
  9d1eae:	48 89 44 24 50       	mov    QWORD PTR [rsp+0x50],rax
  9d1eb3:	4c 8d ac 24 e0 0e 00 	lea    r13,[rsp+0xee0]
  9d1eba:	00 
  9d1ebb:	48 8d 9c 24 10 06 00 	lea    rbx,[rsp+0x610]
  9d1ec2:	00 
  9d1ec3:	45 31 e4             	xor    r12d,r12d
  9d1ec6:	31 ed                	xor    ebp,ebp
  9d1ec8:	eb 1b                	jmp    9d1ee5 <future_backtest::RunnerCore::run_multi+0x6c35>
  9d1eca:	48 8b 84 24 a8 00 00 	mov    rax,QWORD PTR [rsp+0xa8]
  9d1ed1:	00 
  9d1ed2:	48 ff c5             	inc    rbp
  9d1ed5:	49 81 c4 28 15 00 00 	add    r12,0x1528
  9d1edc:	48 39 c5             	cmp    rbp,rax
  9d1edf:	0f 83 4c 06 00 00    	jae    9d2531 <future_backtest::RunnerCore::run_multi+0x7281>
  9d1ee5:	48 89 ac 24 f0 05 00 	mov    QWORD PTR [rsp+0x5f0],rbp
  9d1eec:	00 
  9d1eed:	48 8b 74 24 48       	mov    rsi,QWORD PTR [rsp+0x48]
  9d1ef2:	48 39 f5             	cmp    rbp,rsi
  9d1ef5:	0f 83 39 20 00 00    	jae    9d3f34 <future_backtest::RunnerCore::run_multi+0x8c84>
  9d1efb:	48 8b 74 24 40       	mov    rsi,QWORD PTR [rsp+0x40]
  9d1f00:	4c 01 e6             	add    rsi,r12
  9d1f03:	83 bc 24 e0 0e 00 00 	cmp    DWORD PTR [rsp+0xee0],0x2
  9d1f0a:	02 
  9d1f0b:	4c 89 e9             	mov    rcx,r13
  9d1f0e:	b8 00 00 00 00       	mov    eax,0x0
  9d1f13:	48 0f 44 c8          	cmove  rcx,rax
  9d1f17:	48 89 df             	mov    rdi,rbx
  9d1f1a:	48 89 ea             	mov    rdx,rbp
  9d1f1d:	45 31 c0             	xor    r8d,r8d
  9d1f20:	e8 cb 8e ff ff       	call   9cadf0 <future_backtest::RunnerCore::make_ffi_ctx>
  9d1f25:	4c 8b b4 24 10 06 00 	mov    r14,QWORD PTR [rsp+0x610]
  9d1f2c:	00 
  9d1f2d:	4c 8b bc 24 18 06 00 	mov    r15,QWORD PTR [rsp+0x618]
  9d1f34:	00 
  9d1f35:	49 83 fe 03          	cmp    r14,0x3
  9d1f39:	0f 84 6e 0f 00 00    	je     9d2ead <future_backtest::RunnerCore::run_multi+0x7bfd>
  9d1f3f:	ba e8 00 00 00       	mov    edx,0xe8
  9d1f44:	48 8d bc 24 d0 01 00 	lea    rdi,[rsp+0x1d0]
  9d1f4b:	00 
  9d1f4c:	48 8d b4 24 20 06 00 	lea    rsi,[rsp+0x620]
  9d1f53:	00 
  9d1f54:	ff 15 ee 4b fd 00    	call   QWORD PTR [rip+0xfd4bee]        # 19a6b48 <memcpy@GLIBC_2.14>
  9d1f5a:	4c 89 b4 24 c0 01 00 	mov    QWORD PTR [rsp+0x1c0],r14
  9d1f61:	00 
  9d1f62:	4c 89 bc 24 c8 01 00 	mov    QWORD PTR [rsp+0x1c8],r15
  9d1f69:	00 
  9d1f6a:	48 8b b4 24 f8 00 00 	mov    rsi,QWORD PTR [rsp+0xf8]
  9d1f71:	00 
  9d1f72:	48 8b bc 24 f0 05 00 	mov    rdi,QWORD PTR [rsp+0x5f0]
  9d1f79:	00 
  9d1f7a:	48 39 f7             	cmp    rdi,rsi
  9d1f7d:	0f 83 45 1f 00 00    	jae    9d3ec8 <future_backtest::RunnerCore::run_multi+0x8c18>
  9d1f83:	48 8b 84 24 f0 00 00 	mov    rax,QWORD PTR [rsp+0xf0]
  9d1f8a:	00 
  9d1f8b:	48 8b 04 f8          	mov    rax,QWORD PTR [rax+rdi*8]
  9d1f8f:	48 8b 38             	mov    rdi,QWORD PTR [rax]
  9d1f92:	48 8d b4 24 c0 01 00 	lea    rsi,[rsp+0x1c0]
  9d1f99:	00 
  9d1f9a:	ff 50 20             	call   QWORD PTR [rax+0x20]
  9d1f9d:	89 84 24 9c 03 00 00 	mov    DWORD PTR [rsp+0x39c],eax
  9d1fa4:	85 c0                	test   eax,eax
  9d1fa6:	0f 89 8a 00 00 00    	jns    9d2036 <future_backtest::RunnerCore::run_multi+0x6d86>
  9d1fac:	48 8d 84 24 f0 05 00 	lea    rax,[rsp+0x5f0]
  9d1fb3:	00 
  9d1fb4:	48 89 84 24 a0 03 00 	mov    QWORD PTR [rsp+0x3a0],rax
  9d1fbb:	00 
  9d1fbc:	48 8b 05 2d 4e fd 00 	mov    rax,QWORD PTR [rip+0xfd4e2d]        # 19a6df0 <_DYNAMIC+0x5f0>
  9d1fc3:	48 89 84 24 a8 03 00 	mov    QWORD PTR [rsp+0x3a8],rax
  9d1fca:	00 
  9d1fcb:	48 8d 84 24 9c 03 00 	lea    rax,[rsp+0x39c]
  9d1fd2:	00 
  9d1fd3:	48 89 84 24 b0 03 00 	mov    QWORD PTR [rsp+0x3b0],rax
  9d1fda:	00 
  9d1fdb:	48 8b 05 f6 54 fd 00 	mov    rax,QWORD PTR [rip+0xfd54f6]        # 19a74d8 <_DYNAMIC+0xcd8>
  9d1fe2:	48 89 84 24 b8 03 00 	mov    QWORD PTR [rsp+0x3b8],rax
  9d1fe9:	00 
  9d1fea:	48 8d 05 ef a9 f2 00 	lea    rax,[rip+0xf2a9ef]        # 18fc9e0 <anon.609a31ba814f1e4156e50677fc366a7f.492.llvm.5215769359700358943+0x13e8>
  9d1ff1:	48 89 84 24 10 06 00 	mov    QWORD PTR [rsp+0x610],rax
  9d1ff8:	00 
  9d1ff9:	48 c7 84 24 18 06 00 	mov    QWORD PTR [rsp+0x618],0x3
  9d2000:	00 03 00 00 00 
  9d2005:	48 c7 84 24 30 06 00 	mov    QWORD PTR [rsp+0x630],0x0
  9d200c:	00 00 00 00 00 
  9d2011:	48 8d 84 24 a0 03 00 	lea    rax,[rsp+0x3a0]
  9d2018:	00 
  9d2019:	48 89 84 24 20 06 00 	mov    QWORD PTR [rsp+0x620],rax
  9d2020:	00 
  9d2021:	48 c7 84 24 28 06 00 	mov    QWORD PTR [rsp+0x628],0x2
  9d2028:	00 02 00 00 00 
  9d202d:	48 89 df             	mov    rdi,rbx
  9d2030:	ff 15 ba 52 fd 00    	call   QWORD PTR [rip+0xfd52ba]        # 19a72f0 <_DYNAMIC+0xaf0>
  9d2036:	48 8b b4 24 90 02 00 	mov    rsi,QWORD PTR [rsp+0x290]
  9d203d:	00 
  9d203e:	48 85 f6             	test   rsi,rsi
  9d2041:	74 13                	je     9d2056 <future_backtest::RunnerCore::run_multi+0x6da6>
  9d2043:	48 8b bc 24 98 02 00 	mov    rdi,QWORD PTR [rsp+0x298]
  9d204a:	00 
  9d204b:	ba 01 00 00 00       	mov    edx,0x1
  9d2050:	ff 15 ca 49 fd 00    	call   QWORD PTR [rip+0xfd49ca]        # 19a6a20 <_DYNAMIC+0x220>
  9d2056:	83 bc 24 c0 01 00 00 	cmp    DWORD PTR [rsp+0x1c0],0x2
  9d205d:	02 
  9d205e:	0f 84 66 fe ff ff    	je     9d1eca <future_backtest::RunnerCore::run_multi+0x6c1a>
  9d2064:	48 8b b4 24 28 02 00 	mov    rsi,QWORD PTR [rsp+0x228]
  9d206b:	00 
  9d206c:	48 85 f6             	test   rsi,rsi
  9d206f:	74 13                	je     9d2084 <future_backtest::RunnerCore::run_multi+0x6dd4>
  9d2071:	48 8b bc 24 30 02 00 	mov    rdi,QWORD PTR [rsp+0x230]
  9d2078:	00 
  9d2079:	ba 01 00 00 00       	mov    edx,0x1
  9d207e:	ff 15 9c 49 fd 00    	call   QWORD PTR [rip+0xfd499c]        # 19a6a20 <_DYNAMIC+0x220>
  9d2084:	48 8b 84 24 40 02 00 	mov    rax,QWORD PTR [rsp+0x240]
  9d208b:	00 
  9d208c:	f0 48 ff 08          	lock dec QWORD PTR [rax]
  9d2090:	0f 85 34 fe ff ff    	jne    9d1eca <future_backtest::RunnerCore::run_multi+0x6c1a>
  9d2096:	48 8d bc 24 40 02 00 	lea    rdi,[rsp+0x240]
  9d209d:	00 
  9d209e:	ff 15 e4 53 fd 00    	call   QWORD PTR [rip+0xfd53e4]        # 19a7488 <_DYNAMIC+0xc88>
  9d20a4:	e9 21 fe ff ff       	jmp    9d1eca <future_backtest::RunnerCore::run_multi+0x6c1a>
  9d20a9:	48 8d 05 b0 9d f2 00 	lea    rax,[rip+0xf29db0]        # 18fbe60 <anon.609a31ba814f1e4156e50677fc366a7f.492.llvm.5215769359700358943+0x868>
  9d20b0:	48 89 84 24 d0 11 00 	mov    QWORD PTR [rsp+0x11d0],rax
  9d20b7:	00 
  9d20b8:	48 c7 84 24 d8 11 00 	mov    QWORD PTR [rsp+0x11d8],0x1
  9d20bf:	00 01 00 00 00 
  9d20c4:	48 c7 84 24 e0 11 00 	mov    QWORD PTR [rsp+0x11e0],0x8
  9d20cb:	00 08 00 00 00 
  9d20d0:	66 0f 57 c0          	xorpd  xmm0,xmm0
  9d20d4:	66 0f 11 84 24 e8 11 	movupd XMMWORD PTR [rsp+0x11e8],xmm0
  9d20db:	00 00 
  9d20dd:	48 8d bc 24 d0 11 00 	lea    rdi,[rsp+0x11d0]
  9d20e4:	00 
  9d20e5:	e8 26 b2 fd ff       	call   9ad310 <anyhow::__private::format_err>
  9d20ea:	e9 a9 0c 00 00       	jmp    9d2d98 <future_backtest::RunnerCore::run_multi+0x7ae8>
  9d20ef:	48 8d 05 32 9c f2 00 	lea    rax,[rip+0xf29c32]        # 18fbd28 <anon.609a31ba814f1e4156e50677fc366a7f.492.llvm.5215769359700358943+0x730>
  9d20f6:	48 89 84 24 d0 11 00 	mov    QWORD PTR [rsp+0x11d0],rax
  9d20fd:	00 
  9d20fe:	48 c7 84 24 d8 11 00 	mov    QWORD PTR [rsp+0x11d8],0x1
  9d2105:	00 01 00 00 00 
  9d210a:	48 c7 84 24 e0 11 00 	mov    QWORD PTR [rsp+0x11e0],0x8
  9d2111:	00 08 00 00 00 
  9d2116:	66 0f 57 c0          	xorpd  xmm0,xmm0
  9d211a:	66 0f 11 84 24 e8 11 	movupd XMMWORD PTR [rsp+0x11e8],xmm0
  9d2121:	00 00 
  9d2123:	48 8d bc 24 d0 11 00 	lea    rdi,[rsp+0x11d0]
  9d212a:	00 
  9d212b:	e8 e0 b1 fd ff       	call   9ad310 <anyhow::__private::format_err>
  9d2130:	e9 63 0c 00 00       	jmp    9d2d98 <future_backtest::RunnerCore::run_multi+0x7ae8>
  9d2135:	ff 15 55 4a fd 00    	call   QWORD PTR [rip+0xfd4a55]        # 19a6b90 <_DYNAMIC+0x390>
  9d213b:	48 89 c1             	mov    rcx,rax
  9d213e:	49 89 56 08          	mov    QWORD PTR [r14+0x8],rdx
  9d2142:	41 c6 46 10 01       	mov    BYTE PTR [r14+0x10],0x1
  9d2147:	48 ff c0             	inc    rax
  9d214a:	49 89 06             	mov    QWORD PTR [r14],rax
  9d214d:	0f 10 05 b4 e7 f2 00 	movups xmm0,XMMWORD PTR [rip+0xf2e7b4]        # 1900908 <anon.306c05995557b157a5a4a5b5d20bb2f5.311.llvm.2664273085281908480+0x10>
  9d2154:	0f 29 84 24 70 18 00 	movaps XMMWORD PTR [rsp+0x1870],xmm0
  9d215b:	00 
  9d215c:	66 0f 10 05 94 e7 f2 	movupd xmm0,XMMWORD PTR [rip+0xf2e794]        # 19008f8 <anon.306c05995557b157a5a4a5b5d20bb2f5.311.llvm.2664273085281908480>
  9d2163:	00 
  9d2164:	66 0f 29 84 24 60 18 	movapd XMMWORD PTR [rsp+0x1860],xmm0
  9d216b:	00 00 
  9d216d:	48 89 8c 24 80 18 00 	mov    QWORD PTR [rsp+0x1880],rcx
  9d2174:	00 
  9d2175:	48 89 94 24 88 18 00 	mov    QWORD PTR [rsp+0x1888],rdx
  9d217c:	00 
  9d217d:	e9 f6 98 ff ff       	jmp    9cba78 <future_backtest::RunnerCore::run_multi+0x7c8>
  9d2182:	ff 15 08 4a fd 00    	call   QWORD PTR [rip+0xfd4a08]        # 19a6b90 <_DYNAMIC+0x390>
  9d2188:	49 89 56 08          	mov    QWORD PTR [r14+0x8],rdx
  9d218c:	41 c6 46 10 01       	mov    BYTE PTR [r14+0x10],0x1
  9d2191:	e9 e2 98 ff ff       	jmp    9cba78 <future_backtest::RunnerCore::run_multi+0x7c8>
  9d2196:	48 8d 3d c3 f6 f0 00 	lea    rdi,[rip+0xf0f6c3]        # 18e1860 <anon.d0b8e27bea7bf57269a32e15b6abf5cf.229.llvm.1643563994444475245>
  9d219d:	ff 15 05 4e fd 00    	call   QWORD PTR [rip+0xfd4e05]        # 19a6fa8 <_DYNAMIC+0x7a8>
  9d21a3:	e9 54 20 00 00       	jmp    9d41fc <future_backtest::RunnerCore::run_multi+0x8f4c>
  9d21a8:	48 83 bc 24 e0 00 00 	cmp    QWORD PTR [rsp+0xe0],0x0
  9d21af:	00 00 
  9d21b1:	0f 84 0f 1e 00 00    	je     9d3fc6 <future_backtest::RunnerCore::run_multi+0x8d16>
  9d21b7:	48 8b 8c 24 d8 00 00 	mov    rcx,QWORD PTR [rsp+0xd8]
  9d21be:	00 
  9d21bf:	48 8d 81 20 01 00 00 	lea    rax,[rcx+0x120]
  9d21c6:	48 89 84 24 a0 03 00 	mov    QWORD PTR [rsp+0x3a0],rax
  9d21cd:	00 
  9d21ce:	48 8b 81 30 01 00 00 	mov    rax,QWORD PTR [rcx+0x130]
  9d21d5:	48 85 c0             	test   rax,rax
  9d21d8:	0f 84 ad 0b 00 00    	je     9d2d8b <future_backtest::RunnerCore::run_multi+0x7adb>
  9d21de:	4c 8b 89 28 01 00 00 	mov    r9,QWORD PTR [rcx+0x128]
  9d21e5:	48 83 f8 01          	cmp    rax,0x1
  9d21e9:	0f 85 70 03 00 00    	jne    9d255f <future_backtest::RunnerCore::run_multi+0x72af>
  9d21ef:	41 0f b6 09          	movzx  ecx,BYTE PTR [r9]
  9d21f3:	83 f9 2b             	cmp    ecx,0x2b
  9d21f6:	0f 84 8f 0b 00 00    	je     9d2d8b <future_backtest::RunnerCore::run_multi+0x7adb>
  9d21fc:	83 f9 2d             	cmp    ecx,0x2d
  9d21ff:	0f 84 86 0b 00 00    	je     9d2d8b <future_backtest::RunnerCore::run_multi+0x7adb>
  9d2205:	e9 59 03 00 00       	jmp    9d2563 <future_backtest::RunnerCore::run_multi+0x72b3>
  9d220a:	48 8d 84 24 b0 10 00 	lea    rax,[rsp+0x10b0]
  9d2211:	00 
  9d2212:	48 89 84 24 a0 03 00 	mov    QWORD PTR [rsp+0x3a0],rax
  9d2219:	00 
  9d221a:	48 8b 05 cf 4b fd 00 	mov    rax,QWORD PTR [rip+0xfd4bcf]        # 19a6df0 <_DYNAMIC+0x5f0>
  9d2221:	48 89 84 24 a8 03 00 	mov    QWORD PTR [rsp+0x3a8],rax
  9d2228:	00 
  9d2229:	48 8d 84 24 88 03 00 	lea    rax,[rsp+0x388]
  9d2230:	00 
  9d2231:	48 89 84 24 b0 03 00 	mov    QWORD PTR [rsp+0x3b0],rax
  9d2238:	00 
  9d2239:	48 8b 05 98 52 fd 00 	mov    rax,QWORD PTR [rip+0xfd5298]        # 19a74d8 <_DYNAMIC+0xcd8>
  9d2240:	48 89 84 24 b8 03 00 	mov    QWORD PTR [rsp+0x3b8],rax
  9d2247:	00 
  9d2248:	48 8d 05 11 a8 f2 00 	lea    rax,[rip+0xf2a811]        # 18fca60 <anon.609a31ba814f1e4156e50677fc366a7f.492.llvm.5215769359700358943+0x1468>
  9d224f:	48 89 84 24 10 06 00 	mov    QWORD PTR [rsp+0x610],rax
  9d2256:	00 
  9d2257:	48 c7 84 24 18 06 00 	mov    QWORD PTR [rsp+0x618],0x2
  9d225e:	00 02 00 00 00 
  9d2263:	48 c7 84 24 30 06 00 	mov    QWORD PTR [rsp+0x630],0x0
  9d226a:	00 00 00 00 00 
  9d226f:	48 8d 84 24 a0 03 00 	lea    rax,[rsp+0x3a0]
  9d2276:	00 
  9d2277:	48 89 84 24 20 06 00 	mov    QWORD PTR [rsp+0x620],rax
  9d227e:	00 
  9d227f:	48 c7 84 24 28 06 00 	mov    QWORD PTR [rsp+0x628],0x2
  9d2286:	00 02 00 00 00 
  9d228b:	48 8d bc 24 68 1b 00 	lea    rdi,[rsp+0x1b68]
  9d2292:	00 
  9d2293:	48 8d b4 24 10 06 00 	lea    rsi,[rsp+0x610]
  9d229a:	00 
  9d229b:	ff 15 df 4a fd 00    	call   QWORD PTR [rip+0xfd4adf]        # 19a6d80 <_DYNAMIC+0x580>
  9d22a1:	48 8d bc 24 68 1b 00 	lea    rdi,[rsp+0x1b68]
  9d22a8:	00 
  9d22a9:	e8 62 4b 04 00       	call   a16e10 <anyhow::error::<impl anyhow::Error>::msg>
  9d22ae:	49 89 c7             	mov    r15,rax
  9d22b1:	48 8d bc 24 c0 01 00 	lea    rdi,[rsp+0x1c0]
  9d22b8:	00 
  9d22b9:	e8 22 1c fd ff       	call   9a3ee0 <core::ptr::drop_in_place<future_backtest::ffi::FfiCtx>>
  9d22be:	e9 0e 0c 00 00       	jmp    9d2ed1 <future_backtest::RunnerCore::run_multi+0x7c21>
  9d22c3:	bf 08 00 00 00       	mov    edi,0x8
  9d22c8:	be b0 01 00 00       	mov    esi,0x1b0
  9d22cd:	ff 15 c5 49 fd 00    	call   QWORD PTR [rip+0xfd49c5]        # 19a6c98 <_DYNAMIC+0x498>
  9d22d3:	e9 24 1f 00 00       	jmp    9d41fc <future_backtest::RunnerCore::run_multi+0x8f4c>
  9d22d8:	ff 15 b2 48 fd 00    	call   QWORD PTR [rip+0xfd48b2]        # 19a6b90 <_DYNAMIC+0x390>
  9d22de:	48 89 c1             	mov    rcx,rax
  9d22e1:	4c 8b 64 24 68       	mov    r12,QWORD PTR [rsp+0x68]
  9d22e6:	49 89 04 24          	mov    QWORD PTR [r12],rax
  9d22ea:	49 89 54 24 08       	mov    QWORD PTR [r12+0x8],rdx
  9d22ef:	41 c6 44 24 10 01    	mov    BYTE PTR [r12+0x10],0x1
  9d22f5:	eb 53                	jmp    9d234a <future_backtest::RunnerCore::run_multi+0x709a>
  9d22f7:	40 b5 01             	mov    bpl,0x1
  9d22fa:	ff 15 90 48 fd 00    	call   QWORD PTR [rip+0xfd4890]        # 19a6b90 <_DYNAMIC+0x390>
  9d2300:	4c 8b 64 24 68       	mov    r12,QWORD PTR [rsp+0x68]
  9d2305:	49 89 54 24 08       	mov    QWORD PTR [r12+0x8],rdx
  9d230a:	41 c6 44 24 10 01    	mov    BYTE PTR [r12+0x10],0x1
  9d2310:	48 89 c1             	mov    rcx,rax
  9d2313:	48 ff c1             	inc    rcx
  9d2316:	49 89 0c 24          	mov    QWORD PTR [r12],rcx
  9d231a:	0f 10 05 37 83 f2 00 	movups xmm0,XMMWORD PTR [rip+0xf28337]        # 18fa658 <anon.609a31ba814f1e4156e50677fc366a7f.248.llvm.5215769359700358943+0x90>
  9d2321:	0f 29 84 24 e0 11 00 	movaps XMMWORD PTR [rsp+0x11e0],xmm0
  9d2328:	00 
  9d2329:	f3 0f 6f 05 17 83 f2 	movdqu xmm0,XMMWORD PTR [rip+0xf28317]        # 18fa648 <anon.609a31ba814f1e4156e50677fc366a7f.248.llvm.5215769359700358943+0x80>
  9d2330:	00 
  9d2331:	66 0f 7f 84 24 d0 11 	movdqa XMMWORD PTR [rsp+0x11d0],xmm0
  9d2338:	00 00 
  9d233a:	48 89 84 24 f0 11 00 	mov    QWORD PTR [rsp+0x11f0],rax
  9d2341:	00 
  9d2342:	48 89 94 24 f8 11 00 	mov    QWORD PTR [rsp+0x11f8],rdx
  9d2349:	00 
  9d234a:	40 b6 01             	mov    sil,0x1
  9d234d:	e9 7c 94 ff ff       	jmp    9cb7ce <future_backtest::RunnerCore::run_multi+0x51e>
  9d2352:	ff 15 38 48 fd 00    	call   QWORD PTR [rip+0xfd4838]        # 19a6b90 <_DYNAMIC+0x390>
  9d2358:	4c 8b 64 24 68       	mov    r12,QWORD PTR [rsp+0x68]
  9d235d:	49 89 04 24          	mov    QWORD PTR [r12],rax
  9d2361:	49 89 54 24 08       	mov    QWORD PTR [r12+0x8],rdx
  9d2366:	41 c6 44 24 10 01    	mov    BYTE PTR [r12+0x10],0x1
  9d236c:	0f 10 35 d5 82 f2 00 	movups xmm6,XMMWORD PTR [rip+0xf282d5]        # 18fa648 <anon.609a31ba814f1e4156e50677fc366a7f.248.llvm.5215769359700358943+0x80>
  9d2373:	0f 10 3d de 82 f2 00 	movups xmm7,XMMWORD PTR [rip+0xf282de]        # 18fa658 <anon.609a31ba814f1e4156e50677fc366a7f.248.llvm.5215769359700358943+0x90>
  9d237a:	e9 d2 94 ff ff       	jmp    9cb851 <future_backtest::RunnerCore::run_multi+0x5a1>
  9d237f:	bf 08 00 00 00       	mov    edi,0x8
  9d2384:	be a8 00 00 00       	mov    esi,0xa8
  9d2389:	ff 15 09 49 fd 00    	call   QWORD PTR [rip+0xfd4909]        # 19a6c98 <_DYNAMIC+0x498>
  9d238f:	e9 68 1e 00 00       	jmp    9d41fc <future_backtest::RunnerCore::run_multi+0x8f4c>
  9d2394:	0f 10 84 24 e0 11 00 	movups xmm0,XMMWORD PTR [rsp+0x11e0]
  9d239b:	00 
  9d239c:	0f 11 84 24 20 06 00 	movups XMMWORD PTR [rsp+0x620],xmm0
  9d23a3:	00 
  9d23a4:	48 89 8c 24 10 06 00 	mov    QWORD PTR [rsp+0x610],rcx
  9d23ab:	00 
  9d23ac:	48 89 84 24 18 06 00 	mov    QWORD PTR [rsp+0x618],rax
  9d23b3:	00 
  9d23b4:	b0 01                	mov    al,0x1
  9d23b6:	89 44 24 68          	mov    DWORD PTR [rsp+0x68],eax
  9d23ba:	48 8d bc 24 10 06 00 	lea    rdi,[rsp+0x610]
  9d23c1:	00 
  9d23c2:	e8 f9 5b 04 00       	call   a17fc0 <anyhow::error::<impl core::convert::From<E> for anyhow::Error>::from>
  9d23c7:	49 89 c7             	mov    r15,rax
  9d23ca:	e9 0f 0b 00 00       	jmp    9d2ede <future_backtest::RunnerCore::run_multi+0x7c2e>
  9d23cf:	66 0f 10 84 24 e0 11 	movupd xmm0,XMMWORD PTR [rsp+0x11e0]
  9d23d6:	00 00 
  9d23d8:	66 0f 11 84 24 20 06 	movupd XMMWORD PTR [rsp+0x620],xmm0
  9d23df:	00 00 
  9d23e1:	48 89 8c 24 10 06 00 	mov    QWORD PTR [rsp+0x610],rcx
  9d23e8:	00 
  9d23e9:	48 89 84 24 18 06 00 	mov    QWORD PTR [rsp+0x618],rax
  9d23f0:	00 
  9d23f1:	48 8d bc 24 10 06 00 	lea    rdi,[rsp+0x610]
  9d23f8:	00 
  9d23f9:	e8 c2 5b 04 00       	call   a17fc0 <anyhow::error::<impl core::convert::From<E> for anyhow::Error>::from>
  9d23fe:	49 89 c7             	mov    r15,rax
  9d2401:	b0 01                	mov    al,0x1
  9d2403:	89 44 24 68          	mov    DWORD PTR [rsp+0x68],eax
  9d2407:	48 8d bc 24 b0 10 00 	lea    rdi,[rsp+0x10b0]
  9d240e:	00 
  9d240f:	ff 15 bb 5e fd 00    	call   QWORD PTR [rip+0xfd5ebb]        # 19a82d0 <_DYNAMIC+0x1ad0>
  9d2415:	e9 c4 0a 00 00       	jmp    9d2ede <future_backtest::RunnerCore::run_multi+0x7c2e>
  9d241a:	48 89 fb             	mov    rbx,rdi
  9d241d:	48 89 b4 24 f8 05 00 	mov    QWORD PTR [rsp+0x5f8],rsi
  9d2424:	00 
  9d2425:	4c 89 84 24 e8 02 00 	mov    QWORD PTR [rsp+0x2e8],r8
  9d242c:	00 
  9d242d:	66 0f 13 a4 24 e8 00 	movlpd QWORD PTR [rsp+0xe8],xmm4
  9d2434:	00 00 
  9d2436:	66 0f 17 a4 24 00 03 	movhpd QWORD PTR [rsp+0x300],xmm4
  9d243d:	00 00 
  9d243f:	48 8d 84 24 f8 05 00 	lea    rax,[rsp+0x5f8]
  9d2446:	00 
  9d2447:	48 89 84 24 d0 11 00 	mov    QWORD PTR [rsp+0x11d0],rax
  9d244e:	00 
  9d244f:	48 8b 0d 9a 49 fd 00 	mov    rcx,QWORD PTR [rip+0xfd499a]        # 19a6df0 <_DYNAMIC+0x5f0>
  9d2456:	48 89 8c 24 d8 11 00 	mov    QWORD PTR [rsp+0x11d8],rcx
  9d245d:	00 
  9d245e:	48 8d 84 24 e8 02 00 	lea    rax,[rsp+0x2e8]
  9d2465:	00 
  9d2466:	48 89 84 24 e0 11 00 	mov    QWORD PTR [rsp+0x11e0],rax
  9d246d:	00 
  9d246e:	48 89 8c 24 e8 11 00 	mov    QWORD PTR [rsp+0x11e8],rcx
  9d2475:	00 
  9d2476:	48 8d 84 24 e8 00 00 	lea    rax,[rsp+0xe8]
  9d247d:	00 
  9d247e:	48 89 84 24 f0 11 00 	mov    QWORD PTR [rsp+0x11f0],rax
  9d2485:	00 
  9d2486:	48 8b 05 db 50 fd 00 	mov    rax,QWORD PTR [rip+0xfd50db]        # 19a7568 <_DYNAMIC+0xd68>
  9d248d:	48 89 84 24 f8 11 00 	mov    QWORD PTR [rsp+0x11f8],rax
  9d2494:	00 
  9d2495:	48 8d 8c 24 00 03 00 	lea    rcx,[rsp+0x300]
  9d249c:	00 
  9d249d:	48 89 8c 24 00 12 00 	mov    QWORD PTR [rsp+0x1200],rcx
  9d24a4:	00 
  9d24a5:	48 89 84 24 08 12 00 	mov    QWORD PTR [rsp+0x1208],rax
  9d24ac:	00 
  9d24ad:	48 8d 05 04 9a f2 00 	lea    rax,[rip+0xf29a04]        # 18fbeb8 <anon.609a31ba814f1e4156e50677fc366a7f.492.llvm.5215769359700358943+0x8c0>
  9d24b4:	48 89 84 24 80 1b 00 	mov    QWORD PTR [rsp+0x1b80],rax
  9d24bb:	00 
  9d24bc:	48 c7 84 24 88 1b 00 	mov    QWORD PTR [rsp+0x1b88],0x5
  9d24c3:	00 05 00 00 00 
  9d24c8:	48 c7 84 24 a0 1b 00 	mov    QWORD PTR [rsp+0x1ba0],0x0
  9d24cf:	00 00 00 00 00 
  9d24d4:	4c 89 bc 24 90 1b 00 	mov    QWORD PTR [rsp+0x1b90],r15
  9d24db:	00 
  9d24dc:	48 c7 84 24 98 1b 00 	mov    QWORD PTR [rsp+0x1b98],0x4
  9d24e3:	00 04 00 00 00 
  9d24e8:	48 8d bc 24 a0 03 00 	lea    rdi,[rsp+0x3a0]
  9d24ef:	00 
  9d24f0:	48 8d b4 24 80 1b 00 	lea    rsi,[rsp+0x1b80]
  9d24f7:	00 
  9d24f8:	ff 15 82 48 fd 00    	call   QWORD PTR [rip+0xfd4882]        # 19a6d80 <_DYNAMIC+0x580>
  9d24fe:	48 8d bc 24 a0 03 00 	lea    rdi,[rsp+0x3a0]
  9d2505:	00 
  9d2506:	e8 05 49 04 00       	call   a16e10 <anyhow::error::<impl anyhow::Error>::msg>
  9d250b:	e9 20 08 00 00       	jmp    9d2d30 <future_backtest::RunnerCore::run_multi+0x7a80>
  9d2510:	ff 15 7a 46 fd 00    	call   QWORD PTR [rip+0xfd467a]        # 19a6b90 <_DYNAMIC+0x390>
  9d2516:	4c 8b 64 24 68       	mov    r12,QWORD PTR [rsp+0x68]
  9d251b:	49 89 04 24          	mov    QWORD PTR [r12],rax
  9d251f:	49 89 54 24 08       	mov    QWORD PTR [r12+0x8],rdx
  9d2524:	41 c6 44 24 10 01    	mov    BYTE PTR [r12+0x10],0x1
  9d252a:	e9 d0 a2 ff ff       	jmp    9cc7ff <future_backtest::RunnerCore::run_multi+0x154f>
  9d252f:	31 c0                	xor    eax,eax
  9d2531:	48 8b 4c 24 48       	mov    rcx,QWORD PTR [rsp+0x48]
  9d2536:	48 85 c9             	test   rcx,rcx
  9d2539:	0f 84 3e 0a 00 00    	je     9d2f7d <future_backtest::RunnerCore::run_multi+0x7ccd>
  9d253f:	48 8b 54 24 40       	mov    rdx,QWORD PTR [rsp+0x40]
  9d2544:	48 69 c1 28 15 00 00 	imul   rax,rcx,0x1528
  9d254b:	48 01 d0             	add    rax,rdx
  9d254e:	48 89 84 24 28 01 00 	mov    QWORD PTR [rsp+0x128],rax
  9d2555:	00 
  9d2556:	48 8d 82 28 15 00 00 	lea    rax,[rdx+0x1528]
  9d255d:	eb 5c                	jmp    9d25bb <future_backtest::RunnerCore::run_multi+0x730b>
  9d255f:	41 0f b6 09          	movzx  ecx,BYTE PTR [r9]
  9d2563:	80 f9 2d             	cmp    cl,0x2d
  9d2566:	0f 84 ad 04 00 00    	je     9d2a19 <future_backtest::RunnerCore::run_multi+0x7769>
  9d256c:	0f b6 c9             	movzx  ecx,cl
  9d256f:	83 f9 2b             	cmp    ecx,0x2b
  9d2572:	0f 85 dc 04 00 00    	jne    9d2a54 <future_backtest::RunnerCore::run_multi+0x77a4>
  9d2578:	49 8d 51 01          	lea    rdx,[r9+0x1]
  9d257c:	48 8d 48 ff          	lea    rcx,[rax-0x1]
  9d2580:	48 83 f8 09          	cmp    rax,0x9
  9d2584:	0f 83 ce 05 00 00    	jae    9d2b58 <future_backtest::RunnerCore::run_multi+0x78a8>
  9d258a:	48 85 c9             	test   rcx,rcx
  9d258d:	0f 85 d1 04 00 00    	jne    9d2a64 <future_backtest::RunnerCore::run_multi+0x77b4>
  9d2593:	31 db                	xor    ebx,ebx
  9d2595:	e9 ee 04 00 00       	jmp    9d2a88 <future_backtest::RunnerCore::run_multi+0x77d8>
  9d259a:	48 8b 94 24 d0 04 00 	mov    rdx,QWORD PTR [rsp+0x4d0]
  9d25a1:	00 
  9d25a2:	48 8d 82 28 15 00 00 	lea    rax,[rdx+0x1528]
  9d25a9:	48 3b 94 24 28 01 00 	cmp    rdx,QWORD PTR [rsp+0x128]
  9d25b0:	00 
  9d25b1:	48 0f 44 c2          	cmove  rax,rdx
  9d25b5:	0f 84 ba 09 00 00    	je     9d2f75 <future_backtest::RunnerCore::run_multi+0x7cc5>
  9d25bb:	49 89 d4             	mov    r12,rdx
  9d25be:	48 89 c2             	mov    rdx,rax
  9d25c1:	f2 41 0f 10 84 24 f0 	movsd  xmm0,QWORD PTR [r12+0x5f0]
  9d25c8:	05 00 00 
  9d25cb:	66 0f 2e 05 3d 0d 88 	ucomisd xmm0,QWORD PTR [rip+0xffffffffff880d3d]        # 253310 <anon.23a7bc9302e079b368ad5af617974320.173.llvm.9485200918992093105>
  9d25d2:	ff 
  9d25d3:	72 cd                	jb     9d25a2 <future_backtest::RunnerCore::run_multi+0x72f2>
  9d25d5:	f2 0f 10 0d ab 0b 88 	movsd  xmm1,QWORD PTR [rip+0xffffffffff880bab]        # 253188 <anon.baa4d3160c6db26b1acb0467a3a6e91d.598.llvm.14045134056871974489+0x48>
  9d25dc:	ff 
  9d25dd:	66 0f 2e c8          	ucomisd xmm1,xmm0
  9d25e1:	76 bf                	jbe    9d25a2 <future_backtest::RunnerCore::run_multi+0x72f2>
  9d25e3:	48 89 94 24 d0 04 00 	mov    QWORD PTR [rsp+0x4d0],rdx
  9d25ea:	00 
  9d25eb:	49 8b 84 24 68 07 00 	mov    rax,QWORD PTR [r12+0x768]
  9d25f2:	00 
  9d25f3:	49 8b 8c 24 70 07 00 	mov    rcx,QWORD PTR [r12+0x770]
  9d25fa:	00 
  9d25fb:	48 01 c1             	add    rcx,rax
  9d25fe:	48 ff c1             	inc    rcx
  9d2601:	66 0f 6f 00          	movdqa xmm0,XMMWORD PTR [rax]
  9d2605:	66 0f d7 d0          	pmovmskb edx,xmm0
  9d2609:	f7 d2                	not    edx
  9d260b:	49 8b b4 24 80 07 00 	mov    rsi,QWORD PTR [r12+0x780]
  9d2612:	00 
  9d2613:	48 89 84 24 10 06 00 	mov    QWORD PTR [rsp+0x610],rax
  9d261a:	00 
  9d261b:	48 83 c0 10          	add    rax,0x10
  9d261f:	48 89 84 24 18 06 00 	mov    QWORD PTR [rsp+0x618],rax
  9d2626:	00 
  9d2627:	48 89 8c 24 20 06 00 	mov    QWORD PTR [rsp+0x620],rcx
  9d262e:	00 
  9d262f:	66 89 94 24 28 06 00 	mov    WORD PTR [rsp+0x628],dx
  9d2636:	00 
  9d2637:	48 89 b4 24 30 06 00 	mov    QWORD PTR [rsp+0x630],rsi
  9d263e:	00 
  9d263f:	48 8d bc 24 a0 03 00 	lea    rdi,[rsp+0x3a0]
  9d2646:	00 
  9d2647:	48 8d b4 24 10 06 00 	lea    rsi,[rsp+0x610]
  9d264e:	00 
  9d264f:	48 8d 15 9a 72 f2 00 	lea    rdx,[rip+0xf2729a]        # 18f98f0 <anon.609a31ba814f1e4156e50677fc366a7f.99.llvm.5215769359700358943>
  9d2656:	e8 85 09 fb ff       	call   982fe0 <<alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter>
  9d265b:	48 8b bc 24 a8 03 00 	mov    rdi,QWORD PTR [rsp+0x3a8]
  9d2662:	00 
  9d2663:	48 8b 9c 24 b0 03 00 	mov    rbx,QWORD PTR [rsp+0x3b0]
  9d266a:	00 
  9d266b:	48 89 bc 24 c0 00 00 	mov    QWORD PTR [rsp+0xc0],rdi
  9d2672:	00 
  9d2673:	48 89 de             	mov    rsi,rbx
  9d2676:	e8 75 76 fd ff       	call   9a9cf0 <alloc::slice::stable_sort>
  9d267b:	48 8b 84 24 a0 03 00 	mov    rax,QWORD PTR [rsp+0x3a0]
  9d2682:	00 
  9d2683:	48 89 84 24 a0 00 00 	mov    QWORD PTR [rsp+0xa0],rax
  9d268a:	00 
  9d268b:	48 85 db             	test   rbx,rbx
  9d268e:	0f 84 ba 02 00 00    	je     9d294e <future_backtest::RunnerCore::run_multi+0x769e>
  9d2694:	48 8b 84 24 c0 00 00 	mov    rax,QWORD PTR [rsp+0xc0]
  9d269b:	00 
  9d269c:	48 8d 0c d8          	lea    rcx,[rax+rbx*8]
  9d26a0:	48 89 8c 24 20 01 00 	mov    QWORD PTR [rsp+0x120],rcx
  9d26a7:	00 
  9d26a8:	49 8d 8c 24 e0 12 00 	lea    rcx,[r12+0x12e0]
  9d26af:	00 
  9d26b0:	48 89 8c 24 00 01 00 	mov    QWORD PTR [rsp+0x100],rcx
  9d26b7:	00 
  9d26b8:	49 8d 8c 24 88 07 00 	lea    rcx,[r12+0x788]
  9d26bf:	00 
  9d26c0:	48 89 8c 24 b8 00 00 	mov    QWORD PTR [rsp+0xb8],rcx
  9d26c7:	00 
  9d26c8:	4c 8b 38             	mov    r15,QWORD PTR [rax]
  9d26cb:	4c 89 bc 24 58 0e 00 	mov    QWORD PTR [rsp+0xe58],r15
  9d26d2:	00 
  9d26d3:	49 83 bc 24 80 07 00 	cmp    QWORD PTR [r12+0x780],0x0
  9d26da:	00 00 
  9d26dc:	0f 84 9f 02 00 00    	je     9d2981 <future_backtest::RunnerCore::run_multi+0x76d1>
  9d26e2:	48 89 c5             	mov    rbp,rax
  9d26e5:	48 8b bc 24 b8 00 00 	mov    rdi,QWORD PTR [rsp+0xb8]
  9d26ec:	00 
  9d26ed:	4c 89 fe             	mov    rsi,r15
  9d26f0:	e8 cb 16 e3 ff       	call   803dc0 <core::hash::BuildHasher::hash_one>
  9d26f5:	48 89 c3             	mov    rbx,rax
  9d26f8:	48 83 c5 08          	add    rbp,0x8
  9d26fc:	48 c1 e8 39          	shr    rax,0x39
  9d2700:	4d 8b b4 24 68 07 00 	mov    r14,QWORD PTR [r12+0x768]
  9d2707:	00 
  9d2708:	49 8b 8c 24 70 07 00 	mov    rcx,QWORD PTR [r12+0x770]
  9d270f:	00 
  9d2710:	66 0f 6e c0          	movd   xmm0,eax
  9d2714:	66 0f 60 c0          	punpcklbw xmm0,xmm0
  9d2718:	f2 0f 70 c0 00       	pshuflw xmm0,xmm0,0x0
  9d271d:	66 0f 70 c8 00       	pshufd xmm1,xmm0,0x0
  9d2722:	49 8d 86 70 fd ff ff 	lea    rax,[r14-0x290]
  9d2729:	48 89 44 24 50       	mov    QWORD PTR [rsp+0x50],rax
  9d272e:	49 8b 47 08          	mov    rax,QWORD PTR [r15+0x8]
  9d2732:	48 89 44 24 60       	mov    QWORD PTR [rsp+0x60],rax
  9d2737:	49 8b 47 10          	mov    rax,QWORD PTR [r15+0x10]
  9d273b:	48 89 44 24 70       	mov    QWORD PTR [rsp+0x70],rax
  9d2740:	48 c7 84 24 08 01 00 	mov    QWORD PTR [rsp+0x108],0x0
  9d2747:	00 00 00 00 00 
  9d274c:	48 89 8c 24 90 00 00 	mov    QWORD PTR [rsp+0x90],rcx
  9d2753:	00 
  9d2754:	66 0f 7f 8c 24 30 01 	movdqa XMMWORD PTR [rsp+0x130],xmm1
  9d275b:	00 00 
  9d275d:	48 21 cb             	and    rbx,rcx
  9d2760:	f3 41 0f 6f 04 1e    	movdqu xmm0,XMMWORD PTR [r14+rbx*1]
  9d2766:	66 0f 7f 84 24 10 01 	movdqa XMMWORD PTR [rsp+0x110],xmm0
  9d276d:	00 00 
  9d276f:	66 0f 74 c1          	pcmpeqb xmm0,xmm1
  9d2773:	66 44 0f d7 e8       	pmovmskb r13d,xmm0
  9d2778:	45 85 ed             	test   r13d,r13d
  9d277b:	74 58                	je     9d27d5 <future_backtest::RunnerCore::run_multi+0x7525>
  9d277d:	f3 41 0f bc c5       	tzcnt  eax,r13d
  9d2782:	48 01 d8             	add    rax,rbx
  9d2785:	48 23 84 24 90 00 00 	and    rax,QWORD PTR [rsp+0x90]
  9d278c:	00 
  9d278d:	48 f7 d8             	neg    rax
  9d2790:	4c 69 f8 90 02 00 00 	imul   r15,rax,0x290
  9d2797:	48 8b 44 24 50       	mov    rax,QWORD PTR [rsp+0x50]
  9d279c:	48 8b 4c 24 70       	mov    rcx,QWORD PTR [rsp+0x70]
  9d27a1:	4a 3b 4c 38 10       	cmp    rcx,QWORD PTR [rax+r15*1+0x10]
  9d27a6:	75 20                	jne    9d27c8 <future_backtest::RunnerCore::run_multi+0x7518>
  9d27a8:	48 8b 44 24 50       	mov    rax,QWORD PTR [rsp+0x50]
  9d27ad:	4c 01 f8             	add    rax,r15
  9d27b0:	48 8b 70 08          	mov    rsi,QWORD PTR [rax+0x8]
  9d27b4:	48 8b 7c 24 60       	mov    rdi,QWORD PTR [rsp+0x60]
  9d27b9:	48 8b 54 24 70       	mov    rdx,QWORD PTR [rsp+0x70]
  9d27be:	ff 15 f4 46 fd 00    	call   QWORD PTR [rip+0xfd46f4]        # 19a6eb8 <bcmp@GLIBC_2.2.5>
  9d27c4:	85 c0                	test   eax,eax
  9d27c6:	74 5b                	je     9d2823 <future_backtest::RunnerCore::run_multi+0x7573>
  9d27c8:	41 8d 45 ff          	lea    eax,[r13-0x1]
  9d27cc:	66 44 21 e8          	and    ax,r13w
  9d27d0:	41 89 c5             	mov    r13d,eax
  9d27d3:	75 a8                	jne    9d277d <future_backtest::RunnerCore::run_multi+0x74cd>
  9d27d5:	66 0f 6f 84 24 10 01 	movdqa xmm0,XMMWORD PTR [rsp+0x110]
  9d27dc:	00 00 
  9d27de:	66 0f 74 05 3a 1f 88 	pcmpeqb xmm0,XMMWORD PTR [rip+0xffffffffff881f3a]        # 254720 <anon.1d60bbc5b7a6ca0614a4221d8538e6d9.2.llvm.10718084555993993690>
  9d27e5:	ff 
  9d27e6:	66 0f d7 c0          	pmovmskb eax,xmm0
  9d27ea:	85 c0                	test   eax,eax
  9d27ec:	0f 85 8f 01 00 00    	jne    9d2981 <future_backtest::RunnerCore::run_multi+0x76d1>
  9d27f2:	48 8b 84 24 08 01 00 	mov    rax,QWORD PTR [rsp+0x108]
  9d27f9:	00 
  9d27fa:	48 01 c3             	add    rbx,rax
  9d27fd:	48 83 c3 10          	add    rbx,0x10
  9d2801:	48 83 c0 10          	add    rax,0x10
  9d2805:	48 89 84 24 08 01 00 	mov    QWORD PTR [rsp+0x108],rax
  9d280c:	00 
  9d280d:	48 8b 8c 24 90 00 00 	mov    rcx,QWORD PTR [rsp+0x90]
  9d2814:	00 
  9d2815:	66 0f 6f 8c 24 30 01 	movdqa xmm1,XMMWORD PTR [rsp+0x130]
  9d281c:	00 00 
  9d281e:	e9 3a ff ff ff       	jmp    9d275d <future_backtest::RunnerCore::run_multi+0x74ad>
  9d2823:	4b 8d 04 3e          	lea    rax,[r14+r15*1]
  9d2827:	4b 83 7c 3e b8 00    	cmp    QWORD PTR [r14+r15*1-0x48],0x0
  9d282d:	7f 22                	jg     9d2851 <future_backtest::RunnerCore::run_multi+0x75a1>
  9d282f:	f2 0f 10 40 c0       	movsd  xmm0,QWORD PTR [rax-0x40]
  9d2834:	66 0f 2e 05 d4 0a 88 	ucomisd xmm0,QWORD PTR [rip+0xffffffffff880ad4]        # 253310 <anon.23a7bc9302e079b368ad5af617974320.173.llvm.9485200918992093105>
  9d283b:	ff 
  9d283c:	77 13                	ja     9d2851 <future_backtest::RunnerCore::run_multi+0x75a1>
  9d283e:	f2 0f 10 40 b0       	movsd  xmm0,QWORD PTR [rax-0x50]
  9d2843:	66 0f 2e 05 c5 0a 88 	ucomisd xmm0,QWORD PTR [rip+0xffffffffff880ac5]        # 253310 <anon.23a7bc9302e079b368ad5af617974320.173.llvm.9485200918992093105>
  9d284a:	ff 
  9d284b:	0f 86 ec 00 00 00    	jbe    9d293d <future_backtest::RunnerCore::run_multi+0x768d>
  9d2851:	4b 8d 0c 3e          	lea    rcx,[r14+r15*1]
  9d2855:	48 83 c1 b8          	add    rcx,0xffffffffffffffb8
  9d2859:	48 8d 50 b0          	lea    rdx,[rax-0x50]
  9d285d:	48 83 c0 c0          	add    rax,0xffffffffffffffc0
  9d2861:	48 8b b4 24 00 01 00 	mov    rsi,QWORD PTR [rsp+0x100]
  9d2868:	00 
  9d2869:	48 89 b4 24 10 06 00 	mov    QWORD PTR [rsp+0x610],rsi
  9d2870:	00 
  9d2871:	48 8d 35 c8 7e fd ff 	lea    rsi,[rip+0xfffffffffffd7ec8]        # 9aa740 <<alloc::string::String as core::fmt::Display>::fmt>
  9d2878:	48 89 b4 24 18 06 00 	mov    QWORD PTR [rsp+0x618],rsi
  9d287f:	00 
  9d2880:	48 8d b4 24 58 0e 00 	lea    rsi,[rsp+0xe58]
  9d2887:	00 
  9d2888:	48 89 b4 24 20 06 00 	mov    QWORD PTR [rsp+0x620],rsi
  9d288f:	00 
  9d2890:	48 8d 35 b9 2a f2 ff 	lea    rsi,[rip+0xfffffffffff22ab9]        # 8f5350 <<&T as core::fmt::Display>::fmt>
  9d2897:	48 89 b4 24 28 06 00 	mov    QWORD PTR [rsp+0x628],rsi
  9d289e:	00 
  9d289f:	48 89 94 24 30 06 00 	mov    QWORD PTR [rsp+0x630],rdx
  9d28a6:	00 
  9d28a7:	48 8b 15 ba 4c fd 00 	mov    rdx,QWORD PTR [rip+0xfd4cba]        # 19a7568 <_DYNAMIC+0xd68>
  9d28ae:	48 89 94 24 38 06 00 	mov    QWORD PTR [rsp+0x638],rdx
  9d28b5:	00 
  9d28b6:	48 89 8c 24 40 06 00 	mov    QWORD PTR [rsp+0x640],rcx
  9d28bd:	00 
  9d28be:	48 8b 0d 3b 4b fd 00 	mov    rcx,QWORD PTR [rip+0xfd4b3b]        # 19a7400 <_DYNAMIC+0xc00>
  9d28c5:	48 89 8c 24 48 06 00 	mov    QWORD PTR [rsp+0x648],rcx
  9d28cc:	00 
  9d28cd:	48 89 84 24 50 06 00 	mov    QWORD PTR [rsp+0x650],rax
  9d28d4:	00 
  9d28d5:	48 89 94 24 58 06 00 	mov    QWORD PTR [rsp+0x658],rdx
  9d28dc:	00 
  9d28dd:	48 8d 05 6c a0 f2 00 	lea    rax,[rip+0xf2a06c]        # 18fc950 <anon.609a31ba814f1e4156e50677fc366a7f.492.llvm.5215769359700358943+0x1358>
  9d28e4:	48 89 84 24 c0 01 00 	mov    QWORD PTR [rsp+0x1c0],rax
  9d28eb:	00 
  9d28ec:	48 c7 84 24 c8 01 00 	mov    QWORD PTR [rsp+0x1c8],0x6
  9d28f3:	00 06 00 00 00 
  9d28f8:	48 8d 05 69 29 8b ff 	lea    rax,[rip+0xffffffffff8b2969]        # 285268 <anon.609a31ba814f1e4156e50677fc366a7f.490.llvm.5215769359700358943+0x21e2>
  9d28ff:	48 89 84 24 e0 01 00 	mov    QWORD PTR [rsp+0x1e0],rax
  9d2906:	00 
  9d2907:	48 c7 84 24 e8 01 00 	mov    QWORD PTR [rsp+0x1e8],0x5
  9d290e:	00 05 00 00 00 
  9d2913:	48 8d 84 24 10 06 00 	lea    rax,[rsp+0x610]
  9d291a:	00 
  9d291b:	48 89 84 24 d0 01 00 	mov    QWORD PTR [rsp+0x1d0],rax
  9d2922:	00 
  9d2923:	48 c7 84 24 d8 01 00 	mov    QWORD PTR [rsp+0x1d8],0x5
  9d292a:	00 05 00 00 00 
  9d292f:	48 8d bc 24 c0 01 00 	lea    rdi,[rsp+0x1c0]
  9d2936:	00 
  9d2937:	ff 15 1b 43 fd 00    	call   QWORD PTR [rip+0xfd431b]        # 19a6c58 <_DYNAMIC+0x458>
  9d293d:	48 89 e8             	mov    rax,rbp
  9d2940:	48 3b ac 24 20 01 00 	cmp    rbp,QWORD PTR [rsp+0x120]
  9d2947:	00 
  9d2948:	0f 85 7a fd ff ff    	jne    9d26c8 <future_backtest::RunnerCore::run_multi+0x7418>
  9d294e:	48 83 bc 24 a0 00 00 	cmp    QWORD PTR [rsp+0xa0],0x0
  9d2955:	00 00 
  9d2957:	0f 84 3d fc ff ff    	je     9d259a <future_backtest::RunnerCore::run_multi+0x72ea>
  9d295d:	48 8b b4 24 a0 00 00 	mov    rsi,QWORD PTR [rsp+0xa0]
  9d2964:	00 
  9d2965:	48 c1 e6 03          	shl    rsi,0x3
  9d2969:	ba 08 00 00 00       	mov    edx,0x8
  9d296e:	48 8b bc 24 c0 00 00 	mov    rdi,QWORD PTR [rsp+0xc0]
  9d2975:	00 
  9d2976:	ff 15 a4 40 fd 00    	call   QWORD PTR [rip+0xfd40a4]        # 19a6a20 <_DYNAMIC+0x220>
  9d297c:	e9 19 fc ff ff       	jmp    9d259a <future_backtest::RunnerCore::run_multi+0x72ea>
  9d2981:	48 8d 3d 96 28 8b ff 	lea    rdi,[rip+0xffffffffff8b2896]        # 28521e <anon.609a31ba814f1e4156e50677fc366a7f.490.llvm.5215769359700358943+0x2198>
  9d2988:	48 8d 15 a9 9f f2 00 	lea    rdx,[rip+0xf29fa9]        # 18fc938 <anon.609a31ba814f1e4156e50677fc366a7f.492.llvm.5215769359700358943+0x1340>
  9d298f:	be 16 00 00 00       	mov    esi,0x16
  9d2994:	ff 15 36 4a fd 00    	call   QWORD PTR [rip+0xfd4a36]        # 19a73d0 <_DYNAMIC+0xbd0>
  9d299a:	e9 5d 18 00 00       	jmp    9d41fc <future_backtest::RunnerCore::run_multi+0x8f4c>
  9d299f:	c6 45 00 00          	mov    BYTE PTR [rbp+0x0],0x0
  9d29a3:	48 83 7c 24 60 00    	cmp    QWORD PTR [rsp+0x60],0x0
  9d29a9:	74 13                	je     9d29be <future_backtest::RunnerCore::run_multi+0x770e>
  9d29ab:	ba 01 00 00 00       	mov    edx,0x1
  9d29b0:	48 89 ef             	mov    rdi,rbp
  9d29b3:	48 8b 74 24 60       	mov    rsi,QWORD PTR [rsp+0x60]
  9d29b8:	ff 15 62 40 fd 00    	call   QWORD PTR [rip+0xfd4062]        # 19a6a20 <_DYNAMIC+0x220>
  9d29be:	48 8b 44 24 50       	mov    rax,QWORD PTR [rsp+0x50]
  9d29c3:	c6 00 00             	mov    BYTE PTR [rax],0x0
  9d29c6:	48 83 bc 24 90 00 00 	cmp    QWORD PTR [rsp+0x90],0x0
  9d29cd:	00 00 
  9d29cf:	74 18                	je     9d29e9 <future_backtest::RunnerCore::run_multi+0x7739>
  9d29d1:	ba 01 00 00 00       	mov    edx,0x1
  9d29d6:	48 8b 7c 24 50       	mov    rdi,QWORD PTR [rsp+0x50]
  9d29db:	48 8b b4 24 90 00 00 	mov    rsi,QWORD PTR [rsp+0x90]
  9d29e2:	00 
  9d29e3:	ff 15 37 40 fd 00    	call   QWORD PTR [rip+0xfd4037]        # 19a6a20 <_DYNAMIC+0x220>
  9d29e9:	c6 03 00             	mov    BYTE PTR [rbx],0x0
  9d29ec:	48 83 7c 24 70 00    	cmp    QWORD PTR [rsp+0x70],0x0
  9d29f2:	74 13                	je     9d2a07 <future_backtest::RunnerCore::run_multi+0x7757>
  9d29f4:	ba 01 00 00 00       	mov    edx,0x1
  9d29f9:	48 89 df             	mov    rdi,rbx
  9d29fc:	48 8b 74 24 70       	mov    rsi,QWORD PTR [rsp+0x70]
  9d2a01:	ff 15 19 40 fd 00    	call   QWORD PTR [rip+0xfd4019]        # 19a6a20 <_DYNAMIC+0x220>
  9d2a07:	48 8d bc 24 70 01 00 	lea    rdi,[rsp+0x170]
  9d2a0e:	00 
  9d2a0f:	e8 5c 56 fd ff       	call   9a8070 <core::ptr::drop_in_place<alloc::vec::Vec<future_backtest::Order::trade_order::TradingOrder>>>
  9d2a14:	e9 67 04 00 00       	jmp    9d2e80 <future_backtest::RunnerCore::run_multi+0x7bd0>
  9d2a19:	48 83 f8 09          	cmp    rax,0x9
  9d2a1d:	0f 83 38 03 00 00    	jae    9d2d5b <future_backtest::RunnerCore::run_multi+0x7aab>
  9d2a23:	48 89 c1             	mov    rcx,rax
  9d2a26:	31 db                	xor    ebx,ebx
  9d2a28:	48 ff c9             	dec    rcx
  9d2a2b:	74 5b                	je     9d2a88 <future_backtest::RunnerCore::run_multi+0x77d8>
  9d2a2d:	b9 01 00 00 00       	mov    ecx,0x1
  9d2a32:	41 0f b6 14 09       	movzx  edx,BYTE PTR [r9+rcx*1]
  9d2a37:	83 c2 d0             	add    edx,0xffffffd0
  9d2a3a:	83 fa 09             	cmp    edx,0x9
  9d2a3d:	0f 87 48 03 00 00    	ja     9d2d8b <future_backtest::RunnerCore::run_multi+0x7adb>
  9d2a43:	01 db                	add    ebx,ebx
  9d2a45:	8d 1c 9b             	lea    ebx,[rbx+rbx*4]
  9d2a48:	29 d3                	sub    ebx,edx
  9d2a4a:	48 ff c1             	inc    rcx
  9d2a4d:	48 39 c8             	cmp    rax,rcx
  9d2a50:	75 e0                	jne    9d2a32 <future_backtest::RunnerCore::run_multi+0x7782>
  9d2a52:	eb 34                	jmp    9d2a88 <future_backtest::RunnerCore::run_multi+0x77d8>
  9d2a54:	48 89 c1             	mov    rcx,rax
  9d2a57:	4c 89 ca             	mov    rdx,r9
  9d2a5a:	48 83 f8 07          	cmp    rax,0x7
  9d2a5e:	0f 87 f4 00 00 00    	ja     9d2b58 <future_backtest::RunnerCore::run_multi+0x78a8>
  9d2a64:	31 f6                	xor    esi,esi
  9d2a66:	31 db                	xor    ebx,ebx
  9d2a68:	0f b6 3c 32          	movzx  edi,BYTE PTR [rdx+rsi*1]
  9d2a6c:	83 c7 d0             	add    edi,0xffffffd0
  9d2a6f:	83 ff 09             	cmp    edi,0x9
  9d2a72:	0f 87 13 03 00 00    	ja     9d2d8b <future_backtest::RunnerCore::run_multi+0x7adb>
  9d2a78:	44 8d 04 9b          	lea    r8d,[rbx+rbx*4]
  9d2a7c:	42 8d 1c 47          	lea    ebx,[rdi+r8*2]
  9d2a80:	48 ff c6             	inc    rsi
  9d2a83:	48 39 f1             	cmp    rcx,rsi
  9d2a86:	75 e0                	jne    9d2a68 <future_backtest::RunnerCore::run_multi+0x77b8>
  9d2a88:	48 8b b4 24 18 06 00 	mov    rsi,QWORD PTR [rsp+0x618]
  9d2a8f:	00 
  9d2a90:	48 8b 94 24 20 06 00 	mov    rdx,QWORD PTR [rsp+0x620]
  9d2a97:	00 
  9d2a98:	48 89 04 24          	mov    QWORD PTR [rsp],rax
  9d2a9c:	48 8d 0d ed 9d 8a ff 	lea    rcx,[rip+0xffffffffff8a9ded]        # 27c890 <anon.fe1b35fd190af3ec62b163d2072132da.124.llvm.6880758764856161>
  9d2aa3:	48 8d bc 24 60 18 00 	lea    rdi,[rsp+0x1860]
  9d2aaa:	00 
  9d2aab:	41 b8 06 00 00 00    	mov    r8d,0x6
  9d2ab1:	e8 8a ef ef ff       	call   8d1a40 <_ZN5alloc3str21_$LT$impl$u20$str$GT$7replace17h91d4bb4a02b9746dE.llvm.6880758764856161>
  9d2ab6:	4c 8b b4 24 68 18 00 	mov    r14,QWORD PTR [rsp+0x1868]
  9d2abd:	00 
  9d2abe:	4c 8b bc 24 70 18 00 	mov    r15,QWORD PTR [rsp+0x1870]
  9d2ac5:	00 
  9d2ac6:	0f b6 ac 24 69 06 00 	movzx  ebp,BYTE PTR [rsp+0x669]
  9d2acd:	00 
  9d2ace:	48 8d bc 24 e0 0e 00 	lea    rdi,[rsp+0xee0]
  9d2ad5:	00 
  9d2ad6:	4c 8d a4 24 10 06 00 	lea    r12,[rsp+0x610]
  9d2add:	00 
  9d2ade:	4c 89 e6             	mov    rsi,r12
  9d2ae1:	ff 15 a1 51 fd 00    	call   QWORD PTR [rip+0xfd51a1]        # 19a7c88 <_DYNAMIC+0x1488>
  9d2ae7:	4c 89 24 24          	mov    QWORD PTR [rsp],r12
  9d2aeb:	40 0f b6 cd          	movzx  ecx,bpl
  9d2aef:	48 8d bc 24 d0 11 00 	lea    rdi,[rsp+0x11d0]
  9d2af6:	00 
  9d2af7:	4c 8d 8c 24 e0 0e 00 	lea    r9,[rsp+0xee0]
  9d2afe:	00 
  9d2aff:	4c 89 f6             	mov    rsi,r14
  9d2b02:	4c 89 fa             	mov    rdx,r15
  9d2b05:	41 89 d8             	mov    r8d,ebx
  9d2b08:	ff 15 02 5a fd 00    	call   QWORD PTR [rip+0xfd5a02]        # 19a8510 <_DYNAMIC+0x1d10>
  9d2b0e:	4c 8b a4 24 d0 11 00 	mov    r12,QWORD PTR [rsp+0x11d0]
  9d2b15:	00 
  9d2b16:	4c 8b bc 24 d8 11 00 	mov    r15,QWORD PTR [rsp+0x11d8]
  9d2b1d:	00 
  9d2b1e:	48 b8 00 00 00 00 00 	movabs rax,0x8000000000000000
  9d2b25:	00 00 80 
  9d2b28:	49 39 c4             	cmp    r12,rax
  9d2b2b:	75 79                	jne    9d2ba6 <future_backtest::RunnerCore::run_multi+0x78f6>
  9d2b2d:	48 8d bc 24 e0 0e 00 	lea    rdi,[rsp+0xee0]
  9d2b34:	00 
  9d2b35:	e8 46 30 d5 ff       	call   725b80 <<alloc::collections::btree::map::BTreeMap<K,V,A> as core::ops::drop::Drop>::drop>
  9d2b3a:	48 8b b4 24 60 18 00 	mov    rsi,QWORD PTR [rsp+0x1860]
  9d2b41:	00 
  9d2b42:	48 85 f6             	test   rsi,rsi
  9d2b45:	0f 84 37 bf ff ff    	je     9cea82 <future_backtest::RunnerCore::run_multi+0x37d2>
  9d2b4b:	ba 01 00 00 00       	mov    edx,0x1
  9d2b50:	4c 89 f7             	mov    rdi,r14
  9d2b53:	e9 24 bf ff ff       	jmp    9cea7c <future_backtest::RunnerCore::run_multi+0x37cc>
  9d2b58:	31 f6                	xor    esi,esi
  9d2b5a:	31 db                	xor    ebx,ebx
  9d2b5c:	48 39 f1             	cmp    rcx,rsi
  9d2b5f:	0f 84 23 ff ff ff    	je     9d2a88 <future_backtest::RunnerCore::run_multi+0x77d8>
  9d2b65:	6b db 0a             	imul   ebx,ebx,0xa
  9d2b68:	41 0f 90 c0          	seto   r8b
  9d2b6c:	0f b6 3c 32          	movzx  edi,BYTE PTR [rdx+rsi*1]
  9d2b70:	83 c7 d0             	add    edi,0xffffffd0
  9d2b73:	83 ff 09             	cmp    edi,0x9
  9d2b76:	0f 87 0f 02 00 00    	ja     9d2d8b <future_backtest::RunnerCore::run_multi+0x7adb>
  9d2b7c:	45 84 c0             	test   r8b,r8b
  9d2b7f:	0f 85 06 02 00 00    	jne    9d2d8b <future_backtest::RunnerCore::run_multi+0x7adb>
  9d2b85:	48 ff c6             	inc    rsi
  9d2b88:	01 fb                	add    ebx,edi
  9d2b8a:	71 d0                	jno    9d2b5c <future_backtest::RunnerCore::run_multi+0x78ac>
  9d2b8c:	e9 fa 01 00 00       	jmp    9d2d8b <future_backtest::RunnerCore::run_multi+0x7adb>
  9d2b91:	bf 08 00 00 00       	mov    edi,0x8
  9d2b96:	be 18 00 00 00       	mov    esi,0x18
  9d2b9b:	ff 15 f7 40 fd 00    	call   QWORD PTR [rip+0xfd40f7]        # 19a6c98 <_DYNAMIC+0x498>
  9d2ba1:	e9 56 16 00 00       	jmp    9d41fc <future_backtest::RunnerCore::run_multi+0x8f4c>
  9d2ba6:	66 0f 10 84 24 e0 11 	movupd xmm0,XMMWORD PTR [rsp+0x11e0]
  9d2bad:	00 00 
  9d2baf:	66 0f 11 84 24 90 1b 	movupd XMMWORD PTR [rsp+0x1b90],xmm0
  9d2bb6:	00 00 
  9d2bb8:	4c 89 a4 24 80 1b 00 	mov    QWORD PTR [rsp+0x1b80],r12
  9d2bbf:	00 
  9d2bc0:	4c 89 bc 24 88 1b 00 	mov    QWORD PTR [rsp+0x1b88],r15
  9d2bc7:	00 
  9d2bc8:	48 8d 9c 24 e0 0e 00 	lea    rbx,[rsp+0xee0]
  9d2bcf:	00 
  9d2bd0:	48 89 df             	mov    rdi,rbx
  9d2bd3:	e8 a8 2f d5 ff       	call   725b80 <<alloc::collections::btree::map::BTreeMap<K,V,A> as core::ops::drop::Drop>::drop>
  9d2bd8:	4c 8b ac 24 98 1b 00 	mov    r13,QWORD PTR [rsp+0x1b98]
  9d2bdf:	00 
  9d2be0:	4c 89 ac 24 c0 01 00 	mov    QWORD PTR [rsp+0x1c0],r13
  9d2be7:	00 
  9d2be8:	48 8d 84 24 c0 01 00 	lea    rax,[rsp+0x1c0]
  9d2bef:	00 
  9d2bf0:	48 89 84 24 e0 0e 00 	mov    QWORD PTR [rsp+0xee0],rax
  9d2bf7:	00 
  9d2bf8:	48 8b 05 f1 41 fd 00 	mov    rax,QWORD PTR [rip+0xfd41f1]        # 19a6df0 <_DYNAMIC+0x5f0>
  9d2bff:	48 89 84 24 e8 0e 00 	mov    QWORD PTR [rsp+0xee8],rax
  9d2c06:	00 
  9d2c07:	48 8d 05 9a 93 f2 00 	lea    rax,[rip+0xf2939a]        # 18fbfa8 <anon.609a31ba814f1e4156e50677fc366a7f.492.llvm.5215769359700358943+0x9b0>
  9d2c0e:	48 89 84 24 d0 11 00 	mov    QWORD PTR [rsp+0x11d0],rax
  9d2c15:	00 
  9d2c16:	48 c7 84 24 d8 11 00 	mov    QWORD PTR [rsp+0x11d8],0x2
  9d2c1d:	00 02 00 00 00 
  9d2c22:	48 c7 84 24 f0 11 00 	mov    QWORD PTR [rsp+0x11f0],0x0
  9d2c29:	00 00 00 00 00 
  9d2c2e:	48 89 9c 24 e0 11 00 	mov    QWORD PTR [rsp+0x11e0],rbx
  9d2c35:	00 
  9d2c36:	48 c7 84 24 e8 11 00 	mov    QWORD PTR [rsp+0x11e8],0x1
  9d2c3d:	00 01 00 00 00 
  9d2c42:	48 8d bc 24 d0 11 00 	lea    rdi,[rsp+0x11d0]
  9d2c49:	00 
  9d2c4a:	ff 15 08 40 fd 00    	call   QWORD PTR [rip+0xfd4008]        # 19a6c58 <_DYNAMIC+0x458>
  9d2c50:	48 8b 9c 24 90 1b 00 	mov    rbx,QWORD PTR [rsp+0x1b90]
  9d2c57:	00 
  9d2c58:	48 8b b4 24 60 18 00 	mov    rsi,QWORD PTR [rsp+0x1860]
  9d2c5f:	00 
  9d2c60:	48 85 f6             	test   rsi,rsi
  9d2c63:	0f 84 45 cf ff ff    	je     9cfbae <future_backtest::RunnerCore::run_multi+0x48fe>
  9d2c69:	ba 01 00 00 00       	mov    edx,0x1
  9d2c6e:	4c 89 f7             	mov    rdi,r14
  9d2c71:	ff 15 a9 3d fd 00    	call   QWORD PTR [rip+0xfd3da9]        # 19a6a20 <_DYNAMIC+0x220>
  9d2c77:	e9 32 cf ff ff       	jmp    9cfbae <future_backtest::RunnerCore::run_multi+0x48fe>
  9d2c7c:	48 89 fb             	mov    rbx,rdi
  9d2c7f:	48 8d 44 24 38       	lea    rax,[rsp+0x38]
  9d2c84:	48 89 84 24 d0 11 00 	mov    QWORD PTR [rsp+0x11d0],rax
  9d2c8b:	00 
  9d2c8c:	48 8b 05 5d 41 fd 00 	mov    rax,QWORD PTR [rip+0xfd415d]        # 19a6df0 <_DYNAMIC+0x5f0>
  9d2c93:	48 89 84 24 d8 11 00 	mov    QWORD PTR [rsp+0x11d8],rax
  9d2c9a:	00 
  9d2c9b:	48 8d 84 24 40 0e 00 	lea    rax,[rsp+0xe40]
  9d2ca2:	00 
  9d2ca3:	48 89 84 24 e0 11 00 	mov    QWORD PTR [rsp+0x11e0],rax
  9d2caa:	00 
  9d2cab:	48 8b 05 b6 48 fd 00 	mov    rax,QWORD PTR [rip+0xfd48b6]        # 19a7568 <_DYNAMIC+0xd68>
  9d2cb2:	48 89 84 24 e8 11 00 	mov    QWORD PTR [rsp+0x11e8],rax
  9d2cb9:	00 
  9d2cba:	48 8d 8c 24 a8 01 00 	lea    rcx,[rsp+0x1a8]
  9d2cc1:	00 
  9d2cc2:	48 89 8c 24 f0 11 00 	mov    QWORD PTR [rsp+0x11f0],rcx
  9d2cc9:	00 
  9d2cca:	48 89 84 24 f8 11 00 	mov    QWORD PTR [rsp+0x11f8],rax
  9d2cd1:	00 
  9d2cd2:	48 8d 05 2f 92 f2 00 	lea    rax,[rip+0xf2922f]        # 18fbf08 <anon.609a31ba814f1e4156e50677fc366a7f.492.llvm.5215769359700358943+0x910>
  9d2cd9:	48 89 84 24 80 1b 00 	mov    QWORD PTR [rsp+0x1b80],rax
  9d2ce0:	00 
  9d2ce1:	48 c7 84 24 88 1b 00 	mov    QWORD PTR [rsp+0x1b88],0x4
  9d2ce8:	00 04 00 00 00 
  9d2ced:	48 c7 84 24 a0 1b 00 	mov    QWORD PTR [rsp+0x1ba0],0x0
  9d2cf4:	00 00 00 00 00 
  9d2cf9:	4c 89 bc 24 90 1b 00 	mov    QWORD PTR [rsp+0x1b90],r15
  9d2d00:	00 
  9d2d01:	48 c7 84 24 98 1b 00 	mov    QWORD PTR [rsp+0x1b98],0x3
  9d2d08:	00 03 00 00 00 
  9d2d0d:	48 8d bc 24 b0 10 00 	lea    rdi,[rsp+0x10b0]
  9d2d14:	00 
  9d2d15:	48 8d b4 24 80 1b 00 	lea    rsi,[rsp+0x1b80]
  9d2d1c:	00 
  9d2d1d:	ff 15 5d 40 fd 00    	call   QWORD PTR [rip+0xfd405d]        # 19a6d80 <_DYNAMIC+0x580>
  9d2d23:	48 8d bc 24 b0 10 00 	lea    rdi,[rsp+0x10b0]
  9d2d2a:	00 
  9d2d2b:	e8 e0 40 04 00       	call   a16e10 <anyhow::error::<impl anyhow::Error>::msg>
  9d2d30:	49 89 c7             	mov    r15,rax
  9d2d33:	48 8b b4 24 00 05 00 	mov    rsi,QWORD PTR [rsp+0x500]
  9d2d3a:	00 
  9d2d3b:	48 85 f6             	test   rsi,rsi
  9d2d3e:	0f 84 cf bc ff ff    	je     9cea13 <future_backtest::RunnerCore::run_multi+0x3763>
  9d2d44:	48 c1 e6 04          	shl    rsi,0x4
  9d2d48:	ba 08 00 00 00       	mov    edx,0x8
  9d2d4d:	48 89 df             	mov    rdi,rbx
  9d2d50:	ff 15 ca 3c fd 00    	call   QWORD PTR [rip+0xfd3cca]        # 19a6a20 <_DYNAMIC+0x220>
  9d2d56:	e9 b8 bc ff ff       	jmp    9cea13 <future_backtest::RunnerCore::run_multi+0x3763>
  9d2d5b:	31 db                	xor    ebx,ebx
  9d2d5d:	b9 01 00 00 00       	mov    ecx,0x1
  9d2d62:	48 39 c8             	cmp    rax,rcx
  9d2d65:	0f 84 1d fd ff ff    	je     9d2a88 <future_backtest::RunnerCore::run_multi+0x77d8>
  9d2d6b:	6b db 0a             	imul   ebx,ebx,0xa
  9d2d6e:	40 0f 90 c6          	seto   sil
  9d2d72:	41 0f b6 14 09       	movzx  edx,BYTE PTR [r9+rcx*1]
  9d2d77:	83 c2 d0             	add    edx,0xffffffd0
  9d2d7a:	83 fa 09             	cmp    edx,0x9
  9d2d7d:	77 0c                	ja     9d2d8b <future_backtest::RunnerCore::run_multi+0x7adb>
  9d2d7f:	40 84 f6             	test   sil,sil
  9d2d82:	75 07                	jne    9d2d8b <future_backtest::RunnerCore::run_multi+0x7adb>
  9d2d84:	48 ff c1             	inc    rcx
  9d2d87:	29 d3                	sub    ebx,edx
  9d2d89:	71 d7                	jno    9d2d62 <future_backtest::RunnerCore::run_multi+0x7ab2>
  9d2d8b:	48 8d bc 24 a0 03 00 	lea    rdi,[rsp+0x3a0]
  9d2d92:	00 
  9d2d93:	e8 38 29 00 00       	call   9d56d0 <future_backtest::RunnerCore::run_multi::{{closure}}>
  9d2d98:	49 89 c7             	mov    r15,rax
  9d2d9b:	e9 e2 bc ff ff       	jmp    9cea82 <future_backtest::RunnerCore::run_multi+0x37d2>
  9d2da0:	48 8d 05 b9 92 f2 00 	lea    rax,[rip+0xf292b9]        # 18fc060 <anon.609a31ba814f1e4156e50677fc366a7f.492.llvm.5215769359700358943+0xa68>
  9d2da7:	48 89 84 24 10 06 00 	mov    QWORD PTR [rsp+0x610],rax
  9d2dae:	00 
  9d2daf:	48 c7 84 24 18 06 00 	mov    QWORD PTR [rsp+0x618],0x1
  9d2db6:	00 01 00 00 00 
  9d2dbb:	48 c7 84 24 20 06 00 	mov    QWORD PTR [rsp+0x620],0x8
  9d2dc2:	00 08 00 00 00 
  9d2dc7:	66 0f ef c0          	pxor   xmm0,xmm0
  9d2dcb:	f3 0f 7f 84 24 28 06 	movdqu XMMWORD PTR [rsp+0x628],xmm0
  9d2dd2:	00 00 
  9d2dd4:	40 b5 01             	mov    bpl,0x1
  9d2dd7:	48 8d bc 24 10 06 00 	lea    rdi,[rsp+0x610]
  9d2dde:	00 
  9d2ddf:	e8 2c a5 fd ff       	call   9ad310 <anyhow::__private::format_err>
  9d2de4:	49 89 c7             	mov    r15,rax
  9d2de7:	40 b5 01             	mov    bpl,0x1
  9d2dea:	e9 39 ba ff ff       	jmp    9ce828 <future_backtest::RunnerCore::run_multi+0x3578>
  9d2def:	c6 45 00 00          	mov    BYTE PTR [rbp+0x0],0x0
  9d2df3:	48 83 7c 24 60 00    	cmp    QWORD PTR [rsp+0x60],0x0
  9d2df9:	74 13                	je     9d2e0e <future_backtest::RunnerCore::run_multi+0x7b5e>
  9d2dfb:	ba 01 00 00 00       	mov    edx,0x1
  9d2e00:	48 89 ef             	mov    rdi,rbp
  9d2e03:	48 8b 74 24 60       	mov    rsi,QWORD PTR [rsp+0x60]
  9d2e08:	ff 15 12 3c fd 00    	call   QWORD PTR [rip+0xfd3c12]        # 19a6a20 <_DYNAMIC+0x220>
  9d2e0e:	c6 03 00             	mov    BYTE PTR [rbx],0x0
  9d2e11:	48 83 bc 24 90 00 00 	cmp    QWORD PTR [rsp+0x90],0x0
  9d2e18:	00 00 
  9d2e1a:	74 16                	je     9d2e32 <future_backtest::RunnerCore::run_multi+0x7b82>
  9d2e1c:	ba 01 00 00 00       	mov    edx,0x1
  9d2e21:	48 89 df             	mov    rdi,rbx
  9d2e24:	48 8b b4 24 90 00 00 	mov    rsi,QWORD PTR [rsp+0x90]
  9d2e2b:	00 
  9d2e2c:	ff 15 ee 3b fd 00    	call   QWORD PTR [rip+0xfd3bee]        # 19a6a20 <_DYNAMIC+0x220>
  9d2e32:	48 8b 44 24 70       	mov    rax,QWORD PTR [rsp+0x70]
  9d2e37:	c6 00 00             	mov    BYTE PTR [rax],0x0
  9d2e3a:	48 83 7c 24 50 00    	cmp    QWORD PTR [rsp+0x50],0x0
  9d2e40:	74 15                	je     9d2e57 <future_backtest::RunnerCore::run_multi+0x7ba7>
  9d2e42:	ba 01 00 00 00       	mov    edx,0x1
  9d2e47:	48 8b 7c 24 70       	mov    rdi,QWORD PTR [rsp+0x70]
  9d2e4c:	48 8b 74 24 50       	mov    rsi,QWORD PTR [rsp+0x50]
  9d2e51:	ff 15 c9 3b fd 00    	call   QWORD PTR [rip+0xfd3bc9]        # 19a6a20 <_DYNAMIC+0x220>
  9d2e57:	48 8d bc 24 70 01 00 	lea    rdi,[rsp+0x170]
  9d2e5e:	00 
  9d2e5f:	e8 0c 52 fd ff       	call   9a8070 <core::ptr::drop_in_place<alloc::vec::Vec<future_backtest::Order::trade_order::TradingOrder>>>
  9d2e64:	eb 1a                	jmp    9d2e80 <future_backtest::RunnerCore::run_multi+0x7bd0>
  9d2e66:	48 8d bc 24 40 01 00 	lea    rdi,[rsp+0x140]
  9d2e6d:	00 
  9d2e6e:	e8 6d 96 07 00       	call   a4c4e0 <<hashbrown::raw::RawTable<T,A> as core::ops::drop::Drop>::drop>
  9d2e73:	48 8d bc 24 70 01 00 	lea    rdi,[rsp+0x170]
  9d2e7a:	00 
  9d2e7b:	e8 80 a3 07 00       	call   a4d200 <<hashbrown::raw::RawTable<T,A> as core::ops::drop::Drop>::drop>
  9d2e80:	48 8b b4 24 70 03 00 	mov    rsi,QWORD PTR [rsp+0x370]
  9d2e87:	00 
  9d2e88:	48 85 f6             	test   rsi,rsi
  9d2e8b:	74 13                	je     9d2ea0 <future_backtest::RunnerCore::run_multi+0x7bf0>
  9d2e8d:	48 8b bc 24 78 03 00 	mov    rdi,QWORD PTR [rsp+0x378]
  9d2e94:	00 
  9d2e95:	ba 01 00 00 00       	mov    edx,0x1
  9d2e9a:	ff 15 80 3b fd 00    	call   QWORD PTR [rip+0xfd3b80]        # 19a6a20 <_DYNAMIC+0x220>
  9d2ea0:	48 8d bc 24 a0 03 00 	lea    rdi,[rsp+0x3a0]
  9d2ea7:	00 
  9d2ea8:	e8 a3 2c fd ff       	call   9a5b50 <core::ptr::drop_in_place<future_backtest::DataStruct::event_slice::EventSlice>>
  9d2ead:	48 8b b4 24 00 03 00 	mov    rsi,QWORD PTR [rsp+0x300]
  9d2eb4:	00 
  9d2eb5:	48 85 f6             	test   rsi,rsi
  9d2eb8:	74 17                	je     9d2ed1 <future_backtest::RunnerCore::run_multi+0x7c21>
  9d2eba:	48 8b bc 24 08 03 00 	mov    rdi,QWORD PTR [rsp+0x308]
  9d2ec1:	00 
  9d2ec2:	48 c1 e6 03          	shl    rsi,0x3
  9d2ec6:	ba 08 00 00 00       	mov    edx,0x8
  9d2ecb:	ff 15 4f 3b fd 00    	call   QWORD PTR [rip+0xfd3b4f]        # 19a6a20 <_DYNAMIC+0x220>
  9d2ed1:	48 8d bc 24 d0 11 00 	lea    rdi,[rsp+0x11d0]
  9d2ed8:	00 
  9d2ed9:	e8 82 33 fd ff       	call   9a6260 <core::ptr::drop_in_place<future_backtest::Customer::customer_params::StrategyParams>>
  9d2ede:	48 8b b4 24 e8 00 00 	mov    rsi,QWORD PTR [rsp+0xe8]
  9d2ee5:	00 
  9d2ee6:	48 85 f6             	test   rsi,rsi
  9d2ee9:	74 17                	je     9d2f02 <future_backtest::RunnerCore::run_multi+0x7c52>
  9d2eeb:	48 8b bc 24 f0 00 00 	mov    rdi,QWORD PTR [rsp+0xf0]
  9d2ef2:	00 
  9d2ef3:	48 c1 e6 03          	shl    rsi,0x3
  9d2ef7:	ba 08 00 00 00       	mov    edx,0x8
  9d2efc:	ff 15 1e 3b fd 00    	call   QWORD PTR [rip+0xfd3b1e]        # 19a6a20 <_DYNAMIC+0x220>
  9d2f02:	48 8b 9c 24 f0 02 00 	mov    rbx,QWORD PTR [rsp+0x2f0]
  9d2f09:	00 
  9d2f0a:	4c 8b ac 24 f8 02 00 	mov    r13,QWORD PTR [rsp+0x2f8]
  9d2f11:	00 
  9d2f12:	49 ff c5             	inc    r13
  9d2f15:	48 8b 2d b4 53 fd 00 	mov    rbp,QWORD PTR [rip+0xfd53b4]        # 19a82d0 <_DYNAMIC+0x1ad0>
  9d2f1c:	48 89 df             	mov    rdi,rbx
  9d2f1f:	49 83 fd 01          	cmp    r13,0x1
  9d2f23:	74 0e                	je     9d2f33 <future_backtest::RunnerCore::run_multi+0x7c83>
  9d2f25:	4c 8d 77 08          	lea    r14,[rdi+0x8]
  9d2f29:	49 ff cd             	dec    r13
  9d2f2c:	ff d5                	call   rbp
  9d2f2e:	4c 89 f7             	mov    rdi,r14
  9d2f31:	eb ec                	jmp    9d2f1f <future_backtest::RunnerCore::run_multi+0x7c6f>
  9d2f33:	48 8b b4 24 e8 02 00 	mov    rsi,QWORD PTR [rsp+0x2e8]
  9d2f3a:	00 
  9d2f3b:	48 85 f6             	test   rsi,rsi
  9d2f3e:	74 12                	je     9d2f52 <future_backtest::RunnerCore::run_multi+0x7ca2>
  9d2f40:	48 c1 e6 03          	shl    rsi,0x3
  9d2f44:	ba 08 00 00 00       	mov    edx,0x8
  9d2f49:	48 89 df             	mov    rdi,rbx
  9d2f4c:	ff 15 ce 3a fd 00    	call   QWORD PTR [rip+0xfd3ace]        # 19a6a20 <_DYNAMIC+0x220>
  9d2f52:	48 8d bc 24 80 1b 00 	lea    rdi,[rsp+0x1b80]
  9d2f59:	00 
  9d2f5a:	e8 01 33 fd ff       	call   9a6260 <core::ptr::drop_in_place<future_backtest::Customer::customer_params::StrategyParams>>
  9d2f5f:	48 8d bc 24 e0 0e 00 	lea    rdi,[rsp+0xee0]
  9d2f66:	00 
  9d2f67:	8b 6c 24 20          	mov    ebp,DWORD PTR [rsp+0x20]
  9d2f6b:	e8 50 4c fd ff       	call   9a7bc0 <core::ptr::drop_in_place<core::option::Option<future_backtest::RunnerCore::MetaRunState>>>
  9d2f70:	e9 bd b7 ff ff       	jmp    9ce732 <future_backtest::RunnerCore::run_multi+0x3482>
  9d2f75:	48 8b 84 24 a8 00 00 	mov    rax,QWORD PTR [rsp+0xa8]
  9d2f7c:	00 
  9d2f7d:	48 85 c0             	test   rax,rax
  9d2f80:	74 76                	je     9d2ff8 <future_backtest::RunnerCore::run_multi+0x7d48>
  9d2f82:	31 ed                	xor    ebp,ebp
  9d2f84:	48 8d 05 7d 99 f2 00 	lea    rax,[rip+0xf2997d]        # 18fc908 <anon.609a31ba814f1e4156e50677fc366a7f.492.llvm.5215769359700358943+0x1310>
  9d2f8b:	48 89 44 24 50       	mov    QWORD PTR [rsp+0x50],rax
  9d2f90:	48 8d 1d 89 99 f2 00 	lea    rbx,[rip+0xf29989]        # 18fc920 <anon.609a31ba814f1e4156e50677fc366a7f.492.llvm.5215769359700358943+0x1328>
  9d2f97:	4c 8b 35 82 3a fd 00 	mov    r14,QWORD PTR [rip+0xfd3a82]        # 19a6a20 <_DYNAMIC+0x220>
  9d2f9e:	48 8b b4 24 f8 00 00 	mov    rsi,QWORD PTR [rsp+0xf8]
  9d2fa5:	00 
  9d2fa6:	48 39 f5             	cmp    rbp,rsi
  9d2fa9:	0f 83 85 0f 00 00    	jae    9d3f34 <future_backtest::RunnerCore::run_multi+0x8c84>
  9d2faf:	48 8b 84 24 f0 00 00 	mov    rax,QWORD PTR [rsp+0xf0]
  9d2fb6:	00 
  9d2fb7:	48 8b 04 e8          	mov    rax,QWORD PTR [rax+rbp*8]
  9d2fbb:	48 8b 38             	mov    rdi,QWORD PTR [rax]
  9d2fbe:	ff 50 30             	call   QWORD PTR [rax+0x30]
  9d2fc1:	48 8b b4 24 f8 00 00 	mov    rsi,QWORD PTR [rsp+0xf8]
  9d2fc8:	00 
  9d2fc9:	48 39 f5             	cmp    rbp,rsi
  9d2fcc:	0f 83 5d 0f 00 00    	jae    9d3f2f <future_backtest::RunnerCore::run_multi+0x8c7f>
  9d2fd2:	48 8b 84 24 f0 00 00 	mov    rax,QWORD PTR [rsp+0xf0]
  9d2fd9:	00 
  9d2fda:	48 8b 3c e8          	mov    rdi,QWORD PTR [rax+rbp*8]
  9d2fde:	be 38 00 00 00       	mov    esi,0x38
  9d2fe3:	ba 08 00 00 00       	mov    edx,0x8
  9d2fe8:	41 ff d6             	call   r14
  9d2feb:	48 ff c5             	inc    rbp
  9d2fee:	48 3b ac 24 a8 00 00 	cmp    rbp,QWORD PTR [rsp+0xa8]
  9d2ff5:	00 
  9d2ff6:	72 a6                	jb     9d2f9e <future_backtest::RunnerCore::run_multi+0x7cee>
  9d2ff8:	48 c7 84 24 00 05 00 	mov    QWORD PTR [rsp+0x500],0x0
  9d2fff:	00 00 00 00 00 
  9d3004:	48 c7 84 24 08 05 00 	mov    QWORD PTR [rsp+0x508],0x8
  9d300b:	00 08 00 00 00 
  9d3010:	48 c7 84 24 10 05 00 	mov    QWORD PTR [rsp+0x510],0x0
  9d3017:	00 00 00 00 00 
  9d301c:	48 8b 44 24 48       	mov    rax,QWORD PTR [rsp+0x48]
  9d3021:	48 85 c0             	test   rax,rax
  9d3024:	0f 84 48 09 00 00    	je     9d3972 <future_backtest::RunnerCore::run_multi+0x86c2>
  9d302a:	4c 8b 7c 24 40       	mov    r15,QWORD PTR [rsp+0x40]
  9d302f:	48 69 c0 28 15 00 00 	imul   rax,rax,0x1528
  9d3036:	4c 01 f8             	add    rax,r15
  9d3039:	48 89 44 24 50       	mov    QWORD PTR [rsp+0x50],rax
  9d303e:	45 31 f6             	xor    r14d,r14d
  9d3041:	eb 15                	jmp    9d3058 <future_backtest::RunnerCore::run_multi+0x7da8>
  9d3043:	49 81 c7 28 15 00 00 	add    r15,0x1528
  9d304a:	49 ff c6             	inc    r14
  9d304d:	4c 3b 7c 24 50       	cmp    r15,QWORD PTR [rsp+0x50]
  9d3052:	0f 84 44 01 00 00    	je     9d319c <future_backtest::RunnerCore::run_multi+0x7eec>
  9d3058:	49 8d b7 70 0c 00 00 	lea    rsi,[r15+0xc70]
  9d305f:	48 8d bc 24 c0 01 00 	lea    rdi,[rsp+0x1c0]
  9d3066:	00 
  9d3067:	48 8d 15 52 98 f2 00 	lea    rdx,[rip+0xf29852]        # 18fc8c0 <anon.609a31ba814f1e4156e50677fc366a7f.492.llvm.5215769359700358943+0x12c8>
  9d306e:	ff 15 0c 3c fd 00    	call   QWORD PTR [rip+0xfd3c0c]        # 19a6c80 <_DYNAMIC+0x480>
  9d3074:	48 8b 84 24 10 05 00 	mov    rax,QWORD PTR [rsp+0x510]
  9d307b:	00 
  9d307c:	48 8b ac 24 c8 01 00 	mov    rbp,QWORD PTR [rsp+0x1c8]
  9d3083:	00 
  9d3084:	4c 8b ac 24 d0 01 00 	mov    r13,QWORD PTR [rsp+0x1d0]
  9d308b:	00 
  9d308c:	48 85 c0             	test   rax,rax
  9d308f:	0f 84 8b 00 00 00    	je     9d3120 <future_backtest::RunnerCore::run_multi+0x7e70>
  9d3095:	48 8b 9c 24 08 05 00 	mov    rbx,QWORD PTR [rsp+0x508]
  9d309c:	00 
  9d309d:	48 83 c3 18          	add    rbx,0x18
  9d30a1:	48 c1 e0 04          	shl    rax,0x4
  9d30a5:	4c 8d 24 40          	lea    r12,[rax+rax*2]
  9d30a9:	eb 0a                	jmp    9d30b5 <future_backtest::RunnerCore::run_multi+0x7e05>
  9d30ab:	48 83 c3 30          	add    rbx,0x30
  9d30af:	49 83 c4 d0          	add    r12,0xffffffffffffffd0
  9d30b3:	74 6b                	je     9d3120 <future_backtest::RunnerCore::run_multi+0x7e70>
  9d30b5:	4c 39 6b f8          	cmp    QWORD PTR [rbx-0x8],r13
  9d30b9:	75 f0                	jne    9d30ab <future_backtest::RunnerCore::run_multi+0x7dfb>
  9d30bb:	48 8b 7b f0          	mov    rdi,QWORD PTR [rbx-0x10]
  9d30bf:	48 89 ee             	mov    rsi,rbp
  9d30c2:	4c 89 ea             	mov    rdx,r13
  9d30c5:	ff 15 ed 3d fd 00    	call   QWORD PTR [rip+0xfd3ded]        # 19a6eb8 <bcmp@GLIBC_2.2.5>
  9d30cb:	85 c0                	test   eax,eax
  9d30cd:	75 dc                	jne    9d30ab <future_backtest::RunnerCore::run_multi+0x7dfb>
  9d30cf:	4c 8b 63 10          	mov    r12,QWORD PTR [rbx+0x10]
  9d30d3:	4c 3b 23             	cmp    r12,QWORD PTR [rbx]
  9d30d6:	75 10                	jne    9d30e8 <future_backtest::RunnerCore::run_multi+0x7e38>
  9d30d8:	48 89 df             	mov    rdi,rbx
  9d30db:	48 8d 35 f6 97 f2 00 	lea    rsi,[rip+0xf297f6]        # 18fc8d8 <anon.609a31ba814f1e4156e50677fc366a7f.492.llvm.5215769359700358943+0x12e0>
  9d30e2:	ff 15 30 54 fd 00    	call   QWORD PTR [rip+0xfd5430]        # 19a8518 <_DYNAMIC+0x1d18>
  9d30e8:	48 8b 43 08          	mov    rax,QWORD PTR [rbx+0x8]
  9d30ec:	4e 89 34 e0          	mov    QWORD PTR [rax+r12*8],r14
  9d30f0:	49 ff c4             	inc    r12
  9d30f3:	4c 89 63 10          	mov    QWORD PTR [rbx+0x10],r12
  9d30f7:	48 8b b4 24 c0 01 00 	mov    rsi,QWORD PTR [rsp+0x1c0]
  9d30fe:	00 
  9d30ff:	48 85 f6             	test   rsi,rsi
  9d3102:	0f 84 3b ff ff ff    	je     9d3043 <future_backtest::RunnerCore::run_multi+0x7d93>
  9d3108:	48 8b bc 24 c8 01 00 	mov    rdi,QWORD PTR [rsp+0x1c8]
  9d310f:	00 
  9d3110:	ba 01 00 00 00       	mov    edx,0x1
  9d3115:	ff 15 05 39 fd 00    	call   QWORD PTR [rip+0xfd3905]        # 19a6a20 <_DYNAMIC+0x220>
  9d311b:	e9 23 ff ff ff       	jmp    9d3043 <future_backtest::RunnerCore::run_multi+0x7d93>
  9d3120:	48 8b 9c 24 c0 01 00 	mov    rbx,QWORD PTR [rsp+0x1c0]
  9d3127:	00 
  9d3128:	ff 15 12 39 fd 00    	call   QWORD PTR [rip+0xfd3912]        # 19a6a40 <_DYNAMIC+0x240>
  9d312e:	bf 08 00 00 00       	mov    edi,0x8
  9d3133:	be 08 00 00 00       	mov    esi,0x8
  9d3138:	ff 15 da 38 fd 00    	call   QWORD PTR [rip+0xfd38da]        # 19a6a18 <_DYNAMIC+0x218>
  9d313e:	48 85 c0             	test   rax,rax
  9d3141:	0f 84 68 0c 00 00    	je     9d3daf <future_backtest::RunnerCore::run_multi+0x8aff>
  9d3147:	4c 89 30             	mov    QWORD PTR [rax],r14
  9d314a:	48 89 9c 24 10 06 00 	mov    QWORD PTR [rsp+0x610],rbx
  9d3151:	00 
  9d3152:	48 89 ac 24 18 06 00 	mov    QWORD PTR [rsp+0x618],rbp
  9d3159:	00 
  9d315a:	4c 89 ac 24 20 06 00 	mov    QWORD PTR [rsp+0x620],r13
  9d3161:	00 
  9d3162:	48 c7 84 24 28 06 00 	mov    QWORD PTR [rsp+0x628],0x1
  9d3169:	00 01 00 00 00 
  9d316e:	48 89 84 24 30 06 00 	mov    QWORD PTR [rsp+0x630],rax
  9d3175:	00 
  9d3176:	48 c7 84 24 38 06 00 	mov    QWORD PTR [rsp+0x638],0x1
  9d317d:	00 01 00 00 00 
  9d3182:	48 8d bc 24 00 05 00 	lea    rdi,[rsp+0x500]
  9d3189:	00 
  9d318a:	48 8d b4 24 10 06 00 	lea    rsi,[rsp+0x610]
  9d3191:	00 
  9d3192:	e8 e9 6a fd ff       	call   9a9c80 <alloc::vec::Vec<T,A>::push>
  9d3197:	e9 a7 fe ff ff       	jmp    9d3043 <future_backtest::RunnerCore::run_multi+0x7d93>
  9d319c:	48 8b 84 24 10 05 00 	mov    rax,QWORD PTR [rsp+0x510]
  9d31a3:	00 
  9d31a4:	48 85 c0             	test   rax,rax
  9d31a7:	0f 84 c5 07 00 00    	je     9d3972 <future_backtest::RunnerCore::run_multi+0x86c2>
  9d31ad:	4c 8b b4 24 08 05 00 	mov    r14,QWORD PTR [rsp+0x508]
  9d31b4:	00 
  9d31b5:	48 8d 04 40          	lea    rax,[rax+rax*2]
  9d31b9:	48 c1 e0 04          	shl    rax,0x4
  9d31bd:	4c 01 f0             	add    rax,r14
  9d31c0:	48 89 44 24 70       	mov    QWORD PTR [rsp+0x70],rax
  9d31c5:	49 8d 46 30          	lea    rax,[r14+0x30]
  9d31c9:	48 8d 0d 58 95 f2 00 	lea    rcx,[rip+0xf29558]        # 18fc728 <anon.609a31ba814f1e4156e50677fc366a7f.492.llvm.5215769359700358943+0x1130>
  9d31d0:	48 89 8c 24 c0 00 00 	mov    QWORD PTR [rsp+0xc0],rcx
  9d31d7:	00 
  9d31d8:	48 8d 0d 79 95 f2 00 	lea    rcx,[rip+0xf29579]        # 18fc758 <anon.609a31ba814f1e4156e50677fc366a7f.492.llvm.5215769359700358943+0x1160>
  9d31df:	48 89 8c 24 10 01 00 	mov    QWORD PTR [rsp+0x110],rcx
  9d31e6:	00 
  9d31e7:	48 89 44 24 50       	mov    QWORD PTR [rsp+0x50],rax
  9d31ec:	4c 89 b4 24 40 01 00 	mov    QWORD PTR [rsp+0x140],r14
  9d31f3:	00 
  9d31f4:	49 8b 46 28          	mov    rax,QWORD PTR [r14+0x28]
  9d31f8:	48 83 f8 01          	cmp    rax,0x1
  9d31fc:	0f 85 f4 01 00 00    	jne    9d33f6 <future_backtest::RunnerCore::run_multi+0x8146>
  9d3202:	49 8b 46 20          	mov    rax,QWORD PTR [r14+0x20]
  9d3206:	48 8b 38             	mov    rdi,QWORD PTR [rax]
  9d3209:	48 8b 74 24 48       	mov    rsi,QWORD PTR [rsp+0x48]
  9d320e:	48 39 f7             	cmp    rdi,rsi
  9d3211:	0f 83 7f 0e 00 00    	jae    9d4096 <future_backtest::RunnerCore::run_multi+0x8de6>
  9d3217:	48 8b 44 24 40       	mov    rax,QWORD PTR [rsp+0x40]
  9d321c:	48 69 cf 28 15 00 00 	imul   rcx,rdi,0x1528
  9d3223:	48 8d 14 08          	lea    rdx,[rax+rcx*1]
  9d3227:	48 81 c2 f8 0b 00 00 	add    rdx,0xbf8
  9d322e:	48 8d 84 08 70 0c 00 	lea    rax,[rax+rcx*1+0xc70]
  9d3235:	00 
  9d3236:	48 89 84 24 c0 01 00 	mov    QWORD PTR [rsp+0x1c0],rax
  9d323d:	00 
  9d323e:	48 8d 05 fb 74 fd ff 	lea    rax,[rip+0xfffffffffffd74fb]        # 9aa740 <<alloc::string::String as core::fmt::Display>::fmt>
  9d3245:	48 89 84 24 c8 01 00 	mov    QWORD PTR [rsp+0x1c8],rax
  9d324c:	00 
  9d324d:	48 89 94 24 d0 01 00 	mov    QWORD PTR [rsp+0x1d0],rdx
  9d3254:	00 
  9d3255:	48 89 84 24 d8 01 00 	mov    QWORD PTR [rsp+0x1d8],rax
  9d325c:	00 
  9d325d:	48 8d 05 64 94 f2 00 	lea    rax,[rip+0xf29464]        # 18fc6c8 <anon.609a31ba814f1e4156e50677fc366a7f.492.llvm.5215769359700358943+0x10d0>
  9d3264:	48 89 84 24 10 06 00 	mov    QWORD PTR [rsp+0x610],rax
  9d326b:	00 
  9d326c:	48 c7 84 24 18 06 00 	mov    QWORD PTR [rsp+0x618],0x3
  9d3273:	00 03 00 00 00 
  9d3278:	48 c7 84 24 30 06 00 	mov    QWORD PTR [rsp+0x630],0x0
  9d327f:	00 00 00 00 00 
  9d3284:	48 8d 84 24 c0 01 00 	lea    rax,[rsp+0x1c0]
  9d328b:	00 
  9d328c:	48 89 84 24 20 06 00 	mov    QWORD PTR [rsp+0x620],rax
  9d3293:	00 
  9d3294:	48 c7 84 24 28 06 00 	mov    QWORD PTR [rsp+0x628],0x2
  9d329b:	00 02 00 00 00 
  9d32a0:	48 8d bc 24 a0 03 00 	lea    rdi,[rsp+0x3a0]
  9d32a7:	00 
  9d32a8:	48 8d b4 24 10 06 00 	lea    rsi,[rsp+0x610]
  9d32af:	00 
  9d32b0:	ff 15 ca 3a fd 00    	call   QWORD PTR [rip+0xfd3aca]        # 19a6d80 <_DYNAMIC+0x580>
  9d32b6:	66 0f 10 84 24 a0 03 	movupd xmm0,XMMWORD PTR [rsp+0x3a0]
  9d32bd:	00 00 
  9d32bf:	66 0f 29 84 24 b0 10 	movapd XMMWORD PTR [rsp+0x10b0],xmm0
  9d32c6:	00 00 
  9d32c8:	48 8b 84 24 b0 03 00 	mov    rax,QWORD PTR [rsp+0x3b0]
  9d32cf:	00 
  9d32d0:	48 89 84 24 c0 10 00 	mov    QWORD PTR [rsp+0x10c0],rax
  9d32d7:	00 
  9d32d8:	48 8d 84 24 b0 10 00 	lea    rax,[rsp+0x10b0]
  9d32df:	00 
  9d32e0:	48 89 84 24 c0 01 00 	mov    QWORD PTR [rsp+0x1c0],rax
  9d32e7:	00 
  9d32e8:	48 8d 05 81 65 fd ff 	lea    rax,[rip+0xfffffffffffd6581]        # 9a9870 <<alloc::string::String as core::fmt::Debug>::fmt>
  9d32ef:	48 89 84 24 c8 01 00 	mov    QWORD PTR [rsp+0x1c8],rax
  9d32f6:	00 
  9d32f7:	48 8d 05 fa 93 f2 00 	lea    rax,[rip+0xf293fa]        # 18fc6f8 <anon.609a31ba814f1e4156e50677fc366a7f.492.llvm.5215769359700358943+0x1100>
  9d32fe:	48 89 84 24 10 06 00 	mov    QWORD PTR [rsp+0x610],rax
  9d3305:	00 
  9d3306:	48 c7 84 24 18 06 00 	mov    QWORD PTR [rsp+0x618],0x2
  9d330d:	00 02 00 00 00 
  9d3312:	48 c7 84 24 30 06 00 	mov    QWORD PTR [rsp+0x630],0x0
  9d3319:	00 00 00 00 00 
  9d331e:	48 8d 84 24 c0 01 00 	lea    rax,[rsp+0x1c0]
  9d3325:	00 
  9d3326:	48 89 84 24 20 06 00 	mov    QWORD PTR [rsp+0x620],rax
  9d332d:	00 
  9d332e:	48 c7 84 24 28 06 00 	mov    QWORD PTR [rsp+0x628],0x1
  9d3335:	00 01 00 00 00 
  9d333a:	48 8d bc 24 10 06 00 	lea    rdi,[rsp+0x610]
  9d3341:	00 
  9d3342:	ff 15 10 39 fd 00    	call   QWORD PTR [rip+0xfd3910]        # 19a6c58 <_DYNAMIC+0x458>
  9d3348:	48 8d 05 c9 93 f2 00 	lea    rax,[rip+0xf293c9]        # 18fc718 <anon.609a31ba814f1e4156e50677fc366a7f.492.llvm.5215769359700358943+0x1120>
  9d334f:	48 89 84 24 10 06 00 	mov    QWORD PTR [rsp+0x610],rax
  9d3356:	00 
  9d3357:	48 c7 84 24 18 06 00 	mov    QWORD PTR [rsp+0x618],0x1
  9d335e:	00 01 00 00 00 
  9d3363:	48 c7 84 24 20 06 00 	mov    QWORD PTR [rsp+0x620],0x8
  9d336a:	00 08 00 00 00 
  9d336f:	66 0f 57 c0          	xorpd  xmm0,xmm0
  9d3373:	66 0f 11 84 24 28 06 	movupd XMMWORD PTR [rsp+0x628],xmm0
  9d337a:	00 00 
  9d337c:	48 8d bc 24 10 06 00 	lea    rdi,[rsp+0x610]
  9d3383:	00 
  9d3384:	ff 15 ce 38 fd 00    	call   QWORD PTR [rip+0xfd38ce]        # 19a6c58 <_DYNAMIC+0x458>
  9d338a:	49 83 7e 28 00       	cmp    QWORD PTR [r14+0x28],0x0
  9d338f:	0f 84 0d 0d 00 00    	je     9d40a2 <future_backtest::RunnerCore::run_multi+0x8df2>
  9d3395:	49 8b 46 20          	mov    rax,QWORD PTR [r14+0x20]
  9d3399:	48 8b 38             	mov    rdi,QWORD PTR [rax]
  9d339c:	48 8b 74 24 48       	mov    rsi,QWORD PTR [rsp+0x48]
  9d33a1:	48 39 f7             	cmp    rdi,rsi
  9d33a4:	0f 83 fe 0c 00 00    	jae    9d40a8 <future_backtest::RunnerCore::run_multi+0x8df8>
  9d33aa:	48 69 ff 28 15 00 00 	imul   rdi,rdi,0x1528
  9d33b1:	48 03 7c 24 40       	add    rdi,QWORD PTR [rsp+0x40]
  9d33b6:	be 01 00 00 00       	mov    esi,0x1
  9d33bb:	ff 15 b7 3d fd 00    	call   QWORD PTR [rip+0xfd3db7]        # 19a7178 <_DYNAMIC+0x978>
  9d33c1:	49 89 c7             	mov    r15,rax
  9d33c4:	48 85 c0             	test   rax,rax
  9d33c7:	0f 85 90 09 00 00    	jne    9d3d5d <future_backtest::RunnerCore::run_multi+0x8aad>
  9d33cd:	48 8b b4 24 b0 10 00 	mov    rsi,QWORD PTR [rsp+0x10b0]
  9d33d4:	00 
  9d33d5:	48 85 f6             	test   rsi,rsi
  9d33d8:	0f 84 11 05 00 00    	je     9d38ef <future_backtest::RunnerCore::run_multi+0x863f>
  9d33de:	48 8b bc 24 b8 10 00 	mov    rdi,QWORD PTR [rsp+0x10b8]
  9d33e5:	00 
  9d33e6:	ba 01 00 00 00       	mov    edx,0x1
  9d33eb:	ff 15 2f 36 fd 00    	call   QWORD PTR [rip+0xfd362f]        # 19a6a20 <_DYNAMIC+0x220>
  9d33f1:	e9 f9 04 00 00       	jmp    9d38ef <future_backtest::RunnerCore::run_multi+0x863f>
  9d33f6:	49 8b 5e 20          	mov    rbx,QWORD PTR [r14+0x20]
  9d33fa:	4c 8d 2c c3          	lea    r13,[rbx+rax*8]
  9d33fe:	31 ed                	xor    ebp,ebp
  9d3400:	4c 39 eb             	cmp    rbx,r13
  9d3403:	41 0f 95 c4          	setne  r12b
  9d3407:	74 37                	je     9d3440 <future_backtest::RunnerCore::run_multi+0x8190>
  9d3409:	48 8b 3b             	mov    rdi,QWORD PTR [rbx]
  9d340c:	48 8b 74 24 48       	mov    rsi,QWORD PTR [rsp+0x48]
  9d3411:	48 39 f7             	cmp    rdi,rsi
  9d3414:	0f 83 51 0b 00 00    	jae    9d3f6b <future_backtest::RunnerCore::run_multi+0x8cbb>
  9d341a:	48 69 ff 28 15 00 00 	imul   rdi,rdi,0x1528
  9d3421:	48 03 7c 24 40       	add    rdi,QWORD PTR [rsp+0x40]
  9d3426:	ff 15 5c 3d fd 00    	call   QWORD PTR [rip+0xfd3d5c]        # 19a7188 <_DYNAMIC+0x988>
  9d342c:	49 89 c7             	mov    r15,rax
  9d342f:	44 88 e5             	mov    bpl,r12b
  9d3432:	48 8d 1c eb          	lea    rbx,[rbx+rbp*8]
  9d3436:	48 85 c0             	test   rax,rax
  9d3439:	74 c3                	je     9d33fe <future_backtest::RunnerCore::run_multi+0x814e>
  9d343b:	e9 83 05 00 00       	jmp    9d39c3 <future_backtest::RunnerCore::run_multi+0x8713>
  9d3440:	49 83 7e 28 00       	cmp    QWORD PTR [r14+0x28],0x0
  9d3445:	0f 84 73 0d 00 00    	je     9d41be <future_backtest::RunnerCore::run_multi+0x8f0e>
  9d344b:	49 8b 46 20          	mov    rax,QWORD PTR [r14+0x20]
  9d344f:	48 8b 38             	mov    rdi,QWORD PTR [rax]
  9d3452:	48 8b 74 24 48       	mov    rsi,QWORD PTR [rsp+0x48]
  9d3457:	48 39 f7             	cmp    rdi,rsi
  9d345a:	0f 83 43 0d 00 00    	jae    9d41a3 <future_backtest::RunnerCore::run_multi+0x8ef3>
  9d3460:	48 8b 44 24 40       	mov    rax,QWORD PTR [rsp+0x40]
  9d3465:	48 69 cf 28 15 00 00 	imul   rcx,rdi,0x1528
  9d346c:	48 ba 00 00 00 00 00 	movabs rdx,0x8000000000000000
  9d3473:	00 00 80 
  9d3476:	48 39 94 08 f0 13 00 	cmp    QWORD PTR [rax+rcx*1+0x13f0],rdx
  9d347d:	00 
  9d347e:	0f 84 ad 09 00 00    	je     9d3e31 <future_backtest::RunnerCore::run_multi+0x8b81>
  9d3484:	4c 8d 2c 08          	lea    r13,[rax+rcx*1]
  9d3488:	44 0f b6 a4 08 d2 12 	movzx  r12d,BYTE PTR [rax+rcx*1+0x12d2]
  9d348f:	00 00 
  9d3491:	0f b6 84 08 a0 0c 00 	movzx  eax,BYTE PTR [rax+rcx*1+0xca0]
  9d3498:	00 
  9d3499:	88 84 24 90 00 00 00 	mov    BYTE PTR [rsp+0x90],al
  9d34a0:	48 b8 00 00 00 00 00 	movabs rax,0x8000000000000000
  9d34a7:	00 00 80 
  9d34aa:	48 89 c3             	mov    rbx,rax
  9d34ad:	49 39 85 50 14 00 00 	cmp    QWORD PTR [r13+0x1450],rax
  9d34b4:	74 58                	je     9d350e <future_backtest::RunnerCore::run_multi+0x825e>
  9d34b6:	49 8d b5 50 14 00 00 	lea    rsi,[r13+0x1450]
  9d34bd:	48 8d bc 24 10 06 00 	lea    rdi,[rsp+0x610]
  9d34c4:	00 
  9d34c5:	48 8d 15 b4 78 f2 00 	lea    rdx,[rip+0xf278b4]        # 18fad80 <anon.609a31ba814f1e4156e50677fc366a7f.248.llvm.5215769359700358943+0x7b8>
  9d34cc:	ff 15 ae 37 fd 00    	call   QWORD PTR [rip+0xfd37ae]        # 19a6c80 <_DYNAMIC+0x480>
  9d34d2:	48 8b 9c 24 10 06 00 	mov    rbx,QWORD PTR [rsp+0x610]
  9d34d9:	00 
  9d34da:	48 8b 84 24 18 06 00 	mov    rax,QWORD PTR [rsp+0x618]
  9d34e1:	00 
  9d34e2:	48 89 44 24 60       	mov    QWORD PTR [rsp+0x60],rax
  9d34e7:	48 b8 00 00 00 00 00 	movabs rax,0x8000000000000000
  9d34ee:	00 00 80 
  9d34f1:	49 39 85 f0 13 00 00 	cmp    QWORD PTR [r13+0x13f0],rax
  9d34f8:	0f 84 45 09 00 00    	je     9d3e43 <future_backtest::RunnerCore::run_multi+0x8b93>
  9d34fe:	48 8b 84 24 20 06 00 	mov    rax,QWORD PTR [rsp+0x620]
  9d3505:	00 
  9d3506:	48 89 84 24 28 01 00 	mov    QWORD PTR [rsp+0x128],rax
  9d350d:	00 
  9d350e:	48 b8 00 00 00 00 00 	movabs rax,0x8000000000000000
  9d3515:	00 00 80 
  9d3518:	48 89 c5             	mov    rbp,rax
  9d351b:	49 39 85 80 14 00 00 	cmp    QWORD PTR [r13+0x1480],rax
  9d3522:	74 5b                	je     9d357f <future_backtest::RunnerCore::run_multi+0x82cf>
  9d3524:	49 8d b5 80 14 00 00 	lea    rsi,[r13+0x1480]
  9d352b:	48 8d bc 24 10 06 00 	lea    rdi,[rsp+0x610]
  9d3532:	00 
  9d3533:	48 8d 15 46 78 f2 00 	lea    rdx,[rip+0xf27846]        # 18fad80 <anon.609a31ba814f1e4156e50677fc366a7f.248.llvm.5215769359700358943+0x7b8>
  9d353a:	ff 15 40 37 fd 00    	call   QWORD PTR [rip+0xfd3740]        # 19a6c80 <_DYNAMIC+0x480>
  9d3540:	48 8b ac 24 10 06 00 	mov    rbp,QWORD PTR [rsp+0x610]
  9d3547:	00 
  9d3548:	48 8b 84 24 18 06 00 	mov    rax,QWORD PTR [rsp+0x618]
  9d354f:	00 
  9d3550:	48 89 84 24 a0 00 00 	mov    QWORD PTR [rsp+0xa0],rax
  9d3557:	00 
  9d3558:	48 b8 00 00 00 00 00 	movabs rax,0x8000000000000000
  9d355f:	00 00 80 
  9d3562:	49 39 85 f0 13 00 00 	cmp    QWORD PTR [r13+0x13f0],rax
  9d3569:	0f 84 e6 08 00 00    	je     9d3e55 <future_backtest::RunnerCore::run_multi+0x8ba5>
  9d356f:	48 8b 84 24 20 06 00 	mov    rax,QWORD PTR [rsp+0x620]
  9d3576:	00 
  9d3577:	48 89 84 24 08 01 00 	mov    QWORD PTR [rsp+0x108],rax
  9d357e:	00 
  9d357f:	48 b8 00 00 00 00 00 	movabs rax,0x8000000000000000
  9d3586:	00 00 80 
  9d3589:	49 89 c7             	mov    r15,rax
  9d358c:	49 39 85 68 14 00 00 	cmp    QWORD PTR [r13+0x1468],rax
  9d3593:	74 44                	je     9d35d9 <future_backtest::RunnerCore::run_multi+0x8329>
  9d3595:	49 8d b5 68 14 00 00 	lea    rsi,[r13+0x1468]
  9d359c:	48 8d bc 24 10 06 00 	lea    rdi,[rsp+0x610]
  9d35a3:	00 
  9d35a4:	48 8d 15 d5 77 f2 00 	lea    rdx,[rip+0xf277d5]        # 18fad80 <anon.609a31ba814f1e4156e50677fc366a7f.248.llvm.5215769359700358943+0x7b8>
  9d35ab:	ff 15 cf 36 fd 00    	call   QWORD PTR [rip+0xfd36cf]        # 19a6c80 <_DYNAMIC+0x480>
  9d35b1:	4c 8b bc 24 10 06 00 	mov    r15,QWORD PTR [rsp+0x610]
  9d35b8:	00 
  9d35b9:	48 8b 84 24 18 06 00 	mov    rax,QWORD PTR [rsp+0x618]
  9d35c0:	00 
  9d35c1:	48 89 84 24 b8 00 00 	mov    QWORD PTR [rsp+0xb8],rax
  9d35c8:	00 
  9d35c9:	48 8b 84 24 20 06 00 	mov    rax,QWORD PTR [rsp+0x620]
  9d35d0:	00 
  9d35d1:	48 89 84 24 20 01 00 	mov    QWORD PTR [rsp+0x120],rax
  9d35d8:	00 
  9d35d9:	49 8b 46 28          	mov    rax,QWORD PTR [r14+0x28]
  9d35dd:	48 89 84 24 a0 03 00 	mov    QWORD PTR [rsp+0x3a0],rax
  9d35e4:	00 
  9d35e5:	48 8d 84 24 40 01 00 	lea    rax,[rsp+0x140]
  9d35ec:	00 
  9d35ed:	48 89 84 24 c0 01 00 	mov    QWORD PTR [rsp+0x1c0],rax
  9d35f4:	00 
  9d35f5:	48 8d 05 54 1d f2 ff 	lea    rax,[rip+0xfffffffffff21d54]        # 8f5350 <<&T as core::fmt::Display>::fmt>
  9d35fc:	48 89 84 24 c8 01 00 	mov    QWORD PTR [rsp+0x1c8],rax
  9d3603:	00 
  9d3604:	48 8d 84 24 a0 03 00 	lea    rax,[rsp+0x3a0]
  9d360b:	00 
  9d360c:	48 89 84 24 d0 01 00 	mov    QWORD PTR [rsp+0x1d0],rax
  9d3613:	00 
  9d3614:	48 8b 05 d5 37 fd 00 	mov    rax,QWORD PTR [rip+0xfd37d5]        # 19a6df0 <_DYNAMIC+0x5f0>
  9d361b:	48 89 84 24 d8 01 00 	mov    QWORD PTR [rsp+0x1d8],rax
  9d3622:	00 
  9d3623:	48 8d 05 a6 91 f2 00 	lea    rax,[rip+0xf291a6]        # 18fc7d0 <anon.609a31ba814f1e4156e50677fc366a7f.492.llvm.5215769359700358943+0x11d8>
  9d362a:	48 89 84 24 10 06 00 	mov    QWORD PTR [rsp+0x610],rax
  9d3631:	00 
  9d3632:	48 c7 84 24 18 06 00 	mov    QWORD PTR [rsp+0x618],0x3
  9d3639:	00 03 00 00 00 
  9d363e:	48 c7 84 24 30 06 00 	mov    QWORD PTR [rsp+0x630],0x0
  9d3645:	00 00 00 00 00 
  9d364a:	48 8d 84 24 c0 01 00 	lea    rax,[rsp+0x1c0]
  9d3651:	00 
  9d3652:	48 89 84 24 20 06 00 	mov    QWORD PTR [rsp+0x620],rax
  9d3659:	00 
  9d365a:	48 c7 84 24 28 06 00 	mov    QWORD PTR [rsp+0x628],0x2
  9d3661:	00 02 00 00 00 
  9d3666:	48 8d bc 24 10 06 00 	lea    rdi,[rsp+0x610]
  9d366d:	00 
  9d366e:	ff 15 e4 35 fd 00    	call   QWORD PTR [rip+0xfd35e4]        # 19a6c58 <_DYNAMIC+0x458>
  9d3674:	80 bc 24 90 00 00 00 	cmp    BYTE PTR [rsp+0x90],0x0
  9d367b:	00 
  9d367c:	0f 84 fd 01 00 00    	je     9d387f <future_backtest::RunnerCore::run_multi+0x85cf>
  9d3682:	48 b8 00 00 00 00 00 	movabs rax,0x8000000000000000
  9d3689:	00 00 80 
  9d368c:	49 39 85 f0 13 00 00 	cmp    QWORD PTR [r13+0x13f0],rax
  9d3693:	0f 84 1d 08 00 00    	je     9d3eb6 <future_backtest::RunnerCore::run_multi+0x8c06>
  9d3699:	f2 41 0f 10 85 98 14 	movsd  xmm0,QWORD PTR [r13+0x1498]
  9d36a0:	00 00 
  9d36a2:	48 c7 84 24 c0 01 00 	mov    QWORD PTR [rsp+0x1c0],0x0
  9d36a9:	00 00 00 00 00 
  9d36ae:	48 c7 84 24 c8 01 00 	mov    QWORD PTR [rsp+0x1c8],0x8
  9d36b5:	00 08 00 00 00 
  9d36ba:	48 8d 84 24 d0 01 00 	lea    rax,[rsp+0x1d0]
  9d36c1:	00 
  9d36c2:	66 0f ef c9          	pxor   xmm1,xmm1
  9d36c6:	f3 0f 7f 08          	movdqu XMMWORD PTR [rax],xmm1
  9d36ca:	48 c7 84 24 e0 01 00 	mov    QWORD PTR [rsp+0x1e0],0x8
  9d36d1:	00 08 00 00 00 
  9d36d6:	f3 0f 7f 48 18       	movdqu XMMWORD PTR [rax+0x18],xmm1
  9d36db:	48 c7 84 24 f8 01 00 	mov    QWORD PTR [rsp+0x1f8],0x8
  9d36e2:	00 08 00 00 00 
  9d36e7:	f3 0f 7f 48 30       	movdqu XMMWORD PTR [rax+0x30],xmm1
  9d36ec:	48 c7 84 24 10 02 00 	mov    QWORD PTR [rsp+0x210],0x8
  9d36f3:	00 08 00 00 00 
  9d36f8:	48 c7 84 24 18 02 00 	mov    QWORD PTR [rsp+0x218],0x0
  9d36ff:	00 00 00 00 00 
  9d3704:	f2 0f 11 84 24 68 02 	movsd  QWORD PTR [rsp+0x268],xmm0
  9d370b:	00 00 
  9d370d:	f3 0f 7f 88 a0 00 00 	movdqu XMMWORD PTR [rax+0xa0],xmm1
  9d3714:	00 
  9d3715:	48 89 9c 24 20 02 00 	mov    QWORD PTR [rsp+0x220],rbx
  9d371c:	00 
  9d371d:	48 8b 44 24 60       	mov    rax,QWORD PTR [rsp+0x60]
  9d3722:	48 89 84 24 28 02 00 	mov    QWORD PTR [rsp+0x228],rax
  9d3729:	00 
  9d372a:	48 8b 84 24 28 01 00 	mov    rax,QWORD PTR [rsp+0x128]
  9d3731:	00 
  9d3732:	48 89 84 24 30 02 00 	mov    QWORD PTR [rsp+0x230],rax
  9d3739:	00 
  9d373a:	48 89 ac 24 50 02 00 	mov    QWORD PTR [rsp+0x250],rbp
  9d3741:	00 
  9d3742:	48 8b 84 24 a0 00 00 	mov    rax,QWORD PTR [rsp+0xa0]
  9d3749:	00 
  9d374a:	48 89 84 24 58 02 00 	mov    QWORD PTR [rsp+0x258],rax
  9d3751:	00 
  9d3752:	48 8b 84 24 08 01 00 	mov    rax,QWORD PTR [rsp+0x108]
  9d3759:	00 
  9d375a:	48 89 84 24 60 02 00 	mov    QWORD PTR [rsp+0x260],rax
  9d3761:	00 
  9d3762:	4c 89 bc 24 38 02 00 	mov    QWORD PTR [rsp+0x238],r15
  9d3769:	00 
  9d376a:	48 8b 84 24 b8 00 00 	mov    rax,QWORD PTR [rsp+0xb8]
  9d3771:	00 
  9d3772:	48 89 84 24 40 02 00 	mov    QWORD PTR [rsp+0x240],rax
  9d3779:	00 
  9d377a:	48 8b 84 24 20 01 00 	mov    rax,QWORD PTR [rsp+0x120]
  9d3781:	00 
  9d3782:	48 89 84 24 48 02 00 	mov    QWORD PTR [rsp+0x248],rax
  9d3789:	00 
  9d378a:	4d 8b 7e 20          	mov    r15,QWORD PTR [r14+0x20]
  9d378e:	49 8b 46 28          	mov    rax,QWORD PTR [r14+0x28]
  9d3792:	4d 8d 34 c7          	lea    r14,[r15+rax*8]
  9d3796:	45 31 ed             	xor    r13d,r13d
  9d3799:	4d 39 f7             	cmp    r15,r14
  9d379c:	40 0f 95 c5          	setne  bpl
  9d37a0:	0f 84 0d 01 00 00    	je     9d38b3 <future_backtest::RunnerCore::run_multi+0x8603>
  9d37a6:	49 8b 3f             	mov    rdi,QWORD PTR [r15]
  9d37a9:	48 8b 74 24 48       	mov    rsi,QWORD PTR [rsp+0x48]
  9d37ae:	48 39 f7             	cmp    rdi,rsi
  9d37b1:	0f 83 fd 07 00 00    	jae    9d3fb4 <future_backtest::RunnerCore::run_multi+0x8d04>
  9d37b7:	48 8b 44 24 40       	mov    rax,QWORD PTR [rsp+0x40]
  9d37bc:	48 69 cf 28 15 00 00 	imul   rcx,rdi,0x1528
  9d37c3:	48 ba 00 00 00 00 00 	movabs rdx,0x8000000000000000
  9d37ca:	00 00 80 
  9d37cd:	48 39 94 08 f0 13 00 	cmp    QWORD PTR [rax+rcx*1+0x13f0],rdx
  9d37d4:	00 
  9d37d5:	0f 84 06 06 00 00    	je     9d3de1 <future_backtest::RunnerCore::run_multi+0x8b31>
  9d37db:	48 8d 1c 08          	lea    rbx,[rax+rcx*1]
  9d37df:	48 81 c3 f0 13 00 00 	add    rbx,0x13f0
  9d37e6:	48 8b 73 08          	mov    rsi,QWORD PTR [rbx+0x8]
  9d37ea:	48 69 53 10 28 02 00 	imul   rdx,QWORD PTR [rbx+0x10],0x228
  9d37f1:	00 
  9d37f2:	48 01 f2             	add    rdx,rsi
  9d37f5:	48 8d bc 24 c0 01 00 	lea    rdi,[rsp+0x1c0]
  9d37fc:	00 
  9d37fd:	48 8d 0d 44 90 f2 00 	lea    rcx,[rip+0xf29044]        # 18fc848 <anon.609a31ba814f1e4156e50677fc366a7f.492.llvm.5215769359700358943+0x1250>
  9d3804:	e8 47 a4 f9 ff       	call   96dc50 <alloc::vec::Vec<T,A>::extend_trusted>
  9d3809:	48 8b 73 20          	mov    rsi,QWORD PTR [rbx+0x20]
  9d380d:	48 6b 53 28 70       	imul   rdx,QWORD PTR [rbx+0x28],0x70
  9d3812:	48 01 f2             	add    rdx,rsi
  9d3815:	48 8d bc 24 d8 01 00 	lea    rdi,[rsp+0x1d8]
  9d381c:	00 
  9d381d:	48 8d 0d 3c 90 f2 00 	lea    rcx,[rip+0xf2903c]        # 18fc860 <anon.609a31ba814f1e4156e50677fc366a7f.492.llvm.5215769359700358943+0x1268>
  9d3824:	e8 b7 a4 f9 ff       	call   96dce0 <alloc::vec::Vec<T,A>::extend_trusted>
  9d3829:	48 8b 73 38          	mov    rsi,QWORD PTR [rbx+0x38]
  9d382d:	48 69 53 40 38 02 00 	imul   rdx,QWORD PTR [rbx+0x40],0x238
  9d3834:	00 
  9d3835:	48 01 f2             	add    rdx,rsi
  9d3838:	48 8d bc 24 f0 01 00 	lea    rdi,[rsp+0x1f0]
  9d383f:	00 
  9d3840:	48 8d 0d 31 90 f2 00 	lea    rcx,[rip+0xf29031]        # 18fc878 <anon.609a31ba814f1e4156e50677fc366a7f.492.llvm.5215769359700358943+0x1280>
  9d3847:	e8 74 a3 f9 ff       	call   96dbc0 <alloc::vec::Vec<T,A>::extend_trusted>
  9d384c:	41 88 ed             	mov    r13b,bpl
  9d384f:	4f 8d 3c ef          	lea    r15,[r15+r13*8]
  9d3853:	48 8b 73 50          	mov    rsi,QWORD PTR [rbx+0x50]
  9d3857:	48 8b 43 58          	mov    rax,QWORD PTR [rbx+0x58]
  9d385b:	48 8d 14 80          	lea    rdx,[rax+rax*4]
  9d385f:	48 c1 e2 05          	shl    rdx,0x5
  9d3863:	48 01 f2             	add    rdx,rsi
  9d3866:	48 8d bc 24 08 02 00 	lea    rdi,[rsp+0x208]
  9d386d:	00 
  9d386e:	48 8d 0d 1b 90 f2 00 	lea    rcx,[rip+0xf2901b]        # 18fc890 <anon.609a31ba814f1e4156e50677fc366a7f.492.llvm.5215769359700358943+0x1298>
  9d3875:	e8 06 a6 f9 ff       	call   96de80 <alloc::vec::Vec<T,A>::extend_trusted>
  9d387a:	e9 17 ff ff ff       	jmp    9d3796 <future_backtest::RunnerCore::run_multi+0x84e6>
  9d387f:	4a 8d 04 7d 00 00 00 	lea    rax,[r15*2+0x0]
  9d3886:	00 
  9d3887:	48 85 c0             	test   rax,rax
  9d388a:	0f 85 86 00 00 00    	jne    9d3916 <future_backtest::RunnerCore::run_multi+0x8666>
  9d3890:	48 8d 04 6d 00 00 00 	lea    rax,[rbp*2+0x0]
  9d3897:	00 
  9d3898:	48 85 c0             	test   rax,rax
  9d389b:	0f 85 9c 00 00 00    	jne    9d393d <future_backtest::RunnerCore::run_multi+0x868d>
  9d38a1:	48 8d 04 5d 00 00 00 	lea    rax,[rbx*2+0x0]
  9d38a8:	00 
  9d38a9:	48 85 c0             	test   rax,rax
  9d38ac:	74 41                	je     9d38ef <future_backtest::RunnerCore::run_multi+0x863f>
  9d38ae:	e9 ad 00 00 00       	jmp    9d3960 <future_backtest::RunnerCore::run_multi+0x86b0>
  9d38b3:	ba c0 00 00 00       	mov    edx,0xc0
  9d38b8:	48 8d 9c 24 10 06 00 	lea    rbx,[rsp+0x610]
  9d38bf:	00 
  9d38c0:	48 89 df             	mov    rdi,rbx
  9d38c3:	48 8d b4 24 c0 01 00 	lea    rsi,[rsp+0x1c0]
  9d38ca:	00 
  9d38cb:	ff 15 77 32 fd 00    	call   QWORD PTR [rip+0xfd3277]        # 19a6b48 <memcpy@GLIBC_2.14>
  9d38d1:	41 0f b6 d4          	movzx  edx,r12b
  9d38d5:	48 89 df             	mov    rdi,rbx
  9d38d8:	be 01 00 00 00       	mov    esi,0x1
  9d38dd:	ff 15 55 3f fd 00    	call   QWORD PTR [rip+0xfd3f55]        # 19a7838 <_DYNAMIC+0x1038>
  9d38e3:	49 89 c7             	mov    r15,rax
  9d38e6:	48 85 c0             	test   rax,rax
  9d38e9:	0f 85 d4 00 00 00    	jne    9d39c3 <future_backtest::RunnerCore::run_multi+0x8713>
  9d38ef:	48 8b 4c 24 50       	mov    rcx,QWORD PTR [rsp+0x50]
  9d38f4:	48 8d 41 30          	lea    rax,[rcx+0x30]
  9d38f8:	48 3b 4c 24 70       	cmp    rcx,QWORD PTR [rsp+0x70]
  9d38fd:	48 0f 44 c1          	cmove  rax,rcx
  9d3901:	74 6f                	je     9d3972 <future_backtest::RunnerCore::run_multi+0x86c2>
  9d3903:	48 8b 4c 24 50       	mov    rcx,QWORD PTR [rsp+0x50]
  9d3908:	49 89 ce             	mov    r14,rcx
  9d390b:	48 85 c9             	test   rcx,rcx
  9d390e:	0f 85 d3 f8 ff ff    	jne    9d31e7 <future_backtest::RunnerCore::run_multi+0x7f37>
  9d3914:	eb 5c                	jmp    9d3972 <future_backtest::RunnerCore::run_multi+0x86c2>
  9d3916:	ba 01 00 00 00       	mov    edx,0x1
  9d391b:	48 8b bc 24 b8 00 00 	mov    rdi,QWORD PTR [rsp+0xb8]
  9d3922:	00 
  9d3923:	4c 89 fe             	mov    rsi,r15
  9d3926:	ff 15 f4 30 fd 00    	call   QWORD PTR [rip+0xfd30f4]        # 19a6a20 <_DYNAMIC+0x220>
  9d392c:	48 8d 04 6d 00 00 00 	lea    rax,[rbp*2+0x0]
  9d3933:	00 
  9d3934:	48 85 c0             	test   rax,rax
  9d3937:	0f 84 64 ff ff ff    	je     9d38a1 <future_backtest::RunnerCore::run_multi+0x85f1>
  9d393d:	ba 01 00 00 00       	mov    edx,0x1
  9d3942:	48 8b bc 24 a0 00 00 	mov    rdi,QWORD PTR [rsp+0xa0]
  9d3949:	00 
  9d394a:	48 89 ee             	mov    rsi,rbp
  9d394d:	ff 15 cd 30 fd 00    	call   QWORD PTR [rip+0xfd30cd]        # 19a6a20 <_DYNAMIC+0x220>
  9d3953:	48 8d 04 5d 00 00 00 	lea    rax,[rbx*2+0x0]
  9d395a:	00 
  9d395b:	48 85 c0             	test   rax,rax
  9d395e:	74 8f                	je     9d38ef <future_backtest::RunnerCore::run_multi+0x863f>
  9d3960:	ba 01 00 00 00       	mov    edx,0x1
  9d3965:	48 8b 7c 24 60       	mov    rdi,QWORD PTR [rsp+0x60]
  9d396a:	48 89 de             	mov    rsi,rbx
  9d396d:	e9 79 fa ff ff       	jmp    9d33eb <future_backtest::RunnerCore::run_multi+0x813b>
  9d3972:	83 bc 24 e0 0e 00 00 	cmp    DWORD PTR [rsp+0xee0],0x2
  9d3979:	02 
  9d397a:	0f 84 4e 01 00 00    	je     9d3ace <future_backtest::RunnerCore::run_multi+0x881e>
  9d3980:	48 83 bc 24 e0 00 00 	cmp    QWORD PTR [rsp+0xe0],0x0
  9d3987:	00 00 
  9d3989:	0f 84 20 08 00 00    	je     9d41af <future_backtest::RunnerCore::run_multi+0x8eff>
  9d398f:	48 8b 84 24 d8 00 00 	mov    rax,QWORD PTR [rsp+0xd8]
  9d3996:	00 
  9d3997:	48 8d b4 24 80 0f 00 	lea    rsi,[rsp+0xf80]
  9d399e:	00 
  9d399f:	48 8b 90 28 01 00 00 	mov    rdx,QWORD PTR [rax+0x128]
  9d39a6:	48 8b 88 30 01 00 00 	mov    rcx,QWORD PTR [rax+0x130]
  9d39ad:	48 8d bc 24 e0 0e 00 	lea    rdi,[rsp+0xee0]
  9d39b4:	00 
  9d39b5:	ff 15 65 4b fd 00    	call   QWORD PTR [rip+0xfd4b65]        # 19a8520 <_DYNAMIC+0x1d20>
  9d39bb:	49 89 c7             	mov    r15,rax
  9d39be:	48 85 c0             	test   rax,rax
  9d39c1:	74 23                	je     9d39e6 <future_backtest::RunnerCore::run_multi+0x8736>
  9d39c3:	48 8d bc 24 00 05 00 	lea    rdi,[rsp+0x500]
  9d39ca:	00 
  9d39cb:	e8 60 e1 fc ff       	call   9a1b30 <core::ptr::drop_in_place<alloc::vec::Vec<(alloc::string::String,alloc::vec::Vec<usize>)>>>
  9d39d0:	48 8b b4 24 00 03 00 	mov    rsi,QWORD PTR [rsp+0x300]
  9d39d7:	00 
  9d39d8:	48 85 f6             	test   rsi,rsi
  9d39db:	0f 85 d9 f4 ff ff    	jne    9d2eba <future_backtest::RunnerCore::run_multi+0x7c0a>
  9d39e1:	e9 eb f4 ff ff       	jmp    9d2ed1 <future_backtest::RunnerCore::run_multi+0x7c21>
  9d39e6:	48 8b b4 24 70 10 00 	mov    rsi,QWORD PTR [rsp+0x1070]
  9d39ed:	00 
  9d39ee:	48 83 c6 10          	add    rsi,0x10
  9d39f2:	48 8d bc 24 10 06 00 	lea    rdi,[rsp+0x610]
  9d39f9:	00 
  9d39fa:	e8 61 c9 fc ff       	call   9a0360 <std::sync::poison::mutex::Mutex<T>::lock>
  9d39ff:	4c 8d b4 24 10 06 00 	lea    r14,[rsp+0x610]
  9d3a06:	00 
  9d3a07:	4c 89 f7             	mov    rdi,r14
  9d3a0a:	e8 31 55 fd ff       	call   9a8f40 <core::result::Result<T,E>::expect>
  9d3a0f:	48 89 c3             	mov    rbx,rax
  9d3a12:	89 d5                	mov    ebp,edx
  9d3a14:	40 80 e5 01          	and    bpl,0x1
  9d3a18:	48 83 c0 08          	add    rax,0x8
  9d3a1c:	48 8d 4b 10          	lea    rcx,[rbx+0x10]
  9d3a20:	48 8d 53 18          	lea    rdx,[rbx+0x18]
  9d3a24:	48 89 de             	mov    rsi,rbx
  9d3a27:	48 83 c6 20          	add    rsi,0x20
  9d3a2b:	48 89 84 24 10 06 00 	mov    QWORD PTR [rsp+0x610],rax
  9d3a32:	00 
  9d3a33:	48 8b 05 de 39 fd 00 	mov    rax,QWORD PTR [rip+0xfd39de]        # 19a7418 <_DYNAMIC+0xc18>
  9d3a3a:	48 89 84 24 18 06 00 	mov    QWORD PTR [rsp+0x618],rax
  9d3a41:	00 
  9d3a42:	48 89 8c 24 20 06 00 	mov    QWORD PTR [rsp+0x620],rcx
  9d3a49:	00 
  9d3a4a:	48 89 84 24 28 06 00 	mov    QWORD PTR [rsp+0x628],rax
  9d3a51:	00 
  9d3a52:	48 89 94 24 30 06 00 	mov    QWORD PTR [rsp+0x630],rdx
  9d3a59:	00 
  9d3a5a:	48 8b 0d 07 3b fd 00 	mov    rcx,QWORD PTR [rip+0xfd3b07]        # 19a7568 <_DYNAMIC+0xd68>
  9d3a61:	48 89 8c 24 38 06 00 	mov    QWORD PTR [rsp+0x638],rcx
  9d3a68:	00 
  9d3a69:	48 89 b4 24 40 06 00 	mov    QWORD PTR [rsp+0x640],rsi
  9d3a70:	00 
  9d3a71:	48 89 84 24 48 06 00 	mov    QWORD PTR [rsp+0x648],rax
  9d3a78:	00 
  9d3a79:	48 8d 05 b8 8b f2 00 	lea    rax,[rip+0xf28bb8]        # 18fc638 <anon.609a31ba814f1e4156e50677fc366a7f.492.llvm.5215769359700358943+0x1040>
  9d3a80:	48 89 84 24 c0 01 00 	mov    QWORD PTR [rsp+0x1c0],rax
  9d3a87:	00 
  9d3a88:	48 c7 84 24 c8 01 00 	mov    QWORD PTR [rsp+0x1c8],0x5
  9d3a8f:	00 05 00 00 00 
  9d3a94:	48 c7 84 24 e0 01 00 	mov    QWORD PTR [rsp+0x1e0],0x0
  9d3a9b:	00 00 00 00 00 
  9d3aa0:	4c 89 b4 24 d0 01 00 	mov    QWORD PTR [rsp+0x1d0],r14
  9d3aa7:	00 
  9d3aa8:	48 c7 84 24 d8 01 00 	mov    QWORD PTR [rsp+0x1d8],0x4
  9d3aaf:	00 04 00 00 00 
  9d3ab4:	48 8d bc 24 c0 01 00 	lea    rdi,[rsp+0x1c0]
  9d3abb:	00 
  9d3abc:	ff 15 96 31 fd 00    	call   QWORD PTR [rip+0xfd3196]        # 19a6c58 <_DYNAMIC+0x458>
  9d3ac2:	40 0f b6 f5          	movzx  esi,bpl
  9d3ac6:	48 89 df             	mov    rdi,rbx
  9d3ac9:	e8 a2 e8 fc ff       	call   9a2370 <core::ptr::drop_in_place<std::sync::poison::mutex::MutexGuard<future_backtest::MetaControl::output::MetaOrderMetrics>>>
  9d3ace:	48 8b 44 24 18       	mov    rax,QWORD PTR [rsp+0x18]
  9d3ad3:	48 83 78 10 00       	cmp    QWORD PTR [rax+0x10],0x0
  9d3ad8:	0f 85 a7 06 00 00    	jne    9d4185 <future_backtest::RunnerCore::run_multi+0x8ed5>
  9d3ade:	48 8b 44 24 18       	mov    rax,QWORD PTR [rsp+0x18]
  9d3ae3:	48 c7 40 10 ff ff ff 	mov    QWORD PTR [rax+0x10],0xffffffffffffffff
  9d3aea:	ff 
  9d3aeb:	48 8d 35 b4 f2 8a ff 	lea    rsi,[rip+0xffffffffff8af2b4]        # 282da6 <anon.609a31ba814f1e4156e50677fc366a7f.245.llvm.5215769359700358943+0x3bd>
  9d3af2:	48 8d bc 24 10 06 00 	lea    rdi,[rsp+0x610]
  9d3af9:	00 
  9d3afa:	ba 19 00 00 00       	mov    edx,0x19
  9d3aff:	e8 8c ad fd ff       	call   9ae890 <<T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec>
  9d3b04:	48 8b 84 24 20 06 00 	mov    rax,QWORD PTR [rsp+0x620]
  9d3b0b:	00 
  9d3b0c:	48 89 84 24 d0 01 00 	mov    QWORD PTR [rsp+0x1d0],rax
  9d3b13:	00 
  9d3b14:	66 0f 10 84 24 10 06 	movupd xmm0,XMMWORD PTR [rsp+0x610]
  9d3b1b:	00 00 
  9d3b1d:	66 0f 29 84 24 c0 01 	movapd XMMWORD PTR [rsp+0x1c0],xmm0
  9d3b24:	00 00 
  9d3b26:	48 8d b4 24 c0 01 00 	lea    rsi,[rsp+0x1c0]
  9d3b2d:	00 
  9d3b2e:	48 8b bc 24 80 00 00 	mov    rdi,QWORD PTR [rsp+0x80]
  9d3b35:	00 
  9d3b36:	ff 15 c4 3c fd 00    	call   QWORD PTR [rip+0xfd3cc4]        # 19a7800 <_DYNAMIC+0x1000>
  9d3b3c:	48 8b 44 24 18       	mov    rax,QWORD PTR [rsp+0x18]
  9d3b41:	48 ff 40 10          	inc    QWORD PTR [rax+0x10]
  9d3b45:	ff 15 fd 48 fd 00    	call   QWORD PTR [rip+0xfd48fd]        # 19a8448 <_DYNAMIC+0x1c48>
  9d3b4b:	48 8d 05 36 8b f2 00 	lea    rax,[rip+0xf28b36]        # 18fc688 <anon.609a31ba814f1e4156e50677fc366a7f.492.llvm.5215769359700358943+0x1090>
  9d3b52:	48 89 84 24 10 06 00 	mov    QWORD PTR [rsp+0x610],rax
  9d3b59:	00 
  9d3b5a:	48 c7 84 24 18 06 00 	mov    QWORD PTR [rsp+0x618],0x1
  9d3b61:	00 01 00 00 00 
  9d3b66:	48 c7 84 24 20 06 00 	mov    QWORD PTR [rsp+0x620],0x8
  9d3b6d:	00 08 00 00 00 
  9d3b72:	66 0f 57 c0          	xorpd  xmm0,xmm0
  9d3b76:	66 0f 11 84 24 28 06 	movupd XMMWORD PTR [rsp+0x628],xmm0
  9d3b7d:	00 00 
  9d3b7f:	48 8d bc 24 10 06 00 	lea    rdi,[rsp+0x610]
  9d3b86:	00 
  9d3b87:	ff 15 cb 30 fd 00    	call   QWORD PTR [rip+0xfd30cb]        # 19a6c58 <_DYNAMIC+0x458>
  9d3b8d:	48 8d bc 24 00 05 00 	lea    rdi,[rsp+0x500]
  9d3b94:	00 
  9d3b95:	e8 96 df fc ff       	call   9a1b30 <core::ptr::drop_in_place<alloc::vec::Vec<(alloc::string::String,alloc::vec::Vec<usize>)>>>
  9d3b9a:	48 8b b4 24 00 03 00 	mov    rsi,QWORD PTR [rsp+0x300]
  9d3ba1:	00 
  9d3ba2:	48 85 f6             	test   rsi,rsi
  9d3ba5:	74 17                	je     9d3bbe <future_backtest::RunnerCore::run_multi+0x890e>
  9d3ba7:	48 8b bc 24 08 03 00 	mov    rdi,QWORD PTR [rsp+0x308]
  9d3bae:	00 
  9d3baf:	48 c1 e6 03          	shl    rsi,0x3
  9d3bb3:	ba 08 00 00 00       	mov    edx,0x8
  9d3bb8:	ff 15 62 2e fd 00    	call   QWORD PTR [rip+0xfd2e62]        # 19a6a20 <_DYNAMIC+0x220>
  9d3bbe:	c7 44 24 68 00 00 00 	mov    DWORD PTR [rsp+0x68],0x0
  9d3bc5:	00 
  9d3bc6:	48 8d bc 24 d0 11 00 	lea    rdi,[rsp+0x11d0]
  9d3bcd:	00 
  9d3bce:	e8 8d 26 fd ff       	call   9a6260 <core::ptr::drop_in_place<future_backtest::Customer::customer_params::StrategyParams>>
  9d3bd3:	48 8b b4 24 e8 00 00 	mov    rsi,QWORD PTR [rsp+0xe8]
  9d3bda:	00 
  9d3bdb:	48 85 f6             	test   rsi,rsi
  9d3bde:	74 17                	je     9d3bf7 <future_backtest::RunnerCore::run_multi+0x8947>
  9d3be0:	48 8b bc 24 f0 00 00 	mov    rdi,QWORD PTR [rsp+0xf0]
  9d3be7:	00 
  9d3be8:	48 c1 e6 03          	shl    rsi,0x3
  9d3bec:	ba 08 00 00 00       	mov    edx,0x8
  9d3bf1:	ff 15 29 2e fd 00    	call   QWORD PTR [rip+0xfd2e29]        # 19a6a20 <_DYNAMIC+0x220>
  9d3bf7:	48 8d bc 24 80 1b 00 	lea    rdi,[rsp+0x1b80]
  9d3bfe:	00 
  9d3bff:	e8 5c 26 fd ff       	call   9a6260 <core::ptr::drop_in_place<future_backtest::Customer::customer_params::StrategyParams>>
  9d3c04:	48 8d bc 24 e0 0e 00 	lea    rdi,[rsp+0xee0]
  9d3c0b:	00 
  9d3c0c:	8b 6c 24 20          	mov    ebp,DWORD PTR [rsp+0x20]
  9d3c10:	e8 ab 3f fd ff       	call   9a7bc0 <core::ptr::drop_in_place<core::option::Option<future_backtest::RunnerCore::MetaRunState>>>
  9d3c15:	48 8d bc 24 a8 01 00 	lea    rdi,[rsp+0x1a8]
  9d3c1c:	00 
  9d3c1d:	e8 9e 47 fd ff       	call   9a83c0 <core::ptr::drop_in_place<alloc::vec::Vec<future_backtest::DataStruct::event_slice::EventSlice>>>
  9d3c22:	48 8d bc 24 60 18 00 	lea    rdi,[rsp+0x1860]
  9d3c29:	00 
  9d3c2a:	e8 d1 36 fd ff       	call   9a7300 <core::ptr::drop_in_place<future_backtest::MultiStrategy::event_producer::EventProducer>>
  9d3c2f:	48 8d 7c 24 38       	lea    rdi,[rsp+0x38]
  9d3c34:	e8 b7 3e fd ff       	call   9a7af0 <core::ptr::drop_in_place<alloc::vec::Vec<future_backtest::Strategy::strategy::Strategy>>>
  9d3c39:	48 8b 84 24 88 00 00 	mov    rax,QWORD PTR [rsp+0x88]
  9d3c40:	00 
  9d3c41:	48 ff 08             	dec    QWORD PTR [rax]
  9d3c44:	8b 6c 24 20          	mov    ebp,DWORD PTR [rsp+0x20]
  9d3c48:	75 0e                	jne    9d3c58 <future_backtest::RunnerCore::run_multi+0x89a8>
  9d3c4a:	48 8d bc 24 60 03 00 	lea    rdi,[rsp+0x360]
  9d3c51:	00 
  9d3c52:	ff 15 90 3b fd 00    	call   QWORD PTR [rip+0xfd3b90]        # 19a77e8 <_DYNAMIC+0xfe8>
  9d3c58:	48 8b 44 24 18       	mov    rax,QWORD PTR [rsp+0x18]
  9d3c5d:	48 ff 08             	dec    QWORD PTR [rax]
  9d3c60:	75 0e                	jne    9d3c70 <future_backtest::RunnerCore::run_multi+0x89c0>
  9d3c62:	48 8d bc 24 58 03 00 	lea    rdi,[rsp+0x358]
  9d3c69:	00 
  9d3c6a:	ff 15 80 3b fd 00    	call   QWORD PTR [rip+0xfd3b80]        # 19a77f0 <_DYNAMIC+0xff0>
  9d3c70:	48 8d bc 24 d0 00 00 	lea    rdi,[rsp+0xd0]
  9d3c77:	00 
  9d3c78:	e8 c3 42 fd ff       	call   9a7f40 <core::ptr::drop_in_place<alloc::vec::Vec<future_backtest::Config::config::StrategyConfig>>>
  9d3c7d:	45 31 ff             	xor    r15d,r15d
  9d3c80:	e9 9b ae ff ff       	jmp    9ceb20 <future_backtest::RunnerCore::run_multi+0x3870>
  9d3c85:	48 8d 05 e4 83 f2 00 	lea    rax,[rip+0xf283e4]        # 18fc070 <anon.609a31ba814f1e4156e50677fc366a7f.492.llvm.5215769359700358943+0xa78>
  9d3c8c:	48 89 84 24 10 06 00 	mov    QWORD PTR [rsp+0x610],rax
  9d3c93:	00 
  9d3c94:	48 c7 84 24 18 06 00 	mov    QWORD PTR [rsp+0x618],0x1
  9d3c9b:	00 01 00 00 00 
  9d3ca0:	48 c7 84 24 20 06 00 	mov    QWORD PTR [rsp+0x620],0x8
  9d3ca7:	00 08 00 00 00 
  9d3cac:	66 0f ef c0          	pxor   xmm0,xmm0
  9d3cb0:	f3 0f 7f 84 24 28 06 	movdqu XMMWORD PTR [rsp+0x628],xmm0
  9d3cb7:	00 00 
  9d3cb9:	48 8d bc 24 10 06 00 	lea    rdi,[rsp+0x610]
  9d3cc0:	00 
  9d3cc1:	e8 4a 96 fd ff       	call   9ad310 <anyhow::__private::format_err>
  9d3cc6:	e9 8c b3 ff ff       	jmp    9cf057 <future_backtest::RunnerCore::run_multi+0x3da7>
  9d3ccb:	48 8d 05 ae 7e f2 00 	lea    rax,[rip+0xf27eae]        # 18fbb80 <anon.609a31ba814f1e4156e50677fc366a7f.492.llvm.5215769359700358943+0x588>
  9d3cd2:	48 89 84 24 10 06 00 	mov    QWORD PTR [rsp+0x610],rax
  9d3cd9:	00 
  9d3cda:	48 c7 84 24 18 06 00 	mov    QWORD PTR [rsp+0x618],0x1
  9d3ce1:	00 01 00 00 00 
  9d3ce6:	48 c7 84 24 20 06 00 	mov    QWORD PTR [rsp+0x620],0x8
  9d3ced:	00 08 00 00 00 
  9d3cf2:	66 0f 57 c0          	xorpd  xmm0,xmm0
  9d3cf6:	66 0f 11 84 24 28 06 	movupd XMMWORD PTR [rsp+0x628],xmm0
  9d3cfd:	00 00 
  9d3cff:	48 8d bc 24 10 06 00 	lea    rdi,[rsp+0x610]
  9d3d06:	00 
  9d3d07:	e8 04 96 fd ff       	call   9ad310 <anyhow::__private::format_err>
  9d3d0c:	49 89 c7             	mov    r15,rax
  9d3d0f:	48 8d bc 24 d0 11 00 	lea    rdi,[rsp+0x11d0]
  9d3d16:	00 
  9d3d17:	e8 c4 fc fc ff       	call   9a39e0 <core::ptr::drop_in_place<libloading::error::Error>>
  9d3d1c:	e9 e0 e6 ff ff       	jmp    9d2401 <future_backtest::RunnerCore::run_multi+0x7151>
  9d3d21:	48 8d 05 90 8e f2 00 	lea    rax,[rip+0xf28e90]        # 18fcbb8 <anon.609a31ba814f1e4156e50677fc366a7f.492.llvm.5215769359700358943+0x15c0>
  9d3d28:	48 89 84 24 10 01 00 	mov    QWORD PTR [rsp+0x110],rax
  9d3d2f:	00 
  9d3d30:	48 8b bc 24 10 01 00 	mov    rdi,QWORD PTR [rsp+0x110]
  9d3d37:	00 
  9d3d38:	ff 15 4a 31 fd 00    	call   QWORD PTR [rip+0xfd314a]        # 19a6e88 <_DYNAMIC+0x688>
  9d3d3e:	e9 b9 04 00 00       	jmp    9d41fc <future_backtest::RunnerCore::run_multi+0x8f4c>
  9d3d43:	48 8d 15 de 7d f2 00 	lea    rdx,[rip+0xf27dde]        # 18fbb28 <anon.609a31ba814f1e4156e50677fc366a7f.492.llvm.5215769359700358943+0x530>
  9d3d4a:	be 20 00 00 00       	mov    esi,0x20
  9d3d4f:	48 89 c7             	mov    rdi,rax
  9d3d52:	ff 15 40 32 fd 00    	call   QWORD PTR [rip+0xfd3240]        # 19a6f98 <_DYNAMIC+0x798>
  9d3d58:	e9 9f 04 00 00       	jmp    9d41fc <future_backtest::RunnerCore::run_multi+0x8f4c>
  9d3d5d:	48 8b b4 24 b0 10 00 	mov    rsi,QWORD PTR [rsp+0x10b0]
  9d3d64:	00 
  9d3d65:	48 85 f6             	test   rsi,rsi
  9d3d68:	0f 84 55 fc ff ff    	je     9d39c3 <future_backtest::RunnerCore::run_multi+0x8713>
  9d3d6e:	48 8b bc 24 b8 10 00 	mov    rdi,QWORD PTR [rsp+0x10b8]
  9d3d75:	00 
  9d3d76:	ba 01 00 00 00       	mov    edx,0x1
  9d3d7b:	ff 15 9f 2c fd 00    	call   QWORD PTR [rip+0xfd2c9f]        # 19a6a20 <_DYNAMIC+0x220>
  9d3d81:	e9 3d fc ff ff       	jmp    9d39c3 <future_backtest::RunnerCore::run_multi+0x8713>
  9d3d86:	48 8d 15 cb 7f f2 00 	lea    rdx,[rip+0xf27fcb]        # 18fbd58 <anon.609a31ba814f1e4156e50677fc366a7f.492.llvm.5215769359700358943+0x760>
  9d3d8d:	4c 89 ff             	mov    rdi,r15
  9d3d90:	4c 89 fe             	mov    rsi,r15
  9d3d93:	ff 15 07 2f fd 00    	call   QWORD PTR [rip+0xfd2f07]        # 19a6ca0 <_DYNAMIC+0x4a0>
  9d3d99:	e9 5e 04 00 00       	jmp    9d41fc <future_backtest::RunnerCore::run_multi+0x8f4c>
  9d3d9e:	4c 89 94 24 e0 05 00 	mov    QWORD PTR [rsp+0x5e0],r10
  9d3da5:	00 
  9d3da6:	48 8d 15 53 8e f2 00 	lea    rdx,[rip+0xf28e53]        # 18fcc00 <anon.609a31ba814f1e4156e50677fc366a7f.492.llvm.5215769359700358943+0x1608>
  9d3dad:	eb 21                	jmp    9d3dd0 <future_backtest::RunnerCore::run_multi+0x8b20>
  9d3daf:	bf 08 00 00 00       	mov    edi,0x8
  9d3db4:	be 08 00 00 00       	mov    esi,0x8
  9d3db9:	ff 15 d9 2e fd 00    	call   QWORD PTR [rip+0xfd2ed9]        # 19a6c98 <_DYNAMIC+0x498>
  9d3dbf:	e9 38 04 00 00       	jmp    9d41fc <future_backtest::RunnerCore::run_multi+0x8f4c>
  9d3dc4:	48 8d 15 1d 82 f2 00 	lea    rdx,[rip+0xf2821d]        # 18fbfe8 <anon.609a31ba814f1e4156e50677fc366a7f.492.llvm.5215769359700358943+0x9f0>
  9d3dcb:	31 ff                	xor    edi,edi
  9d3dcd:	45 31 ff             	xor    r15d,r15d
  9d3dd0:	40 b5 01             	mov    bpl,0x1
  9d3dd3:	4c 89 fe             	mov    rsi,r15
  9d3dd6:	ff 15 c4 2e fd 00    	call   QWORD PTR [rip+0xfd2ec4]        # 19a6ca0 <_DYNAMIC+0x4a0>
  9d3ddc:	e9 1b 04 00 00       	jmp    9d41fc <future_backtest::RunnerCore::run_multi+0x8f4c>
  9d3de1:	48 8d 3d 48 8a f2 00 	lea    rdi,[rip+0xf28a48]        # 18fc830 <anon.609a31ba814f1e4156e50677fc366a7f.492.llvm.5215769359700358943+0x1238>
  9d3de8:	ff 15 ba 31 fd 00    	call   QWORD PTR [rip+0xfd31ba]        # 19a6fa8 <_DYNAMIC+0x7a8>
  9d3dee:	e9 09 04 00 00       	jmp    9d41fc <future_backtest::RunnerCore::run_multi+0x8f4c>
  9d3df3:	48 8d 15 1e 82 f2 00 	lea    rdx,[rip+0xf2821e]        # 18fc018 <anon.609a31ba814f1e4156e50677fc366a7f.492.llvm.5215769359700358943+0xa20>
  9d3dfa:	31 ff                	xor    edi,edi
  9d3dfc:	31 f6                	xor    esi,esi
  9d3dfe:	ff 15 9c 2e fd 00    	call   QWORD PTR [rip+0xfd2e9c]        # 19a6ca0 <_DYNAMIC+0x4a0>
  9d3e04:	e9 f3 03 00 00       	jmp    9d41fc <future_backtest::RunnerCore::run_multi+0x8f4c>
  9d3e09:	48 8d 15 38 82 f2 00 	lea    rdx,[rip+0xf28238]        # 18fc048 <anon.609a31ba814f1e4156e50677fc366a7f.492.llvm.5215769359700358943+0xa50>
  9d3e10:	31 ff                	xor    edi,edi
  9d3e12:	31 f6                	xor    esi,esi
  9d3e14:	ff 15 86 2e fd 00    	call   QWORD PTR [rip+0xfd2e86]        # 19a6ca0 <_DYNAMIC+0x4a0>
  9d3e1a:	e9 dd 03 00 00       	jmp    9d41fc <future_backtest::RunnerCore::run_multi+0x8f4c>
  9d3e1f:	48 8d 3d d2 8c f2 00 	lea    rdi,[rip+0xf28cd2]        # 18fcaf8 <anon.609a31ba814f1e4156e50677fc366a7f.492.llvm.5215769359700358943+0x1500>
  9d3e26:	ff 15 5c 30 fd 00    	call   QWORD PTR [rip+0xfd305c]        # 19a6e88 <_DYNAMIC+0x688>
  9d3e2c:	e9 cb 03 00 00       	jmp    9d41fc <future_backtest::RunnerCore::run_multi+0x8f4c>
  9d3e31:	48 8d 3d 50 89 f2 00 	lea    rdi,[rip+0xf28950]        # 18fc788 <anon.609a31ba814f1e4156e50677fc366a7f.492.llvm.5215769359700358943+0x1190>
  9d3e38:	ff 15 6a 31 fd 00    	call   QWORD PTR [rip+0xfd316a]        # 19a6fa8 <_DYNAMIC+0x7a8>
  9d3e3e:	e9 b9 03 00 00       	jmp    9d41fc <future_backtest::RunnerCore::run_multi+0x8f4c>
  9d3e43:	48 8d 3d 56 89 f2 00 	lea    rdi,[rip+0xf28956]        # 18fc7a0 <anon.609a31ba814f1e4156e50677fc366a7f.492.llvm.5215769359700358943+0x11a8>
  9d3e4a:	ff 15 58 31 fd 00    	call   QWORD PTR [rip+0xfd3158]        # 19a6fa8 <_DYNAMIC+0x7a8>
  9d3e50:	e9 a7 03 00 00       	jmp    9d41fc <future_backtest::RunnerCore::run_multi+0x8f4c>
  9d3e55:	48 8d 3d 5c 89 f2 00 	lea    rdi,[rip+0xf2895c]        # 18fc7b8 <anon.609a31ba814f1e4156e50677fc366a7f.492.llvm.5215769359700358943+0x11c0>
  9d3e5c:	ff 15 46 31 fd 00    	call   QWORD PTR [rip+0xfd3146]        # 19a6fa8 <_DYNAMIC+0x7a8>
  9d3e62:	e9 95 03 00 00       	jmp    9d41fc <future_backtest::RunnerCore::run_multi+0x8f4c>
  9d3e67:	48 8d 15 7a 82 f2 00 	lea    rdx,[rip+0xf2827a]        # 18fc0e8 <anon.609a31ba814f1e4156e50677fc366a7f.492.llvm.5215769359700358943+0xaf0>
  9d3e6e:	31 ff                	xor    edi,edi
  9d3e70:	31 f6                	xor    esi,esi
  9d3e72:	ff 15 28 2e fd 00    	call   QWORD PTR [rip+0xfd2e28]        # 19a6ca0 <_DYNAMIC+0x4a0>
  9d3e78:	e9 7f 03 00 00       	jmp    9d41fc <future_backtest::RunnerCore::run_multi+0x8f4c>
  9d3e7d:	48 8d 3d 5c 8c f2 00 	lea    rdi,[rip+0xf28c5c]        # 18fcae0 <anon.609a31ba814f1e4156e50677fc366a7f.492.llvm.5215769359700358943+0x14e8>
  9d3e84:	ff 15 fe 2f fd 00    	call   QWORD PTR [rip+0xfd2ffe]        # 19a6e88 <_DYNAMIC+0x688>
  9d3e8a:	e9 6d 03 00 00       	jmp    9d41fc <future_backtest::RunnerCore::run_multi+0x8f4c>
  9d3e8f:	48 8d 15 7a 8b f2 00 	lea    rdx,[rip+0xf28b7a]        # 18fca10 <anon.609a31ba814f1e4156e50677fc366a7f.492.llvm.5215769359700358943+0x1418>
  9d3e96:	48 89 ef             	mov    rdi,rbp
  9d3e99:	ff 15 01 2e fd 00    	call   QWORD PTR [rip+0xfd2e01]        # 19a6ca0 <_DYNAMIC+0x4a0>
  9d3e9f:	e9 58 03 00 00       	jmp    9d41fc <future_backtest::RunnerCore::run_multi+0x8f4c>
  9d3ea4:	48 8d 15 7d 8b f2 00 	lea    rdx,[rip+0xf28b7d]        # 18fca28 <anon.609a31ba814f1e4156e50677fc366a7f.492.llvm.5215769359700358943+0x1430>
  9d3eab:	ff 15 ef 2d fd 00    	call   QWORD PTR [rip+0xfd2def]        # 19a6ca0 <_DYNAMIC+0x4a0>
  9d3eb1:	e9 46 03 00 00       	jmp    9d41fc <future_backtest::RunnerCore::run_multi+0x8f4c>
  9d3eb6:	48 8d 3d 43 89 f2 00 	lea    rdi,[rip+0xf28943]        # 18fc800 <anon.609a31ba814f1e4156e50677fc366a7f.492.llvm.5215769359700358943+0x1208>
  9d3ebd:	ff 15 e5 30 fd 00    	call   QWORD PTR [rip+0xfd30e5]        # 19a6fa8 <_DYNAMIC+0x7a8>
  9d3ec3:	e9 34 03 00 00       	jmp    9d41fc <future_backtest::RunnerCore::run_multi+0x8f4c>
  9d3ec8:	48 8d 15 f9 8a f2 00 	lea    rdx,[rip+0xf28af9]        # 18fc9c8 <anon.609a31ba814f1e4156e50677fc366a7f.492.llvm.5215769359700358943+0x13d0>
  9d3ecf:	ff 15 cb 2d fd 00    	call   QWORD PTR [rip+0xfd2dcb]        # 19a6ca0 <_DYNAMIC+0x4a0>
  9d3ed5:	e9 22 03 00 00       	jmp    9d41fc <future_backtest::RunnerCore::run_multi+0x8f4c>
  9d3eda:	48 89 d3             	mov    rbx,rdx
  9d3edd:	48 8d 05 94 86 f2 00 	lea    rax,[rip+0xf28694]        # 18fc578 <anon.609a31ba814f1e4156e50677fc366a7f.492.llvm.5215769359700358943+0xf80>
  9d3ee4:	48 89 84 24 08 01 00 	mov    QWORD PTR [rsp+0x108],rax
  9d3eeb:	00 
  9d3eec:	48 89 df             	mov    rdi,rbx
  9d3eef:	48 8b 94 24 08 01 00 	mov    rdx,QWORD PTR [rsp+0x108]
  9d3ef6:	00 
  9d3ef7:	ff 15 a3 2d fd 00    	call   QWORD PTR [rip+0xfd2da3]        # 19a6ca0 <_DYNAMIC+0x4a0>
  9d3efd:	e9 fa 02 00 00       	jmp    9d41fc <future_backtest::RunnerCore::run_multi+0x8f4c>
  9d3f02:	48 8d 15 87 86 f2 00 	lea    rdx,[rip+0xf28687]        # 18fc590 <anon.609a31ba814f1e4156e50677fc366a7f.492.llvm.5215769359700358943+0xf98>
  9d3f09:	ff 15 91 2d fd 00    	call   QWORD PTR [rip+0xfd2d91]        # 19a6ca0 <_DYNAMIC+0x4a0>
  9d3f0f:	e9 e8 02 00 00       	jmp    9d41fc <future_backtest::RunnerCore::run_multi+0x8f4c>
  9d3f14:	4c 89 eb             	mov    rbx,r13
  9d3f17:	48 8d 05 12 86 f2 00 	lea    rax,[rip+0xf28612]        # 18fc530 <anon.609a31ba814f1e4156e50677fc366a7f.492.llvm.5215769359700358943+0xf38>
  9d3f1e:	48 89 d7             	mov    rdi,rdx
  9d3f21:	48 89 c2             	mov    rdx,rax
  9d3f24:	ff 15 76 2d fd 00    	call   QWORD PTR [rip+0xfd2d76]        # 19a6ca0 <_DYNAMIC+0x4a0>
  9d3f2a:	e9 cd 02 00 00       	jmp    9d41fc <future_backtest::RunnerCore::run_multi+0x8f4c>
  9d3f2f:	48 89 5c 24 50       	mov    QWORD PTR [rsp+0x50],rbx
  9d3f34:	48 89 ef             	mov    rdi,rbp
  9d3f37:	48 8b 54 24 50       	mov    rdx,QWORD PTR [rsp+0x50]
  9d3f3c:	ff 15 5e 2d fd 00    	call   QWORD PTR [rip+0xfd2d5e]        # 19a6ca0 <_DYNAMIC+0x4a0>
  9d3f42:	e9 b5 02 00 00       	jmp    9d41fc <future_backtest::RunnerCore::run_multi+0x8f4c>
  9d3f47:	45 31 ed             	xor    r13d,r13d
  9d3f4a:	e9 6c b9 ff ff       	jmp    9cf8bb <future_backtest::RunnerCore::run_multi+0x460b>
  9d3f4f:	b0 01                	mov    al,0x1
  9d3f51:	89 44 24 68          	mov    DWORD PTR [rsp+0x68],eax
  9d3f55:	48 8d 15 d4 81 f2 00 	lea    rdx,[rip+0xf281d4]        # 18fc130 <anon.609a31ba814f1e4156e50677fc366a7f.492.llvm.5215769359700358943+0xb38>
  9d3f5c:	31 ff                	xor    edi,edi
  9d3f5e:	31 f6                	xor    esi,esi
  9d3f60:	ff 15 3a 2d fd 00    	call   QWORD PTR [rip+0xfd2d3a]        # 19a6ca0 <_DYNAMIC+0x4a0>
  9d3f66:	e9 91 02 00 00       	jmp    9d41fc <future_backtest::RunnerCore::run_multi+0x8f4c>
  9d3f6b:	48 8d 05 36 89 f2 00 	lea    rax,[rip+0xf28936]        # 18fc8a8 <anon.609a31ba814f1e4156e50677fc366a7f.492.llvm.5215769359700358943+0x12b0>
  9d3f72:	48 89 84 24 10 01 00 	mov    QWORD PTR [rsp+0x110],rax
  9d3f79:	00 
  9d3f7a:	48 8b 94 24 10 01 00 	mov    rdx,QWORD PTR [rsp+0x110]
  9d3f81:	00 
  9d3f82:	ff 15 18 2d fd 00    	call   QWORD PTR [rip+0xfd2d18]        # 19a6ca0 <_DYNAMIC+0x4a0>
  9d3f88:	e9 6f 02 00 00       	jmp    9d41fc <future_backtest::RunnerCore::run_multi+0x8f4c>
  9d3f8d:	4c 89 eb             	mov    rbx,r13
  9d3f90:	48 8d 05 c1 84 f2 00 	lea    rax,[rip+0xf284c1]        # 18fc458 <anon.609a31ba814f1e4156e50677fc366a7f.492.llvm.5215769359700358943+0xe60>
  9d3f97:	48 89 d7             	mov    rdi,rdx
  9d3f9a:	48 89 c2             	mov    rdx,rax
  9d3f9d:	ff 15 fd 2c fd 00    	call   QWORD PTR [rip+0xfd2cfd]        # 19a6ca0 <_DYNAMIC+0x4a0>
  9d3fa3:	e9 54 02 00 00       	jmp    9d41fc <future_backtest::RunnerCore::run_multi+0x8f4c>
  9d3fa8:	48 8d 05 39 85 f2 00 	lea    rax,[rip+0xf28539]        # 18fc4e8 <anon.609a31ba814f1e4156e50677fc366a7f.492.llvm.5215769359700358943+0xef0>
  9d3faf:	e9 47 01 00 00       	jmp    9d40fb <future_backtest::RunnerCore::run_multi+0x8e4b>
  9d3fb4:	48 8d 15 5d 88 f2 00 	lea    rdx,[rip+0xf2885d]        # 18fc818 <anon.609a31ba814f1e4156e50677fc366a7f.492.llvm.5215769359700358943+0x1220>
  9d3fbb:	ff 15 df 2c fd 00    	call   QWORD PTR [rip+0xfd2cdf]        # 19a6ca0 <_DYNAMIC+0x4a0>
  9d3fc1:	e9 36 02 00 00       	jmp    9d41fc <future_backtest::RunnerCore::run_multi+0x8f4c>
  9d3fc6:	48 8d 15 c3 7f f2 00 	lea    rdx,[rip+0xf27fc3]        # 18fbf90 <anon.609a31ba814f1e4156e50677fc366a7f.492.llvm.5215769359700358943+0x998>
  9d3fcd:	31 ff                	xor    edi,edi
  9d3fcf:	31 f6                	xor    esi,esi
  9d3fd1:	ff 15 c9 2c fd 00    	call   QWORD PTR [rip+0xfd2cc9]        # 19a6ca0 <_DYNAMIC+0x4a0>
  9d3fd7:	e9 20 02 00 00       	jmp    9d41fc <future_backtest::RunnerCore::run_multi+0x8f4c>
  9d3fdc:	48 8d 15 dd 81 f2 00 	lea    rdx,[rip+0xf281dd]        # 18fc1c0 <anon.609a31ba814f1e4156e50677fc366a7f.492.llvm.5215769359700358943+0xbc8>
  9d3fe3:	48 89 df             	mov    rdi,rbx
  9d3fe6:	ff 15 b4 2c fd 00    	call   QWORD PTR [rip+0xfd2cb4]        # 19a6ca0 <_DYNAMIC+0x4a0>
  9d3fec:	e9 0b 02 00 00       	jmp    9d41fc <future_backtest::RunnerCore::run_multi+0x8f4c>
  9d3ff1:	48 89 de             	mov    rsi,rbx
  9d3ff4:	48 8d 05 1d 85 f2 00 	lea    rax,[rip+0xf2851d]        # 18fc518 <anon.609a31ba814f1e4156e50677fc366a7f.492.llvm.5215769359700358943+0xf20>
  9d3ffb:	48 89 84 24 d0 04 00 	mov    QWORD PTR [rsp+0x4d0],rax
  9d4002:	00 
  9d4003:	48 8b 94 24 d0 04 00 	mov    rdx,QWORD PTR [rsp+0x4d0]
  9d400a:	00 
  9d400b:	ff 15 8f 2c fd 00    	call   QWORD PTR [rip+0xfd2c8f]        # 19a6ca0 <_DYNAMIC+0x4a0>
  9d4011:	e9 e6 01 00 00       	jmp    9d41fc <future_backtest::RunnerCore::run_multi+0x8f4c>
  9d4016:	48 8d 05 1b 82 f2 00 	lea    rax,[rip+0xf2821b]        # 18fc238 <anon.609a31ba814f1e4156e50677fc366a7f.492.llvm.5215769359700358943+0xc40>
  9d401d:	e9 d9 00 00 00       	jmp    9d40fb <future_backtest::RunnerCore::run_multi+0x8e4b>
  9d4022:	48 8b 9c 24 38 03 00 	mov    rbx,QWORD PTR [rsp+0x338]
  9d4029:	00 
  9d402a:	48 8d 05 1f 82 f2 00 	lea    rax,[rip+0xf2821f]        # 18fc250 <anon.609a31ba814f1e4156e50677fc366a7f.492.llvm.5215769359700358943+0xc58>
  9d4031:	e9 c5 00 00 00       	jmp    9d40fb <future_backtest::RunnerCore::run_multi+0x8e4b>
  9d4036:	48 8d 05 5b 82 f2 00 	lea    rax,[rip+0xf2825b]        # 18fc298 <anon.609a31ba814f1e4156e50677fc366a7f.492.llvm.5215769359700358943+0xca0>
  9d403d:	e9 b9 00 00 00       	jmp    9d40fb <future_backtest::RunnerCore::run_multi+0x8e4b>
  9d4042:	48 8d 05 67 82 f2 00 	lea    rax,[rip+0xf28267]        # 18fc2b0 <anon.609a31ba814f1e4156e50677fc366a7f.492.llvm.5215769359700358943+0xcb8>
  9d4049:	e9 ad 00 00 00       	jmp    9d40fb <future_backtest::RunnerCore::run_multi+0x8e4b>
  9d404e:	48 8d 05 7b 83 f2 00 	lea    rax,[rip+0xf2837b]        # 18fc3d0 <anon.609a31ba814f1e4156e50677fc366a7f.492.llvm.5215769359700358943+0xdd8>
  9d4055:	e9 a1 00 00 00       	jmp    9d40fb <future_backtest::RunnerCore::run_multi+0x8e4b>
  9d405a:	48 8d 3d df 83 f2 00 	lea    rdi,[rip+0xf283df]        # 18fc440 <anon.609a31ba814f1e4156e50677fc366a7f.492.llvm.5215769359700358943+0xe48>
  9d4061:	ff 15 79 35 fd 00    	call   QWORD PTR [rip+0xfd3579]        # 19a75e0 <_DYNAMIC+0xde0>
  9d4067:	e9 90 01 00 00       	jmp    9d41fc <future_backtest::RunnerCore::run_multi+0x8f4c>
  9d406c:	48 8d 05 45 84 f2 00 	lea    rax,[rip+0xf28445]        # 18fc4b8 <anon.609a31ba814f1e4156e50677fc366a7f.492.llvm.5215769359700358943+0xec0>
  9d4073:	e9 6e 01 00 00       	jmp    9d41e6 <future_backtest::RunnerCore::run_multi+0x8f36>
  9d4078:	48 8d 05 89 81 f2 00 	lea    rax,[rip+0xf28189]        # 18fc208 <anon.609a31ba814f1e4156e50677fc366a7f.492.llvm.5215769359700358943+0xc10>
  9d407f:	eb 7a                	jmp    9d40fb <future_backtest::RunnerCore::run_multi+0x8e4b>
  9d4081:	48 8d 05 98 81 f2 00 	lea    rax,[rip+0xf28198]        # 18fc220 <anon.609a31ba814f1e4156e50677fc366a7f.492.llvm.5215769359700358943+0xc28>
  9d4088:	eb 71                	jmp    9d40fb <future_backtest::RunnerCore::run_multi+0x8e4b>
  9d408a:	48 8d 05 0f 84 f2 00 	lea    rax,[rip+0xf2840f]        # 18fc4a0 <anon.609a31ba814f1e4156e50677fc366a7f.492.llvm.5215769359700358943+0xea8>
  9d4091:	e9 50 01 00 00       	jmp    9d41e6 <future_backtest::RunnerCore::run_multi+0x8f36>
  9d4096:	48 8d 05 13 86 f2 00 	lea    rax,[rip+0xf28613]        # 18fc6b0 <anon.609a31ba814f1e4156e50677fc366a7f.492.llvm.5215769359700358943+0x10b8>
  9d409d:	e9 d0 fe ff ff       	jmp    9d3f72 <future_backtest::RunnerCore::run_multi+0x8cc2>
  9d40a2:	31 ff                	xor    edi,edi
  9d40a4:	31 f6                	xor    esi,esi
  9d40a6:	eb 0f                	jmp    9d40b7 <future_backtest::RunnerCore::run_multi+0x8e07>
  9d40a8:	48 8d 05 91 86 f2 00 	lea    rax,[rip+0xf28691]        # 18fc740 <anon.609a31ba814f1e4156e50677fc366a7f.492.llvm.5215769359700358943+0x1148>
  9d40af:	48 89 84 24 c0 00 00 	mov    QWORD PTR [rsp+0xc0],rax
  9d40b6:	00 
  9d40b7:	48 8b 94 24 c0 00 00 	mov    rdx,QWORD PTR [rsp+0xc0]
  9d40be:	00 
  9d40bf:	ff 15 db 2b fd 00    	call   QWORD PTR [rip+0xfd2bdb]        # 19a6ca0 <_DYNAMIC+0x4a0>
  9d40c5:	e9 32 01 00 00       	jmp    9d41fc <future_backtest::RunnerCore::run_multi+0x8f4c>
  9d40ca:	48 8b b4 24 38 03 00 	mov    rsi,QWORD PTR [rsp+0x338]
  9d40d1:	00 
  9d40d2:	48 8d 05 a7 81 f2 00 	lea    rax,[rip+0xf281a7]        # 18fc280 <anon.609a31ba814f1e4156e50677fc366a7f.492.llvm.5215769359700358943+0xc88>
  9d40d9:	48 89 84 24 d8 05 00 	mov    QWORD PTR [rsp+0x5d8],rax
  9d40e0:	00 
  9d40e1:	48 8b 94 24 d8 05 00 	mov    rdx,QWORD PTR [rsp+0x5d8]
  9d40e8:	00 
  9d40e9:	ff 15 b1 2b fd 00    	call   QWORD PTR [rip+0xfd2bb1]        # 19a6ca0 <_DYNAMIC+0x4a0>
  9d40ef:	e9 08 01 00 00       	jmp    9d41fc <future_backtest::RunnerCore::run_multi+0x8f4c>
  9d40f4:	48 8d 05 cd 81 f2 00 	lea    rax,[rip+0xf281cd]        # 18fc2c8 <anon.609a31ba814f1e4156e50677fc366a7f.492.llvm.5215769359700358943+0xcd0>
  9d40fb:	48 89 84 24 30 01 00 	mov    QWORD PTR [rsp+0x130],rax
  9d4102:	00 
  9d4103:	48 89 d7             	mov    rdi,rdx
  9d4106:	48 89 de             	mov    rsi,rbx
  9d4109:	48 8b 94 24 30 01 00 	mov    rdx,QWORD PTR [rsp+0x130]
  9d4110:	00 
  9d4111:	ff 15 89 2b fd 00    	call   QWORD PTR [rip+0xfd2b89]        # 19a6ca0 <_DYNAMIC+0x4a0>
  9d4117:	e9 e0 00 00 00       	jmp    9d41fc <future_backtest::RunnerCore::run_multi+0x8f4c>
  9d411c:	48 8d 15 d5 81 f2 00 	lea    rdx,[rip+0xf281d5]        # 18fc2f8 <anon.609a31ba814f1e4156e50677fc366a7f.492.llvm.5215769359700358943+0xd00>
  9d4123:	ff 15 77 2b fd 00    	call   QWORD PTR [rip+0xfd2b77]        # 19a6ca0 <_DYNAMIC+0x4a0>
  9d4129:	e9 ce 00 00 00       	jmp    9d41fc <future_backtest::RunnerCore::run_multi+0x8f4c>
  9d412e:	48 8d 15 f3 81 f2 00 	lea    rdx,[rip+0xf281f3]        # 18fc328 <anon.609a31ba814f1e4156e50677fc366a7f.492.llvm.5215769359700358943+0xd30>
  9d4135:	ff 15 65 2b fd 00    	call   QWORD PTR [rip+0xfd2b65]        # 19a6ca0 <_DYNAMIC+0x4a0>
  9d413b:	e9 bc 00 00 00       	jmp    9d41fc <future_backtest::RunnerCore::run_multi+0x8f4c>
  9d4140:	48 8d 15 11 82 f2 00 	lea    rdx,[rip+0xf28211]        # 18fc358 <anon.609a31ba814f1e4156e50677fc366a7f.492.llvm.5215769359700358943+0xd60>
  9d4147:	ff 15 53 2b fd 00    	call   QWORD PTR [rip+0xfd2b53]        # 19a6ca0 <_DYNAMIC+0x4a0>
  9d414d:	e9 aa 00 00 00       	jmp    9d41fc <future_backtest::RunnerCore::run_multi+0x8f4c>
  9d4152:	48 8d 15 17 82 f2 00 	lea    rdx,[rip+0xf28217]        # 18fc370 <anon.609a31ba814f1e4156e50677fc366a7f.492.llvm.5215769359700358943+0xd78>
  9d4159:	ff 15 41 2b fd 00    	call   QWORD PTR [rip+0xfd2b41]        # 19a6ca0 <_DYNAMIC+0x4a0>
  9d415f:	e9 98 00 00 00       	jmp    9d41fc <future_backtest::RunnerCore::run_multi+0x8f4c>
  9d4164:	48 8d 15 35 82 f2 00 	lea    rdx,[rip+0xf28235]        # 18fc3a0 <anon.609a31ba814f1e4156e50677fc366a7f.492.llvm.5215769359700358943+0xda8>
  9d416b:	ff 15 2f 2b fd 00    	call   QWORD PTR [rip+0xfd2b2f]        # 19a6ca0 <_DYNAMIC+0x4a0>
  9d4171:	e9 86 00 00 00       	jmp    9d41fc <future_backtest::RunnerCore::run_multi+0x8f4c>
  9d4176:	48 8d 3d 3b 82 f2 00 	lea    rdi,[rip+0xf2823b]        # 18fc3b8 <anon.609a31ba814f1e4156e50677fc366a7f.492.llvm.5215769359700358943+0xdc0>
  9d417d:	ff 15 05 2d fd 00    	call   QWORD PTR [rip+0xfd2d05]        # 19a6e88 <_DYNAMIC+0x688>
  9d4183:	eb 77                	jmp    9d41fc <future_backtest::RunnerCore::run_multi+0x8f4c>
  9d4185:	48 8d 3d 0c 85 f2 00 	lea    rdi,[rip+0xf2850c]        # 18fc698 <anon.609a31ba814f1e4156e50677fc366a7f.492.llvm.5215769359700358943+0x10a0>
  9d418c:	ff 15 f6 2c fd 00    	call   QWORD PTR [rip+0xfd2cf6]        # 19a6e88 <_DYNAMIC+0x688>
  9d4192:	eb 68                	jmp    9d41fc <future_backtest::RunnerCore::run_multi+0x8f4c>
  9d4194:	48 8d 15 4d 82 f2 00 	lea    rdx,[rip+0xf2824d]        # 18fc3e8 <anon.609a31ba814f1e4156e50677fc366a7f.492.llvm.5215769359700358943+0xdf0>
  9d419b:	ff 15 ff 2a fd 00    	call   QWORD PTR [rip+0xfd2aff]        # 19a6ca0 <_DYNAMIC+0x4a0>
  9d41a1:	eb 59                	jmp    9d41fc <future_backtest::RunnerCore::run_multi+0x8f4c>
  9d41a3:	48 8d 05 c6 85 f2 00 	lea    rax,[rip+0xf285c6]        # 18fc770 <anon.609a31ba814f1e4156e50677fc366a7f.492.llvm.5215769359700358943+0x1178>
  9d41aa:	e9 c3 fd ff ff       	jmp    9d3f72 <future_backtest::RunnerCore::run_multi+0x8cc2>
  9d41af:	48 8d 05 52 84 f2 00 	lea    rax,[rip+0xf28452]        # 18fc608 <anon.609a31ba814f1e4156e50677fc366a7f.492.llvm.5215769359700358943+0x1010>
  9d41b6:	48 89 84 24 10 01 00 	mov    QWORD PTR [rsp+0x110],rax
  9d41bd:	00 
  9d41be:	31 ff                	xor    edi,edi
  9d41c0:	31 f6                	xor    esi,esi
  9d41c2:	e9 b3 fd ff ff       	jmp    9d3f7a <future_backtest::RunnerCore::run_multi+0x8cca>
  9d41c7:	48 8d 05 22 80 f2 00 	lea    rax,[rip+0xf28022]        # 18fc1f0 <anon.609a31ba814f1e4156e50677fc366a7f.492.llvm.5215769359700358943+0xbf8>
  9d41ce:	eb 16                	jmp    9d41e6 <future_backtest::RunnerCore::run_multi+0x8f36>
  9d41d0:	48 8d 3d 01 80 f2 00 	lea    rdi,[rip+0xf28001]        # 18fc1d8 <anon.609a31ba814f1e4156e50677fc366a7f.492.llvm.5215769359700358943+0xbe0>
  9d41d7:	ff 15 03 34 fd 00    	call   QWORD PTR [rip+0xfd3403]        # 19a75e0 <_DYNAMIC+0xde0>
  9d41dd:	eb 1d                	jmp    9d41fc <future_backtest::RunnerCore::run_multi+0x8f4c>
  9d41df:	48 8d 05 c2 7f f2 00 	lea    rax,[rip+0xf27fc2]        # 18fc1a8 <anon.609a31ba814f1e4156e50677fc366a7f.492.llvm.5215769359700358943+0xbb0>
  9d41e6:	48 89 84 24 00 01 00 	mov    QWORD PTR [rsp+0x100],rax
  9d41ed:	00 
  9d41ee:	48 8b bc 24 00 01 00 	mov    rdi,QWORD PTR [rsp+0x100]
  9d41f5:	00 
  9d41f6:	ff 15 8c 2c fd 00    	call   QWORD PTR [rip+0xfd2c8c]        # 19a6e88 <_DYNAMIC+0x688>
  9d41fc:	0f 0b                	ud2    
  9d41fe:	49 89 c4             	mov    r12,rax
  9d4201:	48 8d bc 24 d0 11 00 	lea    rdi,[rsp+0x11d0]
  9d4208:	00 
  9d4209:	e8 d2 f7 fc ff       	call   9a39e0 <core::ptr::drop_in_place<libloading::error::Error>>
  9d420e:	e9 d3 12 00 00       	jmp    9d54e6 <future_backtest::RunnerCore::run_multi+0xa236>
  9d4213:	eb 77                	jmp    9d428c <future_backtest::RunnerCore::run_multi+0x8fdc>
  9d4215:	49 89 c4             	mov    r12,rax
  9d4218:	48 8b 44 24 18       	mov    rax,QWORD PTR [rsp+0x18]
  9d421d:	48 ff 40 10          	inc    QWORD PTR [rax+0x10]
  9d4221:	e9 df 08 00 00       	jmp    9d4b05 <future_backtest::RunnerCore::run_multi+0x9855>
  9d4226:	49 89 c4             	mov    r12,rax
  9d4229:	40 0f b6 f5          	movzx  esi,bpl
  9d422d:	48 89 df             	mov    rdi,rbx
  9d4230:	e8 3b e1 fc ff       	call   9a2370 <core::ptr::drop_in_place<std::sync::poison::mutex::MutexGuard<future_backtest::MetaControl::output::MetaOrderMetrics>>>
  9d4235:	e9 fc 0d 00 00       	jmp    9d5036 <future_backtest::RunnerCore::run_multi+0x9d86>
  9d423a:	e9 08 02 00 00       	jmp    9d4447 <future_backtest::RunnerCore::run_multi+0x9197>
  9d423f:	e9 82 0a 00 00       	jmp    9d4cc6 <future_backtest::RunnerCore::run_multi+0x9a16>
  9d4244:	49 89 c4             	mov    r12,rax
  9d4247:	48 8d 04 6d 00 00 00 	lea    rax,[rbp*2+0x0]
  9d424e:	00 
  9d424f:	48 85 c0             	test   rax,rax
  9d4252:	0f 84 1c 09 00 00    	je     9d4b74 <future_backtest::RunnerCore::run_multi+0x98c4>
  9d4258:	e9 1d 0a 00 00       	jmp    9d4c7a <future_backtest::RunnerCore::run_multi+0x99ca>
  9d425d:	49 89 c4             	mov    r12,rax
  9d4260:	48 8d 04 5d 00 00 00 	lea    rax,[rbx*2+0x0]
  9d4267:	00 
  9d4268:	48 85 c0             	test   rax,rax
  9d426b:	0f 84 c5 0d 00 00    	je     9d5036 <future_backtest::RunnerCore::run_multi+0x9d86>
  9d4271:	e9 41 0a 00 00       	jmp    9d4cb7 <future_backtest::RunnerCore::run_multi+0x9a07>
  9d4276:	49 89 c4             	mov    r12,rax
  9d4279:	48 8b 44 24 18       	mov    rax,QWORD PTR [rsp+0x18]
  9d427e:	48 ff 48 10          	dec    QWORD PTR [rax+0x10]
  9d4282:	e9 26 08 00 00       	jmp    9d4aad <future_backtest::RunnerCore::run_multi+0x97fd>
  9d4287:	e9 c7 08 00 00       	jmp    9d4b53 <future_backtest::RunnerCore::run_multi+0x98a3>
  9d428c:	49 89 c4             	mov    r12,rax
  9d428f:	e9 eb 02 00 00       	jmp    9d457f <future_backtest::RunnerCore::run_multi+0x92cf>
  9d4294:	e9 2c 03 00 00       	jmp    9d45c5 <future_backtest::RunnerCore::run_multi+0x9315>
  9d4299:	49 89 c4             	mov    r12,rax
  9d429c:	e9 e5 00 00 00       	jmp    9d4386 <future_backtest::RunnerCore::run_multi+0x90d6>
  9d42a1:	49 89 c4             	mov    r12,rax
  9d42a4:	48 85 db             	test   rbx,rbx
  9d42a7:	0f 84 d9 00 00 00    	je     9d4386 <future_backtest::RunnerCore::run_multi+0x90d6>
  9d42ad:	ba 01 00 00 00       	mov    edx,0x1
  9d42b2:	4c 89 f7             	mov    rdi,r14
  9d42b5:	48 89 de             	mov    rsi,rbx
  9d42b8:	ff 15 62 27 fd 00    	call   QWORD PTR [rip+0xfd2762]        # 19a6a20 <_DYNAMIC+0x220>
  9d42be:	e9 c3 00 00 00       	jmp    9d4386 <future_backtest::RunnerCore::run_multi+0x90d6>
  9d42c3:	eb 0d                	jmp    9d42d2 <future_backtest::RunnerCore::run_multi+0x9022>
  9d42c5:	49 89 c4             	mov    r12,rax
  9d42c8:	e9 03 01 00 00       	jmp    9d43d0 <future_backtest::RunnerCore::run_multi+0x9120>
  9d42cd:	e9 a4 00 00 00       	jmp    9d4376 <future_backtest::RunnerCore::run_multi+0x90c6>
  9d42d2:	49 89 c4             	mov    r12,rax
  9d42d5:	b3 01                	mov    bl,0x1
  9d42d7:	e9 cc 00 00 00       	jmp    9d43a8 <future_backtest::RunnerCore::run_multi+0x90f8>
  9d42dc:	49 89 c4             	mov    r12,rax
  9d42df:	e9 ec 00 00 00       	jmp    9d43d0 <future_backtest::RunnerCore::run_multi+0x9120>
  9d42e4:	49 89 c4             	mov    r12,rax
  9d42e7:	48 8b 84 24 88 00 00 	mov    rax,QWORD PTR [rsp+0x88]
  9d42ee:	00 
  9d42ef:	48 ff 40 10          	inc    QWORD PTR [rax+0x10]
  9d42f3:	e9 b5 07 00 00       	jmp    9d4aad <future_backtest::RunnerCore::run_multi+0x97fd>
  9d42f8:	49 89 c4             	mov    r12,rax
  9d42fb:	e9 86 00 00 00       	jmp    9d4386 <future_backtest::RunnerCore::run_multi+0x90d6>
  9d4300:	e9 c0 02 00 00       	jmp    9d45c5 <future_backtest::RunnerCore::run_multi+0x9315>
  9d4305:	49 89 c4             	mov    r12,rax
  9d4308:	48 8b b4 24 c0 01 00 	mov    rsi,QWORD PTR [rsp+0x1c0]
  9d430f:	00 
  9d4310:	48 85 f6             	test   rsi,rsi
  9d4313:	0f 84 af 02 00 00    	je     9d45c8 <future_backtest::RunnerCore::run_multi+0x9318>
  9d4319:	48 8b bc 24 c8 01 00 	mov    rdi,QWORD PTR [rsp+0x1c8]
  9d4320:	00 
  9d4321:	ba 01 00 00 00       	mov    edx,0x1
  9d4326:	ff 15 f4 26 fd 00    	call   QWORD PTR [rip+0xfd26f4]        # 19a6a20 <_DYNAMIC+0x220>
  9d432c:	e9 97 02 00 00       	jmp    9d45c8 <future_backtest::RunnerCore::run_multi+0x9318>
  9d4331:	e9 8f 02 00 00       	jmp    9d45c5 <future_backtest::RunnerCore::run_multi+0x9315>
  9d4336:	49 89 c4             	mov    r12,rax
  9d4339:	48 8d bc 24 80 1b 00 	lea    rdi,[rsp+0x1b80]
  9d4340:	00 
  9d4341:	e8 7a 28 fd ff       	call   9a6bc0 <core::ptr::drop_in_place<future_backtest::MetaControl::router::MetaDecisionSchedule>>
  9d4346:	e9 bf 00 00 00       	jmp    9d440a <future_backtest::RunnerCore::run_multi+0x915a>
  9d434b:	49 89 c4             	mov    r12,rax
  9d434e:	48 8d bc 24 e0 0e 00 	lea    rdi,[rsp+0xee0]
  9d4355:	00 
  9d4356:	e8 25 18 d5 ff       	call   725b80 <<alloc::collections::btree::map::BTreeMap<K,V,A> as core::ops::drop::Drop>::drop>
  9d435b:	e9 aa 00 00 00       	jmp    9d440a <future_backtest::RunnerCore::run_multi+0x915a>
  9d4360:	e9 61 09 00 00       	jmp    9d4cc6 <future_backtest::RunnerCore::run_multi+0x9a16>
  9d4365:	49 89 c4             	mov    r12,rax
  9d4368:	48 8b 44 24 18       	mov    rax,QWORD PTR [rsp+0x18]
  9d436d:	48 ff 40 10          	inc    QWORD PTR [rax+0x10]
  9d4371:	e9 c0 0c 00 00       	jmp    9d5036 <future_backtest::RunnerCore::run_multi+0x9d86>
  9d4376:	49 89 c4             	mov    r12,rax
  9d4379:	48 8d bc 24 00 05 00 	lea    rdi,[rsp+0x500]
  9d4380:	00 
  9d4381:	e8 6a 3f fd ff       	call   9a82f0 <core::ptr::drop_in_place<future_backtest::BacktestResult::backtest_result::BacktestShareStatusSlice>>
  9d4386:	48 8b b4 24 70 01 00 	mov    rsi,QWORD PTR [rsp+0x170]
  9d438d:	00 
  9d438e:	48 85 f6             	test   rsi,rsi
  9d4391:	74 13                	je     9d43a6 <future_backtest::RunnerCore::run_multi+0x90f6>
  9d4393:	48 8b bc 24 78 01 00 	mov    rdi,QWORD PTR [rsp+0x178]
  9d439a:	00 
  9d439b:	ba 01 00 00 00       	mov    edx,0x1
  9d43a0:	ff 15 7a 26 fd 00    	call   QWORD PTR [rip+0xfd267a]        # 19a6a20 <_DYNAMIC+0x220>
  9d43a6:	31 db                	xor    ebx,ebx
  9d43a8:	48 8b b4 24 20 03 00 	mov    rsi,QWORD PTR [rsp+0x320]
  9d43af:	00 
  9d43b0:	48 85 f6             	test   rsi,rsi
  9d43b3:	74 13                	je     9d43c8 <future_backtest::RunnerCore::run_multi+0x9118>
  9d43b5:	48 8b bc 24 28 03 00 	mov    rdi,QWORD PTR [rsp+0x328]
  9d43bc:	00 
  9d43bd:	ba 01 00 00 00       	mov    edx,0x1
  9d43c2:	ff 15 58 26 fd 00    	call   QWORD PTR [rip+0xfd2658]        # 19a6a20 <_DYNAMIC+0x220>
  9d43c8:	84 db                	test   bl,bl
  9d43ca:	0f 84 dd 06 00 00    	je     9d4aad <future_backtest::RunnerCore::run_multi+0x97fd>
  9d43d0:	48 8b b4 24 e8 04 00 	mov    rsi,QWORD PTR [rsp+0x4e8]
  9d43d7:	00 
  9d43d8:	48 85 f6             	test   rsi,rsi
  9d43db:	0f 84 cc 06 00 00    	je     9d4aad <future_backtest::RunnerCore::run_multi+0x97fd>
  9d43e1:	48 8b bc 24 f0 04 00 	mov    rdi,QWORD PTR [rsp+0x4f0]
  9d43e8:	00 
  9d43e9:	ba 01 00 00 00       	mov    edx,0x1
  9d43ee:	ff 15 2c 26 fd 00    	call   QWORD PTR [rip+0xfd262c]        # 19a6a20 <_DYNAMIC+0x220>
  9d43f4:	e9 b4 06 00 00       	jmp    9d4aad <future_backtest::RunnerCore::run_multi+0x97fd>
  9d43f9:	49 89 c4             	mov    r12,rax
  9d43fc:	48 8b 44 24 18       	mov    rax,QWORD PTR [rsp+0x18]
  9d4401:	48 ff 48 10          	dec    QWORD PTR [rax+0x10]
  9d4405:	eb 43                	jmp    9d444a <future_backtest::RunnerCore::run_multi+0x919a>
  9d4407:	49 89 c4             	mov    r12,rax
  9d440a:	48 8b b4 24 60 18 00 	mov    rsi,QWORD PTR [rsp+0x1860]
  9d4411:	00 
  9d4412:	48 85 f6             	test   rsi,rsi
  9d4415:	0f 84 e8 0e 00 00    	je     9d5303 <future_backtest::RunnerCore::run_multi+0xa053>
  9d441b:	ba 01 00 00 00       	mov    edx,0x1
  9d4420:	4c 89 f7             	mov    rdi,r14
  9d4423:	ff 15 f7 25 fd 00    	call   QWORD PTR [rip+0xfd25f7]        # 19a6a20 <_DYNAMIC+0x220>
  9d4429:	e9 d5 0e 00 00       	jmp    9d5303 <future_backtest::RunnerCore::run_multi+0xa053>
  9d442e:	e9 17 03 00 00       	jmp    9d474a <future_backtest::RunnerCore::run_multi+0x949a>
  9d4433:	e9 72 06 00 00       	jmp    9d4aaa <future_backtest::RunnerCore::run_multi+0x97fa>
  9d4438:	eb 31                	jmp    9d446b <future_backtest::RunnerCore::run_multi+0x91bb>
  9d443a:	49 89 c4             	mov    r12,rax
  9d443d:	e9 6f 0e 00 00       	jmp    9d52b1 <future_backtest::RunnerCore::run_multi+0xa001>
  9d4442:	e9 7e 01 00 00       	jmp    9d45c5 <future_backtest::RunnerCore::run_multi+0x9315>
  9d4447:	49 89 c4             	mov    r12,rax
  9d444a:	41 c6 06 00          	mov    BYTE PTR [r14],0x0
  9d444e:	48 85 db             	test   rbx,rbx
  9d4451:	74 7e                	je     9d44d1 <future_backtest::RunnerCore::run_multi+0x9221>
  9d4453:	ba 01 00 00 00       	mov    edx,0x1
  9d4458:	4c 89 f7             	mov    rdi,r14
  9d445b:	48 89 de             	mov    rsi,rbx
  9d445e:	ff 15 bc 25 fd 00    	call   QWORD PTR [rip+0xfd25bc]        # 19a6a20 <_DYNAMIC+0x220>
  9d4464:	eb 6b                	jmp    9d44d1 <future_backtest::RunnerCore::run_multi+0x9221>
  9d4466:	e9 fd 0c 00 00       	jmp    9d5168 <future_backtest::RunnerCore::run_multi+0x9eb8>
  9d446b:	49 89 c4             	mov    r12,rax
  9d446e:	48 8b b4 24 b0 10 00 	mov    rsi,QWORD PTR [rsp+0x10b0]
  9d4475:	00 
  9d4476:	48 85 f6             	test   rsi,rsi
  9d4479:	0f 84 b7 0b 00 00    	je     9d5036 <future_backtest::RunnerCore::run_multi+0x9d86>
  9d447f:	48 8b bc 24 b8 10 00 	mov    rdi,QWORD PTR [rsp+0x10b8]
  9d4486:	00 
  9d4487:	e9 44 0b 00 00       	jmp    9d4fd0 <future_backtest::RunnerCore::run_multi+0x9d20>
  9d448c:	49 89 c4             	mov    r12,rax
  9d448f:	48 8b b4 24 c0 01 00 	mov    rsi,QWORD PTR [rsp+0x1c0]
  9d4496:	00 
  9d4497:	48 85 f6             	test   rsi,rsi
  9d449a:	0f 84 96 0b 00 00    	je     9d5036 <future_backtest::RunnerCore::run_multi+0x9d86>
  9d44a0:	48 8b bc 24 c8 01 00 	mov    rdi,QWORD PTR [rsp+0x1c8]
  9d44a7:	00 
  9d44a8:	e9 23 0b 00 00       	jmp    9d4fd0 <future_backtest::RunnerCore::run_multi+0x9d20>
  9d44ad:	49 89 c4             	mov    r12,rax
  9d44b0:	48 8b b4 24 a0 03 00 	mov    rsi,QWORD PTR [rsp+0x3a0]
  9d44b7:	00 
  9d44b8:	48 85 f6             	test   rsi,rsi
  9d44bb:	0f 85 58 0f 00 00    	jne    9d5419 <future_backtest::RunnerCore::run_multi+0xa169>
  9d44c1:	e9 6a 0f 00 00       	jmp    9d5430 <future_backtest::RunnerCore::run_multi+0xa180>
  9d44c6:	49 89 c4             	mov    r12,rax
  9d44c9:	e9 62 0f 00 00       	jmp    9d5430 <future_backtest::RunnerCore::run_multi+0xa180>
  9d44ce:	49 89 c4             	mov    r12,rax
  9d44d1:	48 8d bc 24 c0 01 00 	lea    rdi,[rsp+0x1c0]
  9d44d8:	00 
  9d44d9:	e8 02 fa fc ff       	call   9a3ee0 <core::ptr::drop_in_place<future_backtest::ffi::FfiCtx>>
  9d44de:	e9 ca 05 00 00       	jmp    9d4aad <future_backtest::RunnerCore::run_multi+0x97fd>
  9d44e3:	49 89 c4             	mov    r12,rax
  9d44e6:	48 8d bc 24 c0 01 00 	lea    rdi,[rsp+0x1c0]
  9d44ed:	00 
  9d44ee:	e8 ed f9 fc ff       	call   9a3ee0 <core::ptr::drop_in_place<future_backtest::ffi::FfiCtx>>
  9d44f3:	e9 ed 00 00 00       	jmp    9d45e5 <future_backtest::RunnerCore::run_multi+0x9335>
  9d44f8:	49 89 c4             	mov    r12,rax
  9d44fb:	48 8d bc 24 10 06 00 	lea    rdi,[rsp+0x610]
  9d4502:	00 
  9d4503:	e8 c8 41 fd ff       	call   9a86d0 <core::ptr::drop_in_place<future_backtest::Strategy::simulation::strategy_sos::watcher::StrategyWatcher>>
  9d4508:	e9 6f 0f 00 00       	jmp    9d547c <future_backtest::RunnerCore::run_multi+0xa1cc>
  9d450d:	ff 15 6d 26 fd 00    	call   QWORD PTR [rip+0xfd266d]        # 19a6b80 <_DYNAMIC+0x380>
  9d4513:	49 89 c4             	mov    r12,rax
  9d4516:	48 8d bc 24 d0 11 00 	lea    rdi,[rsp+0x11d0]
  9d451d:	00 
  9d451e:	e8 8d 9c 07 00       	call   a4e1b0 <<hashbrown::raw::RawTable<T,A> as core::ops::drop::Drop>::drop>
  9d4523:	e9 54 0f 00 00       	jmp    9d547c <future_backtest::RunnerCore::run_multi+0xa1cc>
  9d4528:	ff 15 52 26 fd 00    	call   QWORD PTR [rip+0xfd2652]        # 19a6b80 <_DYNAMIC+0x380>
  9d452e:	49 89 c4             	mov    r12,rax
  9d4531:	48 8b b4 24 00 05 00 	mov    rsi,QWORD PTR [rsp+0x500]
  9d4538:	00 
  9d4539:	48 85 f6             	test   rsi,rsi
  9d453c:	0f 84 a7 0d 00 00    	je     9d52e9 <future_backtest::RunnerCore::run_multi+0xa039>
  9d4542:	48 c1 e6 04          	shl    rsi,0x4
  9d4546:	ba 08 00 00 00       	mov    edx,0x8
  9d454b:	48 89 df             	mov    rdi,rbx
  9d454e:	ff 15 cc 24 fd 00    	call   QWORD PTR [rip+0xfd24cc]        # 19a6a20 <_DYNAMIC+0x220>
  9d4554:	e9 90 0d 00 00       	jmp    9d52e9 <future_backtest::RunnerCore::run_multi+0xa039>
  9d4559:	eb 14                	jmp    9d456f <future_backtest::RunnerCore::run_multi+0x92bf>
  9d455b:	eb 12                	jmp    9d456f <future_backtest::RunnerCore::run_multi+0x92bf>
  9d455d:	49 89 c4             	mov    r12,rax
  9d4560:	48 8d bc 24 00 05 00 	lea    rdi,[rsp+0x500]
  9d4567:	00 
  9d4568:	e8 93 8c 07 00       	call   a4d200 <<hashbrown::raw::RawTable<T,A> as core::ops::drop::Drop>::drop>
  9d456d:	eb 03                	jmp    9d4572 <future_backtest::RunnerCore::run_multi+0x92c2>
  9d456f:	49 89 c4             	mov    r12,rax
  9d4572:	48 8d bc 24 40 01 00 	lea    rdi,[rsp+0x140]
  9d4579:	00 
  9d457a:	e8 61 7f 07 00       	call   a4c4e0 <<hashbrown::raw::RawTable<T,A> as core::ops::drop::Drop>::drop>
  9d457f:	48 8d bc 24 70 01 00 	lea    rdi,[rsp+0x170]
  9d4586:	00 
  9d4587:	e8 74 8c 07 00       	call   a4d200 <<hashbrown::raw::RawTable<T,A> as core::ops::drop::Drop>::drop>
  9d458c:	e9 1c 05 00 00       	jmp    9d4aad <future_backtest::RunnerCore::run_multi+0x97fd>
  9d4591:	49 89 c4             	mov    r12,rax
  9d4594:	48 8d bc 24 80 1b 00 	lea    rdi,[rsp+0x1b80]
  9d459b:	00 
  9d459c:	e8 df 15 d5 ff       	call   725b80 <<alloc::collections::btree::map::BTreeMap<K,V,A> as core::ops::drop::Drop>::drop>
  9d45a1:	e9 5d 0d 00 00       	jmp    9d5303 <future_backtest::RunnerCore::run_multi+0xa053>
  9d45a6:	e9 89 03 00 00       	jmp    9d4934 <future_backtest::RunnerCore::run_multi+0x9684>
  9d45ab:	e9 fa 04 00 00       	jmp    9d4aaa <future_backtest::RunnerCore::run_multi+0x97fa>
  9d45b0:	49 89 c4             	mov    r12,rax
  9d45b3:	e9 3e 0d 00 00       	jmp    9d52f6 <future_backtest::RunnerCore::run_multi+0xa046>
  9d45b8:	49 89 c4             	mov    r12,rax
  9d45bb:	e9 70 0e 00 00       	jmp    9d5430 <future_backtest::RunnerCore::run_multi+0xa180>
  9d45c0:	e9 3e 0e 00 00       	jmp    9d5403 <future_backtest::RunnerCore::run_multi+0xa153>
  9d45c5:	49 89 c4             	mov    r12,rax
  9d45c8:	48 8b 44 24 18       	mov    rax,QWORD PTR [rsp+0x18]
  9d45cd:	48 ff 40 10          	inc    QWORD PTR [rax+0x10]
  9d45d1:	e9 d7 04 00 00       	jmp    9d4aad <future_backtest::RunnerCore::run_multi+0x97fd>
  9d45d6:	e9 59 03 00 00       	jmp    9d4934 <future_backtest::RunnerCore::run_multi+0x9684>
  9d45db:	e9 6a 01 00 00       	jmp    9d474a <future_backtest::RunnerCore::run_multi+0x949a>
  9d45e0:	eb 00                	jmp    9d45e2 <future_backtest::RunnerCore::run_multi+0x9332>
  9d45e2:	49 89 c4             	mov    r12,rax
  9d45e5:	c6 45 00 00          	mov    BYTE PTR [rbp+0x0],0x0
  9d45e9:	48 83 7c 24 60 00    	cmp    QWORD PTR [rsp+0x60],0x0
  9d45ef:	75 2b                	jne    9d461c <future_backtest::RunnerCore::run_multi+0x936c>
  9d45f1:	c6 03 00             	mov    BYTE PTR [rbx],0x0
  9d45f4:	48 83 bc 24 90 00 00 	cmp    QWORD PTR [rsp+0x90],0x0
  9d45fb:	00 00 
  9d45fd:	0f 85 f5 00 00 00    	jne    9d46f8 <future_backtest::RunnerCore::run_multi+0x9448>
  9d4603:	48 8b 44 24 70       	mov    rax,QWORD PTR [rsp+0x70]
  9d4608:	c6 00 00             	mov    BYTE PTR [rax],0x0
  9d460b:	48 83 7c 24 50 00    	cmp    QWORD PTR [rsp+0x50],0x0
  9d4611:	0f 85 1c 01 00 00    	jne    9d4733 <future_backtest::RunnerCore::run_multi+0x9483>
  9d4617:	e9 31 01 00 00       	jmp    9d474d <future_backtest::RunnerCore::run_multi+0x949d>
  9d461c:	ba 01 00 00 00       	mov    edx,0x1
  9d4621:	48 89 ef             	mov    rdi,rbp
  9d4624:	48 8b 74 24 60       	mov    rsi,QWORD PTR [rsp+0x60]
  9d4629:	ff 15 f1 23 fd 00    	call   QWORD PTR [rip+0xfd23f1]        # 19a6a20 <_DYNAMIC+0x220>
  9d462f:	c6 03 00             	mov    BYTE PTR [rbx],0x0
  9d4632:	48 83 bc 24 90 00 00 	cmp    QWORD PTR [rsp+0x90],0x0
  9d4639:	00 00 
  9d463b:	74 c6                	je     9d4603 <future_backtest::RunnerCore::run_multi+0x9353>
  9d463d:	e9 b6 00 00 00       	jmp    9d46f8 <future_backtest::RunnerCore::run_multi+0x9448>
  9d4642:	e9 63 04 00 00       	jmp    9d4aaa <future_backtest::RunnerCore::run_multi+0x97fa>
  9d4647:	e9 b6 04 00 00       	jmp    9d4b02 <future_backtest::RunnerCore::run_multi+0x9852>
  9d464c:	49 89 c4             	mov    r12,rax
  9d464f:	48 8d bc 24 c0 01 00 	lea    rdi,[rsp+0x1c0]
  9d4656:	00 
  9d4657:	e8 84 f8 fc ff       	call   9a3ee0 <core::ptr::drop_in_place<future_backtest::ffi::FfiCtx>>
  9d465c:	e9 49 02 00 00       	jmp    9d48aa <future_backtest::RunnerCore::run_multi+0x95fa>
  9d4661:	e9 60 06 00 00       	jmp    9d4cc6 <future_backtest::RunnerCore::run_multi+0x9a16>
  9d4666:	e9 3f 04 00 00       	jmp    9d4aaa <future_backtest::RunnerCore::run_multi+0x97fa>
  9d466b:	e9 80 03 00 00       	jmp    9d49f0 <future_backtest::RunnerCore::run_multi+0x9740>
  9d4670:	e9 10 04 00 00       	jmp    9d4a85 <future_backtest::RunnerCore::run_multi+0x97d5>
  9d4675:	4c 89 eb             	mov    rbx,r13
  9d4678:	49 89 c4             	mov    r12,rax
  9d467b:	48 8d bc 24 10 06 00 	lea    rdi,[rsp+0x610]
  9d4682:	00 
  9d4683:	e8 a8 d6 fc ff       	call   9a1d30 <core::ptr::drop_in_place<core::result::Result<alloc::ffi::c_str::CString,alloc::ffi::c_str::NulError>>>
  9d4688:	48 8b 44 24 50       	mov    rax,QWORD PTR [rsp+0x50]
  9d468d:	c6 00 00             	mov    BYTE PTR [rax],0x0
  9d4690:	48 83 bc 24 90 00 00 	cmp    QWORD PTR [rsp+0x90],0x0
  9d4697:	00 00 
  9d4699:	0f 84 2a 02 00 00    	je     9d48c9 <future_backtest::RunnerCore::run_multi+0x9619>
  9d469f:	e9 58 02 00 00       	jmp    9d48fc <future_backtest::RunnerCore::run_multi+0x964c>
  9d46a4:	4c 89 eb             	mov    rbx,r13
  9d46a7:	49 89 c4             	mov    r12,rax
  9d46aa:	48 8d bc 24 10 06 00 	lea    rdi,[rsp+0x610]
  9d46b1:	00 
  9d46b2:	e8 79 d6 fc ff       	call   9a1d30 <core::ptr::drop_in_place<core::result::Result<alloc::ffi::c_str::CString,alloc::ffi::c_str::NulError>>>
  9d46b7:	c6 03 00             	mov    BYTE PTR [rbx],0x0
  9d46ba:	48 83 7c 24 70 00    	cmp    QWORD PTR [rsp+0x70],0x0
  9d46c0:	0f 85 59 02 00 00    	jne    9d491f <future_backtest::RunnerCore::run_multi+0x966f>
  9d46c6:	e9 6c 02 00 00       	jmp    9d4937 <future_backtest::RunnerCore::run_multi+0x9687>
  9d46cb:	49 89 c4             	mov    r12,rax
  9d46ce:	48 8d bc 24 10 06 00 	lea    rdi,[rsp+0x610]
  9d46d5:	00 
  9d46d6:	e8 55 d6 fc ff       	call   9a1d30 <core::ptr::drop_in_place<core::result::Result<alloc::ffi::c_str::CString,alloc::ffi::c_str::NulError>>>
  9d46db:	e9 57 02 00 00       	jmp    9d4937 <future_backtest::RunnerCore::run_multi+0x9687>
  9d46e0:	4c 89 eb             	mov    rbx,r13
  9d46e3:	49 89 c4             	mov    r12,rax
  9d46e6:	c6 03 00             	mov    BYTE PTR [rbx],0x0
  9d46e9:	48 83 bc 24 90 00 00 	cmp    QWORD PTR [rsp+0x90],0x0
  9d46f0:	00 00 
  9d46f2:	0f 84 0b ff ff ff    	je     9d4603 <future_backtest::RunnerCore::run_multi+0x9353>
  9d46f8:	ba 01 00 00 00       	mov    edx,0x1
  9d46fd:	48 89 df             	mov    rdi,rbx
  9d4700:	48 8b b4 24 90 00 00 	mov    rsi,QWORD PTR [rsp+0x90]
  9d4707:	00 
  9d4708:	ff 15 12 23 fd 00    	call   QWORD PTR [rip+0xfd2312]        # 19a6a20 <_DYNAMIC+0x220>
  9d470e:	48 8b 44 24 70       	mov    rax,QWORD PTR [rsp+0x70]
  9d4713:	c6 00 00             	mov    BYTE PTR [rax],0x0
  9d4716:	48 83 7c 24 50 00    	cmp    QWORD PTR [rsp+0x50],0x0
  9d471c:	75 15                	jne    9d4733 <future_backtest::RunnerCore::run_multi+0x9483>
  9d471e:	eb 2d                	jmp    9d474d <future_backtest::RunnerCore::run_multi+0x949d>
  9d4720:	49 89 c4             	mov    r12,rax
  9d4723:	48 8b 44 24 70       	mov    rax,QWORD PTR [rsp+0x70]
  9d4728:	c6 00 00             	mov    BYTE PTR [rax],0x0
  9d472b:	48 83 7c 24 50 00    	cmp    QWORD PTR [rsp+0x50],0x0
  9d4731:	74 1a                	je     9d474d <future_backtest::RunnerCore::run_multi+0x949d>
  9d4733:	ba 01 00 00 00       	mov    edx,0x1
  9d4738:	48 8b 7c 24 70       	mov    rdi,QWORD PTR [rsp+0x70]
  9d473d:	48 8b 74 24 50       	mov    rsi,QWORD PTR [rsp+0x50]
  9d4742:	ff 15 d8 22 fd 00    	call   QWORD PTR [rip+0xfd22d8]        # 19a6a20 <_DYNAMIC+0x220>
  9d4748:	eb 03                	jmp    9d474d <future_backtest::RunnerCore::run_multi+0x949d>
  9d474a:	49 89 c4             	mov    r12,rax
  9d474d:	48 8d bc 24 70 01 00 	lea    rdi,[rsp+0x170]
  9d4754:	00 
  9d4755:	e8 16 39 fd ff       	call   9a8070 <core::ptr::drop_in_place<alloc::vec::Vec<future_backtest::Order::trade_order::TradingOrder>>>
  9d475a:	e9 4e 03 00 00       	jmp    9d4aad <future_backtest::RunnerCore::run_multi+0x97fd>
  9d475f:	e9 62 05 00 00       	jmp    9d4cc6 <future_backtest::RunnerCore::run_multi+0x9a16>
  9d4764:	49 89 c4             	mov    r12,rax
  9d4767:	48 8d bc 24 d0 11 00 	lea    rdi,[rsp+0x11d0]
  9d476e:	00 
  9d476f:	e8 dc 14 fd ff       	call   9a5c50 <core::ptr::drop_in_place<(alloc::string::String,alloc::string::String)>>
  9d4774:	e9 bf 0a 00 00       	jmp    9d5238 <future_backtest::RunnerCore::run_multi+0x9f88>
  9d4779:	49 89 c4             	mov    r12,rax
  9d477c:	48 8d bc 24 10 06 00 	lea    rdi,[rsp+0x610]
  9d4783:	00 
  9d4784:	e8 a7 d5 fc ff       	call   9a1d30 <core::ptr::drop_in_place<core::result::Result<alloc::ffi::c_str::CString,alloc::ffi::c_str::NulError>>>
  9d4789:	48 8b 44 24 50       	mov    rax,QWORD PTR [rsp+0x50]
  9d478e:	c6 00 00             	mov    BYTE PTR [rax],0x0
  9d4791:	48 83 bc 24 90 00 00 	cmp    QWORD PTR [rsp+0x90],0x0
  9d4798:	00 00 
  9d479a:	0f 85 96 02 00 00    	jne    9d4a36 <future_backtest::RunnerCore::run_multi+0x9786>
  9d47a0:	e9 a9 02 00 00       	jmp    9d4a4e <future_backtest::RunnerCore::run_multi+0x979e>
  9d47a5:	49 89 c4             	mov    r12,rax
  9d47a8:	48 8d bc 24 10 06 00 	lea    rdi,[rsp+0x610]
  9d47af:	00 
  9d47b0:	e8 7b d5 fc ff       	call   9a1d30 <core::ptr::drop_in_place<core::result::Result<alloc::ffi::c_str::CString,alloc::ffi::c_str::NulError>>>
  9d47b5:	41 c6 07 00          	mov    BYTE PTR [r15],0x0
  9d47b9:	48 83 bc 24 a0 00 00 	cmp    QWORD PTR [rsp+0xa0],0x0
  9d47c0:	00 00 
  9d47c2:	0f 84 47 02 00 00    	je     9d4a0f <future_backtest::RunnerCore::run_multi+0x975f>
  9d47c8:	e9 9a 01 00 00       	jmp    9d4967 <future_backtest::RunnerCore::run_multi+0x96b7>
  9d47cd:	49 89 c4             	mov    r12,rax
  9d47d0:	48 8d bc 24 10 06 00 	lea    rdi,[rsp+0x610]
  9d47d7:	00 
  9d47d8:	e8 53 d5 fc ff       	call   9a1d30 <core::ptr::drop_in_place<core::result::Result<alloc::ffi::c_str::CString,alloc::ffi::c_str::NulError>>>
  9d47dd:	48 8b 44 24 70       	mov    rax,QWORD PTR [rsp+0x70]
  9d47e2:	c6 00 00             	mov    BYTE PTR [rax],0x0
  9d47e5:	48 83 7c 24 60 00    	cmp    QWORD PTR [rsp+0x60],0x0
  9d47eb:	0f 84 32 02 00 00    	je     9d4a23 <future_backtest::RunnerCore::run_multi+0x9773>
  9d47f1:	e9 9b 01 00 00       	jmp    9d4991 <future_backtest::RunnerCore::run_multi+0x96e1>
  9d47f6:	49 89 c4             	mov    r12,rax
  9d47f9:	48 8d bc 24 10 06 00 	lea    rdi,[rsp+0x610]
  9d4800:	00 
  9d4801:	e8 2a d5 fc ff       	call   9a1d30 <core::ptr::drop_in_place<core::result::Result<alloc::ffi::c_str::CString,alloc::ffi::c_str::NulError>>>
  9d4806:	e9 43 02 00 00       	jmp    9d4a4e <future_backtest::RunnerCore::run_multi+0x979e>
  9d480b:	49 89 c4             	mov    r12,rax
  9d480e:	48 8b b4 24 10 06 00 	mov    rsi,QWORD PTR [rsp+0x610]
  9d4815:	00 
  9d4816:	48 85 f6             	test   rsi,rsi
  9d4819:	74 17                	je     9d4832 <future_backtest::RunnerCore::run_multi+0x9582>
  9d481b:	48 8b bc 24 18 06 00 	mov    rdi,QWORD PTR [rsp+0x618]
  9d4822:	00 
  9d4823:	48 c1 e6 03          	shl    rsi,0x3
  9d4827:	ba 08 00 00 00       	mov    edx,0x8
  9d482c:	ff 15 ee 21 fd 00    	call   QWORD PTR [rip+0xfd21ee]        # 19a6a20 <_DYNAMIC+0x220>
  9d4832:	48 8d bc 24 80 1b 00 	lea    rdi,[rsp+0x1b80]
  9d4839:	00 
  9d483a:	e8 31 39 fd ff       	call   9a8170 <core::ptr::drop_in_place<core::option::Option<alloc::vec::Vec<alloc::string::String>>>>
  9d483f:	e9 a7 0d 00 00       	jmp    9d55eb <future_backtest::RunnerCore::run_multi+0xa33b>
  9d4844:	e9 7d 04 00 00       	jmp    9d4cc6 <future_backtest::RunnerCore::run_multi+0x9a16>
  9d4849:	e9 c9 06 00 00       	jmp    9d4f17 <future_backtest::RunnerCore::run_multi+0x9c67>
  9d484e:	e9 57 02 00 00       	jmp    9d4aaa <future_backtest::RunnerCore::run_multi+0x97fa>
  9d4853:	e9 f0 03 00 00       	jmp    9d4c48 <future_backtest::RunnerCore::run_multi+0x9998>
  9d4858:	49 89 c4             	mov    r12,rax
  9d485b:	48 8d bc 24 10 06 00 	lea    rdi,[rsp+0x610]
  9d4862:	00 
  9d4863:	ff 15 67 3a fd 00    	call   QWORD PTR [rip+0xfd3a67]        # 19a82d0 <_DYNAMIC+0x1ad0>
  9d4869:	e9 dd 03 00 00       	jmp    9d4c4b <future_backtest::RunnerCore::run_multi+0x999b>
  9d486e:	ff 15 0c 23 fd 00    	call   QWORD PTR [rip+0xfd230c]        # 19a6b80 <_DYNAMIC+0x380>
  9d4874:	eb 31                	jmp    9d48a7 <future_backtest::RunnerCore::run_multi+0x95f7>
  9d4876:	4c 89 eb             	mov    rbx,r13
  9d4879:	49 89 c4             	mov    r12,rax
  9d487c:	48 8b 44 24 50       	mov    rax,QWORD PTR [rsp+0x50]
  9d4881:	c6 00 00             	mov    BYTE PTR [rax],0x0
  9d4884:	48 83 bc 24 90 00 00 	cmp    QWORD PTR [rsp+0x90],0x0
  9d488b:	00 00 
  9d488d:	74 3a                	je     9d48c9 <future_backtest::RunnerCore::run_multi+0x9619>
  9d488f:	eb 6b                	jmp    9d48fc <future_backtest::RunnerCore::run_multi+0x964c>
  9d4891:	4c 89 eb             	mov    rbx,r13
  9d4894:	49 89 c4             	mov    r12,rax
  9d4897:	c6 03 00             	mov    BYTE PTR [rbx],0x0
  9d489a:	48 83 7c 24 70 00    	cmp    QWORD PTR [rsp+0x70],0x0
  9d48a0:	75 7d                	jne    9d491f <future_backtest::RunnerCore::run_multi+0x966f>
  9d48a2:	e9 90 00 00 00       	jmp    9d4937 <future_backtest::RunnerCore::run_multi+0x9687>
  9d48a7:	49 89 c4             	mov    r12,rax
  9d48aa:	c6 45 00 00          	mov    BYTE PTR [rbp+0x0],0x0
  9d48ae:	48 83 7c 24 60 00    	cmp    QWORD PTR [rsp+0x60],0x0
  9d48b4:	75 20                	jne    9d48d6 <future_backtest::RunnerCore::run_multi+0x9626>
  9d48b6:	48 8b 44 24 50       	mov    rax,QWORD PTR [rsp+0x50]
  9d48bb:	c6 00 00             	mov    BYTE PTR [rax],0x0
  9d48be:	48 83 bc 24 90 00 00 	cmp    QWORD PTR [rsp+0x90],0x0
  9d48c5:	00 00 
  9d48c7:	75 33                	jne    9d48fc <future_backtest::RunnerCore::run_multi+0x964c>
  9d48c9:	c6 03 00             	mov    BYTE PTR [rbx],0x0
  9d48cc:	48 83 7c 24 70 00    	cmp    QWORD PTR [rsp+0x70],0x0
  9d48d2:	75 4b                	jne    9d491f <future_backtest::RunnerCore::run_multi+0x966f>
  9d48d4:	eb 61                	jmp    9d4937 <future_backtest::RunnerCore::run_multi+0x9687>
  9d48d6:	ba 01 00 00 00       	mov    edx,0x1
  9d48db:	48 89 ef             	mov    rdi,rbp
  9d48de:	48 8b 74 24 60       	mov    rsi,QWORD PTR [rsp+0x60]
  9d48e3:	ff 15 37 21 fd 00    	call   QWORD PTR [rip+0xfd2137]        # 19a6a20 <_DYNAMIC+0x220>
  9d48e9:	48 8b 44 24 50       	mov    rax,QWORD PTR [rsp+0x50]
  9d48ee:	c6 00 00             	mov    BYTE PTR [rax],0x0
  9d48f1:	48 83 bc 24 90 00 00 	cmp    QWORD PTR [rsp+0x90],0x0
  9d48f8:	00 00 
  9d48fa:	74 cd                	je     9d48c9 <future_backtest::RunnerCore::run_multi+0x9619>
  9d48fc:	ba 01 00 00 00       	mov    edx,0x1
  9d4901:	48 8b 7c 24 50       	mov    rdi,QWORD PTR [rsp+0x50]
  9d4906:	48 8b b4 24 90 00 00 	mov    rsi,QWORD PTR [rsp+0x90]
  9d490d:	00 
  9d490e:	ff 15 0c 21 fd 00    	call   QWORD PTR [rip+0xfd210c]        # 19a6a20 <_DYNAMIC+0x220>
  9d4914:	c6 03 00             	mov    BYTE PTR [rbx],0x0
  9d4917:	48 83 7c 24 70 00    	cmp    QWORD PTR [rsp+0x70],0x0
  9d491d:	74 18                	je     9d4937 <future_backtest::RunnerCore::run_multi+0x9687>
  9d491f:	ba 01 00 00 00       	mov    edx,0x1
  9d4924:	48 89 df             	mov    rdi,rbx
  9d4927:	48 8b 74 24 70       	mov    rsi,QWORD PTR [rsp+0x70]
  9d492c:	ff 15 ee 20 fd 00    	call   QWORD PTR [rip+0xfd20ee]        # 19a6a20 <_DYNAMIC+0x220>
  9d4932:	eb 03                	jmp    9d4937 <future_backtest::RunnerCore::run_multi+0x9687>
  9d4934:	49 89 c4             	mov    r12,rax
  9d4937:	48 8d bc 24 70 01 00 	lea    rdi,[rsp+0x170]
  9d493e:	00 
  9d493f:	e8 2c 37 fd ff       	call   9a8070 <core::ptr::drop_in_place<alloc::vec::Vec<future_backtest::Order::trade_order::TradingOrder>>>
  9d4944:	e9 64 01 00 00       	jmp    9d4aad <future_backtest::RunnerCore::run_multi+0x97fd>
  9d4949:	49 89 c4             	mov    r12,rax
  9d494c:	e9 b2 09 00 00       	jmp    9d5303 <future_backtest::RunnerCore::run_multi+0xa053>
  9d4951:	49 89 c4             	mov    r12,rax
  9d4954:	41 c6 07 00          	mov    BYTE PTR [r15],0x0
  9d4958:	48 83 bc 24 a0 00 00 	cmp    QWORD PTR [rsp+0xa0],0x0
  9d495f:	00 00 
  9d4961:	0f 84 a8 00 00 00    	je     9d4a0f <future_backtest::RunnerCore::run_multi+0x975f>
  9d4967:	ba 01 00 00 00       	mov    edx,0x1
  9d496c:	4c 89 ff             	mov    rdi,r15
  9d496f:	48 8b b4 24 a0 00 00 	mov    rsi,QWORD PTR [rsp+0xa0]
  9d4976:	00 
  9d4977:	ff 15 a3 20 fd 00    	call   QWORD PTR [rip+0xfd20a3]        # 19a6a20 <_DYNAMIC+0x220>
  9d497d:	48 8b 44 24 70       	mov    rax,QWORD PTR [rsp+0x70]
  9d4982:	c6 00 00             	mov    BYTE PTR [rax],0x0
  9d4985:	48 83 7c 24 60 00    	cmp    QWORD PTR [rsp+0x60],0x0
  9d498b:	0f 84 92 00 00 00    	je     9d4a23 <future_backtest::RunnerCore::run_multi+0x9773>
  9d4991:	ba 01 00 00 00       	mov    edx,0x1
  9d4996:	48 8b 7c 24 70       	mov    rdi,QWORD PTR [rsp+0x70]
  9d499b:	48 8b 74 24 60       	mov    rsi,QWORD PTR [rsp+0x60]
  9d49a0:	ff 15 7a 20 fd 00    	call   QWORD PTR [rip+0xfd207a]        # 19a6a20 <_DYNAMIC+0x220>
  9d49a6:	48 8b 44 24 50       	mov    rax,QWORD PTR [rsp+0x50]
  9d49ab:	c6 00 00             	mov    BYTE PTR [rax],0x0
  9d49ae:	48 83 bc 24 90 00 00 	cmp    QWORD PTR [rsp+0x90],0x0
  9d49b5:	00 00 
  9d49b7:	75 7d                	jne    9d4a36 <future_backtest::RunnerCore::run_multi+0x9786>
  9d49b9:	e9 90 00 00 00       	jmp    9d4a4e <future_backtest::RunnerCore::run_multi+0x979e>
  9d49be:	49 89 c4             	mov    r12,rax
  9d49c1:	48 8b 44 24 70       	mov    rax,QWORD PTR [rsp+0x70]
  9d49c6:	c6 00 00             	mov    BYTE PTR [rax],0x0
  9d49c9:	48 83 7c 24 60 00    	cmp    QWORD PTR [rsp+0x60],0x0
  9d49cf:	74 52                	je     9d4a23 <future_backtest::RunnerCore::run_multi+0x9773>
  9d49d1:	eb be                	jmp    9d4991 <future_backtest::RunnerCore::run_multi+0x96e1>
  9d49d3:	49 89 c4             	mov    r12,rax
  9d49d6:	48 8b 44 24 50       	mov    rax,QWORD PTR [rsp+0x50]
  9d49db:	c6 00 00             	mov    BYTE PTR [rax],0x0
  9d49de:	48 83 bc 24 90 00 00 	cmp    QWORD PTR [rsp+0x90],0x0
  9d49e5:	00 00 
  9d49e7:	75 4d                	jne    9d4a36 <future_backtest::RunnerCore::run_multi+0x9786>
  9d49e9:	eb 63                	jmp    9d4a4e <future_backtest::RunnerCore::run_multi+0x979e>
  9d49eb:	49 89 c4             	mov    r12,rax
  9d49ee:	eb 5e                	jmp    9d4a4e <future_backtest::RunnerCore::run_multi+0x979e>
  9d49f0:	49 89 c4             	mov    r12,rax
  9d49f3:	41 c6 06 00          	mov    BYTE PTR [r14],0x0
  9d49f7:	4d 85 ed             	test   r13,r13
  9d49fa:	75 64                	jne    9d4a60 <future_backtest::RunnerCore::run_multi+0x97b0>
  9d49fc:	41 c6 07 00          	mov    BYTE PTR [r15],0x0
  9d4a00:	48 83 bc 24 a0 00 00 	cmp    QWORD PTR [rsp+0xa0],0x0
  9d4a07:	00 00 
  9d4a09:	0f 85 58 ff ff ff    	jne    9d4967 <future_backtest::RunnerCore::run_multi+0x96b7>
  9d4a0f:	48 8b 44 24 70       	mov    rax,QWORD PTR [rsp+0x70]
  9d4a14:	c6 00 00             	mov    BYTE PTR [rax],0x0
  9d4a17:	48 83 7c 24 60 00    	cmp    QWORD PTR [rsp+0x60],0x0
  9d4a1d:	0f 85 6e ff ff ff    	jne    9d4991 <future_backtest::RunnerCore::run_multi+0x96e1>
  9d4a23:	48 8b 44 24 50       	mov    rax,QWORD PTR [rsp+0x50]
  9d4a28:	c6 00 00             	mov    BYTE PTR [rax],0x0
  9d4a2b:	48 83 bc 24 90 00 00 	cmp    QWORD PTR [rsp+0x90],0x0
  9d4a32:	00 00 
  9d4a34:	74 18                	je     9d4a4e <future_backtest::RunnerCore::run_multi+0x979e>
  9d4a36:	ba 01 00 00 00       	mov    edx,0x1
  9d4a3b:	48 8b 7c 24 50       	mov    rdi,QWORD PTR [rsp+0x50]
  9d4a40:	48 8b b4 24 90 00 00 	mov    rsi,QWORD PTR [rsp+0x90]
  9d4a47:	00 
  9d4a48:	ff 15 d2 1f fd 00    	call   QWORD PTR [rip+0xfd1fd2]        # 19a6a20 <_DYNAMIC+0x220>
  9d4a4e:	48 8d bc 24 c0 01 00 	lea    rdi,[rsp+0x1c0]
  9d4a55:	00 
  9d4a56:	e8 85 f4 fc ff       	call   9a3ee0 <core::ptr::drop_in_place<future_backtest::ffi::FfiCtx>>
  9d4a5b:	e9 a5 00 00 00       	jmp    9d4b05 <future_backtest::RunnerCore::run_multi+0x9855>
  9d4a60:	ba 01 00 00 00       	mov    edx,0x1
  9d4a65:	4c 89 f7             	mov    rdi,r14
  9d4a68:	4c 89 ee             	mov    rsi,r13
  9d4a6b:	ff 15 af 1f fd 00    	call   QWORD PTR [rip+0xfd1faf]        # 19a6a20 <_DYNAMIC+0x220>
  9d4a71:	41 c6 07 00          	mov    BYTE PTR [r15],0x0
  9d4a75:	48 83 bc 24 a0 00 00 	cmp    QWORD PTR [rsp+0xa0],0x0
  9d4a7c:	00 00 
  9d4a7e:	74 8f                	je     9d4a0f <future_backtest::RunnerCore::run_multi+0x975f>
  9d4a80:	e9 e2 fe ff ff       	jmp    9d4967 <future_backtest::RunnerCore::run_multi+0x96b7>
  9d4a85:	49 89 c4             	mov    r12,rax
  9d4a88:	48 8d bc 24 c0 01 00 	lea    rdi,[rsp+0x1c0]
  9d4a8f:	00 
  9d4a90:	e8 4b f4 fc ff       	call   9a3ee0 <core::ptr::drop_in_place<future_backtest::ffi::FfiCtx>>
  9d4a95:	e9 96 09 00 00       	jmp    9d5430 <future_backtest::RunnerCore::run_multi+0xa180>
  9d4a9a:	49 89 c4             	mov    r12,rax
  9d4a9d:	e9 8e 09 00 00       	jmp    9d5430 <future_backtest::RunnerCore::run_multi+0xa180>
  9d4aa2:	49 89 c4             	mov    r12,rax
  9d4aa5:	e9 50 0a 00 00       	jmp    9d54fa <future_backtest::RunnerCore::run_multi+0xa24a>
  9d4aaa:	49 89 c4             	mov    r12,rax
  9d4aad:	48 8b b4 24 70 03 00 	mov    rsi,QWORD PTR [rsp+0x370]
  9d4ab4:	00 
  9d4ab5:	48 85 f6             	test   rsi,rsi
  9d4ab8:	74 4b                	je     9d4b05 <future_backtest::RunnerCore::run_multi+0x9855>
  9d4aba:	48 8b bc 24 78 03 00 	mov    rdi,QWORD PTR [rsp+0x378]
  9d4ac1:	00 
  9d4ac2:	ba 01 00 00 00       	mov    edx,0x1
  9d4ac7:	ff 15 53 1f fd 00    	call   QWORD PTR [rip+0xfd1f53]        # 19a6a20 <_DYNAMIC+0x220>
  9d4acd:	eb 36                	jmp    9d4b05 <future_backtest::RunnerCore::run_multi+0x9855>
  9d4acf:	e9 94 06 00 00       	jmp    9d5168 <future_backtest::RunnerCore::run_multi+0x9eb8>
  9d4ad4:	eb 2c                	jmp    9d4b02 <future_backtest::RunnerCore::run_multi+0x9852>
  9d4ad6:	49 89 c4             	mov    r12,rax
  9d4ad9:	48 8b b4 24 a0 03 00 	mov    rsi,QWORD PTR [rsp+0x3a0]
  9d4ae0:	00 
  9d4ae1:	48 85 f6             	test   rsi,rsi
  9d4ae4:	0f 84 fc 09 00 00    	je     9d54e6 <future_backtest::RunnerCore::run_multi+0xa236>
  9d4aea:	48 8b bc 24 a8 03 00 	mov    rdi,QWORD PTR [rsp+0x3a8]
  9d4af1:	00 
  9d4af2:	ba 01 00 00 00       	mov    edx,0x1
  9d4af7:	ff 15 23 1f fd 00    	call   QWORD PTR [rip+0xfd1f23]        # 19a6a20 <_DYNAMIC+0x220>
  9d4afd:	e9 e4 09 00 00       	jmp    9d54e6 <future_backtest::RunnerCore::run_multi+0xa236>
  9d4b02:	49 89 c4             	mov    r12,rax
  9d4b05:	48 8d bc 24 a0 03 00 	lea    rdi,[rsp+0x3a0]
  9d4b0c:	00 
  9d4b0d:	e8 3e 10 fd ff       	call   9a5b50 <core::ptr::drop_in_place<future_backtest::DataStruct::event_slice::EventSlice>>
  9d4b12:	e9 19 09 00 00       	jmp    9d5430 <future_backtest::RunnerCore::run_multi+0xa180>
  9d4b17:	49 89 c4             	mov    r12,rax
  9d4b1a:	e9 11 09 00 00       	jmp    9d5430 <future_backtest::RunnerCore::run_multi+0xa180>
  9d4b1f:	49 89 c4             	mov    r12,rax
  9d4b22:	48 8b b4 24 10 06 00 	mov    rsi,QWORD PTR [rsp+0x610]
  9d4b29:	00 
  9d4b2a:	48 85 f6             	test   rsi,rsi
  9d4b2d:	0f 84 26 01 00 00    	je     9d4c59 <future_backtest::RunnerCore::run_multi+0x99a9>
  9d4b33:	48 8b bc 24 18 06 00 	mov    rdi,QWORD PTR [rsp+0x618]
  9d4b3a:	00 
  9d4b3b:	ba 01 00 00 00       	mov    edx,0x1
  9d4b40:	ff 15 da 1e fd 00    	call   QWORD PTR [rip+0xfd1eda]        # 19a6a20 <_DYNAMIC+0x220>
  9d4b46:	48 8d bc 24 d0 11 00 	lea    rdi,[rsp+0x11d0]
  9d4b4d:	00 
  9d4b4e:	e9 93 0a 00 00       	jmp    9d55e6 <future_backtest::RunnerCore::run_multi+0xa336>
  9d4b53:	49 89 c4             	mov    r12,rax
  9d4b56:	4a 8d 04 7d 00 00 00 	lea    rax,[r15*2+0x0]
  9d4b5d:	00 
  9d4b5e:	48 85 c0             	test   rax,rax
  9d4b61:	75 27                	jne    9d4b8a <future_backtest::RunnerCore::run_multi+0x98da>
  9d4b63:	48 8d 04 6d 00 00 00 	lea    rax,[rbp*2+0x0]
  9d4b6a:	00 
  9d4b6b:	48 85 c0             	test   rax,rax
  9d4b6e:	0f 85 06 01 00 00    	jne    9d4c7a <future_backtest::RunnerCore::run_multi+0x99ca>
  9d4b74:	48 8d 04 5d 00 00 00 	lea    rax,[rbx*2+0x0]
  9d4b7b:	00 
  9d4b7c:	48 85 c0             	test   rax,rax
  9d4b7f:	0f 84 b1 04 00 00    	je     9d5036 <future_backtest::RunnerCore::run_multi+0x9d86>
  9d4b85:	e9 2d 01 00 00       	jmp    9d4cb7 <future_backtest::RunnerCore::run_multi+0x9a07>
  9d4b8a:	ba 01 00 00 00       	mov    edx,0x1
  9d4b8f:	48 8b bc 24 b8 00 00 	mov    rdi,QWORD PTR [rsp+0xb8]
  9d4b96:	00 
  9d4b97:	4c 89 fe             	mov    rsi,r15
  9d4b9a:	ff 15 80 1e fd 00    	call   QWORD PTR [rip+0xfd1e80]        # 19a6a20 <_DYNAMIC+0x220>
  9d4ba0:	48 8d 04 6d 00 00 00 	lea    rax,[rbp*2+0x0]
  9d4ba7:	00 
  9d4ba8:	48 85 c0             	test   rax,rax
  9d4bab:	74 c7                	je     9d4b74 <future_backtest::RunnerCore::run_multi+0x98c4>
  9d4bad:	e9 c8 00 00 00       	jmp    9d4c7a <future_backtest::RunnerCore::run_multi+0x99ca>
  9d4bb2:	eb 00                	jmp    9d4bb4 <future_backtest::RunnerCore::run_multi+0x9904>
  9d4bb4:	49 89 c4             	mov    r12,rax
  9d4bb7:	48 8d bc 24 c0 01 00 	lea    rdi,[rsp+0x1c0]
  9d4bbe:	00 
  9d4bbf:	e8 1c f3 fc ff       	call   9a3ee0 <core::ptr::drop_in_place<future_backtest::ffi::FfiCtx>>
  9d4bc4:	e9 8b 08 00 00       	jmp    9d5454 <future_backtest::RunnerCore::run_multi+0xa1a4>
  9d4bc9:	89 6c 24 20          	mov    DWORD PTR [rsp+0x20],ebp
  9d4bcd:	49 89 c4             	mov    r12,rax
  9d4bd0:	e9 87 09 00 00       	jmp    9d555c <future_backtest::RunnerCore::run_multi+0xa2ac>
  9d4bd5:	eb 00                	jmp    9d4bd7 <future_backtest::RunnerCore::run_multi+0x9927>
  9d4bd7:	49 89 c4             	mov    r12,rax
  9d4bda:	e9 75 08 00 00       	jmp    9d5454 <future_backtest::RunnerCore::run_multi+0xa1a4>
  9d4bdf:	49 89 c4             	mov    r12,rax
  9d4be2:	0f 10 84 24 d0 0e 00 	movups xmm0,XMMWORD PTR [rsp+0xed0]
  9d4be9:	00 
  9d4bea:	0f 11 43 40          	movups XMMWORD PTR [rbx+0x40],xmm0
  9d4bee:	66 0f 10 84 24 90 0e 	movupd xmm0,XMMWORD PTR [rsp+0xe90]
  9d4bf5:	00 00 
  9d4bf7:	f3 0f 6f 8c 24 a0 0e 	movdqu xmm1,XMMWORD PTR [rsp+0xea0]
  9d4bfe:	00 00 
  9d4c00:	f3 0f 6f 94 24 b0 0e 	movdqu xmm2,XMMWORD PTR [rsp+0xeb0]
  9d4c07:	00 00 
  9d4c09:	f3 0f 6f 9c 24 c0 0e 	movdqu xmm3,XMMWORD PTR [rsp+0xec0]
  9d4c10:	00 00 
  9d4c12:	f3 0f 7f 5b 30       	movdqu XMMWORD PTR [rbx+0x30],xmm3
  9d4c17:	f3 0f 7f 53 20       	movdqu XMMWORD PTR [rbx+0x20],xmm2
  9d4c1c:	f3 0f 7f 4b 10       	movdqu XMMWORD PTR [rbx+0x10],xmm1
  9d4c21:	66 0f 11 03          	movupd XMMWORD PTR [rbx],xmm0
  9d4c25:	49 ff 46 10          	inc    QWORD PTR [r14+0x10]
  9d4c29:	e9 14 09 00 00       	jmp    9d5542 <future_backtest::RunnerCore::run_multi+0xa292>
  9d4c2e:	49 89 c4             	mov    r12,rax
  9d4c31:	48 8d bc 24 90 0e 00 	lea    rdi,[rsp+0xe90]
  9d4c38:	00 
  9d4c39:	e8 e2 02 fd ff       	call   9a4f20 <core::ptr::drop_in_place<future_backtest::Logging::logging::BacktestLog>>
  9d4c3e:	e9 ff 08 00 00       	jmp    9d5542 <future_backtest::RunnerCore::run_multi+0xa292>
  9d4c43:	e9 f7 08 00 00       	jmp    9d553f <future_backtest::RunnerCore::run_multi+0xa28f>
  9d4c48:	49 89 c4             	mov    r12,rax
  9d4c4b:	b0 01                	mov    al,0x1
  9d4c4d:	89 44 24 68          	mov    DWORD PTR [rsp+0x68],eax
  9d4c51:	e9 a4 08 00 00       	jmp    9d54fa <future_backtest::RunnerCore::run_multi+0xa24a>
  9d4c56:	49 89 c4             	mov    r12,rax
  9d4c59:	48 8d bc 24 d0 11 00 	lea    rdi,[rsp+0x11d0]
  9d4c60:	00 
  9d4c61:	e9 80 09 00 00       	jmp    9d55e6 <future_backtest::RunnerCore::run_multi+0xa336>
  9d4c66:	49 89 c4             	mov    r12,rax
  9d4c69:	48 8d 04 6d 00 00 00 	lea    rax,[rbp*2+0x0]
  9d4c70:	00 
  9d4c71:	48 85 c0             	test   rax,rax
  9d4c74:	0f 84 fa fe ff ff    	je     9d4b74 <future_backtest::RunnerCore::run_multi+0x98c4>
  9d4c7a:	ba 01 00 00 00       	mov    edx,0x1
  9d4c7f:	48 8b bc 24 a0 00 00 	mov    rdi,QWORD PTR [rsp+0xa0]
  9d4c86:	00 
  9d4c87:	48 89 ee             	mov    rsi,rbp
  9d4c8a:	ff 15 90 1d fd 00    	call   QWORD PTR [rip+0xfd1d90]        # 19a6a20 <_DYNAMIC+0x220>
  9d4c90:	48 8d 04 5d 00 00 00 	lea    rax,[rbx*2+0x0]
  9d4c97:	00 
  9d4c98:	48 85 c0             	test   rax,rax
  9d4c9b:	0f 84 95 03 00 00    	je     9d5036 <future_backtest::RunnerCore::run_multi+0x9d86>
  9d4ca1:	eb 14                	jmp    9d4cb7 <future_backtest::RunnerCore::run_multi+0x9a07>
  9d4ca3:	49 89 c4             	mov    r12,rax
  9d4ca6:	48 8d 04 5d 00 00 00 	lea    rax,[rbx*2+0x0]
  9d4cad:	00 
  9d4cae:	48 85 c0             	test   rax,rax
  9d4cb1:	0f 84 7f 03 00 00    	je     9d5036 <future_backtest::RunnerCore::run_multi+0x9d86>
  9d4cb7:	ba 01 00 00 00       	mov    edx,0x1
  9d4cbc:	48 8b 7c 24 60       	mov    rdi,QWORD PTR [rsp+0x60]
  9d4cc1:	e9 67 03 00 00       	jmp    9d502d <future_backtest::RunnerCore::run_multi+0x9d7d>
  9d4cc6:	49 89 c4             	mov    r12,rax
  9d4cc9:	e9 68 03 00 00       	jmp    9d5036 <future_backtest::RunnerCore::run_multi+0x9d86>
  9d4cce:	e9 95 04 00 00       	jmp    9d5168 <future_backtest::RunnerCore::run_multi+0x9eb8>
  9d4cd3:	eb 0d                	jmp    9d4ce2 <future_backtest::RunnerCore::run_multi+0x9a32>
  9d4cd5:	49 89 c4             	mov    r12,rax
  9d4cd8:	e9 72 08 00 00       	jmp    9d554f <future_backtest::RunnerCore::run_multi+0xa29f>
  9d4cdd:	e9 04 06 00 00       	jmp    9d52e6 <future_backtest::RunnerCore::run_multi+0xa036>
  9d4ce2:	49 89 c4             	mov    r12,rax
  9d4ce5:	48 8d 9c 24 a0 03 00 	lea    rbx,[rsp+0x3a0]
  9d4cec:	00 
  9d4ced:	4c 8d b4 24 d0 11 00 	lea    r14,[rsp+0x11d0]
  9d4cf4:	00 
  9d4cf5:	48 89 df             	mov    rdi,rbx
  9d4cf8:	4c 89 f6             	mov    rsi,r14
  9d4cfb:	e8 a0 62 d4 ff       	call   71afa0 <_ZN5alloc11collections5btree3map25IntoIter$LT$K$C$V$C$A$GT$10dying_next17he5722eb1ea305e80E.llvm.1643563994444475245>
  9d4d00:	48 83 bc 24 a0 03 00 	cmp    QWORD PTR [rsp+0x3a0],0x0
  9d4d07:	00 00 
  9d4d09:	75 ea                	jne    9d4cf5 <future_backtest::RunnerCore::run_multi+0x9a45>
  9d4d0b:	e9 d9 05 00 00       	jmp    9d52e9 <future_backtest::RunnerCore::run_multi+0xa039>
  9d4d10:	ff 15 6a 1e fd 00    	call   QWORD PTR [rip+0xfd1e6a]        # 19a6b80 <_DYNAMIC+0x380>
  9d4d16:	89 6c 24 20          	mov    DWORD PTR [rsp+0x20],ebp
  9d4d1a:	49 89 c4             	mov    r12,rax
  9d4d1d:	e9 13 09 00 00       	jmp    9d5635 <future_backtest::RunnerCore::run_multi+0xa385>
  9d4d22:	49 89 c4             	mov    r12,rax
  9d4d25:	48 8b b4 24 e0 0e 00 	mov    rsi,QWORD PTR [rsp+0xee0]
  9d4d2c:	00 
  9d4d2d:	48 85 f6             	test   rsi,rsi
  9d4d30:	0f 84 89 05 00 00    	je     9d52bf <future_backtest::RunnerCore::run_multi+0xa00f>
  9d4d36:	48 8b bc 24 e8 0e 00 	mov    rdi,QWORD PTR [rsp+0xee8]
  9d4d3d:	00 
  9d4d3e:	e9 fa 03 00 00       	jmp    9d513d <future_backtest::RunnerCore::run_multi+0x9e8d>
  9d4d43:	e9 bb 03 00 00       	jmp    9d5103 <future_backtest::RunnerCore::run_multi+0x9e53>
  9d4d48:	49 89 c4             	mov    r12,rax
  9d4d4b:	48 8b b4 24 60 18 00 	mov    rsi,QWORD PTR [rsp+0x1860]
  9d4d52:	00 
  9d4d53:	48 85 f6             	test   rsi,rsi
  9d4d56:	0f 84 63 05 00 00    	je     9d52bf <future_backtest::RunnerCore::run_multi+0xa00f>
  9d4d5c:	48 8b bc 24 68 18 00 	mov    rdi,QWORD PTR [rsp+0x1868]
  9d4d63:	00 
  9d4d64:	e9 d4 03 00 00       	jmp    9d513d <future_backtest::RunnerCore::run_multi+0x9e8d>
  9d4d69:	e9 95 03 00 00       	jmp    9d5103 <future_backtest::RunnerCore::run_multi+0x9e53>
  9d4d6e:	49 89 c4             	mov    r12,rax
  9d4d71:	49 ff 46 10          	inc    QWORD PTR [r14+0x10]
  9d4d75:	e9 4c 07 00 00       	jmp    9d54c6 <future_backtest::RunnerCore::run_multi+0xa216>
  9d4d7a:	e9 d3 02 00 00       	jmp    9d5052 <future_backtest::RunnerCore::run_multi+0x9da2>
  9d4d7f:	49 89 c4             	mov    r12,rax
  9d4d82:	49 ff cd             	dec    r13
  9d4d85:	74 0e                	je     9d4d95 <future_backtest::RunnerCore::run_multi+0x9ae5>
  9d4d87:	4d 8d 7e 08          	lea    r15,[r14+0x8]
  9d4d8b:	4c 89 f7             	mov    rdi,r14
  9d4d8e:	ff d5                	call   rbp
  9d4d90:	4d 89 fe             	mov    r14,r15
  9d4d93:	eb ed                	jmp    9d4d82 <future_backtest::RunnerCore::run_multi+0x9ad2>
  9d4d95:	48 8b b4 24 e8 02 00 	mov    rsi,QWORD PTR [rsp+0x2e8]
  9d4d9c:	00 
  9d4d9d:	48 85 f6             	test   rsi,rsi
  9d4da0:	0f 84 9c 07 00 00    	je     9d5542 <future_backtest::RunnerCore::run_multi+0xa292>
  9d4da6:	48 c1 e6 03          	shl    rsi,0x3
  9d4daa:	ba 08 00 00 00       	mov    edx,0x8
  9d4daf:	48 89 df             	mov    rdi,rbx
  9d4db2:	ff 15 68 1c fd 00    	call   QWORD PTR [rip+0xfd1c68]        # 19a6a20 <_DYNAMIC+0x220>
  9d4db8:	e9 85 07 00 00       	jmp    9d5542 <future_backtest::RunnerCore::run_multi+0xa292>
  9d4dbd:	ff 15 bd 1d fd 00    	call   QWORD PTR [rip+0xfd1dbd]        # 19a6b80 <_DYNAMIC+0x380>
  9d4dc3:	49 89 c4             	mov    r12,rax
  9d4dc6:	e9 20 08 00 00       	jmp    9d55eb <future_backtest::RunnerCore::run_multi+0xa33b>
  9d4dcb:	49 89 c4             	mov    r12,rax
  9d4dce:	e9 c5 07 00 00       	jmp    9d5598 <future_backtest::RunnerCore::run_multi+0xa2e8>
  9d4dd3:	49 89 c4             	mov    r12,rax
  9d4dd6:	be 18 00 00 00       	mov    esi,0x18
  9d4ddb:	ba 08 00 00 00       	mov    edx,0x8
  9d4de0:	48 8b bc 24 80 00 00 	mov    rdi,QWORD PTR [rsp+0x80]
  9d4de7:	00 
  9d4de8:	ff 15 32 1c fd 00    	call   QWORD PTR [rip+0xfd1c32]        # 19a6a20 <_DYNAMIC+0x220>
  9d4dee:	e9 f8 07 00 00       	jmp    9d55eb <future_backtest::RunnerCore::run_multi+0xa33b>
  9d4df3:	49 89 c4             	mov    r12,rax
  9d4df6:	e9 cb 06 00 00       	jmp    9d54c6 <future_backtest::RunnerCore::run_multi+0xa216>
  9d4dfb:	49 89 c4             	mov    r12,rax
  9d4dfe:	48 8b b4 24 40 0e 00 	mov    rsi,QWORD PTR [rsp+0xe40]
  9d4e05:	00 
  9d4e06:	48 85 f6             	test   rsi,rsi
  9d4e09:	74 48                	je     9d4e53 <future_backtest::RunnerCore::run_multi+0x9ba3>
  9d4e0b:	48 8b bc 24 48 0e 00 	mov    rdi,QWORD PTR [rsp+0xe48]
  9d4e12:	00 
  9d4e13:	ba 01 00 00 00       	mov    edx,0x1
  9d4e18:	ff 15 02 1c fd 00    	call   QWORD PTR [rip+0xfd1c02]        # 19a6a20 <_DYNAMIC+0x220>
  9d4e1e:	eb 33                	jmp    9d4e53 <future_backtest::RunnerCore::run_multi+0x9ba3>
  9d4e20:	49 89 c4             	mov    r12,rax
  9d4e23:	e9 63 07 00 00       	jmp    9d558b <future_backtest::RunnerCore::run_multi+0xa2db>
  9d4e28:	49 89 c4             	mov    r12,rax
  9d4e2b:	e9 94 07 00 00       	jmp    9d55c4 <future_backtest::RunnerCore::run_multi+0xa314>
  9d4e30:	49 89 c4             	mov    r12,rax
  9d4e33:	e9 b3 07 00 00       	jmp    9d55eb <future_backtest::RunnerCore::run_multi+0xa33b>
  9d4e38:	89 6c 24 20          	mov    DWORD PTR [rsp+0x20],ebp
  9d4e3c:	49 89 c4             	mov    r12,rax
  9d4e3f:	e9 25 07 00 00       	jmp    9d5569 <future_backtest::RunnerCore::run_multi+0xa2b9>
  9d4e44:	89 6c 24 20          	mov    DWORD PTR [rsp+0x20],ebp
  9d4e48:	49 89 c4             	mov    r12,rax
  9d4e4b:	e9 ae 07 00 00       	jmp    9d55fe <future_backtest::RunnerCore::run_multi+0xa34e>
  9d4e50:	49 89 c4             	mov    r12,rax
  9d4e53:	48 8d bc 24 a8 19 00 	lea    rdi,[rsp+0x19a8]
  9d4e5a:	00 
  9d4e5b:	e8 a0 2a fd ff       	call   9a7900 <core::ptr::drop_in_place<future_backtest::MultiStrategy::event_producer::EventProducerFilter>>
  9d4e60:	e9 86 07 00 00       	jmp    9d55eb <future_backtest::RunnerCore::run_multi+0xa33b>
  9d4e65:	49 89 c4             	mov    r12,rax
  9d4e68:	e9 4a 07 00 00       	jmp    9d55b7 <future_backtest::RunnerCore::run_multi+0xa307>
  9d4e6d:	49 89 c4             	mov    r12,rax
  9d4e70:	48 8b b4 24 d0 11 00 	mov    rsi,QWORD PTR [rsp+0x11d0]
  9d4e77:	00 
  9d4e78:	48 85 f6             	test   rsi,rsi
  9d4e7b:	0f 84 50 07 00 00    	je     9d55d1 <future_backtest::RunnerCore::run_multi+0xa321>
  9d4e81:	48 8b bc 24 d8 11 00 	mov    rdi,QWORD PTR [rsp+0x11d8]
  9d4e88:	00 
  9d4e89:	ba 01 00 00 00       	mov    edx,0x1
  9d4e8e:	ff 15 8c 1b fd 00    	call   QWORD PTR [rip+0xfd1b8c]        # 19a6a20 <_DYNAMIC+0x220>
  9d4e94:	e9 38 07 00 00       	jmp    9d55d1 <future_backtest::RunnerCore::run_multi+0xa321>
  9d4e99:	49 89 c4             	mov    r12,rax
  9d4e9c:	e9 30 07 00 00       	jmp    9d55d1 <future_backtest::RunnerCore::run_multi+0xa321>
  9d4ea1:	49 89 c4             	mov    r12,rax
  9d4ea4:	49 c7 06 00 00 00 00 	mov    QWORD PTR [r14],0x0
  9d4eab:	49 c7 46 08 08 00 00 	mov    QWORD PTR [r14+0x8],0x8
  9d4eb2:	00 
  9d4eb3:	66 0f 57 c0          	xorpd  xmm0,xmm0
  9d4eb7:	66 41 0f 11 46 10    	movupd XMMWORD PTR [r14+0x10],xmm0
  9d4ebd:	49 c7 46 20 08 00 00 	mov    QWORD PTR [r14+0x20],0x8
  9d4ec4:	00 
  9d4ec5:	66 41 0f 11 46 28    	movupd XMMWORD PTR [r14+0x28],xmm0
  9d4ecb:	49 c7 46 38 08 00 00 	mov    QWORD PTR [r14+0x38],0x8
  9d4ed2:	00 
  9d4ed3:	66 41 0f 11 46 40    	movupd XMMWORD PTR [r14+0x40],xmm0
  9d4ed9:	49 c7 46 50 08 00 00 	mov    QWORD PTR [r14+0x50],0x8
  9d4ee0:	00 
  9d4ee1:	49 c7 46 58 00 00 00 	mov    QWORD PTR [r14+0x58],0x0
  9d4ee8:	00 
  9d4ee9:	48 b8 00 00 00 00 00 	movabs rax,0x8000000000000000
  9d4ef0:	00 00 80 
  9d4ef3:	49 89 46 60          	mov    QWORD PTR [r14+0x60],rax
  9d4ef7:	49 89 46 78          	mov    QWORD PTR [r14+0x78],rax
  9d4efb:	49 89 86 90 00 00 00 	mov    QWORD PTR [r14+0x90],rax
  9d4f02:	4d 89 be a8 00 00 00 	mov    QWORD PTR [r14+0xa8],r15
  9d4f09:	66 41 0f 11 86 b0 00 	movupd XMMWORD PTR [r14+0xb0],xmm0
  9d4f10:	00 00 
  9d4f12:	e9 2b 06 00 00       	jmp    9d5542 <future_backtest::RunnerCore::run_multi+0xa292>
  9d4f17:	49 89 c4             	mov    r12,rax
  9d4f1a:	48 8d bc 24 c0 01 00 	lea    rdi,[rsp+0x1c0]
  9d4f21:	00 
  9d4f22:	e8 a9 cc fc ff       	call   9a1bd0 <core::ptr::drop_in_place<alloc::vec::Vec<future_backtest::BacktestResult::backtest_result::TradeOrder>>>
  9d4f27:	48 8d bc 24 d8 01 00 	lea    rdi,[rsp+0x1d8]
  9d4f2e:	00 
  9d4f2f:	e8 2c cf fc ff       	call   9a1e60 <core::ptr::drop_in_place<alloc::vec::Vec<future_backtest::BacktestResult::backtest_result::BacktestResultSlice>>>
  9d4f34:	48 8d bc 24 f0 01 00 	lea    rdi,[rsp+0x1f0]
  9d4f3b:	00 
  9d4f3c:	e8 af 32 fd ff       	call   9a81f0 <core::ptr::drop_in_place<alloc::vec::Vec<future_backtest::TradePairs::trade_pairs::TradePair>>>
  9d4f41:	48 8d bc 24 08 02 00 	lea    rdi,[rsp+0x208]
  9d4f48:	00 
  9d4f49:	e8 22 d3 fc ff       	call   9a2270 <core::ptr::drop_in_place<alloc::vec::Vec<future_backtest::BacktestResult::backtest_result::BacktestShareStatusSlice>>>
  9d4f4e:	48 8b b4 24 20 02 00 	mov    rsi,QWORD PTR [rsp+0x220]
  9d4f55:	00 
  9d4f56:	48 b8 00 00 00 00 00 	movabs rax,0x8000000000000000
  9d4f5d:	00 00 80 
  9d4f60:	48 39 c6             	cmp    rsi,rax
  9d4f63:	74 18                	je     9d4f7d <future_backtest::RunnerCore::run_multi+0x9ccd>
  9d4f65:	48 85 f6             	test   rsi,rsi
  9d4f68:	74 13                	je     9d4f7d <future_backtest::RunnerCore::run_multi+0x9ccd>
  9d4f6a:	48 8b bc 24 28 02 00 	mov    rdi,QWORD PTR [rsp+0x228]
  9d4f71:	00 
  9d4f72:	ba 01 00 00 00       	mov    edx,0x1
  9d4f77:	ff 15 a3 1a fd 00    	call   QWORD PTR [rip+0xfd1aa3]        # 19a6a20 <_DYNAMIC+0x220>
  9d4f7d:	48 8b b4 24 38 02 00 	mov    rsi,QWORD PTR [rsp+0x238]
  9d4f84:	00 
  9d4f85:	48 b8 00 00 00 00 00 	movabs rax,0x8000000000000000
  9d4f8c:	00 00 80 
  9d4f8f:	48 39 c6             	cmp    rsi,rax
  9d4f92:	74 18                	je     9d4fac <future_backtest::RunnerCore::run_multi+0x9cfc>
  9d4f94:	48 85 f6             	test   rsi,rsi
  9d4f97:	74 13                	je     9d4fac <future_backtest::RunnerCore::run_multi+0x9cfc>
  9d4f99:	48 8b bc 24 40 02 00 	mov    rdi,QWORD PTR [rsp+0x240]
  9d4fa0:	00 
  9d4fa1:	ba 01 00 00 00       	mov    edx,0x1
  9d4fa6:	ff 15 74 1a fd 00    	call   QWORD PTR [rip+0xfd1a74]        # 19a6a20 <_DYNAMIC+0x220>
  9d4fac:	48 8b b4 24 50 02 00 	mov    rsi,QWORD PTR [rsp+0x250]
  9d4fb3:	00 
  9d4fb4:	48 b8 00 00 00 00 00 	movabs rax,0x8000000000000000
  9d4fbb:	00 00 80 
  9d4fbe:	48 39 c6             	cmp    rsi,rax
  9d4fc1:	74 73                	je     9d5036 <future_backtest::RunnerCore::run_multi+0x9d86>
  9d4fc3:	48 85 f6             	test   rsi,rsi
  9d4fc6:	74 6e                	je     9d5036 <future_backtest::RunnerCore::run_multi+0x9d86>
  9d4fc8:	48 8b bc 24 58 02 00 	mov    rdi,QWORD PTR [rsp+0x258]
  9d4fcf:	00 
  9d4fd0:	ba 01 00 00 00       	mov    edx,0x1
  9d4fd5:	eb 59                	jmp    9d5030 <future_backtest::RunnerCore::run_multi+0x9d80>
  9d4fd7:	49 89 c4             	mov    r12,rax
  9d4fda:	eb 0e                	jmp    9d4fea <future_backtest::RunnerCore::run_multi+0x9d3a>
  9d4fdc:	49 89 c4             	mov    r12,rax
  9d4fdf:	4c 89 f7             	mov    rdi,r14
  9d4fe2:	4c 89 ee             	mov    rsi,r13
  9d4fe5:	e8 56 d0 0b 00       	call   a92040 <_ZN4core3ptr89drop_in_place$LT$$u5b$future_backtest..MetaControl..router..MetaDecisionSnapshot$u5d$$GT$17hf1a8d774989df26aE.llvm.12364612859142937606>
  9d4fea:	48 85 db             	test   rbx,rbx
  9d4fed:	0f 84 8f 06 00 00    	je     9d5682 <future_backtest::RunnerCore::run_multi+0xa3d2>
  9d4ff3:	48 c1 e3 06          	shl    rbx,0x6
  9d4ff7:	ba 08 00 00 00       	mov    edx,0x8
  9d4ffc:	4c 89 f7             	mov    rdi,r14
  9d4fff:	48 89 de             	mov    rsi,rbx
  9d5002:	ff 15 18 1a fd 00    	call   QWORD PTR [rip+0xfd1a18]        # 19a6a20 <_DYNAMIC+0x220>
  9d5008:	e9 75 06 00 00       	jmp    9d5682 <future_backtest::RunnerCore::run_multi+0xa3d2>
  9d500d:	ff 15 6d 1b fd 00    	call   QWORD PTR [rip+0xfd1b6d]        # 19a6b80 <_DYNAMIC+0x380>
  9d5013:	e9 a4 02 00 00       	jmp    9d52bc <future_backtest::RunnerCore::run_multi+0xa00c>
  9d5018:	e9 c9 02 00 00       	jmp    9d52e6 <future_backtest::RunnerCore::run_multi+0xa036>
  9d501d:	49 89 c4             	mov    r12,rax
  9d5020:	48 85 db             	test   rbx,rbx
  9d5023:	74 11                	je     9d5036 <future_backtest::RunnerCore::run_multi+0x9d86>
  9d5025:	ba 01 00 00 00       	mov    edx,0x1
  9d502a:	48 89 ef             	mov    rdi,rbp
  9d502d:	48 89 de             	mov    rsi,rbx
  9d5030:	ff 15 ea 19 fd 00    	call   QWORD PTR [rip+0xfd19ea]        # 19a6a20 <_DYNAMIC+0x220>
  9d5036:	48 8d bc 24 00 05 00 	lea    rdi,[rsp+0x500]
  9d503d:	00 
  9d503e:	e8 ed ca fc ff       	call   9a1b30 <core::ptr::drop_in_place<alloc::vec::Vec<(alloc::string::String,alloc::vec::Vec<usize>)>>>
  9d5043:	e9 e8 03 00 00       	jmp    9d5430 <future_backtest::RunnerCore::run_multi+0xa180>
  9d5048:	e9 f7 02 00 00       	jmp    9d5344 <future_backtest::RunnerCore::run_multi+0xa094>
  9d504d:	e9 13 03 00 00       	jmp    9d5365 <future_backtest::RunnerCore::run_multi+0xa0b5>
  9d5052:	49 89 c4             	mov    r12,rax
  9d5055:	e9 5f 04 00 00       	jmp    9d54b9 <future_backtest::RunnerCore::run_multi+0xa209>
  9d505a:	49 89 c4             	mov    r12,rax
  9d505d:	48 8b b4 24 80 1b 00 	mov    rsi,QWORD PTR [rsp+0x1b80]
  9d5064:	00 
  9d5065:	48 85 f6             	test   rsi,rsi
  9d5068:	0f 84 4b 04 00 00    	je     9d54b9 <future_backtest::RunnerCore::run_multi+0xa209>
  9d506e:	48 8b bc 24 88 1b 00 	mov    rdi,QWORD PTR [rsp+0x1b88]
  9d5075:	00 
  9d5076:	ba 01 00 00 00       	mov    edx,0x1
  9d507b:	ff 15 9f 19 fd 00    	call   QWORD PTR [rip+0xfd199f]        # 19a6a20 <_DYNAMIC+0x220>
  9d5081:	e9 33 04 00 00       	jmp    9d54b9 <future_backtest::RunnerCore::run_multi+0xa209>
  9d5086:	49 89 c4             	mov    r12,rax
  9d5089:	48 8b b4 24 80 1b 00 	mov    rsi,QWORD PTR [rsp+0x1b80]
  9d5090:	00 
  9d5091:	48 85 f6             	test   rsi,rsi
  9d5094:	0f 84 4f 02 00 00    	je     9d52e9 <future_backtest::RunnerCore::run_multi+0xa039>
  9d509a:	48 8b bc 24 88 1b 00 	mov    rdi,QWORD PTR [rsp+0x1b88]
  9d50a1:	00 
  9d50a2:	ba 01 00 00 00       	mov    edx,0x1
  9d50a7:	ff 15 73 19 fd 00    	call   QWORD PTR [rip+0xfd1973]        # 19a6a20 <_DYNAMIC+0x220>
  9d50ad:	e9 37 02 00 00       	jmp    9d52e9 <future_backtest::RunnerCore::run_multi+0xa039>
  9d50b2:	89 6c 24 20          	mov    DWORD PTR [rsp+0x20],ebp
  9d50b6:	49 89 c4             	mov    r12,rax
  9d50b9:	49 ff cd             	dec    r13
  9d50bc:	74 14                	je     9d50d2 <future_backtest::RunnerCore::run_multi+0x9e22>
  9d50be:	4d 8d be 28 01 00 00 	lea    r15,[r14+0x128]
  9d50c5:	4c 89 f7             	mov    rdi,r14
  9d50c8:	e8 63 61 f9 ff       	call   96b230 <_ZN4core3ptr73drop_in_place$LT$future_backtest..DataStruct..event_slice..EventSlice$GT$17h4393e6a5cd212903E.llvm.1325298290625399205>
  9d50cd:	4d 89 fe             	mov    r14,r15
  9d50d0:	eb e7                	jmp    9d50b9 <future_backtest::RunnerCore::run_multi+0x9e09>
  9d50d2:	48 8b 84 24 a8 01 00 	mov    rax,QWORD PTR [rsp+0x1a8]
  9d50d9:	00 
  9d50da:	48 85 c0             	test   rax,rax
  9d50dd:	0f 84 86 04 00 00    	je     9d5569 <future_backtest::RunnerCore::run_multi+0xa2b9>
  9d50e3:	48 69 f0 28 01 00 00 	imul   rsi,rax,0x128
  9d50ea:	ba 08 00 00 00       	mov    edx,0x8
  9d50ef:	48 89 df             	mov    rdi,rbx
  9d50f2:	ff 15 28 19 fd 00    	call   QWORD PTR [rip+0xfd1928]        # 19a6a20 <_DYNAMIC+0x220>
  9d50f8:	e9 6c 04 00 00       	jmp    9d5569 <future_backtest::RunnerCore::run_multi+0xa2b9>
  9d50fd:	ff 15 7d 1a fd 00    	call   QWORD PTR [rip+0xfd1a7d]        # 19a6b80 <_DYNAMIC+0x380>
  9d5103:	49 89 c4             	mov    r12,rax
  9d5106:	48 8b b4 24 10 06 00 	mov    rsi,QWORD PTR [rsp+0x610]
  9d510d:	00 
  9d510e:	48 85 f6             	test   rsi,rsi
  9d5111:	0f 84 a8 01 00 00    	je     9d52bf <future_backtest::RunnerCore::run_multi+0xa00f>
  9d5117:	48 8b bc 24 18 06 00 	mov    rdi,QWORD PTR [rsp+0x618]
  9d511e:	00 
  9d511f:	eb 1c                	jmp    9d513d <future_backtest::RunnerCore::run_multi+0x9e8d>
  9d5121:	49 89 c4             	mov    r12,rax
  9d5124:	48 8b b4 24 c0 01 00 	mov    rsi,QWORD PTR [rsp+0x1c0]
  9d512b:	00 
  9d512c:	48 85 f6             	test   rsi,rsi
  9d512f:	0f 84 8a 01 00 00    	je     9d52bf <future_backtest::RunnerCore::run_multi+0xa00f>
  9d5135:	48 8b bc 24 c8 01 00 	mov    rdi,QWORD PTR [rsp+0x1c8]
  9d513c:	00 
  9d513d:	ba 01 00 00 00       	mov    edx,0x1
  9d5142:	ff 15 d8 18 fd 00    	call   QWORD PTR [rip+0xfd18d8]        # 19a6a20 <_DYNAMIC+0x220>
  9d5148:	e9 72 01 00 00       	jmp    9d52bf <future_backtest::RunnerCore::run_multi+0xa00f>
  9d514d:	49 89 c4             	mov    r12,rax
  9d5150:	48 8d bc 24 d0 2a 00 	lea    rdi,[rsp+0x2ad0]
  9d5157:	00 
  9d5158:	e8 b3 f7 fc ff       	call   9a4910 <core::ptr::drop_in_place<future_backtest::Strategy::strategy::Strategy>>
  9d515d:	e9 4f 01 00 00       	jmp    9d52b1 <future_backtest::RunnerCore::run_multi+0xa001>
  9d5162:	ff 15 18 1a fd 00    	call   QWORD PTR [rip+0xfd1a18]        # 19a6b80 <_DYNAMIC+0x380>
  9d5168:	49 89 c4             	mov    r12,rax
  9d516b:	e9 76 03 00 00       	jmp    9d54e6 <future_backtest::RunnerCore::run_multi+0xa236>
  9d5170:	89 6c 24 20          	mov    DWORD PTR [rsp+0x20],ebp
  9d5174:	49 89 c4             	mov    r12,rax
  9d5177:	49 ff ce             	dec    r14
  9d517a:	74 14                	je     9d5190 <future_backtest::RunnerCore::run_multi+0x9ee0>
  9d517c:	4c 8d bb 28 15 00 00 	lea    r15,[rbx+0x1528]
  9d5183:	48 89 df             	mov    rdi,rbx
  9d5186:	e8 35 4c f9 ff       	call   969dc0 <_ZN4core3ptr66drop_in_place$LT$future_backtest..Strategy..strategy..Strategy$GT$17hb325f64ad9ac2d20E.llvm.1325298290625399205>
  9d518b:	4c 89 fb             	mov    rbx,r15
  9d518e:	eb e7                	jmp    9d5177 <future_backtest::RunnerCore::run_multi+0x9ec7>
  9d5190:	48 8b 44 24 38       	mov    rax,QWORD PTR [rsp+0x38]
  9d5195:	48 85 c0             	test   rax,rax
  9d5198:	0f 84 6a 04 00 00    	je     9d5608 <future_backtest::RunnerCore::run_multi+0xa358>
  9d519e:	48 8b 7c 24 40       	mov    rdi,QWORD PTR [rsp+0x40]
  9d51a3:	48 69 f0 28 15 00 00 	imul   rsi,rax,0x1528
  9d51aa:	ba 08 00 00 00       	mov    edx,0x8
  9d51af:	ff 15 6b 18 fd 00    	call   QWORD PTR [rip+0xfd186b]        # 19a6a20 <_DYNAMIC+0x220>
  9d51b5:	48 8b 84 24 88 00 00 	mov    rax,QWORD PTR [rsp+0x88]
  9d51bc:	00 
  9d51bd:	48 ff 08             	dec    QWORD PTR [rax]
  9d51c0:	0f 84 61 04 00 00    	je     9d5627 <future_backtest::RunnerCore::run_multi+0xa377>
  9d51c6:	e9 6a 04 00 00       	jmp    9d5635 <future_backtest::RunnerCore::run_multi+0xa385>
  9d51cb:	ff 15 af 19 fd 00    	call   QWORD PTR [rip+0xfd19af]        # 19a6b80 <_DYNAMIC+0x380>
  9d51d1:	e9 d3 02 00 00       	jmp    9d54a9 <future_backtest::RunnerCore::run_multi+0xa1f9>
  9d51d6:	49 89 c4             	mov    r12,rax
  9d51d9:	e9 d3 00 00 00       	jmp    9d52b1 <future_backtest::RunnerCore::run_multi+0xa001>
  9d51de:	49 89 c4             	mov    r12,rax
  9d51e1:	48 8b b4 24 d0 11 00 	mov    rsi,QWORD PTR [rsp+0x11d0]
  9d51e8:	00 
  9d51e9:	b0 01                	mov    al,0x1
  9d51eb:	89 44 24 20          	mov    DWORD PTR [rsp+0x20],eax
  9d51ef:	48 85 f6             	test   rsi,rsi
  9d51f2:	0f 84 06 04 00 00    	je     9d55fe <future_backtest::RunnerCore::run_multi+0xa34e>
  9d51f8:	48 8b bc 24 d8 11 00 	mov    rdi,QWORD PTR [rsp+0x11d8]
  9d51ff:	00 
  9d5200:	ba 01 00 00 00       	mov    edx,0x1
  9d5205:	ff 15 15 18 fd 00    	call   QWORD PTR [rip+0xfd1815]        # 19a6a20 <_DYNAMIC+0x220>
  9d520b:	e9 ee 03 00 00       	jmp    9d55fe <future_backtest::RunnerCore::run_multi+0xa34e>
  9d5210:	49 89 c4             	mov    r12,rax
  9d5213:	48 8b b4 24 80 1b 00 	mov    rsi,QWORD PTR [rsp+0x1b80]
  9d521a:	00 
  9d521b:	48 85 f6             	test   rsi,rsi
  9d521e:	74 78                	je     9d5298 <future_backtest::RunnerCore::run_multi+0x9fe8>
  9d5220:	48 8b bc 24 88 1b 00 	mov    rdi,QWORD PTR [rsp+0x1b88]
  9d5227:	00 
  9d5228:	ba 01 00 00 00       	mov    edx,0x1
  9d522d:	ff 15 ed 17 fd 00    	call   QWORD PTR [rip+0xfd17ed]        # 19a6a20 <_DYNAMIC+0x220>
  9d5233:	eb 63                	jmp    9d5298 <future_backtest::RunnerCore::run_multi+0x9fe8>
  9d5235:	49 89 c4             	mov    r12,rax
  9d5238:	48 8b 84 24 88 00 00 	mov    rax,QWORD PTR [rsp+0x88]
  9d523f:	00 
  9d5240:	48 ff 40 10          	inc    QWORD PTR [rax+0x10]
  9d5244:	eb 6b                	jmp    9d52b1 <future_backtest::RunnerCore::run_multi+0xa001>
  9d5246:	e9 9b 00 00 00       	jmp    9d52e6 <future_backtest::RunnerCore::run_multi+0xa036>
  9d524b:	49 89 c4             	mov    r12,rax
  9d524e:	49 ff 4d 00          	dec    QWORD PTR [r13+0x0]
  9d5252:	75 0e                	jne    9d5262 <future_backtest::RunnerCore::run_multi+0x9fb2>
  9d5254:	48 8d bc 24 d0 11 00 	lea    rdi,[rsp+0x11d0]
  9d525b:	00 
  9d525c:	ff 15 86 25 fd 00    	call   QWORD PTR [rip+0xfd2586]        # 19a77e8 <_DYNAMIC+0xfe8>
  9d5262:	48 8b 44 24 18       	mov    rax,QWORD PTR [rsp+0x18]
  9d5267:	48 ff 08             	dec    QWORD PTR [rax]
  9d526a:	b0 01                	mov    al,0x1
  9d526c:	89 44 24 20          	mov    DWORD PTR [rsp+0x20],eax
  9d5270:	0f 85 88 03 00 00    	jne    9d55fe <future_backtest::RunnerCore::run_multi+0xa34e>
  9d5276:	48 8d bc 24 80 1b 00 	lea    rdi,[rsp+0x1b80]
  9d527d:	00 
  9d527e:	ff 15 6c 25 fd 00    	call   QWORD PTR [rip+0xfd256c]        # 19a77f0 <_DYNAMIC+0xff0>
  9d5284:	e9 75 03 00 00       	jmp    9d55fe <future_backtest::RunnerCore::run_multi+0xa34e>
  9d5289:	49 89 c4             	mov    r12,rax
  9d528c:	eb 23                	jmp    9d52b1 <future_backtest::RunnerCore::run_multi+0xa001>
  9d528e:	eb 56                	jmp    9d52e6 <future_backtest::RunnerCore::run_multi+0xa036>
  9d5290:	49 89 c4             	mov    r12,rax
  9d5293:	eb 0f                	jmp    9d52a4 <future_backtest::RunnerCore::run_multi+0x9ff4>
  9d5295:	49 89 c4             	mov    r12,rax
  9d5298:	48 8b 84 24 88 00 00 	mov    rax,QWORD PTR [rsp+0x88]
  9d529f:	00 
  9d52a0:	48 ff 40 10          	inc    QWORD PTR [rax+0x10]
  9d52a4:	48 8d bc 24 e0 0e 00 	lea    rdi,[rsp+0xee0]
  9d52ab:	00 
  9d52ac:	e8 9f 09 fd ff       	call   9a5c50 <core::ptr::drop_in_place<(alloc::string::String,alloc::string::String)>>
  9d52b1:	b0 01                	mov    al,0x1
  9d52b3:	89 44 24 20          	mov    DWORD PTR [rsp+0x20],eax
  9d52b7:	e9 42 03 00 00       	jmp    9d55fe <future_backtest::RunnerCore::run_multi+0xa34e>
  9d52bc:	49 89 c4             	mov    r12,rax
  9d52bf:	48 8d bc 24 a0 03 00 	lea    rdi,[rsp+0x3a0]
  9d52c6:	00 
  9d52c7:	e8 94 ef fc ff       	call   9a4260 <_ZN4core3ptr65drop_in_place$LT$alloc..vec..Vec$LT$alloc..string..String$GT$$GT$17hd2a54bddd809dd19E.llvm.5215769359700358943>
  9d52cc:	48 8d bc 24 b0 10 00 	lea    rdi,[rsp+0x10b0]
  9d52d3:	00 
  9d52d4:	e8 87 ef fc ff       	call   9a4260 <_ZN4core3ptr65drop_in_place$LT$alloc..vec..Vec$LT$alloc..string..String$GT$$GT$17hd2a54bddd809dd19E.llvm.5215769359700358943>
  9d52d9:	48 8d bc 24 00 05 00 	lea    rdi,[rsp+0x500]
  9d52e0:	00 
  9d52e1:	e9 00 03 00 00       	jmp    9d55e6 <future_backtest::RunnerCore::run_multi+0xa336>
  9d52e6:	49 89 c4             	mov    r12,rax
  9d52e9:	48 8d bc 24 e0 0e 00 	lea    rdi,[rsp+0xee0]
  9d52f0:	00 
  9d52f1:	e8 aa 5f 07 00       	call   a4b2a0 <<hashbrown::raw::RawTable<T,A> as core::ops::drop::Drop>::drop>
  9d52f6:	48 8d bc 24 60 18 00 	lea    rdi,[rsp+0x1860]
  9d52fd:	00 
  9d52fe:	e8 bd 72 07 00       	call   a4c5c0 <<hashbrown::raw::RawTable<T,A> as core::ops::drop::Drop>::drop>
  9d5303:	48 8d bc 24 10 06 00 	lea    rdi,[rsp+0x610]
  9d530a:	00 
  9d530b:	e8 f0 04 fd ff       	call   9a5800 <core::ptr::drop_in_place<future_backtest::MetaControl::config::MetaManifest>>
  9d5310:	c7 84 24 c8 00 00 00 	mov    DWORD PTR [rsp+0xc8],0x0
  9d5317:	00 00 00 00 
  9d531b:	e9 62 03 00 00       	jmp    9d5682 <future_backtest::RunnerCore::run_multi+0xa3d2>
  9d5320:	49 89 c4             	mov    r12,rax
  9d5323:	48 8d bc 24 c8 22 00 	lea    rdi,[rsp+0x22c8]
  9d532a:	00 
  9d532b:	e8 d0 fc fc ff       	call   9a5000 <core::ptr::drop_in_place<future_backtest::Config::config::StrategyConfig>>
  9d5330:	eb 5d                	jmp    9d538f <future_backtest::RunnerCore::run_multi+0xa0df>
  9d5332:	ff 15 48 18 fd 00    	call   QWORD PTR [rip+0xfd1848]        # 19a6b80 <_DYNAMIC+0x380>
  9d5338:	89 6c 24 20          	mov    DWORD PTR [rsp+0x20],ebp
  9d533c:	49 89 c4             	mov    r12,rax
  9d533f:	e9 09 03 00 00       	jmp    9d564d <future_backtest::RunnerCore::run_multi+0xa39d>
  9d5344:	49 89 c4             	mov    r12,rax
  9d5347:	48 8b 84 24 f0 0e 00 	mov    rax,QWORD PTR [rsp+0xef0]
  9d534e:	00 
  9d534f:	48 89 43 10          	mov    QWORD PTR [rbx+0x10],rax
  9d5353:	f3 0f 6f 84 24 e0 0e 	movdqu xmm0,XMMWORD PTR [rsp+0xee0]
  9d535a:	00 00 
  9d535c:	f3 0f 7f 03          	movdqu XMMWORD PTR [rbx],xmm0
  9d5360:	e9 47 01 00 00       	jmp    9d54ac <future_backtest::RunnerCore::run_multi+0xa1fc>
  9d5365:	49 89 c4             	mov    r12,rax
  9d5368:	48 89 ab f0 14 00 00 	mov    QWORD PTR [rbx+0x14f0],rbp
  9d536f:	48 8b 44 24 70       	mov    rax,QWORD PTR [rsp+0x70]
  9d5374:	48 89 83 f8 14 00 00 	mov    QWORD PTR [rbx+0x14f8],rax
  9d537b:	48 8b 44 24 20       	mov    rax,QWORD PTR [rsp+0x20]
  9d5380:	48 89 83 00 15 00 00 	mov    QWORD PTR [rbx+0x1500],rax
  9d5387:	e9 20 01 00 00       	jmp    9d54ac <future_backtest::RunnerCore::run_multi+0xa1fc>
  9d538c:	49 89 c4             	mov    r12,rax
  9d538f:	b0 01                	mov    al,0x1
  9d5391:	89 84 24 c8 00 00 00 	mov    DWORD PTR [rsp+0xc8],eax
  9d5398:	e9 e5 02 00 00       	jmp    9d5682 <future_backtest::RunnerCore::run_multi+0xa3d2>
  9d539d:	49 89 c4             	mov    r12,rax
  9d53a0:	e9 46 02 00 00       	jmp    9d55eb <future_backtest::RunnerCore::run_multi+0xa33b>
  9d53a5:	49 89 c4             	mov    r12,rax
  9d53a8:	0f 1f 84 00 00 00 00 	nop    DWORD PTR [rax+rax*1+0x0]
  9d53af:	00 
  9d53b0:	49 ff ce             	dec    r14
  9d53b3:	74 14                	je     9d53c9 <future_backtest::RunnerCore::run_multi+0xa119>
  9d53b5:	4c 8d bb 08 08 00 00 	lea    r15,[rbx+0x808]
  9d53bc:	48 89 df             	mov    rdi,rbx
  9d53bf:	e8 1c 50 f9 ff       	call   96a3e0 <_ZN4core3ptr68drop_in_place$LT$future_backtest..Config..config..StrategyConfig$GT$17h915a237d4f00a607E.llvm.1325298290625399205>
  9d53c4:	4c 89 fb             	mov    rbx,r15
  9d53c7:	eb e7                	jmp    9d53b0 <future_backtest::RunnerCore::run_multi+0xa100>
  9d53c9:	48 8b 84 24 d0 00 00 	mov    rax,QWORD PTR [rsp+0xd0]
  9d53d0:	00 
  9d53d1:	48 85 c0             	test   rax,rax
  9d53d4:	0f 84 c0 02 00 00    	je     9d569a <future_backtest::RunnerCore::run_multi+0xa3ea>
  9d53da:	48 8b bc 24 d8 00 00 	mov    rdi,QWORD PTR [rsp+0xd8]
  9d53e1:	00 
  9d53e2:	48 89 c1             	mov    rcx,rax
  9d53e5:	48 c1 e1 0b          	shl    rcx,0xb
  9d53e9:	48 8d 34 c1          	lea    rsi,[rcx+rax*8]
  9d53ed:	ba 08 00 00 00       	mov    edx,0x8
  9d53f2:	ff 15 28 16 fd 00    	call   QWORD PTR [rip+0xfd1628]        # 19a6a20 <_DYNAMIC+0x220>
  9d53f8:	e9 9d 02 00 00       	jmp    9d569a <future_backtest::RunnerCore::run_multi+0xa3ea>
  9d53fd:	ff 15 7d 17 fd 00    	call   QWORD PTR [rip+0xfd177d]        # 19a6b80 <_DYNAMIC+0x380>
  9d5403:	49 89 c4             	mov    r12,rax
  9d5406:	48 83 bc 24 a0 00 00 	cmp    QWORD PTR [rsp+0xa0],0x0
  9d540d:	00 00 
  9d540f:	74 1f                	je     9d5430 <future_backtest::RunnerCore::run_multi+0xa180>
  9d5411:	48 8b b4 24 a0 00 00 	mov    rsi,QWORD PTR [rsp+0xa0]
  9d5418:	00 
  9d5419:	48 c1 e6 03          	shl    rsi,0x3
  9d541d:	ba 08 00 00 00       	mov    edx,0x8
  9d5422:	48 8b bc 24 c0 00 00 	mov    rdi,QWORD PTR [rsp+0xc0]
  9d5429:	00 
  9d542a:	ff 15 f0 15 fd 00    	call   QWORD PTR [rip+0xfd15f0]        # 19a6a20 <_DYNAMIC+0x220>
  9d5430:	48 8b b4 24 00 03 00 	mov    rsi,QWORD PTR [rsp+0x300]
  9d5437:	00 
  9d5438:	48 85 f6             	test   rsi,rsi
  9d543b:	74 17                	je     9d5454 <future_backtest::RunnerCore::run_multi+0xa1a4>
  9d543d:	48 8b bc 24 08 03 00 	mov    rdi,QWORD PTR [rsp+0x308]
  9d5444:	00 
  9d5445:	48 c1 e6 03          	shl    rsi,0x3
  9d5449:	ba 08 00 00 00       	mov    edx,0x8
  9d544e:	ff 15 cc 15 fd 00    	call   QWORD PTR [rip+0xfd15cc]        # 19a6a20 <_DYNAMIC+0x220>
  9d5454:	b0 01                	mov    al,0x1
  9d5456:	89 44 24 68          	mov    DWORD PTR [rsp+0x68],eax
  9d545a:	48 8d bc 24 d0 11 00 	lea    rdi,[rsp+0x11d0]
  9d5461:	00 
  9d5462:	e8 f9 0d fd ff       	call   9a6260 <core::ptr::drop_in_place<future_backtest::Customer::customer_params::StrategyParams>>
  9d5467:	e9 8e 00 00 00       	jmp    9d54fa <future_backtest::RunnerCore::run_multi+0xa24a>
  9d546c:	49 89 c4             	mov    r12,rax
  9d546f:	48 8d bc 24 10 06 00 	lea    rdi,[rsp+0x610]
  9d5476:	00 
  9d5477:	e8 94 d0 fc ff       	call   9a2510 <core::ptr::drop_in_place<alloc::rc::RcInner<core::cell::RefCell<future_backtest::Strategy::simulation::strategy_sos::watcher::Watcher>>>>
  9d547c:	b0 01                	mov    al,0x1
  9d547e:	89 44 24 20          	mov    DWORD PTR [rsp+0x20],eax
  9d5482:	e9 ae 01 00 00       	jmp    9d5635 <future_backtest::RunnerCore::run_multi+0xa385>
  9d5487:	ff 15 f3 16 fd 00    	call   QWORD PTR [rip+0xfd16f3]        # 19a6b80 <_DYNAMIC+0x380>
  9d548d:	49 89 c4             	mov    r12,rax
  9d5490:	48 89 df             	mov    rdi,rbx
  9d5493:	e8 88 f0 fc ff       	call   9a4520 <core::ptr::drop_in_place<future_backtest::Exchange::exchange::Exchange>>
  9d5498:	b0 01                	mov    al,0x1
  9d549a:	89 44 24 20          	mov    DWORD PTR [rsp+0x20],eax
  9d549e:	e9 aa 01 00 00       	jmp    9d564d <future_backtest::RunnerCore::run_multi+0xa39d>
  9d54a3:	ff 15 d7 16 fd 00    	call   QWORD PTR [rip+0xfd16d7]        # 19a6b80 <_DYNAMIC+0x380>
  9d54a9:	49 89 c4             	mov    r12,rax
  9d54ac:	48 8d bc 24 d0 11 00 	lea    rdi,[rsp+0x11d0]
  9d54b3:	00 
  9d54b4:	e8 97 07 fd ff       	call   9a5c50 <core::ptr::drop_in_place<(alloc::string::String,alloc::string::String)>>
  9d54b9:	48 8d bc 24 f8 05 00 	lea    rdi,[rsp+0x5f8]
  9d54c0:	00 
  9d54c1:	e8 9a ed fc ff       	call   9a4260 <_ZN4core3ptr65drop_in_place$LT$alloc..vec..Vec$LT$alloc..string..String$GT$$GT$17hd2a54bddd809dd19E.llvm.5215769359700358943>
  9d54c6:	b0 01                	mov    al,0x1
  9d54c8:	89 44 24 20          	mov    DWORD PTR [rsp+0x20],eax
  9d54cc:	e9 8b 00 00 00       	jmp    9d555c <future_backtest::RunnerCore::run_multi+0xa2ac>
  9d54d1:	49 89 c4             	mov    r12,rax
  9d54d4:	45 84 ed             	test   r13b,r13b
  9d54d7:	75 0d                	jne    9d54e6 <future_backtest::RunnerCore::run_multi+0xa236>
  9d54d9:	48 8d bc 24 d0 11 00 	lea    rdi,[rsp+0x11d0]
  9d54e0:	00 
  9d54e1:	e8 fa e4 fc ff       	call   9a39e0 <core::ptr::drop_in_place<libloading::error::Error>>
  9d54e6:	b0 01                	mov    al,0x1
  9d54e8:	89 44 24 68          	mov    DWORD PTR [rsp+0x68],eax
  9d54ec:	48 8d bc 24 b0 10 00 	lea    rdi,[rsp+0x10b0]
  9d54f3:	00 
  9d54f4:	ff 15 d6 2d fd 00    	call   QWORD PTR [rip+0xfd2dd6]        # 19a82d0 <_DYNAMIC+0x1ad0>
  9d54fa:	48 8b b4 24 e8 00 00 	mov    rsi,QWORD PTR [rsp+0xe8]
  9d5501:	00 
  9d5502:	48 85 f6             	test   rsi,rsi
  9d5505:	74 17                	je     9d551e <future_backtest::RunnerCore::run_multi+0xa26e>
  9d5507:	48 8b bc 24 f0 00 00 	mov    rdi,QWORD PTR [rsp+0xf0]
  9d550e:	00 
  9d550f:	48 c1 e6 03          	shl    rsi,0x3
  9d5513:	ba 08 00 00 00       	mov    edx,0x8
  9d5518:	ff 15 02 15 fd 00    	call   QWORD PTR [rip+0xfd1502]        # 19a6a20 <_DYNAMIC+0x220>
  9d551e:	80 7c 24 68 00       	cmp    BYTE PTR [rsp+0x68],0x0
  9d5523:	75 0b                	jne    9d5530 <future_backtest::RunnerCore::run_multi+0xa280>
  9d5525:	eb 1b                	jmp    9d5542 <future_backtest::RunnerCore::run_multi+0xa292>
  9d5527:	ff 15 53 16 fd 00    	call   QWORD PTR [rip+0xfd1653]        # 19a6b80 <_DYNAMIC+0x380>
  9d552d:	49 89 c4             	mov    r12,rax
  9d5530:	48 8d bc 24 e8 02 00 	lea    rdi,[rsp+0x2e8]
  9d5537:	00 
  9d5538:	e8 d3 ff fc ff       	call   9a5510 <core::ptr::drop_in_place<alloc::vec::Vec<libloading::safe::Library>>>
  9d553d:	eb 03                	jmp    9d5542 <future_backtest::RunnerCore::run_multi+0xa292>
  9d553f:	49 89 c4             	mov    r12,rax
  9d5542:	48 8d bc 24 80 1b 00 	lea    rdi,[rsp+0x1b80]
  9d5549:	00 
  9d554a:	e8 11 0d fd ff       	call   9a6260 <core::ptr::drop_in_place<future_backtest::Customer::customer_params::StrategyParams>>
  9d554f:	48 8d bc 24 e0 0e 00 	lea    rdi,[rsp+0xee0]
  9d5556:	00 
  9d5557:	e8 64 26 fd ff       	call   9a7bc0 <core::ptr::drop_in_place<core::option::Option<future_backtest::RunnerCore::MetaRunState>>>
  9d555c:	48 8d bc 24 a8 01 00 	lea    rdi,[rsp+0x1a8]
  9d5563:	00 
  9d5564:	e8 57 2e fd ff       	call   9a83c0 <core::ptr::drop_in_place<alloc::vec::Vec<future_backtest::DataStruct::event_slice::EventSlice>>>
  9d5569:	48 8d bc 24 60 18 00 	lea    rdi,[rsp+0x1860]
  9d5570:	00 
  9d5571:	e8 8a 1d fd ff       	call   9a7300 <core::ptr::drop_in_place<future_backtest::MultiStrategy::event_producer::EventProducer>>
  9d5576:	e9 83 00 00 00       	jmp    9d55fe <future_backtest::RunnerCore::run_multi+0xa34e>
  9d557b:	49 89 c4             	mov    r12,rax
  9d557e:	48 8d bc 24 e0 0e 00 	lea    rdi,[rsp+0xee0]
  9d5585:	00 
  9d5586:	e8 d5 ec fc ff       	call   9a4260 <_ZN4core3ptr65drop_in_place$LT$alloc..vec..Vec$LT$alloc..string..String$GT$$GT$17hd2a54bddd809dd19E.llvm.5215769359700358943>
  9d558b:	48 8d bc 24 60 18 00 	lea    rdi,[rsp+0x1860]
  9d5592:	00 
  9d5593:	e8 d8 2b fd ff       	call   9a8170 <core::ptr::drop_in_place<core::option::Option<alloc::vec::Vec<alloc::string::String>>>>
  9d5598:	48 8d bc 24 d0 11 00 	lea    rdi,[rsp+0x11d0]
  9d559f:	00 
  9d55a0:	e8 9b eb fc ff       	call   9a4140 <core::ptr::drop_in_place<future_backtest::Config::config::FilterCode>>
  9d55a5:	eb 1d                	jmp    9d55c4 <future_backtest::RunnerCore::run_multi+0xa314>
  9d55a7:	49 89 c4             	mov    r12,rax
  9d55aa:	48 8d bc 24 e0 0e 00 	lea    rdi,[rsp+0xee0]
  9d55b1:	00 
  9d55b2:	e8 a9 ec fc ff       	call   9a4260 <_ZN4core3ptr65drop_in_place$LT$alloc..vec..Vec$LT$alloc..string..String$GT$$GT$17hd2a54bddd809dd19E.llvm.5215769359700358943>
  9d55b7:	48 8d bc 24 60 18 00 	lea    rdi,[rsp+0x1860]
  9d55be:	00 
  9d55bf:	e8 ac 2b fd ff       	call   9a8170 <core::ptr::drop_in_place<core::option::Option<alloc::vec::Vec<alloc::string::String>>>>
  9d55c4:	48 8d bc 24 80 1b 00 	lea    rdi,[rsp+0x1b80]
  9d55cb:	00 
  9d55cc:	e8 7f 06 fd ff       	call   9a5c50 <core::ptr::drop_in_place<(alloc::string::String,alloc::string::String)>>
  9d55d1:	48 8d bc 24 c0 01 00 	lea    rdi,[rsp+0x1c0]
  9d55d8:	00 
  9d55d9:	e8 82 ec fc ff       	call   9a4260 <_ZN4core3ptr65drop_in_place$LT$alloc..vec..Vec$LT$alloc..string..String$GT$$GT$17hd2a54bddd809dd19E.llvm.5215769359700358943>
  9d55de:	48 8d bc 24 a0 03 00 	lea    rdi,[rsp+0x3a0]
  9d55e5:	00 
  9d55e6:	e8 75 ec fc ff       	call   9a4260 <_ZN4core3ptr65drop_in_place$LT$alloc..vec..Vec$LT$alloc..string..String$GT$$GT$17hd2a54bddd809dd19E.llvm.5215769359700358943>
  9d55eb:	b0 01                	mov    al,0x1
  9d55ed:	89 44 24 20          	mov    DWORD PTR [rsp+0x20],eax
  9d55f1:	48 8d bc 24 60 0e 00 	lea    rdi,[rsp+0xe60]
  9d55f8:	00 
  9d55f9:	e8 a2 7f 07 00       	call   a4d5a0 <<hashbrown::raw::RawTable<T,A> as core::ops::drop::Drop>::drop>
  9d55fe:	48 8d 7c 24 38       	lea    rdi,[rsp+0x38]
  9d5603:	e8 e8 24 fd ff       	call   9a7af0 <core::ptr::drop_in_place<alloc::vec::Vec<future_backtest::Strategy::strategy::Strategy>>>
  9d5608:	48 8b 84 24 88 00 00 	mov    rax,QWORD PTR [rsp+0x88]
  9d560f:	00 
  9d5610:	48 ff 08             	dec    QWORD PTR [rax]
  9d5613:	74 12                	je     9d5627 <future_backtest::RunnerCore::run_multi+0xa377>
  9d5615:	eb 1e                	jmp    9d5635 <future_backtest::RunnerCore::run_multi+0xa385>
  9d5617:	49 89 c4             	mov    r12,rax
  9d561a:	48 8b 84 24 88 00 00 	mov    rax,QWORD PTR [rsp+0x88]
  9d5621:	00 
  9d5622:	48 ff 08             	dec    QWORD PTR [rax]
  9d5625:	75 0e                	jne    9d5635 <future_backtest::RunnerCore::run_multi+0xa385>
  9d5627:	48 8d bc 24 60 03 00 	lea    rdi,[rsp+0x360]
  9d562e:	00 
  9d562f:	ff 15 b3 21 fd 00    	call   QWORD PTR [rip+0xfd21b3]        # 19a77e8 <_DYNAMIC+0xfe8>
  9d5635:	48 8b 44 24 18       	mov    rax,QWORD PTR [rsp+0x18]
  9d563a:	48 ff 08             	dec    QWORD PTR [rax]
  9d563d:	75 0e                	jne    9d564d <future_backtest::RunnerCore::run_multi+0xa39d>
  9d563f:	48 8d bc 24 58 03 00 	lea    rdi,[rsp+0x358]
  9d5646:	00 
  9d5647:	ff 15 a3 21 fd 00    	call   QWORD PTR [rip+0xfd21a3]        # 19a77f0 <_DYNAMIC+0xff0>
  9d564d:	48 b8 00 00 00 00 00 	movabs rax,0x8000000000000000
  9d5654:	00 00 80 
  9d5657:	48 39 84 24 f0 19 00 	cmp    QWORD PTR [rsp+0x19f0],rax
  9d565e:	00 
  9d565f:	74 21                	je     9d5682 <future_backtest::RunnerCore::run_multi+0xa3d2>
  9d5661:	80 7c 24 20 00       	cmp    BYTE PTR [rsp+0x20],0x0
  9d5666:	74 1a                	je     9d5682 <future_backtest::RunnerCore::run_multi+0xa3d2>
  9d5668:	48 8d bc 24 f0 19 00 	lea    rdi,[rsp+0x19f0]
  9d566f:	00 
  9d5670:	e8 8b 01 fd ff       	call   9a5800 <core::ptr::drop_in_place<future_backtest::MetaControl::config::MetaManifest>>
  9d5675:	48 8d bc 24 a8 1a 00 	lea    rdi,[rsp+0x1aa8]
  9d567c:	00 
  9d567d:	e8 3e 15 fd ff       	call   9a6bc0 <core::ptr::drop_in_place<future_backtest::MetaControl::router::MetaDecisionSchedule>>
  9d5682:	48 8d bc 24 d0 00 00 	lea    rdi,[rsp+0xd0]
  9d5689:	00 
  9d568a:	e8 b1 28 fd ff       	call   9a7f40 <core::ptr::drop_in_place<alloc::vec::Vec<future_backtest::Config::config::StrategyConfig>>>
  9d568f:	eb 09                	jmp    9d569a <future_backtest::RunnerCore::run_multi+0xa3ea>
  9d5691:	ff 15 e9 14 fd 00    	call   QWORD PTR [rip+0xfd14e9]        # 19a6b80 <_DYNAMIC+0x380>
  9d5697:	49 89 c4             	mov    r12,rax
  9d569a:	48 b8 00 00 00 00 00 	movabs rax,0x8000000000000000
  9d56a1:	00 00 80 
  9d56a4:	48 39 84 24 50 03 00 	cmp    QWORD PTR [rsp+0x350],rax
  9d56ab:	00 
  9d56ac:	74 17                	je     9d56c5 <future_backtest::RunnerCore::run_multi+0xa415>
  9d56ae:	80 bc 24 c8 00 00 00 	cmp    BYTE PTR [rsp+0xc8],0x0
  9d56b5:	00 
  9d56b6:	74 0d                	je     9d56c5 <future_backtest::RunnerCore::run_multi+0xa415>
  9d56b8:	48 8b bc 24 48 03 00 	mov    rdi,QWORD PTR [rsp+0x348]
  9d56bf:	00 
  9d56c0:	e8 3b 01 fd ff       	call   9a5800 <core::ptr::drop_in_place<future_backtest::MetaControl::config::MetaManifest>>
  9d56c5:	4c 89 e7             	mov    rdi,r12
  9d56c8:	e8 b3 7f f0 00       	call   18dd680 <_Unwind_Resume@plt>
