# future_backtest::RunnerCore::run_multi
# ELF 00000000009225d0 bytes 42013
  9225d0:	55                   	push   rbp
  9225d1:	41 57                	push   r15
  9225d3:	41 56                	push   r14
  9225d5:	41 55                	push   r13
  9225d7:	41 54                	push   r12
  9225d9:	53                   	push   rbx
  9225da:	48 81 ec 00 10 00 00 	sub    rsp,0x1000
  9225e1:	48 c7 04 24 00 00 00 	mov    QWORD PTR [rsp],0x0
  9225e8:	00 
  9225e9:	48 81 ec 00 10 00 00 	sub    rsp,0x1000
  9225f0:	48 c7 04 24 00 00 00 	mov    QWORD PTR [rsp],0x0
  9225f7:	00 
  9225f8:	48 81 ec 00 10 00 00 	sub    rsp,0x1000
  9225ff:	48 c7 04 24 00 00 00 	mov    QWORD PTR [rsp],0x0
  922606:	00 
  922607:	48 81 ec f8 0f 00 00 	sub    rsp,0xff8
  92260e:	48 89 cb             	mov    rbx,rcx
  922611:	49 89 d6             	mov    r14,rdx
  922614:	49 89 fc             	mov    r12,rdi
  922617:	48 89 b4 24 a8 00 00 	mov    QWORD PTR [rsp+0xa8],rsi
  92261e:	00 
  92261f:	4c 89 84 24 48 03 00 	mov    QWORD PTR [rsp+0x348],r8
  922626:	00 
  922627:	49 8b 00             	mov    rax,QWORD PTR [r8]
  92262a:	48 89 84 24 50 03 00 	mov    QWORD PTR [rsp+0x350],rax
  922631:	00 
  922632:	48 f7 d8             	neg    rax
  922635:	48 8d 05 b8 b7 95 ff 	lea    rax,[rip+0xffffffffff95b7b8]        # 27ddf4 <anon.609a31ba814f1e4156e50677fc366a7f.490.llvm.5215769359700358943+0x1f96>
  92263c:	48 8d 0d 49 a1 92 ff 	lea    rcx,[rip+0xffffffffff92a149]        # 24c78c <anon.fdbab276b20b22b3c9c7da938155e424.385.llvm.4008431589571684065+0x4>
  922643:	48 0f 40 c8          	cmovo  rcx,rax
  922647:	b8 0e 00 00 00       	mov    eax,0xe
  92264c:	ba 04 00 00 00       	mov    edx,0x4
  922651:	48 0f 40 d0          	cmovo  rdx,rax
  922655:	48 89 8c 24 80 1b 00 	mov    QWORD PTR [rsp+0x1b80],rcx
  92265c:	00 
  92265d:	48 89 94 24 88 1b 00 	mov    QWORD PTR [rsp+0x1b88],rdx
  922664:	00 
  922665:	48 8d 84 24 80 1b 00 	lea    rax,[rsp+0x1b80]
  92266c:	00 
  92266d:	48 89 84 24 d0 11 00 	mov    QWORD PTR [rsp+0x11d0],rax
  922674:	00 
  922675:	48 8d 05 c4 9f f2 ff 	lea    rax,[rip+0xfffffffffff29fc4]        # 84c640 <<&T as core::fmt::Display>::fmt>
  92267c:	48 89 84 24 d8 11 00 	mov    QWORD PTR [rsp+0x11d8],rax
  922683:	00 
  922684:	48 8d 84 24 a8 00 00 	lea    rax,[rsp+0xa8]
  92268b:	00 
  92268c:	48 89 84 24 e0 11 00 	mov    QWORD PTR [rsp+0x11e0],rax
  922693:	00 
  922694:	48 8b 05 3d 98 fd 00 	mov    rax,QWORD PTR [rip+0xfd983d]        # 18fbed8 <_DYNAMIC+0x5d8>
  92269b:	48 89 84 24 e8 11 00 	mov    QWORD PTR [rsp+0x11e8],rax
  9226a2:	00 
  9226a3:	48 8d 05 96 e9 f2 00 	lea    rax,[rip+0xf2e996]        # 1851040 <anon.609a31ba814f1e4156e50677fc366a7f.492.llvm.5215769359700358943+0x950>
  9226aa:	48 89 84 24 10 06 00 	mov    QWORD PTR [rsp+0x610],rax
  9226b1:	00 
  9226b2:	48 c7 84 24 18 06 00 	mov    QWORD PTR [rsp+0x618],0x3
  9226b9:	00 03 00 00 00 
  9226be:	48 c7 84 24 30 06 00 	mov    QWORD PTR [rsp+0x630],0x0
  9226c5:	00 00 00 00 00 
  9226ca:	48 8d 84 24 d0 11 00 	lea    rax,[rsp+0x11d0]
  9226d1:	00 
  9226d2:	48 89 84 24 20 06 00 	mov    QWORD PTR [rsp+0x620],rax
  9226d9:	00 
  9226da:	48 c7 84 24 28 06 00 	mov    QWORD PTR [rsp+0x628],0x2
  9226e1:	00 02 00 00 00 
  9226e6:	b0 01                	mov    al,0x1
  9226e8:	89 84 24 c8 00 00 00 	mov    DWORD PTR [rsp+0xc8],eax
  9226ef:	48 8d bc 24 10 06 00 	lea    rdi,[rsp+0x610]
  9226f6:	00 
  9226f7:	ff 15 63 9e fd 00    	call   QWORD PTR [rip+0xfd9e63]        # 18fc560 <_DYNAMIC+0xc60>
  9226fd:	48 8b ac 24 a8 00 00 	mov    rbp,QWORD PTR [rsp+0xa8]
  922704:	00 
  922705:	b9 08 08 00 00       	mov    ecx,0x808
  92270a:	48 89 e8             	mov    rax,rbp
  92270d:	48 f7 e1             	mul    rcx
  922710:	49 89 c7             	mov    r15,rax
  922713:	0f 90 c0             	seto   al
  922716:	48 b9 00 00 00 00 00 	movabs rcx,0x8000000000000000
  92271d:	00 00 80 
  922720:	48 8d 51 f8          	lea    rdx,[rcx-0x8]
  922724:	49 39 d7             	cmp    r15,rdx
  922727:	0f 97 c1             	seta   cl
  92272a:	08 c1                	or     cl,al
  92272c:	74 1b                	je     922749 <future_backtest::RunnerCore::run_multi+0x179>
  92272e:	45 31 ed             	xor    r13d,r13d
  922731:	48 8d 15 38 e9 f2 00 	lea    rdx,[rip+0xf2e938]        # 1851070 <anon.609a31ba814f1e4156e50677fc366a7f.492.llvm.5215769359700358943+0x980>
  922738:	4c 89 ef             	mov    rdi,r13
  92273b:	4c 89 fe             	mov    rsi,r15
  92273e:	ff 15 34 9a fd 00    	call   QWORD PTR [rip+0xfd9a34]        # 18fc178 <_DYNAMIC+0x878>
  922744:	e9 d3 8d 00 00       	jmp    92b51c <future_backtest::RunnerCore::run_multi+0x8f4c>
  922749:	48 89 54 24 50       	mov    QWORD PTR [rsp+0x50],rdx
  92274e:	48 89 9c 24 a0 00 00 	mov    QWORD PTR [rsp+0xa0],rbx
  922755:	00 
  922756:	4d 85 ff             	test   r15,r15
  922759:	4c 89 74 24 60       	mov    QWORD PTR [rsp+0x60],r14
  92275e:	74 2c                	je     92278c <future_backtest::RunnerCore::run_multi+0x1bc>
  922760:	ff 15 da 93 fd 00    	call   QWORD PTR [rip+0xfd93da]        # 18fbb40 <_DYNAMIC+0x240>
  922766:	41 bd 08 00 00 00    	mov    r13d,0x8
  92276c:	be 08 00 00 00       	mov    esi,0x8
  922771:	4c 89 ff             	mov    rdi,r15
  922774:	ff 15 9e 93 fd 00    	call   QWORD PTR [rip+0xfd939e]        # 18fbb18 <_DYNAMIC+0x218>
  92277a:	48 85 c0             	test   rax,rax
  92277d:	74 b2                	je     922731 <future_backtest::RunnerCore::run_multi+0x161>
  92277f:	48 89 c3             	mov    rbx,rax
  922782:	4c 8b b4 24 a8 00 00 	mov    r14,QWORD PTR [rsp+0xa8]
  922789:	00 
  92278a:	eb 0a                	jmp    922796 <future_backtest::RunnerCore::run_multi+0x1c6>
  92278c:	bb 08 00 00 00       	mov    ebx,0x8
  922791:	49 89 ee             	mov    r14,rbp
  922794:	31 ed                	xor    ebp,ebp
  922796:	48 89 ac 24 d0 00 00 	mov    QWORD PTR [rsp+0xd0],rbp
  92279d:	00 
  92279e:	48 89 9c 24 d8 00 00 	mov    QWORD PTR [rsp+0xd8],rbx
  9227a5:	00 
  9227a6:	48 c7 84 24 e0 00 00 	mov    QWORD PTR [rsp+0xe0],0x0
  9227ad:	00 00 00 00 00 
  9227b2:	4d 85 f6             	test   r14,r14
  9227b5:	0f 84 db 00 00 00    	je     922896 <future_backtest::RunnerCore::run_multi+0x2c6>
  9227bb:	49 c1 e6 04          	shl    r14,0x4
  9227bf:	31 ed                	xor    ebp,ebp
  9227c1:	4c 8b 2d 30 97 fd 00 	mov    r13,QWORD PTR [rip+0xfd9730]        # 18fbef8 <memcpy@GLIBC_2.14>
  9227c8:	eb 44                	jmp    92280e <future_backtest::RunnerCore::run_multi+0x23e>
  9227ca:	66 0f 1f 44 00 00    	nop    WORD PTR [rax+rax*1+0x0]
  9227d0:	48 8b 9c 24 d8 00 00 	mov    rbx,QWORD PTR [rsp+0xd8]
  9227d7:	00 
  9227d8:	4c 89 f8             	mov    rax,r15
  9227db:	48 c1 e0 0b          	shl    rax,0xb
  9227df:	4a 8d 3c f8          	lea    rdi,[rax+r15*8]
  9227e3:	48 01 df             	add    rdi,rbx
  9227e6:	ba 08 08 00 00       	mov    edx,0x808
  9227eb:	48 8d b4 24 c8 22 00 	lea    rsi,[rsp+0x22c8]
  9227f2:	00 
  9227f3:	41 ff d5             	call   r13
  9227f6:	49 ff c7             	inc    r15
  9227f9:	4c 89 bc 24 e0 00 00 	mov    QWORD PTR [rsp+0xe0],r15
  922800:	00 
  922801:	48 83 c5 10          	add    rbp,0x10
  922805:	49 39 ee             	cmp    r14,rbp
  922808:	0f 84 8b 00 00 00    	je     922899 <future_backtest::RunnerCore::run_multi+0x2c9>
  92280e:	49 8b 34 2c          	mov    rsi,QWORD PTR [r12+rbp*1]
  922812:	49 8b 54 2c 08       	mov    rdx,QWORD PTR [r12+rbp*1+0x8]
  922817:	48 8d bc 24 10 06 00 	lea    rdi,[rsp+0x610]
  92281e:	00 
  92281f:	e8 8c c1 ff ff       	call   91e9b0 <future_backtest::RunnerCore::load_config>
  922824:	48 8b 9c 24 10 06 00 	mov    rbx,QWORD PTR [rsp+0x610]
  92282b:	00 
  92282c:	4c 8b bc 24 18 06 00 	mov    r15,QWORD PTR [rsp+0x618]
  922833:	00 
  922834:	48 83 fb 03          	cmp    rbx,0x3
  922838:	0f 84 ef 09 00 00    	je     92322d <future_backtest::RunnerCore::run_multi+0xc5d>
  92283e:	ba f8 07 00 00       	mov    edx,0x7f8
  922843:	48 8d bc 24 d8 22 00 	lea    rdi,[rsp+0x22d8]
  92284a:	00 
  92284b:	48 8d b4 24 20 06 00 	lea    rsi,[rsp+0x620]
  922852:	00 
  922853:	41 ff d5             	call   r13
  922856:	48 89 9c 24 c8 22 00 	mov    QWORD PTR [rsp+0x22c8],rbx
  92285d:	00 
  92285e:	4c 89 bc 24 d0 22 00 	mov    QWORD PTR [rsp+0x22d0],r15
  922865:	00 
  922866:	4c 8b bc 24 e0 00 00 	mov    r15,QWORD PTR [rsp+0xe0]
  92286d:	00 
  92286e:	4c 3b bc 24 d0 00 00 	cmp    r15,QWORD PTR [rsp+0xd0]
  922875:	00 
  922876:	0f 85 54 ff ff ff    	jne    9227d0 <future_backtest::RunnerCore::run_multi+0x200>
  92287c:	48 8d bc 24 d0 00 00 	lea    rdi,[rsp+0xd0]
  922883:	00 
  922884:	48 8d 35 1d f5 f2 00 	lea    rsi,[rip+0xf2f51d]        # 1851da8 <anon.609a31ba814f1e4156e50677fc366a7f.492.llvm.5215769359700358943+0x16b8>
  92288b:	ff 15 3f a2 fd 00    	call   QWORD PTR [rip+0xfda23f]        # 18fcad0 <_DYNAMIC+0x11d0>
  922891:	e9 3a ff ff ff       	jmp    9227d0 <future_backtest::RunnerCore::run_multi+0x200>
  922896:	45 31 ff             	xor    r15d,r15d
  922899:	48 b8 00 00 00 00 00 	movabs rax,0x8000000000000000
  9228a0:	00 00 80 
  9228a3:	48 39 84 24 50 03 00 	cmp    QWORD PTR [rsp+0x350],rax
  9228aa:	00 
  9228ab:	0f 85 50 04 00 00    	jne    922d01 <future_backtest::RunnerCore::run_multi+0x731>
  9228b1:	48 89 84 24 f0 19 00 	mov    QWORD PTR [rsp+0x19f0],rax
  9228b8:	00 
  9228b9:	b0 01                	mov    al,0x1
  9228bb:	89 84 24 c8 00 00 00 	mov    DWORD PTR [rsp+0xc8],eax
  9228c2:	48 8b 8c 24 a8 00 00 	mov    rcx,QWORD PTR [rsp+0xa8]
  9228c9:	00 
  9228ca:	48 83 f9 02          	cmp    rcx,0x2
  9228ce:	0f 82 f6 00 00 00    	jb     9229ca <future_backtest::RunnerCore::run_multi+0x3fa>
  9228d4:	41 bb 01 00 00 00    	mov    r11d,0x1
  9228da:	48 c7 c0 90 ff ff ff 	mov    rax,0xffffffffffffff90
  9228e1:	48 c7 c6 a8 ff ff ff 	mov    rsi,0xffffffffffffffa8
  9228e8:	4c 8b 84 24 d8 00 00 	mov    r8,QWORD PTR [rsp+0xd8]
  9228ef:	00 
  9228f0:	45 31 c9             	xor    r9d,r9d
  9228f3:	48 8d 15 16 f4 f2 00 	lea    rdx,[rip+0xf2f416]        # 1851d10 <anon.609a31ba814f1e4156e50677fc366a7f.492.llvm.5215769359700358943+0x1620>
  9228fa:	66 0f 28 05 0e d0 92 	movapd xmm0,XMMWORD PTR [rip+0xffffffffff92d00e]        # 24f910 <anon.23a7bc9302e079b368ad5af617974320.28.llvm.9485200918992093105+0x10>
  922901:	ff 
  922902:	f2 0f 10 0d 56 38 93 	movsd  xmm1,QWORD PTR [rip+0xffffffffff933856]        # 256160 <anon.baa4d3160c6db26b1acb0467a3a6e91d.683.llvm.14045134056871974489+0x58>
  922909:	ff 
  92290a:	45 31 d2             	xor    r10d,r10d
  92290d:	4c 89 d7             	mov    rdi,r10
  922910:	4d 89 da             	mov    r10,r11
  922913:	48 89 bc 24 30 0e 00 	mov    QWORD PTR [rsp+0xe30],rdi
  92291a:	00 
  92291b:	4c 39 ff             	cmp    rdi,r15
  92291e:	0f 83 7c 00 00 00    	jae    9229a0 <future_backtest::RunnerCore::run_multi+0x3d0>
  922924:	49 89 fb             	mov    r11,rdi
  922927:	49 c1 e3 0b          	shl    r11,0xb
  92292b:	49 8d 1c fb          	lea    rbx,[r11+rdi*8]
  92292f:	4c 01 c3             	add    rbx,r8
  922932:	4d 89 c3             	mov    r11,r8
  922935:	4c 89 d7             	mov    rdi,r10
  922938:	0f 1f 84 00 00 00 00 	nop    DWORD PTR [rax+rax*1+0x0]
  92293f:	00 
  922940:	48 39 f9             	cmp    rcx,rdi
  922943:	74 64                	je     9229a9 <future_backtest::RunnerCore::run_multi+0x3d9>
  922945:	48 89 bc 24 e0 05 00 	mov    QWORD PTR [rsp+0x5e0],rdi
  92294c:	00 
  92294d:	f2 0f 10 93 f0 04 00 	movsd  xmm2,QWORD PTR [rbx+0x4f0]
  922954:	00 
  922955:	f2 0f 58 93 f8 04 00 	addsd  xmm2,QWORD PTR [rbx+0x4f8]
  92295c:	00 
  92295d:	f2 0f 11 94 24 38 0e 	movsd  QWORD PTR [rsp+0xe38],xmm2
  922964:	00 00 
  922966:	4c 39 ff             	cmp    rdi,r15
  922969:	0f 83 81 87 00 00    	jae    92b0f0 <future_backtest::RunnerCore::run_multi+0x8b20>
  92296f:	f2 43 0f 10 9c 0b f8 	movsd  xmm3,QWORD PTR [r11+r9*1+0xcf8]
  922976:	0c 00 00 
  922979:	f2 43 0f 58 9c 0b 00 	addsd  xmm3,QWORD PTR [r11+r9*1+0xd00]
  922980:	0d 00 00 
  922983:	f2 0f 5c d3          	subsd  xmm2,xmm3
  922987:	66 0f 54 d0          	andpd  xmm2,xmm0
  92298b:	49 81 c3 08 08 00 00 	add    r11,0x808
  922992:	48 ff c7             	inc    rdi
  922995:	66 0f 2e ca          	ucomisd xmm1,xmm2
  922999:	76 a5                	jbe    922940 <future_backtest::RunnerCore::run_multi+0x370>
  92299b:	e9 9b 08 00 00       	jmp    92323b <future_backtest::RunnerCore::run_multi+0xc6b>
  9229a0:	49 39 ca             	cmp    r10,rcx
  9229a3:	0f 82 15 87 00 00    	jb     92b0be <future_backtest::RunnerCore::run_multi+0x8aee>
  9229a9:	4d 8d 5a 01          	lea    r11,[r10+0x1]
  9229ad:	48 05 f8 f7 ff ff    	add    rax,0xfffffffffffff7f8
  9229b3:	48 81 c6 f8 f7 ff ff 	add    rsi,0xfffffffffffff7f8
  9229ba:	49 81 c1 08 08 00 00 	add    r9,0x808
  9229c1:	49 39 ca             	cmp    r10,rcx
  9229c4:	0f 85 43 ff ff ff    	jne    92290d <future_backtest::RunnerCore::run_multi+0x33d>
  9229ca:	4d 85 ff             	test   r15,r15
  9229cd:	0f 84 11 87 00 00    	je     92b0e4 <future_backtest::RunnerCore::run_multi+0x8b14>
  9229d3:	48 8b 84 24 d8 00 00 	mov    rax,QWORD PTR [rsp+0xd8]
  9229da:	00 
  9229db:	0f b6 80 f4 07 00 00 	movzx  eax,BYTE PTR [rax+0x7f4]
  9229e2:	88 84 24 b8 00 00 00 	mov    BYTE PTR [rsp+0xb8],al
  9229e9:	40 b5 01             	mov    bpl,0x1
  9229ec:	48 8d bc 24 d0 11 00 	lea    rdi,[rsp+0x11d0]
  9229f3:	00 
  9229f4:	e8 87 d4 00 00       	call   92fe80 <<future_backtest::Exchange::exchange::Exchange as core::default::Default>::default>
  9229f9:	48 8d 9c 24 28 06 00 	lea    rbx,[rsp+0x628]
  922a00:	00 
  922a01:	48 8d b4 24 d0 11 00 	lea    rsi,[rsp+0x11d0]
  922a08:	00 
  922a09:	ba 98 01 00 00       	mov    edx,0x198
  922a0e:	48 89 df             	mov    rdi,rbx
  922a11:	ff 15 e1 94 fd 00    	call   QWORD PTR [rip+0xfd94e1]        # 18fbef8 <memcpy@GLIBC_2.14>
  922a17:	48 c7 84 24 10 06 00 	mov    QWORD PTR [rsp+0x610],0x1
  922a1e:	00 01 00 00 00 
  922a23:	48 c7 84 24 18 06 00 	mov    QWORD PTR [rsp+0x618],0x1
  922a2a:	00 01 00 00 00 
  922a2f:	48 c7 84 24 20 06 00 	mov    QWORD PTR [rsp+0x620],0x0
  922a36:	00 00 00 00 00 
  922a3b:	ff 15 ff 90 fd 00    	call   QWORD PTR [rip+0xfd90ff]        # 18fbb40 <_DYNAMIC+0x240>
  922a41:	bf b0 01 00 00       	mov    edi,0x1b0
  922a46:	be 08 00 00 00       	mov    esi,0x8
  922a4b:	ff 15 c7 90 fd 00    	call   QWORD PTR [rip+0xfd90c7]        # 18fbb18 <_DYNAMIC+0x218>
  922a51:	48 85 c0             	test   rax,rax
  922a54:	0f 84 89 6b 00 00    	je     9295e3 <future_backtest::RunnerCore::run_multi+0x7013>
  922a5a:	49 89 c6             	mov    r14,rax
  922a5d:	48 8d b4 24 10 06 00 	lea    rsi,[rsp+0x610]
  922a64:	00 
  922a65:	ba b0 01 00 00       	mov    edx,0x1b0
  922a6a:	48 89 c7             	mov    rdi,rax
  922a6d:	ff 15 85 94 fd 00    	call   QWORD PTR [rip+0xfd9485]        # 18fbef8 <memcpy@GLIBC_2.14>
  922a73:	4c 89 74 24 18       	mov    QWORD PTR [rsp+0x18],r14
  922a78:	4c 89 b4 24 58 03 00 	mov    QWORD PTR [rsp+0x358],r14
  922a7f:	00 
  922a80:	64 48 8b 04 25 00 00 	mov    rax,QWORD PTR fs:0x0
  922a87:	00 00 
  922a89:	48 8d 80 d0 ff ff ff 	lea    rax,[rax-0x30]
  922a90:	0f b6 70 10          	movzx  esi,BYTE PTR [rax+0x10]
  922a94:	40 84 f6             	test   sil,sil
  922a97:	48 89 44 24 68       	mov    QWORD PTR [rsp+0x68],rax
  922a9c:	0f 84 75 6b 00 00    	je     929617 <future_backtest::RunnerCore::run_multi+0x7047>
  922aa2:	49 89 c4             	mov    r12,rax
  922aa5:	48 8b 00             	mov    rax,QWORD PTR [rax]
  922aa8:	49 8b 54 24 08       	mov    rdx,QWORD PTR [r12+0x8]
  922aad:	48 8d 48 01          	lea    rcx,[rax+0x1]
  922ab1:	49 89 0c 24          	mov    QWORD PTR [r12],rcx
  922ab5:	0f 10 05 94 cc f2 00 	movups xmm0,XMMWORD PTR [rip+0xf2cc94]        # 184f750 <anon.609a31ba814f1e4156e50677fc366a7f.248.llvm.5215769359700358943+0x90>
  922abc:	0f 29 84 24 e0 11 00 	movaps XMMWORD PTR [rsp+0x11e0],xmm0
  922ac3:	00 
  922ac4:	f3 0f 6f 05 74 cc f2 	movdqu xmm0,XMMWORD PTR [rip+0xf2cc74]        # 184f740 <anon.609a31ba814f1e4156e50677fc366a7f.248.llvm.5215769359700358943+0x80>
  922acb:	00 
  922acc:	66 0f 7f 84 24 d0 11 	movdqa XMMWORD PTR [rsp+0x11d0],xmm0
  922ad3:	00 00 
  922ad5:	48 89 84 24 f0 11 00 	mov    QWORD PTR [rsp+0x11f0],rax
  922adc:	00 
  922add:	48 89 94 24 f8 11 00 	mov    QWORD PTR [rsp+0x11f8],rdx
  922ae4:	00 
  922ae5:	40 84 f6             	test   sil,sil
  922ae8:	0f 84 0a 6b 00 00    	je     9295f8 <future_backtest::RunnerCore::run_multi+0x7028>
  922aee:	48 8d 41 01          	lea    rax,[rcx+0x1]
  922af2:	49 89 04 24          	mov    QWORD PTR [r12],rax
  922af6:	66 0f 6f 84 24 d0 11 	movdqa xmm0,XMMWORD PTR [rsp+0x11d0]
  922afd:	00 00 
  922aff:	66 0f 28 8c 24 e0 11 	movapd xmm1,XMMWORD PTR [rsp+0x11e0]
  922b06:	00 00 
  922b08:	48 8b bc 24 f0 11 00 	mov    rdi,QWORD PTR [rsp+0x11f0]
  922b0f:	00 
  922b10:	48 89 bc 24 30 06 00 	mov    QWORD PTR [rsp+0x630],rdi
  922b17:	00 
  922b18:	48 8b bc 24 f8 11 00 	mov    rdi,QWORD PTR [rsp+0x11f8]
  922b1f:	00 
  922b20:	48 89 bc 24 38 06 00 	mov    QWORD PTR [rsp+0x638],rdi
  922b27:	00 
  922b28:	66 0f 29 8c 24 20 06 	movapd XMMWORD PTR [rsp+0x620],xmm1
  922b2f:	00 00 
  922b31:	66 0f 7f 84 24 10 06 	movdqa XMMWORD PTR [rsp+0x610],xmm0
  922b38:	00 00 
  922b3a:	0f 10 35 ff cb f2 00 	movups xmm6,XMMWORD PTR [rip+0xf2cbff]        # 184f740 <anon.609a31ba814f1e4156e50677fc366a7f.248.llvm.5215769359700358943+0x80>
  922b41:	0f 29 b4 24 40 06 00 	movaps XMMWORD PTR [rsp+0x640],xmm6
  922b48:	00 
  922b49:	0f 10 3d 00 cc f2 00 	movups xmm7,XMMWORD PTR [rip+0xf2cc00]        # 184f750 <anon.609a31ba814f1e4156e50677fc366a7f.248.llvm.5215769359700358943+0x90>
  922b50:	0f 29 bc 24 50 06 00 	movaps XMMWORD PTR [rsp+0x650],xmm7
  922b57:	00 
  922b58:	48 89 8c 24 60 06 00 	mov    QWORD PTR [rsp+0x660],rcx
  922b5f:	00 
  922b60:	48 89 94 24 68 06 00 	mov    QWORD PTR [rsp+0x668],rdx
  922b67:	00 
  922b68:	40 84 f6             	test   sil,sil
  922b6b:	0f 84 01 6b 00 00    	je     929672 <future_backtest::RunnerCore::run_multi+0x70a2>
  922b71:	48 8d 48 01          	lea    rcx,[rax+0x1]
  922b75:	49 89 0c 24          	mov    QWORD PTR [r12],rcx
  922b79:	66 0f 6f 84 24 60 06 	movdqa xmm0,XMMWORD PTR [rsp+0x660]
  922b80:	00 00 
  922b82:	66 0f 7f 84 24 20 12 	movdqa XMMWORD PTR [rsp+0x1220],xmm0
  922b89:	00 00 
  922b8b:	66 0f 6f 8c 24 50 06 	movdqa xmm1,XMMWORD PTR [rsp+0x650]
  922b92:	00 00 
  922b94:	66 0f 7f 8c 24 10 12 	movdqa XMMWORD PTR [rsp+0x1210],xmm1
  922b9b:	00 00 
  922b9d:	66 0f 28 94 24 10 06 	movapd xmm2,XMMWORD PTR [rsp+0x610]
  922ba4:	00 00 
  922ba6:	66 0f 6f 9c 24 20 06 	movdqa xmm3,XMMWORD PTR [rsp+0x620]
  922bad:	00 00 
  922baf:	66 0f 28 a4 24 30 06 	movapd xmm4,XMMWORD PTR [rsp+0x630]
  922bb6:	00 00 
  922bb8:	66 0f 28 ac 24 40 06 	movapd xmm5,XMMWORD PTR [rsp+0x640]
  922bbf:	00 00 
  922bc1:	66 0f 29 ac 24 00 12 	movapd XMMWORD PTR [rsp+0x1200],xmm5
  922bc8:	00 00 
  922bca:	66 0f 29 a4 24 f0 11 	movapd XMMWORD PTR [rsp+0x11f0],xmm4
  922bd1:	00 00 
  922bd3:	66 0f 7f 9c 24 e0 11 	movdqa XMMWORD PTR [rsp+0x11e0],xmm3
  922bda:	00 00 
  922bdc:	66 0f 29 94 24 d0 11 	movapd XMMWORD PTR [rsp+0x11d0],xmm2
  922be3:	00 00 
  922be5:	0f 29 b4 24 30 12 00 	movaps XMMWORD PTR [rsp+0x1230],xmm6
  922bec:	00 
  922bed:	0f 29 bc 24 40 12 00 	movaps XMMWORD PTR [rsp+0x1240],xmm7
  922bf4:	00 
  922bf5:	0f 11 bc 24 98 06 00 	movups XMMWORD PTR [rsp+0x698],xmm7
  922bfc:	00 
  922bfd:	0f 11 b4 24 88 06 00 	movups XMMWORD PTR [rsp+0x688],xmm6
  922c04:	00 
  922c05:	f3 0f 7f 84 24 78 06 	movdqu XMMWORD PTR [rsp+0x678],xmm0
  922c0c:	00 00 
  922c0e:	f3 0f 7f 8c 24 68 06 	movdqu XMMWORD PTR [rsp+0x668],xmm1
  922c15:	00 00 
  922c17:	66 0f 11 ac 24 58 06 	movupd XMMWORD PTR [rsp+0x658],xmm5
  922c1e:	00 00 
  922c20:	66 0f 11 a4 24 48 06 	movupd XMMWORD PTR [rsp+0x648],xmm4
  922c27:	00 00 
  922c29:	f3 0f 7f 9c 24 38 06 	movdqu XMMWORD PTR [rsp+0x638],xmm3
  922c30:	00 00 
  922c32:	66 0f 11 94 24 28 06 	movupd XMMWORD PTR [rsp+0x628],xmm2
  922c39:	00 00 
  922c3b:	48 c7 84 24 10 06 00 	mov    QWORD PTR [rsp+0x610],0x1
  922c42:	00 01 00 00 00 
  922c47:	48 c7 84 24 18 06 00 	mov    QWORD PTR [rsp+0x618],0x1
  922c4e:	00 01 00 00 00 
  922c53:	48 c7 84 24 20 06 00 	mov    QWORD PTR [rsp+0x620],0x0
  922c5a:	00 00 00 00 00 
  922c5f:	48 89 84 24 a8 06 00 	mov    QWORD PTR [rsp+0x6a8],rax
  922c66:	00 
  922c67:	48 89 94 24 b0 06 00 	mov    QWORD PTR [rsp+0x6b0],rdx
  922c6e:	00 
  922c6f:	ff 15 cb 8e fd 00    	call   QWORD PTR [rip+0xfd8ecb]        # 18fbb40 <_DYNAMIC+0x240>
  922c75:	bf a8 00 00 00       	mov    edi,0xa8
  922c7a:	be 08 00 00 00       	mov    esi,0x8
  922c7f:	ff 15 93 8e fd 00    	call   QWORD PTR [rip+0xfd8e93]        # 18fbb18 <_DYNAMIC+0x218>
  922c85:	48 85 c0             	test   rax,rax
  922c88:	0f 84 11 6a 00 00    	je     92969f <future_backtest::RunnerCore::run_multi+0x70cf>
  922c8e:	48 89 c3             	mov    rbx,rax
  922c91:	48 8d b4 24 10 06 00 	lea    rsi,[rsp+0x610]
  922c98:	00 
  922c99:	ba a8 00 00 00       	mov    edx,0xa8
  922c9e:	48 89 c7             	mov    rdi,rax
  922ca1:	ff 15 51 92 fd 00    	call   QWORD PTR [rip+0xfd9251]        # 18fbef8 <memcpy@GLIBC_2.14>
  922ca7:	48 89 9c 24 88 00 00 	mov    QWORD PTR [rsp+0x88],rbx
  922cae:	00 
  922caf:	48 89 9c 24 60 03 00 	mov    QWORD PTR [rsp+0x360],rbx
  922cb6:	00 
  922cb7:	4c 8b b4 24 a8 00 00 	mov    r14,QWORD PTR [rsp+0xa8]
  922cbe:	00 
  922cbf:	b9 28 15 00 00       	mov    ecx,0x1528
  922cc4:	4c 89 f0             	mov    rax,r14
  922cc7:	48 f7 e1             	mul    rcx
  922cca:	49 89 c7             	mov    r15,rax
  922ccd:	0f 90 c0             	seto   al
  922cd0:	4c 3b 7c 24 50       	cmp    r15,QWORD PTR [rsp+0x50]
  922cd5:	0f 97 c1             	seta   cl
  922cd8:	08 c1                	or     cl,al
  922cda:	0f 84 85 07 00 00    	je     923465 <future_backtest::RunnerCore::run_multi+0xe95>
  922ce0:	45 31 e4             	xor    r12d,r12d
  922ce3:	b0 01                	mov    al,0x1
  922ce5:	89 44 24 20          	mov    DWORD PTR [rsp+0x20],eax
  922ce9:	48 8d 15 08 e4 f2 00 	lea    rdx,[rip+0xf2e408]        # 18510f8 <anon.609a31ba814f1e4156e50677fc366a7f.492.llvm.5215769359700358943+0xa08>
  922cf0:	4c 89 e7             	mov    rdi,r12
  922cf3:	4c 89 fe             	mov    rsi,r15
  922cf6:	ff 15 7c 94 fd 00    	call   QWORD PTR [rip+0xfd947c]        # 18fc178 <_DYNAMIC+0x878>
  922cfc:	e9 1b 88 00 00       	jmp    92b51c <future_backtest::RunnerCore::run_multi+0x8f4c>
  922d01:	48 8d bc 24 10 06 00 	lea    rdi,[rsp+0x610]
  922d08:	00 
  922d09:	ba b8 00 00 00       	mov    edx,0xb8
  922d0e:	48 8b b4 24 48 03 00 	mov    rsi,QWORD PTR [rsp+0x348]
  922d15:	00 
  922d16:	ff 15 dc 91 fd 00    	call   QWORD PTR [rip+0xfd91dc]        # 18fbef8 <memcpy@GLIBC_2.14>
  922d1c:	4c 39 bc 24 a8 06 00 	cmp    QWORD PTR [rsp+0x6a8],r15
  922d23:	00 
  922d24:	0f 85 9f 66 00 00    	jne    9293c9 <future_backtest::RunnerCore::run_multi+0x6df9>
  922d2a:	4d 85 ff             	test   r15,r15
  922d2d:	0f 84 dc 66 00 00    	je     92940f <future_backtest::RunnerCore::run_multi+0x6e3f>
  922d33:	64 48 8b 04 25 00 00 	mov    rax,QWORD PTR fs:0x0
  922d3a:	00 00 
  922d3c:	48 8d 80 d0 ff ff ff 	lea    rax,[rax-0x30]
  922d43:	49 89 c6             	mov    r14,rax
  922d46:	0f b6 48 10          	movzx  ecx,BYTE PTR [rax+0x10]
  922d4a:	84 c9                	test   cl,cl
  922d4c:	0f 84 03 67 00 00    	je     929455 <future_backtest::RunnerCore::run_multi+0x6e85>
  922d52:	49 8b 36             	mov    rsi,QWORD PTR [r14]
  922d55:	49 8b 56 08          	mov    rdx,QWORD PTR [r14+0x8]
  922d59:	48 8d 46 01          	lea    rax,[rsi+0x1]
  922d5d:	49 89 06             	mov    QWORD PTR [r14],rax
  922d60:	0f 10 05 99 2c f3 00 	movups xmm0,XMMWORD PTR [rip+0xf32c99]        # 1855a00 <anon.306c05995557b157a5a4a5b5d20bb2f5.311.llvm.2664273085281908480+0x10>
  922d67:	0f 29 84 24 70 18 00 	movaps XMMWORD PTR [rsp+0x1870],xmm0
  922d6e:	00 
  922d6f:	66 0f 10 05 79 2c f3 	movupd xmm0,XMMWORD PTR [rip+0xf32c79]        # 18559f0 <anon.306c05995557b157a5a4a5b5d20bb2f5.311.llvm.2664273085281908480>
  922d76:	00 
  922d77:	66 0f 29 84 24 60 18 	movapd XMMWORD PTR [rsp+0x1860],xmm0
  922d7e:	00 00 
  922d80:	48 89 b4 24 80 18 00 	mov    QWORD PTR [rsp+0x1880],rsi
  922d87:	00 
  922d88:	48 89 94 24 88 18 00 	mov    QWORD PTR [rsp+0x1888],rdx
  922d8f:	00 
  922d90:	84 c9                	test   cl,cl
  922d92:	0f 84 0a 67 00 00    	je     9294a2 <future_backtest::RunnerCore::run_multi+0x6ed2>
  922d98:	48 8d 48 01          	lea    rcx,[rax+0x1]
  922d9c:	49 89 0e             	mov    QWORD PTR [r14],rcx
  922d9f:	0f 10 05 5a 2c f3 00 	movups xmm0,XMMWORD PTR [rip+0xf32c5a]        # 1855a00 <anon.306c05995557b157a5a4a5b5d20bb2f5.311.llvm.2664273085281908480+0x10>
  922da6:	0f 29 84 24 f0 0e 00 	movaps XMMWORD PTR [rsp+0xef0],xmm0
  922dad:	00 
  922dae:	66 0f 10 05 3a 2c f3 	movupd xmm0,XMMWORD PTR [rip+0xf32c3a]        # 18559f0 <anon.306c05995557b157a5a4a5b5d20bb2f5.311.llvm.2664273085281908480>
  922db5:	00 
  922db6:	66 0f 29 84 24 e0 0e 	movapd XMMWORD PTR [rsp+0xee0],xmm0
  922dbd:	00 00 
  922dbf:	48 89 84 24 00 0f 00 	mov    QWORD PTR [rsp+0xf00],rax
  922dc6:	00 
  922dc7:	48 89 94 24 08 0f 00 	mov    QWORD PTR [rsp+0xf08],rdx
  922dce:	00 
  922dcf:	4c 89 f8             	mov    rax,r15
  922dd2:	48 c1 e0 0b          	shl    rax,0xb
  922dd6:	4a 8d 04 f8          	lea    rax,[rax+r15*8]
  922dda:	48 01 d8             	add    rax,rbx
  922ddd:	48 89 84 24 90 00 00 	mov    QWORD PTR [rsp+0x90],rax
  922de4:	00 
  922de5:	48 8b 84 24 a0 06 00 	mov    rax,QWORD PTR [rsp+0x6a0]
  922dec:	00 
  922ded:	48 89 44 24 20       	mov    QWORD PTR [rsp+0x20],rax
  922df2:	48 8d 43 10          	lea    rax,[rbx+0x10]
  922df6:	48 89 84 24 80 00 00 	mov    QWORD PTR [rsp+0x80],rax
  922dfd:	00 
  922dfe:	45 31 ed             	xor    r13d,r13d
  922e01:	48 89 d9             	mov    rcx,rbx
  922e04:	4c 89 ac 24 a0 03 00 	mov    QWORD PTR [rsp+0x3a0],r13
  922e0b:	00 
  922e0c:	4c 89 ac 24 c8 00 00 	mov    QWORD PTR [rsp+0xc8],r13
  922e13:	00 
  922e14:	4d 39 fd             	cmp    r13,r15
  922e17:	0f 84 89 82 00 00    	je     92b0a6 <future_backtest::RunnerCore::run_multi+0x8ad6>
  922e1d:	4c 8b 71 60          	mov    r14,QWORD PTR [rcx+0x60]
  922e21:	48 89 8c 24 88 00 00 	mov    QWORD PTR [rsp+0x88],rcx
  922e28:	00 
  922e29:	48 8b 69 68          	mov    rbp,QWORD PTR [rcx+0x68]
  922e2d:	4c 89 f7             	mov    rdi,r14
  922e30:	48 89 ee             	mov    rsi,rbp
  922e33:	e8 38 81 d4 ff       	call   66af70 <core::str::<impl str>::trim_matches>
  922e38:	48 8b 84 24 c8 00 00 	mov    rax,QWORD PTR [rsp+0xc8]
  922e3f:	00 
  922e40:	48 8d 04 80          	lea    rax,[rax+rax*4]
  922e44:	48 c1 e0 04          	shl    rax,0x4
  922e48:	48 03 44 24 20       	add    rax,QWORD PTR [rsp+0x20]
  922e4d:	48 89 44 24 18       	mov    QWORD PTR [rsp+0x18],rax
  922e52:	48 85 d2             	test   rdx,rdx
  922e55:	0f 84 44 1a 00 00    	je     92489f <future_backtest::RunnerCore::run_multi+0x22cf>
  922e5b:	48 8b 84 24 88 00 00 	mov    rax,QWORD PTR [rsp+0x88]
  922e62:	00 
  922e63:	4c 8b 68 78          	mov    r13,QWORD PTR [rax+0x78]
  922e67:	4c 8b a0 80 00 00 00 	mov    r12,QWORD PTR [rax+0x80]
  922e6e:	4c 89 ef             	mov    rdi,r13
  922e71:	4c 89 e6             	mov    rsi,r12
  922e74:	e8 f7 80 d4 ff       	call   66af70 <core::str::<impl str>::trim_matches>
  922e79:	48 85 d2             	test   rdx,rdx
  922e7c:	0f 84 1d 1a 00 00    	je     92489f <future_backtest::RunnerCore::run_multi+0x22cf>
  922e82:	4c 89 b4 24 c0 01 00 	mov    QWORD PTR [rsp+0x1c0],r14
  922e89:	00 
  922e8a:	48 89 ac 24 c8 01 00 	mov    QWORD PTR [rsp+0x1c8],rbp
  922e91:	00 
  922e92:	4c 89 ac 24 d0 01 00 	mov    QWORD PTR [rsp+0x1d0],r13
  922e99:	00 
  922e9a:	4c 89 a4 24 d8 01 00 	mov    QWORD PTR [rsp+0x1d8],r12
  922ea1:	00 
  922ea2:	48 8b 84 24 d0 01 00 	mov    rax,QWORD PTR [rsp+0x1d0]
  922ea9:	00 
  922eaa:	48 89 84 24 e0 11 00 	mov    QWORD PTR [rsp+0x11e0],rax
  922eb1:	00 
  922eb2:	48 8b 84 24 d8 01 00 	mov    rax,QWORD PTR [rsp+0x1d8]
  922eb9:	00 
  922eba:	48 89 84 24 e8 11 00 	mov    QWORD PTR [rsp+0x11e8],rax
  922ec1:	00 
  922ec2:	48 8b 84 24 c0 01 00 	mov    rax,QWORD PTR [rsp+0x1c0]
  922ec9:	00 
  922eca:	48 89 84 24 d0 11 00 	mov    QWORD PTR [rsp+0x11d0],rax
  922ed1:	00 
  922ed2:	48 8b 84 24 c8 01 00 	mov    rax,QWORD PTR [rsp+0x1c8]
  922ed9:	00 
  922eda:	48 89 84 24 d8 11 00 	mov    QWORD PTR [rsp+0x11d8],rax
  922ee1:	00 
  922ee2:	48 8d bc 24 60 18 00 	lea    rdi,[rsp+0x1860]
  922ee9:	00 
  922eea:	48 8d b4 24 d0 11 00 	lea    rsi,[rsp+0x11d0]
  922ef1:	00 
  922ef2:	e8 79 29 05 00       	call   975870 <hashbrown::map::HashMap<K,V,S,A>::insert>
  922ef7:	84 c0                	test   al,al
  922ef9:	0f 85 8f 2b 00 00    	jne    925a8e <future_backtest::RunnerCore::run_multi+0x34be>
  922eff:	48 8b 84 24 88 00 00 	mov    rax,QWORD PTR [rsp+0x88]
  922f06:	00 
  922f07:	80 b8 fb 07 00 00 00 	cmp    BYTE PTR [rax+0x7fb],0x0
  922f0e:	74 0e                	je     922f1e <future_backtest::RunnerCore::run_multi+0x94e>
  922f10:	80 b8 ff 07 00 00 01 	cmp    BYTE PTR [rax+0x7ff],0x1
  922f17:	75 1a                	jne    922f33 <future_backtest::RunnerCore::run_multi+0x963>
  922f19:	e9 92 2d 00 00       	jmp    925cb0 <future_backtest::RunnerCore::run_multi+0x36e0>
  922f1e:	48 8b 44 24 18       	mov    rax,QWORD PTR [rsp+0x18]
  922f23:	8b 70 48             	mov    esi,DWORD PTR [rax+0x48]
  922f26:	48 8d bc 24 e0 0e 00 	lea    rdi,[rsp+0xee0]
  922f2d:	00 
  922f2e:	e8 2d 0d 05 00       	call   973c60 <hashbrown::map::HashMap<K,V,S,A>::insert>
  922f33:	4c 8b b4 24 88 00 00 	mov    r14,QWORD PTR [rsp+0x88]
  922f3a:	00 
  922f3b:	49 8b 96 30 01 00 00 	mov    rdx,QWORD PTR [r14+0x130]
  922f42:	48 3b 93 30 01 00 00 	cmp    rdx,QWORD PTR [rbx+0x130]
  922f49:	0f 85 4c 05 00 00    	jne    92349b <future_backtest::RunnerCore::run_multi+0xecb>
  922f4f:	48 8b b3 28 01 00 00 	mov    rsi,QWORD PTR [rbx+0x128]
  922f56:	49 8b be 28 01 00 00 	mov    rdi,QWORD PTR [r14+0x128]
  922f5d:	ff 15 9d 8f fd 00    	call   QWORD PTR [rip+0xfd8f9d]        # 18fbf00 <bcmp@GLIBC_2.2.5>
  922f63:	85 c0                	test   eax,eax
  922f65:	0f 85 30 05 00 00    	jne    92349b <future_backtest::RunnerCore::run_multi+0xecb>
  922f6b:	49 8b 96 78 01 00 00 	mov    rdx,QWORD PTR [r14+0x178]
  922f72:	48 3b 93 78 01 00 00 	cmp    rdx,QWORD PTR [rbx+0x178]
  922f79:	0f 85 1c 05 00 00    	jne    92349b <future_backtest::RunnerCore::run_multi+0xecb>
  922f7f:	48 8b b3 70 01 00 00 	mov    rsi,QWORD PTR [rbx+0x170]
  922f86:	49 8b be 70 01 00 00 	mov    rdi,QWORD PTR [r14+0x170]
  922f8d:	ff 15 6d 8f fd 00    	call   QWORD PTR [rip+0xfd8f6d]        # 18fbf00 <bcmp@GLIBC_2.2.5>
  922f93:	85 c0                	test   eax,eax
  922f95:	0f 85 00 05 00 00    	jne    92349b <future_backtest::RunnerCore::run_multi+0xecb>
  922f9b:	41 0f b6 86 f9 07 00 	movzx  eax,BYTE PTR [r14+0x7f9]
  922fa2:	00 
  922fa3:	3a 83 f9 07 00 00    	cmp    al,BYTE PTR [rbx+0x7f9]
  922fa9:	0f 85 ec 04 00 00    	jne    92349b <future_backtest::RunnerCore::run_multi+0xecb>
  922faf:	41 0f b6 86 f4 07 00 	movzx  eax,BYTE PTR [r14+0x7f4]
  922fb6:	00 
  922fb7:	3a 83 f4 07 00 00    	cmp    al,BYTE PTR [rbx+0x7f4]
  922fbd:	0f 85 d8 04 00 00    	jne    92349b <future_backtest::RunnerCore::run_multi+0xecb>
  922fc3:	4d 8b a6 c0 06 00 00 	mov    r12,QWORD PTR [r14+0x6c0]
  922fca:	4c 89 e0             	mov    rax,r12
  922fcd:	48 b9 ff ff ff ff ff 	movabs rcx,0x7fffffffffffffff
  922fd4:	ff ff 7f 
  922fd7:	48 21 c8             	and    rax,rcx
  922fda:	48 ba ff ff ff ff ff 	movabs rdx,0x7fefffffffffffff
  922fe1:	ff ef 7f 
  922fe4:	48 39 d0             	cmp    rax,rdx
  922fe7:	0f 8f ea 17 00 00    	jg     9247d7 <future_backtest::RunnerCore::run_multi+0x2207>
  922fed:	4d 8b ae c8 06 00 00 	mov    r13,QWORD PTR [r14+0x6c8]
  922ff4:	4c 89 e8             	mov    rax,r13
  922ff7:	48 21 c8             	and    rax,rcx
  922ffa:	48 ba 00 00 00 00 00 	movabs rdx,0x7ff0000000000000
  923001:	00 f0 7f 
  923004:	48 39 d0             	cmp    rax,rdx
  923007:	0f 8d ca 17 00 00    	jge    9247d7 <future_backtest::RunnerCore::run_multi+0x2207>
  92300d:	49 8b 96 d8 03 00 00 	mov    rdx,QWORD PTR [r14+0x3d8]
  923014:	48 89 d0             	mov    rax,rdx
  923017:	48 21 c8             	and    rax,rcx
  92301a:	48 b9 ff ff ff ff ff 	movabs rcx,0x7fefffffffffffff
  923021:	ff ef 7f 
  923024:	48 39 c8             	cmp    rax,rcx
  923027:	0f 8f aa 17 00 00    	jg     9247d7 <future_backtest::RunnerCore::run_multi+0x2207>
  92302d:	48 89 54 24 70       	mov    QWORD PTR [rsp+0x70],rdx
  923032:	49 8d 76 10          	lea    rsi,[r14+0x10]
  923036:	48 8d bc 24 80 1b 00 	lea    rdi,[rsp+0x1b80]
  92303d:	00 
  92303e:	ff 15 74 a1 fd 00    	call   QWORD PTR [rip+0xfda174]        # 18fd1b8 <_DYNAMIC+0x18b8>
  923044:	48 8d bc 24 d0 11 00 	lea    rdi,[rsp+0x11d0]
  92304b:	00 
  92304c:	48 8b b4 24 80 00 00 	mov    rsi,QWORD PTR [rsp+0x80]
  923053:	00 
  923054:	ff 15 5e a1 fd 00    	call   QWORD PTR [rip+0xfda15e]        # 18fd1b8 <_DYNAMIC+0x18b8>
  92305a:	4c 8b b4 24 88 1b 00 	mov    r14,QWORD PTR [rsp+0x1b88]
  923061:	00 
  923062:	48 8b 94 24 90 1b 00 	mov    rdx,QWORD PTR [rsp+0x1b90]
  923069:	00 
  92306a:	48 8b ac 24 d8 11 00 	mov    rbp,QWORD PTR [rsp+0x11d8]
  923071:	00 
  923072:	48 3b 94 24 e0 11 00 	cmp    rdx,QWORD PTR [rsp+0x11e0]
  923079:	00 
  92307a:	0f 85 9c 18 00 00    	jne    92491c <future_backtest::RunnerCore::run_multi+0x234c>
  923080:	4c 89 f7             	mov    rdi,r14
  923083:	48 89 ee             	mov    rsi,rbp
  923086:	ff 15 74 8e fd 00    	call   QWORD PTR [rip+0xfd8e74]        # 18fbf00 <bcmp@GLIBC_2.2.5>
  92308c:	85 c0                	test   eax,eax
  92308e:	0f 85 88 18 00 00    	jne    92491c <future_backtest::RunnerCore::run_multi+0x234c>
  923094:	48 8b b4 24 d0 11 00 	mov    rsi,QWORD PTR [rsp+0x11d0]
  92309b:	00 
  92309c:	48 85 f6             	test   rsi,rsi
  92309f:	74 0e                	je     9230af <future_backtest::RunnerCore::run_multi+0xadf>
  9230a1:	ba 01 00 00 00       	mov    edx,0x1
  9230a6:	48 89 ef             	mov    rdi,rbp
  9230a9:	ff 15 71 8a fd 00    	call   QWORD PTR [rip+0xfd8a71]        # 18fbb20 <_DYNAMIC+0x220>
  9230af:	48 8b b4 24 80 1b 00 	mov    rsi,QWORD PTR [rsp+0x1b80]
  9230b6:	00 
  9230b7:	48 85 f6             	test   rsi,rsi
  9230ba:	74 0e                	je     9230ca <future_backtest::RunnerCore::run_multi+0xafa>
  9230bc:	ba 01 00 00 00       	mov    edx,0x1
  9230c1:	4c 89 f7             	mov    rdi,r14
  9230c4:	ff 15 56 8a fd 00    	call   QWORD PTR [rip+0xfd8a56]        # 18fbb20 <_DYNAMIC+0x220>
  9230ca:	4c 39 a3 c0 06 00 00 	cmp    QWORD PTR [rbx+0x6c0],r12
  9230d1:	48 8b 94 24 88 00 00 	mov    rdx,QWORD PTR [rsp+0x88]
  9230d8:	00 
  9230d9:	0f 85 73 18 00 00    	jne    924952 <future_backtest::RunnerCore::run_multi+0x2382>
  9230df:	4c 39 ab c8 06 00 00 	cmp    QWORD PTR [rbx+0x6c8],r13
  9230e6:	0f 85 66 18 00 00    	jne    924952 <future_backtest::RunnerCore::run_multi+0x2382>
  9230ec:	48 8b 44 24 70       	mov    rax,QWORD PTR [rsp+0x70]
  9230f1:	48 39 83 d8 03 00 00 	cmp    QWORD PTR [rbx+0x3d8],rax
  9230f8:	0f 85 54 18 00 00    	jne    924952 <future_backtest::RunnerCore::run_multi+0x2382>
  9230fe:	48 8b 8a 18 01 00 00 	mov    rcx,QWORD PTR [rdx+0x118]
  923105:	48 83 f9 01          	cmp    rcx,0x1
  923109:	48 89 c8             	mov    rax,rcx
  92310c:	48 83 d0 00          	adc    rax,0x0
  923110:	48 85 c9             	test   rcx,rcx
  923113:	74 09                	je     92311e <future_backtest::RunnerCore::run_multi+0xb4e>
  923115:	4c 8b b2 10 01 00 00 	mov    r14,QWORD PTR [rdx+0x110]
  92311c:	eb 07                	jmp    923125 <future_backtest::RunnerCore::run_multi+0xb55>
  92311e:	4c 8d b2 f0 00 00 00 	lea    r14,[rdx+0xf0]
  923125:	4c 8b ac 24 c8 00 00 	mov    r13,QWORD PTR [rsp+0xc8]
  92312c:	00 
  92312d:	48 81 c2 08 08 00 00 	add    rdx,0x808
  923134:	48 89 94 24 88 00 00 	mov    QWORD PTR [rsp+0x88],rdx
  92313b:	00 
  92313c:	49 ff c5             	inc    r13
  92313f:	48 8b 4c 24 18       	mov    rcx,QWORD PTR [rsp+0x18]
  923144:	8b 69 48             	mov    ebp,DWORD PTR [rcx+0x48]
  923147:	48 c1 e0 03          	shl    rax,0x3
  92314b:	4c 8d 24 40          	lea    r12,[rax+rax*2]
  92314f:	90                   	nop
  923150:	4d 85 e4             	test   r12,r12
  923153:	0f 84 74 02 00 00    	je     9233cd <future_backtest::RunnerCore::run_multi+0xdfd>
  923159:	49 8b 7e 08          	mov    rdi,QWORD PTR [r14+0x8]
  92315d:	49 8b 76 10          	mov    rsi,QWORD PTR [r14+0x10]
  923161:	ff 15 19 93 fd 00    	call   QWORD PTR [rip+0xfd9319]        # 18fc480 <_DYNAMIC+0xb80>
  923167:	49 83 c6 18          	add    r14,0x18
  92316b:	49 83 c4 e8          	add    r12,0xffffffffffffffe8
  92316f:	a8 01                	test   al,0x1
  923171:	74 dd                	je     923150 <future_backtest::RunnerCore::run_multi+0xb80>
  923173:	39 ea                	cmp    edx,ebp
  923175:	75 d9                	jne    923150 <future_backtest::RunnerCore::run_multi+0xb80>
  923177:	48 8b 8c 24 88 00 00 	mov    rcx,QWORD PTR [rsp+0x88]
  92317e:	00 
  92317f:	48 3b 8c 24 90 00 00 	cmp    rcx,QWORD PTR [rsp+0x90]
  923186:	00 
  923187:	0f 85 77 fc ff ff    	jne    922e04 <future_backtest::RunnerCore::run_multi+0x834>
  92318d:	48 8d bc 24 d0 11 00 	lea    rdi,[rsp+0x11d0]
  923194:	00 
  923195:	48 8d b4 24 10 06 00 	lea    rsi,[rsp+0x610]
  92319c:	00 
  92319d:	ff 15 ed 99 fd 00    	call   QWORD PTR [rip+0xfd99ed]        # 18fcb90 <_DYNAMIC+0x1290>
  9231a3:	48 8b 84 24 d0 11 00 	mov    rax,QWORD PTR [rsp+0x11d0]
  9231aa:	00 
  9231ab:	48 8b 8c 24 d8 11 00 	mov    rcx,QWORD PTR [rsp+0x11d8]
  9231b2:	00 
  9231b3:	31 d2                	xor    edx,edx
  9231b5:	48 89 c6             	mov    rsi,rax
  9231b8:	48 85 c0             	test   rax,rax
  9231bb:	0f 95 c2             	setne  dl
  9231be:	74 08                	je     9231c8 <future_backtest::RunnerCore::run_multi+0xbf8>
  9231c0:	48 8b b4 24 e0 11 00 	mov    rsi,QWORD PTR [rsp+0x11e0]
  9231c7:	00 
  9231c8:	48 89 94 24 d0 11 00 	mov    QWORD PTR [rsp+0x11d0],rdx
  9231cf:	00 
  9231d0:	48 c7 84 24 d8 11 00 	mov    QWORD PTR [rsp+0x11d8],0x0
  9231d7:	00 00 00 00 00 
  9231dc:	48 89 84 24 e0 11 00 	mov    QWORD PTR [rsp+0x11e0],rax
  9231e3:	00 
  9231e4:	48 89 8c 24 e8 11 00 	mov    QWORD PTR [rsp+0x11e8],rcx
  9231eb:	00 
  9231ec:	48 89 94 24 f0 11 00 	mov    QWORD PTR [rsp+0x11f0],rdx
  9231f3:	00 
  9231f4:	48 c7 84 24 f8 11 00 	mov    QWORD PTR [rsp+0x11f8],0x0
  9231fb:	00 00 00 00 00 
  923200:	48 89 84 24 00 12 00 	mov    QWORD PTR [rsp+0x1200],rax
  923207:	00 
  923208:	48 89 8c 24 08 12 00 	mov    QWORD PTR [rsp+0x1208],rcx
  92320f:	00 
  923210:	48 89 b4 24 10 12 00 	mov    QWORD PTR [rsp+0x1210],rsi
  923217:	00 
  923218:	4c 8d ac 24 d0 11 00 	lea    r13,[rsp+0x11d0]
  92321f:	00 
  923220:	4c 8d bc 24 00 05 00 	lea    r15,[rsp+0x500]
  923227:	00 
  923228:	e9 1b 2a 00 00       	jmp    925c48 <future_backtest::RunnerCore::run_multi+0x3678>
  92322d:	b0 01                	mov    al,0x1
  92322f:	89 84 24 c8 00 00 00 	mov    DWORD PTR [rsp+0xc8],eax
  923236:	e9 7f 2b 00 00       	jmp    925dba <future_backtest::RunnerCore::run_multi+0x37ea>
  92323b:	48 8d 4b 58          	lea    rcx,[rbx+0x58]
  92323f:	48 83 c3 70          	add    rbx,0x70
  923243:	4c 89 da             	mov    rdx,r11
  923246:	48 29 f2             	sub    rdx,rsi
  923249:	49 29 c3             	sub    r11,rax
  92324c:	48 8d 84 24 30 0e 00 	lea    rax,[rsp+0xe30]
  923253:	00 
  923254:	48 89 84 24 10 06 00 	mov    QWORD PTR [rsp+0x610],rax
  92325b:	00 
  92325c:	48 8b 35 75 8c fd 00 	mov    rsi,QWORD PTR [rip+0xfd8c75]        # 18fbed8 <_DYNAMIC+0x5d8>
  923263:	48 89 b4 24 18 06 00 	mov    QWORD PTR [rsp+0x618],rsi
  92326a:	00 
  92326b:	48 89 8c 24 20 06 00 	mov    QWORD PTR [rsp+0x620],rcx
  923272:	00 
  923273:	48 8d 05 e6 e7 fd ff 	lea    rax,[rip+0xfffffffffffde7e6]        # 901a60 <<alloc::string::String as core::fmt::Display>::fmt>
  92327a:	48 89 84 24 28 06 00 	mov    QWORD PTR [rsp+0x628],rax
  923281:	00 
  923282:	48 89 9c 24 30 06 00 	mov    QWORD PTR [rsp+0x630],rbx
  923289:	00 
  92328a:	48 89 84 24 38 06 00 	mov    QWORD PTR [rsp+0x638],rax
  923291:	00 
  923292:	48 8d 8c 24 e0 05 00 	lea    rcx,[rsp+0x5e0]
  923299:	00 
  92329a:	48 89 8c 24 40 06 00 	mov    QWORD PTR [rsp+0x640],rcx
  9232a1:	00 
  9232a2:	48 89 b4 24 48 06 00 	mov    QWORD PTR [rsp+0x648],rsi
  9232a9:	00 
  9232aa:	48 89 94 24 50 06 00 	mov    QWORD PTR [rsp+0x650],rdx
  9232b1:	00 
  9232b2:	48 89 84 24 58 06 00 	mov    QWORD PTR [rsp+0x658],rax
  9232b9:	00 
  9232ba:	4c 89 9c 24 60 06 00 	mov    QWORD PTR [rsp+0x660],r11
  9232c1:	00 
  9232c2:	48 89 84 24 68 06 00 	mov    QWORD PTR [rsp+0x668],rax
  9232c9:	00 
  9232ca:	48 8d 84 24 38 0e 00 	lea    rax,[rsp+0xe38]
  9232d1:	00 
  9232d2:	48 89 84 24 70 06 00 	mov    QWORD PTR [rsp+0x670],rax
  9232d9:	00 
  9232da:	48 8b 05 df 8f fd 00 	mov    rax,QWORD PTR [rip+0xfd8fdf]        # 18fc2c0 <_DYNAMIC+0x9c0>
  9232e1:	48 89 84 24 78 06 00 	mov    QWORD PTR [rsp+0x678],rax
  9232e8:	00 
  9232e9:	48 8d 05 38 ea f2 00 	lea    rax,[rip+0xf2ea38]        # 1851d28 <anon.609a31ba814f1e4156e50677fc366a7f.492.llvm.5215769359700358943+0x1638>
  9232f0:	48 89 84 24 d0 11 00 	mov    QWORD PTR [rsp+0x11d0],rax
  9232f7:	00 
  9232f8:	48 c7 84 24 d8 11 00 	mov    QWORD PTR [rsp+0x11d8],0x8
  9232ff:	00 08 00 00 00 
  923304:	48 c7 84 24 f0 11 00 	mov    QWORD PTR [rsp+0x11f0],0x0
  92330b:	00 00 00 00 00 
  923310:	48 8d 84 24 10 06 00 	lea    rax,[rsp+0x610]
  923317:	00 
  923318:	48 89 84 24 e0 11 00 	mov    QWORD PTR [rsp+0x11e0],rax
  92331f:	00 
  923320:	48 c7 84 24 e8 11 00 	mov    QWORD PTR [rsp+0x11e8],0x7
  923327:	00 07 00 00 00 
  92332c:	40 b5 01             	mov    bpl,0x1
  92332f:	48 8d bc 24 38 1b 00 	lea    rdi,[rsp+0x1b38]
  923336:	00 
  923337:	48 8d b4 24 d0 11 00 	lea    rsi,[rsp+0x11d0]
  92333e:	00 
  92333f:	ff 15 13 8d fd 00    	call   QWORD PTR [rip+0xfd8d13]        # 18fc058 <_DYNAMIC+0x758>
  923345:	40 b5 01             	mov    bpl,0x1
  923348:	48 8d bc 24 38 1b 00 	lea    rdi,[rsp+0x1b38]
  92334f:	00 
  923350:	e8 db ad 04 00       	call   96e130 <anyhow::error::<impl anyhow::Error>::msg>
  923355:	49 89 c7             	mov    r15,rax
  923358:	48 b8 00 00 00 00 00 	movabs rax,0x8000000000000000
  92335f:	00 00 80 
  923362:	48 39 84 24 f0 19 00 	cmp    QWORD PTR [rsp+0x19f0],rax
  923369:	00 
  92336a:	0f 84 4a 2a 00 00    	je     925dba <future_backtest::RunnerCore::run_multi+0x37ea>
  923370:	40 84 ed             	test   bpl,bpl
  923373:	0f 84 41 2a 00 00    	je     925dba <future_backtest::RunnerCore::run_multi+0x37ea>
  923379:	48 8d bc 24 f0 19 00 	lea    rdi,[rsp+0x19f0]
  923380:	00 
  923381:	e8 9a 97 fd ff       	call   8fcb20 <core::ptr::drop_in_place<future_backtest::MetaControl::config::MetaManifest>>
  923386:	48 8b 9c 24 a8 1a 00 	mov    rbx,QWORD PTR [rsp+0x1aa8]
  92338d:	00 
  92338e:	48 8b b4 24 c0 1a 00 	mov    rsi,QWORD PTR [rsp+0x1ac0]
  923395:	00 
  923396:	48 85 f6             	test   rsi,rsi
  923399:	0f 84 7c 01 00 00    	je     92351b <future_backtest::RunnerCore::run_multi+0xf4b>
  92339f:	48 8b bc 24 b8 1a 00 	mov    rdi,QWORD PTR [rsp+0x1ab8]
  9233a6:	00 
  9233a7:	31 c0                	xor    eax,eax
  9233a9:	48 39 df             	cmp    rdi,rbx
  9233ac:	48 0f 43 c3          	cmovae rax,rbx
  9233b0:	48 29 c7             	sub    rdi,rax
  9233b3:	48 89 d8             	mov    rax,rbx
  9233b6:	48 29 f8             	sub    rax,rdi
  9233b9:	49 89 f5             	mov    r13,rsi
  9233bc:	49 29 c5             	sub    r13,rax
  9233bf:	0f 86 8f 14 00 00    	jbe    924854 <future_backtest::RunnerCore::run_multi+0x2284>
  9233c5:	48 89 de             	mov    rsi,rbx
  9233c8:	e9 8d 14 00 00       	jmp    92485a <future_backtest::RunnerCore::run_multi+0x228a>
  9233cd:	48 8b 4c 24 18       	mov    rcx,QWORD PTR [rsp+0x18]
  9233d2:	48 89 8c 24 80 1b 00 	mov    QWORD PTR [rsp+0x1b80],rcx
  9233d9:	00 
  9233da:	48 83 c1 48          	add    rcx,0x48
  9233de:	48 8d 05 7b e6 fd ff 	lea    rax,[rip+0xfffffffffffde67b]        # 901a60 <<alloc::string::String as core::fmt::Display>::fmt>
  9233e5:	48 89 84 24 88 1b 00 	mov    QWORD PTR [rsp+0x1b88],rax
  9233ec:	00 
  9233ed:	48 89 8c 24 90 1b 00 	mov    QWORD PTR [rsp+0x1b90],rcx
  9233f4:	00 
  9233f5:	48 8b 05 04 8e fd 00 	mov    rax,QWORD PTR [rip+0xfd8e04]        # 18fc200 <_DYNAMIC+0x900>
  9233fc:	48 89 84 24 98 1b 00 	mov    QWORD PTR [rsp+0x1b98],rax
  923403:	00 
  923404:	48 8d 05 bd da f2 00 	lea    rax,[rip+0xf2dabd]        # 1850ec8 <anon.609a31ba814f1e4156e50677fc366a7f.492.llvm.5215769359700358943+0x7d8>
  92340b:	48 89 84 24 d0 11 00 	mov    QWORD PTR [rsp+0x11d0],rax
  923412:	00 
  923413:	48 c7 84 24 d8 11 00 	mov    QWORD PTR [rsp+0x11d8],0x3
  92341a:	00 03 00 00 00 
  92341f:	48 c7 84 24 f0 11 00 	mov    QWORD PTR [rsp+0x11f0],0x0
  923426:	00 00 00 00 00 
  92342b:	48 8d 84 24 80 1b 00 	lea    rax,[rsp+0x1b80]
  923432:	00 
  923433:	48 89 84 24 e0 11 00 	mov    QWORD PTR [rsp+0x11e0],rax
  92343a:	00 
  92343b:	48 c7 84 24 e8 11 00 	mov    QWORD PTR [rsp+0x11e8],0x2
  923442:	00 02 00 00 00 
  923447:	48 8d 9c 24 a8 19 00 	lea    rbx,[rsp+0x19a8]
  92344e:	00 
  92344f:	48 8d b4 24 d0 11 00 	lea    rsi,[rsp+0x11d0]
  923456:	00 
  923457:	48 89 df             	mov    rdi,rbx
  92345a:	ff 15 f8 8b fd 00    	call   QWORD PTR [rip+0xfd8bf8]        # 18fc058 <_DYNAMIC+0x758>
  923460:	e9 c3 28 00 00       	jmp    925d28 <future_backtest::RunnerCore::run_multi+0x3758>
  923465:	4d 85 ff             	test   r15,r15
  923468:	0f 84 b9 00 00 00    	je     923527 <future_backtest::RunnerCore::run_multi+0xf57>
  92346e:	ff 15 cc 86 fd 00    	call   QWORD PTR [rip+0xfd86cc]        # 18fbb40 <_DYNAMIC+0x240>
  923474:	41 bc 08 00 00 00    	mov    r12d,0x8
  92347a:	be 08 00 00 00       	mov    esi,0x8
  92347f:	4c 89 ff             	mov    rdi,r15
  923482:	ff 15 90 86 fd 00    	call   QWORD PTR [rip+0xfd8690]        # 18fbb18 <_DYNAMIC+0x218>
  923488:	48 85 c0             	test   rax,rax
  92348b:	0f 84 52 f8 ff ff    	je     922ce3 <future_backtest::RunnerCore::run_multi+0x713>
  923491:	4c 8b 64 24 68       	mov    r12,QWORD PTR [rsp+0x68]
  923496:	e9 94 00 00 00       	jmp    92352f <future_backtest::RunnerCore::run_multi+0xf5f>
  92349b:	48 8d 84 24 a0 03 00 	lea    rax,[rsp+0x3a0]
  9234a2:	00 
  9234a3:	48 89 84 24 80 1b 00 	mov    QWORD PTR [rsp+0x1b80],rax
  9234aa:	00 
  9234ab:	48 8b 05 26 8a fd 00 	mov    rax,QWORD PTR [rip+0xfd8a26]        # 18fbed8 <_DYNAMIC+0x5d8>
  9234b2:	48 89 84 24 88 1b 00 	mov    QWORD PTR [rsp+0x1b88],rax
  9234b9:	00 
  9234ba:	48 8d 05 57 da f2 00 	lea    rax,[rip+0xf2da57]        # 1850f18 <anon.609a31ba814f1e4156e50677fc366a7f.492.llvm.5215769359700358943+0x828>
  9234c1:	48 89 84 24 d0 11 00 	mov    QWORD PTR [rsp+0x11d0],rax
  9234c8:	00 
  9234c9:	48 c7 84 24 d8 11 00 	mov    QWORD PTR [rsp+0x11d8],0x2
  9234d0:	00 02 00 00 00 
  9234d5:	48 c7 84 24 f0 11 00 	mov    QWORD PTR [rsp+0x11f0],0x0
  9234dc:	00 00 00 00 00 
  9234e1:	48 8d 84 24 80 1b 00 	lea    rax,[rsp+0x1b80]
  9234e8:	00 
  9234e9:	48 89 84 24 e0 11 00 	mov    QWORD PTR [rsp+0x11e0],rax
  9234f0:	00 
  9234f1:	48 c7 84 24 e8 11 00 	mov    QWORD PTR [rsp+0x11e8],0x1
  9234f8:	00 01 00 00 00 
  9234fd:	48 8d 9c 24 60 0e 00 	lea    rbx,[rsp+0xe60]
  923504:	00 
  923505:	48 8d b4 24 d0 11 00 	lea    rsi,[rsp+0x11d0]
  92350c:	00 
  92350d:	48 89 df             	mov    rdi,rbx
  923510:	ff 15 42 8b fd 00    	call   QWORD PTR [rip+0xfd8b42]        # 18fc058 <_DYNAMIC+0x758>
  923516:	e9 0d 28 00 00       	jmp    925d28 <future_backtest::RunnerCore::run_multi+0x3758>
  92351b:	45 31 ed             	xor    r13d,r13d
  92351e:	31 f6                	xor    esi,esi
  923520:	31 ff                	xor    edi,edi
  923522:	e9 33 13 00 00       	jmp    92485a <future_backtest::RunnerCore::run_multi+0x228a>
  923527:	b8 08 00 00 00       	mov    eax,0x8
  92352c:	45 31 f6             	xor    r14d,r14d
  92352f:	4c 89 74 24 38       	mov    QWORD PTR [rsp+0x38],r14
  923534:	48 89 44 24 40       	mov    QWORD PTR [rsp+0x40],rax
  923539:	48 c7 44 24 48 00 00 	mov    QWORD PTR [rsp+0x48],0x0
  923540:	00 00 
  923542:	48 8b 84 24 e0 00 00 	mov    rax,QWORD PTR [rsp+0xe0]
  923549:	00 
  92354a:	48 85 c0             	test   rax,rax
  92354d:	0f 84 b7 05 00 00    	je     923b0a <future_backtest::RunnerCore::run_multi+0x153a>
  923553:	4c 8b b4 24 d8 00 00 	mov    r14,QWORD PTR [rsp+0xd8]
  92355a:	00 
  92355b:	48 89 c1             	mov    rcx,rax
  92355e:	48 c1 e1 0b          	shl    rcx,0xb
  923562:	48 8d 1c c1          	lea    rbx,[rcx+rax*8]
  923566:	4c 8d bc 24 10 06 00 	lea    r15,[rsp+0x610]
  92356d:	00 
  92356e:	4c 8d a4 24 d0 2a 00 	lea    r12,[rsp+0x2ad0]
  923575:	00 
  923576:	48 8b 2d 7b 89 fd 00 	mov    rbp,QWORD PTR [rip+0xfd897b]        # 18fbef8 <memcpy@GLIBC_2.14>
  92357d:	eb 2f                	jmp    9235ae <future_backtest::RunnerCore::run_multi+0xfde>
  92357f:	90                   	nop
  923580:	49 69 fd 28 15 00 00 	imul   rdi,r13,0x1528
  923587:	48 03 7c 24 40       	add    rdi,QWORD PTR [rsp+0x40]
  92358c:	ba 28 15 00 00       	mov    edx,0x1528
  923591:	4c 89 e6             	mov    rsi,r12
  923594:	ff d5                	call   rbp
  923596:	49 ff c5             	inc    r13
  923599:	4c 89 6c 24 48       	mov    QWORD PTR [rsp+0x48],r13
  92359e:	49 81 c6 08 08 00 00 	add    r14,0x808
  9235a5:	48 81 c3 f8 f7 ff ff 	add    rbx,0xfffffffffffff7f8
  9235ac:	74 79                	je     923627 <future_backtest::RunnerCore::run_multi+0x1057>
  9235ae:	48 8b 44 24 18       	mov    rax,QWORD PTR [rsp+0x18]
  9235b3:	48 ff 00             	inc    QWORD PTR [rax]
  9235b6:	0f 84 60 7f 00 00    	je     92b51c <future_backtest::RunnerCore::run_multi+0x8f4c>
  9235bc:	48 89 84 24 80 1b 00 	mov    QWORD PTR [rsp+0x1b80],rax
  9235c3:	00 
  9235c4:	4c 8b ac 24 88 00 00 	mov    r13,QWORD PTR [rsp+0x88]
  9235cb:	00 
  9235cc:	49 ff 45 00          	inc    QWORD PTR [r13+0x0]
  9235d0:	0f 84 46 7f 00 00    	je     92b51c <future_backtest::RunnerCore::run_multi+0x8f4c>
  9235d6:	4c 89 ac 24 d0 11 00 	mov    QWORD PTR [rsp+0x11d0],r13
  9235dd:	00 
  9235de:	4c 89 ff             	mov    rdi,r15
  9235e1:	4c 89 f6             	mov    rsi,r14
  9235e4:	e8 07 9b 00 00       	call   92d0f0 <<future_backtest::Config::config::StrategyConfig as core::clone::Clone>::clone>
  9235e9:	4c 89 e7             	mov    rdi,r12
  9235ec:	48 8b 74 24 18       	mov    rsi,QWORD PTR [rsp+0x18]
  9235f1:	4c 89 ea             	mov    rdx,r13
  9235f4:	4c 89 f9             	mov    rcx,r15
  9235f7:	45 31 c0             	xor    r8d,r8d
  9235fa:	ff 15 78 87 fd 00    	call   QWORD PTR [rip+0xfd8778]        # 18fbd78 <_DYNAMIC+0x478>
  923600:	4c 8b 6c 24 48       	mov    r13,QWORD PTR [rsp+0x48]
  923605:	4c 3b 6c 24 38       	cmp    r13,QWORD PTR [rsp+0x38]
  92360a:	0f 85 70 ff ff ff    	jne    923580 <future_backtest::RunnerCore::run_multi+0xfb0>
  923610:	48 8d 7c 24 38       	lea    rdi,[rsp+0x38]
  923615:	48 8d 35 c4 e6 f2 00 	lea    rsi,[rip+0xf2e6c4]        # 1851ce0 <anon.609a31ba814f1e4156e50677fc366a7f.492.llvm.5215769359700358943+0x15f0>
  92361c:	ff 15 96 94 fd 00    	call   QWORD PTR [rip+0xfd9496]        # 18fcab8 <_DYNAMIC+0x11b8>
  923622:	e9 59 ff ff ff       	jmp    923580 <future_backtest::RunnerCore::run_multi+0xfb0>
  923627:	48 8b 84 24 e0 00 00 	mov    rax,QWORD PTR [rsp+0xe0]
  92362e:	00 
  92362f:	48 85 c0             	test   rax,rax
  923632:	4c 8b 64 24 68       	mov    r12,QWORD PTR [rsp+0x68]
  923637:	0f 84 cd 04 00 00    	je     923b0a <future_backtest::RunnerCore::run_multi+0x153a>
  92363d:	4c 8b b4 24 d8 00 00 	mov    r14,QWORD PTR [rsp+0xd8]
  923644:	00 
  923645:	48 89 c1             	mov    rcx,rax
  923648:	48 c1 e1 0b          	shl    rcx,0xb
  92364c:	48 8d 04 c1          	lea    rax,[rcx+rax*8]
  923650:	4c 01 f0             	add    rax,r14
  923653:	48 89 84 24 90 00 00 	mov    QWORD PTR [rsp+0x90],rax
  92365a:	00 
  92365b:	49 8d 86 08 08 00 00 	lea    rax,[r14+0x808]
  923662:	4c 8d ac 24 f8 0e 00 	lea    r13,[rsp+0xef8]
  923669:	00 
  92366a:	48 8b 8c 24 88 00 00 	mov    rcx,QWORD PTR [rsp+0x88]
  923671:	00 
  923672:	48 8d 51 18          	lea    rdx,[rcx+0x18]
  923676:	48 89 94 24 80 00 00 	mov    QWORD PTR [rsp+0x80],rdx
  92367d:	00 
  92367e:	48 83 c1 48          	add    rcx,0x48
  923682:	48 89 4c 24 70       	mov    QWORD PTR [rsp+0x70],rcx
  923687:	48 8d ac 24 d0 11 00 	lea    rbp,[rsp+0x11d0]
  92368e:	00 
  92368f:	48 8b 1d a2 89 fd 00 	mov    rbx,QWORD PTR [rip+0xfd89a2]        # 18fc038 <_DYNAMIC+0x738>
  923696:	4c 8d bc 24 10 06 00 	lea    r15,[rsp+0x610]
  92369d:	00 
  92369e:	48 8d 0d 23 e6 f2 00 	lea    rcx,[rip+0xf2e623]        # 1851cc8 <anon.609a31ba814f1e4156e50677fc366a7f.492.llvm.5215769359700358943+0x15d8>
  9236a5:	48 89 8c 24 10 01 00 	mov    QWORD PTR [rsp+0x110],rcx
  9236ac:	00 
  9236ad:	0f 1f 00             	nop    DWORD PTR [rax]
  9236b0:	48 89 44 24 20       	mov    QWORD PTR [rsp+0x20],rax
  9236b5:	49 8d 76 58          	lea    rsi,[r14+0x58]
  9236b9:	48 89 ef             	mov    rdi,rbp
  9236bc:	48 8d 15 bd e5 f2 00 	lea    rdx,[rip+0xf2e5bd]        # 1851c80 <anon.609a31ba814f1e4156e50677fc366a7f.492.llvm.5215769359700358943+0x1590>
  9236c3:	ff d3                	call   rbx
  9236c5:	49 83 c6 70          	add    r14,0x70
  9236c9:	4c 89 ff             	mov    rdi,r15
  9236cc:	4c 89 f6             	mov    rsi,r14
  9236cf:	48 8d 15 c2 e5 f2 00 	lea    rdx,[rip+0xf2e5c2]        # 1851c98 <anon.609a31ba814f1e4156e50677fc366a7f.492.llvm.5215769359700358943+0x15a8>
  9236d6:	ff d3                	call   rbx
  9236d8:	48 8b 84 24 e0 11 00 	mov    rax,QWORD PTR [rsp+0x11e0]
  9236df:	00 
  9236e0:	48 89 84 24 f0 0e 00 	mov    QWORD PTR [rsp+0xef0],rax
  9236e7:	00 
  9236e8:	0f 10 84 24 d0 11 00 	movups xmm0,XMMWORD PTR [rsp+0x11d0]
  9236ef:	00 
  9236f0:	0f 29 84 24 e0 0e 00 	movaps XMMWORD PTR [rsp+0xee0],xmm0
  9236f7:	00 
  9236f8:	48 8b 84 24 20 06 00 	mov    rax,QWORD PTR [rsp+0x620]
  9236ff:	00 
  923700:	49 89 45 10          	mov    QWORD PTR [r13+0x10],rax
  923704:	f3 0f 6f 84 24 10 06 	movdqu xmm0,XMMWORD PTR [rsp+0x610]
  92370b:	00 00 
  92370d:	f3 41 0f 7f 45 00    	movdqu XMMWORD PTR [r13+0x0],xmm0
  923713:	48 8b 84 24 88 00 00 	mov    rax,QWORD PTR [rsp+0x88]
  92371a:	00 
  92371b:	48 83 78 10 00       	cmp    QWORD PTR [rax+0x10],0x0
  923720:	4c 8d b4 24 80 1b 00 	lea    r14,[rsp+0x1b80]
  923727:	00 
  923728:	0f 85 22 79 00 00    	jne    92b050 <future_backtest::RunnerCore::run_multi+0x8a80>
  92372e:	48 c7 40 10 ff ff ff 	mov    QWORD PTR [rax+0x10],0xffffffffffffffff
  923735:	ff 
  923736:	4c 89 f7             	mov    rdi,r14
  923739:	48 8d b4 24 e0 0e 00 	lea    rsi,[rsp+0xee0]
  923740:	00 
  923741:	48 8d 15 b8 b2 f2 00 	lea    rdx,[rip+0xf2b2b8]        # 184ea00 <anon.609a31ba814f1e4156e50677fc366a7f.99.llvm.5215769359700358943+0x18>
  923748:	ff d3                	call   rbx
  92374a:	48 8d bc 24 98 1b 00 	lea    rdi,[rsp+0x1b98]
  923751:	00 
  923752:	4c 89 ee             	mov    rsi,r13
  923755:	48 8d 15 a4 b2 f2 00 	lea    rdx,[rip+0xf2b2a4]        # 184ea00 <anon.609a31ba814f1e4156e50677fc366a7f.99.llvm.5215769359700358943+0x18>
  92375c:	ff d3                	call   rbx
  92375e:	48 8d 84 24 90 06 00 	lea    rax,[rsp+0x690]
  923765:	00 
  923766:	66 0f ef c0          	pxor   xmm0,xmm0
  92376a:	f3 0f 7f 40 10       	movdqu XMMWORD PTR [rax+0x10],xmm0
  92376f:	f3 0f 7f 00          	movdqu XMMWORD PTR [rax],xmm0
  923773:	48 b8 00 00 00 00 00 	movabs rax,0x8000000000000000
  92377a:	00 00 80 
  92377d:	48 89 84 24 78 06 00 	mov    QWORD PTR [rsp+0x678],rax
  923784:	00 
  923785:	48 c7 84 24 10 06 00 	mov    QWORD PTR [rsp+0x610],0x2
  92378c:	00 02 00 00 00 
  923791:	48 89 ef             	mov    rdi,rbp
  923794:	48 8b b4 24 80 00 00 	mov    rsi,QWORD PTR [rsp+0x80]
  92379b:	00 
  92379c:	4c 89 f2             	mov    rdx,r14
  92379f:	4c 89 f9             	mov    rcx,r15
  9237a2:	e8 b9 4b 05 00       	call   978360 <hashbrown::map::HashMap<K,V,S,A>::insert>
  9237a7:	48 8b 9c 24 d0 11 00 	mov    rbx,QWORD PTR [rsp+0x11d0]
  9237ae:	00 
  9237af:	48 83 fb 03          	cmp    rbx,0x3
  9237b3:	0f 84 37 01 00 00    	je     9238f0 <future_backtest::RunnerCore::run_multi+0x1320>
  9237b9:	48 8b b4 24 38 12 00 	mov    rsi,QWORD PTR [rsp+0x1238]
  9237c0:	00 
  9237c1:	48 b8 00 00 00 00 00 	movabs rax,0x8000000000000000
  9237c8:	00 00 80 
  9237cb:	48 39 c6             	cmp    rsi,rax
  9237ce:	74 18                	je     9237e8 <future_backtest::RunnerCore::run_multi+0x1218>
  9237d0:	48 85 f6             	test   rsi,rsi
  9237d3:	74 13                	je     9237e8 <future_backtest::RunnerCore::run_multi+0x1218>
  9237d5:	48 8b bc 24 40 12 00 	mov    rdi,QWORD PTR [rsp+0x1240]
  9237dc:	00 
  9237dd:	ba 01 00 00 00       	mov    edx,0x1
  9237e2:	ff 15 38 83 fd 00    	call   QWORD PTR [rip+0xfd8338]        # 18fbb20 <_DYNAMIC+0x220>
  9237e8:	83 fb 02             	cmp    ebx,0x2
  9237eb:	0f 84 ff 00 00 00    	je     9238f0 <future_backtest::RunnerCore::run_multi+0x1320>
  9237f1:	4c 8b bc 24 00 12 00 	mov    r15,QWORD PTR [rsp+0x1200]
  9237f8:	00 
  9237f9:	4d 85 ff             	test   r15,r15
  9237fc:	0f 84 ee 00 00 00    	je     9238f0 <future_backtest::RunnerCore::run_multi+0x1320>
  923802:	4c 8b b4 24 10 12 00 	mov    r14,QWORD PTR [rsp+0x1210]
  923809:	00 
  92380a:	4d 85 f6             	test   r14,r14
  92380d:	0f 84 8b 00 00 00    	je     92389e <future_backtest::RunnerCore::run_multi+0x12ce>
  923813:	4c 8b ac 24 f8 11 00 	mov    r13,QWORD PTR [rsp+0x11f8]
  92381a:	00 
  92381b:	66 41 0f 6f 45 00    	movdqa xmm0,XMMWORD PTR [r13+0x0]
  923821:	66 0f d7 e8          	pmovmskb ebp,xmm0
  923825:	f7 d5                	not    ebp
  923827:	49 8d 5d 10          	lea    rbx,[r13+0x10]
  92382b:	eb 12                	jmp    92383f <future_backtest::RunnerCore::run_multi+0x126f>
  92382d:	0f 1f 00             	nop    DWORD PTR [rax]
  923830:	49 ff ce             	dec    r14
  923833:	8d 45 ff             	lea    eax,[rbp-0x1]
  923836:	21 e8                	and    eax,ebp
  923838:	89 c5                	mov    ebp,eax
  92383a:	4d 85 f6             	test   r14,r14
  92383d:	74 5f                	je     92389e <future_backtest::RunnerCore::run_multi+0x12ce>
  92383f:	66 85 ed             	test   bp,bp
  923842:	75 29                	jne    92386d <future_backtest::RunnerCore::run_multi+0x129d>
  923844:	66 66 66 2e 0f 1f 84 	data16 data16 cs nop WORD PTR [rax+rax*1+0x0]
  92384b:	00 00 00 00 00 
  923850:	66 0f 6f 03          	movdqa xmm0,XMMWORD PTR [rbx]
  923854:	66 0f d7 e8          	pmovmskb ebp,xmm0
  923858:	49 81 c5 80 fd ff ff 	add    r13,0xfffffffffffffd80
  92385f:	48 83 c3 10          	add    rbx,0x10
  923863:	81 fd ff ff 00 00    	cmp    ebp,0xffff
  923869:	74 e5                	je     923850 <future_backtest::RunnerCore::run_multi+0x1280>
  92386b:	f7 d5                	not    ebp
  92386d:	f3 0f bc c5          	tzcnt  eax,ebp
  923871:	48 f7 d8             	neg    rax
  923874:	48 8d 04 80          	lea    rax,[rax+rax*4]
  923878:	49 8b 74 c5 d8       	mov    rsi,QWORD PTR [r13+rax*8-0x28]
  92387d:	48 85 f6             	test   rsi,rsi
  923880:	74 ae                	je     923830 <future_backtest::RunnerCore::run_multi+0x1260>
  923882:	48 8d 04 c5 00 00 00 	lea    rax,[rax*8+0x0]
  923889:	00 
  92388a:	4c 01 e8             	add    rax,r13
  92388d:	48 8b 78 e0          	mov    rdi,QWORD PTR [rax-0x20]
  923891:	ba 01 00 00 00       	mov    edx,0x1
  923896:	ff 15 84 82 fd 00    	call   QWORD PTR [rip+0xfd8284]        # 18fbb20 <_DYNAMIC+0x220>
  92389c:	eb 92                	jmp    923830 <future_backtest::RunnerCore::run_multi+0x1260>
  92389e:	4b 8d 04 bf          	lea    rax,[r15+r15*4]
  9238a2:	48 8d 04 c5 37 00 00 	lea    rax,[rax*8+0x37]
  9238a9:	00 
  9238aa:	48 83 e0 f0          	and    rax,0xfffffffffffffff0
  9238ae:	49 01 c7             	add    r15,rax
  9238b1:	49 83 c7 11          	add    r15,0x11
  9238b5:	4c 8d ac 24 f8 0e 00 	lea    r13,[rsp+0xef8]
  9238bc:	00 
  9238bd:	48 8d ac 24 d0 11 00 	lea    rbp,[rsp+0x11d0]
  9238c4:	00 
  9238c5:	4c 8d b4 24 80 1b 00 	lea    r14,[rsp+0x1b80]
  9238cc:	00 
  9238cd:	74 21                	je     9238f0 <future_backtest::RunnerCore::run_multi+0x1320>
  9238cf:	48 8b bc 24 f8 11 00 	mov    rdi,QWORD PTR [rsp+0x11f8]
  9238d6:	00 
  9238d7:	48 29 c7             	sub    rdi,rax
  9238da:	ba 10 00 00 00       	mov    edx,0x10
  9238df:	4c 89 fe             	mov    rsi,r15
  9238e2:	ff 15 38 82 fd 00    	call   QWORD PTR [rip+0xfd8238]        # 18fbb20 <_DYNAMIC+0x220>
  9238e8:	0f 1f 84 00 00 00 00 	nop    DWORD PTR [rax+rax*1+0x0]
  9238ef:	00 
  9238f0:	48 8b 84 24 88 00 00 	mov    rax,QWORD PTR [rsp+0x88]
  9238f7:	00 
  9238f8:	48 ff 40 10          	inc    QWORD PTR [rax+0x10]
  9238fc:	0f 85 3f 77 00 00    	jne    92b041 <future_backtest::RunnerCore::run_multi+0x8a71>
  923902:	48 c7 40 10 ff ff ff 	mov    QWORD PTR [rax+0x10],0xffffffffffffffff
  923909:	ff 
  92390a:	66 0f 6f 84 24 e0 0e 	movdqa xmm0,XMMWORD PTR [rsp+0xee0]
  923911:	00 00 
  923913:	66 0f 6f 8c 24 f0 0e 	movdqa xmm1,XMMWORD PTR [rsp+0xef0]
  92391a:	00 00 
  92391c:	66 0f 28 94 24 00 0f 	movapd xmm2,XMMWORD PTR [rsp+0xf00]
  923923:	00 00 
  923925:	66 0f 29 94 24 f0 11 	movapd XMMWORD PTR [rsp+0x11f0],xmm2
  92392c:	00 00 
  92392e:	66 0f 7f 8c 24 e0 11 	movdqa XMMWORD PTR [rsp+0x11e0],xmm1
  923935:	00 00 
  923937:	66 0f 7f 84 24 d0 11 	movdqa XMMWORD PTR [rsp+0x11d0],xmm0
  92393e:	00 00 
  923940:	41 80 7c 24 10 01    	cmp    BYTE PTR [r12+0x10],0x1
  923946:	4c 8d bc 24 10 06 00 	lea    r15,[rsp+0x610]
  92394d:	00 
  92394e:	0f 85 9c 01 00 00    	jne    923af0 <future_backtest::RunnerCore::run_multi+0x1520>
  923954:	49 8b 04 24          	mov    rax,QWORD PTR [r12]
  923958:	49 8b 54 24 08       	mov    rdx,QWORD PTR [r12+0x8]
  92395d:	48 8b 1d d4 86 fd 00 	mov    rbx,QWORD PTR [rip+0xfd86d4]        # 18fc038 <_DYNAMIC+0x738>
  923964:	48 8d 48 01          	lea    rcx,[rax+0x1]
  923968:	49 89 0c 24          	mov    QWORD PTR [r12],rcx
  92396c:	0f 10 05 dd bd f2 00 	movups xmm0,XMMWORD PTR [rip+0xf2bddd]        # 184f750 <anon.609a31ba814f1e4156e50677fc366a7f.248.llvm.5215769359700358943+0x90>
  923973:	0f 29 84 24 20 06 00 	movaps XMMWORD PTR [rsp+0x620],xmm0
  92397a:	00 
  92397b:	f3 0f 6f 05 bd bd f2 	movdqu xmm0,XMMWORD PTR [rip+0xf2bdbd]        # 184f740 <anon.609a31ba814f1e4156e50677fc366a7f.248.llvm.5215769359700358943+0x80>
  923982:	00 
  923983:	66 0f 7f 84 24 10 06 	movdqa XMMWORD PTR [rsp+0x610],xmm0
  92398a:	00 00 
  92398c:	48 89 84 24 30 06 00 	mov    QWORD PTR [rsp+0x630],rax
  923993:	00 
  923994:	48 89 94 24 38 06 00 	mov    QWORD PTR [rsp+0x638],rdx
  92399b:	00 
  92399c:	4c 89 f7             	mov    rdi,r14
  92399f:	48 8b 74 24 70       	mov    rsi,QWORD PTR [rsp+0x70]
  9239a4:	48 89 ea             	mov    rdx,rbp
  9239a7:	4c 89 f9             	mov    rcx,r15
  9239aa:	e8 61 69 05 00       	call   97a310 <hashbrown::map::HashMap<K,V,S,A>::insert>
  9239af:	48 8b ac 24 80 1b 00 	mov    rbp,QWORD PTR [rsp+0x1b80]
  9239b6:	00 
  9239b7:	48 85 ed             	test   rbp,rbp
  9239ba:	0f 84 f4 00 00 00    	je     923ab4 <future_backtest::RunnerCore::run_multi+0x14e4>
  9239c0:	4c 8b b4 24 88 1b 00 	mov    r14,QWORD PTR [rsp+0x1b88]
  9239c7:	00 
  9239c8:	4d 85 f6             	test   r14,r14
  9239cb:	0f 84 e3 00 00 00    	je     923ab4 <future_backtest::RunnerCore::run_multi+0x14e4>
  9239d1:	4c 8b ac 24 98 1b 00 	mov    r13,QWORD PTR [rsp+0x1b98]
  9239d8:	00 
  9239d9:	4d 85 ed             	test   r13,r13
  9239dc:	0f 84 8e 00 00 00    	je     923a70 <future_backtest::RunnerCore::run_multi+0x14a0>
  9239e2:	66 0f 6f 45 00       	movdqa xmm0,XMMWORD PTR [rbp+0x0]
  9239e7:	66 44 0f d7 e0       	pmovmskb r12d,xmm0
  9239ec:	41 f7 d4             	not    r12d
  9239ef:	48 8d 5d 10          	lea    rbx,[rbp+0x10]
  9239f3:	49 89 ef             	mov    r15,rbp
  9239f6:	eb 1b                	jmp    923a13 <future_backtest::RunnerCore::run_multi+0x1443>
  9239f8:	0f 1f 84 00 00 00 00 	nop    DWORD PTR [rax+rax*1+0x0]
  9239ff:	00 
  923a00:	49 ff cd             	dec    r13
  923a03:	41 8d 44 24 ff       	lea    eax,[r12-0x1]
  923a08:	44 21 e0             	and    eax,r12d
  923a0b:	41 89 c4             	mov    r12d,eax
  923a0e:	4d 85 ed             	test   r13,r13
  923a11:	74 5d                	je     923a70 <future_backtest::RunnerCore::run_multi+0x14a0>
  923a13:	66 45 85 e4          	test   r12w,r12w
  923a17:	75 27                	jne    923a40 <future_backtest::RunnerCore::run_multi+0x1470>
  923a19:	0f 1f 80 00 00 00 00 	nop    DWORD PTR [rax+0x0]
  923a20:	66 0f 6f 03          	movdqa xmm0,XMMWORD PTR [rbx]
  923a24:	66 44 0f d7 e0       	pmovmskb r12d,xmm0
  923a29:	49 81 c7 00 fe ff ff 	add    r15,0xfffffffffffffe00
  923a30:	48 83 c3 10          	add    rbx,0x10
  923a34:	41 81 fc ff ff 00 00 	cmp    r12d,0xffff
  923a3b:	74 e3                	je     923a20 <future_backtest::RunnerCore::run_multi+0x1450>
  923a3d:	41 f7 d4             	not    r12d
  923a40:	f3 41 0f bc cc       	tzcnt  ecx,r12d
  923a45:	c1 e1 05             	shl    ecx,0x5
  923a48:	4c 89 f8             	mov    rax,r15
  923a4b:	48 29 c8             	sub    rax,rcx
  923a4e:	48 8b 70 e0          	mov    rsi,QWORD PTR [rax-0x20]
  923a52:	48 85 f6             	test   rsi,rsi
  923a55:	74 a9                	je     923a00 <future_backtest::RunnerCore::run_multi+0x1430>
  923a57:	48 8b 78 e8          	mov    rdi,QWORD PTR [rax-0x18]
  923a5b:	ba 01 00 00 00       	mov    edx,0x1
  923a60:	ff 15 ba 80 fd 00    	call   QWORD PTR [rip+0xfd80ba]        # 18fbb20 <_DYNAMIC+0x220>
  923a66:	eb 98                	jmp    923a00 <future_backtest::RunnerCore::run_multi+0x1430>
  923a68:	0f 1f 84 00 00 00 00 	nop    DWORD PTR [rax+rax*1+0x0]
  923a6f:	00 
  923a70:	4c 89 f0             	mov    rax,r14
  923a73:	48 c1 e0 05          	shl    rax,0x5
  923a77:	49 01 c6             	add    r14,rax
  923a7a:	49 83 c6 31          	add    r14,0x31
  923a7e:	4c 8b 64 24 68       	mov    r12,QWORD PTR [rsp+0x68]
  923a83:	4c 8d ac 24 f8 0e 00 	lea    r13,[rsp+0xef8]
  923a8a:	00 
  923a8b:	48 8b 1d a6 85 fd 00 	mov    rbx,QWORD PTR [rip+0xfd85a6]        # 18fc038 <_DYNAMIC+0x738>
  923a92:	4c 8d bc 24 10 06 00 	lea    r15,[rsp+0x610]
  923a99:	00 
  923a9a:	74 18                	je     923ab4 <future_backtest::RunnerCore::run_multi+0x14e4>
  923a9c:	48 29 c5             	sub    rbp,rax
  923a9f:	48 83 c5 e0          	add    rbp,0xffffffffffffffe0
  923aa3:	ba 10 00 00 00       	mov    edx,0x10
  923aa8:	48 89 ef             	mov    rdi,rbp
  923aab:	4c 89 f6             	mov    rsi,r14
  923aae:	ff 15 6c 80 fd 00    	call   QWORD PTR [rip+0xfd806c]        # 18fbb20 <_DYNAMIC+0x220>
  923ab4:	48 8b 84 24 88 00 00 	mov    rax,QWORD PTR [rsp+0x88]
  923abb:	00 
  923abc:	48 ff 40 10          	inc    QWORD PTR [rax+0x10]
  923ac0:	48 8b 4c 24 20       	mov    rcx,QWORD PTR [rsp+0x20]
  923ac5:	48 8d 81 08 08 00 00 	lea    rax,[rcx+0x808]
  923acc:	48 3b 8c 24 90 00 00 	cmp    rcx,QWORD PTR [rsp+0x90]
  923ad3:	00 
  923ad4:	48 0f 44 c1          	cmove  rax,rcx
  923ad8:	48 8d ac 24 d0 11 00 	lea    rbp,[rsp+0x11d0]
  923adf:	00 
  923ae0:	74 28                	je     923b0a <future_backtest::RunnerCore::run_multi+0x153a>
  923ae2:	49 89 ce             	mov    r14,rcx
  923ae5:	48 85 c9             	test   rcx,rcx
  923ae8:	0f 85 c2 fb ff ff    	jne    9236b0 <future_backtest::RunnerCore::run_multi+0x10e0>
  923aee:	eb 1a                	jmp    923b0a <future_backtest::RunnerCore::run_multi+0x153a>
  923af0:	ff 15 52 85 fd 00    	call   QWORD PTR [rip+0xfd8552]        # 18fc048 <_DYNAMIC+0x748>
  923af6:	49 89 04 24          	mov    QWORD PTR [r12],rax
  923afa:	49 89 54 24 08       	mov    QWORD PTR [r12+0x8],rdx
  923aff:	41 c6 44 24 10 01    	mov    BYTE PTR [r12+0x10],0x1
  923b05:	e9 53 fe ff ff       	jmp    92395d <future_backtest::RunnerCore::run_multi+0x138d>
  923b0a:	41 80 7c 24 10 01    	cmp    BYTE PTR [r12+0x10],0x1
  923b10:	0f 85 1a 5d 00 00    	jne    929830 <future_backtest::RunnerCore::run_multi+0x7260>
  923b16:	49 8b 04 24          	mov    rax,QWORD PTR [r12]
  923b1a:	49 8b 54 24 08       	mov    rdx,QWORD PTR [r12+0x8]
  923b1f:	48 8d 48 01          	lea    rcx,[rax+0x1]
  923b23:	49 89 0c 24          	mov    QWORD PTR [r12],rcx
  923b27:	0f 10 05 22 bc f2 00 	movups xmm0,XMMWORD PTR [rip+0xf2bc22]        # 184f750 <anon.609a31ba814f1e4156e50677fc366a7f.248.llvm.5215769359700358943+0x90>
  923b2e:	0f 29 84 24 70 0e 00 	movaps XMMWORD PTR [rsp+0xe70],xmm0
  923b35:	00 
  923b36:	66 0f 10 05 02 bc f2 	movupd xmm0,XMMWORD PTR [rip+0xf2bc02]        # 184f740 <anon.609a31ba814f1e4156e50677fc366a7f.248.llvm.5215769359700358943+0x80>
  923b3d:	00 
  923b3e:	66 0f 29 84 24 60 0e 	movapd XMMWORD PTR [rsp+0xe60],xmm0
  923b45:	00 00 
  923b47:	48 89 84 24 80 0e 00 	mov    QWORD PTR [rsp+0xe80],rax
  923b4e:	00 
  923b4f:	48 89 94 24 88 0e 00 	mov    QWORD PTR [rsp+0xe88],rdx
  923b56:	00 
  923b57:	48 8b 9c 24 d8 00 00 	mov    rbx,QWORD PTR [rsp+0xd8]
  923b5e:	00 
  923b5f:	48 8b 84 24 e0 00 00 	mov    rax,QWORD PTR [rsp+0xe0]
  923b66:	00 
  923b67:	48 85 c0             	test   rax,rax
  923b6a:	0f 84 17 0c 00 00    	je     924787 <future_backtest::RunnerCore::run_multi+0x21b7>
  923b70:	48 89 c1             	mov    rcx,rax
  923b73:	48 c1 e1 0b          	shl    rcx,0xb
  923b77:	48 8d 04 c1          	lea    rax,[rcx+rax*8]
  923b7b:	48 01 d8             	add    rax,rbx
  923b7e:	48 89 84 24 90 00 00 	mov    QWORD PTR [rsp+0x90],rax
  923b85:	00 
  923b86:	48 8d 83 08 08 00 00 	lea    rax,[rbx+0x808]
  923b8d:	4c 8b 35 a4 84 fd 00 	mov    r14,QWORD PTR [rip+0xfd84a4]        # 18fc038 <_DYNAMIC+0x738>
  923b94:	48 8d 15 65 cf f2 00 	lea    rdx,[rip+0xf2cf65]        # 1850b00 <anon.609a31ba814f1e4156e50677fc366a7f.492.llvm.5215769359700358943+0x410>
  923b9b:	48 8d bc 24 00 05 00 	lea    rdi,[rsp+0x500]
  923ba2:	00 
  923ba3:	48 83 bb 18 01 00 00 	cmp    QWORD PTR [rbx+0x118],0x0
  923baa:	00 
  923bab:	48 89 5c 24 20       	mov    QWORD PTR [rsp+0x20],rbx
  923bb0:	48 89 44 24 70       	mov    QWORD PTR [rsp+0x70],rax
  923bb5:	74 29                	je     923be0 <future_backtest::RunnerCore::run_multi+0x1610>
  923bb7:	48 8d b3 08 01 00 00 	lea    rsi,[rbx+0x108]
  923bbe:	e8 bd 54 fa ff       	call   8c9080 <<alloc::vec::Vec<T,A> as core::clone::Clone>::clone>
  923bc3:	48 8b 84 24 08 05 00 	mov    rax,QWORD PTR [rsp+0x508]
  923bca:	00 
  923bcb:	48 89 84 24 80 00 00 	mov    QWORD PTR [rsp+0x80],rax
  923bd2:	00 
  923bd3:	4c 8b b4 24 10 05 00 	mov    r14,QWORD PTR [rsp+0x510]
  923bda:	00 
  923bdb:	e9 87 00 00 00       	jmp    923c67 <future_backtest::RunnerCore::run_multi+0x1697>
  923be0:	ff 15 5a 7f fd 00    	call   QWORD PTR [rip+0xfd7f5a]        # 18fbb40 <_DYNAMIC+0x240>
  923be6:	bf 18 00 00 00       	mov    edi,0x18
  923beb:	be 08 00 00 00       	mov    esi,0x8
  923bf0:	ff 15 22 7f fd 00    	call   QWORD PTR [rip+0xfd7f22]        # 18fbb18 <_DYNAMIC+0x218>
  923bf6:	48 89 84 24 80 00 00 	mov    QWORD PTR [rsp+0x80],rax
  923bfd:	00 
  923bfe:	48 85 c0             	test   rax,rax
  923c01:	0f 84 aa 62 00 00    	je     929eb1 <future_backtest::RunnerCore::run_multi+0x78e1>
  923c07:	48 8d b3 f0 00 00 00 	lea    rsi,[rbx+0xf0]
  923c0e:	48 8d bc 24 10 06 00 	lea    rdi,[rsp+0x610]
  923c15:	00 
  923c16:	48 8d 15 cb ce f2 00 	lea    rdx,[rip+0xf2cecb]        # 1850ae8 <anon.609a31ba814f1e4156e50677fc366a7f.492.llvm.5215769359700358943+0x3f8>
  923c1d:	41 ff d6             	call   r14
  923c20:	48 8b 84 24 20 06 00 	mov    rax,QWORD PTR [rsp+0x620]
  923c27:	00 
  923c28:	48 8b 8c 24 80 00 00 	mov    rcx,QWORD PTR [rsp+0x80]
  923c2f:	00 
  923c30:	48 89 41 10          	mov    QWORD PTR [rcx+0x10],rax
  923c34:	66 0f 10 84 24 10 06 	movupd xmm0,XMMWORD PTR [rsp+0x610]
  923c3b:	00 00 
  923c3d:	66 0f 11 01          	movupd XMMWORD PTR [rcx],xmm0
  923c41:	48 c7 84 24 00 05 00 	mov    QWORD PTR [rsp+0x500],0x1
  923c48:	00 01 00 00 00 
  923c4d:	48 89 8c 24 08 05 00 	mov    QWORD PTR [rsp+0x508],rcx
  923c54:	00 
  923c55:	48 c7 84 24 10 05 00 	mov    QWORD PTR [rsp+0x510],0x1
  923c5c:	00 01 00 00 00 
  923c61:	41 be 01 00 00 00    	mov    r14d,0x1
  923c67:	48 c7 84 24 b0 10 00 	mov    QWORD PTR [rsp+0x10b0],0x0
  923c6e:	00 00 00 00 00 
  923c73:	48 c7 84 24 b8 10 00 	mov    QWORD PTR [rsp+0x10b8],0x8
  923c7a:	00 08 00 00 00 
  923c7f:	48 c7 84 24 c0 10 00 	mov    QWORD PTR [rsp+0x10c0],0x0
  923c86:	00 00 00 00 00 
  923c8b:	48 c7 84 24 a0 03 00 	mov    QWORD PTR [rsp+0x3a0],0x0
  923c92:	00 00 00 00 00 
  923c97:	48 c7 84 24 a8 03 00 	mov    QWORD PTR [rsp+0x3a8],0x8
  923c9e:	00 08 00 00 00 
  923ca3:	48 c7 84 24 b0 03 00 	mov    QWORD PTR [rsp+0x3b0],0x0
  923caa:	00 00 00 00 00 
  923caf:	4d 85 f6             	test   r14,r14
  923cb2:	0f 84 c0 01 00 00    	je     923e78 <future_backtest::RunnerCore::run_multi+0x18a8>
  923cb8:	48 8b 44 24 20       	mov    rax,QWORD PTR [rsp+0x20]
  923cbd:	4c 8d a8 20 01 00 00 	lea    r13,[rax+0x120]
  923cc4:	48 8d a8 38 01 00 00 	lea    rbp,[rax+0x138]
  923ccb:	4a 8d 04 f5 00 00 00 	lea    rax,[r14*8+0x0]
  923cd2:	00 
  923cd3:	4c 8d 24 40          	lea    r12,[rax+rax*2]
  923cd7:	4c 8b bc 24 80 00 00 	mov    r15,QWORD PTR [rsp+0x80]
  923cde:	00 
  923cdf:	eb 4f                	jmp    923d30 <future_backtest::RunnerCore::run_multi+0x1760>
  923ce1:	66 66 66 66 66 66 2e 	data16 data16 data16 data16 data16 cs nop WORD PTR [rax+rax*1+0x0]
  923ce8:	0f 1f 84 00 00 00 00 
  923cef:	00 
  923cf0:	48 8b 84 24 a8 03 00 	mov    rax,QWORD PTR [rsp+0x3a8]
  923cf7:	00 
  923cf8:	48 8d 0c 5b          	lea    rcx,[rbx+rbx*2]
  923cfc:	48 8b 94 24 d0 01 00 	mov    rdx,QWORD PTR [rsp+0x1d0]
  923d03:	00 
  923d04:	48 89 54 c8 10       	mov    QWORD PTR [rax+rcx*8+0x10],rdx
  923d09:	66 0f 10 84 24 c0 01 	movupd xmm0,XMMWORD PTR [rsp+0x1c0]
  923d10:	00 00 
  923d12:	66 0f 11 04 c8       	movupd XMMWORD PTR [rax+rcx*8],xmm0
  923d17:	48 ff c3             	inc    rbx
  923d1a:	48 89 9c 24 b0 03 00 	mov    QWORD PTR [rsp+0x3b0],rbx
  923d21:	00 
  923d22:	49 83 c7 18          	add    r15,0x18
  923d26:	49 83 c4 e8          	add    r12,0xffffffffffffffe8
  923d2a:	0f 84 48 01 00 00    	je     923e78 <future_backtest::RunnerCore::run_multi+0x18a8>
  923d30:	4c 89 bc 24 40 01 00 	mov    QWORD PTR [rsp+0x140],r15
  923d37:	00 
  923d38:	48 8d bc 24 10 06 00 	lea    rdi,[rsp+0x610]
  923d3f:	00 
  923d40:	4c 89 fe             	mov    rsi,r15
  923d43:	48 8d 15 5e ce f2 00 	lea    rdx,[rip+0xf2ce5e]        # 1850ba8 <anon.609a31ba814f1e4156e50677fc366a7f.492.llvm.5215769359700358943+0x4b8>
  923d4a:	ff 15 e8 82 fd 00    	call   QWORD PTR [rip+0xfd82e8]        # 18fc038 <_DYNAMIC+0x738>
  923d50:	48 8b 9c 24 c0 10 00 	mov    rbx,QWORD PTR [rsp+0x10c0]
  923d57:	00 
  923d58:	48 3b 9c 24 b0 10 00 	cmp    rbx,QWORD PTR [rsp+0x10b0]
  923d5f:	00 
  923d60:	75 15                	jne    923d77 <future_backtest::RunnerCore::run_multi+0x17a7>
  923d62:	48 8d bc 24 b0 10 00 	lea    rdi,[rsp+0x10b0]
  923d69:	00 
  923d6a:	48 8d 35 4f ce f2 00 	lea    rsi,[rip+0xf2ce4f]        # 1850bc0 <anon.609a31ba814f1e4156e50677fc366a7f.492.llvm.5215769359700358943+0x4d0>
  923d71:	ff 15 09 88 fd 00    	call   QWORD PTR [rip+0xfd8809]        # 18fc580 <_DYNAMIC+0xc80>
  923d77:	48 8b 84 24 b8 10 00 	mov    rax,QWORD PTR [rsp+0x10b8]
  923d7e:	00 
  923d7f:	48 8d 0c 5b          	lea    rcx,[rbx+rbx*2]
  923d83:	48 8b 94 24 20 06 00 	mov    rdx,QWORD PTR [rsp+0x620]
  923d8a:	00 
  923d8b:	48 89 54 c8 10       	mov    QWORD PTR [rax+rcx*8+0x10],rdx
  923d90:	66 0f 10 84 24 10 06 	movupd xmm0,XMMWORD PTR [rsp+0x610]
  923d97:	00 00 
  923d99:	66 0f 11 04 c8       	movupd XMMWORD PTR [rax+rcx*8],xmm0
  923d9e:	48 ff c3             	inc    rbx
  923da1:	48 89 9c 24 c0 10 00 	mov    QWORD PTR [rsp+0x10c0],rbx
  923da8:	00 
  923da9:	48 89 ac 24 10 06 00 	mov    QWORD PTR [rsp+0x610],rbp
  923db0:	00 
  923db1:	48 8d 05 a8 dc fd ff 	lea    rax,[rip+0xfffffffffffddca8]        # 901a60 <<alloc::string::String as core::fmt::Display>::fmt>
  923db8:	48 89 84 24 18 06 00 	mov    QWORD PTR [rsp+0x618],rax
  923dbf:	00 
  923dc0:	48 8d 8c 24 40 01 00 	lea    rcx,[rsp+0x140]
  923dc7:	00 
  923dc8:	48 89 8c 24 20 06 00 	mov    QWORD PTR [rsp+0x620],rcx
  923dcf:	00 
  923dd0:	48 8d 0d 99 88 f2 ff 	lea    rcx,[rip+0xfffffffffff28899]        # 84c670 <<&T as core::fmt::Display>::fmt>
  923dd7:	48 89 8c 24 28 06 00 	mov    QWORD PTR [rsp+0x628],rcx
  923dde:	00 
  923ddf:	4c 89 ac 24 30 06 00 	mov    QWORD PTR [rsp+0x630],r13
  923de6:	00 
  923de7:	48 89 84 24 38 06 00 	mov    QWORD PTR [rsp+0x638],rax
  923dee:	00 
  923def:	48 8d 05 fa c0 f2 00 	lea    rax,[rip+0xf2c0fa]        # 184fef0 <anon.609a31ba814f1e4156e50677fc366a7f.248.llvm.5215769359700358943+0x830>
  923df6:	48 89 84 24 d0 11 00 	mov    QWORD PTR [rsp+0x11d0],rax
  923dfd:	00 
  923dfe:	48 c7 84 24 d8 11 00 	mov    QWORD PTR [rsp+0x11d8],0x3
  923e05:	00 03 00 00 00 
  923e0a:	48 c7 84 24 f0 11 00 	mov    QWORD PTR [rsp+0x11f0],0x0
  923e11:	00 00 00 00 00 
  923e16:	48 8d 84 24 10 06 00 	lea    rax,[rsp+0x610]
  923e1d:	00 
  923e1e:	48 89 84 24 e0 11 00 	mov    QWORD PTR [rsp+0x11e0],rax
  923e25:	00 
  923e26:	48 c7 84 24 e8 11 00 	mov    QWORD PTR [rsp+0x11e8],0x3
  923e2d:	00 03 00 00 00 
  923e32:	48 8d bc 24 c0 01 00 	lea    rdi,[rsp+0x1c0]
  923e39:	00 
  923e3a:	48 8d b4 24 d0 11 00 	lea    rsi,[rsp+0x11d0]
  923e41:	00 
  923e42:	ff 15 10 82 fd 00    	call   QWORD PTR [rip+0xfd8210]        # 18fc058 <_DYNAMIC+0x758>
  923e48:	48 8b 9c 24 b0 03 00 	mov    rbx,QWORD PTR [rsp+0x3b0]
  923e4f:	00 
  923e50:	48 3b 9c 24 a0 03 00 	cmp    rbx,QWORD PTR [rsp+0x3a0]
  923e57:	00 
  923e58:	0f 85 92 fe ff ff    	jne    923cf0 <future_backtest::RunnerCore::run_multi+0x1720>
  923e5e:	48 8d bc 24 a0 03 00 	lea    rdi,[rsp+0x3a0]
  923e65:	00 
  923e66:	48 8d 35 6b cd f2 00 	lea    rsi,[rip+0xf2cd6b]        # 1850bd8 <anon.609a31ba814f1e4156e50677fc366a7f.492.llvm.5215769359700358943+0x4e8>
  923e6d:	ff 15 0d 87 fd 00    	call   QWORD PTR [rip+0xfd870d]        # 18fc580 <_DYNAMIC+0xc80>
  923e73:	e9 78 fe ff ff       	jmp    923cf0 <future_backtest::RunnerCore::run_multi+0x1720>
  923e78:	48 b8 00 00 00 00 00 	movabs rax,0x8000000000000000
  923e7f:	00 00 80 
  923e82:	48 8b 4c 24 20       	mov    rcx,QWORD PTR [rsp+0x20]
  923e87:	48 39 81 68 03 00 00 	cmp    QWORD PTR [rcx+0x368],rax
  923e8e:	0f 84 f4 01 00 00    	je     924088 <future_backtest::RunnerCore::run_multi+0x1ab8>
  923e94:	48 8b 44 24 20       	mov    rax,QWORD PTR [rsp+0x20]
  923e99:	48 05 68 03 00 00    	add    rax,0x368
  923e9f:	48 89 44 24 68       	mov    QWORD PTR [rsp+0x68],rax
  923ea4:	48 89 84 24 a8 19 00 	mov    QWORD PTR [rsp+0x19a8],rax
  923eab:	00 
  923eac:	48 8b 84 24 c0 10 00 	mov    rax,QWORD PTR [rsp+0x10c0]
  923eb3:	00 
  923eb4:	48 85 c0             	test   rax,rax
  923eb7:	74 51                	je     923f0a <future_backtest::RunnerCore::run_multi+0x193a>
  923eb9:	4c 8b a4 24 b8 10 00 	mov    r12,QWORD PTR [rsp+0x10b8]
  923ec0:	00 
  923ec1:	48 8b 4c 24 20       	mov    rcx,QWORD PTR [rsp+0x20]
  923ec6:	48 8b a9 70 03 00 00 	mov    rbp,QWORD PTR [rcx+0x370]
  923ecd:	4c 8b a9 78 03 00 00 	mov    r13,QWORD PTR [rcx+0x378]
  923ed4:	48 c1 e0 03          	shl    rax,0x3
  923ed8:	4c 8d 3c 40          	lea    r15,[rax+rax*2]
  923edc:	31 db                	xor    ebx,ebx
  923ede:	eb 09                	jmp    923ee9 <future_backtest::RunnerCore::run_multi+0x1919>
  923ee0:	48 83 c3 18          	add    rbx,0x18
  923ee4:	49 39 df             	cmp    r15,rbx
  923ee7:	74 21                	je     923f0a <future_backtest::RunnerCore::run_multi+0x193a>
  923ee9:	4d 39 6c 1c 10       	cmp    QWORD PTR [r12+rbx*1+0x10],r13
  923eee:	75 f0                	jne    923ee0 <future_backtest::RunnerCore::run_multi+0x1910>
  923ef0:	49 8b 7c 1c 08       	mov    rdi,QWORD PTR [r12+rbx*1+0x8]
  923ef5:	48 89 ee             	mov    rsi,rbp
  923ef8:	4c 89 ea             	mov    rdx,r13
  923efb:	ff 15 ff 7f fd 00    	call   QWORD PTR [rip+0xfd7fff]        # 18fbf00 <bcmp@GLIBC_2.2.5>
  923f01:	85 c0                	test   eax,eax
  923f03:	75 db                	jne    923ee0 <future_backtest::RunnerCore::run_multi+0x1910>
  923f05:	e9 7e 01 00 00       	jmp    924088 <future_backtest::RunnerCore::run_multi+0x1ab8>
  923f0a:	48 8d bc 24 10 06 00 	lea    rdi,[rsp+0x610]
  923f11:	00 
  923f12:	48 8b 74 24 68       	mov    rsi,QWORD PTR [rsp+0x68]
  923f17:	48 8d 15 fa cb f2 00 	lea    rdx,[rip+0xf2cbfa]        # 1850b18 <anon.609a31ba814f1e4156e50677fc366a7f.492.llvm.5215769359700358943+0x428>
  923f1e:	ff 15 14 81 fd 00    	call   QWORD PTR [rip+0xfd8114]        # 18fc038 <_DYNAMIC+0x738>
  923f24:	48 8b 9c 24 c0 10 00 	mov    rbx,QWORD PTR [rsp+0x10c0]
  923f2b:	00 
  923f2c:	48 3b 9c 24 b0 10 00 	cmp    rbx,QWORD PTR [rsp+0x10b0]
  923f33:	00 
  923f34:	75 15                	jne    923f4b <future_backtest::RunnerCore::run_multi+0x197b>
  923f36:	48 8d bc 24 b0 10 00 	lea    rdi,[rsp+0x10b0]
  923f3d:	00 
  923f3e:	48 8d 35 eb cb f2 00 	lea    rsi,[rip+0xf2cbeb]        # 1850b30 <anon.609a31ba814f1e4156e50677fc366a7f.492.llvm.5215769359700358943+0x440>
  923f45:	ff 15 35 86 fd 00    	call   QWORD PTR [rip+0xfd8635]        # 18fc580 <_DYNAMIC+0xc80>
  923f4b:	48 8b 84 24 b8 10 00 	mov    rax,QWORD PTR [rsp+0x10b8]
  923f52:	00 
  923f53:	48 8d 0c 5b          	lea    rcx,[rbx+rbx*2]
  923f57:	48 8b 94 24 20 06 00 	mov    rdx,QWORD PTR [rsp+0x620]
  923f5e:	00 
  923f5f:	48 89 54 c8 10       	mov    QWORD PTR [rax+rcx*8+0x10],rdx
  923f64:	66 0f 10 84 24 10 06 	movupd xmm0,XMMWORD PTR [rsp+0x610]
  923f6b:	00 00 
  923f6d:	66 0f 11 04 c8       	movupd XMMWORD PTR [rax+rcx*8],xmm0
  923f72:	48 ff c3             	inc    rbx
  923f75:	48 89 9c 24 c0 10 00 	mov    QWORD PTR [rsp+0x10c0],rbx
  923f7c:	00 
  923f7d:	48 8b 4c 24 20       	mov    rcx,QWORD PTR [rsp+0x20]
  923f82:	48 8d 81 20 01 00 00 	lea    rax,[rcx+0x120]
  923f89:	48 81 c1 38 01 00 00 	add    rcx,0x138
  923f90:	48 89 8c 24 10 06 00 	mov    QWORD PTR [rsp+0x610],rcx
  923f97:	00 
  923f98:	48 8d 0d c1 da fd ff 	lea    rcx,[rip+0xfffffffffffddac1]        # 901a60 <<alloc::string::String as core::fmt::Display>::fmt>
  923f9f:	48 89 8c 24 18 06 00 	mov    QWORD PTR [rsp+0x618],rcx
  923fa6:	00 
  923fa7:	48 8d 94 24 a8 19 00 	lea    rdx,[rsp+0x19a8]
  923fae:	00 
  923faf:	48 89 94 24 20 06 00 	mov    QWORD PTR [rsp+0x620],rdx
  923fb6:	00 
  923fb7:	48 8d 15 b2 86 f2 ff 	lea    rdx,[rip+0xfffffffffff286b2]        # 84c670 <<&T as core::fmt::Display>::fmt>
  923fbe:	48 89 94 24 28 06 00 	mov    QWORD PTR [rsp+0x628],rdx
  923fc5:	00 
  923fc6:	48 89 84 24 30 06 00 	mov    QWORD PTR [rsp+0x630],rax
  923fcd:	00 
  923fce:	48 89 8c 24 38 06 00 	mov    QWORD PTR [rsp+0x638],rcx
  923fd5:	00 
  923fd6:	48 8d 05 13 bf f2 00 	lea    rax,[rip+0xf2bf13]        # 184fef0 <anon.609a31ba814f1e4156e50677fc366a7f.248.llvm.5215769359700358943+0x830>
  923fdd:	48 89 84 24 d0 11 00 	mov    QWORD PTR [rsp+0x11d0],rax
  923fe4:	00 
  923fe5:	48 c7 84 24 d8 11 00 	mov    QWORD PTR [rsp+0x11d8],0x3
  923fec:	00 03 00 00 00 
  923ff1:	48 c7 84 24 f0 11 00 	mov    QWORD PTR [rsp+0x11f0],0x0
  923ff8:	00 00 00 00 00 
  923ffd:	48 8d 84 24 10 06 00 	lea    rax,[rsp+0x610]
  924004:	00 
  924005:	48 89 84 24 e0 11 00 	mov    QWORD PTR [rsp+0x11e0],rax
  92400c:	00 
  92400d:	48 c7 84 24 e8 11 00 	mov    QWORD PTR [rsp+0x11e8],0x3
  924014:	00 03 00 00 00 
  924019:	48 8d bc 24 60 18 00 	lea    rdi,[rsp+0x1860]
  924020:	00 
  924021:	48 8d b4 24 d0 11 00 	lea    rsi,[rsp+0x11d0]
  924028:	00 
  924029:	ff 15 29 80 fd 00    	call   QWORD PTR [rip+0xfd8029]        # 18fc058 <_DYNAMIC+0x758>
  92402f:	48 8b 9c 24 b0 03 00 	mov    rbx,QWORD PTR [rsp+0x3b0]
  924036:	00 
  924037:	48 3b 9c 24 a0 03 00 	cmp    rbx,QWORD PTR [rsp+0x3a0]
  92403e:	00 
  92403f:	75 15                	jne    924056 <future_backtest::RunnerCore::run_multi+0x1a86>
  924041:	48 8d bc 24 a0 03 00 	lea    rdi,[rsp+0x3a0]
  924048:	00 
  924049:	48 8d 35 f8 ca f2 00 	lea    rsi,[rip+0xf2caf8]        # 1850b48 <anon.609a31ba814f1e4156e50677fc366a7f.492.llvm.5215769359700358943+0x458>
  924050:	ff 15 2a 85 fd 00    	call   QWORD PTR [rip+0xfd852a]        # 18fc580 <_DYNAMIC+0xc80>
  924056:	48 8b 84 24 a8 03 00 	mov    rax,QWORD PTR [rsp+0x3a8]
  92405d:	00 
  92405e:	48 8d 0c 5b          	lea    rcx,[rbx+rbx*2]
  924062:	48 8b 94 24 70 18 00 	mov    rdx,QWORD PTR [rsp+0x1870]
  924069:	00 
  92406a:	48 89 54 c8 10       	mov    QWORD PTR [rax+rcx*8+0x10],rdx
  92406f:	66 0f 10 84 24 60 18 	movupd xmm0,XMMWORD PTR [rsp+0x1860]
  924076:	00 00 
  924078:	66 0f 11 04 c8       	movupd XMMWORD PTR [rax+rcx*8],xmm0
  92407d:	48 ff c3             	inc    rbx
  924080:	48 89 9c 24 b0 03 00 	mov    QWORD PTR [rsp+0x3b0],rbx
  924087:	00 
  924088:	48 b8 00 00 00 00 00 	movabs rax,0x8000000000000000
  92408f:	00 00 80 
  924092:	48 8b 4c 24 20       	mov    rcx,QWORD PTR [rsp+0x20]
  924097:	48 39 81 80 03 00 00 	cmp    QWORD PTR [rcx+0x380],rax
  92409e:	0f 84 f4 01 00 00    	je     924298 <future_backtest::RunnerCore::run_multi+0x1cc8>
  9240a4:	48 8b 44 24 20       	mov    rax,QWORD PTR [rsp+0x20]
  9240a9:	48 05 80 03 00 00    	add    rax,0x380
  9240af:	48 89 44 24 68       	mov    QWORD PTR [rsp+0x68],rax
  9240b4:	48 89 84 24 90 0e 00 	mov    QWORD PTR [rsp+0xe90],rax
  9240bb:	00 
  9240bc:	48 8b 84 24 c0 10 00 	mov    rax,QWORD PTR [rsp+0x10c0]
  9240c3:	00 
  9240c4:	48 85 c0             	test   rax,rax
  9240c7:	74 51                	je     92411a <future_backtest::RunnerCore::run_multi+0x1b4a>
  9240c9:	4c 8b a4 24 b8 10 00 	mov    r12,QWORD PTR [rsp+0x10b8]
  9240d0:	00 
  9240d1:	48 8b 4c 24 20       	mov    rcx,QWORD PTR [rsp+0x20]
  9240d6:	48 8b a9 88 03 00 00 	mov    rbp,QWORD PTR [rcx+0x388]
  9240dd:	4c 8b a9 90 03 00 00 	mov    r13,QWORD PTR [rcx+0x390]
  9240e4:	48 c1 e0 03          	shl    rax,0x3
  9240e8:	4c 8d 3c 40          	lea    r15,[rax+rax*2]
  9240ec:	31 db                	xor    ebx,ebx
  9240ee:	eb 09                	jmp    9240f9 <future_backtest::RunnerCore::run_multi+0x1b29>
  9240f0:	48 83 c3 18          	add    rbx,0x18
  9240f4:	49 39 df             	cmp    r15,rbx
  9240f7:	74 21                	je     92411a <future_backtest::RunnerCore::run_multi+0x1b4a>
  9240f9:	4d 39 6c 1c 10       	cmp    QWORD PTR [r12+rbx*1+0x10],r13
  9240fe:	75 f0                	jne    9240f0 <future_backtest::RunnerCore::run_multi+0x1b20>
  924100:	49 8b 7c 1c 08       	mov    rdi,QWORD PTR [r12+rbx*1+0x8]
  924105:	48 89 ee             	mov    rsi,rbp
  924108:	4c 89 ea             	mov    rdx,r13
  92410b:	ff 15 ef 7d fd 00    	call   QWORD PTR [rip+0xfd7def]        # 18fbf00 <bcmp@GLIBC_2.2.5>
  924111:	85 c0                	test   eax,eax
  924113:	75 db                	jne    9240f0 <future_backtest::RunnerCore::run_multi+0x1b20>
  924115:	e9 7e 01 00 00       	jmp    924298 <future_backtest::RunnerCore::run_multi+0x1cc8>
  92411a:	48 8d bc 24 10 06 00 	lea    rdi,[rsp+0x610]
  924121:	00 
  924122:	48 8b 74 24 68       	mov    rsi,QWORD PTR [rsp+0x68]
  924127:	48 8d 15 32 ca f2 00 	lea    rdx,[rip+0xf2ca32]        # 1850b60 <anon.609a31ba814f1e4156e50677fc366a7f.492.llvm.5215769359700358943+0x470>
  92412e:	ff 15 04 7f fd 00    	call   QWORD PTR [rip+0xfd7f04]        # 18fc038 <_DYNAMIC+0x738>
  924134:	48 8b 9c 24 c0 10 00 	mov    rbx,QWORD PTR [rsp+0x10c0]
  92413b:	00 
  92413c:	48 3b 9c 24 b0 10 00 	cmp    rbx,QWORD PTR [rsp+0x10b0]
  924143:	00 
  924144:	75 15                	jne    92415b <future_backtest::RunnerCore::run_multi+0x1b8b>
  924146:	48 8d bc 24 b0 10 00 	lea    rdi,[rsp+0x10b0]
  92414d:	00 
  92414e:	48 8d 35 23 ca f2 00 	lea    rsi,[rip+0xf2ca23]        # 1850b78 <anon.609a31ba814f1e4156e50677fc366a7f.492.llvm.5215769359700358943+0x488>
  924155:	ff 15 25 84 fd 00    	call   QWORD PTR [rip+0xfd8425]        # 18fc580 <_DYNAMIC+0xc80>
  92415b:	48 8b 84 24 b8 10 00 	mov    rax,QWORD PTR [rsp+0x10b8]
  924162:	00 
  924163:	48 8d 0c 5b          	lea    rcx,[rbx+rbx*2]
  924167:	48 8b 94 24 20 06 00 	mov    rdx,QWORD PTR [rsp+0x620]
  92416e:	00 
  92416f:	48 89 54 c8 10       	mov    QWORD PTR [rax+rcx*8+0x10],rdx
  924174:	66 0f 10 84 24 10 06 	movupd xmm0,XMMWORD PTR [rsp+0x610]
  92417b:	00 00 
  92417d:	66 0f 11 04 c8       	movupd XMMWORD PTR [rax+rcx*8],xmm0
  924182:	48 ff c3             	inc    rbx
  924185:	48 89 9c 24 c0 10 00 	mov    QWORD PTR [rsp+0x10c0],rbx
  92418c:	00 
  92418d:	48 8b 4c 24 20       	mov    rcx,QWORD PTR [rsp+0x20]
  924192:	48 8d 81 20 01 00 00 	lea    rax,[rcx+0x120]
  924199:	48 81 c1 38 01 00 00 	add    rcx,0x138
  9241a0:	48 89 8c 24 10 06 00 	mov    QWORD PTR [rsp+0x610],rcx
  9241a7:	00 
  9241a8:	48 8d 0d b1 d8 fd ff 	lea    rcx,[rip+0xfffffffffffdd8b1]        # 901a60 <<alloc::string::String as core::fmt::Display>::fmt>
  9241af:	48 89 8c 24 18 06 00 	mov    QWORD PTR [rsp+0x618],rcx
  9241b6:	00 
  9241b7:	48 8d 94 24 90 0e 00 	lea    rdx,[rsp+0xe90]
  9241be:	00 
  9241bf:	48 89 94 24 20 06 00 	mov    QWORD PTR [rsp+0x620],rdx
  9241c6:	00 
  9241c7:	48 8d 15 a2 84 f2 ff 	lea    rdx,[rip+0xfffffffffff284a2]        # 84c670 <<&T as core::fmt::Display>::fmt>
  9241ce:	48 89 94 24 28 06 00 	mov    QWORD PTR [rsp+0x628],rdx
  9241d5:	00 
  9241d6:	48 89 84 24 30 06 00 	mov    QWORD PTR [rsp+0x630],rax
  9241dd:	00 
  9241de:	48 89 8c 24 38 06 00 	mov    QWORD PTR [rsp+0x638],rcx
  9241e5:	00 
  9241e6:	48 8d 05 03 bd f2 00 	lea    rax,[rip+0xf2bd03]        # 184fef0 <anon.609a31ba814f1e4156e50677fc366a7f.248.llvm.5215769359700358943+0x830>
  9241ed:	48 89 84 24 d0 11 00 	mov    QWORD PTR [rsp+0x11d0],rax
  9241f4:	00 
  9241f5:	48 c7 84 24 d8 11 00 	mov    QWORD PTR [rsp+0x11d8],0x3
  9241fc:	00 03 00 00 00 
  924201:	48 c7 84 24 f0 11 00 	mov    QWORD PTR [rsp+0x11f0],0x0
  924208:	00 00 00 00 00 
  92420d:	48 8d 84 24 10 06 00 	lea    rax,[rsp+0x610]
  924214:	00 
  924215:	48 89 84 24 e0 11 00 	mov    QWORD PTR [rsp+0x11e0],rax
  92421c:	00 
  92421d:	48 c7 84 24 e8 11 00 	mov    QWORD PTR [rsp+0x11e8],0x3
  924224:	00 03 00 00 00 
  924229:	48 8d bc 24 e0 0e 00 	lea    rdi,[rsp+0xee0]
  924230:	00 
  924231:	48 8d b4 24 d0 11 00 	lea    rsi,[rsp+0x11d0]
  924238:	00 
  924239:	ff 15 19 7e fd 00    	call   QWORD PTR [rip+0xfd7e19]        # 18fc058 <_DYNAMIC+0x758>
  92423f:	48 8b 9c 24 b0 03 00 	mov    rbx,QWORD PTR [rsp+0x3b0]
  924246:	00 
  924247:	48 3b 9c 24 a0 03 00 	cmp    rbx,QWORD PTR [rsp+0x3a0]
  92424e:	00 
  92424f:	75 15                	jne    924266 <future_backtest::RunnerCore::run_multi+0x1c96>
  924251:	48 8d bc 24 a0 03 00 	lea    rdi,[rsp+0x3a0]
  924258:	00 
  924259:	48 8d 35 30 c9 f2 00 	lea    rsi,[rip+0xf2c930]        # 1850b90 <anon.609a31ba814f1e4156e50677fc366a7f.492.llvm.5215769359700358943+0x4a0>
  924260:	ff 15 1a 83 fd 00    	call   QWORD PTR [rip+0xfd831a]        # 18fc580 <_DYNAMIC+0xc80>
  924266:	48 8b 84 24 a8 03 00 	mov    rax,QWORD PTR [rsp+0x3a8]
  92426d:	00 
  92426e:	48 8d 0c 5b          	lea    rcx,[rbx+rbx*2]
  924272:	48 8b 94 24 f0 0e 00 	mov    rdx,QWORD PTR [rsp+0xef0]
  924279:	00 
  92427a:	48 89 54 c8 10       	mov    QWORD PTR [rax+rcx*8+0x10],rdx
  92427f:	66 0f 10 84 24 e0 0e 	movupd xmm0,XMMWORD PTR [rsp+0xee0]
  924286:	00 00 
  924288:	66 0f 11 04 c8       	movupd XMMWORD PTR [rax+rcx*8],xmm0
  92428d:	48 ff c3             	inc    rbx
  924290:	48 89 9c 24 b0 03 00 	mov    QWORD PTR [rsp+0x3b0],rbx
  924297:	00 
  924298:	48 8b 84 24 c0 10 00 	mov    rax,QWORD PTR [rsp+0x10c0]
  92429f:	00 
  9242a0:	48 89 84 24 90 1b 00 	mov    QWORD PTR [rsp+0x1b90],rax
  9242a7:	00 
  9242a8:	0f 10 84 24 b0 10 00 	movups xmm0,XMMWORD PTR [rsp+0x10b0]
  9242af:	00 
  9242b0:	0f 29 84 24 80 1b 00 	movaps XMMWORD PTR [rsp+0x1b80],xmm0
  9242b7:	00 
  9242b8:	48 8b 84 24 b0 03 00 	mov    rax,QWORD PTR [rsp+0x3b0]
  9242bf:	00 
  9242c0:	4c 8d a4 24 98 1b 00 	lea    r12,[rsp+0x1b98]
  9242c7:	00 
  9242c8:	49 89 44 24 10       	mov    QWORD PTR [r12+0x10],rax
  9242cd:	66 0f 10 84 24 a0 03 	movupd xmm0,XMMWORD PTR [rsp+0x3a0]
  9242d4:	00 00 
  9242d6:	66 41 0f 11 04 24    	movupd XMMWORD PTR [r12],xmm0
  9242dc:	4d 85 f6             	test   r14,r14
  9242df:	4c 8b 2d 52 7d fd 00 	mov    r13,QWORD PTR [rip+0xfd7d52]        # 18fc038 <_DYNAMIC+0x738>
  9242e6:	48 8b 2d 33 78 fd 00 	mov    rbp,QWORD PTR [rip+0xfd7833]        # 18fbb20 <_DYNAMIC+0x220>
  9242ed:	74 2f                	je     92431e <future_backtest::RunnerCore::run_multi+0x1d4e>
  9242ef:	48 8b 84 24 80 00 00 	mov    rax,QWORD PTR [rsp+0x80]
  9242f6:	00 
  9242f7:	4c 8d 78 08          	lea    r15,[rax+0x8]
  9242fb:	eb 0c                	jmp    924309 <future_backtest::RunnerCore::run_multi+0x1d39>
  9242fd:	0f 1f 00             	nop    DWORD PTR [rax]
  924300:	49 83 c7 18          	add    r15,0x18
  924304:	49 ff ce             	dec    r14
  924307:	74 15                	je     92431e <future_backtest::RunnerCore::run_multi+0x1d4e>
  924309:	49 8b 77 f8          	mov    rsi,QWORD PTR [r15-0x8]
  92430d:	48 85 f6             	test   rsi,rsi
  924310:	74 ee                	je     924300 <future_backtest::RunnerCore::run_multi+0x1d30>
  924312:	49 8b 3f             	mov    rdi,QWORD PTR [r15]
  924315:	ba 01 00 00 00       	mov    edx,0x1
  92431a:	ff d5                	call   rbp
  92431c:	eb e2                	jmp    924300 <future_backtest::RunnerCore::run_multi+0x1d30>
  92431e:	48 8b 84 24 00 05 00 	mov    rax,QWORD PTR [rsp+0x500]
  924325:	00 
  924326:	48 85 c0             	test   rax,rax
  924329:	48 8b 5c 24 20       	mov    rbx,QWORD PTR [rsp+0x20]
  92432e:	74 17                	je     924347 <future_backtest::RunnerCore::run_multi+0x1d77>
  924330:	48 c1 e0 03          	shl    rax,0x3
  924334:	48 8d 34 40          	lea    rsi,[rax+rax*2]
  924338:	ba 08 00 00 00       	mov    edx,0x8
  92433d:	48 8b bc 24 80 00 00 	mov    rdi,QWORD PTR [rsp+0x80]
  924344:	00 
  924345:	ff d5                	call   rbp
  924347:	48 8b 84 24 90 1b 00 	mov    rax,QWORD PTR [rsp+0x1b90]
  92434e:	00 
  92434f:	48 89 84 24 b0 03 00 	mov    QWORD PTR [rsp+0x3b0],rax
  924356:	00 
  924357:	0f 28 84 24 80 1b 00 	movaps xmm0,XMMWORD PTR [rsp+0x1b80]
  92435e:	00 
  92435f:	0f 29 84 24 a0 03 00 	movaps XMMWORD PTR [rsp+0x3a0],xmm0
  924366:	00 
  924367:	49 8b 44 24 10       	mov    rax,QWORD PTR [r12+0x10]
  92436c:	48 89 84 24 d0 01 00 	mov    QWORD PTR [rsp+0x1d0],rax
  924373:	00 
  924374:	41 0f 10 04 24       	movups xmm0,XMMWORD PTR [r12]
  924379:	0f 29 84 24 c0 01 00 	movaps XMMWORD PTR [rsp+0x1c0],xmm0
  924380:	00 
  924381:	48 8d 73 58          	lea    rsi,[rbx+0x58]
  924385:	48 8d bc 24 d0 11 00 	lea    rdi,[rsp+0x11d0]
  92438c:	00 
  92438d:	48 8d 15 bc d8 f2 00 	lea    rdx,[rip+0xf2d8bc]        # 1851c50 <anon.609a31ba814f1e4156e50677fc366a7f.492.llvm.5215769359700358943+0x1560>
  924394:	41 ff d5             	call   r13
  924397:	4c 8b 74 24 50       	mov    r14,QWORD PTR [rsp+0x50]
  92439c:	48 8d 73 70          	lea    rsi,[rbx+0x70]
  9243a0:	48 8d bc 24 10 06 00 	lea    rdi,[rsp+0x610]
  9243a7:	00 
  9243a8:	48 8d 15 b9 d8 f2 00 	lea    rdx,[rip+0xf2d8b9]        # 1851c68 <anon.609a31ba814f1e4156e50677fc366a7f.492.llvm.5215769359700358943+0x1578>
  9243af:	41 ff d5             	call   r13
  9243b2:	48 8b 84 24 e0 11 00 	mov    rax,QWORD PTR [rsp+0x11e0]
  9243b9:	00 
  9243ba:	48 89 84 24 90 1b 00 	mov    QWORD PTR [rsp+0x1b90],rax
  9243c1:	00 
  9243c2:	0f 10 84 24 d0 11 00 	movups xmm0,XMMWORD PTR [rsp+0x11d0]
  9243c9:	00 
  9243ca:	0f 29 84 24 80 1b 00 	movaps XMMWORD PTR [rsp+0x1b80],xmm0
  9243d1:	00 
  9243d2:	48 8b 84 24 20 06 00 	mov    rax,QWORD PTR [rsp+0x620]
  9243d9:	00 
  9243da:	49 89 44 24 10       	mov    QWORD PTR [r12+0x10],rax
  9243df:	0f 10 84 24 10 06 00 	movups xmm0,XMMWORD PTR [rsp+0x610]
  9243e6:	00 
  9243e7:	41 0f 11 04 24       	movups XMMWORD PTR [r12],xmm0
  9243ec:	48 b8 00 00 00 00 00 	movabs rax,0x8000000000000000
  9243f3:	00 00 80 
  9243f6:	48 39 83 00 02 00 00 	cmp    QWORD PTR [rbx+0x200],rax
  9243fd:	75 0a                	jne    924409 <future_backtest::RunnerCore::run_multi+0x1e39>
  9243ff:	48 89 84 24 60 18 00 	mov    QWORD PTR [rsp+0x1860],rax
  924406:	00 
  924407:	eb 1b                	jmp    924424 <future_backtest::RunnerCore::run_multi+0x1e54>
  924409:	48 8d b3 00 02 00 00 	lea    rsi,[rbx+0x200]
  924410:	48 8d bc 24 60 18 00 	lea    rdi,[rsp+0x1860]
  924417:	00 
  924418:	48 8d 15 59 ba f2 00 	lea    rdx,[rip+0xf2ba59]        # 184fe78 <anon.609a31ba814f1e4156e50677fc366a7f.248.llvm.5215769359700358943+0x7b8>
  92441f:	e8 5c 4c fa ff       	call   8c9080 <<alloc::vec::Vec<T,A> as core::clone::Clone>::clone>
  924424:	48 8d b3 d0 01 00 00 	lea    rsi,[rbx+0x1d0]
  92442b:	48 8d bc 24 e0 0e 00 	lea    rdi,[rsp+0xee0]
  924432:	00 
  924433:	48 8d 15 c6 d9 f2 00 	lea    rdx,[rip+0xf2d9c6]        # 1851e00 <anon.609a31ba814f1e4156e50677fc366a7f.492.llvm.5215769359700358943+0x1710>
  92443a:	e8 41 4c fa ff       	call   8c9080 <<alloc::vec::Vec<T,A> as core::clone::Clone>::clone>
  92443f:	4c 8b a3 f8 01 00 00 	mov    r12,QWORD PTR [rbx+0x1f8]
  924446:	4e 8d 3c e5 00 00 00 	lea    r15,[r12*8+0x0]
  92444d:	00 
  92444e:	48 b8 ff ff ff ff ff 	movabs rax,0x1fffffffffffffff
  924455:	ff ff 1f 
  924458:	49 39 c4             	cmp    r12,rax
  92445b:	0f 97 c0             	seta   al
  92445e:	4d 39 f7             	cmp    r15,r14
  924461:	0f 97 c1             	seta   cl
  924464:	08 c1                	or     cl,al
  924466:	0f 85 00 03 00 00    	jne    92476c <future_backtest::RunnerCore::run_multi+0x219c>
  92446c:	4c 8b ab f0 01 00 00 	mov    r13,QWORD PTR [rbx+0x1f0]
  924473:	4d 85 ff             	test   r15,r15
  924476:	74 30                	je     9244a8 <future_backtest::RunnerCore::run_multi+0x1ed8>
  924478:	ff 15 c2 76 fd 00    	call   QWORD PTR [rip+0xfd76c2]        # 18fbb40 <_DYNAMIC+0x240>
  92447e:	41 be 08 00 00 00    	mov    r14d,0x8
  924484:	be 08 00 00 00       	mov    esi,0x8
  924489:	4c 89 ff             	mov    rdi,r15
  92448c:	ff 15 86 76 fd 00    	call   QWORD PTR [rip+0xfd7686]        # 18fbb18 <_DYNAMIC+0x218>
  924492:	48 85 c0             	test   rax,rax
  924495:	0f 84 d4 02 00 00    	je     92476f <future_backtest::RunnerCore::run_multi+0x219f>
  92449b:	48 89 c5             	mov    rbp,rax
  92449e:	4c 89 e3             	mov    rbx,r12
  9244a1:	4c 8b 74 24 50       	mov    r14,QWORD PTR [rsp+0x50]
  9244a6:	eb 07                	jmp    9244af <future_backtest::RunnerCore::run_multi+0x1edf>
  9244a8:	bd 08 00 00 00       	mov    ebp,0x8
  9244ad:	31 db                	xor    ebx,ebx
  9244af:	48 89 ef             	mov    rdi,rbp
  9244b2:	4c 89 ee             	mov    rsi,r13
  9244b5:	4c 89 fa             	mov    rdx,r15
  9244b8:	ff 15 3a 7a fd 00    	call   QWORD PTR [rip+0xfd7a3a]        # 18fbef8 <memcpy@GLIBC_2.14>
  9244be:	0f 10 84 24 60 18 00 	movups xmm0,XMMWORD PTR [rsp+0x1860]
  9244c5:	00 
  9244c6:	48 8d 8c 24 00 12 00 	lea    rcx,[rsp+0x1200]
  9244cd:	00 
  9244ce:	0f 11 01             	movups XMMWORD PTR [rcx],xmm0
  9244d1:	48 8b 84 24 70 18 00 	mov    rax,QWORD PTR [rsp+0x1870]
  9244d8:	00 
  9244d9:	48 89 41 10          	mov    QWORD PTR [rcx+0x10],rax
  9244dd:	0f 10 84 24 e0 0e 00 	movups xmm0,XMMWORD PTR [rsp+0xee0]
  9244e4:	00 
  9244e5:	0f 29 84 24 d0 11 00 	movaps XMMWORD PTR [rsp+0x11d0],xmm0
  9244ec:	00 
  9244ed:	48 8b 84 24 f0 0e 00 	mov    rax,QWORD PTR [rsp+0xef0]
  9244f4:	00 
  9244f5:	48 89 84 24 e0 11 00 	mov    QWORD PTR [rsp+0x11e0],rax
  9244fc:	00 
  9244fd:	48 89 9c 24 e8 11 00 	mov    QWORD PTR [rsp+0x11e8],rbx
  924504:	00 
  924505:	48 89 ac 24 f0 11 00 	mov    QWORD PTR [rsp+0x11f0],rbp
  92450c:	00 
  92450d:	4c 89 a4 24 f8 11 00 	mov    QWORD PTR [rsp+0x11f8],r12
  924514:	00 
  924515:	48 b8 00 00 00 00 00 	movabs rax,0x8000000000000000
  92451c:	00 00 80 
  92451f:	48 8b 5c 24 20       	mov    rbx,QWORD PTR [rsp+0x20]
  924524:	48 39 83 48 02 00 00 	cmp    QWORD PTR [rbx+0x248],rax
  92452b:	75 0a                	jne    924537 <future_backtest::RunnerCore::run_multi+0x1f67>
  92452d:	48 89 84 24 60 18 00 	mov    QWORD PTR [rsp+0x1860],rax
  924534:	00 
  924535:	eb 1b                	jmp    924552 <future_backtest::RunnerCore::run_multi+0x1f82>
  924537:	48 8d b3 48 02 00 00 	lea    rsi,[rbx+0x248]
  92453e:	48 8d bc 24 60 18 00 	lea    rdi,[rsp+0x1860]
  924545:	00 
  924546:	48 8d 15 2b b9 f2 00 	lea    rdx,[rip+0xf2b92b]        # 184fe78 <anon.609a31ba814f1e4156e50677fc366a7f.248.llvm.5215769359700358943+0x7b8>
  92454d:	e8 2e 4b fa ff       	call   8c9080 <<alloc::vec::Vec<T,A> as core::clone::Clone>::clone>
  924552:	48 8d b3 18 02 00 00 	lea    rsi,[rbx+0x218]
  924559:	48 8d bc 24 e0 0e 00 	lea    rdi,[rsp+0xee0]
  924560:	00 
  924561:	48 8d 15 98 d8 f2 00 	lea    rdx,[rip+0xf2d898]        # 1851e00 <anon.609a31ba814f1e4156e50677fc366a7f.492.llvm.5215769359700358943+0x1710>
  924568:	e8 13 4b fa ff       	call   8c9080 <<alloc::vec::Vec<T,A> as core::clone::Clone>::clone>
  92456d:	4c 8b a3 40 02 00 00 	mov    r12,QWORD PTR [rbx+0x240]
  924574:	4e 8d 3c e5 00 00 00 	lea    r15,[r12*8+0x0]
  92457b:	00 
  92457c:	48 b8 ff ff ff ff ff 	movabs rax,0x1fffffffffffffff
  924583:	ff ff 1f 
  924586:	49 39 c4             	cmp    r12,rax
  924589:	0f 97 c0             	seta   al
  92458c:	4d 39 f7             	cmp    r15,r14
  92458f:	0f 97 c1             	seta   cl
  924592:	08 c1                	or     cl,al
  924594:	0f 85 35 04 00 00    	jne    9249cf <future_backtest::RunnerCore::run_multi+0x23ff>
  92459a:	48 8b ab 38 02 00 00 	mov    rbp,QWORD PTR [rbx+0x238]
  9245a1:	4d 85 ff             	test   r15,r15
  9245a4:	74 2b                	je     9245d1 <future_backtest::RunnerCore::run_multi+0x2001>
  9245a6:	ff 15 94 75 fd 00    	call   QWORD PTR [rip+0xfd7594]        # 18fbb40 <_DYNAMIC+0x240>
  9245ac:	41 be 08 00 00 00    	mov    r14d,0x8
  9245b2:	be 08 00 00 00       	mov    esi,0x8
  9245b7:	4c 89 ff             	mov    rdi,r15
  9245ba:	ff 15 58 75 fd 00    	call   QWORD PTR [rip+0xfd7558]        # 18fbb18 <_DYNAMIC+0x218>
  9245c0:	48 85 c0             	test   rax,rax
  9245c3:	0f 84 09 04 00 00    	je     9249d2 <future_backtest::RunnerCore::run_multi+0x2402>
  9245c9:	49 89 c5             	mov    r13,rax
  9245cc:	4d 89 e6             	mov    r14,r12
  9245cf:	eb 09                	jmp    9245da <future_backtest::RunnerCore::run_multi+0x200a>
  9245d1:	41 bd 08 00 00 00    	mov    r13d,0x8
  9245d7:	45 31 f6             	xor    r14d,r14d
  9245da:	4c 89 ef             	mov    rdi,r13
  9245dd:	48 89 ee             	mov    rsi,rbp
  9245e0:	4c 89 fa             	mov    rdx,r15
  9245e3:	ff 15 0f 79 fd 00    	call   QWORD PTR [rip+0xfd790f]        # 18fbef8 <memcpy@GLIBC_2.14>
  9245e9:	48 8b 84 24 70 18 00 	mov    rax,QWORD PTR [rsp+0x1870]
  9245f0:	00 
  9245f1:	48 8d 8c 24 58 06 00 	lea    rcx,[rsp+0x658]
  9245f8:	00 
  9245f9:	48 89 41 40          	mov    QWORD PTR [rcx+0x40],rax
  9245fd:	0f 10 84 24 60 18 00 	movups xmm0,XMMWORD PTR [rsp+0x1860]
  924604:	00 
  924605:	0f 11 41 30          	movups XMMWORD PTR [rcx+0x30],xmm0
  924609:	48 8b 84 24 f0 0e 00 	mov    rax,QWORD PTR [rsp+0xef0]
  924610:	00 
  924611:	48 89 41 10          	mov    QWORD PTR [rcx+0x10],rax
  924615:	0f 10 84 24 e0 0e 00 	movups xmm0,XMMWORD PTR [rsp+0xee0]
  92461c:	00 
  92461d:	0f 11 01             	movups XMMWORD PTR [rcx],xmm0
  924620:	48 8b 84 24 b0 03 00 	mov    rax,QWORD PTR [rsp+0x3b0]
  924627:	00 
  924628:	48 89 41 58          	mov    QWORD PTR [rcx+0x58],rax
  92462c:	0f 28 84 24 a0 03 00 	movaps xmm0,XMMWORD PTR [rsp+0x3a0]
  924633:	00 
  924634:	0f 11 41 48          	movups XMMWORD PTR [rcx+0x48],xmm0
  924638:	48 8b 84 24 d0 01 00 	mov    rax,QWORD PTR [rsp+0x1d0]
  92463f:	00 
  924640:	48 89 41 70          	mov    QWORD PTR [rcx+0x70],rax
  924644:	0f 28 84 24 c0 01 00 	movaps xmm0,XMMWORD PTR [rsp+0x1c0]
  92464b:	00 
  92464c:	0f 11 41 60          	movups XMMWORD PTR [rcx+0x60],xmm0
  924650:	f2 0f 10 83 f0 04 00 	movsd  xmm0,QWORD PTR [rbx+0x4f0]
  924657:	00 
  924658:	66 0f 6f 8c 24 d0 11 	movdqa xmm1,XMMWORD PTR [rsp+0x11d0]
  92465f:	00 00 
  924661:	66 0f 28 94 24 e0 11 	movapd xmm2,XMMWORD PTR [rsp+0x11e0]
  924668:	00 00 
  92466a:	66 0f 6f 9c 24 f0 11 	movdqa xmm3,XMMWORD PTR [rsp+0x11f0]
  924671:	00 00 
  924673:	66 0f 28 a4 24 00 12 	movapd xmm4,XMMWORD PTR [rsp+0x1200]
  92467a:	00 00 
  92467c:	66 0f 7f 8c 24 10 06 	movdqa XMMWORD PTR [rsp+0x610],xmm1
  924683:	00 00 
  924685:	66 0f 29 94 24 20 06 	movapd XMMWORD PTR [rsp+0x620],xmm2
  92468c:	00 00 
  92468e:	66 0f 7f 9c 24 30 06 	movdqa XMMWORD PTR [rsp+0x630],xmm3
  924695:	00 00 
  924697:	66 0f 29 a4 24 40 06 	movapd XMMWORD PTR [rsp+0x640],xmm4
  92469e:	00 00 
  9246a0:	48 8b 84 24 10 12 00 	mov    rax,QWORD PTR [rsp+0x1210]
  9246a7:	00 
  9246a8:	48 89 84 24 50 06 00 	mov    QWORD PTR [rsp+0x650],rax
  9246af:	00 
  9246b0:	4c 89 b4 24 70 06 00 	mov    QWORD PTR [rsp+0x670],r14
  9246b7:	00 
  9246b8:	4c 89 ac 24 78 06 00 	mov    QWORD PTR [rsp+0x678],r13
  9246bf:	00 
  9246c0:	4c 89 a4 24 80 06 00 	mov    QWORD PTR [rsp+0x680],r12
  9246c7:	00 
  9246c8:	f2 0f 11 84 24 d0 06 	movsd  QWORD PTR [rsp+0x6d0],xmm0
  9246cf:	00 00 
  9246d1:	48 8d bc 24 d0 11 00 	lea    rdi,[rsp+0x11d0]
  9246d8:	00 
  9246d9:	48 8d b4 24 60 0e 00 	lea    rsi,[rsp+0xe60]
  9246e0:	00 
  9246e1:	48 8d 94 24 80 1b 00 	lea    rdx,[rsp+0x1b80]
  9246e8:	00 
  9246e9:	48 8d 8c 24 10 06 00 	lea    rcx,[rsp+0x610]
  9246f0:	00 
  9246f1:	e8 5a 35 05 00       	call   977c50 <hashbrown::map::HashMap<K,V,S,A>::insert>
  9246f6:	48 b8 00 00 00 00 00 	movabs rax,0x8000000000000000
  9246fd:	00 00 80 
  924700:	48 39 84 24 d0 11 00 	cmp    QWORD PTR [rsp+0x11d0],rax
  924707:	00 
  924708:	4c 8b 35 29 79 fd 00 	mov    r14,QWORD PTR [rip+0xfd7929]        # 18fc038 <_DYNAMIC+0x738>
  92470f:	48 8d 15 ea c3 f2 00 	lea    rdx,[rip+0xf2c3ea]        # 1850b00 <anon.609a31ba814f1e4156e50677fc366a7f.492.llvm.5215769359700358943+0x410>
  924716:	48 8d bc 24 00 05 00 	lea    rdi,[rsp+0x500]
  92471d:	00 
  92471e:	74 19                	je     924739 <future_backtest::RunnerCore::run_multi+0x2169>
  924720:	49 89 ff             	mov    r15,rdi
  924723:	48 8d bc 24 d0 11 00 	lea    rdi,[rsp+0x11d0]
  92472a:	00 
  92472b:	48 89 d3             	mov    rbx,rdx
  92472e:	e8 cd 53 fd ff       	call   8f9b00 <core::ptr::drop_in_place<(future_backtest::Config::config::FilterCode,future_backtest::Config::config::FilterCode,alloc::vec::Vec<alloc::string::String>,alloc::vec::Vec<alloc::string::String>,f64)>>
  924733:	4c 89 ff             	mov    rdi,r15
  924736:	48 89 da             	mov    rdx,rbx
  924739:	48 8b 4c 24 70       	mov    rcx,QWORD PTR [rsp+0x70]
  92473e:	48 8d 81 08 08 00 00 	lea    rax,[rcx+0x808]
  924745:	48 89 cb             	mov    rbx,rcx
  924748:	48 3b 8c 24 90 00 00 	cmp    rcx,QWORD PTR [rsp+0x90]
  92474f:	00 
  924750:	48 0f 44 c1          	cmove  rax,rcx
  924754:	0f 85 49 f4 ff ff    	jne    923ba3 <future_backtest::RunnerCore::run_multi+0x15d3>
  92475a:	48 8b 9c 24 d8 00 00 	mov    rbx,QWORD PTR [rsp+0xd8]
  924761:	00 
  924762:	48 8b 94 24 e0 00 00 	mov    rdx,QWORD PTR [rsp+0xe0]
  924769:	00 
  92476a:	eb 1d                	jmp    924789 <future_backtest::RunnerCore::run_multi+0x21b9>
  92476c:	45 31 f6             	xor    r14d,r14d
  92476f:	48 8d 15 4a 89 f2 00 	lea    rdx,[rip+0xf2894a]        # 184d0c0 <anon.793b25f609afd3960f1a0d096d3931cc.31.llvm.1325298290625399205>
  924776:	4c 89 f7             	mov    rdi,r14
  924779:	4c 89 fe             	mov    rsi,r15
  92477c:	ff 15 f6 79 fd 00    	call   QWORD PTR [rip+0xfd79f6]        # 18fc178 <_DYNAMIC+0x878>
  924782:	e9 95 6d 00 00       	jmp    92b51c <future_backtest::RunnerCore::run_multi+0x8f4c>
  924787:	31 d2                	xor    edx,edx
  924789:	48 89 d6             	mov    rsi,rdx
  92478c:	48 c1 e6 0b          	shl    rsi,0xb
  924790:	48 8d 04 d6          	lea    rax,[rsi+rdx*8]
  924794:	48 8d 2c 03          	lea    rbp,[rbx+rax*1]
  924798:	48 89 d9             	mov    rcx,rbx
  92479b:	0f 1f 44 00 00       	nop    DWORD PTR [rax+rax*1+0x0]
  9247a0:	48 85 c0             	test   rax,rax
  9247a3:	0f 84 41 02 00 00    	je     9249ea <future_backtest::RunnerCore::run_multi+0x241a>
  9247a9:	48 05 f8 f7 ff ff    	add    rax,0xfffffffffffff7f8
  9247af:	48 83 b9 e0 01 00 00 	cmp    QWORD PTR [rcx+0x1e0],0x0
  9247b6:	00 
  9247b7:	48 8d 89 08 08 00 00 	lea    rcx,[rcx+0x808]
  9247be:	75 e0                	jne    9247a0 <future_backtest::RunnerCore::run_multi+0x21d0>
  9247c0:	48 b8 00 00 00 00 00 	movabs rax,0x8000000000000000
  9247c7:	00 00 80 
  9247ca:	48 89 84 24 80 1b 00 	mov    QWORD PTR [rsp+0x1b80],rax
  9247d1:	00 
  9247d2:	e9 e4 03 00 00       	jmp    924bbb <future_backtest::RunnerCore::run_multi+0x25eb>
  9247d7:	48 8b 44 24 18       	mov    rax,QWORD PTR [rsp+0x18]
  9247dc:	48 89 84 24 80 1b 00 	mov    QWORD PTR [rsp+0x1b80],rax
  9247e3:	00 
  9247e4:	48 8d 05 75 d2 fd ff 	lea    rax,[rip+0xfffffffffffdd275]        # 901a60 <<alloc::string::String as core::fmt::Display>::fmt>
  9247eb:	48 89 84 24 88 1b 00 	mov    QWORD PTR [rsp+0x1b88],rax
  9247f2:	00 
  9247f3:	48 8d 05 ae c6 f2 00 	lea    rax,[rip+0xf2c6ae]        # 1850ea8 <anon.609a31ba814f1e4156e50677fc366a7f.492.llvm.5215769359700358943+0x7b8>
  9247fa:	48 89 84 24 d0 11 00 	mov    QWORD PTR [rsp+0x11d0],rax
  924801:	00 
  924802:	48 c7 84 24 d8 11 00 	mov    QWORD PTR [rsp+0x11d8],0x2
  924809:	00 02 00 00 00 
  92480e:	48 c7 84 24 f0 11 00 	mov    QWORD PTR [rsp+0x11f0],0x0
  924815:	00 00 00 00 00 
  92481a:	48 8d 84 24 80 1b 00 	lea    rax,[rsp+0x1b80]
  924821:	00 
  924822:	48 89 84 24 e0 11 00 	mov    QWORD PTR [rsp+0x11e0],rax
  924829:	00 
  92482a:	48 c7 84 24 e8 11 00 	mov    QWORD PTR [rsp+0x11e8],0x1
  924831:	00 01 00 00 00 
  924836:	48 8d 9c 24 70 01 00 	lea    rbx,[rsp+0x170]
  92483d:	00 
  92483e:	48 8d b4 24 d0 11 00 	lea    rsi,[rsp+0x11d0]
  924845:	00 
  924846:	48 89 df             	mov    rdi,rbx
  924849:	ff 15 09 78 fd 00    	call   QWORD PTR [rip+0xfd7809]        # 18fc058 <_DYNAMIC+0x758>
  92484f:	e9 d4 14 00 00       	jmp    925d28 <future_backtest::RunnerCore::run_multi+0x3758>
  924854:	48 01 fe             	add    rsi,rdi
  924857:	45 31 ed             	xor    r13d,r13d
  92485a:	4c 8b b4 24 b0 1a 00 	mov    r14,QWORD PTR [rsp+0x1ab0]
  924861:	00 
  924862:	48 29 fe             	sub    rsi,rdi
  924865:	48 c1 e7 06          	shl    rdi,0x6
  924869:	4c 01 f7             	add    rdi,r14
  92486c:	e8 ef 4a 0c 00       	call   9e9360 <_ZN4core3ptr89drop_in_place$LT$$u5b$future_backtest..MetaControl..router..MetaDecisionSnapshot$u5d$$GT$17hf1a8d774989df26aE.llvm.12364612859142937606>
  924871:	4c 89 f7             	mov    rdi,r14
  924874:	4c 89 ee             	mov    rsi,r13
  924877:	e8 e4 4a 0c 00       	call   9e9360 <_ZN4core3ptr89drop_in_place$LT$$u5b$future_backtest..MetaControl..router..MetaDecisionSnapshot$u5d$$GT$17hf1a8d774989df26aE.llvm.12364612859142937606>
  92487c:	48 85 db             	test   rbx,rbx
  92487f:	0f 84 35 15 00 00    	je     925dba <future_backtest::RunnerCore::run_multi+0x37ea>
  924885:	48 c1 e3 06          	shl    rbx,0x6
  924889:	ba 08 00 00 00       	mov    edx,0x8
  92488e:	4c 89 f7             	mov    rdi,r14
  924891:	48 89 de             	mov    rsi,rbx
  924894:	ff 15 86 72 fd 00    	call   QWORD PTR [rip+0xfd7286]        # 18fbb20 <_DYNAMIC+0x220>
  92489a:	e9 1b 15 00 00       	jmp    925dba <future_backtest::RunnerCore::run_multi+0x37ea>
  92489f:	48 8b 44 24 18       	mov    rax,QWORD PTR [rsp+0x18]
  9248a4:	48 89 84 24 80 1b 00 	mov    QWORD PTR [rsp+0x1b80],rax
  9248ab:	00 
  9248ac:	48 8d 05 ad d1 fd ff 	lea    rax,[rip+0xfffffffffffdd1ad]        # 901a60 <<alloc::string::String as core::fmt::Display>::fmt>
  9248b3:	48 89 84 24 88 1b 00 	mov    QWORD PTR [rsp+0x1b88],rax
  9248ba:	00 
  9248bb:	48 8d 05 a6 c5 f2 00 	lea    rax,[rip+0xf2c5a6]        # 1850e68 <anon.609a31ba814f1e4156e50677fc366a7f.492.llvm.5215769359700358943+0x778>
  9248c2:	48 89 84 24 d0 11 00 	mov    QWORD PTR [rsp+0x11d0],rax
  9248c9:	00 
  9248ca:	48 c7 84 24 d8 11 00 	mov    QWORD PTR [rsp+0x11d8],0x2
  9248d1:	00 02 00 00 00 
  9248d6:	48 c7 84 24 f0 11 00 	mov    QWORD PTR [rsp+0x11f0],0x0
  9248dd:	00 00 00 00 00 
  9248e2:	48 8d 84 24 80 1b 00 	lea    rax,[rsp+0x1b80]
  9248e9:	00 
  9248ea:	48 89 84 24 e0 11 00 	mov    QWORD PTR [rsp+0x11e0],rax
  9248f1:	00 
  9248f2:	48 c7 84 24 e8 11 00 	mov    QWORD PTR [rsp+0x11e8],0x1
  9248f9:	00 01 00 00 00 
  9248fe:	48 8d 9c 24 70 03 00 	lea    rbx,[rsp+0x370]
  924905:	00 
  924906:	48 8d b4 24 d0 11 00 	lea    rsi,[rsp+0x11d0]
  92490d:	00 
  92490e:	48 89 df             	mov    rdi,rbx
  924911:	ff 15 41 77 fd 00    	call   QWORD PTR [rip+0xfd7741]        # 18fc058 <_DYNAMIC+0x758>
  924917:	e9 0c 14 00 00       	jmp    925d28 <future_backtest::RunnerCore::run_multi+0x3758>
  92491c:	48 8b b4 24 d0 11 00 	mov    rsi,QWORD PTR [rsp+0x11d0]
  924923:	00 
  924924:	48 85 f6             	test   rsi,rsi
  924927:	74 0e                	je     924937 <future_backtest::RunnerCore::run_multi+0x2367>
  924929:	ba 01 00 00 00       	mov    edx,0x1
  92492e:	48 89 ef             	mov    rdi,rbp
  924931:	ff 15 e9 71 fd 00    	call   QWORD PTR [rip+0xfd71e9]        # 18fbb20 <_DYNAMIC+0x220>
  924937:	48 8b b4 24 80 1b 00 	mov    rsi,QWORD PTR [rsp+0x1b80]
  92493e:	00 
  92493f:	48 85 f6             	test   rsi,rsi
  924942:	74 0e                	je     924952 <future_backtest::RunnerCore::run_multi+0x2382>
  924944:	ba 01 00 00 00       	mov    edx,0x1
  924949:	4c 89 f7             	mov    rdi,r14
  92494c:	ff 15 ce 71 fd 00    	call   QWORD PTR [rip+0xfd71ce]        # 18fbb20 <_DYNAMIC+0x220>
  924952:	48 8b 44 24 18       	mov    rax,QWORD PTR [rsp+0x18]
  924957:	48 89 84 24 80 1b 00 	mov    QWORD PTR [rsp+0x1b80],rax
  92495e:	00 
  92495f:	48 8d 05 fa d0 fd ff 	lea    rax,[rip+0xfffffffffffdd0fa]        # 901a60 <<alloc::string::String as core::fmt::Display>::fmt>
  924966:	48 89 84 24 88 1b 00 	mov    QWORD PTR [rsp+0x1b88],rax
  92496d:	00 
  92496e:	48 8d 05 83 c5 f2 00 	lea    rax,[rip+0xf2c583]        # 1850ef8 <anon.609a31ba814f1e4156e50677fc366a7f.492.llvm.5215769359700358943+0x808>
  924975:	48 89 84 24 d0 11 00 	mov    QWORD PTR [rsp+0x11d0],rax
  92497c:	00 
  92497d:	48 c7 84 24 d8 11 00 	mov    QWORD PTR [rsp+0x11d8],0x2
  924984:	00 02 00 00 00 
  924989:	48 c7 84 24 f0 11 00 	mov    QWORD PTR [rsp+0x11f0],0x0
  924990:	00 00 00 00 00 
  924995:	48 8d 84 24 80 1b 00 	lea    rax,[rsp+0x1b80]
  92499c:	00 
  92499d:	48 89 84 24 e0 11 00 	mov    QWORD PTR [rsp+0x11e0],rax
  9249a4:	00 
  9249a5:	48 c7 84 24 e8 11 00 	mov    QWORD PTR [rsp+0x11e8],0x1
  9249ac:	00 01 00 00 00 
  9249b1:	48 8d 9c 24 40 01 00 	lea    rbx,[rsp+0x140]
  9249b8:	00 
  9249b9:	48 8d b4 24 d0 11 00 	lea    rsi,[rsp+0x11d0]
  9249c0:	00 
  9249c1:	48 89 df             	mov    rdi,rbx
  9249c4:	ff 15 8e 76 fd 00    	call   QWORD PTR [rip+0xfd768e]        # 18fc058 <_DYNAMIC+0x758>
  9249ca:	e9 59 13 00 00       	jmp    925d28 <future_backtest::RunnerCore::run_multi+0x3758>
  9249cf:	45 31 f6             	xor    r14d,r14d
  9249d2:	48 8d 15 e7 86 f2 00 	lea    rdx,[rip+0xf286e7]        # 184d0c0 <anon.793b25f609afd3960f1a0d096d3931cc.31.llvm.1325298290625399205>
  9249d9:	4c 89 f7             	mov    rdi,r14
  9249dc:	4c 89 fe             	mov    rsi,r15
  9249df:	ff 15 93 77 fd 00    	call   QWORD PTR [rip+0xfd7793]        # 18fc178 <_DYNAMIC+0x878>
  9249e5:	e9 32 6b 00 00       	jmp    92b51c <future_backtest::RunnerCore::run_multi+0x8f4c>
  9249ea:	48 89 b4 24 90 00 00 	mov    QWORD PTR [rsp+0x90],rsi
  9249f1:	00 
  9249f2:	48 89 54 24 70       	mov    QWORD PTR [rsp+0x70],rdx
  9249f7:	48 c7 84 24 d0 11 00 	mov    QWORD PTR [rsp+0x11d0],0x0
  9249fe:	00 00 00 00 00 
  924a03:	48 c7 84 24 d8 11 00 	mov    QWORD PTR [rsp+0x11d8],0x8
  924a0a:	00 08 00 00 00 
  924a0f:	48 c7 84 24 e0 11 00 	mov    QWORD PTR [rsp+0x11e0],0x0
  924a16:	00 00 00 00 00 
  924a1b:	31 f6                	xor    esi,esi
  924a1d:	45 31 ed             	xor    r13d,r13d
  924a20:	49 89 dc             	mov    r12,rbx
  924a23:	48 8b 84 24 d8 11 00 	mov    rax,QWORD PTR [rsp+0x11d8]
  924a2a:	00 
  924a2b:	48 8d 0c 76          	lea    rcx,[rsi+rsi*2]
  924a2f:	48 89 44 24 20       	mov    QWORD PTR [rsp+0x20],rax
  924a34:	48 8d 0c c8          	lea    rcx,[rax+rcx*8]
  924a38:	eb 06                	jmp    924a40 <future_backtest::RunnerCore::run_multi+0x2470>
  924a3a:	4c 89 fb             	mov    rbx,r15
  924a3d:	48 89 c6             	mov    rsi,rax
  924a40:	4d 85 ed             	test   r13,r13
  924a43:	74 1b                	je     924a60 <future_backtest::RunnerCore::run_multi+0x2490>
  924a45:	4c 3b ac 24 80 00 00 	cmp    r13,QWORD PTR [rsp+0x80]
  924a4c:	00 
  924a4d:	74 11                	je     924a60 <future_backtest::RunnerCore::run_multi+0x2490>
  924a4f:	48 89 f0             	mov    rax,rsi
  924a52:	49 89 df             	mov    r15,rbx
  924a55:	4c 89 ee             	mov    rsi,r13
  924a58:	eb 41                	jmp    924a9b <future_backtest::RunnerCore::run_multi+0x24cb>
  924a5a:	66 0f 1f 44 00 00    	nop    WORD PTR [rax+rax*1+0x0]
  924a60:	49 39 ec             	cmp    r12,rbp
  924a63:	0f 84 23 01 00 00    	je     924b8c <future_backtest::RunnerCore::run_multi+0x25bc>
  924a69:	49 8b 94 24 e0 01 00 	mov    rdx,QWORD PTR [r12+0x1e0]
  924a70:	00 
  924a71:	49 81 c4 08 08 00 00 	add    r12,0x808
  924a78:	48 85 d2             	test   rdx,rdx
  924a7b:	74 e3                	je     924a60 <future_backtest::RunnerCore::run_multi+0x2490>
  924a7d:	48 89 f0             	mov    rax,rsi
  924a80:	49 89 df             	mov    r15,rbx
  924a83:	49 8b b4 24 d0 f9 ff 	mov    rsi,QWORD PTR [r12-0x630]
  924a8a:	ff 
  924a8b:	48 8d 14 52          	lea    rdx,[rdx+rdx*2]
  924a8f:	48 8d 14 d6          	lea    rdx,[rsi+rdx*8]
  924a93:	48 89 94 24 80 00 00 	mov    QWORD PTR [rsp+0x80],rdx
  924a9a:	00 
  924a9b:	4c 8d 6e 18          	lea    r13,[rsi+0x18]
  924a9f:	48 85 c0             	test   rax,rax
  924aa2:	74 6c                	je     924b10 <future_backtest::RunnerCore::run_multi+0x2540>
  924aa4:	48 8b 56 08          	mov    rdx,QWORD PTR [rsi+0x8]
  924aa8:	48 8b 7e 10          	mov    rdi,QWORD PTR [rsi+0x10]
  924aac:	4c 8b 44 24 20       	mov    r8,QWORD PTR [rsp+0x20]
  924ab1:	eb 09                	jmp    924abc <future_backtest::RunnerCore::run_multi+0x24ec>
  924ab3:	49 83 c0 18          	add    r8,0x18
  924ab7:	49 39 c8             	cmp    r8,rcx
  924aba:	74 54                	je     924b10 <future_backtest::RunnerCore::run_multi+0x2540>
  924abc:	49 39 78 10          	cmp    QWORD PTR [r8+0x10],rdi
  924ac0:	75 f1                	jne    924ab3 <future_backtest::RunnerCore::run_multi+0x24e3>
  924ac2:	4d 8b 48 08          	mov    r9,QWORD PTR [r8+0x8]
  924ac6:	45 31 d2             	xor    r10d,r10d
  924ac9:	0f 1f 80 00 00 00 00 	nop    DWORD PTR [rax+0x0]
  924ad0:	4c 39 d7             	cmp    rdi,r10
  924ad3:	0f 84 61 ff ff ff    	je     924a3a <future_backtest::RunnerCore::run_multi+0x246a>
  924ad9:	47 0f b6 1c 11       	movzx  r11d,BYTE PTR [r9+r10*1]
  924ade:	41 8d 5b bf          	lea    ebx,[r11-0x41]
  924ae2:	80 fb 1a             	cmp    bl,0x1a
  924ae5:	0f 92 c3             	setb   bl
  924ae8:	c0 e3 05             	shl    bl,0x5
  924aeb:	44 08 db             	or     bl,r11b
  924aee:	46 0f b6 1c 12       	movzx  r11d,BYTE PTR [rdx+r10*1]
  924af3:	45 8d 73 bf          	lea    r14d,[r11-0x41]
  924af7:	41 80 fe 1a          	cmp    r14b,0x1a
  924afb:	41 0f 92 c6          	setb   r14b
  924aff:	41 c0 e6 05          	shl    r14b,0x5
  924b03:	45 08 de             	or     r14b,r11b
  924b06:	49 ff c2             	inc    r10
  924b09:	44 38 f3             	cmp    bl,r14b
  924b0c:	74 c2                	je     924ad0 <future_backtest::RunnerCore::run_multi+0x2500>
  924b0e:	eb a3                	jmp    924ab3 <future_backtest::RunnerCore::run_multi+0x24e3>
  924b10:	48 8d bc 24 10 06 00 	lea    rdi,[rsp+0x610]
  924b17:	00 
  924b18:	48 8d 15 49 c4 f2 00 	lea    rdx,[rip+0xf2c449]        # 1850f68 <anon.609a31ba814f1e4156e50677fc366a7f.492.llvm.5215769359700358943+0x878>
  924b1f:	ff 15 13 75 fd 00    	call   QWORD PTR [rip+0xfd7513]        # 18fc038 <_DYNAMIC+0x738>
  924b25:	48 8b 84 24 e0 11 00 	mov    rax,QWORD PTR [rsp+0x11e0]
  924b2c:	00 
  924b2d:	49 89 c6             	mov    r14,rax
  924b30:	48 3b 84 24 d0 11 00 	cmp    rax,QWORD PTR [rsp+0x11d0]
  924b37:	00 
  924b38:	4c 89 fb             	mov    rbx,r15
  924b3b:	75 15                	jne    924b52 <future_backtest::RunnerCore::run_multi+0x2582>
  924b3d:	48 8d bc 24 d0 11 00 	lea    rdi,[rsp+0x11d0]
  924b44:	00 
  924b45:	48 8d 35 34 c4 f2 00 	lea    rsi,[rip+0xf2c434]        # 1850f80 <anon.609a31ba814f1e4156e50677fc366a7f.492.llvm.5215769359700358943+0x890>
  924b4c:	ff 15 2e 7a fd 00    	call   QWORD PTR [rip+0xfd7a2e]        # 18fc580 <_DYNAMIC+0xc80>
  924b52:	48 8b 84 24 d8 11 00 	mov    rax,QWORD PTR [rsp+0x11d8]
  924b59:	00 
  924b5a:	4c 89 f6             	mov    rsi,r14
  924b5d:	4b 8d 0c 76          	lea    rcx,[r14+r14*2]
  924b61:	48 8b 94 24 20 06 00 	mov    rdx,QWORD PTR [rsp+0x620]
  924b68:	00 
  924b69:	48 89 54 c8 10       	mov    QWORD PTR [rax+rcx*8+0x10],rdx
  924b6e:	66 0f 10 84 24 10 06 	movupd xmm0,XMMWORD PTR [rsp+0x610]
  924b75:	00 00 
  924b77:	66 0f 11 04 c8       	movupd XMMWORD PTR [rax+rcx*8],xmm0
  924b7c:	48 ff c6             	inc    rsi
  924b7f:	48 89 b4 24 e0 11 00 	mov    QWORD PTR [rsp+0x11e0],rsi
  924b86:	00 
  924b87:	e9 97 fe ff ff       	jmp    924a23 <future_backtest::RunnerCore::run_multi+0x2453>
  924b8c:	48 8b 84 24 e0 11 00 	mov    rax,QWORD PTR [rsp+0x11e0]
  924b93:	00 
  924b94:	48 89 84 24 90 1b 00 	mov    QWORD PTR [rsp+0x1b90],rax
  924b9b:	00 
  924b9c:	66 0f 10 84 24 d0 11 	movupd xmm0,XMMWORD PTR [rsp+0x11d0]
  924ba3:	00 00 
  924ba5:	66 0f 29 84 24 80 1b 	movapd XMMWORD PTR [rsp+0x1b80],xmm0
  924bac:	00 00 
  924bae:	48 8b 54 24 70       	mov    rdx,QWORD PTR [rsp+0x70]
  924bb3:	48 8b b4 24 90 00 00 	mov    rsi,QWORD PTR [rsp+0x90]
  924bba:	00 
  924bbb:	48 8d 04 d6          	lea    rax,[rsi+rdx*8]
  924bbf:	48 89 d9             	mov    rcx,rbx
  924bc2:	66 66 66 66 66 2e 0f 	data16 data16 data16 data16 cs nop WORD PTR [rax+rax*1+0x0]
  924bc9:	1f 84 00 00 00 00 00 
  924bd0:	48 85 c0             	test   rax,rax
  924bd3:	74 29                	je     924bfe <future_backtest::RunnerCore::run_multi+0x262e>
  924bd5:	48 05 f8 f7 ff ff    	add    rax,0xfffffffffffff7f8
  924bdb:	48 83 b9 f8 01 00 00 	cmp    QWORD PTR [rcx+0x1f8],0x0
  924be2:	00 
  924be3:	48 8d 89 08 08 00 00 	lea    rcx,[rcx+0x808]
  924bea:	75 e4                	jne    924bd0 <future_backtest::RunnerCore::run_multi+0x2600>
  924bec:	48 ba 00 00 00 00 00 	movabs rdx,0x8000000000000000
  924bf3:	00 00 80 
  924bf6:	48 89 d0             	mov    rax,rdx
  924bf9:	e9 28 02 00 00       	jmp    924e26 <future_backtest::RunnerCore::run_multi+0x2856>
  924bfe:	48 c7 84 24 10 06 00 	mov    QWORD PTR [rsp+0x610],0x0
  924c05:	00 00 00 00 00 
  924c0a:	48 c7 84 24 18 06 00 	mov    QWORD PTR [rsp+0x618],0x8
  924c11:	00 08 00 00 00 
  924c16:	45 31 ed             	xor    r13d,r13d
  924c19:	48 8d 35 78 c3 f2 00 	lea    rsi,[rip+0xf2c378]        # 1850f98 <anon.609a31ba814f1e4156e50677fc366a7f.492.llvm.5215769359700358943+0x8a8>
  924c20:	48 8d bc 24 10 06 00 	lea    rdi,[rsp+0x610]
  924c27:	00 
  924c28:	4c 8b 1d f9 7a fd 00 	mov    r11,QWORD PTR [rip+0xfd7af9]        # 18fc728 <_DYNAMIC+0xe28>
  924c2f:	45 31 e4             	xor    r12d,r12d
  924c32:	4c 89 e9             	mov    rcx,r13
  924c35:	48 83 e1 f8          	and    rcx,0xfffffffffffffff8
  924c39:	4c 89 ac 24 20 06 00 	mov    QWORD PTR [rsp+0x620],r13
  924c40:	00 
  924c41:	48 8b 84 24 18 06 00 	mov    rax,QWORD PTR [rsp+0x618]
  924c48:	00 
  924c49:	44 89 ea             	mov    edx,r13d
  924c4c:	83 e2 07             	and    edx,0x7
  924c4f:	4d 85 e4             	test   r12,r12
  924c52:	74 0c                	je     924c60 <future_backtest::RunnerCore::run_multi+0x2690>
  924c54:	4d 39 f4             	cmp    r12,r14
  924c57:	75 2e                	jne    924c87 <future_backtest::RunnerCore::run_multi+0x26b7>
  924c59:	0f 1f 80 00 00 00 00 	nop    DWORD PTR [rax+0x0]
  924c60:	48 39 eb             	cmp    rbx,rbp
  924c63:	0f 84 96 01 00 00    	je     924dff <future_backtest::RunnerCore::run_multi+0x282f>
  924c69:	4c 8b 83 f8 01 00 00 	mov    r8,QWORD PTR [rbx+0x1f8]
  924c70:	48 81 c3 08 08 00 00 	add    rbx,0x808
  924c77:	4d 85 c0             	test   r8,r8
  924c7a:	74 e4                	je     924c60 <future_backtest::RunnerCore::run_multi+0x2690>
  924c7c:	4c 8b a3 e8 f9 ff ff 	mov    r12,QWORD PTR [rbx-0x618]
  924c83:	4f 8d 34 c4          	lea    r14,[r12+r8*8]
  924c87:	f2 41 0f 10 04 24    	movsd  xmm0,QWORD PTR [r12]
  924c8d:	49 83 c4 08          	add    r12,0x8
  924c91:	66 0f 29 44 24 20    	movapd XMMWORD PTR [rsp+0x20],xmm0
  924c97:	66 0f 14 c0          	unpcklpd xmm0,xmm0
  924c9b:	45 31 c0             	xor    r8d,r8d
  924c9e:	66 90                	xchg   ax,ax
  924ca0:	4c 39 c1             	cmp    rcx,r8
  924ca3:	74 4e                	je     924cf3 <future_backtest::RunnerCore::run_multi+0x2723>
  924ca5:	66 42 0f 10 0c c0    	movupd xmm1,XMMWORD PTR [rax+r8*8]
  924cab:	66 42 0f 10 54 c0 10 	movupd xmm2,XMMWORD PTR [rax+r8*8+0x10]
  924cb2:	66 42 0f 10 5c c0 20 	movupd xmm3,XMMWORD PTR [rax+r8*8+0x20]
  924cb9:	66 42 0f 10 64 c0 30 	movupd xmm4,XMMWORD PTR [rax+r8*8+0x30]
  924cc0:	66 0f c2 d0 00       	cmpeqpd xmm2,xmm0
  924cc5:	66 0f c2 c8 00       	cmpeqpd xmm1,xmm0
  924cca:	66 0f 6b ca          	packssdw xmm1,xmm2
  924cce:	66 0f c2 d8 00       	cmpeqpd xmm3,xmm0
  924cd3:	66 0f c2 e0 00       	cmpeqpd xmm4,xmm0
  924cd8:	66 0f 6b dc          	packssdw xmm3,xmm4
  924cdc:	66 0f 6b cb          	packssdw xmm1,xmm3
  924ce0:	66 44 0f d7 c9       	pmovmskb r9d,xmm1
  924ce5:	49 83 c0 08          	add    r8,0x8
  924ce9:	45 85 c9             	test   r9d,r9d
  924cec:	74 b2                	je     924ca0 <future_backtest::RunnerCore::run_multi+0x26d0>
  924cee:	e9 5c ff ff ff       	jmp    924c4f <future_backtest::RunnerCore::run_multi+0x267f>
  924cf3:	48 85 d2             	test   rdx,rdx
  924cf6:	0f 84 c5 00 00 00    	je     924dc1 <future_backtest::RunnerCore::run_multi+0x27f1>
  924cfc:	f2 0f 10 04 c8       	movsd  xmm0,QWORD PTR [rax+rcx*8]
  924d01:	66 0f 2e 44 24 20    	ucomisd xmm0,QWORD PTR [rsp+0x20]
  924d07:	75 06                	jne    924d0f <future_backtest::RunnerCore::run_multi+0x273f>
  924d09:	0f 8b 40 ff ff ff    	jnp    924c4f <future_backtest::RunnerCore::run_multi+0x267f>
  924d0f:	83 fa 01             	cmp    edx,0x1
  924d12:	0f 84 a9 00 00 00    	je     924dc1 <future_backtest::RunnerCore::run_multi+0x27f1>
  924d18:	f2 0f 10 44 c8 08    	movsd  xmm0,QWORD PTR [rax+rcx*8+0x8]
  924d1e:	66 0f 2e 44 24 20    	ucomisd xmm0,QWORD PTR [rsp+0x20]
  924d24:	75 06                	jne    924d2c <future_backtest::RunnerCore::run_multi+0x275c>
  924d26:	0f 8b 23 ff ff ff    	jnp    924c4f <future_backtest::RunnerCore::run_multi+0x267f>
  924d2c:	83 fa 02             	cmp    edx,0x2
  924d2f:	0f 84 8c 00 00 00    	je     924dc1 <future_backtest::RunnerCore::run_multi+0x27f1>
  924d35:	f2 0f 10 44 c8 10    	movsd  xmm0,QWORD PTR [rax+rcx*8+0x10]
  924d3b:	66 0f 2e 44 24 20    	ucomisd xmm0,QWORD PTR [rsp+0x20]
  924d41:	75 06                	jne    924d49 <future_backtest::RunnerCore::run_multi+0x2779>
  924d43:	0f 8b 06 ff ff ff    	jnp    924c4f <future_backtest::RunnerCore::run_multi+0x267f>
  924d49:	83 fa 03             	cmp    edx,0x3
  924d4c:	74 73                	je     924dc1 <future_backtest::RunnerCore::run_multi+0x27f1>
  924d4e:	f2 0f 10 44 c8 18    	movsd  xmm0,QWORD PTR [rax+rcx*8+0x18]
  924d54:	66 0f 2e 44 24 20    	ucomisd xmm0,QWORD PTR [rsp+0x20]
  924d5a:	75 06                	jne    924d62 <future_backtest::RunnerCore::run_multi+0x2792>
  924d5c:	0f 8b ed fe ff ff    	jnp    924c4f <future_backtest::RunnerCore::run_multi+0x267f>
  924d62:	83 fa 04             	cmp    edx,0x4
  924d65:	74 5a                	je     924dc1 <future_backtest::RunnerCore::run_multi+0x27f1>
  924d67:	f2 0f 10 44 c8 20    	movsd  xmm0,QWORD PTR [rax+rcx*8+0x20]
  924d6d:	66 0f 2e 44 24 20    	ucomisd xmm0,QWORD PTR [rsp+0x20]
  924d73:	75 06                	jne    924d7b <future_backtest::RunnerCore::run_multi+0x27ab>
  924d75:	0f 8b d4 fe ff ff    	jnp    924c4f <future_backtest::RunnerCore::run_multi+0x267f>
  924d7b:	83 fa 05             	cmp    edx,0x5
  924d7e:	74 41                	je     924dc1 <future_backtest::RunnerCore::run_multi+0x27f1>
  924d80:	f2 0f 10 44 c8 28    	movsd  xmm0,QWORD PTR [rax+rcx*8+0x28]
  924d86:	66 0f 2e 44 24 20    	ucomisd xmm0,QWORD PTR [rsp+0x20]
  924d8c:	75 06                	jne    924d94 <future_backtest::RunnerCore::run_multi+0x27c4>
  924d8e:	0f 8b bb fe ff ff    	jnp    924c4f <future_backtest::RunnerCore::run_multi+0x267f>
  924d94:	83 fa 06             	cmp    edx,0x6
  924d97:	74 28                	je     924dc1 <future_backtest::RunnerCore::run_multi+0x27f1>
  924d99:	48 83 fa 07          	cmp    rdx,0x7
  924d9d:	41 0f 95 c1          	setne  r9b
  924da1:	66 0f 28 44 24 20    	movapd xmm0,XMMWORD PTR [rsp+0x20]
  924da7:	66 0f 2e 44 c8 30    	ucomisd xmm0,QWORD PTR [rax+rcx*8+0x30]
  924dad:	41 0f 9b c2          	setnp  r10b
  924db1:	41 0f 94 c0          	sete   r8b
  924db5:	45 20 d0             	and    r8b,r10b
  924db8:	45 08 c8             	or     r8b,r9b
  924dbb:	0f 85 8e fe ff ff    	jne    924c4f <future_backtest::RunnerCore::run_multi+0x267f>
  924dc1:	4c 3b ac 24 10 06 00 	cmp    r13,QWORD PTR [rsp+0x610]
  924dc8:	00 
  924dc9:	75 20                	jne    924deb <future_backtest::RunnerCore::run_multi+0x281b>
  924dcb:	49 89 f7             	mov    r15,rsi
  924dce:	41 ff d3             	call   r11
  924dd1:	48 8b 84 24 18 06 00 	mov    rax,QWORD PTR [rsp+0x618]
  924dd8:	00 
  924dd9:	4c 89 fe             	mov    rsi,r15
  924ddc:	48 8d bc 24 10 06 00 	lea    rdi,[rsp+0x610]
  924de3:	00 
  924de4:	4c 8b 1d 3d 79 fd 00 	mov    r11,QWORD PTR [rip+0xfd793d]        # 18fc728 <_DYNAMIC+0xe28>
  924deb:	66 0f 28 44 24 20    	movapd xmm0,XMMWORD PTR [rsp+0x20]
  924df1:	f2 42 0f 11 04 e8    	movsd  QWORD PTR [rax+r13*8],xmm0
  924df7:	49 ff c5             	inc    r13
  924dfa:	e9 33 fe ff ff       	jmp    924c32 <future_backtest::RunnerCore::run_multi+0x2662>
  924dff:	48 8b 84 24 10 06 00 	mov    rax,QWORD PTR [rsp+0x610]
  924e06:	00 
  924e07:	48 8d 8c 24 18 06 00 	lea    rcx,[rsp+0x618]
  924e0e:	00 
  924e0f:	66 0f 10 01          	movupd xmm0,XMMWORD PTR [rcx]
  924e13:	66 0f 29 84 24 d0 11 	movapd XMMWORD PTR [rsp+0x11d0],xmm0
  924e1a:	00 00 
  924e1c:	48 ba 00 00 00 00 00 	movabs rdx,0x8000000000000000
  924e23:	00 00 80 
  924e26:	48 8b 8c 24 90 1b 00 	mov    rcx,QWORD PTR [rsp+0x1b90]
  924e2d:	00 
  924e2e:	48 89 8c 24 d0 19 00 	mov    QWORD PTR [rsp+0x19d0],rcx
  924e35:	00 
  924e36:	0f 28 84 24 80 1b 00 	movaps xmm0,XMMWORD PTR [rsp+0x1b80]
  924e3d:	00 
  924e3e:	0f 11 84 24 c0 19 00 	movups XMMWORD PTR [rsp+0x19c0],xmm0
  924e45:	00 
  924e46:	48 89 94 24 a8 19 00 	mov    QWORD PTR [rsp+0x19a8],rdx
  924e4d:	00 
  924e4e:	48 89 84 24 d8 19 00 	mov    QWORD PTR [rsp+0x19d8],rax
  924e55:	00 
  924e56:	66 0f 28 84 24 d0 11 	movapd xmm0,XMMWORD PTR [rsp+0x11d0]
  924e5d:	00 00 
  924e5f:	66 0f 11 84 24 e0 19 	movupd XMMWORD PTR [rsp+0x19e0],xmm0
  924e66:	00 00 
  924e68:	48 83 bc 24 e0 00 00 	cmp    QWORD PTR [rsp+0xe0],0x0
  924e6f:	00 00 
  924e71:	0f 84 9c 62 00 00    	je     92b113 <future_backtest::RunnerCore::run_multi+0x8b43>
  924e77:	be 68 01 00 00       	mov    esi,0x168
  924e7c:	48 03 b4 24 d8 00 00 	add    rsi,QWORD PTR [rsp+0xd8]
  924e83:	00 
  924e84:	48 8d 15 9d c2 f2 00 	lea    rdx,[rip+0xf2c29d]        # 1851128 <anon.609a31ba814f1e4156e50677fc366a7f.492.llvm.5215769359700358943+0xa38>
  924e8b:	48 8d bc 24 40 0e 00 	lea    rdi,[rsp+0xe40]
  924e92:	00 
  924e93:	ff 15 9f 71 fd 00    	call   QWORD PTR [rip+0xfd719f]        # 18fc038 <_DYNAMIC+0x738>
  924e99:	48 83 bc 24 e0 00 00 	cmp    QWORD PTR [rsp+0xe0],0x0
  924ea0:	00 00 
  924ea2:	4c 8d b4 24 80 1b 00 	lea    r14,[rsp+0x1b80]
  924ea9:	00 
  924eaa:	0f 84 79 62 00 00    	je     92b129 <future_backtest::RunnerCore::run_multi+0x8b59>
  924eb0:	48 8b 84 24 d8 00 00 	mov    rax,QWORD PTR [rsp+0xd8]
  924eb7:	00 
  924eb8:	0f b6 b0 f9 07 00 00 	movzx  esi,BYTE PTR [rax+0x7f9]
  924ebf:	66 0f 6f 84 24 60 0e 	movdqa xmm0,XMMWORD PTR [rsp+0xe60]
  924ec6:	00 00 
  924ec8:	66 0f 6f 8c 24 70 0e 	movdqa xmm1,XMMWORD PTR [rsp+0xe70]
  924ecf:	00 00 
  924ed1:	66 0f 6f 94 24 80 0e 	movdqa xmm2,XMMWORD PTR [rsp+0xe80]
  924ed8:	00 00 
  924eda:	66 0f 7f 94 24 30 06 	movdqa XMMWORD PTR [rsp+0x630],xmm2
  924ee1:	00 00 
  924ee3:	66 0f 7f 8c 24 20 06 	movdqa XMMWORD PTR [rsp+0x620],xmm1
  924eea:	00 00 
  924eec:	66 0f 7f 84 24 10 06 	movdqa XMMWORD PTR [rsp+0x610],xmm0
  924ef3:	00 00 
  924ef5:	40 b5 01             	mov    bpl,0x1
  924ef8:	48 8d bc 24 60 18 00 	lea    rdi,[rsp+0x1860]
  924eff:	00 
  924f00:	48 8d 94 24 40 0e 00 	lea    rdx,[rsp+0xe40]
  924f07:	00 
  924f08:	48 8d 8c 24 a8 19 00 	lea    rcx,[rsp+0x19a8]
  924f0f:	00 
  924f10:	4c 8d 84 24 10 06 00 	lea    r8,[rsp+0x610]
  924f17:	00 
  924f18:	ff 15 7a 84 fd 00    	call   QWORD PTR [rip+0xfd847a]        # 18fd398 <_DYNAMIC+0x1a98>
  924f1e:	48 8b 1d b3 6f fd 00 	mov    rbx,QWORD PTR [rip+0xfd6fb3]        # 18fbed8 <_DYNAMIC+0x5d8>
  924f25:	40 b5 01             	mov    bpl,0x1
  924f28:	0f b6 94 24 b8 00 00 	movzx  edx,BYTE PTR [rsp+0xb8]
  924f2f:	00 
  924f30:	48 8d bc 24 10 06 00 	lea    rdi,[rsp+0x610]
  924f37:	00 
  924f38:	48 8d b4 24 60 18 00 	lea    rsi,[rsp+0x1860]
  924f3f:	00 
  924f40:	ff 15 5a 84 fd 00    	call   QWORD PTR [rip+0xfd845a]        # 18fd3a0 <_DYNAMIC+0x1aa0>
  924f46:	4c 8b bc 24 18 06 00 	mov    r15,QWORD PTR [rsp+0x618]
  924f4d:	00 
  924f4e:	f6 84 24 10 06 00 00 	test   BYTE PTR [rsp+0x610],0x1
  924f55:	01 
  924f56:	40 b5 01             	mov    bpl,0x1
  924f59:	0f 85 e9 0b 00 00    	jne    925b48 <future_backtest::RunnerCore::run_multi+0x3578>
  924f5f:	4d 85 ff             	test   r15,r15
  924f62:	0f 84 58 51 00 00    	je     92a0c0 <future_backtest::RunnerCore::run_multi+0x7af0>
  924f68:	48 8b 94 24 20 06 00 	mov    rdx,QWORD PTR [rsp+0x620]
  924f6f:	00 
  924f70:	40 b5 01             	mov    bpl,0x1
  924f73:	48 8d 0d 6e 9a f2 00 	lea    rcx,[rip+0xf29a6e]        # 184e9e8 <anon.609a31ba814f1e4156e50677fc366a7f.99.llvm.5215769359700358943>
  924f7a:	48 8d bc 24 a8 01 00 	lea    rdi,[rsp+0x1a8]
  924f81:	00 
  924f82:	4c 89 fe             	mov    rsi,r15
  924f85:	e8 d6 d3 fa ff       	call   8d2360 <<alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter>
  924f8a:	48 b8 00 00 00 00 00 	movabs rax,0x8000000000000000
  924f91:	00 00 80 
  924f94:	48 39 84 24 f0 19 00 	cmp    QWORD PTR [rsp+0x19f0],rax
  924f9b:	00 
  924f9c:	74 6a                	je     925008 <future_backtest::RunnerCore::run_multi+0x2a38>
  924f9e:	80 bc 24 48 1a 00 00 	cmp    BYTE PTR [rsp+0x1a48],0x0
  924fa5:	00 
  924fa6:	75 60                	jne    925008 <future_backtest::RunnerCore::run_multi+0x2a38>
  924fa8:	48 8b 9c 24 b0 01 00 	mov    rbx,QWORD PTR [rsp+0x1b0]
  924faf:	00 
  924fb0:	4c 8b ac 24 b8 01 00 	mov    r13,QWORD PTR [rsp+0x1b8]
  924fb7:	00 
  924fb8:	49 69 f5 28 01 00 00 	imul   rsi,r13,0x128
  924fbf:	48 01 de             	add    rsi,rbx
  924fc2:	48 89 df             	mov    rdi,rbx
  924fc5:	e8 76 ab fd ff       	call   8ffb40 <core::iter::traits::iterator::Iterator::reduce>
  924fca:	a8 01                	test   al,0x1
  924fcc:	0f 84 d3 5f 00 00    	je     92afa5 <future_backtest::RunnerCore::run_multi+0x89d5>
  924fd2:	48 8d bc 24 a8 1a 00 	lea    rdi,[rsp+0x1aa8]
  924fd9:	00 
  924fda:	66 0f d6 84 24 e0 0e 	movq   QWORD PTR [rsp+0xee0],xmm0
  924fe1:	00 00 
  924fe3:	48 8d b4 24 f0 19 00 	lea    rsi,[rsp+0x19f0]
  924fea:	00 
  924feb:	ff 15 d7 84 fd 00    	call   QWORD PTR [rip+0xfd84d7]        # 18fd4c8 <_DYNAMIC+0x1bc8>
  924ff1:	84 c0                	test   al,al
  924ff3:	0f 84 91 0f 00 00    	je     925f8a <future_backtest::RunnerCore::run_multi+0x39ba>
  924ff9:	48 8b 1d d8 6e fd 00 	mov    rbx,QWORD PTR [rip+0xfd6ed8]        # 18fbed8 <_DYNAMIC+0x5d8>
  925000:	4c 8d b4 24 80 1b 00 	lea    r14,[rsp+0x1b80]
  925007:	00 
  925008:	48 8b 84 24 b8 01 00 	mov    rax,QWORD PTR [rsp+0x1b8]
  92500f:	00 
  925010:	48 83 f8 02          	cmp    rax,0x2
  925014:	0f 82 76 03 00 00    	jb     925390 <future_backtest::RunnerCore::run_multi+0x2dc0>
  92501a:	48 8b 8c 24 b0 01 00 	mov    rcx,QWORD PTR [rsp+0x1b0]
  925021:	00 
  925022:	48 89 c2             	mov    rdx,rax
  925025:	48 d1 ea             	shr    rdx,1
  925028:	48 69 f0 28 01 00 00 	imul   rsi,rax,0x128
  92502f:	48 01 ce             	add    rsi,rcx
  925032:	48 83 c6 f8          	add    rsi,0xfffffffffffffff8
  925036:	48 81 c1 20 01 00 00 	add    rcx,0x120
  92503d:	48 8b b9 e0 fe ff ff 	mov    rdi,QWORD PTR [rcx-0x120]
  925044:	4c 8b 86 e0 fe ff ff 	mov    r8,QWORD PTR [rsi-0x120]
  92504b:	4c 89 81 e0 fe ff ff 	mov    QWORD PTR [rcx-0x120],r8
  925052:	48 89 be e0 fe ff ff 	mov    QWORD PTR [rsi-0x120],rdi
  925059:	48 8b b9 e8 fe ff ff 	mov    rdi,QWORD PTR [rcx-0x118]
  925060:	4c 8b 86 e8 fe ff ff 	mov    r8,QWORD PTR [rsi-0x118]
  925067:	4c 89 81 e8 fe ff ff 	mov    QWORD PTR [rcx-0x118],r8
  92506e:	48 89 be e8 fe ff ff 	mov    QWORD PTR [rsi-0x118],rdi
  925075:	48 8b b9 f0 fe ff ff 	mov    rdi,QWORD PTR [rcx-0x110]
  92507c:	4c 8b 86 f0 fe ff ff 	mov    r8,QWORD PTR [rsi-0x110]
  925083:	4c 89 81 f0 fe ff ff 	mov    QWORD PTR [rcx-0x110],r8
  92508a:	48 89 be f0 fe ff ff 	mov    QWORD PTR [rsi-0x110],rdi
  925091:	48 8b b9 f8 fe ff ff 	mov    rdi,QWORD PTR [rcx-0x108]
  925098:	4c 8b 86 f8 fe ff ff 	mov    r8,QWORD PTR [rsi-0x108]
  92509f:	4c 89 81 f8 fe ff ff 	mov    QWORD PTR [rcx-0x108],r8
  9250a6:	48 89 be f8 fe ff ff 	mov    QWORD PTR [rsi-0x108],rdi
  9250ad:	48 8b b9 00 ff ff ff 	mov    rdi,QWORD PTR [rcx-0x100]
  9250b4:	4c 8b 86 00 ff ff ff 	mov    r8,QWORD PTR [rsi-0x100]
  9250bb:	4c 89 81 00 ff ff ff 	mov    QWORD PTR [rcx-0x100],r8
  9250c2:	48 89 be 00 ff ff ff 	mov    QWORD PTR [rsi-0x100],rdi
  9250c9:	48 8b b9 08 ff ff ff 	mov    rdi,QWORD PTR [rcx-0xf8]
  9250d0:	4c 8b 86 08 ff ff ff 	mov    r8,QWORD PTR [rsi-0xf8]
  9250d7:	4c 89 81 08 ff ff ff 	mov    QWORD PTR [rcx-0xf8],r8
  9250de:	48 89 be 08 ff ff ff 	mov    QWORD PTR [rsi-0xf8],rdi
  9250e5:	48 8b b9 10 ff ff ff 	mov    rdi,QWORD PTR [rcx-0xf0]
  9250ec:	4c 8b 86 10 ff ff ff 	mov    r8,QWORD PTR [rsi-0xf0]
  9250f3:	4c 89 81 10 ff ff ff 	mov    QWORD PTR [rcx-0xf0],r8
  9250fa:	48 89 be 10 ff ff ff 	mov    QWORD PTR [rsi-0xf0],rdi
  925101:	48 8b b9 18 ff ff ff 	mov    rdi,QWORD PTR [rcx-0xe8]
  925108:	4c 8b 86 18 ff ff ff 	mov    r8,QWORD PTR [rsi-0xe8]
  92510f:	4c 89 81 18 ff ff ff 	mov    QWORD PTR [rcx-0xe8],r8
  925116:	48 89 be 18 ff ff ff 	mov    QWORD PTR [rsi-0xe8],rdi
  92511d:	48 8b b9 20 ff ff ff 	mov    rdi,QWORD PTR [rcx-0xe0]
  925124:	4c 8b 86 20 ff ff ff 	mov    r8,QWORD PTR [rsi-0xe0]
  92512b:	4c 89 81 20 ff ff ff 	mov    QWORD PTR [rcx-0xe0],r8
  925132:	48 89 be 20 ff ff ff 	mov    QWORD PTR [rsi-0xe0],rdi
  925139:	48 8b b9 28 ff ff ff 	mov    rdi,QWORD PTR [rcx-0xd8]
  925140:	4c 8b 86 28 ff ff ff 	mov    r8,QWORD PTR [rsi-0xd8]
  925147:	4c 89 81 28 ff ff ff 	mov    QWORD PTR [rcx-0xd8],r8
  92514e:	48 89 be 28 ff ff ff 	mov    QWORD PTR [rsi-0xd8],rdi
  925155:	48 8b b9 30 ff ff ff 	mov    rdi,QWORD PTR [rcx-0xd0]
  92515c:	4c 8b 86 30 ff ff ff 	mov    r8,QWORD PTR [rsi-0xd0]
  925163:	4c 89 81 30 ff ff ff 	mov    QWORD PTR [rcx-0xd0],r8
  92516a:	48 89 be 30 ff ff ff 	mov    QWORD PTR [rsi-0xd0],rdi
  925171:	48 8b b9 38 ff ff ff 	mov    rdi,QWORD PTR [rcx-0xc8]
  925178:	4c 8b 86 38 ff ff ff 	mov    r8,QWORD PTR [rsi-0xc8]
  92517f:	4c 89 81 38 ff ff ff 	mov    QWORD PTR [rcx-0xc8],r8
  925186:	48 89 be 38 ff ff ff 	mov    QWORD PTR [rsi-0xc8],rdi
  92518d:	48 8b b9 40 ff ff ff 	mov    rdi,QWORD PTR [rcx-0xc0]
  925194:	4c 8b 86 40 ff ff ff 	mov    r8,QWORD PTR [rsi-0xc0]
  92519b:	4c 89 81 40 ff ff ff 	mov    QWORD PTR [rcx-0xc0],r8
  9251a2:	48 89 be 40 ff ff ff 	mov    QWORD PTR [rsi-0xc0],rdi
  9251a9:	48 8b b9 48 ff ff ff 	mov    rdi,QWORD PTR [rcx-0xb8]
  9251b0:	4c 8b 86 48 ff ff ff 	mov    r8,QWORD PTR [rsi-0xb8]
  9251b7:	4c 89 81 48 ff ff ff 	mov    QWORD PTR [rcx-0xb8],r8
  9251be:	48 89 be 48 ff ff ff 	mov    QWORD PTR [rsi-0xb8],rdi
  9251c5:	48 8b b9 50 ff ff ff 	mov    rdi,QWORD PTR [rcx-0xb0]
  9251cc:	4c 8b 86 50 ff ff ff 	mov    r8,QWORD PTR [rsi-0xb0]
  9251d3:	4c 89 81 50 ff ff ff 	mov    QWORD PTR [rcx-0xb0],r8
  9251da:	48 89 be 50 ff ff ff 	mov    QWORD PTR [rsi-0xb0],rdi
  9251e1:	48 8b b9 58 ff ff ff 	mov    rdi,QWORD PTR [rcx-0xa8]
  9251e8:	4c 8b 86 58 ff ff ff 	mov    r8,QWORD PTR [rsi-0xa8]
  9251ef:	4c 89 81 58 ff ff ff 	mov    QWORD PTR [rcx-0xa8],r8
  9251f6:	48 89 be 58 ff ff ff 	mov    QWORD PTR [rsi-0xa8],rdi
  9251fd:	48 8b b9 60 ff ff ff 	mov    rdi,QWORD PTR [rcx-0xa0]
  925204:	4c 8b 86 60 ff ff ff 	mov    r8,QWORD PTR [rsi-0xa0]
  92520b:	4c 89 81 60 ff ff ff 	mov    QWORD PTR [rcx-0xa0],r8
  925212:	48 89 be 60 ff ff ff 	mov    QWORD PTR [rsi-0xa0],rdi
  925219:	48 8b b9 68 ff ff ff 	mov    rdi,QWORD PTR [rcx-0x98]
  925220:	4c 8b 86 68 ff ff ff 	mov    r8,QWORD PTR [rsi-0x98]
  925227:	4c 89 81 68 ff ff ff 	mov    QWORD PTR [rcx-0x98],r8
  92522e:	48 89 be 68 ff ff ff 	mov    QWORD PTR [rsi-0x98],rdi
  925235:	48 8b b9 70 ff ff ff 	mov    rdi,QWORD PTR [rcx-0x90]
  92523c:	4c 8b 86 70 ff ff ff 	mov    r8,QWORD PTR [rsi-0x90]
  925243:	4c 89 81 70 ff ff ff 	mov    QWORD PTR [rcx-0x90],r8
  92524a:	48 89 be 70 ff ff ff 	mov    QWORD PTR [rsi-0x90],rdi
  925251:	48 8b b9 78 ff ff ff 	mov    rdi,QWORD PTR [rcx-0x88]
  925258:	4c 8b 86 78 ff ff ff 	mov    r8,QWORD PTR [rsi-0x88]
  92525f:	4c 89 81 78 ff ff ff 	mov    QWORD PTR [rcx-0x88],r8
  925266:	48 89 be 78 ff ff ff 	mov    QWORD PTR [rsi-0x88],rdi
  92526d:	48 8b 79 80          	mov    rdi,QWORD PTR [rcx-0x80]
  925271:	4c 8b 46 80          	mov    r8,QWORD PTR [rsi-0x80]
  925275:	4c 89 41 80          	mov    QWORD PTR [rcx-0x80],r8
  925279:	48 89 7e 80          	mov    QWORD PTR [rsi-0x80],rdi
  92527d:	48 8b 79 88          	mov    rdi,QWORD PTR [rcx-0x78]
  925281:	4c 8b 46 88          	mov    r8,QWORD PTR [rsi-0x78]
  925285:	4c 89 41 88          	mov    QWORD PTR [rcx-0x78],r8
  925289:	48 89 7e 88          	mov    QWORD PTR [rsi-0x78],rdi
  92528d:	48 8b 79 90          	mov    rdi,QWORD PTR [rcx-0x70]
  925291:	4c 8b 46 90          	mov    r8,QWORD PTR [rsi-0x70]
  925295:	4c 89 41 90          	mov    QWORD PTR [rcx-0x70],r8
  925299:	48 89 7e 90          	mov    QWORD PTR [rsi-0x70],rdi
  92529d:	48 8b 79 98          	mov    rdi,QWORD PTR [rcx-0x68]
  9252a1:	4c 8b 46 98          	mov    r8,QWORD PTR [rsi-0x68]
  9252a5:	4c 89 41 98          	mov    QWORD PTR [rcx-0x68],r8
  9252a9:	48 89 7e 98          	mov    QWORD PTR [rsi-0x68],rdi
  9252ad:	48 8b 79 a0          	mov    rdi,QWORD PTR [rcx-0x60]
  9252b1:	4c 8b 46 a0          	mov    r8,QWORD PTR [rsi-0x60]
  9252b5:	4c 89 41 a0          	mov    QWORD PTR [rcx-0x60],r8
  9252b9:	48 89 7e a0          	mov    QWORD PTR [rsi-0x60],rdi
  9252bd:	48 8b 79 a8          	mov    rdi,QWORD PTR [rcx-0x58]
  9252c1:	4c 8b 46 a8          	mov    r8,QWORD PTR [rsi-0x58]
  9252c5:	4c 89 41 a8          	mov    QWORD PTR [rcx-0x58],r8
  9252c9:	48 89 7e a8          	mov    QWORD PTR [rsi-0x58],rdi
  9252cd:	48 8b 79 b0          	mov    rdi,QWORD PTR [rcx-0x50]
  9252d1:	4c 8b 46 b0          	mov    r8,QWORD PTR [rsi-0x50]
  9252d5:	4c 89 41 b0          	mov    QWORD PTR [rcx-0x50],r8
  9252d9:	48 89 7e b0          	mov    QWORD PTR [rsi-0x50],rdi
  9252dd:	48 8b 79 b8          	mov    rdi,QWORD PTR [rcx-0x48]
  9252e1:	4c 8b 46 b8          	mov    r8,QWORD PTR [rsi-0x48]
  9252e5:	4c 89 41 b8          	mov    QWORD PTR [rcx-0x48],r8
  9252e9:	48 89 7e b8          	mov    QWORD PTR [rsi-0x48],rdi
  9252ed:	48 8b 79 c0          	mov    rdi,QWORD PTR [rcx-0x40]
  9252f1:	4c 8b 46 c0          	mov    r8,QWORD PTR [rsi-0x40]
  9252f5:	4c 89 41 c0          	mov    QWORD PTR [rcx-0x40],r8
  9252f9:	48 89 7e c0          	mov    QWORD PTR [rsi-0x40],rdi
  9252fd:	48 8b 79 c8          	mov    rdi,QWORD PTR [rcx-0x38]
  925301:	4c 8b 46 c8          	mov    r8,QWORD PTR [rsi-0x38]
  925305:	4c 89 41 c8          	mov    QWORD PTR [rcx-0x38],r8
  925309:	48 89 7e c8          	mov    QWORD PTR [rsi-0x38],rdi
  92530d:	48 8b 79 d0          	mov    rdi,QWORD PTR [rcx-0x30]
  925311:	4c 8b 46 d0          	mov    r8,QWORD PTR [rsi-0x30]
  925315:	4c 89 41 d0          	mov    QWORD PTR [rcx-0x30],r8
  925319:	48 89 7e d0          	mov    QWORD PTR [rsi-0x30],rdi
  92531d:	48 8b 79 d8          	mov    rdi,QWORD PTR [rcx-0x28]
  925321:	4c 8b 46 d8          	mov    r8,QWORD PTR [rsi-0x28]
  925325:	4c 89 41 d8          	mov    QWORD PTR [rcx-0x28],r8
  925329:	48 89 7e d8          	mov    QWORD PTR [rsi-0x28],rdi
  92532d:	48 8b 79 e0          	mov    rdi,QWORD PTR [rcx-0x20]
  925331:	4c 8b 46 e0          	mov    r8,QWORD PTR [rsi-0x20]
  925335:	4c 89 41 e0          	mov    QWORD PTR [rcx-0x20],r8
  925339:	48 89 7e e0          	mov    QWORD PTR [rsi-0x20],rdi
  92533d:	48 8b 79 e8          	mov    rdi,QWORD PTR [rcx-0x18]
  925341:	4c 8b 46 e8          	mov    r8,QWORD PTR [rsi-0x18]
  925345:	4c 89 41 e8          	mov    QWORD PTR [rcx-0x18],r8
  925349:	48 89 7e e8          	mov    QWORD PTR [rsi-0x18],rdi
  92534d:	48 8b 79 f0          	mov    rdi,QWORD PTR [rcx-0x10]
  925351:	4c 8b 46 f0          	mov    r8,QWORD PTR [rsi-0x10]
  925355:	4c 89 41 f0          	mov    QWORD PTR [rcx-0x10],r8
  925359:	48 89 7e f0          	mov    QWORD PTR [rsi-0x10],rdi
  92535d:	48 8b 79 f8          	mov    rdi,QWORD PTR [rcx-0x8]
  925361:	4c 8b 46 f8          	mov    r8,QWORD PTR [rsi-0x8]
  925365:	4c 89 41 f8          	mov    QWORD PTR [rcx-0x8],r8
  925369:	48 89 7e f8          	mov    QWORD PTR [rsi-0x8],rdi
  92536d:	48 8b 39             	mov    rdi,QWORD PTR [rcx]
  925370:	4c 8b 06             	mov    r8,QWORD PTR [rsi]
  925373:	4c 89 01             	mov    QWORD PTR [rcx],r8
  925376:	48 89 3e             	mov    QWORD PTR [rsi],rdi
  925379:	48 81 c1 28 01 00 00 	add    rcx,0x128
  925380:	48 81 c6 d8 fe ff ff 	add    rsi,0xfffffffffffffed8
  925387:	48 ff ca             	dec    rdx
  92538a:	0f 85 ad fc ff ff    	jne    92503d <future_backtest::RunnerCore::run_multi+0x2a6d>
  925390:	48 89 84 24 80 1b 00 	mov    QWORD PTR [rsp+0x1b80],rax
  925397:	00 
  925398:	4c 89 b4 24 d0 11 00 	mov    QWORD PTR [rsp+0x11d0],r14
  92539f:	00 
  9253a0:	48 89 9c 24 d8 11 00 	mov    QWORD PTR [rsp+0x11d8],rbx
  9253a7:	00 
  9253a8:	48 8d 05 f9 bd f2 00 	lea    rax,[rip+0xf2bdf9]        # 18511a8 <anon.609a31ba814f1e4156e50677fc366a7f.492.llvm.5215769359700358943+0xab8>
  9253af:	48 89 84 24 10 06 00 	mov    QWORD PTR [rsp+0x610],rax
  9253b6:	00 
  9253b7:	48 c7 84 24 18 06 00 	mov    QWORD PTR [rsp+0x618],0x2
  9253be:	00 02 00 00 00 
  9253c3:	48 c7 84 24 30 06 00 	mov    QWORD PTR [rsp+0x630],0x0
  9253ca:	00 00 00 00 00 
  9253cf:	48 8d 84 24 d0 11 00 	lea    rax,[rsp+0x11d0]
  9253d6:	00 
  9253d7:	48 89 84 24 20 06 00 	mov    QWORD PTR [rsp+0x620],rax
  9253de:	00 
  9253df:	48 c7 84 24 28 06 00 	mov    QWORD PTR [rsp+0x628],0x1
  9253e6:	00 01 00 00 00 
  9253eb:	48 8d bc 24 10 06 00 	lea    rdi,[rsp+0x610]
  9253f2:	00 
  9253f3:	ff 15 67 71 fd 00    	call   QWORD PTR [rip+0xfd7167]        # 18fc560 <_DYNAMIC+0xc60>
  9253f9:	48 8d b4 24 78 18 00 	lea    rsi,[rsp+0x1878]
  925400:	00 
  925401:	48 8d 15 c0 bd f2 00 	lea    rdx,[rip+0xf2bdc0]        # 18511c8 <anon.609a31ba814f1e4156e50677fc366a7f.492.llvm.5215769359700358943+0xad8>
  925408:	48 8d bc 24 f8 05 00 	lea    rdi,[rsp+0x5f8]
  92540f:	00 
  925410:	e8 6b 3c fa ff       	call   8c9080 <<alloc::vec::Vec<T,A> as core::clone::Clone>::clone>
  925415:	48 8b 44 24 48       	mov    rax,QWORD PTR [rsp+0x48]
  92541a:	48 85 c0             	test   rax,rax
  92541d:	0f 84 cd 05 00 00    	je     9259f0 <future_backtest::RunnerCore::run_multi+0x3420>
  925423:	48 8b 5c 24 40       	mov    rbx,QWORD PTR [rsp+0x40]
  925428:	4c 69 e0 28 15 00 00 	imul   r12,rax,0x1528
  92542f:	49 01 dc             	add    r12,rbx
  925432:	48 8d 83 28 15 00 00 	lea    rax,[rbx+0x1528]
  925439:	4c 8d ac 24 80 1b 00 	lea    r13,[rsp+0x1b80]
  925440:	00 
  925441:	48 8b 2d f0 6b fd 00 	mov    rbp,QWORD PTR [rip+0xfd6bf0]        # 18fc038 <_DYNAMIC+0x738>
  925448:	4c 8d b4 24 10 06 00 	lea    r14,[rsp+0x610]
  92544f:	00 
  925450:	4c 8b 3d c9 66 fd 00 	mov    r15,QWORD PTR [rip+0xfd66c9]        # 18fbb20 <_DYNAMIC+0x220>
  925457:	4c 89 a4 24 c0 00 00 	mov    QWORD PTR [rsp+0xc0],r12
  92545e:	00 
  92545f:	eb 1f                	jmp    925480 <future_backtest::RunnerCore::run_multi+0x2eb0>
  925461:	48 8b 8c 24 80 00 00 	mov    rcx,QWORD PTR [rsp+0x80]
  925468:	00 
  925469:	48 8d 81 28 15 00 00 	lea    rax,[rcx+0x1528]
  925470:	48 89 cb             	mov    rbx,rcx
  925473:	4c 39 e1             	cmp    rcx,r12
  925476:	48 0f 44 c1          	cmove  rax,rcx
  92547a:	0f 84 70 05 00 00    	je     9259f0 <future_backtest::RunnerCore::run_multi+0x3420>
  925480:	48 89 84 24 80 00 00 	mov    QWORD PTR [rsp+0x80],rax
  925487:	00 
  925488:	48 8d b3 e0 12 00 00 	lea    rsi,[rbx+0x12e0]
  92548f:	4c 89 ef             	mov    rdi,r13
  925492:	48 8d 15 6f c7 f2 00 	lea    rdx,[rip+0xf2c76f]        # 1851c08 <anon.609a31ba814f1e4156e50677fc366a7f.492.llvm.5215769359700358943+0x1518>
  925499:	ff d5                	call   rbp
  92549b:	48 8d 73 48          	lea    rsi,[rbx+0x48]
  92549f:	4c 89 f7             	mov    rdi,r14
  9254a2:	48 8d 15 77 c7 f2 00 	lea    rdx,[rip+0xf2c777]        # 1851c20 <anon.609a31ba814f1e4156e50677fc366a7f.492.llvm.5215769359700358943+0x1530>
  9254a9:	ff d5                	call   rbp
  9254ab:	48 8b 84 24 90 1b 00 	mov    rax,QWORD PTR [rsp+0x1b90]
  9254b2:	00 
  9254b3:	48 89 84 24 e0 11 00 	mov    QWORD PTR [rsp+0x11e0],rax
  9254ba:	00 
  9254bb:	0f 10 84 24 80 1b 00 	movups xmm0,XMMWORD PTR [rsp+0x1b80]
  9254c2:	00 
  9254c3:	0f 29 84 24 d0 11 00 	movaps XMMWORD PTR [rsp+0x11d0],xmm0
  9254ca:	00 
  9254cb:	48 8b 84 24 20 06 00 	mov    rax,QWORD PTR [rsp+0x620]
  9254d2:	00 
  9254d3:	48 8d 8c 24 e8 11 00 	lea    rcx,[rsp+0x11e8]
  9254da:	00 
  9254db:	48 89 41 10          	mov    QWORD PTR [rcx+0x10],rax
  9254df:	f3 0f 6f 84 24 10 06 	movdqu xmm0,XMMWORD PTR [rsp+0x610]
  9254e6:	00 00 
  9254e8:	f3 0f 7f 01          	movdqu XMMWORD PTR [rcx],xmm0
  9254ec:	4c 89 f7             	mov    rdi,r14
  9254ef:	48 8d b4 24 f8 05 00 	lea    rsi,[rsp+0x5f8]
  9254f6:	00 
  9254f7:	48 8d 15 3a c7 f2 00 	lea    rdx,[rip+0xf2c73a]        # 1851c38 <anon.609a31ba814f1e4156e50677fc366a7f.492.llvm.5215769359700358943+0x1548>
  9254fe:	e8 7d 3b fa ff       	call   8c9080 <<alloc::vec::Vec<T,A> as core::clone::Clone>::clone>
  925503:	48 89 df             	mov    rdi,rbx
  925506:	4c 89 f6             	mov    rsi,r14
  925509:	ff 15 71 68 fd 00    	call   QWORD PTR [rip+0xfd6871]        # 18fbd80 <_DYNAMIC+0x480>
  92550f:	48 83 bc 24 50 19 00 	cmp    QWORD PTR [rsp+0x1950],0x0
  925516:	00 00 
  925518:	0f 84 bd 01 00 00    	je     9256db <future_backtest::RunnerCore::run_multi+0x310b>
  92551e:	48 8d bc 24 58 19 00 	lea    rdi,[rsp+0x1958]
  925525:	00 
  925526:	48 8d b4 24 d0 11 00 	lea    rsi,[rsp+0x11d0]
  92552d:	00 
  92552e:	e8 bd 4a e3 ff       	call   759ff0 <core::hash::BuildHasher::hash_one>
  925533:	48 89 c1             	mov    rcx,rax
  925536:	48 c1 e9 39          	shr    rcx,0x39
  92553a:	48 8b 94 24 38 19 00 	mov    rdx,QWORD PTR [rsp+0x1938]
  925541:	00 
  925542:	48 8b b4 24 40 19 00 	mov    rsi,QWORD PTR [rsp+0x1940]
  925549:	00 
  92554a:	66 0f 6e c1          	movd   xmm0,ecx
  92554e:	66 0f 60 c0          	punpcklbw xmm0,xmm0
  925552:	f2 0f 70 c0 00       	pshuflw xmm0,xmm0,0x0
  925557:	66 0f 70 c8 00       	pshufd xmm1,xmm0,0x0
  92555c:	48 8d 7a b8          	lea    rdi,[rdx-0x48]
  925560:	48 8b 8c 24 d8 11 00 	mov    rcx,QWORD PTR [rsp+0x11d8]
  925567:	00 
  925568:	48 89 4c 24 70       	mov    QWORD PTR [rsp+0x70],rcx
  92556d:	4c 8b 84 24 e0 11 00 	mov    r8,QWORD PTR [rsp+0x11e0]
  925574:	00 
  925575:	48 8b 8c 24 f8 11 00 	mov    rcx,QWORD PTR [rsp+0x11f8]
  92557c:	00 
  92557d:	48 89 4c 24 20       	mov    QWORD PTR [rsp+0x20],rcx
  925582:	48 8b 8c 24 f0 11 00 	mov    rcx,QWORD PTR [rsp+0x11f0]
  925589:	00 
  92558a:	48 89 8c 24 90 00 00 	mov    QWORD PTR [rsp+0x90],rcx
  925591:	00 
  925592:	45 31 c9             	xor    r9d,r9d
  925595:	48 21 f0             	and    rax,rsi
  925598:	f3 0f 6f 14 02       	movdqu xmm2,XMMWORD PTR [rdx+rax*1]
  92559d:	66 0f 6f c2          	movdqa xmm0,xmm2
  9255a1:	66 0f 74 c1          	pcmpeqb xmm0,xmm1
  9255a5:	66 0f d7 c8          	pmovmskb ecx,xmm0
  9255a9:	85 c9                	test   ecx,ecx
  9255ab:	0f 84 0a 01 00 00    	je     9256bb <future_backtest::RunnerCore::run_multi+0x30eb>
  9255b1:	48 89 84 24 20 01 00 	mov    QWORD PTR [rsp+0x120],rax
  9255b8:	00 
  9255b9:	48 89 94 24 10 01 00 	mov    QWORD PTR [rsp+0x110],rdx
  9255c0:	00 
  9255c1:	48 89 b4 24 08 01 00 	mov    QWORD PTR [rsp+0x108],rsi
  9255c8:	00 
  9255c9:	66 0f 7f 8c 24 30 01 	movdqa XMMWORD PTR [rsp+0x130],xmm1
  9255d0:	00 00 
  9255d2:	48 89 7c 24 68       	mov    QWORD PTR [rsp+0x68],rdi
  9255d7:	4c 89 84 24 b8 00 00 	mov    QWORD PTR [rsp+0xb8],r8
  9255de:	00 
  9255df:	4c 89 8c 24 00 01 00 	mov    QWORD PTR [rsp+0x100],r9
  9255e6:	00 
  9255e7:	66 0f 7f 94 24 d0 04 	movdqa XMMWORD PTR [rsp+0x4d0],xmm2
  9255ee:	00 00 
  9255f0:	48 89 8c 24 28 01 00 	mov    QWORD PTR [rsp+0x128],rcx
  9255f7:	00 
  9255f8:	f3 0f bc c9          	tzcnt  ecx,ecx
  9255fc:	48 01 c1             	add    rcx,rax
  9255ff:	48 21 f1             	and    rcx,rsi
  925602:	48 f7 d9             	neg    rcx
  925605:	4c 8d 24 c9          	lea    r12,[rcx+rcx*8]
  925609:	4e 3b 44 e7 10       	cmp    r8,QWORD PTR [rdi+r12*8+0x10]
  92560e:	75 4e                	jne    92565e <future_backtest::RunnerCore::run_multi+0x308e>
  925610:	48 8b 44 24 68       	mov    rax,QWORD PTR [rsp+0x68]
  925615:	4a 8d 2c e0          	lea    rbp,[rax+r12*8]
  925619:	48 8b 75 08          	mov    rsi,QWORD PTR [rbp+0x8]
  92561d:	48 8b 7c 24 70       	mov    rdi,QWORD PTR [rsp+0x70]
  925622:	48 8b 94 24 b8 00 00 	mov    rdx,QWORD PTR [rsp+0xb8]
  925629:	00 
  92562a:	ff 15 d0 68 fd 00    	call   QWORD PTR [rip+0xfd68d0]        # 18fbf00 <bcmp@GLIBC_2.2.5>
  925630:	85 c0                	test   eax,eax
  925632:	75 2a                	jne    92565e <future_backtest::RunnerCore::run_multi+0x308e>
  925634:	48 8b 44 24 20       	mov    rax,QWORD PTR [rsp+0x20]
  925639:	48 3b 45 28          	cmp    rax,QWORD PTR [rbp+0x28]
  92563d:	75 1f                	jne    92565e <future_backtest::RunnerCore::run_multi+0x308e>
  92563f:	48 8b 75 20          	mov    rsi,QWORD PTR [rbp+0x20]
  925643:	48 8b bc 24 90 00 00 	mov    rdi,QWORD PTR [rsp+0x90]
  92564a:	00 
  92564b:	48 8b 54 24 20       	mov    rdx,QWORD PTR [rsp+0x20]
  925650:	ff 15 aa 68 fd 00    	call   QWORD PTR [rip+0xfd68aa]        # 18fbf00 <bcmp@GLIBC_2.2.5>
  925656:	85 c0                	test   eax,eax
  925658:	0f 84 e8 00 00 00    	je     925746 <future_backtest::RunnerCore::run_multi+0x3176>
  92565e:	48 8b 8c 24 28 01 00 	mov    rcx,QWORD PTR [rsp+0x128]
  925665:	00 
  925666:	8d 41 ff             	lea    eax,[rcx-0x1]
  925669:	66 21 c8             	and    ax,cx
  92566c:	89 c1                	mov    ecx,eax
  92566e:	48 8b 84 24 20 01 00 	mov    rax,QWORD PTR [rsp+0x120]
  925675:	00 
  925676:	4c 8b a4 24 c0 00 00 	mov    r12,QWORD PTR [rsp+0xc0]
  92567d:	00 
  92567e:	48 8b 94 24 10 01 00 	mov    rdx,QWORD PTR [rsp+0x110]
  925685:	00 
  925686:	48 8b b4 24 08 01 00 	mov    rsi,QWORD PTR [rsp+0x108]
  92568d:	00 
  92568e:	66 0f 6f 8c 24 30 01 	movdqa xmm1,XMMWORD PTR [rsp+0x130]
  925695:	00 00 
  925697:	48 8b 7c 24 68       	mov    rdi,QWORD PTR [rsp+0x68]
  92569c:	4c 8b 84 24 b8 00 00 	mov    r8,QWORD PTR [rsp+0xb8]
  9256a3:	00 
  9256a4:	4c 8b 8c 24 00 01 00 	mov    r9,QWORD PTR [rsp+0x100]
  9256ab:	00 
  9256ac:	66 0f 6f 94 24 d0 04 	movdqa xmm2,XMMWORD PTR [rsp+0x4d0]
  9256b3:	00 00 
  9256b5:	0f 85 35 ff ff ff    	jne    9255f0 <future_backtest::RunnerCore::run_multi+0x3020>
  9256bb:	66 0f 74 15 3d a2 92 	pcmpeqb xmm2,XMMWORD PTR [rip+0xffffffffff92a23d]        # 24f900 <anon.23a7bc9302e079b368ad5af617974320.28.llvm.9485200918992093105>
  9256c2:	ff 
  9256c3:	66 0f d7 ca          	pmovmskb ecx,xmm2
  9256c7:	85 c9                	test   ecx,ecx
  9256c9:	75 10                	jne    9256db <future_backtest::RunnerCore::run_multi+0x310b>
  9256cb:	4c 01 c8             	add    rax,r9
  9256ce:	48 83 c0 10          	add    rax,0x10
  9256d2:	49 83 c1 10          	add    r9,0x10
  9256d6:	e9 ba fe ff ff       	jmp    925595 <future_backtest::RunnerCore::run_multi+0x2fc5>
  9256db:	31 ed                	xor    ebp,ebp
  9256dd:	48 c7 44 24 20 00 00 	mov    QWORD PTR [rsp+0x20],0x0
  9256e4:	00 00 
  9256e6:	48 8b 8b f0 14 00 00 	mov    rcx,QWORD PTR [rbx+0x14f0]
  9256ed:	48 85 c9             	test   rcx,rcx
  9256f0:	0f 84 cc 00 00 00    	je     9257c2 <future_backtest::RunnerCore::run_multi+0x31f2>
  9256f6:	48 8b 93 f8 14 00 00 	mov    rdx,QWORD PTR [rbx+0x14f8]
  9256fd:	48 8b 83 00 15 00 00 	mov    rax,QWORD PTR [rbx+0x1500]
  925704:	48 c7 84 24 18 06 00 	mov    QWORD PTR [rsp+0x618],0x0
  92570b:	00 00 00 00 00 
  925710:	48 89 8c 24 20 06 00 	mov    QWORD PTR [rsp+0x620],rcx
  925717:	00 
  925718:	48 89 94 24 28 06 00 	mov    QWORD PTR [rsp+0x628],rdx
  92571f:	00 
  925720:	48 c7 84 24 38 06 00 	mov    QWORD PTR [rsp+0x638],0x0
  925727:	00 00 00 00 00 
  92572c:	48 89 8c 24 40 06 00 	mov    QWORD PTR [rsp+0x640],rcx
  925733:	00 
  925734:	48 89 94 24 48 06 00 	mov    QWORD PTR [rsp+0x648],rdx
  92573b:	00 
  92573c:	b9 01 00 00 00       	mov    ecx,0x1
  925741:	e9 80 00 00 00       	jmp    9257c6 <future_backtest::RunnerCore::run_multi+0x31f6>
  925746:	48 8b 84 24 10 01 00 	mov    rax,QWORD PTR [rsp+0x110]
  92574d:	00 
  92574e:	4a 83 7c e0 f8 00    	cmp    QWORD PTR [rax+r12*8-0x8],0x0
  925754:	74 3c                	je     925792 <future_backtest::RunnerCore::run_multi+0x31c2>
  925756:	4a 8d 04 e0          	lea    rax,[rax+r12*8]
  92575a:	48 8b 70 e8          	mov    rsi,QWORD PTR [rax-0x18]
  92575e:	48 85 f6             	test   rsi,rsi
  925761:	4c 8b a4 24 c0 00 00 	mov    r12,QWORD PTR [rsp+0xc0]
  925768:	00 
  925769:	0f 84 47 3d 00 00    	je     9294b6 <future_backtest::RunnerCore::run_multi+0x6ee6>
  92576f:	48 8b 50 f0          	mov    rdx,QWORD PTR [rax-0x10]
  925773:	4c 89 f7             	mov    rdi,r14
  925776:	e8 45 42 d5 ff       	call   6799c0 <_ZN96_$LT$alloc..collections..btree..map..BTreeMap$LT$K$C$V$C$A$GT$$u20$as$u20$core..clone..Clone$GT$5clone13clone_subtree17h642a0bc4b69bf6efE.llvm.1643563994444475245>
  92577b:	48 8b ac 24 10 06 00 	mov    rbp,QWORD PTR [rsp+0x610]
  925782:	00 
  925783:	48 8b 84 24 20 06 00 	mov    rax,QWORD PTR [rsp+0x620]
  92578a:	00 
  92578b:	48 89 44 24 20       	mov    QWORD PTR [rsp+0x20],rax
  925790:	eb 13                	jmp    9257a5 <future_backtest::RunnerCore::run_multi+0x31d5>
  925792:	48 c7 44 24 20 00 00 	mov    QWORD PTR [rsp+0x20],0x0
  925799:	00 00 
  92579b:	31 ed                	xor    ebp,ebp
  92579d:	4c 8b a4 24 c0 00 00 	mov    r12,QWORD PTR [rsp+0xc0]
  9257a4:	00 
  9257a5:	48 8b 84 24 18 06 00 	mov    rax,QWORD PTR [rsp+0x618]
  9257ac:	00 
  9257ad:	48 89 44 24 70       	mov    QWORD PTR [rsp+0x70],rax
  9257b2:	48 8b 8b f0 14 00 00 	mov    rcx,QWORD PTR [rbx+0x14f0]
  9257b9:	48 85 c9             	test   rcx,rcx
  9257bc:	0f 85 34 ff ff ff    	jne    9256f6 <future_backtest::RunnerCore::run_multi+0x3126>
  9257c2:	31 c9                	xor    ecx,ecx
  9257c4:	31 c0                	xor    eax,eax
  9257c6:	48 89 8c 24 10 06 00 	mov    QWORD PTR [rsp+0x610],rcx
  9257cd:	00 
  9257ce:	48 89 8c 24 30 06 00 	mov    QWORD PTR [rsp+0x630],rcx
  9257d5:	00 
  9257d6:	48 89 84 24 50 06 00 	mov    QWORD PTR [rsp+0x650],rax
  9257dd:	00 
  9257de:	4c 89 ef             	mov    rdi,r13
  9257e1:	4c 89 f6             	mov    rsi,r14
  9257e4:	e8 17 b7 d4 ff       	call   670f00 <_ZN5alloc11collections5btree3map25IntoIter$LT$K$C$V$C$A$GT$10dying_next17h81e3870da105acd2E.llvm.1643563994444475245>
  9257e9:	eb 10                	jmp    9257fb <future_backtest::RunnerCore::run_multi+0x322b>
  9257eb:	0f 1f 44 00 00       	nop    DWORD PTR [rax+rax*1+0x0]
  9257f0:	4c 89 ef             	mov    rdi,r13
  9257f3:	4c 89 f6             	mov    rsi,r14
  9257f6:	e8 05 b7 d4 ff       	call   670f00 <_ZN5alloc11collections5btree3map25IntoIter$LT$K$C$V$C$A$GT$10dying_next17h81e3870da105acd2E.llvm.1643563994444475245>
  9257fb:	48 8b 84 24 80 1b 00 	mov    rax,QWORD PTR [rsp+0x1b80]
  925802:	00 
  925803:	48 85 c0             	test   rax,rax
  925806:	74 2c                	je     925834 <future_backtest::RunnerCore::run_multi+0x3264>
  925808:	48 8b 8c 24 90 1b 00 	mov    rcx,QWORD PTR [rsp+0x1b90]
  92580f:	00 
  925810:	48 8d 0c 49          	lea    rcx,[rcx+rcx*2]
  925814:	48 8b 74 c8 08       	mov    rsi,QWORD PTR [rax+rcx*8+0x8]
  925819:	48 85 f6             	test   rsi,rsi
  92581c:	74 d2                	je     9257f0 <future_backtest::RunnerCore::run_multi+0x3220>
  92581e:	48 8d 04 c8          	lea    rax,[rax+rcx*8]
  925822:	48 83 c0 08          	add    rax,0x8
  925826:	48 8b 78 08          	mov    rdi,QWORD PTR [rax+0x8]
  92582a:	ba 01 00 00 00       	mov    edx,0x1
  92582f:	41 ff d7             	call   r15
  925832:	eb bc                	jmp    9257f0 <future_backtest::RunnerCore::run_multi+0x3220>
  925834:	48 89 ab f0 14 00 00 	mov    QWORD PTR [rbx+0x14f0],rbp
  92583b:	48 8b 44 24 70       	mov    rax,QWORD PTR [rsp+0x70]
  925840:	48 89 83 f8 14 00 00 	mov    QWORD PTR [rbx+0x14f8],rax
  925847:	48 8b 44 24 20       	mov    rax,QWORD PTR [rsp+0x20]
  92584c:	48 89 83 00 15 00 00 	mov    QWORD PTR [rbx+0x1500],rax
  925853:	48 83 bc 24 78 19 00 	cmp    QWORD PTR [rsp+0x1978],0x0
  92585a:	00 00 
  92585c:	0f 84 86 00 00 00    	je     9258e8 <future_backtest::RunnerCore::run_multi+0x3318>
  925862:	48 8b b4 24 68 19 00 	mov    rsi,QWORD PTR [rsp+0x1968]
  925869:	00 
  92586a:	48 85 f6             	test   rsi,rsi
  92586d:	48 8b 2d c4 67 fd 00 	mov    rbp,QWORD PTR [rip+0xfd67c4]        # 18fc038 <_DYNAMIC+0x738>
  925874:	0f 84 3c 3c 00 00    	je     9294b6 <future_backtest::RunnerCore::run_multi+0x6ee6>
  92587a:	48 8b 94 24 70 19 00 	mov    rdx,QWORD PTR [rsp+0x1970]
  925881:	00 
  925882:	48 8d bc 24 e0 0e 00 	lea    rdi,[rsp+0xee0]
  925889:	00 
  92588a:	e8 31 66 d5 ff       	call   67bec0 <_ZN96_$LT$alloc..collections..btree..map..BTreeMap$LT$K$C$V$C$A$GT$$u20$as$u20$core..clone..Clone$GT$5clone13clone_subtree17hb2be7ccb670d6265E.llvm.1643563994444475245>
  92588f:	48 8b 8b 08 15 00 00 	mov    rcx,QWORD PTR [rbx+0x1508]
  925896:	48 85 c9             	test   rcx,rcx
  925899:	74 78                	je     925913 <future_backtest::RunnerCore::run_multi+0x3343>
  92589b:	48 8b 93 10 15 00 00 	mov    rdx,QWORD PTR [rbx+0x1510]
  9258a2:	48 8b 83 18 15 00 00 	mov    rax,QWORD PTR [rbx+0x1518]
  9258a9:	48 c7 84 24 18 06 00 	mov    QWORD PTR [rsp+0x618],0x0
  9258b0:	00 00 00 00 00 
  9258b5:	48 89 8c 24 20 06 00 	mov    QWORD PTR [rsp+0x620],rcx
  9258bc:	00 
  9258bd:	48 89 94 24 28 06 00 	mov    QWORD PTR [rsp+0x628],rdx
  9258c4:	00 
  9258c5:	48 c7 84 24 38 06 00 	mov    QWORD PTR [rsp+0x638],0x0
  9258cc:	00 00 00 00 00 
  9258d1:	48 89 8c 24 40 06 00 	mov    QWORD PTR [rsp+0x640],rcx
  9258d8:	00 
  9258d9:	48 89 94 24 48 06 00 	mov    QWORD PTR [rsp+0x648],rdx
  9258e0:	00 
  9258e1:	b9 01 00 00 00       	mov    ecx,0x1
  9258e6:	eb 2f                	jmp    925917 <future_backtest::RunnerCore::run_multi+0x3347>
  9258e8:	48 c7 84 24 e0 0e 00 	mov    QWORD PTR [rsp+0xee0],0x0
  9258ef:	00 00 00 00 00 
  9258f4:	48 c7 84 24 f0 0e 00 	mov    QWORD PTR [rsp+0xef0],0x0
  9258fb:	00 00 00 00 00 
  925900:	48 8b 2d 31 67 fd 00 	mov    rbp,QWORD PTR [rip+0xfd6731]        # 18fc038 <_DYNAMIC+0x738>
  925907:	48 8b 8b 08 15 00 00 	mov    rcx,QWORD PTR [rbx+0x1508]
  92590e:	48 85 c9             	test   rcx,rcx
  925911:	75 88                	jne    92589b <future_backtest::RunnerCore::run_multi+0x32cb>
  925913:	31 c9                	xor    ecx,ecx
  925915:	31 c0                	xor    eax,eax
  925917:	48 81 c3 08 15 00 00 	add    rbx,0x1508
  92591e:	48 89 8c 24 10 06 00 	mov    QWORD PTR [rsp+0x610],rcx
  925925:	00 
  925926:	48 89 8c 24 30 06 00 	mov    QWORD PTR [rsp+0x630],rcx
  92592d:	00 
  92592e:	48 89 84 24 50 06 00 	mov    QWORD PTR [rsp+0x650],rax
  925935:	00 
  925936:	4c 89 ef             	mov    rdi,r13
  925939:	4c 89 f6             	mov    rsi,r14
  92593c:	e8 3f 96 d4 ff       	call   66ef80 <_ZN5alloc11collections5btree3map25IntoIter$LT$K$C$V$C$A$GT$10dying_next17h2c48ad6f02f1ee4fE.llvm.1643563994444475245>
  925941:	eb 18                	jmp    92595b <future_backtest::RunnerCore::run_multi+0x338b>
  925943:	66 66 66 66 2e 0f 1f 	data16 data16 data16 cs nop WORD PTR [rax+rax*1+0x0]
  92594a:	84 00 00 00 00 00 
  925950:	4c 89 ef             	mov    rdi,r13
  925953:	4c 89 f6             	mov    rsi,r14
  925956:	e8 25 96 d4 ff       	call   66ef80 <_ZN5alloc11collections5btree3map25IntoIter$LT$K$C$V$C$A$GT$10dying_next17h2c48ad6f02f1ee4fE.llvm.1643563994444475245>
  92595b:	48 8b 84 24 80 1b 00 	mov    rax,QWORD PTR [rsp+0x1b80]
  925962:	00 
  925963:	48 85 c0             	test   rax,rax
  925966:	74 2c                	je     925994 <future_backtest::RunnerCore::run_multi+0x33c4>
  925968:	48 8b 8c 24 90 1b 00 	mov    rcx,QWORD PTR [rsp+0x1b90]
  92596f:	00 
  925970:	48 8d 0c 49          	lea    rcx,[rcx+rcx*2]
  925974:	48 8b 74 c8 08       	mov    rsi,QWORD PTR [rax+rcx*8+0x8]
  925979:	48 85 f6             	test   rsi,rsi
  92597c:	74 d2                	je     925950 <future_backtest::RunnerCore::run_multi+0x3380>
  92597e:	48 8d 04 c8          	lea    rax,[rax+rcx*8]
  925982:	48 83 c0 08          	add    rax,0x8
  925986:	48 8b 78 08          	mov    rdi,QWORD PTR [rax+0x8]
  92598a:	ba 01 00 00 00       	mov    edx,0x1
  92598f:	41 ff d7             	call   r15
  925992:	eb bc                	jmp    925950 <future_backtest::RunnerCore::run_multi+0x3380>
  925994:	48 8b 84 24 f0 0e 00 	mov    rax,QWORD PTR [rsp+0xef0]
  92599b:	00 
  92599c:	48 89 43 10          	mov    QWORD PTR [rbx+0x10],rax
  9259a0:	f3 0f 6f 84 24 e0 0e 	movdqu xmm0,XMMWORD PTR [rsp+0xee0]
  9259a7:	00 00 
  9259a9:	f3 0f 7f 03          	movdqu XMMWORD PTR [rbx],xmm0
  9259ad:	48 8b b4 24 d0 11 00 	mov    rsi,QWORD PTR [rsp+0x11d0]
  9259b4:	00 
  9259b5:	48 85 f6             	test   rsi,rsi
  9259b8:	74 10                	je     9259ca <future_backtest::RunnerCore::run_multi+0x33fa>
  9259ba:	48 8b bc 24 d8 11 00 	mov    rdi,QWORD PTR [rsp+0x11d8]
  9259c1:	00 
  9259c2:	ba 01 00 00 00       	mov    edx,0x1
  9259c7:	41 ff d7             	call   r15
  9259ca:	48 8b b4 24 e8 11 00 	mov    rsi,QWORD PTR [rsp+0x11e8]
  9259d1:	00 
  9259d2:	48 85 f6             	test   rsi,rsi
  9259d5:	0f 84 86 fa ff ff    	je     925461 <future_backtest::RunnerCore::run_multi+0x2e91>
  9259db:	48 8b bc 24 f0 11 00 	mov    rdi,QWORD PTR [rsp+0x11f0]
  9259e2:	00 
  9259e3:	ba 01 00 00 00       	mov    edx,0x1
  9259e8:	41 ff d7             	call   r15
  9259eb:	e9 71 fa ff ff       	jmp    925461 <future_backtest::RunnerCore::run_multi+0x2e91>
  9259f0:	4c 8b 74 24 18       	mov    r14,QWORD PTR [rsp+0x18]
  9259f5:	49 83 7e 10 00       	cmp    QWORD PTR [r14+0x10],0x0
  9259fa:	0f 85 3f 57 00 00    	jne    92b13f <future_backtest::RunnerCore::run_multi+0x8b6f>
  925a00:	49 c7 46 10 ff ff ff 	mov    QWORD PTR [r14+0x10],0xffffffffffffffff
  925a07:	ff 
  925a08:	49 8d 5e 18          	lea    rbx,[r14+0x18]
  925a0c:	48 8b 84 24 08 06 00 	mov    rax,QWORD PTR [rsp+0x608]
  925a13:	00 
  925a14:	48 89 84 24 20 06 00 	mov    QWORD PTR [rsp+0x620],rax
  925a1b:	00 
  925a1c:	f3 0f 6f 84 24 f8 05 	movdqu xmm0,XMMWORD PTR [rsp+0x5f8]
  925a23:	00 00 
  925a25:	66 0f 7f 84 24 10 06 	movdqa XMMWORD PTR [rsp+0x610],xmm0
  925a2c:	00 00 
  925a2e:	48 8d b4 24 10 06 00 	lea    rsi,[rsp+0x610]
  925a35:	00 
  925a36:	48 89 df             	mov    rdi,rbx
  925a39:	ff 15 a9 73 fd 00    	call   QWORD PTR [rip+0xfd73a9]        # 18fcde8 <_DYNAMIC+0x14e8>
  925a3f:	49 89 c7             	mov    r15,rax
  925a42:	49 ff 46 10          	inc    QWORD PTR [r14+0x10]
  925a46:	48 85 c0             	test   rax,rax
  925a49:	0f 84 06 04 00 00    	je     925e55 <future_backtest::RunnerCore::run_multi+0x3885>
  925a4f:	40 b5 01             	mov    bpl,0x1
  925a52:	48 8b 9c 24 b0 01 00 	mov    rbx,QWORD PTR [rsp+0x1b0]
  925a59:	00 
  925a5a:	4c 8b ac 24 b8 01 00 	mov    r13,QWORD PTR [rsp+0x1b8]
  925a61:	00 
  925a62:	49 ff c5             	inc    r13
  925a65:	48 89 df             	mov    rdi,rbx
  925a68:	0f 1f 84 00 00 00 00 	nop    DWORD PTR [rax+rax*1+0x0]
  925a6f:	00 
  925a70:	49 83 fd 01          	cmp    r13,0x1
  925a74:	0f 84 ac 00 00 00    	je     925b26 <future_backtest::RunnerCore::run_multi+0x3556>
  925a7a:	4c 8d b7 28 01 00 00 	lea    r14,[rdi+0x128]
  925a81:	49 ff cd             	dec    r13
  925a84:	e8 c7 ca f9 ff       	call   8c2550 <_ZN4core3ptr73drop_in_place$LT$future_backtest..DataStruct..event_slice..EventSlice$GT$17h4393e6a5cd212903E.llvm.1325298290625399205>
  925a89:	4c 89 f7             	mov    rdi,r14
  925a8c:	eb e2                	jmp    925a70 <future_backtest::RunnerCore::run_multi+0x34a0>
  925a8e:	48 8d 84 24 c0 01 00 	lea    rax,[rsp+0x1c0]
  925a95:	00 
  925a96:	48 89 84 24 80 1b 00 	mov    QWORD PTR [rsp+0x1b80],rax
  925a9d:	00 
  925a9e:	48 8d 05 9b 6b f2 ff 	lea    rax,[rip+0xfffffffffff26b9b]        # 84c640 <<&T as core::fmt::Display>::fmt>
  925aa5:	48 89 84 24 88 1b 00 	mov    QWORD PTR [rsp+0x1b88],rax
  925aac:	00 
  925aad:	48 8d 8c 24 d0 01 00 	lea    rcx,[rsp+0x1d0]
  925ab4:	00 
  925ab5:	48 89 8c 24 90 1b 00 	mov    QWORD PTR [rsp+0x1b90],rcx
  925abc:	00 
  925abd:	48 89 84 24 98 1b 00 	mov    QWORD PTR [rsp+0x1b98],rax
  925ac4:	00 
  925ac5:	48 8d 05 bc b3 f2 00 	lea    rax,[rip+0xf2b3bc]        # 1850e88 <anon.609a31ba814f1e4156e50677fc366a7f.492.llvm.5215769359700358943+0x798>
  925acc:	48 89 84 24 d0 11 00 	mov    QWORD PTR [rsp+0x11d0],rax
  925ad3:	00 
  925ad4:	48 c7 84 24 d8 11 00 	mov    QWORD PTR [rsp+0x11d8],0x2
  925adb:	00 02 00 00 00 
  925ae0:	48 c7 84 24 f0 11 00 	mov    QWORD PTR [rsp+0x11f0],0x0
  925ae7:	00 00 00 00 00 
  925aec:	48 8d 84 24 80 1b 00 	lea    rax,[rsp+0x1b80]
  925af3:	00 
  925af4:	48 89 84 24 e0 11 00 	mov    QWORD PTR [rsp+0x11e0],rax
  925afb:	00 
  925afc:	48 c7 84 24 e8 11 00 	mov    QWORD PTR [rsp+0x11e8],0x2
  925b03:	00 02 00 00 00 
  925b08:	48 8d 9c 24 e8 04 00 	lea    rbx,[rsp+0x4e8]
  925b0f:	00 
  925b10:	48 8d b4 24 d0 11 00 	lea    rsi,[rsp+0x11d0]
  925b17:	00 
  925b18:	48 89 df             	mov    rdi,rbx
  925b1b:	ff 15 37 65 fd 00    	call   QWORD PTR [rip+0xfd6537]        # 18fc058 <_DYNAMIC+0x758>
  925b21:	e9 02 02 00 00       	jmp    925d28 <future_backtest::RunnerCore::run_multi+0x3758>
  925b26:	48 8b 84 24 a8 01 00 	mov    rax,QWORD PTR [rsp+0x1a8]
  925b2d:	00 
  925b2e:	48 85 c0             	test   rax,rax
  925b31:	74 15                	je     925b48 <future_backtest::RunnerCore::run_multi+0x3578>
  925b33:	48 69 f0 28 01 00 00 	imul   rsi,rax,0x128
  925b3a:	ba 08 00 00 00       	mov    edx,0x8
  925b3f:	48 89 df             	mov    rdi,rbx
  925b42:	ff 15 d8 5f fd 00    	call   QWORD PTR [rip+0xfd5fd8]        # 18fbb20 <_DYNAMIC+0x220>
  925b48:	48 8d bc 24 60 18 00 	lea    rdi,[rsp+0x1860]
  925b4f:	00 
  925b50:	e8 cb 8a fd ff       	call   8fe620 <core::ptr::drop_in_place<future_backtest::MultiStrategy::event_producer::EventProducer>>
  925b55:	48 8b 7c 24 40       	mov    rdi,QWORD PTR [rsp+0x40]
  925b5a:	4c 8b 74 24 48       	mov    r14,QWORD PTR [rsp+0x48]
  925b5f:	49 ff c6             	inc    r14
  925b62:	66 66 66 66 66 2e 0f 	data16 data16 data16 data16 cs nop WORD PTR [rax+rax*1+0x0]
  925b69:	1f 84 00 00 00 00 00 
  925b70:	49 83 fe 01          	cmp    r14,0x1
  925b74:	74 14                	je     925b8a <future_backtest::RunnerCore::run_multi+0x35ba>
  925b76:	48 8d 9f 28 15 00 00 	lea    rbx,[rdi+0x1528]
  925b7d:	49 ff ce             	dec    r14
  925b80:	e8 5b b5 f9 ff       	call   8c10e0 <_ZN4core3ptr66drop_in_place$LT$future_backtest..Strategy..strategy..Strategy$GT$17hb325f64ad9ac2d20E.llvm.1325298290625399205>
  925b85:	48 89 df             	mov    rdi,rbx
  925b88:	eb e6                	jmp    925b70 <future_backtest::RunnerCore::run_multi+0x35a0>
  925b8a:	48 8b 44 24 38       	mov    rax,QWORD PTR [rsp+0x38]
  925b8f:	48 85 c0             	test   rax,rax
  925b92:	74 17                	je     925bab <future_backtest::RunnerCore::run_multi+0x35db>
  925b94:	48 8b 7c 24 40       	mov    rdi,QWORD PTR [rsp+0x40]
  925b99:	48 69 f0 28 15 00 00 	imul   rsi,rax,0x1528
  925ba0:	ba 08 00 00 00       	mov    edx,0x8
  925ba5:	ff 15 75 5f fd 00    	call   QWORD PTR [rip+0xfd5f75]        # 18fbb20 <_DYNAMIC+0x220>
  925bab:	48 8b 84 24 88 00 00 	mov    rax,QWORD PTR [rsp+0x88]
  925bb2:	00 
  925bb3:	48 ff 08             	dec    QWORD PTR [rax]
  925bb6:	75 0e                	jne    925bc6 <future_backtest::RunnerCore::run_multi+0x35f6>
  925bb8:	48 8d bc 24 60 03 00 	lea    rdi,[rsp+0x360]
  925bbf:	00 
  925bc0:	ff 15 8a 69 fd 00    	call   QWORD PTR [rip+0xfd698a]        # 18fc550 <_DYNAMIC+0xc50>
  925bc6:	48 8b 44 24 18       	mov    rax,QWORD PTR [rsp+0x18]
  925bcb:	48 ff 08             	dec    QWORD PTR [rax]
  925bce:	0f 85 84 d7 ff ff    	jne    923358 <future_backtest::RunnerCore::run_multi+0xd88>
  925bd4:	48 8d bc 24 58 03 00 	lea    rdi,[rsp+0x358]
  925bdb:	00 
  925bdc:	ff 15 76 69 fd 00    	call   QWORD PTR [rip+0xfd6976]        # 18fc558 <_DYNAMIC+0xc58>
  925be2:	e9 71 d7 ff ff       	jmp    923358 <future_backtest::RunnerCore::run_multi+0xd88>
  925be7:	48 21 d0             	and    rax,rdx
  925bea:	f3 0f 6f 0c 01       	movdqu xmm1,XMMWORD PTR [rcx+rax*1]
  925bef:	66 0f 6f d1          	movdqa xmm2,xmm1
  925bf3:	66 0f 74 d0          	pcmpeqb xmm2,xmm0
  925bf7:	66 0f d7 fa          	pmovmskb edi,xmm2
  925bfb:	85 ff                	test   edi,edi
  925bfd:	74 28                	je     925c27 <future_backtest::RunnerCore::run_multi+0x3657>
  925bff:	f3 44 0f bc c7       	tzcnt  r8d,edi
  925c04:	49 01 c0             	add    r8,rax
  925c07:	49 21 d0             	and    r8,rdx
  925c0a:	49 c1 e0 02          	shl    r8,0x2
  925c0e:	49 89 c9             	mov    r9,rcx
  925c11:	4d 29 c1             	sub    r9,r8
  925c14:	41 3b 69 fc          	cmp    ebp,DWORD PTR [r9-0x4]
  925c18:	74 2e                	je     925c48 <future_backtest::RunnerCore::run_multi+0x3678>
  925c1a:	44 8d 47 ff          	lea    r8d,[rdi-0x1]
  925c1e:	66 41 21 f8          	and    r8w,di
  925c22:	44 89 c7             	mov    edi,r8d
  925c25:	75 d8                	jne    925bff <future_backtest::RunnerCore::run_multi+0x362f>
  925c27:	66 0f 74 0d d1 9c 92 	pcmpeqb xmm1,XMMWORD PTR [rip+0xffffffffff929cd1]        # 24f900 <anon.23a7bc9302e079b368ad5af617974320.28.llvm.9485200918992093105>
  925c2e:	ff 
  925c2f:	66 0f d7 f9          	pmovmskb edi,xmm1
  925c33:	85 ff                	test   edi,edi
  925c35:	0f 85 45 02 00 00    	jne    925e80 <future_backtest::RunnerCore::run_multi+0x38b0>
  925c3b:	48 01 f0             	add    rax,rsi
  925c3e:	48 83 c0 10          	add    rax,0x10
  925c42:	48 83 c6 10          	add    rsi,0x10
  925c46:	eb 9f                	jmp    925be7 <future_backtest::RunnerCore::run_multi+0x3617>
  925c48:	4c 89 ef             	mov    rdi,r13
  925c4b:	e8 c0 96 d3 ff       	call   65f310 <<alloc::collections::btree::map::IntoIter<K,V,A> as core::iter::traits::iterator::Iterator>::next>
  925c50:	a8 01                	test   al,0x1
  925c52:	0f 84 9b 0f 00 00    	je     926bf3 <future_backtest::RunnerCore::run_multi+0x4623>
  925c58:	89 d5                	mov    ebp,edx
  925c5a:	89 94 24 00 05 00 00 	mov    DWORD PTR [rsp+0x500],edx
  925c61:	48 83 bc 24 f8 0e 00 	cmp    QWORD PTR [rsp+0xef8],0x0
  925c68:	00 00 
  925c6a:	0f 84 10 02 00 00    	je     925e80 <future_backtest::RunnerCore::run_multi+0x38b0>
  925c70:	48 8d bc 24 00 0f 00 	lea    rdi,[rsp+0xf00]
  925c77:	00 
  925c78:	4c 89 fe             	mov    rsi,r15
  925c7b:	e8 90 4f e3 ff       	call   75ac10 <core::hash::BuildHasher::hash_one>
  925c80:	48 89 c6             	mov    rsi,rax
  925c83:	48 c1 ee 39          	shr    rsi,0x39
  925c87:	48 8b 8c 24 e0 0e 00 	mov    rcx,QWORD PTR [rsp+0xee0]
  925c8e:	00 
  925c8f:	48 8b 94 24 e8 0e 00 	mov    rdx,QWORD PTR [rsp+0xee8]
  925c96:	00 
  925c97:	66 0f 6e c6          	movd   xmm0,esi
  925c9b:	66 0f 60 c0          	punpcklbw xmm0,xmm0
  925c9f:	f2 0f 70 c0 00       	pshuflw xmm0,xmm0,0x0
  925ca4:	66 0f 70 c0 00       	pshufd xmm0,xmm0,0x0
  925ca9:	31 f6                	xor    esi,esi
  925cab:	e9 37 ff ff ff       	jmp    925be7 <future_backtest::RunnerCore::run_multi+0x3617>
  925cb0:	48 8b 44 24 18       	mov    rax,QWORD PTR [rsp+0x18]
  925cb5:	48 89 84 24 80 1b 00 	mov    QWORD PTR [rsp+0x1b80],rax
  925cbc:	00 
  925cbd:	48 8d 05 9c bd fd ff 	lea    rax,[rip+0xfffffffffffdbd9c]        # 901a60 <<alloc::string::String as core::fmt::Display>::fmt>
  925cc4:	48 89 84 24 88 1b 00 	mov    QWORD PTR [rsp+0x1b88],rax
  925ccb:	00 
  925ccc:	48 8d 05 65 b2 f2 00 	lea    rax,[rip+0xf2b265]        # 1850f38 <anon.609a31ba814f1e4156e50677fc366a7f.492.llvm.5215769359700358943+0x848>
  925cd3:	48 89 84 24 d0 11 00 	mov    QWORD PTR [rsp+0x11d0],rax
  925cda:	00 
  925cdb:	48 c7 84 24 d8 11 00 	mov    QWORD PTR [rsp+0x11d8],0x2
  925ce2:	00 02 00 00 00 
  925ce7:	48 c7 84 24 f0 11 00 	mov    QWORD PTR [rsp+0x11f0],0x0
  925cee:	00 00 00 00 00 
  925cf3:	48 8d 84 24 80 1b 00 	lea    rax,[rsp+0x1b80]
  925cfa:	00 
  925cfb:	48 89 84 24 e0 11 00 	mov    QWORD PTR [rsp+0x11e0],rax
  925d02:	00 
  925d03:	48 c7 84 24 e8 11 00 	mov    QWORD PTR [rsp+0x11e8],0x1
  925d0a:	00 01 00 00 00 
  925d0f:	48 8d 9c 24 20 03 00 	lea    rbx,[rsp+0x320]
  925d16:	00 
  925d17:	48 8d b4 24 d0 11 00 	lea    rsi,[rsp+0x11d0]
  925d1e:	00 
  925d1f:	48 89 df             	mov    rdi,rbx
  925d22:	ff 15 30 63 fd 00    	call   QWORD PTR [rip+0xfd6330]        # 18fc058 <_DYNAMIC+0x758>
  925d28:	48 89 df             	mov    rdi,rbx
  925d2b:	e8 00 84 04 00       	call   96e130 <anyhow::error::<impl anyhow::Error>::msg>
  925d30:	49 89 c7             	mov    r15,rax
  925d33:	48 8b b4 24 e8 0e 00 	mov    rsi,QWORD PTR [rsp+0xee8]
  925d3a:	00 
  925d3b:	48 85 f6             	test   rsi,rsi
  925d3e:	74 2b                	je     925d6b <future_backtest::RunnerCore::run_multi+0x379b>
  925d40:	48 8d 04 b5 13 00 00 	lea    rax,[rsi*4+0x13]
  925d47:	00 
  925d48:	48 83 e0 f0          	and    rax,0xfffffffffffffff0
  925d4c:	48 01 c6             	add    rsi,rax
  925d4f:	48 83 c6 11          	add    rsi,0x11
  925d53:	74 16                	je     925d6b <future_backtest::RunnerCore::run_multi+0x379b>
  925d55:	48 8b bc 24 e0 0e 00 	mov    rdi,QWORD PTR [rsp+0xee0]
  925d5c:	00 
  925d5d:	48 29 c7             	sub    rdi,rax
  925d60:	ba 10 00 00 00       	mov    edx,0x10
  925d65:	ff 15 b5 5d fd 00    	call   QWORD PTR [rip+0xfd5db5]        # 18fbb20 <_DYNAMIC+0x220>
  925d6b:	48 8b b4 24 68 18 00 	mov    rsi,QWORD PTR [rsp+0x1868]
  925d72:	00 
  925d73:	48 85 f6             	test   rsi,rsi
  925d76:	74 2a                	je     925da2 <future_backtest::RunnerCore::run_multi+0x37d2>
  925d78:	48 89 f0             	mov    rax,rsi
  925d7b:	48 c1 e0 05          	shl    rax,0x5
  925d7f:	48 01 c6             	add    rsi,rax
  925d82:	48 83 c6 31          	add    rsi,0x31
  925d86:	74 1a                	je     925da2 <future_backtest::RunnerCore::run_multi+0x37d2>
  925d88:	48 8b bc 24 60 18 00 	mov    rdi,QWORD PTR [rsp+0x1860]
  925d8f:	00 
  925d90:	48 29 c7             	sub    rdi,rax
  925d93:	48 83 c7 e0          	add    rdi,0xffffffffffffffe0
  925d97:	ba 10 00 00 00       	mov    edx,0x10
  925d9c:	ff 15 7e 5d fd 00    	call   QWORD PTR [rip+0xfd5d7e]        # 18fbb20 <_DYNAMIC+0x220>
  925da2:	48 8d bc 24 10 06 00 	lea    rdi,[rsp+0x610]
  925da9:	00 
  925daa:	e8 71 6d fd ff       	call   8fcb20 <core::ptr::drop_in_place<future_backtest::MetaControl::config::MetaManifest>>
  925daf:	c7 84 24 c8 00 00 00 	mov    DWORD PTR [rsp+0xc8],0x0
  925db6:	00 00 00 00 
  925dba:	48 8b bc 24 d8 00 00 	mov    rdi,QWORD PTR [rsp+0xd8]
  925dc1:	00 
  925dc2:	4c 8b b4 24 e0 00 00 	mov    r14,QWORD PTR [rsp+0xe0]
  925dc9:	00 
  925dca:	49 ff c6             	inc    r14
  925dcd:	0f 1f 00             	nop    DWORD PTR [rax]
  925dd0:	49 83 fe 01          	cmp    r14,0x1
  925dd4:	74 14                	je     925dea <future_backtest::RunnerCore::run_multi+0x381a>
  925dd6:	48 8d 9f 08 08 00 00 	lea    rbx,[rdi+0x808]
  925ddd:	49 ff ce             	dec    r14
  925de0:	e8 1b b9 f9 ff       	call   8c1700 <_ZN4core3ptr68drop_in_place$LT$future_backtest..Config..config..StrategyConfig$GT$17h915a237d4f00a607E.llvm.1325298290625399205>
  925de5:	48 89 df             	mov    rdi,rbx
  925de8:	eb e6                	jmp    925dd0 <future_backtest::RunnerCore::run_multi+0x3800>
  925dea:	48 8b 84 24 d0 00 00 	mov    rax,QWORD PTR [rsp+0xd0]
  925df1:	00 
  925df2:	48 85 c0             	test   rax,rax
  925df5:	74 1e                	je     925e15 <future_backtest::RunnerCore::run_multi+0x3845>
  925df7:	48 8b bc 24 d8 00 00 	mov    rdi,QWORD PTR [rsp+0xd8]
  925dfe:	00 
  925dff:	48 89 c1             	mov    rcx,rax
  925e02:	48 c1 e1 0b          	shl    rcx,0xb
  925e06:	48 8d 34 c1          	lea    rsi,[rcx+rax*8]
  925e0a:	ba 08 00 00 00       	mov    edx,0x8
  925e0f:	ff 15 0b 5d fd 00    	call   QWORD PTR [rip+0xfd5d0b]        # 18fbb20 <_DYNAMIC+0x220>
  925e15:	48 b8 00 00 00 00 00 	movabs rax,0x8000000000000000
  925e1c:	00 00 80 
  925e1f:	48 39 84 24 50 03 00 	cmp    QWORD PTR [rsp+0x350],rax
  925e26:	00 
  925e27:	74 17                	je     925e40 <future_backtest::RunnerCore::run_multi+0x3870>
  925e29:	80 bc 24 c8 00 00 00 	cmp    BYTE PTR [rsp+0xc8],0x0
  925e30:	00 
  925e31:	74 0d                	je     925e40 <future_backtest::RunnerCore::run_multi+0x3870>
  925e33:	48 8b bc 24 48 03 00 	mov    rdi,QWORD PTR [rsp+0x348]
  925e3a:	00 
  925e3b:	e8 e0 6c fd ff       	call   8fcb20 <core::ptr::drop_in_place<future_backtest::MetaControl::config::MetaManifest>>
  925e40:	4c 89 f8             	mov    rax,r15
  925e43:	48 81 c4 f8 3f 00 00 	add    rsp,0x3ff8
  925e4a:	5b                   	pop    rbx
  925e4b:	41 5c                	pop    r12
  925e4d:	41 5d                	pop    r13
  925e4f:	41 5e                	pop    r14
  925e51:	41 5f                	pop    r15
  925e53:	5d                   	pop    rbp
  925e54:	c3                   	ret    
  925e55:	48 b8 00 00 00 00 00 	movabs rax,0x8000000000000000
  925e5c:	00 00 80 
  925e5f:	48 39 84 24 f0 19 00 	cmp    QWORD PTR [rsp+0x19f0],rax
  925e66:	00 
  925e67:	0f 85 be 00 00 00    	jne    925f2b <future_backtest::RunnerCore::run_multi+0x395b>
  925e6d:	48 c7 84 24 e0 0e 00 	mov    QWORD PTR [rsp+0xee0],0x2
  925e74:	00 02 00 00 00 
  925e79:	b0 01                	mov    al,0x1
  925e7b:	e9 86 01 00 00       	jmp    926006 <future_backtest::RunnerCore::run_multi+0x3a36>
  925e80:	4c 89 bc 24 b0 10 00 	mov    QWORD PTR [rsp+0x10b0],r15
  925e87:	00 
  925e88:	48 8b 05 71 63 fd 00 	mov    rax,QWORD PTR [rip+0xfd6371]        # 18fc200 <_DYNAMIC+0x900>
  925e8f:	48 89 84 24 b8 10 00 	mov    QWORD PTR [rsp+0x10b8],rax
  925e96:	00 
  925e97:	48 8d 05 92 af f2 00 	lea    rax,[rip+0xf2af92]        # 1850e30 <anon.609a31ba814f1e4156e50677fc366a7f.492.llvm.5215769359700358943+0x740>
  925e9e:	48 89 84 24 80 1b 00 	mov    QWORD PTR [rsp+0x1b80],rax
  925ea5:	00 
  925ea6:	48 c7 84 24 88 1b 00 	mov    QWORD PTR [rsp+0x1b88],0x2
  925ead:	00 02 00 00 00 
  925eb2:	48 c7 84 24 a0 1b 00 	mov    QWORD PTR [rsp+0x1ba0],0x0
  925eb9:	00 00 00 00 00 
  925ebe:	48 8d 84 24 b0 10 00 	lea    rax,[rsp+0x10b0]
  925ec5:	00 
  925ec6:	48 89 84 24 90 1b 00 	mov    QWORD PTR [rsp+0x1b90],rax
  925ecd:	00 
  925ece:	48 c7 84 24 98 1b 00 	mov    QWORD PTR [rsp+0x1b98],0x1
  925ed5:	00 01 00 00 00 
  925eda:	48 8d bc 24 90 0e 00 	lea    rdi,[rsp+0xe90]
  925ee1:	00 
  925ee2:	48 8d b4 24 80 1b 00 	lea    rsi,[rsp+0x1b80]
  925ee9:	00 
  925eea:	ff 15 68 61 fd 00    	call   QWORD PTR [rip+0xfd6168]        # 18fc058 <_DYNAMIC+0x758>
  925ef0:	48 8d bc 24 90 0e 00 	lea    rdi,[rsp+0xe90]
  925ef7:	00 
  925ef8:	e8 33 82 04 00       	call   96e130 <anyhow::error::<impl anyhow::Error>::msg>
  925efd:	49 89 c7             	mov    r15,rax
  925f00:	48 8d 9c 24 80 1b 00 	lea    rbx,[rsp+0x1b80]
  925f07:	00 
  925f08:	4c 8d b4 24 d0 11 00 	lea    r14,[rsp+0x11d0]
  925f0f:	00 
  925f10:	48 89 df             	mov    rdi,rbx
  925f13:	4c 89 f6             	mov    rsi,r14
  925f16:	e8 a5 c3 d4 ff       	call   6722c0 <_ZN5alloc11collections5btree3map25IntoIter$LT$K$C$V$C$A$GT$10dying_next17he5722eb1ea305e80E.llvm.1643563994444475245>
  925f1b:	48 83 bc 24 80 1b 00 	cmp    QWORD PTR [rsp+0x1b80],0x0
  925f22:	00 00 
  925f24:	75 ea                	jne    925f10 <future_backtest::RunnerCore::run_multi+0x3940>
  925f26:	e9 08 fe ff ff       	jmp    925d33 <future_backtest::RunnerCore::run_multi+0x3763>
  925f2b:	4c 8d b4 24 10 22 00 	lea    r14,[rsp+0x2210]
  925f32:	00 
  925f33:	48 8d b4 24 f0 19 00 	lea    rsi,[rsp+0x19f0]
  925f3a:	00 
  925f3b:	ba b8 00 00 00       	mov    edx,0xb8
  925f40:	4c 89 f7             	mov    rdi,r14
  925f43:	ff 15 af 5f fd 00    	call   QWORD PTR [rip+0xfd5faf]        # 18fbef8 <memcpy@GLIBC_2.14>
  925f49:	48 8d 94 24 a8 1a 00 	lea    rdx,[rsp+0x1aa8]
  925f50:	00 
  925f51:	31 ed                	xor    ebp,ebp
  925f53:	48 8b 4c 24 40       	mov    rcx,QWORD PTR [rsp+0x40]
  925f58:	4c 8b 44 24 48       	mov    r8,QWORD PTR [rsp+0x48]
  925f5d:	48 8d bc 24 10 06 00 	lea    rdi,[rsp+0x610]
  925f64:	00 
  925f65:	4c 89 f6             	mov    rsi,r14
  925f68:	e8 63 9e ff ff       	call   91fdd0 <future_backtest::RunnerCore::MetaRunState::new>
  925f6d:	4c 8b b4 24 10 06 00 	mov    r14,QWORD PTR [rsp+0x610]
  925f74:	00 
  925f75:	4c 8b bc 24 18 06 00 	mov    r15,QWORD PTR [rsp+0x618]
  925f7c:	00 
  925f7d:	49 83 fe 02          	cmp    r14,0x2
  925f81:	75 56                	jne    925fd9 <future_backtest::RunnerCore::run_multi+0x3a09>
  925f83:	31 ed                	xor    ebp,ebp
  925f85:	e9 c8 fa ff ff       	jmp    925a52 <future_backtest::RunnerCore::run_multi+0x3482>
  925f8a:	48 8b 84 24 c0 1a 00 	mov    rax,QWORD PTR [rsp+0x1ac0]
  925f91:	00 
  925f92:	48 85 c0             	test   rax,rax
  925f95:	0f 84 25 03 00 00    	je     9262c0 <future_backtest::RunnerCore::run_multi+0x3cf0>
  925f9b:	48 8b 8c 24 b8 1a 00 	mov    rcx,QWORD PTR [rsp+0x1ab8]
  925fa2:	00 
  925fa3:	48 01 c8             	add    rax,rcx
  925fa6:	48 ff c8             	dec    rax
  925fa9:	48 8b 8c 24 a8 1a 00 	mov    rcx,QWORD PTR [rsp+0x1aa8]
  925fb0:	00 
  925fb1:	48 8b 94 24 b0 1a 00 	mov    rdx,QWORD PTR [rsp+0x1ab0]
  925fb8:	00 
  925fb9:	31 f6                	xor    esi,esi
  925fbb:	48 39 c8             	cmp    rax,rcx
  925fbe:	48 0f 43 f1          	cmovae rsi,rcx
  925fc2:	48 29 f0             	sub    rax,rsi
  925fc5:	48 c1 e0 06          	shl    rax,0x6
  925fc9:	f3 0f 7e 44 02 18    	movq   xmm0,QWORD PTR [rdx+rax*1+0x18]
  925fcf:	b8 01 00 00 00       	mov    eax,0x1
  925fd4:	e9 e9 02 00 00       	jmp    9262c2 <future_backtest::RunnerCore::run_multi+0x3cf2>
  925fd9:	48 8d b4 24 20 06 00 	lea    rsi,[rsp+0x620]
  925fe0:	00 
  925fe1:	48 8d bc 24 f0 0e 00 	lea    rdi,[rsp+0xef0]
  925fe8:	00 
  925fe9:	ba b8 01 00 00       	mov    edx,0x1b8
  925fee:	ff 15 04 5f fd 00    	call   QWORD PTR [rip+0xfd5f04]        # 18fbef8 <memcpy@GLIBC_2.14>
  925ff4:	4c 89 b4 24 e0 0e 00 	mov    QWORD PTR [rsp+0xee0],r14
  925ffb:	00 
  925ffc:	4c 89 bc 24 e8 0e 00 	mov    QWORD PTR [rsp+0xee8],r15
  926003:	00 
  926004:	31 c0                	xor    eax,eax
  926006:	48 89 9c 24 80 00 00 	mov    QWORD PTR [rsp+0x80],rbx
  92600d:	00 
  92600e:	89 44 24 20          	mov    DWORD PTR [rsp+0x20],eax
  926012:	48 83 7c 24 48 00    	cmp    QWORD PTR [rsp+0x48],0x0
  926018:	0f 84 69 51 00 00    	je     92b187 <future_backtest::RunnerCore::run_multi+0x8bb7>
  92601e:	48 8b 74 24 40       	mov    rsi,QWORD PTR [rsp+0x40]
  926023:	48 8d bc 24 80 1b 00 	lea    rdi,[rsp+0x1b80]
  92602a:	00 
  92602b:	e8 b0 8c 00 00       	call   92ece0 <<future_backtest::Customer::customer_params::StrategyParams as core::clone::Clone>::clone>
  926030:	4c 8b 8c 24 a8 1b 00 	mov    r9,QWORD PTR [rsp+0x1ba8]
  926037:	00 
  926038:	48 8b b4 24 60 1c 00 	mov    rsi,QWORD PTR [rsp+0x1c60]
  92603f:	00 
  926040:	48 8b 94 24 68 1c 00 	mov    rdx,QWORD PTR [rsp+0x1c68]
  926047:	00 
  926048:	48 8b 8c 24 78 1c 00 	mov    rcx,QWORD PTR [rsp+0x1c78]
  92604f:	00 
  926050:	4c 8b 84 24 80 1c 00 	mov    r8,QWORD PTR [rsp+0x1c80]
  926057:	00 
  926058:	0f b6 84 24 07 22 00 	movzx  eax,BYTE PTR [rsp+0x2207]
  92605f:	00 
  926060:	48 8d 3d 51 f6 92 ff 	lea    rdi,[rip+0xffffffffff92f651]        # 2556b8 <anon.baa4d3160c6db26b1acb0467a3a6e91d.628.llvm.14045134056871974489+0x80>
  926067:	48 89 7c 24 08       	mov    QWORD PTR [rsp+0x8],rdi
  92606c:	89 04 24             	mov    DWORD PTR [rsp],eax
  92606f:	48 c7 44 24 10 08 00 	mov    QWORD PTR [rsp+0x10],0x8
  926076:	00 00 
  926078:	48 8d bc 24 90 0e 00 	lea    rdi,[rsp+0xe90]
  92607f:	00 
  926080:	ff 15 12 62 fd 00    	call   QWORD PTR [rip+0xfd6212]        # 18fc298 <_DYNAMIC+0x998>
  926086:	48 8b 9c 24 80 00 00 	mov    rbx,QWORD PTR [rsp+0x80]
  92608d:	00 
  92608e:	4c 8b 74 24 18       	mov    r14,QWORD PTR [rsp+0x18]
  926093:	49 83 7e 10 00       	cmp    QWORD PTR [r14+0x10],0x0
  926098:	0f 85 ff 50 00 00    	jne    92b19d <future_backtest::RunnerCore::run_multi+0x8bcd>
  92609e:	49 c7 46 10 ff ff ff 	mov    QWORD PTR [r14+0x10],0xffffffffffffffff
  9260a5:	ff 
  9260a6:	48 89 df             	mov    rdi,rbx
  9260a9:	e8 02 78 f2 ff       	call   84d8b0 <_ZN4core3ptr67drop_in_place$LT$future_backtest..Logging..logging..BacktestLog$GT$17h7bb157681f2fc1e4E.llvm.3900561041070810133>
  9260ae:	0f 10 84 24 d0 0e 00 	movups xmm0,XMMWORD PTR [rsp+0xed0]
  9260b5:	00 
  9260b6:	0f 11 43 40          	movups XMMWORD PTR [rbx+0x40],xmm0
  9260ba:	66 0f 10 84 24 90 0e 	movupd xmm0,XMMWORD PTR [rsp+0xe90]
  9260c1:	00 00 
  9260c3:	f3 0f 6f 8c 24 a0 0e 	movdqu xmm1,XMMWORD PTR [rsp+0xea0]
  9260ca:	00 00 
  9260cc:	f3 0f 6f 94 24 b0 0e 	movdqu xmm2,XMMWORD PTR [rsp+0xeb0]
  9260d3:	00 00 
  9260d5:	f3 0f 6f 9c 24 c0 0e 	movdqu xmm3,XMMWORD PTR [rsp+0xec0]
  9260dc:	00 00 
  9260de:	f3 0f 7f 5b 30       	movdqu XMMWORD PTR [rbx+0x30],xmm3
  9260e3:	f3 0f 7f 53 20       	movdqu XMMWORD PTR [rbx+0x20],xmm2
  9260e8:	f3 0f 7f 4b 10       	movdqu XMMWORD PTR [rbx+0x10],xmm1
  9260ed:	66 0f 11 03          	movupd XMMWORD PTR [rbx],xmm0
  9260f1:	49 ff 46 10          	inc    QWORD PTR [r14+0x10]
  9260f5:	48 8b 44 24 48       	mov    rax,QWORD PTR [rsp+0x48]
  9260fa:	48 85 c0             	test   rax,rax
  9260fd:	48 8d 9c 24 d0 11 00 	lea    rbx,[rsp+0x11d0]
  926104:	00 
  926105:	0f 84 a7 00 00 00    	je     9261b2 <future_backtest::RunnerCore::run_multi+0x3be2>
  92610b:	4c 8b 74 24 40       	mov    r14,QWORD PTR [rsp+0x40]
  926110:	49 81 c6 f0 13 00 00 	add    r14,0x13f0
  926117:	4c 69 e0 28 15 00 00 	imul   r12,rax,0x1528
  92611e:	49 bf 00 00 00 00 00 	movabs r15,0x408f400000000000
  926125:	40 8f 40 
  926128:	4c 89 f7             	mov    rdi,r14
  92612b:	e8 d0 30 fd ff       	call   8f9200 <core::ptr::drop_in_place<core::option::Option<future_backtest::BacktestResult::backtest_result::BacktestResult>>>
  926130:	49 c7 06 00 00 00 00 	mov    QWORD PTR [r14],0x0
  926137:	49 c7 46 08 08 00 00 	mov    QWORD PTR [r14+0x8],0x8
  92613e:	00 
  92613f:	66 0f 57 c0          	xorpd  xmm0,xmm0
  926143:	66 41 0f 11 46 10    	movupd XMMWORD PTR [r14+0x10],xmm0
  926149:	49 c7 46 20 08 00 00 	mov    QWORD PTR [r14+0x20],0x8
  926150:	00 
  926151:	66 41 0f 11 46 28    	movupd XMMWORD PTR [r14+0x28],xmm0
  926157:	49 c7 46 38 08 00 00 	mov    QWORD PTR [r14+0x38],0x8
  92615e:	00 
  92615f:	66 41 0f 11 46 40    	movupd XMMWORD PTR [r14+0x40],xmm0
  926165:	49 c7 46 50 08 00 00 	mov    QWORD PTR [r14+0x50],0x8
  92616c:	00 
  92616d:	49 c7 46 58 00 00 00 	mov    QWORD PTR [r14+0x58],0x0
  926174:	00 
  926175:	48 b8 00 00 00 00 00 	movabs rax,0x8000000000000000
  92617c:	00 00 80 
  92617f:	49 89 46 60          	mov    QWORD PTR [r14+0x60],rax
  926183:	49 89 46 78          	mov    QWORD PTR [r14+0x78],rax
  926187:	49 89 86 90 00 00 00 	mov    QWORD PTR [r14+0x90],rax
  92618e:	4d 89 be a8 00 00 00 	mov    QWORD PTR [r14+0xa8],r15
  926195:	66 41 0f 11 86 b0 00 	movupd XMMWORD PTR [r14+0xb0],xmm0
  92619c:	00 00 
  92619e:	49 81 c6 28 15 00 00 	add    r14,0x1528
  9261a5:	49 81 c4 d8 ea ff ff 	add    r12,0xffffffffffffead8
  9261ac:	0f 85 76 ff ff ff    	jne    926128 <future_backtest::RunnerCore::run_multi+0x3b58>
  9261b2:	4c 8b ac 24 a8 00 00 	mov    r13,QWORD PTR [rsp+0xa8]
  9261b9:	00 
  9261ba:	4e 8d 34 ed 00 00 00 	lea    r14,[r13*8+0x0]
  9261c1:	00 
  9261c2:	4c 89 e8             	mov    rax,r13
  9261c5:	48 c1 e8 3d          	shr    rax,0x3d
  9261c9:	0f 95 c0             	setne  al
  9261cc:	4c 3b 74 24 50       	cmp    r14,QWORD PTR [rsp+0x50]
  9261d1:	0f 97 c1             	seta   cl
  9261d4:	08 c1                	or     cl,al
  9261d6:	74 1b                	je     9261f3 <future_backtest::RunnerCore::run_multi+0x3c23>
  9261d8:	45 31 ff             	xor    r15d,r15d
  9261db:	48 8d 15 16 b0 f2 00 	lea    rdx,[rip+0xf2b016]        # 18511f8 <anon.609a31ba814f1e4156e50677fc366a7f.492.llvm.5215769359700358943+0xb08>
  9261e2:	4c 89 ff             	mov    rdi,r15
  9261e5:	4c 89 f6             	mov    rsi,r14
  9261e8:	ff 15 8a 5f fd 00    	call   QWORD PTR [rip+0xfd5f8a]        # 18fc178 <_DYNAMIC+0x878>
  9261ee:	e9 29 53 00 00       	jmp    92b51c <future_backtest::RunnerCore::run_multi+0x8f4c>
  9261f3:	4d 85 f6             	test   r14,r14
  9261f6:	74 31                	je     926229 <future_backtest::RunnerCore::run_multi+0x3c59>
  9261f8:	ff 15 42 59 fd 00    	call   QWORD PTR [rip+0xfd5942]        # 18fbb40 <_DYNAMIC+0x240>
  9261fe:	41 bf 08 00 00 00    	mov    r15d,0x8
  926204:	be 08 00 00 00       	mov    esi,0x8
  926209:	4c 89 f7             	mov    rdi,r14
  92620c:	ff 15 06 59 fd 00    	call   QWORD PTR [rip+0xfd5906]        # 18fbb18 <_DYNAMIC+0x218>
  926212:	48 85 c0             	test   rax,rax
  926215:	74 c4                	je     9261db <future_backtest::RunnerCore::run_multi+0x3c0b>
  926217:	4c 8b a4 24 a8 00 00 	mov    r12,QWORD PTR [rsp+0xa8]
  92621e:	00 
  92621f:	4e 8d 34 e5 00 00 00 	lea    r14,[r12*8+0x0]
  926226:	00 
  926227:	eb 0e                	jmp    926237 <future_backtest::RunnerCore::run_multi+0x3c67>
  926229:	b8 08 00 00 00       	mov    eax,0x8
  92622e:	45 31 f6             	xor    r14d,r14d
  926231:	4d 89 ec             	mov    r12,r13
  926234:	45 31 ed             	xor    r13d,r13d
  926237:	48 b9 ff ff ff ff ff 	movabs rcx,0x1fffffffffffffff
  92623e:	ff ff 1f 
  926241:	4c 89 ac 24 e8 02 00 	mov    QWORD PTR [rsp+0x2e8],r13
  926248:	00 
  926249:	48 89 84 24 f0 02 00 	mov    QWORD PTR [rsp+0x2f0],rax
  926250:	00 
  926251:	48 c7 84 24 f8 02 00 	mov    QWORD PTR [rsp+0x2f8],0x0
  926258:	00 00 00 00 00 
  92625d:	49 39 cc             	cmp    r12,rcx
  926260:	0f 97 c0             	seta   al
  926263:	4c 3b 74 24 50       	cmp    r14,QWORD PTR [rsp+0x50]
  926268:	0f 97 c1             	seta   cl
  92626b:	08 c1                	or     cl,al
  92626d:	74 1b                	je     92628a <future_backtest::RunnerCore::run_multi+0x3cba>
  92626f:	45 31 ff             	xor    r15d,r15d
  926272:	48 8d 15 97 af f2 00 	lea    rdx,[rip+0xf2af97]        # 1851210 <anon.609a31ba814f1e4156e50677fc366a7f.492.llvm.5215769359700358943+0xb20>
  926279:	4c 89 ff             	mov    rdi,r15
  92627c:	4c 89 f6             	mov    rsi,r14
  92627f:	ff 15 f3 5e fd 00    	call   QWORD PTR [rip+0xfd5ef3]        # 18fc178 <_DYNAMIC+0x878>
  926285:	e9 92 52 00 00       	jmp    92b51c <future_backtest::RunnerCore::run_multi+0x8f4c>
  92628a:	4d 85 f6             	test   r14,r14
  92628d:	0f 84 ef 00 00 00    	je     926382 <future_backtest::RunnerCore::run_multi+0x3db2>
  926293:	ff 15 a7 58 fd 00    	call   QWORD PTR [rip+0xfd58a7]        # 18fbb40 <_DYNAMIC+0x240>
  926299:	41 bf 08 00 00 00    	mov    r15d,0x8
  92629f:	be 08 00 00 00       	mov    esi,0x8
  9262a4:	4c 89 f7             	mov    rdi,r14
  9262a7:	ff 15 6b 58 fd 00    	call   QWORD PTR [rip+0xfd586b]        # 18fbb18 <_DYNAMIC+0x218>
  9262ad:	48 85 c0             	test   rax,rax
  9262b0:	4c 8b ac 24 a0 00 00 	mov    r13,QWORD PTR [rsp+0xa0]
  9262b7:	00 
  9262b8:	0f 85 d4 00 00 00    	jne    926392 <future_backtest::RunnerCore::run_multi+0x3dc2>
  9262be:	eb b2                	jmp    926272 <future_backtest::RunnerCore::run_multi+0x3ca2>
  9262c0:	31 c0                	xor    eax,eax
  9262c2:	48 89 84 24 80 1b 00 	mov    QWORD PTR [rsp+0x1b80],rax
  9262c9:	00 
  9262ca:	66 0f d6 84 24 88 1b 	movq   QWORD PTR [rsp+0x1b88],xmm0
  9262d1:	00 00 
  9262d3:	48 8d 84 24 80 1b 00 	lea    rax,[rsp+0x1b80]
  9262da:	00 
  9262db:	48 89 84 24 d0 11 00 	mov    QWORD PTR [rsp+0x11d0],rax
  9262e2:	00 
  9262e3:	48 8d 05 f6 bb fd ff 	lea    rax,[rip+0xfffffffffffdbbf6]        # 901ee0 <<core::option::Option<T> as core::fmt::Debug>::fmt>
  9262ea:	48 89 84 24 d8 11 00 	mov    QWORD PTR [rsp+0x11d8],rax
  9262f1:	00 
  9262f2:	48 8d 84 24 e0 0e 00 	lea    rax,[rsp+0xee0]
  9262f9:	00 
  9262fa:	48 89 84 24 e0 11 00 	mov    QWORD PTR [rsp+0x11e0],rax
  926301:	00 
  926302:	48 8b 05 b7 5f fd 00 	mov    rax,QWORD PTR [rip+0xfd5fb7]        # 18fc2c0 <_DYNAMIC+0x9c0>
  926309:	48 89 84 24 e8 11 00 	mov    QWORD PTR [rsp+0x11e8],rax
  926310:	00 
  926311:	48 8d 05 60 ae f2 00 	lea    rax,[rip+0xf2ae60]        # 1851178 <anon.609a31ba814f1e4156e50677fc366a7f.492.llvm.5215769359700358943+0xa88>
  926318:	48 89 84 24 10 06 00 	mov    QWORD PTR [rsp+0x610],rax
  92631f:	00 
  926320:	48 c7 84 24 18 06 00 	mov    QWORD PTR [rsp+0x618],0x3
  926327:	00 03 00 00 00 
  92632c:	48 c7 84 24 30 06 00 	mov    QWORD PTR [rsp+0x630],0x0
  926333:	00 00 00 00 00 
  926338:	48 8d 84 24 d0 11 00 	lea    rax,[rsp+0x11d0]
  92633f:	00 
  926340:	48 89 84 24 20 06 00 	mov    QWORD PTR [rsp+0x620],rax
  926347:	00 
  926348:	48 c7 84 24 28 06 00 	mov    QWORD PTR [rsp+0x628],0x2
  92634f:	00 02 00 00 00 
  926354:	48 8d bc 24 50 1b 00 	lea    rdi,[rsp+0x1b50]
  92635b:	00 
  92635c:	48 8d b4 24 10 06 00 	lea    rsi,[rsp+0x610]
  926363:	00 
  926364:	ff 15 ee 5c fd 00    	call   QWORD PTR [rip+0xfd5cee]        # 18fc058 <_DYNAMIC+0x758>
  92636a:	48 8d bc 24 50 1b 00 	lea    rdi,[rsp+0x1b50]
  926371:	00 
  926372:	e8 b9 7d 04 00       	call   96e130 <anyhow::error::<impl anyhow::Error>::msg>
  926377:	49 89 c7             	mov    r15,rax
  92637a:	40 b5 01             	mov    bpl,0x1
  92637d:	e9 e0 f6 ff ff       	jmp    925a62 <future_backtest::RunnerCore::run_multi+0x3492>
  926382:	b8 08 00 00 00       	mov    eax,0x8
  926387:	45 31 e4             	xor    r12d,r12d
  92638a:	4c 8b ac 24 a0 00 00 	mov    r13,QWORD PTR [rsp+0xa0]
  926391:	00 
  926392:	4c 89 a4 24 e8 00 00 	mov    QWORD PTR [rsp+0xe8],r12
  926399:	00 
  92639a:	48 89 84 24 f0 00 00 	mov    QWORD PTR [rsp+0xf0],rax
  9263a1:	00 
  9263a2:	48 c7 84 24 f8 00 00 	mov    QWORD PTR [rsp+0xf8],0x0
  9263a9:	00 00 00 00 00 
  9263ae:	4d 85 ed             	test   r13,r13
  9263b1:	0f 84 13 06 00 00    	je     9269ca <future_backtest::RunnerCore::run_multi+0x43fa>
  9263b7:	49 c1 e5 04          	shl    r13,0x4
  9263bb:	48 b8 00 00 00 00 00 	movabs rax,0x8000000000000000
  9263c2:	00 00 80 
  9263c5:	48 83 c0 11          	add    rax,0x11
  9263c9:	48 89 44 24 50       	mov    QWORD PTR [rsp+0x50],rax
  9263ce:	4c 8d a4 24 b0 10 00 	lea    r12,[rsp+0x10b0]
  9263d5:	00 
  9263d6:	31 ed                	xor    ebp,ebp
  9263d8:	eb 3d                	jmp    926417 <future_backtest::RunnerCore::run_multi+0x3e47>
  9263da:	48 83 44 24 60 10    	add    QWORD PTR [rsp+0x60],0x10
  9263e0:	48 8b 84 24 f0 00 00 	mov    rax,QWORD PTR [rsp+0xf0]
  9263e7:	00 
  9263e8:	4e 89 3c e0          	mov    QWORD PTR [rax+r12*8],r15
  9263ec:	49 ff c4             	inc    r12
  9263ef:	4c 89 a4 24 f8 00 00 	mov    QWORD PTR [rsp+0xf8],r12
  9263f6:	00 
  9263f7:	48 ff c5             	inc    rbp
  9263fa:	49 89 dd             	mov    r13,rbx
  9263fd:	49 83 c5 f0          	add    r13,0xfffffffffffffff0
  926401:	48 8d 9c 24 d0 11 00 	lea    rbx,[rsp+0x11d0]
  926408:	00 
  926409:	4c 8d a4 24 b0 10 00 	lea    r12,[rsp+0x10b0]
  926410:	00 
  926411:	0f 84 b3 05 00 00    	je     9269ca <future_backtest::RunnerCore::run_multi+0x43fa>
  926417:	48 89 ac 24 40 01 00 	mov    QWORD PTR [rsp+0x140],rbp
  92641e:	00 
  92641f:	48 8b 44 24 60       	mov    rax,QWORD PTR [rsp+0x60]
  926424:	48 89 84 24 00 05 00 	mov    QWORD PTR [rsp+0x500],rax
  92642b:	00 
  92642c:	48 8d 84 24 40 01 00 	lea    rax,[rsp+0x140]
  926433:	00 
  926434:	48 89 84 24 d0 11 00 	mov    QWORD PTR [rsp+0x11d0],rax
  92643b:	00 
  92643c:	48 8b 05 95 5a fd 00 	mov    rax,QWORD PTR [rip+0xfd5a95]        # 18fbed8 <_DYNAMIC+0x5d8>
  926443:	48 89 84 24 d8 11 00 	mov    QWORD PTR [rsp+0x11d8],rax
  92644a:	00 
  92644b:	48 8d 84 24 00 05 00 	lea    rax,[rsp+0x500]
  926452:	00 
  926453:	48 89 84 24 e0 11 00 	mov    QWORD PTR [rsp+0x11e0],rax
  92645a:	00 
  92645b:	48 8d 05 3e 62 f2 ff 	lea    rax,[rip+0xfffffffffff2623e]        # 84c6a0 <<&T as core::fmt::Display>::fmt>
  926462:	48 89 84 24 e8 11 00 	mov    QWORD PTR [rsp+0x11e8],rax
  926469:	00 
  92646a:	48 8d 05 07 b7 f2 00 	lea    rax,[rip+0xf2b707]        # 1851b78 <anon.609a31ba814f1e4156e50677fc366a7f.492.llvm.5215769359700358943+0x1488>
  926471:	48 89 84 24 10 06 00 	mov    QWORD PTR [rsp+0x610],rax
  926478:	00 
  926479:	48 c7 84 24 18 06 00 	mov    QWORD PTR [rsp+0x618],0x3
  926480:	00 03 00 00 00 
  926485:	48 c7 84 24 30 06 00 	mov    QWORD PTR [rsp+0x630],0x0
  92648c:	00 00 00 00 00 
  926491:	48 89 9c 24 20 06 00 	mov    QWORD PTR [rsp+0x620],rbx
  926498:	00 
  926499:	48 c7 84 24 28 06 00 	mov    QWORD PTR [rsp+0x628],0x2
  9264a0:	00 02 00 00 00 
  9264a5:	4c 8d bc 24 10 06 00 	lea    r15,[rsp+0x610]
  9264ac:	00 
  9264ad:	4c 89 ff             	mov    rdi,r15
  9264b0:	ff 15 aa 60 fd 00    	call   QWORD PTR [rip+0xfd60aa]        # 18fc560 <_DYNAMIC+0xc60>
  9264b6:	48 8b 84 24 00 05 00 	mov    rax,QWORD PTR [rsp+0x500]
  9264bd:	00 
  9264be:	48 8b 30             	mov    rsi,QWORD PTR [rax]
  9264c1:	48 8b 50 08          	mov    rdx,QWORD PTR [rax+0x8]
  9264c5:	48 89 df             	mov    rdi,rbx
  9264c8:	b9 01 00 00 00       	mov    ecx,0x1
  9264cd:	e8 2e 6e 03 00       	call   95d300 <libloading::os::unix::Library::open>
  9264d2:	48 8b 8c 24 d0 11 00 	mov    rcx,QWORD PTR [rsp+0x11d0]
  9264d9:	00 
  9264da:	48 8b 84 24 d8 11 00 	mov    rax,QWORD PTR [rsp+0x11d8]
  9264e1:	00 
  9264e2:	48 3b 4c 24 50       	cmp    rcx,QWORD PTR [rsp+0x50]
  9264e7:	0f 85 c7 31 00 00    	jne    9296b4 <future_backtest::RunnerCore::run_multi+0x70e4>
  9264ed:	48 89 84 24 b0 10 00 	mov    QWORD PTR [rsp+0x10b0],rax
  9264f4:	00 
  9264f5:	c7 84 24 70 03 00 00 	mov    DWORD PTR [rsp+0x370],0x4
  9264fc:	04 00 00 00 
  926500:	b9 1c 00 00 00       	mov    ecx,0x1c
  926505:	4c 89 ff             	mov    rdi,r15
  926508:	4c 89 e6             	mov    rsi,r12
  92650b:	48 8d 15 89 30 93 ff 	lea    rdx,[rip+0xffffffffff933089]        # 25959b <anon.3a6d2b86dc1bb50257a917c3dcf9a912.147.llvm.12364612859142937606+0x105>
  926512:	e8 f9 6e 03 00       	call   95d410 <libloading::os::unix::Library::get_impl>
  926517:	48 8b 44 24 50       	mov    rax,QWORD PTR [rsp+0x50]
  92651c:	48 39 84 24 10 06 00 	cmp    QWORD PTR [rsp+0x610],rax
  926523:	00 
  926524:	75 0a                	jne    926530 <future_backtest::RunnerCore::run_multi+0x3f60>
  926526:	48 8b 84 24 18 06 00 	mov    rax,QWORD PTR [rsp+0x618]
  92652d:	00 
  92652e:	eb 3a                	jmp    92656a <future_backtest::RunnerCore::run_multi+0x3f9a>
  926530:	66 0f 10 84 24 10 06 	movupd xmm0,XMMWORD PTR [rsp+0x610]
  926537:	00 00 
  926539:	f3 0f 6f 8c 24 20 06 	movdqu xmm1,XMMWORD PTR [rsp+0x620]
  926540:	00 00 
  926542:	66 0f 29 84 24 d0 11 	movapd XMMWORD PTR [rsp+0x11d0],xmm0
  926549:	00 00 
  92654b:	66 0f 7f 8c 24 e0 11 	movdqa XMMWORD PTR [rsp+0x11e0],xmm1
  926552:	00 00 
  926554:	48 39 84 24 d0 11 00 	cmp    QWORD PTR [rsp+0x11d0],rax
  92655b:	00 
  92655c:	0f 85 89 4a 00 00    	jne    92afeb <future_backtest::RunnerCore::run_multi+0x8a1b>
  926562:	48 8b 84 24 d8 11 00 	mov    rax,QWORD PTR [rsp+0x11d8]
  926569:	00 
  92656a:	ff d0                	call   rax
  92656c:	89 84 24 e8 04 00 00 	mov    DWORD PTR [rsp+0x4e8],eax
  926573:	66 0f 57 c0          	xorpd  xmm0,xmm0
  926577:	66 0f 29 84 24 d0 01 	movapd XMMWORD PTR [rsp+0x1d0],xmm0
  92657e:	00 00 
  926580:	66 0f 29 84 24 c0 01 	movapd XMMWORD PTR [rsp+0x1c0],xmm0
  926587:	00 00 
  926589:	b9 1c 00 00 00       	mov    ecx,0x1c
  92658e:	4c 89 ff             	mov    rdi,r15
  926591:	4c 89 e6             	mov    rsi,r12
  926594:	48 8d 15 a9 b4 93 ff 	lea    rdx,[rip+0xffffffffff93b4a9]        # 261a44 <anon.6a344bec5b47d5ff54613f8a5571a5ae.118.llvm.4820274406621013443+0x63>
  92659b:	e8 70 6e 03 00       	call   95d410 <libloading::os::unix::Library::get_impl>
  9265a0:	48 8b 4c 24 50       	mov    rcx,QWORD PTR [rsp+0x50]
  9265a5:	48 39 8c 24 10 06 00 	cmp    QWORD PTR [rsp+0x610],rcx
  9265ac:	00 
  9265ad:	75 1a                	jne    9265c9 <future_backtest::RunnerCore::run_multi+0x3ff9>
  9265af:	48 8b 84 24 18 06 00 	mov    rax,QWORD PTR [rsp+0x618]
  9265b6:	00 
  9265b7:	48 89 84 24 d8 11 00 	mov    QWORD PTR [rsp+0x11d8],rax
  9265be:	00 
  9265bf:	48 89 8c 24 d0 11 00 	mov    QWORD PTR [rsp+0x11d0],rcx
  9265c6:	00 
  9265c7:	eb 3a                	jmp    926603 <future_backtest::RunnerCore::run_multi+0x4033>
  9265c9:	66 0f 10 84 24 10 06 	movupd xmm0,XMMWORD PTR [rsp+0x610]
  9265d0:	00 00 
  9265d2:	f3 0f 6f 8c 24 20 06 	movdqu xmm1,XMMWORD PTR [rsp+0x620]
  9265d9:	00 00 
  9265db:	66 0f 29 84 24 d0 11 	movapd XMMWORD PTR [rsp+0x11d0],xmm0
  9265e2:	00 00 
  9265e4:	66 0f 7f 8c 24 e0 11 	movdqa XMMWORD PTR [rsp+0x11e0],xmm1
  9265eb:	00 00 
  9265ed:	48 39 8c 24 d0 11 00 	cmp    QWORD PTR [rsp+0x11d0],rcx
  9265f4:	00 
  9265f5:	0f 85 c6 00 00 00    	jne    9266c1 <future_backtest::RunnerCore::run_multi+0x40f1>
  9265fb:	48 8b 84 24 d8 11 00 	mov    rax,QWORD PTR [rsp+0x11d8]
  926602:	00 
  926603:	be 20 00 00 00       	mov    esi,0x20
  926608:	4c 8d b4 24 c0 01 00 	lea    r14,[rsp+0x1c0]
  92660f:	00 
  926610:	4c 89 f7             	mov    rdi,r14
  926613:	ff d0                	call   rax
  926615:	48 83 f8 21          	cmp    rax,0x21
  926619:	0f 83 44 4a 00 00    	jae    92b063 <future_backtest::RunnerCore::run_multi+0x8a93>
  92661f:	4c 89 ff             	mov    rdi,r15
  926622:	4c 89 f6             	mov    rsi,r14
  926625:	48 89 c2             	mov    rdx,rax
  926628:	ff 15 7a 65 fd 00    	call   QWORD PTR [rip+0xfd657a]        # 18fcba8 <_DYNAMIC+0x12a8>
  92662e:	48 b8 00 00 00 00 00 	movabs rax,0x8000000000000000
  926635:	00 00 80 
  926638:	48 39 84 24 10 06 00 	cmp    QWORD PTR [rsp+0x610],rax
  92663f:	00 
  926640:	75 58                	jne    92669a <future_backtest::RunnerCore::run_multi+0x40ca>
  926642:	4c 89 eb             	mov    rbx,r13
  926645:	4c 8b bc 24 20 06 00 	mov    r15,QWORD PTR [rsp+0x620]
  92664c:	00 
  92664d:	41 b5 01             	mov    r13b,0x1
  926650:	4d 85 ff             	test   r15,r15
  926653:	0f 88 7a 05 00 00    	js     926bd3 <future_backtest::RunnerCore::run_multi+0x4603>
  926659:	48 8b b4 24 18 06 00 	mov    rsi,QWORD PTR [rsp+0x618]
  926660:	00 
  926661:	0f 84 cc 00 00 00    	je     926733 <future_backtest::RunnerCore::run_multi+0x4163>
  926667:	49 89 f6             	mov    r14,rsi
  92666a:	ff 15 d0 54 fd 00    	call   QWORD PTR [rip+0xfd54d0]        # 18fbb40 <_DYNAMIC+0x240>
  926670:	41 bc 01 00 00 00    	mov    r12d,0x1
  926676:	be 01 00 00 00       	mov    esi,0x1
  92667b:	4c 89 ff             	mov    rdi,r15
  92667e:	ff 15 94 54 fd 00    	call   QWORD PTR [rip+0xfd5494]        # 18fbb18 <_DYNAMIC+0x218>
  926684:	48 89 44 24 70       	mov    QWORD PTR [rsp+0x70],rax
  926689:	48 85 c0             	test   rax,rax
  92668c:	0f 84 49 05 00 00    	je     926bdb <future_backtest::RunnerCore::run_multi+0x460b>
  926692:	4c 89 f6             	mov    rsi,r14
  926695:	e9 a3 00 00 00       	jmp    92673d <future_backtest::RunnerCore::run_multi+0x416d>
  92669a:	48 8b 84 24 20 06 00 	mov    rax,QWORD PTR [rsp+0x620]
  9266a1:	00 
  9266a2:	48 89 84 24 b0 03 00 	mov    QWORD PTR [rsp+0x3b0],rax
  9266a9:	00 
  9266aa:	66 0f 10 84 24 10 06 	movupd xmm0,XMMWORD PTR [rsp+0x610]
  9266b1:	00 00 
  9266b3:	66 0f 29 84 24 a0 03 	movapd XMMWORD PTR [rsp+0x3a0],xmm0
  9266ba:	00 00 
  9266bc:	e9 c0 00 00 00       	jmp    926781 <future_backtest::RunnerCore::run_multi+0x41b1>
  9266c1:	ff 15 79 54 fd 00    	call   QWORD PTR [rip+0xfd5479]        # 18fbb40 <_DYNAMIC+0x240>
  9266c7:	41 bf 07 00 00 00    	mov    r15d,0x7
  9266cd:	41 bc 01 00 00 00    	mov    r12d,0x1
  9266d3:	bf 07 00 00 00       	mov    edi,0x7
  9266d8:	be 01 00 00 00       	mov    esi,0x1
  9266dd:	ff 15 35 54 fd 00    	call   QWORD PTR [rip+0xfd5435]        # 18fbb18 <_DYNAMIC+0x218>
  9266e3:	48 85 c0             	test   rax,rax
  9266e6:	0f 84 7b 4b 00 00    	je     92b267 <future_backtest::RunnerCore::run_multi+0x8c97>
  9266ec:	c7 40 03 6e 6f 77 6e 	mov    DWORD PTR [rax+0x3],0x6e776f6e
  9266f3:	c7 00 75 6e 6b 6e    	mov    DWORD PTR [rax],0x6e6b6e75
  9266f9:	48 c7 84 24 a0 03 00 	mov    QWORD PTR [rsp+0x3a0],0x7
  926700:	00 07 00 00 00 
  926705:	48 89 84 24 a8 03 00 	mov    QWORD PTR [rsp+0x3a8],rax
  92670c:	00 
  92670d:	48 c7 84 24 b0 03 00 	mov    QWORD PTR [rsp+0x3b0],0x7
  926714:	00 07 00 00 00 
  926719:	48 89 df             	mov    rdi,rbx
  92671c:	e8 df 45 fd ff       	call   8fad00 <core::ptr::drop_in_place<libloading::error::Error>>
  926721:	4c 8d bc 24 10 06 00 	lea    r15,[rsp+0x610]
  926728:	00 
  926729:	4c 8d a4 24 b0 10 00 	lea    r12,[rsp+0x10b0]
  926730:	00 
  926731:	eb 4e                	jmp    926781 <future_backtest::RunnerCore::run_multi+0x41b1>
  926733:	b8 01 00 00 00       	mov    eax,0x1
  926738:	48 89 44 24 70       	mov    QWORD PTR [rsp+0x70],rax
  92673d:	4c 8b 74 24 70       	mov    r14,QWORD PTR [rsp+0x70]
  926742:	4c 89 f7             	mov    rdi,r14
  926745:	4c 89 fa             	mov    rdx,r15
  926748:	ff 15 aa 57 fd 00    	call   QWORD PTR [rip+0xfd57aa]        # 18fbef8 <memcpy@GLIBC_2.14>
  92674e:	4c 89 bc 24 a0 03 00 	mov    QWORD PTR [rsp+0x3a0],r15
  926755:	00 
  926756:	4c 89 b4 24 a8 03 00 	mov    QWORD PTR [rsp+0x3a8],r14
  92675d:	00 
  92675e:	4c 89 bc 24 b0 03 00 	mov    QWORD PTR [rsp+0x3b0],r15
  926765:	00 
  926766:	49 89 dd             	mov    r13,rbx
  926769:	48 8d 9c 24 d0 11 00 	lea    rbx,[rsp+0x11d0]
  926770:	00 
  926771:	4c 8d bc 24 10 06 00 	lea    r15,[rsp+0x610]
  926778:	00 
  926779:	4c 8d a4 24 b0 10 00 	lea    r12,[rsp+0x10b0]
  926780:	00 
  926781:	48 8d 84 24 70 03 00 	lea    rax,[rsp+0x370]
  926788:	00 
  926789:	48 89 84 24 10 06 00 	mov    QWORD PTR [rsp+0x610],rax
  926790:	00 
  926791:	48 8b 05 48 58 fd 00 	mov    rax,QWORD PTR [rip+0xfd5848]        # 18fbfe0 <_DYNAMIC+0x6e0>
  926798:	48 89 84 24 18 06 00 	mov    QWORD PTR [rsp+0x618],rax
  92679f:	00 
  9267a0:	48 8d 8c 24 a0 03 00 	lea    rcx,[rsp+0x3a0]
  9267a7:	00 
  9267a8:	48 89 8c 24 20 06 00 	mov    QWORD PTR [rsp+0x620],rcx
  9267af:	00 
  9267b0:	48 8d 0d a9 b2 fd ff 	lea    rcx,[rip+0xfffffffffffdb2a9]        # 901a60 <<alloc::string::String as core::fmt::Display>::fmt>
  9267b7:	48 89 8c 24 28 06 00 	mov    QWORD PTR [rsp+0x628],rcx
  9267be:	00 
  9267bf:	48 8d 8c 24 e8 04 00 	lea    rcx,[rsp+0x4e8]
  9267c6:	00 
  9267c7:	48 89 8c 24 30 06 00 	mov    QWORD PTR [rsp+0x630],rcx
  9267ce:	00 
  9267cf:	48 89 84 24 38 06 00 	mov    QWORD PTR [rsp+0x638],rax
  9267d6:	00 
  9267d7:	48 8d 05 5a a4 f2 00 	lea    rax,[rip+0xf2a45a]        # 1850c38 <anon.609a31ba814f1e4156e50677fc366a7f.492.llvm.5215769359700358943+0x548>
  9267de:	48 89 84 24 d0 11 00 	mov    QWORD PTR [rsp+0x11d0],rax
  9267e5:	00 
  9267e6:	48 c7 84 24 d8 11 00 	mov    QWORD PTR [rsp+0x11d8],0x4
  9267ed:	00 04 00 00 00 
  9267f2:	48 c7 84 24 f0 11 00 	mov    QWORD PTR [rsp+0x11f0],0x0
  9267f9:	00 00 00 00 00 
  9267fe:	4c 89 bc 24 e0 11 00 	mov    QWORD PTR [rsp+0x11e0],r15
  926805:	00 
  926806:	48 c7 84 24 e8 11 00 	mov    QWORD PTR [rsp+0x11e8],0x3
  92680d:	00 03 00 00 00 
  926812:	48 89 df             	mov    rdi,rbx
  926815:	ff 15 45 5d fd 00    	call   QWORD PTR [rip+0xfd5d45]        # 18fc560 <_DYNAMIC+0xc60>
  92681b:	8b 84 24 e8 04 00 00 	mov    eax,DWORD PTR [rsp+0x4e8]
  926822:	c7 84 24 20 03 00 00 	mov    DWORD PTR [rsp+0x320],0x4
  926829:	04 00 00 00 
  92682d:	89 84 24 70 01 00 00 	mov    DWORD PTR [rsp+0x170],eax
  926834:	83 f8 04             	cmp    eax,0x4
  926837:	0f 85 e4 00 00 00    	jne    926921 <future_backtest::RunnerCore::run_multi+0x4351>
  92683d:	45 31 ff             	xor    r15d,r15d
  926840:	48 8b b4 24 a0 03 00 	mov    rsi,QWORD PTR [rsp+0x3a0]
  926847:	00 
  926848:	48 85 f6             	test   rsi,rsi
  92684b:	74 13                	je     926860 <future_backtest::RunnerCore::run_multi+0x4290>
  92684d:	48 8b bc 24 a8 03 00 	mov    rdi,QWORD PTR [rsp+0x3a8]
  926854:	00 
  926855:	ba 01 00 00 00       	mov    edx,0x1
  92685a:	ff 15 c0 52 fd 00    	call   QWORD PTR [rip+0xfd52c0]        # 18fbb20 <_DYNAMIC+0x220>
  926860:	4d 85 ff             	test   r15,r15
  926863:	0f 85 b8 2e 00 00    	jne    929721 <future_backtest::RunnerCore::run_multi+0x7151>
  926869:	b9 10 00 00 00       	mov    ecx,0x10
  92686e:	48 89 df             	mov    rdi,rbx
  926871:	4c 89 e6             	mov    rsi,r12
  926874:	48 8d 15 78 78 93 ff 	lea    rdx,[rip+0xffffffffff937878]        # 25e0f3 <anon.5ab355837303ce95b24d7b0f77f323d8.20.llvm.14255860597723985694+0x363>
  92687b:	e8 90 6b 03 00       	call   95d410 <libloading::os::unix::Library::get_impl>
  926880:	48 8b 8c 24 d0 11 00 	mov    rcx,QWORD PTR [rsp+0x11d0]
  926887:	00 
  926888:	48 8b 84 24 d8 11 00 	mov    rax,QWORD PTR [rsp+0x11d8]
  92688f:	00 
  926890:	48 3b 4c 24 50       	cmp    rcx,QWORD PTR [rsp+0x50]
  926895:	0f 85 54 2e 00 00    	jne    9296ef <future_backtest::RunnerCore::run_multi+0x711f>
  92689b:	4c 89 eb             	mov    rbx,r13
  92689e:	ff d0                	call   rax
  9268a0:	49 89 c7             	mov    r15,rax
  9268a3:	4c 8b ac 24 b0 10 00 	mov    r13,QWORD PTR [rsp+0x10b0]
  9268aa:	00 
  9268ab:	4c 89 ac 24 10 06 00 	mov    QWORD PTR [rsp+0x610],r13
  9268b2:	00 
  9268b3:	4c 8b a4 24 f8 02 00 	mov    r12,QWORD PTR [rsp+0x2f8]
  9268ba:	00 
  9268bb:	4c 3b a4 24 e8 02 00 	cmp    r12,QWORD PTR [rsp+0x2e8]
  9268c2:	00 
  9268c3:	75 15                	jne    9268da <future_backtest::RunnerCore::run_multi+0x430a>
  9268c5:	48 8d bc 24 e8 02 00 	lea    rdi,[rsp+0x2e8]
  9268cc:	00 
  9268cd:	48 8d 35 d4 b2 f2 00 	lea    rsi,[rip+0xf2b2d4]        # 1851ba8 <anon.609a31ba814f1e4156e50677fc366a7f.492.llvm.5215769359700358943+0x14b8>
  9268d4:	ff 15 66 63 fd 00    	call   QWORD PTR [rip+0xfd6366]        # 18fcc40 <_DYNAMIC+0x1340>
  9268da:	48 8b 84 24 f0 02 00 	mov    rax,QWORD PTR [rsp+0x2f0]
  9268e1:	00 
  9268e2:	4e 89 2c e0          	mov    QWORD PTR [rax+r12*8],r13
  9268e6:	49 ff c4             	inc    r12
  9268e9:	4c 89 a4 24 f8 02 00 	mov    QWORD PTR [rsp+0x2f8],r12
  9268f0:	00 
  9268f1:	4c 8b a4 24 f8 00 00 	mov    r12,QWORD PTR [rsp+0xf8]
  9268f8:	00 
  9268f9:	4c 3b a4 24 e8 00 00 	cmp    r12,QWORD PTR [rsp+0xe8]
  926900:	00 
  926901:	0f 85 d3 fa ff ff    	jne    9263da <future_backtest::RunnerCore::run_multi+0x3e0a>
  926907:	48 8d bc 24 e8 00 00 	lea    rdi,[rsp+0xe8]
  92690e:	00 
  92690f:	48 8d 35 aa b2 f2 00 	lea    rsi,[rip+0xf2b2aa]        # 1851bc0 <anon.609a31ba814f1e4156e50677fc366a7f.492.llvm.5215769359700358943+0x14d0>
  926916:	ff 15 d4 61 fd 00    	call   QWORD PTR [rip+0xfd61d4]        # 18fcaf0 <_DYNAMIC+0x11f0>
  92691c:	e9 b9 fa ff ff       	jmp    9263da <future_backtest::RunnerCore::run_multi+0x3e0a>
  926921:	48 8d 84 24 20 03 00 	lea    rax,[rsp+0x320]
  926928:	00 
  926929:	48 89 84 24 d0 11 00 	mov    QWORD PTR [rsp+0x11d0],rax
  926930:	00 
  926931:	48 8b 05 a8 56 fd 00 	mov    rax,QWORD PTR [rip+0xfd56a8]        # 18fbfe0 <_DYNAMIC+0x6e0>
  926938:	48 89 84 24 d8 11 00 	mov    QWORD PTR [rsp+0x11d8],rax
  92693f:	00 
  926940:	48 8d 8c 24 70 01 00 	lea    rcx,[rsp+0x170]
  926947:	00 
  926948:	48 89 8c 24 e0 11 00 	mov    QWORD PTR [rsp+0x11e0],rcx
  92694f:	00 
  926950:	48 89 84 24 e8 11 00 	mov    QWORD PTR [rsp+0x11e8],rax
  926957:	00 
  926958:	48 8d 05 91 a2 f2 00 	lea    rax,[rip+0xf2a291]        # 1850bf0 <anon.609a31ba814f1e4156e50677fc366a7f.492.llvm.5215769359700358943+0x500>
  92695f:	48 89 84 24 10 06 00 	mov    QWORD PTR [rsp+0x610],rax
  926966:	00 
  926967:	48 c7 84 24 18 06 00 	mov    QWORD PTR [rsp+0x618],0x3
  92696e:	00 03 00 00 00 
  926973:	48 c7 84 24 30 06 00 	mov    QWORD PTR [rsp+0x630],0x0
  92697a:	00 00 00 00 00 
  92697f:	48 89 9c 24 20 06 00 	mov    QWORD PTR [rsp+0x620],rbx
  926986:	00 
  926987:	48 c7 84 24 28 06 00 	mov    QWORD PTR [rsp+0x628],0x2
  92698e:	00 02 00 00 00 
  926993:	48 8d bc 24 c0 01 00 	lea    rdi,[rsp+0x1c0]
  92699a:	00 
  92699b:	4c 89 fe             	mov    rsi,r15
  92699e:	ff 15 b4 56 fd 00    	call   QWORD PTR [rip+0xfd56b4]        # 18fc058 <_DYNAMIC+0x758>
  9269a4:	48 8d bc 24 c0 01 00 	lea    rdi,[rsp+0x1c0]
  9269ab:	00 
  9269ac:	e8 7f 77 04 00       	call   96e130 <anyhow::error::<impl anyhow::Error>::msg>
  9269b1:	49 89 c7             	mov    r15,rax
  9269b4:	48 8b b4 24 a0 03 00 	mov    rsi,QWORD PTR [rsp+0x3a0]
  9269bb:	00 
  9269bc:	48 85 f6             	test   rsi,rsi
  9269bf:	0f 85 88 fe ff ff    	jne    92684d <future_backtest::RunnerCore::run_multi+0x427d>
  9269c5:	e9 96 fe ff ff       	jmp    926860 <future_backtest::RunnerCore::run_multi+0x4290>
  9269ca:	48 83 7c 24 48 00    	cmp    QWORD PTR [rsp+0x48],0x0
  9269d0:	0f 84 99 48 00 00    	je     92b26f <future_backtest::RunnerCore::run_multi+0x8c9f>
  9269d6:	b0 01                	mov    al,0x1
  9269d8:	89 44 24 68          	mov    DWORD PTR [rsp+0x68],eax
  9269dc:	48 8b 74 24 40       	mov    rsi,QWORD PTR [rsp+0x40]
  9269e1:	48 8d bc 24 d0 11 00 	lea    rdi,[rsp+0x11d0]
  9269e8:	00 
  9269e9:	e8 f2 82 00 00       	call   92ece0 <<future_backtest::Customer::customer_params::StrategyParams as core::clone::Clone>::clone>
  9269ee:	48 83 bc 24 a8 00 00 	cmp    QWORD PTR [rsp+0xa8],0x0
  9269f5:	00 00 
  9269f7:	0f 84 36 05 00 00    	je     926f33 <future_backtest::RunnerCore::run_multi+0x4963>
  9269fd:	4c 8d b4 24 e0 0e 00 	lea    r14,[rsp+0xee0]
  926a04:	00 
  926a05:	4c 8d a4 24 10 06 00 	lea    r12,[rsp+0x610]
  926a0c:	00 
  926a0d:	31 db                	xor    ebx,ebx
  926a0f:	31 ed                	xor    ebp,ebp
  926a11:	eb 1b                	jmp    926a2e <future_backtest::RunnerCore::run_multi+0x445e>
  926a13:	48 8b b4 24 a8 00 00 	mov    rsi,QWORD PTR [rsp+0xa8]
  926a1a:	00 
  926a1b:	48 ff c5             	inc    rbp
  926a1e:	48 81 c3 28 15 00 00 	add    rbx,0x1528
  926a25:	48 39 f5             	cmp    rbp,rsi
  926a28:	0f 83 07 05 00 00    	jae    926f35 <future_backtest::RunnerCore::run_multi+0x4965>
  926a2e:	48 89 ac 24 b0 10 00 	mov    QWORD PTR [rsp+0x10b0],rbp
  926a35:	00 
  926a36:	48 8b 74 24 48       	mov    rsi,QWORD PTR [rsp+0x48]
  926a3b:	48 39 f5             	cmp    rbp,rsi
  926a3e:	0f 83 6b 47 00 00    	jae    92b1af <future_backtest::RunnerCore::run_multi+0x8bdf>
  926a44:	48 8b 74 24 40       	mov    rsi,QWORD PTR [rsp+0x40]
  926a49:	48 01 de             	add    rsi,rbx
  926a4c:	83 bc 24 e0 0e 00 00 	cmp    DWORD PTR [rsp+0xee0],0x2
  926a53:	02 
  926a54:	4c 89 f1             	mov    rcx,r14
  926a57:	b8 00 00 00 00       	mov    eax,0x0
  926a5c:	48 0f 44 c8          	cmove  rcx,rax
  926a60:	4c 89 e7             	mov    rdi,r12
  926a63:	48 89 ea             	mov    rdx,rbp
  926a66:	45 31 c0             	xor    r8d,r8d
  926a69:	e8 a2 b6 ff ff       	call   922110 <future_backtest::RunnerCore::make_ffi_ctx>
  926a6e:	4c 8b ac 24 10 06 00 	mov    r13,QWORD PTR [rsp+0x610]
  926a75:	00 
  926a76:	4c 8b bc 24 18 06 00 	mov    r15,QWORD PTR [rsp+0x618]
  926a7d:	00 
  926a7e:	49 83 fd 03          	cmp    r13,0x3
  926a82:	0f 84 69 37 00 00    	je     92a1f1 <future_backtest::RunnerCore::run_multi+0x7c21>
  926a88:	ba e8 00 00 00       	mov    edx,0xe8
  926a8d:	48 8d bc 24 d0 01 00 	lea    rdi,[rsp+0x1d0]
  926a94:	00 
  926a95:	48 8d b4 24 20 06 00 	lea    rsi,[rsp+0x620]
  926a9c:	00 
  926a9d:	ff 15 55 54 fd 00    	call   QWORD PTR [rip+0xfd5455]        # 18fbef8 <memcpy@GLIBC_2.14>
  926aa3:	4c 89 ac 24 c0 01 00 	mov    QWORD PTR [rsp+0x1c0],r13
  926aaa:	00 
  926aab:	4c 89 bc 24 c8 01 00 	mov    QWORD PTR [rsp+0x1c8],r15
  926ab2:	00 
  926ab3:	48 8b bc 24 b0 10 00 	mov    rdi,QWORD PTR [rsp+0x10b0]
  926aba:	00 
  926abb:	48 8b b4 24 f8 00 00 	mov    rsi,QWORD PTR [rsp+0xf8]
  926ac2:	00 
  926ac3:	48 39 f7             	cmp    rdi,rsi
  926ac6:	0f 83 f8 46 00 00    	jae    92b1c4 <future_backtest::RunnerCore::run_multi+0x8bf4>
  926acc:	48 8b 84 24 f0 00 00 	mov    rax,QWORD PTR [rsp+0xf0]
  926ad3:	00 
  926ad4:	48 8b 04 f8          	mov    rax,QWORD PTR [rax+rdi*8]
  926ad8:	48 8b 38             	mov    rdi,QWORD PTR [rax]
  926adb:	48 8d b4 24 c0 01 00 	lea    rsi,[rsp+0x1c0]
  926ae2:	00 
  926ae3:	ff 50 08             	call   QWORD PTR [rax+0x8]
  926ae6:	89 84 24 88 03 00 00 	mov    DWORD PTR [rsp+0x388],eax
  926aed:	85 c0                	test   eax,eax
  926aef:	0f 88 35 2a 00 00    	js     92952a <future_backtest::RunnerCore::run_multi+0x6f5a>
  926af5:	48 8d 84 24 b0 10 00 	lea    rax,[rsp+0x10b0]
  926afc:	00 
  926afd:	48 89 84 24 a0 03 00 	mov    QWORD PTR [rsp+0x3a0],rax
  926b04:	00 
  926b05:	48 8b 05 cc 53 fd 00 	mov    rax,QWORD PTR [rip+0xfd53cc]        # 18fbed8 <_DYNAMIC+0x5d8>
  926b0c:	48 89 84 24 a8 03 00 	mov    QWORD PTR [rsp+0x3a8],rax
  926b13:	00 
  926b14:	48 8d 05 1d b0 f2 00 	lea    rax,[rip+0xf2b01d]        # 1851b38 <anon.609a31ba814f1e4156e50677fc366a7f.492.llvm.5215769359700358943+0x1448>
  926b1b:	48 89 84 24 10 06 00 	mov    QWORD PTR [rsp+0x610],rax
  926b22:	00 
  926b23:	48 c7 84 24 18 06 00 	mov    QWORD PTR [rsp+0x618],0x2
  926b2a:	00 02 00 00 00 
  926b2f:	48 c7 84 24 30 06 00 	mov    QWORD PTR [rsp+0x630],0x0
  926b36:	00 00 00 00 00 
  926b3b:	48 8d 84 24 a0 03 00 	lea    rax,[rsp+0x3a0]
  926b42:	00 
  926b43:	48 89 84 24 20 06 00 	mov    QWORD PTR [rsp+0x620],rax
  926b4a:	00 
  926b4b:	48 c7 84 24 28 06 00 	mov    QWORD PTR [rsp+0x628],0x1
  926b52:	00 01 00 00 00 
  926b57:	4c 89 e7             	mov    rdi,r12
  926b5a:	ff 15 00 5a fd 00    	call   QWORD PTR [rip+0xfd5a00]        # 18fc560 <_DYNAMIC+0xc60>
  926b60:	48 8b b4 24 90 02 00 	mov    rsi,QWORD PTR [rsp+0x290]
  926b67:	00 
  926b68:	48 85 f6             	test   rsi,rsi
  926b6b:	74 13                	je     926b80 <future_backtest::RunnerCore::run_multi+0x45b0>
  926b6d:	48 8b bc 24 98 02 00 	mov    rdi,QWORD PTR [rsp+0x298]
  926b74:	00 
  926b75:	ba 01 00 00 00       	mov    edx,0x1
  926b7a:	ff 15 a0 4f fd 00    	call   QWORD PTR [rip+0xfd4fa0]        # 18fbb20 <_DYNAMIC+0x220>
  926b80:	83 bc 24 c0 01 00 00 	cmp    DWORD PTR [rsp+0x1c0],0x2
  926b87:	02 
  926b88:	0f 84 85 fe ff ff    	je     926a13 <future_backtest::RunnerCore::run_multi+0x4443>
  926b8e:	48 8b b4 24 28 02 00 	mov    rsi,QWORD PTR [rsp+0x228]
  926b95:	00 
  926b96:	48 85 f6             	test   rsi,rsi
  926b99:	74 13                	je     926bae <future_backtest::RunnerCore::run_multi+0x45de>
  926b9b:	48 8b bc 24 30 02 00 	mov    rdi,QWORD PTR [rsp+0x230]
  926ba2:	00 
  926ba3:	ba 01 00 00 00       	mov    edx,0x1
  926ba8:	ff 15 72 4f fd 00    	call   QWORD PTR [rip+0xfd4f72]        # 18fbb20 <_DYNAMIC+0x220>
  926bae:	48 8b 84 24 40 02 00 	mov    rax,QWORD PTR [rsp+0x240]
  926bb5:	00 
  926bb6:	f0 48 ff 08          	lock dec QWORD PTR [rax]
  926bba:	0f 85 53 fe ff ff    	jne    926a13 <future_backtest::RunnerCore::run_multi+0x4443>
  926bc0:	48 8d bc 24 40 02 00 	lea    rdi,[rsp+0x240]
  926bc7:	00 
  926bc8:	ff 15 92 55 fd 00    	call   QWORD PTR [rip+0xfd5592]        # 18fc160 <_DYNAMIC+0x860>
  926bce:	e9 40 fe ff ff       	jmp    926a13 <future_backtest::RunnerCore::run_multi+0x4443>
  926bd3:	45 31 e4             	xor    r12d,r12d
  926bd6:	4c 8b 7c 24 70       	mov    r15,QWORD PTR [rsp+0x70]
  926bdb:	48 8d 15 de 8a f2 00 	lea    rdx,[rip+0xf28ade]        # 184f6c0 <anon.609a31ba814f1e4156e50677fc366a7f.248.llvm.5215769359700358943>
  926be2:	4c 89 e7             	mov    rdi,r12
  926be5:	4c 89 fe             	mov    rsi,r15
  926be8:	ff 15 8a 55 fd 00    	call   QWORD PTR [rip+0xfd558a]        # 18fc178 <_DYNAMIC+0x878>
  926bee:	e9 29 49 00 00       	jmp    92b51c <future_backtest::RunnerCore::run_multi+0x8f4c>
  926bf3:	4c 8d b4 24 80 1b 00 	lea    r14,[rsp+0x1b80]
  926bfa:	00 
  926bfb:	4c 8d bc 24 d0 11 00 	lea    r15,[rsp+0x11d0]
  926c02:	00 
  926c03:	4c 89 f7             	mov    rdi,r14
  926c06:	4c 89 fe             	mov    rsi,r15
  926c09:	e8 b2 b6 d4 ff       	call   6722c0 <_ZN5alloc11collections5btree3map25IntoIter$LT$K$C$V$C$A$GT$10dying_next17he5722eb1ea305e80E.llvm.1643563994444475245>
  926c0e:	48 83 bc 24 80 1b 00 	cmp    QWORD PTR [rsp+0x1b80],0x0
  926c15:	00 00 
  926c17:	75 ea                	jne    926c03 <future_backtest::RunnerCore::run_multi+0x4633>
  926c19:	48 8d 0d c8 7d f2 00 	lea    rcx,[rip+0xf27dc8]        # 184e9e8 <anon.609a31ba814f1e4156e50677fc366a7f.99.llvm.5215769359700358943>
  926c20:	48 8d bc 24 00 05 00 	lea    rdi,[rsp+0x500]
  926c27:	00 
  926c28:	48 89 de             	mov    rsi,rbx
  926c2b:	48 8b 94 24 90 00 00 	mov    rdx,QWORD PTR [rsp+0x90]
  926c32:	00 
  926c33:	e8 38 07 fb ff       	call   8d7370 <<alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter>
  926c38:	48 8b bc 24 08 05 00 	mov    rdi,QWORD PTR [rsp+0x508]
  926c3f:	00 
  926c40:	48 8b 84 24 10 05 00 	mov    rax,QWORD PTR [rsp+0x510]
  926c47:	00 
  926c48:	48 85 c0             	test   rax,rax
  926c4b:	0f 84 92 01 00 00    	je     926de3 <future_backtest::RunnerCore::run_multi+0x4813>
  926c51:	48 89 c1             	mov    rcx,rax
  926c54:	48 c1 e1 04          	shl    rcx,0x4
  926c58:	48 01 f9             	add    rcx,rdi
  926c5b:	31 d2                	xor    edx,edx
  926c5d:	48 be ff ff ff ff ff 	movabs rsi,0xfffffffffffff
  926c64:	ff 0f 00 
  926c67:	49 b8 00 00 00 00 00 	movabs r8,0xfff0000000000000
  926c6e:	00 f0 ff 
  926c71:	66 0f 57 c0          	xorpd  xmm0,xmm0
  926c75:	49 89 f9             	mov    r9,rdi
  926c78:	f3 41 0f 7e 09       	movq   xmm1,QWORD PTR [r9]
  926c7d:	f3 41 0f 7e 51 08    	movq   xmm2,QWORD PTR [r9+0x8]
  926c83:	66 49 0f 7e ca       	movq   r10,xmm1
  926c88:	48 89 54 24 38       	mov    QWORD PTR [rsp+0x38],rdx
  926c8d:	66 0f d6 8c 24 40 0e 	movq   QWORD PTR [rsp+0xe40],xmm1
  926c94:	00 00 
  926c96:	66 0f d6 94 24 a8 01 	movq   QWORD PTR [rsp+0x1a8],xmm2
  926c9d:	00 00 
  926c9f:	49 bb ff ff ff ff ff 	movabs r11,0x7fffffffffffffff
  926ca6:	ff ff 7f 
  926ca9:	4d 21 da             	and    r10,r11
  926cac:	49 bb ff ff ff ff ff 	movabs r11,0x7fefffffffffffff
  926cb3:	ff ef 7f 
  926cb6:	4d 39 da             	cmp    r10,r11
  926cb9:	0f 8f dd 32 00 00    	jg     929f9c <future_backtest::RunnerCore::run_multi+0x79cc>
  926cbf:	66 49 0f 7e d2       	movq   r10,xmm2
  926cc4:	4d 89 d6             	mov    r14,r10
  926cc7:	49 bb ff ff ff ff ff 	movabs r11,0x7fffffffffffffff
  926cce:	ff ff 7f 
  926cd1:	4d 21 de             	and    r14,r11
  926cd4:	4d 8d 5e ff          	lea    r11,[r14-0x1]
  926cd8:	49 39 f3             	cmp    r11,rsi
  926cdb:	41 0f 92 c3          	setb   r11b
  926cdf:	4d 85 d2             	test   r10,r10
  926ce2:	41 0f 98 c2          	sets   r10b
  926ce6:	48 bb 00 00 00 00 00 	movabs rbx,0x7ff0000000000000
  926ced:	00 f0 7f 
  926cf0:	49 39 de             	cmp    r14,rbx
  926cf3:	40 0f 9f c5          	setg   bpl
  926cf7:	0f 94 c3             	sete   bl
  926cfa:	4d 01 c6             	add    r14,r8
  926cfd:	49 c1 ee 35          	shr    r14,0x35
  926d01:	41 81 fe ff 03 00 00 	cmp    r14d,0x3ff
  926d08:	41 0f 92 c6          	setb   r14b
  926d0c:	66 0f 2e c1          	ucomisd xmm0,xmm1
  926d10:	0f 87 86 32 00 00    	ja     929f9c <future_backtest::RunnerCore::run_multi+0x79cc>
  926d16:	45 20 d3             	and    r11b,r10b
  926d19:	40 08 eb             	or     bl,bpl
  926d1c:	44 08 db             	or     bl,r11b
  926d1f:	45 20 d6             	and    r14b,r10b
  926d22:	41 08 de             	or     r14b,bl
  926d25:	0f 85 71 32 00 00    	jne    929f9c <future_backtest::RunnerCore::run_multi+0x79cc>
  926d2b:	49 83 c1 10          	add    r9,0x10
  926d2f:	48 ff c2             	inc    rdx
  926d32:	49 39 c9             	cmp    r9,rcx
  926d35:	0f 85 3d ff ff ff    	jne    926c78 <future_backtest::RunnerCore::run_multi+0x46a8>
  926d3b:	48 83 f8 01          	cmp    rax,0x1
  926d3f:	0f 84 9e 00 00 00    	je     926de3 <future_backtest::RunnerCore::run_multi+0x4813>
  926d45:	48 8d 4f 18          	lea    rcx,[rdi+0x18]
  926d49:	ba 01 00 00 00       	mov    edx,0x1
  926d4e:	31 f6                	xor    esi,esi
  926d50:	66 0f 28 05 b8 8b 92 	movapd xmm0,XMMWORD PTR [rip+0xffffffffff928bb8]        # 24f910 <anon.23a7bc9302e079b368ad5af617974320.28.llvm.9485200918992093105+0x10>
  926d57:	ff 
  926d58:	66 0f 28 0d c0 df 92 	movapd xmm1,XMMWORD PTR [rip+0xffffffffff92dfc0]        # 254d20 <anon.9c839d8261a2d9b6655a6b7286b1e655.225.llvm.5528135186037708526+0x70>
  926d5f:	ff 
  926d60:	66 0f 28 15 58 b4 92 	movapd xmm2,XMMWORD PTR [rip+0xffffffffff92b458]        # 2521c0 <anon.fe1b35fd190af3ec62b163d2072132da.353.llvm.6880758764856161+0x20>
  926d67:	ff 
  926d68:	49 89 f0             	mov    r8,rsi
  926d6b:	49 c1 e0 04          	shl    r8,0x4
  926d6f:	f2 42 0f 10 5c 07 08 	movsd  xmm3,QWORD PTR [rdi+r8*1+0x8]
  926d76:	f2 42 0f 10 24 07    	movsd  xmm4,QWORD PTR [rdi+r8*1]
  926d7c:	f2 0f 58 e3          	addsd  xmm4,xmm3
  926d80:	66 0f 14 dc          	unpcklpd xmm3,xmm4
  926d84:	49 89 c9             	mov    r9,rcx
  926d87:	49 89 d0             	mov    r8,rdx
  926d8a:	f2 41 0f 10 29       	movsd  xmm5,QWORD PTR [r9]
  926d8f:	f2 41 0f 10 61 f8    	movsd  xmm4,QWORD PTR [r9-0x8]
  926d95:	f2 0f 58 e5          	addsd  xmm4,xmm5
  926d99:	66 0f 14 ec          	unpcklpd xmm5,xmm4
  926d9d:	66 0f 28 e3          	movapd xmm4,xmm3
  926da1:	66 0f 5c e5          	subpd  xmm4,xmm5
  926da5:	66 0f 54 e0          	andpd  xmm4,xmm0
  926da9:	66 0f 28 ec          	movapd xmm5,xmm4
  926dad:	66 0f 58 e9          	addpd  xmm5,xmm1
  926db1:	66 0f c2 ea 01       	cmpltpd xmm5,xmm2
  926db6:	66 44 0f 50 d5       	movmskpd r10d,xmm5
  926dbb:	45 85 d2             	test   r10d,r10d
  926dbe:	0f 85 76 29 00 00    	jne    92973a <future_backtest::RunnerCore::run_multi+0x716a>
  926dc4:	49 ff c0             	inc    r8
  926dc7:	49 83 c1 10          	add    r9,0x10
  926dcb:	4c 39 c0             	cmp    rax,r8
  926dce:	75 ba                	jne    926d8a <future_backtest::RunnerCore::run_multi+0x47ba>
  926dd0:	48 89 d6             	mov    rsi,rdx
  926dd3:	4c 8d 42 01          	lea    r8,[rdx+0x1]
  926dd7:	48 83 c1 10          	add    rcx,0x10
  926ddb:	4c 89 c2             	mov    rdx,r8
  926dde:	49 39 c0             	cmp    r8,rax
  926de1:	75 85                	jne    926d68 <future_backtest::RunnerCore::run_multi+0x4798>
  926de3:	48 8b b4 24 00 05 00 	mov    rsi,QWORD PTR [rsp+0x500]
  926dea:	00 
  926deb:	48 85 f6             	test   rsi,rsi
  926dee:	74 0f                	je     926dff <future_backtest::RunnerCore::run_multi+0x482f>
  926df0:	48 c1 e6 04          	shl    rsi,0x4
  926df4:	ba 08 00 00 00       	mov    edx,0x8
  926df9:	ff 15 21 4d fd 00    	call   QWORD PTR [rip+0xfd4d21]        # 18fbb20 <_DYNAMIC+0x220>
  926dff:	48 8d 9c 24 e0 0e 00 	lea    rbx,[rsp+0xee0]
  926e06:	00 
  926e07:	48 89 df             	mov    rdi,rbx
  926e0a:	e8 b1 b7 07 00       	call   9a25c0 <<hashbrown::raw::RawTable<T,A> as core::ops::drop::Drop>::drop>
  926e0f:	4c 8d b4 24 60 18 00 	lea    r14,[rsp+0x1860]
  926e16:	00 
  926e17:	4c 89 f7             	mov    rdi,r14
  926e1a:	e8 c1 ca 07 00       	call   9a38e0 <<hashbrown::raw::RawTable<T,A> as core::ops::drop::Drop>::drop>
  926e1f:	80 bc 24 68 06 00 00 	cmp    BYTE PTR [rsp+0x668],0x0
  926e26:	00 
  926e27:	0f 84 9b 26 00 00    	je     9294c8 <future_backtest::RunnerCore::run_multi+0x6ef8>
  926e2d:	48 8d bc 24 80 1b 00 	lea    rdi,[rsp+0x1b80]
  926e34:	00 
  926e35:	48 8d b4 24 10 06 00 	lea    rsi,[rsp+0x610]
  926e3c:	00 
  926e3d:	ff 15 4d 5d fd 00    	call   QWORD PTR [rip+0xfd5d4d]        # 18fcb90 <_DYNAMIC+0x1290>
  926e43:	48 8b 84 24 90 1b 00 	mov    rax,QWORD PTR [rsp+0x1b90]
  926e4a:	00 
  926e4b:	48 89 84 24 60 18 00 	mov    QWORD PTR [rsp+0x1860],rax
  926e52:	00 
  926e53:	4c 89 b4 24 e0 0e 00 	mov    QWORD PTR [rsp+0xee0],r14
  926e5a:	00 
  926e5b:	48 8b 05 76 50 fd 00 	mov    rax,QWORD PTR [rip+0xfd5076]        # 18fbed8 <_DYNAMIC+0x5d8>
  926e62:	48 89 84 24 e8 0e 00 	mov    QWORD PTR [rsp+0xee8],rax
  926e69:	00 
  926e6a:	48 8d 05 4f a2 f2 00 	lea    rax,[rip+0xf2a24f]        # 18510c0 <anon.609a31ba814f1e4156e50677fc366a7f.492.llvm.5215769359700358943+0x9d0>
  926e71:	48 89 84 24 d0 11 00 	mov    QWORD PTR [rsp+0x11d0],rax
  926e78:	00 
  926e79:	48 c7 84 24 d8 11 00 	mov    QWORD PTR [rsp+0x11d8],0x2
  926e80:	00 02 00 00 00 
  926e85:	48 c7 84 24 f0 11 00 	mov    QWORD PTR [rsp+0x11f0],0x0
  926e8c:	00 00 00 00 00 
  926e91:	48 89 9c 24 e0 11 00 	mov    QWORD PTR [rsp+0x11e0],rbx
  926e98:	00 
  926e99:	48 c7 84 24 e8 11 00 	mov    QWORD PTR [rsp+0x11e8],0x1
  926ea0:	00 01 00 00 00 
  926ea5:	48 8d bc 24 d0 11 00 	lea    rdi,[rsp+0x11d0]
  926eac:	00 
  926ead:	ff 15 ad 56 fd 00    	call   QWORD PTR [rip+0xfd56ad]        # 18fc560 <_DYNAMIC+0xc60>
  926eb3:	48 8d bc 24 80 1b 00 	lea    rdi,[rsp+0x1b80]
  926eba:	00 
  926ebb:	e8 e0 5f d5 ff       	call   67cea0 <<alloc::collections::btree::map::BTreeMap<K,V,A> as core::ops::drop::Drop>::drop>
  926ec0:	41 bf 08 00 00 00    	mov    r15d,0x8
  926ec6:	45 31 e4             	xor    r12d,r12d
  926ec9:	31 db                	xor    ebx,ebx
  926ecb:	45 31 ed             	xor    r13d,r13d
  926ece:	48 8d bc 24 f0 19 00 	lea    rdi,[rsp+0x19f0]
  926ed5:	00 
  926ed6:	48 8d b4 24 10 06 00 	lea    rsi,[rsp+0x610]
  926edd:	00 
  926ede:	ba b8 00 00 00       	mov    edx,0xb8
  926ee3:	ff 15 0f 50 fd 00    	call   QWORD PTR [rip+0xfd500f]        # 18fbef8 <memcpy@GLIBC_2.14>
  926ee9:	4c 89 a4 24 a8 1a 00 	mov    QWORD PTR [rsp+0x1aa8],r12
  926ef0:	00 
  926ef1:	4c 89 bc 24 b0 1a 00 	mov    QWORD PTR [rsp+0x1ab0],r15
  926ef8:	00 
  926ef9:	48 89 9c 24 b8 1a 00 	mov    QWORD PTR [rsp+0x1ab8],rbx
  926f00:	00 
  926f01:	4c 89 ac 24 c0 1a 00 	mov    QWORD PTR [rsp+0x1ac0],r13
  926f08:	00 
  926f09:	c7 84 24 c8 00 00 00 	mov    DWORD PTR [rsp+0xc8],0x0
  926f10:	00 00 00 00 
  926f14:	4c 8b bc 24 e0 00 00 	mov    r15,QWORD PTR [rsp+0xe0]
  926f1b:	00 
  926f1c:	48 8b 8c 24 a8 00 00 	mov    rcx,QWORD PTR [rsp+0xa8]
  926f23:	00 
  926f24:	48 83 f9 02          	cmp    rcx,0x2
  926f28:	0f 83 a6 b9 ff ff    	jae    9228d4 <future_backtest::RunnerCore::run_multi+0x304>
  926f2e:	e9 97 ba ff ff       	jmp    9229ca <future_backtest::RunnerCore::run_multi+0x3fa>
  926f33:	31 f6                	xor    esi,esi
  926f35:	48 c7 84 24 e8 05 00 	mov    QWORD PTR [rsp+0x5e8],0x0
  926f3c:	00 00 00 00 00 
  926f41:	48 8d bc 24 00 03 00 	lea    rdi,[rsp+0x300]
  926f48:	00 
  926f49:	e8 22 ae fd ff       	call   901d70 <<T as alloc::vec::spec_from_elem::SpecFromElem>::from_elem>
  926f4e:	48 8b 84 24 b8 01 00 	mov    rax,QWORD PTR [rsp+0x1b8]
  926f55:	00 
  926f56:	48 85 c0             	test   rax,rax
  926f59:	0f 84 e9 21 00 00    	je     929148 <future_backtest::RunnerCore::run_multi+0x6b78>
  926f5f:	48 8b 8c 24 88 00 00 	mov    rcx,QWORD PTR [rsp+0x88]
  926f66:	00 
  926f67:	48 83 c1 18          	add    rcx,0x18
  926f6b:	48 89 8c 24 28 01 00 	mov    QWORD PTR [rsp+0x128],rcx
  926f72:	00 
  926f73:	48 8b 4c 24 18       	mov    rcx,QWORD PTR [rsp+0x18]
  926f78:	48 89 ca             	mov    rdx,rcx
  926f7b:	48 81 c2 50 01 00 00 	add    rdx,0x150
  926f82:	48 89 94 24 20 01 00 	mov    QWORD PTR [rsp+0x120],rdx
  926f89:	00 
  926f8a:	48 81 c1 80 00 00 00 	add    rcx,0x80
  926f91:	48 89 8c 24 c0 00 00 	mov    QWORD PTR [rsp+0xc0],rcx
  926f98:	00 
  926f99:	4c 8d b4 24 b0 10 00 	lea    r14,[rsp+0x10b0]
  926fa0:	00 
  926fa1:	4c 8b 3d 50 4f fd 00 	mov    r15,QWORD PTR [rip+0xfd4f50]        # 18fbef8 <memcpy@GLIBC_2.14>
  926fa8:	48 8d 0d 91 a6 f2 00 	lea    rcx,[rip+0xf2a691]        # 1851640 <anon.609a31ba814f1e4156e50677fc366a7f.492.llvm.5215769359700358943+0xf50>
  926faf:	48 89 8c 24 00 01 00 	mov    QWORD PTR [rsp+0x100],rcx
  926fb6:	00 
  926fb7:	48 8d 0d a2 a3 f2 00 	lea    rcx,[rip+0xf2a3a2]        # 1851360 <anon.609a31ba814f1e4156e50677fc366a7f.492.llvm.5215769359700358943+0xc70>
  926fbe:	48 89 8c 24 d8 05 00 	mov    QWORD PTR [rsp+0x5d8],rcx
  926fc5:	00 
  926fc6:	48 8d 0d fb a5 f2 00 	lea    rcx,[rip+0xf2a5fb]        # 18515c8 <anon.609a31ba814f1e4156e50677fc366a7f.492.llvm.5215769359700358943+0xed8>
  926fcd:	48 89 8c 24 30 01 00 	mov    QWORD PTR [rsp+0x130],rcx
  926fd4:	00 
  926fd5:	48 8d 0d 1c a6 f2 00 	lea    rcx,[rip+0xf2a61c]        # 18515f8 <anon.609a31ba814f1e4156e50677fc366a7f.492.llvm.5215769359700358943+0xf08>
  926fdc:	48 89 8c 24 d0 04 00 	mov    QWORD PTR [rsp+0x4d0],rcx
  926fe3:	00 
  926fe4:	48 8d 0d 6d a6 f2 00 	lea    rcx,[rip+0xf2a66d]        # 1851658 <anon.609a31ba814f1e4156e50677fc366a7f.492.llvm.5215769359700358943+0xf68>
  926feb:	48 89 8c 24 08 01 00 	mov    QWORD PTR [rsp+0x108],rcx
  926ff2:	00 
  926ff3:	48 ff c8             	dec    rax
  926ff6:	48 89 84 24 b8 01 00 	mov    QWORD PTR [rsp+0x1b8],rax
  926ffd:	00 
  926ffe:	48 8b 8c 24 b0 01 00 	mov    rcx,QWORD PTR [rsp+0x1b0]
  927005:	00 
  927006:	48 69 c0 28 01 00 00 	imul   rax,rax,0x128
  92700d:	48 8b 1c 01          	mov    rbx,QWORD PTR [rcx+rax*1]
  927011:	48 8d 34 01          	lea    rsi,[rcx+rax*1]
  927015:	48 83 c6 08          	add    rsi,0x8
  927019:	ba 20 01 00 00       	mov    edx,0x120
  92701e:	4c 89 f7             	mov    rdi,r14
  927021:	41 ff d7             	call   r15
  927024:	48 b8 00 00 00 00 00 	movabs rax,0x8000000000000000
  92702b:	00 00 80 
  92702e:	48 83 c0 05          	add    rax,0x5
  927032:	48 39 c3             	cmp    rbx,rax
  927035:	0f 84 0d 21 00 00    	je     929148 <future_backtest::RunnerCore::run_multi+0x6b78>
  92703b:	48 89 9c 24 a0 03 00 	mov    QWORD PTR [rsp+0x3a0],rbx
  927042:	00 
  927043:	ba 20 01 00 00       	mov    edx,0x120
  927048:	48 8d bc 24 a8 03 00 	lea    rdi,[rsp+0x3a8]
  92704f:	00 
  927050:	4c 89 f6             	mov    rsi,r14
  927053:	41 ff d7             	call   r15
  927056:	83 bc 24 e0 0e 00 00 	cmp    DWORD PTR [rsp+0xee0],0x2
  92705d:	02 
  92705e:	0f 84 89 00 00 00    	je     9270ed <future_backtest::RunnerCore::run_multi+0x4b1d>
  927064:	48 89 d8             	mov    rax,rbx
  927067:	48 b9 00 00 00 00 00 	movabs rcx,0x8000000000000000
  92706e:	00 00 80 
  927071:	48 31 c8             	xor    rax,rcx
  927074:	48 85 db             	test   rbx,rbx
  927077:	b9 01 00 00 00       	mov    ecx,0x1
  92707c:	48 0f 49 c1          	cmovns rax,rcx
  927080:	48 8d 0d 5d 42 95 ff 	lea    rcx,[rip+0xffffffffff95425d]        # 27b2e4 <future_backtest::future_info::dynamic_info::INSTRUMENT_INFO+0x7ff>
  927087:	48 63 04 81          	movsxd rax,DWORD PTR [rcx+rax*4]
  92708b:	48 01 c8             	add    rax,rcx
  92708e:	ff e0                	jmp    rax
  927090:	f2 0f 10 84 24 20 04 	movsd  xmm0,QWORD PTR [rsp+0x420]
  927097:	00 00 
  927099:	eb 27                	jmp    9270c2 <future_backtest::RunnerCore::run_multi+0x4af2>
  92709b:	f2 0f 10 84 24 30 04 	movsd  xmm0,QWORD PTR [rsp+0x430]
  9270a2:	00 00 
  9270a4:	eb 1c                	jmp    9270c2 <future_backtest::RunnerCore::run_multi+0x4af2>
  9270a6:	f2 0f 10 84 24 c0 03 	movsd  xmm0,QWORD PTR [rsp+0x3c0]
  9270ad:	00 00 
  9270af:	f2 0f 5e 05 91 fc 92 	divsd  xmm0,QWORD PTR [rip+0xffffffffff92fc91]        # 256d48 <anon.baa4d3160c6db26b1acb0467a3a6e91d.545.llvm.14045134056871974489+0x20>
  9270b6:	ff 
  9270b7:	eb 09                	jmp    9270c2 <future_backtest::RunnerCore::run_multi+0x4af2>
  9270b9:	f2 0f 10 84 24 d0 03 	movsd  xmm0,QWORD PTR [rsp+0x3d0]
  9270c0:	00 00 
  9270c2:	48 8b 74 24 40       	mov    rsi,QWORD PTR [rsp+0x40]
  9270c7:	48 8b 54 24 48       	mov    rdx,QWORD PTR [rsp+0x48]
  9270cc:	48 8d bc 24 e0 0e 00 	lea    rdi,[rsp+0xee0]
  9270d3:	00 
  9270d4:	e8 d7 96 ff ff       	call   9207b0 <future_backtest::RunnerCore::MetaRunState::apply_due>
  9270d9:	49 89 c7             	mov    r15,rax
  9270dc:	48 85 c0             	test   rax,rax
  9270df:	0f 85 db 30 00 00    	jne    92a1c0 <future_backtest::RunnerCore::run_multi+0x7bf0>
  9270e5:	48 8b 9c 24 a0 03 00 	mov    rbx,QWORD PTR [rsp+0x3a0]
  9270ec:	00 
  9270ed:	48 89 d8             	mov    rax,rbx
  9270f0:	48 b9 00 00 00 00 00 	movabs rcx,0x8000000000000000
  9270f7:	00 00 80 
  9270fa:	48 31 c8             	xor    rax,rcx
  9270fd:	48 85 db             	test   rbx,rbx
  927100:	b9 01 00 00 00       	mov    ecx,0x1
  927105:	48 0f 49 c1          	cmovns rax,rcx
  927109:	48 83 f8 01          	cmp    rax,0x1
  92710d:	0f 84 34 05 00 00    	je     927647 <future_backtest::RunnerCore::run_multi+0x5077>
  927113:	48 83 f8 02          	cmp    rax,0x2
  927117:	4c 8d a4 24 10 06 00 	lea    r12,[rsp+0x610]
  92711e:	00 
  92711f:	0f 85 ee 1f 00 00    	jne    929113 <future_backtest::RunnerCore::run_multi+0x6b43>
  927125:	48 83 bc 24 a8 00 00 	cmp    QWORD PTR [rsp+0xa8],0x0
  92712c:	00 00 
  92712e:	0f 84 df 1f 00 00    	je     929113 <future_backtest::RunnerCore::run_multi+0x6b43>
  927134:	31 db                	xor    ebx,ebx
  927136:	31 ed                	xor    ebp,ebp
  927138:	eb 18                	jmp    927152 <future_backtest::RunnerCore::run_multi+0x4b82>
  92713a:	48 81 c5 28 15 00 00 	add    rbp,0x1528
  927141:	48 ff c3             	inc    rbx
  927144:	48 3b 9c 24 a8 00 00 	cmp    rbx,QWORD PTR [rsp+0xa8]
  92714b:	00 
  92714c:	0f 83 c1 1f 00 00    	jae    929113 <future_backtest::RunnerCore::run_multi+0x6b43>
  927152:	48 89 9c 24 68 03 00 	mov    QWORD PTR [rsp+0x368],rbx
  927159:	00 
  92715a:	48 8b 74 24 48       	mov    rsi,QWORD PTR [rsp+0x48]
  92715f:	48 39 f3             	cmp    rbx,rsi
  927162:	0f 83 a4 40 00 00    	jae    92b20c <future_backtest::RunnerCore::run_multi+0x8c3c>
  927168:	48 8b 7c 24 40       	mov    rdi,QWORD PTR [rsp+0x40]
  92716d:	48 01 ef             	add    rdi,rbp
  927170:	48 8d b4 24 a0 03 00 	lea    rsi,[rsp+0x3a0]
  927177:	00 
  927178:	ff 15 02 4b fd 00    	call   QWORD PTR [rip+0xfd4b02]        # 18fbc80 <_DYNAMIC+0x380>
  92717e:	48 8b 74 24 48       	mov    rsi,QWORD PTR [rsp+0x48]
  927183:	48 8b 94 24 68 03 00 	mov    rdx,QWORD PTR [rsp+0x368]
  92718a:	00 
  92718b:	48 39 f2             	cmp    rdx,rsi
  92718e:	0f 83 66 40 00 00    	jae    92b1fa <future_backtest::RunnerCore::run_multi+0x8c2a>
  927194:	48 69 f2 28 15 00 00 	imul   rsi,rdx,0x1528
  92719b:	48 03 74 24 40       	add    rsi,QWORD PTR [rsp+0x40]
  9271a0:	83 bc 24 e0 0e 00 00 	cmp    DWORD PTR [rsp+0xee0],0x2
  9271a7:	02 
  9271a8:	48 8d 8c 24 e0 0e 00 	lea    rcx,[rsp+0xee0]
  9271af:	00 
  9271b0:	b8 00 00 00 00       	mov    eax,0x0
  9271b5:	48 0f 44 c8          	cmove  rcx,rax
  9271b9:	44 0f b6 84 24 50 04 	movzx  r8d,BYTE PTR [rsp+0x450]
  9271c0:	00 00 
  9271c2:	4c 89 e7             	mov    rdi,r12
  9271c5:	e8 46 af ff ff       	call   922110 <future_backtest::RunnerCore::make_ffi_ctx>
  9271ca:	4c 8b b4 24 10 06 00 	mov    r14,QWORD PTR [rsp+0x610]
  9271d1:	00 
  9271d2:	4c 8b bc 24 18 06 00 	mov    r15,QWORD PTR [rsp+0x618]
  9271d9:	00 
  9271da:	49 83 fe 03          	cmp    r14,0x3
  9271de:	0f 84 dc 2f 00 00    	je     92a1c0 <future_backtest::RunnerCore::run_multi+0x7bf0>
  9271e4:	ba e8 00 00 00       	mov    edx,0xe8
  9271e9:	48 8d bc 24 d0 01 00 	lea    rdi,[rsp+0x1d0]
  9271f0:	00 
  9271f1:	48 8d b4 24 20 06 00 	lea    rsi,[rsp+0x620]
  9271f8:	00 
  9271f9:	ff 15 f9 4c fd 00    	call   QWORD PTR [rip+0xfd4cf9]        # 18fbef8 <memcpy@GLIBC_2.14>
  9271ff:	4c 89 b4 24 c0 01 00 	mov    QWORD PTR [rsp+0x1c0],r14
  927206:	00 
  927207:	4c 89 bc 24 c8 01 00 	mov    QWORD PTR [rsp+0x1c8],r15
  92720e:	00 
  92720f:	48 8b b4 24 b0 03 00 	mov    rsi,QWORD PTR [rsp+0x3b0]
  927216:	00 
  927217:	48 8b 94 24 b8 03 00 	mov    rdx,QWORD PTR [rsp+0x3b8]
  92721e:	00 
  92721f:	4c 89 e7             	mov    rdi,r12
  927222:	ff 15 a8 62 fd 00    	call   QWORD PTR [rip+0xfd62a8]        # 18fd4d0 <_DYNAMIC+0x1bd0>
  927228:	4c 8b b4 24 10 06 00 	mov    r14,QWORD PTR [rsp+0x610]
  92722f:	00 
  927230:	48 b8 00 00 00 00 00 	movabs rax,0x8000000000000000
  927237:	00 00 80 
  92723a:	49 39 c6             	cmp    r14,rax
  92723d:	75 1f                	jne    92725e <future_backtest::RunnerCore::run_multi+0x4c8e>
  92723f:	48 8b 84 24 18 06 00 	mov    rax,QWORD PTR [rsp+0x618]
  927246:	00 
  927247:	48 89 44 24 50       	mov    QWORD PTR [rsp+0x50],rax
  92724c:	48 8b 84 24 20 06 00 	mov    rax,QWORD PTR [rsp+0x620]
  927253:	00 
  927254:	48 89 84 24 90 00 00 	mov    QWORD PTR [rsp+0x90],rax
  92725b:	00 
  92725c:	eb 2e                	jmp    92728c <future_backtest::RunnerCore::run_multi+0x4cbc>
  92725e:	ff 15 fc 60 fd 00    	call   QWORD PTR [rip+0xfd60fc]        # 18fd360 <_DYNAMIC+0x1a60>
  927264:	48 89 94 24 90 00 00 	mov    QWORD PTR [rsp+0x90],rdx
  92726b:	00 
  92726c:	48 89 44 24 50       	mov    QWORD PTR [rsp+0x50],rax
  927271:	4d 85 f6             	test   r14,r14
  927274:	74 16                	je     92728c <future_backtest::RunnerCore::run_multi+0x4cbc>
  927276:	48 8b bc 24 18 06 00 	mov    rdi,QWORD PTR [rsp+0x618]
  92727d:	00 
  92727e:	ba 01 00 00 00       	mov    edx,0x1
  927283:	4c 89 f6             	mov    rsi,r14
  927286:	ff 15 94 48 fd 00    	call   QWORD PTR [rip+0xfd4894]        # 18fbb20 <_DYNAMIC+0x220>
  92728c:	48 8b b4 24 c8 03 00 	mov    rsi,QWORD PTR [rsp+0x3c8]
  927293:	00 
  927294:	48 8b 94 24 d0 03 00 	mov    rdx,QWORD PTR [rsp+0x3d0]
  92729b:	00 
  92729c:	4c 89 e7             	mov    rdi,r12
  92729f:	ff 15 2b 62 fd 00    	call   QWORD PTR [rip+0xfd622b]        # 18fd4d0 <_DYNAMIC+0x1bd0>
  9272a5:	4c 8b b4 24 10 06 00 	mov    r14,QWORD PTR [rsp+0x610]
  9272ac:	00 
  9272ad:	48 b8 00 00 00 00 00 	movabs rax,0x8000000000000000
  9272b4:	00 00 80 
  9272b7:	49 39 c6             	cmp    r14,rax
  9272ba:	75 1c                	jne    9272d8 <future_backtest::RunnerCore::run_multi+0x4d08>
  9272bc:	48 8b 84 24 18 06 00 	mov    rax,QWORD PTR [rsp+0x618]
  9272c3:	00 
  9272c4:	48 89 44 24 70       	mov    QWORD PTR [rsp+0x70],rax
  9272c9:	48 8b 84 24 20 06 00 	mov    rax,QWORD PTR [rsp+0x620]
  9272d0:	00 
  9272d1:	48 89 44 24 60       	mov    QWORD PTR [rsp+0x60],rax
  9272d6:	eb 2b                	jmp    927303 <future_backtest::RunnerCore::run_multi+0x4d33>
  9272d8:	ff 15 82 60 fd 00    	call   QWORD PTR [rip+0xfd6082]        # 18fd360 <_DYNAMIC+0x1a60>
  9272de:	48 89 54 24 60       	mov    QWORD PTR [rsp+0x60],rdx
  9272e3:	48 89 44 24 70       	mov    QWORD PTR [rsp+0x70],rax
  9272e8:	4d 85 f6             	test   r14,r14
  9272eb:	74 16                	je     927303 <future_backtest::RunnerCore::run_multi+0x4d33>
  9272ed:	48 8b bc 24 18 06 00 	mov    rdi,QWORD PTR [rsp+0x618]
  9272f4:	00 
  9272f5:	ba 01 00 00 00       	mov    edx,0x1
  9272fa:	4c 89 f6             	mov    rsi,r14
  9272fd:	ff 15 1d 48 fd 00    	call   QWORD PTR [rip+0xfd481d]        # 18fbb20 <_DYNAMIC+0x220>
  927303:	48 8b b4 24 e0 03 00 	mov    rsi,QWORD PTR [rsp+0x3e0]
  92730a:	00 
  92730b:	48 8b 94 24 e8 03 00 	mov    rdx,QWORD PTR [rsp+0x3e8]
  927312:	00 
  927313:	4c 89 e7             	mov    rdi,r12
  927316:	ff 15 b4 61 fd 00    	call   QWORD PTR [rip+0xfd61b4]        # 18fd4d0 <_DYNAMIC+0x1bd0>
  92731c:	4c 8b b4 24 10 06 00 	mov    r14,QWORD PTR [rsp+0x610]
  927323:	00 
  927324:	48 b8 00 00 00 00 00 	movabs rax,0x8000000000000000
  92732b:	00 00 80 
  92732e:	49 39 c6             	cmp    r14,rax
  927331:	75 1a                	jne    92734d <future_backtest::RunnerCore::run_multi+0x4d7d>
  927333:	4c 8b bc 24 18 06 00 	mov    r15,QWORD PTR [rsp+0x618]
  92733a:	00 
  92733b:	48 8b 84 24 20 06 00 	mov    rax,QWORD PTR [rsp+0x620]
  927342:	00 
  927343:	48 89 84 24 a0 00 00 	mov    QWORD PTR [rsp+0xa0],rax
  92734a:	00 
  92734b:	eb 2c                	jmp    927379 <future_backtest::RunnerCore::run_multi+0x4da9>
  92734d:	ff 15 0d 60 fd 00    	call   QWORD PTR [rip+0xfd600d]        # 18fd360 <_DYNAMIC+0x1a60>
  927353:	49 89 c7             	mov    r15,rax
  927356:	48 89 94 24 a0 00 00 	mov    QWORD PTR [rsp+0xa0],rdx
  92735d:	00 
  92735e:	4d 85 f6             	test   r14,r14
  927361:	74 16                	je     927379 <future_backtest::RunnerCore::run_multi+0x4da9>
  927363:	48 8b bc 24 18 06 00 	mov    rdi,QWORD PTR [rsp+0x618]
  92736a:	00 
  92736b:	ba 01 00 00 00       	mov    edx,0x1
  927370:	4c 89 f6             	mov    rsi,r14
  927373:	ff 15 a7 47 fd 00    	call   QWORD PTR [rip+0xfd47a7]        # 18fbb20 <_DYNAMIC+0x220>
  927379:	48 8b b4 24 f8 03 00 	mov    rsi,QWORD PTR [rsp+0x3f8]
  927380:	00 
  927381:	48 8b 94 24 00 04 00 	mov    rdx,QWORD PTR [rsp+0x400]
  927388:	00 
  927389:	4c 89 e7             	mov    rdi,r12
  92738c:	ff 15 3e 61 fd 00    	call   QWORD PTR [rip+0xfd613e]        # 18fd4d0 <_DYNAMIC+0x1bd0>
  927392:	4c 8b a4 24 10 06 00 	mov    r12,QWORD PTR [rsp+0x610]
  927399:	00 
  92739a:	48 b8 00 00 00 00 00 	movabs rax,0x8000000000000000
  9273a1:	00 00 80 
  9273a4:	49 39 c4             	cmp    r12,rax
  9273a7:	75 12                	jne    9273bb <future_backtest::RunnerCore::run_multi+0x4deb>
  9273a9:	4c 8b b4 24 18 06 00 	mov    r14,QWORD PTR [rsp+0x618]
  9273b0:	00 
  9273b1:	4c 8b ac 24 20 06 00 	mov    r13,QWORD PTR [rsp+0x620]
  9273b8:	00 
  9273b9:	eb 27                	jmp    9273e2 <future_backtest::RunnerCore::run_multi+0x4e12>
  9273bb:	ff 15 9f 5f fd 00    	call   QWORD PTR [rip+0xfd5f9f]        # 18fd360 <_DYNAMIC+0x1a60>
  9273c1:	49 89 c6             	mov    r14,rax
  9273c4:	49 89 d5             	mov    r13,rdx
  9273c7:	4d 85 e4             	test   r12,r12
  9273ca:	74 16                	je     9273e2 <future_backtest::RunnerCore::run_multi+0x4e12>
  9273cc:	48 8b bc 24 18 06 00 	mov    rdi,QWORD PTR [rsp+0x618]
  9273d3:	00 
  9273d4:	ba 01 00 00 00       	mov    edx,0x1
  9273d9:	4c 89 e6             	mov    rsi,r12
  9273dc:	ff 15 3e 47 fd 00    	call   QWORD PTR [rip+0xfd473e]        # 18fbb20 <_DYNAMIC+0x220>
  9273e2:	f3 0f 10 84 24 4c 04 	movss  xmm0,DWORD PTR [rsp+0x44c]
  9273e9:	00 00 
  9273eb:	0f b6 84 24 50 04 00 	movzx  eax,BYTE PTR [rsp+0x450]
  9273f2:	00 
  9273f3:	f3 0f 6f 8c 24 18 04 	movdqu xmm1,XMMWORD PTR [rsp+0x418]
  9273fa:	00 00 
  9273fc:	f3 0f 6f 94 24 28 04 	movdqu xmm2,XMMWORD PTR [rsp+0x428]
  927403:	00 00 
  927405:	f3 0f 6f 9c 24 38 04 	movdqu xmm3,XMMWORD PTR [rsp+0x438]
  92740c:	00 00 
  92740e:	66 0f 7f 8c 24 10 06 	movdqa XMMWORD PTR [rsp+0x610],xmm1
  927415:	00 00 
  927417:	48 8b 4c 24 50       	mov    rcx,QWORD PTR [rsp+0x50]
  92741c:	48 89 8c 24 20 06 00 	mov    QWORD PTR [rsp+0x620],rcx
  927423:	00 
  927424:	48 8b 4c 24 70       	mov    rcx,QWORD PTR [rsp+0x70]
  927429:	48 89 8c 24 28 06 00 	mov    QWORD PTR [rsp+0x628],rcx
  927430:	00 
  927431:	66 0f 7f 9c 24 30 06 	movdqa XMMWORD PTR [rsp+0x630],xmm3
  927438:	00 00 
  92743a:	f3 0f 11 84 24 40 06 	movss  DWORD PTR [rsp+0x640],xmm0
  927441:	00 00 
  927443:	4c 89 bc 24 48 06 00 	mov    QWORD PTR [rsp+0x648],r15
  92744a:	00 
  92744b:	4c 89 b4 24 50 06 00 	mov    QWORD PTR [rsp+0x650],r14
  927452:	00 
  927453:	88 84 24 58 06 00 00 	mov    BYTE PTR [rsp+0x658],al
  92745a:	66 0f 7f 94 24 60 06 	movdqa XMMWORD PTR [rsp+0x660],xmm2
  927461:	00 00 
  927463:	48 8b b4 24 f8 00 00 	mov    rsi,QWORD PTR [rsp+0xf8]
  92746a:	00 
  92746b:	48 8b bc 24 68 03 00 	mov    rdi,QWORD PTR [rsp+0x368]
  927472:	00 
  927473:	48 39 f7             	cmp    rdi,rsi
  927476:	4c 8d a4 24 10 06 00 	lea    r12,[rsp+0x610]
  92747d:	00 
  92747e:	0f 83 9e 3d 00 00    	jae    92b222 <future_backtest::RunnerCore::run_multi+0x8c52>
  927484:	48 8b 84 24 f0 00 00 	mov    rax,QWORD PTR [rsp+0xf0]
  92748b:	00 
  92748c:	48 8b 04 f8          	mov    rax,QWORD PTR [rax+rdi*8]
  927490:	48 8b 38             	mov    rdi,QWORD PTR [rax]
  927493:	4c 89 e6             	mov    rsi,r12
  927496:	48 8d 94 24 c0 01 00 	lea    rdx,[rsp+0x1c0]
  92749d:	00 
  92749e:	ff 50 10             	call   QWORD PTR [rax+0x10]
  9274a1:	89 84 24 98 03 00 00 	mov    DWORD PTR [rsp+0x398],eax
  9274a8:	85 c0                	test   eax,eax
  9274aa:	0f 89 ae 00 00 00    	jns    92755e <future_backtest::RunnerCore::run_multi+0x4f8e>
  9274b0:	48 8d 84 24 68 03 00 	lea    rax,[rsp+0x368]
  9274b7:	00 
  9274b8:	48 89 84 24 00 05 00 	mov    QWORD PTR [rsp+0x500],rax
  9274bf:	00 
  9274c0:	48 8b 05 11 4a fd 00 	mov    rax,QWORD PTR [rip+0xfd4a11]        # 18fbed8 <_DYNAMIC+0x5d8>
  9274c7:	48 89 84 24 08 05 00 	mov    QWORD PTR [rsp+0x508],rax
  9274ce:	00 
  9274cf:	48 8d 84 24 98 03 00 	lea    rax,[rsp+0x398]
  9274d6:	00 
  9274d7:	48 89 84 24 10 05 00 	mov    QWORD PTR [rsp+0x510],rax
  9274de:	00 
  9274df:	48 8b 05 1a 4d fd 00 	mov    rax,QWORD PTR [rip+0xfd4d1a]        # 18fc200 <_DYNAMIC+0x900>
  9274e6:	48 89 84 24 18 05 00 	mov    QWORD PTR [rsp+0x518],rax
  9274ed:	00 
  9274ee:	48 8d 84 24 18 04 00 	lea    rax,[rsp+0x418]
  9274f5:	00 
  9274f6:	48 89 84 24 20 05 00 	mov    QWORD PTR [rsp+0x520],rax
  9274fd:	00 
  9274fe:	48 8b 05 bb 4d fd 00 	mov    rax,QWORD PTR [rip+0xfd4dbb]        # 18fc2c0 <_DYNAMIC+0x9c0>
  927505:	48 89 84 24 28 05 00 	mov    QWORD PTR [rsp+0x528],rax
  92750c:	00 
  92750d:	48 8d 05 8c a1 f2 00 	lea    rax,[rip+0xf2a18c]        # 18516a0 <anon.609a31ba814f1e4156e50677fc366a7f.492.llvm.5215769359700358943+0xfb0>
  927514:	48 89 84 24 40 01 00 	mov    QWORD PTR [rsp+0x140],rax
  92751b:	00 
  92751c:	48 c7 84 24 48 01 00 	mov    QWORD PTR [rsp+0x148],0x4
  927523:	00 04 00 00 00 
  927528:	48 c7 84 24 60 01 00 	mov    QWORD PTR [rsp+0x160],0x0
  92752f:	00 00 00 00 00 
  927534:	48 8d 84 24 00 05 00 	lea    rax,[rsp+0x500]
  92753b:	00 
  92753c:	48 89 84 24 50 01 00 	mov    QWORD PTR [rsp+0x150],rax
  927543:	00 
  927544:	48 c7 84 24 58 01 00 	mov    QWORD PTR [rsp+0x158],0x3
  92754b:	00 03 00 00 00 
  927550:	48 8d bc 24 40 01 00 	lea    rdi,[rsp+0x140]
  927557:	00 
  927558:	ff 15 ea 49 fd 00    	call   QWORD PTR [rip+0xfd49ea]        # 18fbf48 <_DYNAMIC+0x648>
  92755e:	48 8b 7c 24 50       	mov    rdi,QWORD PTR [rsp+0x50]
  927563:	c6 07 00             	mov    BYTE PTR [rdi],0x0
  927566:	48 8b b4 24 90 00 00 	mov    rsi,QWORD PTR [rsp+0x90]
  92756d:	00 
  92756e:	48 85 f6             	test   rsi,rsi
  927571:	74 0b                	je     92757e <future_backtest::RunnerCore::run_multi+0x4fae>
  927573:	ba 01 00 00 00       	mov    edx,0x1
  927578:	ff 15 a2 45 fd 00    	call   QWORD PTR [rip+0xfd45a2]        # 18fbb20 <_DYNAMIC+0x220>
  92757e:	48 8b 7c 24 70       	mov    rdi,QWORD PTR [rsp+0x70]
  927583:	c6 07 00             	mov    BYTE PTR [rdi],0x0
  927586:	48 8b 74 24 60       	mov    rsi,QWORD PTR [rsp+0x60]
  92758b:	48 85 f6             	test   rsi,rsi
  92758e:	74 0b                	je     92759b <future_backtest::RunnerCore::run_multi+0x4fcb>
  927590:	ba 01 00 00 00       	mov    edx,0x1
  927595:	ff 15 85 45 fd 00    	call   QWORD PTR [rip+0xfd4585]        # 18fbb20 <_DYNAMIC+0x220>
  92759b:	41 c6 07 00          	mov    BYTE PTR [r15],0x0
  92759f:	48 8b b4 24 a0 00 00 	mov    rsi,QWORD PTR [rsp+0xa0]
  9275a6:	00 
  9275a7:	48 85 f6             	test   rsi,rsi
  9275aa:	74 0e                	je     9275ba <future_backtest::RunnerCore::run_multi+0x4fea>
  9275ac:	ba 01 00 00 00       	mov    edx,0x1
  9275b1:	4c 89 ff             	mov    rdi,r15
  9275b4:	ff 15 66 45 fd 00    	call   QWORD PTR [rip+0xfd4566]        # 18fbb20 <_DYNAMIC+0x220>
  9275ba:	41 c6 06 00          	mov    BYTE PTR [r14],0x0
  9275be:	4d 85 ed             	test   r13,r13
  9275c1:	74 11                	je     9275d4 <future_backtest::RunnerCore::run_multi+0x5004>
  9275c3:	ba 01 00 00 00       	mov    edx,0x1
  9275c8:	4c 89 f7             	mov    rdi,r14
  9275cb:	4c 89 ee             	mov    rsi,r13
  9275ce:	ff 15 4c 45 fd 00    	call   QWORD PTR [rip+0xfd454c]        # 18fbb20 <_DYNAMIC+0x220>
  9275d4:	48 8b b4 24 90 02 00 	mov    rsi,QWORD PTR [rsp+0x290]
  9275db:	00 
  9275dc:	48 85 f6             	test   rsi,rsi
  9275df:	74 13                	je     9275f4 <future_backtest::RunnerCore::run_multi+0x5024>
  9275e1:	48 8b bc 24 98 02 00 	mov    rdi,QWORD PTR [rsp+0x298]
  9275e8:	00 
  9275e9:	ba 01 00 00 00       	mov    edx,0x1
  9275ee:	ff 15 2c 45 fd 00    	call   QWORD PTR [rip+0xfd452c]        # 18fbb20 <_DYNAMIC+0x220>
  9275f4:	83 bc 24 c0 01 00 00 	cmp    DWORD PTR [rsp+0x1c0],0x2
  9275fb:	02 
  9275fc:	0f 84 38 fb ff ff    	je     92713a <future_backtest::RunnerCore::run_multi+0x4b6a>
  927602:	48 8b b4 24 28 02 00 	mov    rsi,QWORD PTR [rsp+0x228]
  927609:	00 
  92760a:	48 85 f6             	test   rsi,rsi
  92760d:	74 13                	je     927622 <future_backtest::RunnerCore::run_multi+0x5052>
  92760f:	48 8b bc 24 30 02 00 	mov    rdi,QWORD PTR [rsp+0x230]
  927616:	00 
  927617:	ba 01 00 00 00       	mov    edx,0x1
  92761c:	ff 15 fe 44 fd 00    	call   QWORD PTR [rip+0xfd44fe]        # 18fbb20 <_DYNAMIC+0x220>
  927622:	48 8b 84 24 40 02 00 	mov    rax,QWORD PTR [rsp+0x240]
  927629:	00 
  92762a:	f0 48 ff 08          	lock dec QWORD PTR [rax]
  92762e:	0f 85 06 fb ff ff    	jne    92713a <future_backtest::RunnerCore::run_multi+0x4b6a>
  927634:	48 8d bc 24 40 02 00 	lea    rdi,[rsp+0x240]
  92763b:	00 
  92763c:	ff 15 1e 4b fd 00    	call   QWORD PTR [rip+0xfd4b1e]        # 18fc160 <_DYNAMIC+0x860>
  927642:	e9 f3 fa ff ff       	jmp    92713a <future_backtest::RunnerCore::run_multi+0x4b6a>
  927647:	48 8d bc 24 70 03 00 	lea    rdi,[rsp+0x370]
  92764e:	00 
  92764f:	48 8d b4 24 a0 03 00 	lea    rsi,[rsp+0x3a0]
  927656:	00 
  927657:	48 8d 15 fa 9b f2 00 	lea    rdx,[rip+0xf29bfa]        # 1851258 <anon.609a31ba814f1e4156e50677fc366a7f.492.llvm.5215769359700358943+0xb68>
  92765e:	ff 15 d4 49 fd 00    	call   QWORD PTR [rip+0xfd49d4]        # 18fc038 <_DYNAMIC+0x738>
  927664:	48 8b 44 24 18       	mov    rax,QWORD PTR [rsp+0x18]
  927669:	48 83 78 10 00       	cmp    QWORD PTR [rax+0x10],0x0
  92766e:	0f 85 9a 3e 00 00    	jne    92b50e <future_backtest::RunnerCore::run_multi+0x8f3e>
  927674:	48 8b 44 24 18       	mov    rax,QWORD PTR [rsp+0x18]
  927679:	48 c7 40 10 ff ff ff 	mov    QWORD PTR [rax+0x10],0xffffffffffffffff
  927680:	ff 
  927681:	0f 10 84 24 b8 03 00 	movups xmm0,XMMWORD PTR [rsp+0x3b8]
  927688:	00 
  927689:	0f 29 44 24 50       	movaps XMMWORD PTR [rsp+0x50],xmm0
  92768e:	0f 10 84 24 c8 03 00 	movups xmm0,XMMWORD PTR [rsp+0x3c8]
  927695:	00 
  927696:	0f 29 44 24 70       	movaps XMMWORD PTR [rsp+0x70],xmm0
  92769b:	f2 0f 10 84 24 d8 03 	movsd  xmm0,QWORD PTR [rsp+0x3d8]
  9276a2:	00 00 
  9276a4:	f2 0f 11 84 24 90 00 	movsd  QWORD PTR [rsp+0x90],xmm0
  9276ab:	00 00 
  9276ad:	48 8d bc 24 c0 01 00 	lea    rdi,[rsp+0x1c0]
  9276b4:	00 
  9276b5:	48 8d b4 24 a0 03 00 	lea    rsi,[rsp+0x3a0]
  9276bc:	00 
  9276bd:	48 8d 15 dc 89 f2 00 	lea    rdx,[rip+0xf289dc]        # 18500a0 <anon.609a31ba814f1e4156e50677fc366a7f.248.llvm.5215769359700358943+0x9e0>
  9276c4:	ff 15 6e 49 fd 00    	call   QWORD PTR [rip+0xfd496e]        # 18fc038 <_DYNAMIC+0x738>
  9276ca:	0f b6 84 24 c0 04 00 	movzx  eax,BYTE PTR [rsp+0x4c0]
  9276d1:	00 
  9276d2:	48 8d 8c 24 a8 03 00 	lea    rcx,[rsp+0x3a8]
  9276d9:	00 
  9276da:	0f 10 41 78          	movups xmm0,XMMWORD PTR [rcx+0x78]
  9276de:	48 8d 94 24 20 06 00 	lea    rdx,[rsp+0x620]
  9276e5:	00 
  9276e6:	0f 11 42 70          	movups XMMWORD PTR [rdx+0x70],xmm0
  9276ea:	0f 10 41 38          	movups xmm0,XMMWORD PTR [rcx+0x38]
  9276ee:	0f 10 49 48          	movups xmm1,XMMWORD PTR [rcx+0x48]
  9276f2:	0f 10 51 58          	movups xmm2,XMMWORD PTR [rcx+0x58]
  9276f6:	0f 10 59 68          	movups xmm3,XMMWORD PTR [rcx+0x68]
  9276fa:	0f 11 5a 60          	movups XMMWORD PTR [rdx+0x60],xmm3
  9276fe:	0f 11 52 50          	movups XMMWORD PTR [rdx+0x50],xmm2
  927702:	0f 11 4a 40          	movups XMMWORD PTR [rdx+0x40],xmm1
  927706:	0f 11 42 30          	movups XMMWORD PTR [rdx+0x30],xmm0
  92770a:	0f 10 81 c8 00 00 00 	movups xmm0,XMMWORD PTR [rcx+0xc8]
  927711:	0f 11 82 c0 00 00 00 	movups XMMWORD PTR [rdx+0xc0],xmm0
  927718:	0f 10 81 88 00 00 00 	movups xmm0,XMMWORD PTR [rcx+0x88]
  92771f:	f3 0f 6f 89 98 00 00 	movdqu xmm1,XMMWORD PTR [rcx+0x98]
  927726:	00 
  927727:	f3 0f 6f 91 a8 00 00 	movdqu xmm2,XMMWORD PTR [rcx+0xa8]
  92772e:	00 
  92772f:	f3 0f 6f 99 b8 00 00 	movdqu xmm3,XMMWORD PTR [rcx+0xb8]
  927736:	00 
  927737:	f3 0f 7f 9a b0 00 00 	movdqu XMMWORD PTR [rdx+0xb0],xmm3
  92773e:	00 
  92773f:	f3 0f 7f 92 a0 00 00 	movdqu XMMWORD PTR [rdx+0xa0],xmm2
  927746:	00 
  927747:	f3 0f 7f 8a 90 00 00 	movdqu XMMWORD PTR [rdx+0x90],xmm1
  92774e:	00 
  92774f:	0f 11 82 80 00 00 00 	movups XMMWORD PTR [rdx+0x80],xmm0
  927756:	0f b6 8c 24 c1 04 00 	movzx  ecx,BYTE PTR [rsp+0x4c1]
  92775d:	00 
  92775e:	0f 28 44 24 50       	movaps xmm0,XMMWORD PTR [rsp+0x50]
  927763:	0f 11 84 24 28 06 00 	movups XMMWORD PTR [rsp+0x628],xmm0
  92776a:	00 
  92776b:	0f 28 44 24 70       	movaps xmm0,XMMWORD PTR [rsp+0x70]
  927770:	0f 11 84 24 38 06 00 	movups XMMWORD PTR [rsp+0x638],xmm0
  927777:	00 
  927778:	f2 0f 10 84 24 90 00 	movsd  xmm0,QWORD PTR [rsp+0x90]
  92777f:	00 00 
  927781:	f2 0f 11 84 24 48 06 	movsd  QWORD PTR [rsp+0x648],xmm0
  927788:	00 00 
  92778a:	0f 10 84 24 c0 01 00 	movups xmm0,XMMWORD PTR [rsp+0x1c0]
  927791:	00 
  927792:	0f 29 84 24 10 06 00 	movaps XMMWORD PTR [rsp+0x610],xmm0
  927799:	00 
  92779a:	48 8b 94 24 d0 01 00 	mov    rdx,QWORD PTR [rsp+0x1d0]
  9277a1:	00 
  9277a2:	48 89 94 24 20 06 00 	mov    QWORD PTR [rsp+0x620],rdx
  9277a9:	00 
  9277aa:	88 84 24 30 07 00 00 	mov    BYTE PTR [rsp+0x730],al
  9277b1:	0f 10 84 24 80 04 00 	movups xmm0,XMMWORD PTR [rsp+0x480]
  9277b8:	00 
  9277b9:	0f 29 84 24 f0 06 00 	movaps XMMWORD PTR [rsp+0x6f0],xmm0
  9277c0:	00 
  9277c1:	0f 10 84 24 90 04 00 	movups xmm0,XMMWORD PTR [rsp+0x490]
  9277c8:	00 
  9277c9:	0f 29 84 24 00 07 00 	movaps XMMWORD PTR [rsp+0x700],xmm0
  9277d0:	00 
  9277d1:	0f 10 84 24 a0 04 00 	movups xmm0,XMMWORD PTR [rsp+0x4a0]
  9277d8:	00 
  9277d9:	0f 29 84 24 10 07 00 	movaps XMMWORD PTR [rsp+0x710],xmm0
  9277e0:	00 
  9277e1:	66 0f 10 84 24 b0 04 	movupd xmm0,XMMWORD PTR [rsp+0x4b0]
  9277e8:	00 00 
  9277ea:	66 0f 29 84 24 20 07 	movapd XMMWORD PTR [rsp+0x720],xmm0
  9277f1:	00 00 
  9277f3:	88 8c 24 31 07 00 00 	mov    BYTE PTR [rsp+0x731],cl
  9277fa:	48 8b bc 24 80 00 00 	mov    rdi,QWORD PTR [rsp+0x80]
  927801:	00 
  927802:	48 8d b4 24 10 06 00 	lea    rsi,[rsp+0x610]
  927809:	00 
  92780a:	ff 15 00 56 fd 00    	call   QWORD PTR [rip+0xfd5600]        # 18fce10 <_DYNAMIC+0x1510>
  927810:	49 89 c7             	mov    r15,rax
  927813:	48 8b 44 24 18       	mov    rax,QWORD PTR [rsp+0x18]
  927818:	48 ff 40 10          	inc    QWORD PTR [rax+0x10]
  92781c:	4d 85 ff             	test   r15,r15
  92781f:	0f 85 7b 29 00 00    	jne    92a1a0 <future_backtest::RunnerCore::run_multi+0x7bd0>
  927825:	48 8b 7c 24 40       	mov    rdi,QWORD PTR [rsp+0x40]
  92782a:	48 69 5c 24 48 28 15 	imul   rbx,QWORD PTR [rsp+0x48],0x1528
  927831:	00 00 
  927833:	48 01 fb             	add    rbx,rdi
  927836:	4c 8b 25 4b 45 fd 00 	mov    r12,QWORD PTR [rip+0xfd454b]        # 18fbd88 <_DYNAMIC+0x488>
  92783d:	4c 8d b7 28 15 00 00 	lea    r14,[rdi+0x1528]
  927844:	48 39 df             	cmp    rdi,rbx
  927847:	4c 0f 44 f7          	cmove  r14,rdi
  92784b:	74 13                	je     927860 <future_backtest::RunnerCore::run_multi+0x5290>
  92784d:	41 ff d4             	call   r12
  927850:	49 89 c7             	mov    r15,rax
  927853:	4c 89 f7             	mov    rdi,r14
  927856:	48 85 c0             	test   rax,rax
  927859:	74 e2                	je     92783d <future_backtest::RunnerCore::run_multi+0x526d>
  92785b:	e9 40 29 00 00       	jmp    92a1a0 <future_backtest::RunnerCore::run_multi+0x7bd0>
  927860:	83 bc 24 e0 0e 00 00 	cmp    DWORD PTR [rsp+0xee0],0x2
  927867:	02 
  927868:	74 23                	je     92788d <future_backtest::RunnerCore::run_multi+0x52bd>
  92786a:	48 8b 74 24 40       	mov    rsi,QWORD PTR [rsp+0x40]
  92786f:	48 8b 54 24 48       	mov    rdx,QWORD PTR [rsp+0x48]
  927874:	48 8d bc 24 e0 0e 00 	lea    rdi,[rsp+0xee0]
  92787b:	00 
  92787c:	e8 bf 8d ff ff       	call   920640 <future_backtest::RunnerCore::MetaRunState::refresh_capital>
  927881:	49 89 c7             	mov    r15,rax
  927884:	48 85 c0             	test   rax,rax
  927887:	0f 85 13 29 00 00    	jne    92a1a0 <future_backtest::RunnerCore::run_multi+0x7bd0>
  92788d:	48 8b 84 24 a8 00 00 	mov    rax,QWORD PTR [rsp+0xa8]
  927894:	00 
  927895:	48 85 c0             	test   rax,rax
  927898:	0f 84 ce 05 00 00    	je     927e6c <future_backtest::RunnerCore::run_multi+0x589c>
  92789e:	b9 01 00 00 00       	mov    ecx,0x1
  9278a3:	31 d2                	xor    edx,edx
  9278a5:	eb 26                	jmp    9278cd <future_backtest::RunnerCore::run_multi+0x52fd>
  9278a7:	48 8b 84 24 a8 00 00 	mov    rax,QWORD PTR [rsp+0xa8]
  9278ae:	00 
  9278af:	48 8b b4 24 10 01 00 	mov    rsi,QWORD PTR [rsp+0x110]
  9278b6:	00 
  9278b7:	48 39 c6             	cmp    rsi,rax
  9278ba:	48 89 f1             	mov    rcx,rsi
  9278bd:	48 83 d1 00          	adc    rcx,0x0
  9278c1:	48 89 f2             	mov    rdx,rsi
  9278c4:	48 39 c6             	cmp    rsi,rax
  9278c7:	0f 83 9f 05 00 00    	jae    927e6c <future_backtest::RunnerCore::run_multi+0x589c>
  9278cd:	48 89 8c 24 10 01 00 	mov    QWORD PTR [rsp+0x110],rcx
  9278d4:	00 
  9278d5:	48 89 94 24 18 03 00 	mov    QWORD PTR [rsp+0x318],rdx
  9278dc:	00 
  9278dd:	48 8b 5c 24 48       	mov    rbx,QWORD PTR [rsp+0x48]
  9278e2:	48 39 da             	cmp    rdx,rbx
  9278e5:	0f 83 38 3b 00 00    	jae    92b423 <future_backtest::RunnerCore::run_multi+0x8e53>
  9278eb:	48 8b 9c 24 10 03 00 	mov    rbx,QWORD PTR [rsp+0x310]
  9278f2:	00 
  9278f3:	48 39 da             	cmp    rdx,rbx
  9278f6:	0f 83 cc 39 00 00    	jae    92b2c8 <future_backtest::RunnerCore::run_multi+0x8cf8>
  9278fc:	48 8b 4c 24 40       	mov    rcx,QWORD PTR [rsp+0x40]
  927901:	48 69 f2 28 15 00 00 	imul   rsi,rdx,0x1528
  927908:	4c 8b 84 31 f8 08 00 	mov    r8,QWORD PTR [rcx+rsi*1+0x8f8]
  92790f:	00 
  927910:	48 8b bc 24 08 03 00 	mov    rdi,QWORD PTR [rsp+0x308]
  927917:	00 
  927918:	48 8b 14 d7          	mov    rdx,QWORD PTR [rdi+rdx*8]
  92791c:	49 39 d0             	cmp    r8,rdx
  92791f:	76 8e                	jbe    9278af <future_backtest::RunnerCore::run_multi+0x52df>
  927921:	48 8b 84 31 f0 08 00 	mov    rax,QWORD PTR [rcx+rsi*1+0x8f0]
  927928:	00 
  927929:	48 69 f2 a0 02 00 00 	imul   rsi,rdx,0x2a0
  927930:	48 01 c6             	add    rsi,rax
  927933:	4c 89 84 24 40 03 00 	mov    QWORD PTR [rsp+0x340],r8
  92793a:	00 
  92793b:	49 69 d0 a0 02 00 00 	imul   rdx,r8,0x2a0
  927942:	48 01 c2             	add    rdx,rax
  927945:	48 8d bc 24 70 01 00 	lea    rdi,[rsp+0x170]
  92794c:	00 
  92794d:	48 8d 0d 94 70 f2 00 	lea    rcx,[rip+0xf27094]        # 184e9e8 <anon.609a31ba814f1e4156e50677fc366a7f.99.llvm.5215769359700358943>
  927954:	e8 27 3a fb ff       	call   8db380 <<alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter>
  927959:	48 8b b4 24 f8 00 00 	mov    rsi,QWORD PTR [rsp+0xf8]
  927960:	00 
  927961:	48 8b bc 24 18 03 00 	mov    rdi,QWORD PTR [rsp+0x318]
  927968:	00 
  927969:	48 39 f7             	cmp    rdi,rsi
  92796c:	0f 83 b1 39 00 00    	jae    92b323 <future_backtest::RunnerCore::run_multi+0x8d53>
  927972:	48 8b 84 24 80 01 00 	mov    rax,QWORD PTR [rsp+0x180]
  927979:	00 
  92797a:	48 85 c0             	test   rax,rax
  92797d:	0f 84 ba 04 00 00    	je     927e3d <future_backtest::RunnerCore::run_multi+0x586d>
  927983:	48 8b 8c 24 f0 00 00 	mov    rcx,QWORD PTR [rsp+0xf0]
  92798a:	00 
  92798b:	48 8b 0c f9          	mov    rcx,QWORD PTR [rcx+rdi*8]
  92798f:	48 89 8c 24 a0 00 00 	mov    QWORD PTR [rsp+0xa0],rcx
  927996:	00 
  927997:	4c 8b a4 24 78 01 00 	mov    r12,QWORD PTR [rsp+0x178]
  92799e:	00 
  92799f:	48 69 c0 a0 02 00 00 	imul   rax,rax,0x2a0
  9279a6:	48 89 84 24 b8 00 00 	mov    QWORD PTR [rsp+0xb8],rax
  9279ad:	00 
  9279ae:	45 31 f6             	xor    r14d,r14d
  9279b1:	eb 15                	jmp    9279c8 <future_backtest::RunnerCore::run_multi+0x53f8>
  9279b3:	49 81 c6 a0 02 00 00 	add    r14,0x2a0
  9279ba:	4c 39 b4 24 b8 00 00 	cmp    QWORD PTR [rsp+0xb8],r14
  9279c1:	00 
  9279c2:	0f 84 65 04 00 00    	je     927e2d <future_backtest::RunnerCore::run_multi+0x585d>
  9279c8:	4b 8b b4 34 88 00 00 	mov    rsi,QWORD PTR [r12+r14*1+0x88]
  9279cf:	00 
  9279d0:	4b 8b 94 34 90 00 00 	mov    rdx,QWORD PTR [r12+r14*1+0x90]
  9279d7:	00 
  9279d8:	48 8d bc 24 10 06 00 	lea    rdi,[rsp+0x610]
  9279df:	00 
  9279e0:	ff 15 ea 5a fd 00    	call   QWORD PTR [rip+0xfd5aea]        # 18fd4d0 <_DYNAMIC+0x1bd0>
  9279e6:	48 8b 9c 24 10 06 00 	mov    rbx,QWORD PTR [rsp+0x610]
  9279ed:	00 
  9279ee:	48 b8 00 00 00 00 00 	movabs rax,0x8000000000000000
  9279f5:	00 00 80 
  9279f8:	48 39 c3             	cmp    rbx,rax
  9279fb:	75 17                	jne    927a14 <future_backtest::RunnerCore::run_multi+0x5444>
  9279fd:	4c 8b ac 24 18 06 00 	mov    r13,QWORD PTR [rsp+0x618]
  927a04:	00 
  927a05:	48 8b 84 24 20 06 00 	mov    rax,QWORD PTR [rsp+0x620]
  927a0c:	00 
  927a0d:	48 89 44 24 70       	mov    QWORD PTR [rsp+0x70],rax
  927a12:	eb 29                	jmp    927a3d <future_backtest::RunnerCore::run_multi+0x546d>
  927a14:	ff 15 46 59 fd 00    	call   QWORD PTR [rip+0xfd5946]        # 18fd360 <_DYNAMIC+0x1a60>
  927a1a:	49 89 c5             	mov    r13,rax
  927a1d:	48 89 54 24 70       	mov    QWORD PTR [rsp+0x70],rdx
  927a22:	48 85 db             	test   rbx,rbx
  927a25:	74 16                	je     927a3d <future_backtest::RunnerCore::run_multi+0x546d>
  927a27:	48 8b bc 24 18 06 00 	mov    rdi,QWORD PTR [rsp+0x618]
  927a2e:	00 
  927a2f:	ba 01 00 00 00       	mov    edx,0x1
  927a34:	48 89 de             	mov    rsi,rbx
  927a37:	ff 15 e3 40 fd 00    	call   QWORD PTR [rip+0xfd40e3]        # 18fbb20 <_DYNAMIC+0x220>
  927a3d:	4b 8b 74 34 58       	mov    rsi,QWORD PTR [r12+r14*1+0x58]
  927a42:	4b 8b 54 34 60       	mov    rdx,QWORD PTR [r12+r14*1+0x60]
  927a47:	48 8d bc 24 10 06 00 	lea    rdi,[rsp+0x610]
  927a4e:	00 
  927a4f:	ff 15 7b 5a fd 00    	call   QWORD PTR [rip+0xfd5a7b]        # 18fd4d0 <_DYNAMIC+0x1bd0>
  927a55:	48 8b 9c 24 10 06 00 	mov    rbx,QWORD PTR [rsp+0x610]
  927a5c:	00 
  927a5d:	48 b8 00 00 00 00 00 	movabs rax,0x8000000000000000
  927a64:	00 00 80 
  927a67:	48 39 c3             	cmp    rbx,rax
  927a6a:	75 1f                	jne    927a8b <future_backtest::RunnerCore::run_multi+0x54bb>
  927a6c:	48 8b 84 24 18 06 00 	mov    rax,QWORD PTR [rsp+0x618]
  927a73:	00 
  927a74:	48 89 44 24 50       	mov    QWORD PTR [rsp+0x50],rax
  927a79:	48 8b 84 24 20 06 00 	mov    rax,QWORD PTR [rsp+0x620]
  927a80:	00 
  927a81:	48 89 84 24 90 00 00 	mov    QWORD PTR [rsp+0x90],rax
  927a88:	00 
  927a89:	eb 2e                	jmp    927ab9 <future_backtest::RunnerCore::run_multi+0x54e9>
  927a8b:	ff 15 cf 58 fd 00    	call   QWORD PTR [rip+0xfd58cf]        # 18fd360 <_DYNAMIC+0x1a60>
  927a91:	48 89 44 24 50       	mov    QWORD PTR [rsp+0x50],rax
  927a96:	48 89 94 24 90 00 00 	mov    QWORD PTR [rsp+0x90],rdx
  927a9d:	00 
  927a9e:	48 85 db             	test   rbx,rbx
  927aa1:	74 16                	je     927ab9 <future_backtest::RunnerCore::run_multi+0x54e9>
  927aa3:	48 8b bc 24 18 06 00 	mov    rdi,QWORD PTR [rsp+0x618]
  927aaa:	00 
  927aab:	ba 01 00 00 00       	mov    edx,0x1
  927ab0:	48 89 de             	mov    rsi,rbx
  927ab3:	ff 15 67 40 fd 00    	call   QWORD PTR [rip+0xfd4067]        # 18fbb20 <_DYNAMIC+0x220>
  927ab9:	4b 8b b4 34 b8 00 00 	mov    rsi,QWORD PTR [r12+r14*1+0xb8]
  927ac0:	00 
  927ac1:	4b 8b 94 34 c0 00 00 	mov    rdx,QWORD PTR [r12+r14*1+0xc0]
  927ac8:	00 
  927ac9:	48 8d bc 24 10 06 00 	lea    rdi,[rsp+0x610]
  927ad0:	00 
  927ad1:	ff 15 f9 59 fd 00    	call   QWORD PTR [rip+0xfd59f9]        # 18fd4d0 <_DYNAMIC+0x1bd0>
  927ad7:	4c 8b bc 24 10 06 00 	mov    r15,QWORD PTR [rsp+0x610]
  927ade:	00 
  927adf:	48 b8 00 00 00 00 00 	movabs rax,0x8000000000000000
  927ae6:	00 00 80 
  927ae9:	49 39 c7             	cmp    r15,rax
  927aec:	75 17                	jne    927b05 <future_backtest::RunnerCore::run_multi+0x5535>
  927aee:	48 8b ac 24 18 06 00 	mov    rbp,QWORD PTR [rsp+0x618]
  927af5:	00 
  927af6:	48 8b 84 24 20 06 00 	mov    rax,QWORD PTR [rsp+0x620]
  927afd:	00 
  927afe:	48 89 44 24 60       	mov    QWORD PTR [rsp+0x60],rax
  927b03:	eb 29                	jmp    927b2e <future_backtest::RunnerCore::run_multi+0x555e>
  927b05:	ff 15 55 58 fd 00    	call   QWORD PTR [rip+0xfd5855]        # 18fd360 <_DYNAMIC+0x1a60>
  927b0b:	48 89 c5             	mov    rbp,rax
  927b0e:	48 89 54 24 60       	mov    QWORD PTR [rsp+0x60],rdx
  927b13:	4d 85 ff             	test   r15,r15
  927b16:	74 16                	je     927b2e <future_backtest::RunnerCore::run_multi+0x555e>
  927b18:	48 8b bc 24 18 06 00 	mov    rdi,QWORD PTR [rsp+0x618]
  927b1f:	00 
  927b20:	ba 01 00 00 00       	mov    edx,0x1
  927b25:	4c 89 fe             	mov    rsi,r15
  927b28:	ff 15 f2 3f fd 00    	call   QWORD PTR [rip+0xfd3ff2]        # 18fbb20 <_DYNAMIC+0x220>
  927b2e:	f2 43 0f 10 84 34 e0 	movsd  xmm0,QWORD PTR [r12+r14*1+0xe0]
  927b35:	00 00 00 
  927b38:	f3 43 0f 7e 8c 34 78 	movq   xmm1,QWORD PTR [r12+r14*1+0x178]
  927b3f:	01 00 00 
  927b42:	43 0f b6 84 34 9e 02 	movzx  eax,BYTE PTR [r12+r14*1+0x29e]
  927b49:	00 00 
  927b4b:	43 0f b6 8c 34 94 02 	movzx  ecx,BYTE PTR [r12+r14*1+0x294]
  927b52:	00 00 
  927b54:	83 f1 01             	xor    ecx,0x1
  927b57:	01 c9                	add    ecx,ecx
  927b59:	f2 0f 11 84 24 00 05 	movsd  QWORD PTR [rsp+0x500],xmm0
  927b60:	00 00 
  927b62:	43 0f 10 84 34 58 01 	movups xmm0,XMMWORD PTR [r12+r14*1+0x158]
  927b69:	00 00 
  927b6b:	0f c6 c0 4e          	shufps xmm0,xmm0,0x4e
  927b6f:	0f 11 84 24 08 05 00 	movups XMMWORD PTR [rsp+0x508],xmm0
  927b76:	00 
  927b77:	4c 89 ac 24 18 05 00 	mov    QWORD PTR [rsp+0x518],r13
  927b7e:	00 
  927b7f:	48 8b 54 24 50       	mov    rdx,QWORD PTR [rsp+0x50]
  927b84:	48 89 94 24 20 05 00 	mov    QWORD PTR [rsp+0x520],rdx
  927b8b:	00 
  927b8c:	48 89 ac 24 28 05 00 	mov    QWORD PTR [rsp+0x528],rbp
  927b93:	00 
  927b94:	43 0f 10 84 34 90 01 	movups xmm0,XMMWORD PTR [r12+r14*1+0x190]
  927b9b:	00 00 
  927b9d:	0f c6 c0 4e          	shufps xmm0,xmm0,0x4e
  927ba1:	0f 11 84 24 30 05 00 	movups XMMWORD PTR [rsp+0x530],xmm0
  927ba8:	00 
  927ba9:	66 0f d6 8c 24 40 05 	movq   QWORD PTR [rsp+0x540],xmm1
  927bb0:	00 00 
  927bb2:	43 0f 10 84 34 a0 01 	movups xmm0,XMMWORD PTR [r12+r14*1+0x1a0]
  927bb9:	00 00 
  927bbb:	0f c6 c0 4e          	shufps xmm0,xmm0,0x4e
  927bbf:	0f 11 84 24 48 05 00 	movups XMMWORD PTR [rsp+0x548],xmm0
  927bc6:	00 
  927bc7:	43 0f b7 94 34 9b 02 	movzx  edx,WORD PTR [r12+r14*1+0x29b]
  927bce:	00 00 
  927bd0:	66 0f 6e c2          	movd   xmm0,edx
  927bd4:	66 0f ef c9          	pxor   xmm1,xmm1
  927bd8:	66 0f 60 c1          	punpcklbw xmm0,xmm1
  927bdc:	66 0f 61 c1          	punpcklwd xmm0,xmm1
  927be0:	66 0f d6 84 24 58 05 	movq   QWORD PTR [rsp+0x558],xmm0
  927be7:	00 00 
  927be9:	89 84 24 60 05 00 00 	mov    DWORD PTR [rsp+0x560],eax
  927bf0:	89 8c 24 64 05 00 00 	mov    DWORD PTR [rsp+0x564],ecx
  927bf7:	66 43 0f 10 84 34 10 	movupd xmm0,XMMWORD PTR [r12+r14*1+0x110]
  927bfe:	01 00 00 
  927c01:	66 0f 11 84 24 68 05 	movupd XMMWORD PTR [rsp+0x568],xmm0
  927c08:	00 00 
  927c0a:	48 8b 74 24 48       	mov    rsi,QWORD PTR [rsp+0x48]
  927c0f:	48 8b 94 24 18 03 00 	mov    rdx,QWORD PTR [rsp+0x318]
  927c16:	00 
  927c17:	48 39 f2             	cmp    rdx,rsi
  927c1a:	0f 83 14 36 00 00    	jae    92b234 <future_backtest::RunnerCore::run_multi+0x8c64>
  927c20:	4c 89 eb             	mov    rbx,r13
  927c23:	48 69 f2 28 15 00 00 	imul   rsi,rdx,0x1528
  927c2a:	48 03 74 24 40       	add    rsi,QWORD PTR [rsp+0x40]
  927c2f:	83 bc 24 e0 0e 00 00 	cmp    DWORD PTR [rsp+0xee0],0x2
  927c36:	02 
  927c37:	48 8d 8c 24 e0 0e 00 	lea    rcx,[rsp+0xee0]
  927c3e:	00 
  927c3f:	b8 00 00 00 00       	mov    eax,0x0
  927c44:	48 0f 44 c8          	cmove  rcx,rax
  927c48:	44 0f b6 84 24 c1 04 	movzx  r8d,BYTE PTR [rsp+0x4c1]
  927c4f:	00 00 
  927c51:	48 8d bc 24 10 06 00 	lea    rdi,[rsp+0x610]
  927c58:	00 
  927c59:	e8 b2 a4 ff ff       	call   922110 <future_backtest::RunnerCore::make_ffi_ctx>
  927c5e:	4c 8b ac 24 10 06 00 	mov    r13,QWORD PTR [rsp+0x610]
  927c65:	00 
  927c66:	4c 8b bc 24 18 06 00 	mov    r15,QWORD PTR [rsp+0x618]
  927c6d:	00 
  927c6e:	49 83 fd 03          	cmp    r13,0x3
  927c72:	0f 84 47 20 00 00    	je     929cbf <future_backtest::RunnerCore::run_multi+0x76ef>
  927c78:	ba e8 00 00 00       	mov    edx,0xe8
  927c7d:	48 8d bc 24 d0 01 00 	lea    rdi,[rsp+0x1d0]
  927c84:	00 
  927c85:	48 8d b4 24 20 06 00 	lea    rsi,[rsp+0x620]
  927c8c:	00 
  927c8d:	ff 15 65 42 fd 00    	call   QWORD PTR [rip+0xfd4265]        # 18fbef8 <memcpy@GLIBC_2.14>
  927c93:	4c 89 ac 24 c0 01 00 	mov    QWORD PTR [rsp+0x1c0],r13
  927c9a:	00 
  927c9b:	4c 89 bc 24 c8 01 00 	mov    QWORD PTR [rsp+0x1c8],r15
  927ca2:	00 
  927ca3:	48 8b 84 24 a0 00 00 	mov    rax,QWORD PTR [rsp+0xa0]
  927caa:	00 
  927cab:	48 8b 38             	mov    rdi,QWORD PTR [rax]
  927cae:	48 8d b4 24 00 05 00 	lea    rsi,[rsp+0x500]
  927cb5:	00 
  927cb6:	48 8d 94 24 c0 01 00 	lea    rdx,[rsp+0x1c0]
  927cbd:	00 
  927cbe:	ff 50 28             	call   QWORD PTR [rax+0x28]
  927cc1:	89 84 24 8c 03 00 00 	mov    DWORD PTR [rsp+0x38c],eax
  927cc8:	85 c0                	test   eax,eax
  927cca:	49 89 df             	mov    r15,rbx
  927ccd:	0f 89 8f 00 00 00    	jns    927d62 <future_backtest::RunnerCore::run_multi+0x5792>
  927cd3:	48 8d 84 24 18 03 00 	lea    rax,[rsp+0x318]
  927cda:	00 
  927cdb:	48 89 84 24 40 01 00 	mov    QWORD PTR [rsp+0x140],rax
  927ce2:	00 
  927ce3:	48 8b 05 ee 41 fd 00 	mov    rax,QWORD PTR [rip+0xfd41ee]        # 18fbed8 <_DYNAMIC+0x5d8>
  927cea:	48 89 84 24 48 01 00 	mov    QWORD PTR [rsp+0x148],rax
  927cf1:	00 
  927cf2:	48 8d 84 24 8c 03 00 	lea    rax,[rsp+0x38c]
  927cf9:	00 
  927cfa:	48 89 84 24 50 01 00 	mov    QWORD PTR [rsp+0x150],rax
  927d01:	00 
  927d02:	48 8b 05 f7 44 fd 00 	mov    rax,QWORD PTR [rip+0xfd44f7]        # 18fc200 <_DYNAMIC+0x900>
  927d09:	48 89 84 24 58 01 00 	mov    QWORD PTR [rsp+0x158],rax
  927d10:	00 
  927d11:	48 8d 05 50 98 f2 00 	lea    rax,[rip+0xf29850]        # 1851568 <anon.609a31ba814f1e4156e50677fc366a7f.492.llvm.5215769359700358943+0xe78>
  927d18:	48 89 84 24 10 06 00 	mov    QWORD PTR [rsp+0x610],rax
  927d1f:	00 
  927d20:	48 c7 84 24 18 06 00 	mov    QWORD PTR [rsp+0x618],0x3
  927d27:	00 03 00 00 00 
  927d2c:	48 c7 84 24 30 06 00 	mov    QWORD PTR [rsp+0x630],0x0
  927d33:	00 00 00 00 00 
  927d38:	48 8d 84 24 40 01 00 	lea    rax,[rsp+0x140]
  927d3f:	00 
  927d40:	48 89 84 24 20 06 00 	mov    QWORD PTR [rsp+0x620],rax
  927d47:	00 
  927d48:	48 c7 84 24 28 06 00 	mov    QWORD PTR [rsp+0x628],0x2
  927d4f:	00 02 00 00 00 
  927d54:	48 8d bc 24 10 06 00 	lea    rdi,[rsp+0x610]
  927d5b:	00 
  927d5c:	ff 15 e6 41 fd 00    	call   QWORD PTR [rip+0xfd41e6]        # 18fbf48 <_DYNAMIC+0x648>
  927d62:	41 c6 07 00          	mov    BYTE PTR [r15],0x0
  927d66:	48 8b 74 24 70       	mov    rsi,QWORD PTR [rsp+0x70]
  927d6b:	48 85 f6             	test   rsi,rsi
  927d6e:	74 0e                	je     927d7e <future_backtest::RunnerCore::run_multi+0x57ae>
  927d70:	ba 01 00 00 00       	mov    edx,0x1
  927d75:	4c 89 ff             	mov    rdi,r15
  927d78:	ff 15 a2 3d fd 00    	call   QWORD PTR [rip+0xfd3da2]        # 18fbb20 <_DYNAMIC+0x220>
  927d7e:	48 8b 7c 24 50       	mov    rdi,QWORD PTR [rsp+0x50]
  927d83:	c6 07 00             	mov    BYTE PTR [rdi],0x0
  927d86:	48 8b b4 24 90 00 00 	mov    rsi,QWORD PTR [rsp+0x90]
  927d8d:	00 
  927d8e:	48 85 f6             	test   rsi,rsi
  927d91:	74 0b                	je     927d9e <future_backtest::RunnerCore::run_multi+0x57ce>
  927d93:	ba 01 00 00 00       	mov    edx,0x1
  927d98:	ff 15 82 3d fd 00    	call   QWORD PTR [rip+0xfd3d82]        # 18fbb20 <_DYNAMIC+0x220>
  927d9e:	c6 45 00 00          	mov    BYTE PTR [rbp+0x0],0x0
  927da2:	48 8b 74 24 60       	mov    rsi,QWORD PTR [rsp+0x60]
  927da7:	48 85 f6             	test   rsi,rsi
  927daa:	74 0e                	je     927dba <future_backtest::RunnerCore::run_multi+0x57ea>
  927dac:	ba 01 00 00 00       	mov    edx,0x1
  927db1:	48 89 ef             	mov    rdi,rbp
  927db4:	ff 15 66 3d fd 00    	call   QWORD PTR [rip+0xfd3d66]        # 18fbb20 <_DYNAMIC+0x220>
  927dba:	48 8b b4 24 90 02 00 	mov    rsi,QWORD PTR [rsp+0x290]
  927dc1:	00 
  927dc2:	48 85 f6             	test   rsi,rsi
  927dc5:	74 13                	je     927dda <future_backtest::RunnerCore::run_multi+0x580a>
  927dc7:	48 8b bc 24 98 02 00 	mov    rdi,QWORD PTR [rsp+0x298]
  927dce:	00 
  927dcf:	ba 01 00 00 00       	mov    edx,0x1
  927dd4:	ff 15 46 3d fd 00    	call   QWORD PTR [rip+0xfd3d46]        # 18fbb20 <_DYNAMIC+0x220>
  927dda:	83 bc 24 c0 01 00 00 	cmp    DWORD PTR [rsp+0x1c0],0x2
  927de1:	02 
  927de2:	0f 84 cb fb ff ff    	je     9279b3 <future_backtest::RunnerCore::run_multi+0x53e3>
  927de8:	48 8b b4 24 28 02 00 	mov    rsi,QWORD PTR [rsp+0x228]
  927def:	00 
  927df0:	48 85 f6             	test   rsi,rsi
  927df3:	74 13                	je     927e08 <future_backtest::RunnerCore::run_multi+0x5838>
  927df5:	48 8b bc 24 30 02 00 	mov    rdi,QWORD PTR [rsp+0x230]
  927dfc:	00 
  927dfd:	ba 01 00 00 00       	mov    edx,0x1
  927e02:	ff 15 18 3d fd 00    	call   QWORD PTR [rip+0xfd3d18]        # 18fbb20 <_DYNAMIC+0x220>
  927e08:	48 8b 84 24 40 02 00 	mov    rax,QWORD PTR [rsp+0x240]
  927e0f:	00 
  927e10:	f0 48 ff 08          	lock dec QWORD PTR [rax]
  927e14:	0f 85 99 fb ff ff    	jne    9279b3 <future_backtest::RunnerCore::run_multi+0x53e3>
  927e1a:	48 8d bc 24 40 02 00 	lea    rdi,[rsp+0x240]
  927e21:	00 
  927e22:	ff 15 38 43 fd 00    	call   QWORD PTR [rip+0xfd4338]        # 18fc160 <_DYNAMIC+0x860>
  927e28:	e9 86 fb ff ff       	jmp    9279b3 <future_backtest::RunnerCore::run_multi+0x53e3>
  927e2d:	48 8b bc 24 18 03 00 	mov    rdi,QWORD PTR [rsp+0x318]
  927e34:	00 
  927e35:	48 8b 9c 24 10 03 00 	mov    rbx,QWORD PTR [rsp+0x310]
  927e3c:	00 
  927e3d:	48 39 df             	cmp    rdi,rbx
  927e40:	0f 83 cb 34 00 00    	jae    92b311 <future_backtest::RunnerCore::run_multi+0x8d41>
  927e46:	48 8b 84 24 08 03 00 	mov    rax,QWORD PTR [rsp+0x308]
  927e4d:	00 
  927e4e:	48 8b 8c 24 40 03 00 	mov    rcx,QWORD PTR [rsp+0x340]
  927e55:	00 
  927e56:	48 89 0c f8          	mov    QWORD PTR [rax+rdi*8],rcx
  927e5a:	48 8d bc 24 70 01 00 	lea    rdi,[rsp+0x170]
  927e61:	00 
  927e62:	e8 29 75 fd ff       	call   8ff390 <core::ptr::drop_in_place<alloc::vec::Vec<future_backtest::Order::trade_order::TradingOrder>>>
  927e67:	e9 3b fa ff ff       	jmp    9278a7 <future_backtest::RunnerCore::run_multi+0x52d7>
  927e6c:	48 8b 44 24 18       	mov    rax,QWORD PTR [rsp+0x18]
  927e71:	48 83 78 10 00       	cmp    QWORD PTR [rax+0x10],0x0
  927e76:	0f 85 10 35 00 00    	jne    92b38c <future_backtest::RunnerCore::run_multi+0x8dbc>
  927e7c:	48 8b 44 24 18       	mov    rax,QWORD PTR [rsp+0x18]
  927e81:	48 c7 40 10 ff ff ff 	mov    QWORD PTR [rax+0x10],0xffffffffffffffff
  927e88:	ff 
  927e89:	48 8d bc 24 10 06 00 	lea    rdi,[rsp+0x610]
  927e90:	00 
  927e91:	48 8d b4 24 70 03 00 	lea    rsi,[rsp+0x370]
  927e98:	00 
  927e99:	48 8d 15 d0 93 f2 00 	lea    rdx,[rip+0xf293d0]        # 1851270 <anon.609a31ba814f1e4156e50677fc366a7f.492.llvm.5215769359700358943+0xb80>
  927ea0:	ff 15 92 41 fd 00    	call   QWORD PTR [rip+0xfd4192]        # 18fc038 <_DYNAMIC+0x738>
  927ea6:	48 8b 84 24 20 06 00 	mov    rax,QWORD PTR [rsp+0x620]
  927ead:	00 
  927eae:	48 89 84 24 d0 01 00 	mov    QWORD PTR [rsp+0x1d0],rax
  927eb5:	00 
  927eb6:	66 0f 10 84 24 10 06 	movupd xmm0,XMMWORD PTR [rsp+0x610]
  927ebd:	00 00 
  927ebf:	66 0f 29 84 24 c0 01 	movapd XMMWORD PTR [rsp+0x1c0],xmm0
  927ec6:	00 00 
  927ec8:	48 8b bc 24 80 00 00 	mov    rdi,QWORD PTR [rsp+0x80]
  927ecf:	00 
  927ed0:	48 8d b4 24 c0 01 00 	lea    rsi,[rsp+0x1c0]
  927ed7:	00 
  927ed8:	ff 15 52 4f fd 00    	call   QWORD PTR [rip+0xfd4f52]        # 18fce30 <_DYNAMIC+0x1530>
  927ede:	49 89 c7             	mov    r15,rax
  927ee1:	48 8b 4c 24 18       	mov    rcx,QWORD PTR [rsp+0x18]
  927ee6:	48 8b 41 10          	mov    rax,QWORD PTR [rcx+0x10]
  927eea:	48 ff c0             	inc    rax
  927eed:	48 89 41 10          	mov    QWORD PTR [rcx+0x10],rax
  927ef1:	4d 85 ff             	test   r15,r15
  927ef4:	0f 85 a6 22 00 00    	jne    92a1a0 <future_backtest::RunnerCore::run_multi+0x7bd0>
  927efa:	48 85 c0             	test   rax,rax
  927efd:	0f 85 a7 34 00 00    	jne    92b3aa <future_backtest::RunnerCore::run_multi+0x8dda>
  927f03:	48 8b 44 24 18       	mov    rax,QWORD PTR [rsp+0x18]
  927f08:	48 c7 40 10 ff ff ff 	mov    QWORD PTR [rax+0x10],0xffffffffffffffff
  927f0f:	ff 
  927f10:	0f 10 84 24 b8 03 00 	movups xmm0,XMMWORD PTR [rsp+0x3b8]
  927f17:	00 
  927f18:	0f 29 44 24 50       	movaps XMMWORD PTR [rsp+0x50],xmm0
  927f1d:	0f 10 84 24 c8 03 00 	movups xmm0,XMMWORD PTR [rsp+0x3c8]
  927f24:	00 
  927f25:	0f 29 44 24 70       	movaps XMMWORD PTR [rsp+0x70],xmm0
  927f2a:	f2 0f 10 84 24 d8 03 	movsd  xmm0,QWORD PTR [rsp+0x3d8]
  927f31:	00 00 
  927f33:	f2 0f 11 84 24 90 00 	movsd  QWORD PTR [rsp+0x90],xmm0
  927f3a:	00 00 
  927f3c:	48 8d bc 24 10 06 00 	lea    rdi,[rsp+0x610]
  927f43:	00 
  927f44:	48 8d b4 24 a0 03 00 	lea    rsi,[rsp+0x3a0]
  927f4b:	00 
  927f4c:	48 8d 15 4d 81 f2 00 	lea    rdx,[rip+0xf2814d]        # 18500a0 <anon.609a31ba814f1e4156e50677fc366a7f.248.llvm.5215769359700358943+0x9e0>
  927f53:	ff 15 df 40 fd 00    	call   QWORD PTR [rip+0xfd40df]        # 18fc038 <_DYNAMIC+0x738>
  927f59:	0f b6 84 24 c0 04 00 	movzx  eax,BYTE PTR [rsp+0x4c0]
  927f60:	00 
  927f61:	48 8d 8c 24 a8 03 00 	lea    rcx,[rsp+0x3a8]
  927f68:	00 
  927f69:	0f 10 41 78          	movups xmm0,XMMWORD PTR [rcx+0x78]
  927f6d:	48 8d 94 24 d0 01 00 	lea    rdx,[rsp+0x1d0]
  927f74:	00 
  927f75:	0f 11 42 70          	movups XMMWORD PTR [rdx+0x70],xmm0
  927f79:	0f 10 41 38          	movups xmm0,XMMWORD PTR [rcx+0x38]
  927f7d:	0f 10 49 48          	movups xmm1,XMMWORD PTR [rcx+0x48]
  927f81:	0f 10 51 58          	movups xmm2,XMMWORD PTR [rcx+0x58]
  927f85:	0f 10 59 68          	movups xmm3,XMMWORD PTR [rcx+0x68]
  927f89:	0f 11 5a 60          	movups XMMWORD PTR [rdx+0x60],xmm3
  927f8d:	0f 11 52 50          	movups XMMWORD PTR [rdx+0x50],xmm2
  927f91:	0f 11 4a 40          	movups XMMWORD PTR [rdx+0x40],xmm1
  927f95:	0f 11 42 30          	movups XMMWORD PTR [rdx+0x30],xmm0
  927f99:	0f 10 81 c8 00 00 00 	movups xmm0,XMMWORD PTR [rcx+0xc8]
  927fa0:	0f 11 82 c0 00 00 00 	movups XMMWORD PTR [rdx+0xc0],xmm0
  927fa7:	0f 10 81 88 00 00 00 	movups xmm0,XMMWORD PTR [rcx+0x88]
  927fae:	f3 0f 6f 89 98 00 00 	movdqu xmm1,XMMWORD PTR [rcx+0x98]
  927fb5:	00 
  927fb6:	f3 0f 6f 91 a8 00 00 	movdqu xmm2,XMMWORD PTR [rcx+0xa8]
  927fbd:	00 
  927fbe:	f3 0f 6f 99 b8 00 00 	movdqu xmm3,XMMWORD PTR [rcx+0xb8]
  927fc5:	00 
  927fc6:	f3 0f 7f 9a b0 00 00 	movdqu XMMWORD PTR [rdx+0xb0],xmm3
  927fcd:	00 
  927fce:	f3 0f 7f 92 a0 00 00 	movdqu XMMWORD PTR [rdx+0xa0],xmm2
  927fd5:	00 
  927fd6:	f3 0f 7f 8a 90 00 00 	movdqu XMMWORD PTR [rdx+0x90],xmm1
  927fdd:	00 
  927fde:	0f 11 82 80 00 00 00 	movups XMMWORD PTR [rdx+0x80],xmm0
  927fe5:	0f b6 8c 24 c1 04 00 	movzx  ecx,BYTE PTR [rsp+0x4c1]
  927fec:	00 
  927fed:	0f 28 44 24 50       	movaps xmm0,XMMWORD PTR [rsp+0x50]
  927ff2:	0f 11 84 24 d8 01 00 	movups XMMWORD PTR [rsp+0x1d8],xmm0
  927ff9:	00 
  927ffa:	0f 28 44 24 70       	movaps xmm0,XMMWORD PTR [rsp+0x70]
  927fff:	0f 11 84 24 e8 01 00 	movups XMMWORD PTR [rsp+0x1e8],xmm0
  928006:	00 
  928007:	f2 0f 10 84 24 90 00 	movsd  xmm0,QWORD PTR [rsp+0x90]
  92800e:	00 00 
  928010:	f2 0f 11 84 24 f8 01 	movsd  QWORD PTR [rsp+0x1f8],xmm0
  928017:	00 00 
  928019:	0f 10 84 24 10 06 00 	movups xmm0,XMMWORD PTR [rsp+0x610]
  928020:	00 
  928021:	0f 29 84 24 c0 01 00 	movaps XMMWORD PTR [rsp+0x1c0],xmm0
  928028:	00 
  928029:	48 8b 94 24 20 06 00 	mov    rdx,QWORD PTR [rsp+0x620]
  928030:	00 
  928031:	48 89 94 24 d0 01 00 	mov    QWORD PTR [rsp+0x1d0],rdx
  928038:	00 
  928039:	88 84 24 e0 02 00 00 	mov    BYTE PTR [rsp+0x2e0],al
  928040:	0f 10 84 24 80 04 00 	movups xmm0,XMMWORD PTR [rsp+0x480]
  928047:	00 
  928048:	0f 29 84 24 a0 02 00 	movaps XMMWORD PTR [rsp+0x2a0],xmm0
  92804f:	00 
  928050:	0f 10 84 24 90 04 00 	movups xmm0,XMMWORD PTR [rsp+0x490]
  928057:	00 
  928058:	0f 29 84 24 b0 02 00 	movaps XMMWORD PTR [rsp+0x2b0],xmm0
  92805f:	00 
  928060:	0f 10 84 24 a0 04 00 	movups xmm0,XMMWORD PTR [rsp+0x4a0]
  928067:	00 
  928068:	0f 29 84 24 c0 02 00 	movaps XMMWORD PTR [rsp+0x2c0],xmm0
  92806f:	00 
  928070:	66 0f 10 84 24 b0 04 	movupd xmm0,XMMWORD PTR [rsp+0x4b0]
  928077:	00 00 
  928079:	66 0f 29 84 24 d0 02 	movapd XMMWORD PTR [rsp+0x2d0],xmm0
  928080:	00 00 
  928082:	88 8c 24 e1 02 00 00 	mov    BYTE PTR [rsp+0x2e1],cl
  928089:	48 8d bc 24 10 06 00 	lea    rdi,[rsp+0x610]
  928090:	00 
  928091:	48 8d b4 24 d0 11 00 	lea    rsi,[rsp+0x11d0]
  928098:	00 
  928099:	e8 42 6c 00 00       	call   92ece0 <<future_backtest::Customer::customer_params::StrategyParams as core::clone::Clone>::clone>
  92809e:	48 8b bc 24 80 00 00 	mov    rdi,QWORD PTR [rsp+0x80]
  9280a5:	00 
  9280a6:	48 8d b4 24 c0 01 00 	lea    rsi,[rsp+0x1c0]
  9280ad:	00 
  9280ae:	48 8d 94 24 10 06 00 	lea    rdx,[rsp+0x610]
  9280b5:	00 
  9280b6:	ff 15 5c 4d fd 00    	call   QWORD PTR [rip+0xfd4d5c]        # 18fce18 <_DYNAMIC+0x1518>
  9280bc:	49 89 c7             	mov    r15,rax
  9280bf:	48 8b 44 24 18       	mov    rax,QWORD PTR [rsp+0x18]
  9280c4:	48 ff 40 10          	inc    QWORD PTR [rax+0x10]
  9280c8:	4d 85 ff             	test   r15,r15
  9280cb:	0f 85 cf 20 00 00    	jne    92a1a0 <future_backtest::RunnerCore::run_multi+0x7bd0>
  9280d1:	48 8b 8c 24 e0 0e 00 	mov    rcx,QWORD PTR [rsp+0xee0]
  9280d8:	00 
  9280d9:	48 8d 9c 24 e0 0e 00 	lea    rbx,[rsp+0xee0]
  9280e0:	00 
  9280e1:	48 89 8c 24 28 0e 00 	mov    QWORD PTR [rsp+0xe28],rcx
  9280e8:	00 
  9280e9:	48 83 f9 02          	cmp    rcx,0x2
  9280ed:	b8 00 00 00 00       	mov    eax,0x0
  9280f2:	48 0f 44 d8          	cmove  rbx,rax
  9280f6:	74 71                	je     928169 <future_backtest::RunnerCore::run_multi+0x5b99>
  9280f8:	4c 8b 74 24 40       	mov    r14,QWORD PTR [rsp+0x40]
  9280fd:	4c 69 64 24 48 28 15 	imul   r12,QWORD PTR [rsp+0x48],0x1528
  928104:	00 00 
  928106:	4d 01 f4             	add    r12,r14
  928109:	4d 8d ae 28 15 00 00 	lea    r13,[r14+0x1528]
  928110:	4d 39 e6             	cmp    r14,r12
  928113:	4d 0f 44 ee          	cmove  r13,r14
  928117:	74 32                	je     92814b <future_backtest::RunnerCore::run_multi+0x5b7b>
  928119:	4c 89 f7             	mov    rdi,r14
  92811c:	48 8d b4 24 a0 03 00 	lea    rsi,[rsp+0x3a0]
  928123:	00 
  928124:	ff 15 56 3b fd 00    	call   QWORD PTR [rip+0xfd3b56]        # 18fbc80 <_DYNAMIC+0x380>
  92812a:	4c 89 f7             	mov    rdi,r14
  92812d:	48 8d b4 24 a0 03 00 	lea    rsi,[rsp+0x3a0]
  928134:	00 
  928135:	ff 15 4d 3b fd 00    	call   QWORD PTR [rip+0xfd3b4d]        # 18fbc88 <_DYNAMIC+0x388>
  92813b:	49 89 c7             	mov    r15,rax
  92813e:	4d 89 ee             	mov    r14,r13
  928141:	48 85 c0             	test   rax,rax
  928144:	74 c3                	je     928109 <future_backtest::RunnerCore::run_multi+0x5b39>
  928146:	e9 55 20 00 00       	jmp    92a1a0 <future_backtest::RunnerCore::run_multi+0x7bd0>
  92814b:	48 8b 74 24 40       	mov    rsi,QWORD PTR [rsp+0x40]
  928150:	48 8b 54 24 48       	mov    rdx,QWORD PTR [rsp+0x48]
  928155:	48 89 df             	mov    rdi,rbx
  928158:	e8 e3 84 ff ff       	call   920640 <future_backtest::RunnerCore::MetaRunState::refresh_capital>
  92815d:	49 89 c7             	mov    r15,rax
  928160:	48 85 c0             	test   rax,rax
  928163:	0f 85 37 20 00 00    	jne    92a1a0 <future_backtest::RunnerCore::run_multi+0x7bd0>
  928169:	48 83 bc 24 a8 00 00 	cmp    QWORD PTR [rsp+0xa8],0x0
  928170:	00 00 
  928172:	0f 84 42 0c 00 00    	je     928dba <future_backtest::RunnerCore::run_multi+0x67ea>
  928178:	b8 01 00 00 00       	mov    eax,0x1
  92817d:	31 d2                	xor    edx,edx
  92817f:	48 89 84 24 40 03 00 	mov    QWORD PTR [rsp+0x340],rax
  928186:	00 
  928187:	48 89 94 24 b0 00 00 	mov    QWORD PTR [rsp+0xb0],rdx
  92818e:	00 
  92818f:	83 bc 24 28 0e 00 00 	cmp    DWORD PTR [rsp+0xe28],0x2
  928196:	02 
  928197:	75 6c                	jne    928205 <future_backtest::RunnerCore::run_multi+0x5c35>
  928199:	48 8b 5c 24 48       	mov    rbx,QWORD PTR [rsp+0x48]
  92819e:	48 39 da             	cmp    rdx,rbx
  9281a1:	0f 83 f1 31 00 00    	jae    92b398 <future_backtest::RunnerCore::run_multi+0x8dc8>
  9281a7:	48 69 fa 28 15 00 00 	imul   rdi,rdx,0x1528
  9281ae:	48 03 7c 24 40       	add    rdi,QWORD PTR [rsp+0x40]
  9281b3:	48 8d b4 24 a0 03 00 	lea    rsi,[rsp+0x3a0]
  9281ba:	00 
  9281bb:	ff 15 bf 3a fd 00    	call   QWORD PTR [rip+0xfd3abf]        # 18fbc80 <_DYNAMIC+0x380>
  9281c1:	48 8b 5c 24 48       	mov    rbx,QWORD PTR [rsp+0x48]
  9281c6:	48 8b 94 24 b0 00 00 	mov    rdx,QWORD PTR [rsp+0xb0]
  9281cd:	00 
  9281ce:	48 39 da             	cmp    rdx,rbx
  9281d1:	0f 83 ca 31 00 00    	jae    92b3a1 <future_backtest::RunnerCore::run_multi+0x8dd1>
  9281d7:	48 69 fa 28 15 00 00 	imul   rdi,rdx,0x1528
  9281de:	48 03 7c 24 40       	add    rdi,QWORD PTR [rsp+0x40]
  9281e3:	48 8d b4 24 a0 03 00 	lea    rsi,[rsp+0x3a0]
  9281ea:	00 
  9281eb:	ff 15 97 3a fd 00    	call   QWORD PTR [rip+0xfd3a97]        # 18fbc88 <_DYNAMIC+0x388>
  9281f1:	49 89 c7             	mov    r15,rax
  9281f4:	48 85 c0             	test   rax,rax
  9281f7:	0f 85 a3 1f 00 00    	jne    92a1a0 <future_backtest::RunnerCore::run_multi+0x7bd0>
  9281fd:	48 8b 94 24 b0 00 00 	mov    rdx,QWORD PTR [rsp+0xb0]
  928204:	00 
  928205:	48 8b 5c 24 48       	mov    rbx,QWORD PTR [rsp+0x48]
  92820a:	48 39 da             	cmp    rdx,rbx
  92820d:	0f 83 23 31 00 00    	jae    92b336 <future_backtest::RunnerCore::run_multi+0x8d66>
  928213:	48 8b 84 24 10 03 00 	mov    rax,QWORD PTR [rsp+0x310]
  92821a:	00 
  92821b:	48 89 84 24 38 03 00 	mov    QWORD PTR [rsp+0x338],rax
  928222:	00 
  928223:	48 39 c2             	cmp    rdx,rax
  928226:	0f 83 16 31 00 00    	jae    92b342 <future_backtest::RunnerCore::run_multi+0x8d72>
  92822c:	48 8b 44 24 40       	mov    rax,QWORD PTR [rsp+0x40]
  928231:	48 69 ca 28 15 00 00 	imul   rcx,rdx,0x1528
  928238:	48 8b bc 08 f8 08 00 	mov    rdi,QWORD PTR [rax+rcx*1+0x8f8]
  92823f:	00 
  928240:	48 8b b4 24 08 03 00 	mov    rsi,QWORD PTR [rsp+0x308]
  928247:	00 
  928248:	48 89 b4 24 20 0e 00 	mov    QWORD PTR [rsp+0xe20],rsi
  92824f:	00 
  928250:	48 8b 34 d6          	mov    rsi,QWORD PTR [rsi+rdx*8]
  928254:	48 89 bc 24 10 01 00 	mov    QWORD PTR [rsp+0x110],rdi
  92825b:	00 
  92825c:	48 39 f7             	cmp    rdi,rsi
  92825f:	0f 86 f8 03 00 00    	jbe    92865d <future_backtest::RunnerCore::run_multi+0x608d>
  928265:	48 8b 84 08 f0 08 00 	mov    rax,QWORD PTR [rax+rcx*1+0x8f0]
  92826c:	00 
  92826d:	48 69 f6 a0 02 00 00 	imul   rsi,rsi,0x2a0
  928274:	48 01 c6             	add    rsi,rax
  928277:	48 69 94 24 10 01 00 	imul   rdx,QWORD PTR [rsp+0x110],0x2a0
  92827e:	00 a0 02 00 00 
  928283:	48 01 c2             	add    rdx,rax
  928286:	48 8d bc 24 70 01 00 	lea    rdi,[rsp+0x170]
  92828d:	00 
  92828e:	48 8d 0d 53 67 f2 00 	lea    rcx,[rip+0xf26753]        # 184e9e8 <anon.609a31ba814f1e4156e50677fc366a7f.99.llvm.5215769359700358943>
  928295:	e8 e6 30 fb ff       	call   8db380 <<alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter>
  92829a:	48 8b b4 24 f8 00 00 	mov    rsi,QWORD PTR [rsp+0xf8]
  9282a1:	00 
  9282a2:	48 8b bc 24 b0 00 00 	mov    rdi,QWORD PTR [rsp+0xb0]
  9282a9:	00 
  9282aa:	48 39 f7             	cmp    rdi,rsi
  9282ad:	0f 83 4e 31 00 00    	jae    92b401 <future_backtest::RunnerCore::run_multi+0x8e31>
  9282b3:	48 8b 84 24 80 01 00 	mov    rax,QWORD PTR [rsp+0x180]
  9282ba:	00 
  9282bb:	48 85 c0             	test   rax,rax
  9282be:	0f 84 5d 03 00 00    	je     928621 <future_backtest::RunnerCore::run_multi+0x6051>
  9282c4:	48 8b 8c 24 f0 00 00 	mov    rcx,QWORD PTR [rsp+0xf0]
  9282cb:	00 
  9282cc:	48 8b 0c f9          	mov    rcx,QWORD PTR [rcx+rdi*8]
  9282d0:	48 89 8c 24 a0 00 00 	mov    QWORD PTR [rsp+0xa0],rcx
  9282d7:	00 
  9282d8:	4c 8b a4 24 78 01 00 	mov    r12,QWORD PTR [rsp+0x178]
  9282df:	00 
  9282e0:	48 69 c0 a0 02 00 00 	imul   rax,rax,0x2a0
  9282e7:	48 89 84 24 b8 00 00 	mov    QWORD PTR [rsp+0xb8],rax
  9282ee:	00 
  9282ef:	45 31 f6             	xor    r14d,r14d
  9282f2:	4b 8b b4 34 88 00 00 	mov    rsi,QWORD PTR [r12+r14*1+0x88]
  9282f9:	00 
  9282fa:	4b 8b 94 34 90 00 00 	mov    rdx,QWORD PTR [r12+r14*1+0x90]
  928301:	00 
  928302:	48 8d 9c 24 10 06 00 	lea    rbx,[rsp+0x610]
  928309:	00 
  92830a:	48 89 df             	mov    rdi,rbx
  92830d:	ff 15 bd 51 fd 00    	call   QWORD PTR [rip+0xfd51bd]        # 18fd4d0 <_DYNAMIC+0x1bd0>
  928313:	48 89 df             	mov    rdi,rbx
  928316:	e8 d5 7e fd ff       	call   9001f0 <core::result::Result<T,E>::unwrap_or_default>
  92831b:	48 89 54 24 50       	mov    QWORD PTR [rsp+0x50],rdx
  928320:	49 89 c7             	mov    r15,rax
  928323:	4b 8b 74 34 58       	mov    rsi,QWORD PTR [r12+r14*1+0x58]
  928328:	4b 8b 54 34 60       	mov    rdx,QWORD PTR [r12+r14*1+0x60]
  92832d:	48 89 df             	mov    rdi,rbx
  928330:	48 89 44 24 70       	mov    QWORD PTR [rsp+0x70],rax
  928335:	ff 15 95 51 fd 00    	call   QWORD PTR [rip+0xfd5195]        # 18fd4d0 <_DYNAMIC+0x1bd0>
  92833b:	48 89 df             	mov    rdi,rbx
  92833e:	e8 ad 7e fd ff       	call   9001f0 <core::result::Result<T,E>::unwrap_or_default>
  928343:	48 89 94 24 90 00 00 	mov    QWORD PTR [rsp+0x90],rdx
  92834a:	00 
  92834b:	49 89 c5             	mov    r13,rax
  92834e:	4b 8b b4 34 b8 00 00 	mov    rsi,QWORD PTR [r12+r14*1+0xb8]
  928355:	00 
  928356:	4b 8b 94 34 c0 00 00 	mov    rdx,QWORD PTR [r12+r14*1+0xc0]
  92835d:	00 
  92835e:	48 89 df             	mov    rdi,rbx
  928361:	ff 15 69 51 fd 00    	call   QWORD PTR [rip+0xfd5169]        # 18fd4d0 <_DYNAMIC+0x1bd0>
  928367:	48 89 df             	mov    rdi,rbx
  92836a:	e8 81 7e fd ff       	call   9001f0 <core::result::Result<T,E>::unwrap_or_default>
  92836f:	48 89 54 24 60       	mov    QWORD PTR [rsp+0x60],rdx
  928374:	48 89 c5             	mov    rbp,rax
  928377:	f2 43 0f 10 84 34 e0 	movsd  xmm0,QWORD PTR [r12+r14*1+0xe0]
  92837e:	00 00 00 
  928381:	f3 43 0f 7e 8c 34 78 	movq   xmm1,QWORD PTR [r12+r14*1+0x178]
  928388:	01 00 00 
  92838b:	43 0f b6 84 34 9e 02 	movzx  eax,BYTE PTR [r12+r14*1+0x29e]
  928392:	00 00 
  928394:	43 0f b6 8c 34 94 02 	movzx  ecx,BYTE PTR [r12+r14*1+0x294]
  92839b:	00 00 
  92839d:	83 f1 01             	xor    ecx,0x1
  9283a0:	01 c9                	add    ecx,ecx
  9283a2:	f2 0f 11 84 24 00 05 	movsd  QWORD PTR [rsp+0x500],xmm0
  9283a9:	00 00 
  9283ab:	43 0f 10 84 34 58 01 	movups xmm0,XMMWORD PTR [r12+r14*1+0x158]
  9283b2:	00 00 
  9283b4:	0f c6 c0 4e          	shufps xmm0,xmm0,0x4e
  9283b8:	0f 11 84 24 08 05 00 	movups XMMWORD PTR [rsp+0x508],xmm0
  9283bf:	00 
  9283c0:	4c 89 bc 24 18 05 00 	mov    QWORD PTR [rsp+0x518],r15
  9283c7:	00 
  9283c8:	4c 89 ac 24 20 05 00 	mov    QWORD PTR [rsp+0x520],r13
  9283cf:	00 
  9283d0:	48 89 ac 24 28 05 00 	mov    QWORD PTR [rsp+0x528],rbp
  9283d7:	00 
  9283d8:	43 0f 10 84 34 90 01 	movups xmm0,XMMWORD PTR [r12+r14*1+0x190]
  9283df:	00 00 
  9283e1:	0f c6 c0 4e          	shufps xmm0,xmm0,0x4e
  9283e5:	0f 11 84 24 30 05 00 	movups XMMWORD PTR [rsp+0x530],xmm0
  9283ec:	00 
  9283ed:	66 0f d6 8c 24 40 05 	movq   QWORD PTR [rsp+0x540],xmm1
  9283f4:	00 00 
  9283f6:	43 0f 10 84 34 a0 01 	movups xmm0,XMMWORD PTR [r12+r14*1+0x1a0]
  9283fd:	00 00 
  9283ff:	0f c6 c0 4e          	shufps xmm0,xmm0,0x4e
  928403:	0f 11 84 24 48 05 00 	movups XMMWORD PTR [rsp+0x548],xmm0
  92840a:	00 
  92840b:	43 0f b7 94 34 9b 02 	movzx  edx,WORD PTR [r12+r14*1+0x29b]
  928412:	00 00 
  928414:	66 0f 6e c2          	movd   xmm0,edx
  928418:	66 0f ef c9          	pxor   xmm1,xmm1
  92841c:	66 0f 60 c1          	punpcklbw xmm0,xmm1
  928420:	66 0f 61 c1          	punpcklwd xmm0,xmm1
  928424:	66 0f d6 84 24 58 05 	movq   QWORD PTR [rsp+0x558],xmm0
  92842b:	00 00 
  92842d:	89 84 24 60 05 00 00 	mov    DWORD PTR [rsp+0x560],eax
  928434:	89 8c 24 64 05 00 00 	mov    DWORD PTR [rsp+0x564],ecx
  92843b:	66 43 0f 10 84 34 10 	movupd xmm0,XMMWORD PTR [r12+r14*1+0x110]
  928442:	01 00 00 
  928445:	66 0f 11 84 24 68 05 	movupd XMMWORD PTR [rsp+0x568],xmm0
  92844c:	00 00 
  92844e:	48 8b 74 24 48       	mov    rsi,QWORD PTR [rsp+0x48]
  928453:	48 8b 94 24 b0 00 00 	mov    rdx,QWORD PTR [rsp+0xb0]
  92845a:	00 
  92845b:	48 39 f2             	cmp    rdx,rsi
  92845e:	0f 83 49 2e 00 00    	jae    92b2ad <future_backtest::RunnerCore::run_multi+0x8cdd>
  928464:	4c 89 eb             	mov    rbx,r13
  928467:	48 69 f2 28 15 00 00 	imul   rsi,rdx,0x1528
  92846e:	48 03 74 24 40       	add    rsi,QWORD PTR [rsp+0x40]
  928473:	83 bc 24 e0 0e 00 00 	cmp    DWORD PTR [rsp+0xee0],0x2
  92847a:	02 
  92847b:	48 8d 8c 24 e0 0e 00 	lea    rcx,[rsp+0xee0]
  928482:	00 
  928483:	b8 00 00 00 00       	mov    eax,0x0
  928488:	48 0f 44 c8          	cmove  rcx,rax
  92848c:	44 0f b6 84 24 c1 04 	movzx  r8d,BYTE PTR [rsp+0x4c1]
  928493:	00 00 
  928495:	48 8d bc 24 10 06 00 	lea    rdi,[rsp+0x610]
  92849c:	00 
  92849d:	e8 6e 9c ff ff       	call   922110 <future_backtest::RunnerCore::make_ffi_ctx>
  9284a2:	4c 8b ac 24 10 06 00 	mov    r13,QWORD PTR [rsp+0x610]
  9284a9:	00 
  9284aa:	4c 8b bc 24 18 06 00 	mov    r15,QWORD PTR [rsp+0x618]
  9284b1:	00 
  9284b2:	49 83 fd 03          	cmp    r13,0x3
  9284b6:	0f 84 53 1c 00 00    	je     92a10f <future_backtest::RunnerCore::run_multi+0x7b3f>
  9284bc:	ba e8 00 00 00       	mov    edx,0xe8
  9284c1:	48 8d bc 24 d0 01 00 	lea    rdi,[rsp+0x1d0]
  9284c8:	00 
  9284c9:	48 8d b4 24 20 06 00 	lea    rsi,[rsp+0x620]
  9284d0:	00 
  9284d1:	ff 15 21 3a fd 00    	call   QWORD PTR [rip+0xfd3a21]        # 18fbef8 <memcpy@GLIBC_2.14>
  9284d7:	4c 89 ac 24 c0 01 00 	mov    QWORD PTR [rsp+0x1c0],r13
  9284de:	00 
  9284df:	4c 89 bc 24 c8 01 00 	mov    QWORD PTR [rsp+0x1c8],r15
  9284e6:	00 
  9284e7:	48 8b 84 24 a0 00 00 	mov    rax,QWORD PTR [rsp+0xa0]
  9284ee:	00 
  9284ef:	48 8b 38             	mov    rdi,QWORD PTR [rax]
  9284f2:	48 8d b4 24 00 05 00 	lea    rsi,[rsp+0x500]
  9284f9:	00 
  9284fa:	48 8d 94 24 c0 01 00 	lea    rdx,[rsp+0x1c0]
  928501:	00 
  928502:	ff 50 28             	call   QWORD PTR [rax+0x28]
  928505:	89 84 24 90 03 00 00 	mov    DWORD PTR [rsp+0x390],eax
  92850c:	85 c0                	test   eax,eax
  92850e:	0f 89 8f 00 00 00    	jns    9285a3 <future_backtest::RunnerCore::run_multi+0x5fd3>
  928514:	48 8d 84 24 b0 00 00 	lea    rax,[rsp+0xb0]
  92851b:	00 
  92851c:	48 89 84 24 40 01 00 	mov    QWORD PTR [rsp+0x140],rax
  928523:	00 
  928524:	48 8b 05 ad 39 fd 00 	mov    rax,QWORD PTR [rip+0xfd39ad]        # 18fbed8 <_DYNAMIC+0x5d8>
  92852b:	48 89 84 24 48 01 00 	mov    QWORD PTR [rsp+0x148],rax
  928532:	00 
  928533:	48 8d 84 24 90 03 00 	lea    rax,[rsp+0x390]
  92853a:	00 
  92853b:	48 89 84 24 50 01 00 	mov    QWORD PTR [rsp+0x150],rax
  928542:	00 
  928543:	48 8b 05 b6 3c fd 00 	mov    rax,QWORD PTR [rip+0xfd3cb6]        # 18fc200 <_DYNAMIC+0x900>
  92854a:	48 89 84 24 58 01 00 	mov    QWORD PTR [rsp+0x158],rax
  928551:	00 
  928552:	48 8d 05 0f 90 f2 00 	lea    rax,[rip+0xf2900f]        # 1851568 <anon.609a31ba814f1e4156e50677fc366a7f.492.llvm.5215769359700358943+0xe78>
  928559:	48 89 84 24 10 06 00 	mov    QWORD PTR [rsp+0x610],rax
  928560:	00 
  928561:	48 c7 84 24 18 06 00 	mov    QWORD PTR [rsp+0x618],0x3
  928568:	00 03 00 00 00 
  92856d:	48 c7 84 24 30 06 00 	mov    QWORD PTR [rsp+0x630],0x0
  928574:	00 00 00 00 00 
  928579:	48 8d 84 24 40 01 00 	lea    rax,[rsp+0x140]
  928580:	00 
  928581:	48 89 84 24 20 06 00 	mov    QWORD PTR [rsp+0x620],rax
  928588:	00 
  928589:	48 c7 84 24 28 06 00 	mov    QWORD PTR [rsp+0x628],0x2
  928590:	00 02 00 00 00 
  928595:	48 8d bc 24 10 06 00 	lea    rdi,[rsp+0x610]
  92859c:	00 
  92859d:	ff 15 a5 39 fd 00    	call   QWORD PTR [rip+0xfd39a5]        # 18fbf48 <_DYNAMIC+0x648>
  9285a3:	48 8b 44 24 70       	mov    rax,QWORD PTR [rsp+0x70]
  9285a8:	48 89 84 24 10 06 00 	mov    QWORD PTR [rsp+0x610],rax
  9285af:	00 
  9285b0:	48 8b 44 24 50       	mov    rax,QWORD PTR [rsp+0x50]
  9285b5:	48 89 84 24 18 06 00 	mov    QWORD PTR [rsp+0x618],rax
  9285bc:	00 
  9285bd:	48 89 9c 24 20 06 00 	mov    QWORD PTR [rsp+0x620],rbx
  9285c4:	00 
  9285c5:	48 8b 84 24 90 00 00 	mov    rax,QWORD PTR [rsp+0x90]
  9285cc:	00 
  9285cd:	48 89 84 24 28 06 00 	mov    QWORD PTR [rsp+0x628],rax
  9285d4:	00 
  9285d5:	48 89 ac 24 30 06 00 	mov    QWORD PTR [rsp+0x630],rbp
  9285dc:	00 
  9285dd:	48 8b 44 24 60       	mov    rax,QWORD PTR [rsp+0x60]
  9285e2:	48 89 84 24 38 06 00 	mov    QWORD PTR [rsp+0x638],rax
  9285e9:	00 
  9285ea:	48 8d bc 24 10 06 00 	lea    rdi,[rsp+0x610]
  9285f1:	00 
  9285f2:	e8 29 0b fd ff       	call   8f9120 <core::ptr::drop_in_place<(alloc::ffi::c_str::CString,alloc::ffi::c_str::CString,alloc::ffi::c_str::CString)>>
  9285f7:	48 8d bc 24 c0 01 00 	lea    rdi,[rsp+0x1c0]
  9285fe:	00 
  9285ff:	e8 fc 2b fd ff       	call   8fb200 <core::ptr::drop_in_place<future_backtest::ffi::FfiCtx>>
  928604:	49 81 c6 a0 02 00 00 	add    r14,0x2a0
  92860b:	4c 39 b4 24 b8 00 00 	cmp    QWORD PTR [rsp+0xb8],r14
  928612:	00 
  928613:	0f 85 d9 fc ff ff    	jne    9282f2 <future_backtest::RunnerCore::run_multi+0x5d22>
  928619:	48 8b bc 24 b0 00 00 	mov    rdi,QWORD PTR [rsp+0xb0]
  928620:	00 
  928621:	48 3b bc 24 38 03 00 	cmp    rdi,QWORD PTR [rsp+0x338]
  928628:	00 
  928629:	0f 83 bb 2d 00 00    	jae    92b3ea <future_backtest::RunnerCore::run_multi+0x8e1a>
  92862f:	48 8b 84 24 10 01 00 	mov    rax,QWORD PTR [rsp+0x110]
  928636:	00 
  928637:	48 8b 8c 24 20 0e 00 	mov    rcx,QWORD PTR [rsp+0xe20]
  92863e:	00 
  92863f:	48 89 04 f9          	mov    QWORD PTR [rcx+rdi*8],rax
  928643:	48 8d bc 24 70 01 00 	lea    rdi,[rsp+0x170]
  92864a:	00 
  92864b:	e8 40 6d fd ff       	call   8ff390 <core::ptr::drop_in_place<alloc::vec::Vec<future_backtest::Order::trade_order::TradingOrder>>>
  928650:	48 8b 5c 24 48       	mov    rbx,QWORD PTR [rsp+0x48]
  928655:	48 8b 94 24 b0 00 00 	mov    rdx,QWORD PTR [rsp+0xb0]
  92865c:	00 
  92865d:	48 39 da             	cmp    rdx,rbx
  928660:	0f 83 f0 2c 00 00    	jae    92b356 <future_backtest::RunnerCore::run_multi+0x8d86>
  928666:	48 8b 44 24 40       	mov    rax,QWORD PTR [rsp+0x40]
  92866b:	48 69 ca 28 15 00 00 	imul   rcx,rdx,0x1528
  928672:	4c 8d 3c 08          	lea    r15,[rax+rcx*1]
  928676:	49 81 c7 58 13 00 00 	add    r15,0x1358
  92867d:	48 8d 3c 08          	lea    rdi,[rax+rcx*1]
  928681:	48 81 c7 68 07 00 00 	add    rdi,0x768
  928688:	4c 89 fe             	mov    rsi,r15
  92868b:	e8 70 dc fd ff       	call   906300 <hashbrown::map::HashMap<K,V,S,A>::get_inner>
  928690:	49 89 c6             	mov    r14,rax
  928693:	48 85 c0             	test   rax,rax
  928696:	74 0f                	je     9286a7 <future_backtest::RunnerCore::run_multi+0x60d7>
  928698:	f2 41 0f 10 86 60 02 	movsd  xmm0,QWORD PTR [r14+0x260]
  92869f:	00 00 
  9286a1:	f2 0f 11 44 24 70    	movsd  QWORD PTR [rsp+0x70],xmm0
  9286a7:	48 8b 5c 24 48       	mov    rbx,QWORD PTR [rsp+0x48]
  9286ac:	48 8b 94 24 b0 00 00 	mov    rdx,QWORD PTR [rsp+0xb0]
  9286b3:	00 
  9286b4:	48 39 da             	cmp    rdx,rbx
  9286b7:	0f 83 a5 2c 00 00    	jae    92b362 <future_backtest::RunnerCore::run_multi+0x8d92>
  9286bd:	48 8b 44 24 40       	mov    rax,QWORD PTR [rsp+0x40]
  9286c2:	48 69 ca 28 15 00 00 	imul   rcx,rdx,0x1528
  9286c9:	48 8d 3c 08          	lea    rdi,[rax+rcx*1]
  9286cd:	48 81 c7 80 09 00 00 	add    rdi,0x980
  9286d4:	4c 89 fe             	mov    rsi,r15
  9286d7:	e8 84 dd fd ff       	call   906460 <hashbrown::map::HashMap<K,V,S,A>::get_inner>
  9286dc:	48 85 c0             	test   rax,rax
  9286df:	0f 84 b9 03 00 00    	je     928a9e <future_backtest::RunnerCore::run_multi+0x64ce>
  9286e5:	4d 85 f6             	test   r14,r14
  9286e8:	0f 84 b0 03 00 00    	je     928a9e <future_backtest::RunnerCore::run_multi+0x64ce>
  9286ee:	48 8b 5c 24 48       	mov    rbx,QWORD PTR [rsp+0x48]
  9286f3:	48 8b 94 24 b0 00 00 	mov    rdx,QWORD PTR [rsp+0xb0]
  9286fa:	00 
  9286fb:	48 39 da             	cmp    rdx,rbx
  9286fe:	0f 83 10 2d 00 00    	jae    92b414 <future_backtest::RunnerCore::run_multi+0x8e44>
  928704:	0f 10 40 18          	movups xmm0,XMMWORD PTR [rax+0x18]
  928708:	0f 29 84 24 90 00 00 	movaps XMMWORD PTR [rsp+0x90],xmm0
  92870f:	00 
  928710:	48 8b 44 24 40       	mov    rax,QWORD PTR [rsp+0x40]
  928715:	48 69 ca 28 15 00 00 	imul   rcx,rdx,0x1528
  92871c:	48 8d 34 08          	lea    rsi,[rax+rcx*1]
  928720:	48 81 c6 58 13 00 00 	add    rsi,0x1358
  928727:	66 0f 10 84 08 d0 13 	movupd xmm0,XMMWORD PTR [rax+rcx*1+0x13d0]
  92872e:	00 00 
  928730:	66 0f 29 44 24 50    	movapd XMMWORD PTR [rsp+0x50],xmm0
  928736:	48 8d bc 24 e8 04 00 	lea    rdi,[rsp+0x4e8]
  92873d:	00 
  92873e:	48 8d 15 93 8c f2 00 	lea    rdx,[rip+0xf28c93]        # 18513d8 <anon.609a31ba814f1e4156e50677fc366a7f.492.llvm.5215769359700358943+0xce8>
  928745:	ff 15 ed 38 fd 00    	call   QWORD PTR [rip+0xfd38ed]        # 18fc038 <_DYNAMIC+0x738>
  92874b:	48 8b 74 24 48       	mov    rsi,QWORD PTR [rsp+0x48]
  928750:	48 8b bc 24 b0 00 00 	mov    rdi,QWORD PTR [rsp+0xb0]
  928757:	00 
  928758:	48 39 f7             	cmp    rdi,rsi
  92875b:	0f 83 db 2c 00 00    	jae    92b43c <future_backtest::RunnerCore::run_multi+0x8e6c>
  928761:	48 8b 44 24 40       	mov    rax,QWORD PTR [rsp+0x40]
  928766:	48 69 cf 28 15 00 00 	imul   rcx,rdi,0x1528
  92876d:	48 8d 34 08          	lea    rsi,[rax+rcx*1]
  928771:	48 81 c6 30 0b 00 00 	add    rsi,0xb30
  928778:	48 8d bc 24 20 03 00 	lea    rdi,[rsp+0x320]
  92877f:	00 
  928780:	48 8d 15 81 8c f2 00 	lea    rdx,[rip+0xf28c81]        # 1851408 <anon.609a31ba814f1e4156e50677fc366a7f.492.llvm.5215769359700358943+0xd18>
  928787:	ff 15 ab 38 fd 00    	call   QWORD PTR [rip+0xfd38ab]        # 18fc038 <_DYNAMIC+0x738>
  92878d:	48 8b 74 24 48       	mov    rsi,QWORD PTR [rsp+0x48]
  928792:	48 8b bc 24 b0 00 00 	mov    rdi,QWORD PTR [rsp+0xb0]
  928799:	00 
  92879a:	48 39 f7             	cmp    rdi,rsi
  92879d:	0f 83 ab 2c 00 00    	jae    92b44e <future_backtest::RunnerCore::run_multi+0x8e7e>
  9287a3:	48 8b 44 24 40       	mov    rax,QWORD PTR [rsp+0x40]
  9287a8:	48 69 cf 28 15 00 00 	imul   rcx,rdi,0x1528
  9287af:	48 8d 34 08          	lea    rsi,[rax+rcx*1]
  9287b3:	48 81 c6 48 0b 00 00 	add    rsi,0xb48
  9287ba:	48 8d bc 24 70 01 00 	lea    rdi,[rsp+0x170]
  9287c1:	00 
  9287c2:	48 8d 15 6f 8c f2 00 	lea    rdx,[rip+0xf28c6f]        # 1851438 <anon.609a31ba814f1e4156e50677fc366a7f.492.llvm.5215769359700358943+0xd48>
  9287c9:	ff 15 69 38 fd 00    	call   QWORD PTR [rip+0xfd3869]        # 18fc038 <_DYNAMIC+0x738>
  9287cf:	48 8b 9c 24 e8 04 00 	mov    rbx,QWORD PTR [rsp+0x4e8]
  9287d6:	00 
  9287d7:	4c 8b b4 24 f0 04 00 	mov    r14,QWORD PTR [rsp+0x4f0]
  9287de:	00 
  9287df:	48 8b 74 24 48       	mov    rsi,QWORD PTR [rsp+0x48]
  9287e4:	48 8b bc 24 b0 00 00 	mov    rdi,QWORD PTR [rsp+0xb0]
  9287eb:	00 
  9287ec:	48 39 f7             	cmp    rdi,rsi
  9287ef:	0f 83 6b 2c 00 00    	jae    92b460 <future_backtest::RunnerCore::run_multi+0x8e90>
  9287f5:	48 8b 44 24 40       	mov    rax,QWORD PTR [rsp+0x40]
  9287fa:	48 69 cf 28 15 00 00 	imul   rcx,rdi,0x1528
  928801:	48 ba 00 00 00 00 00 	movabs rdx,0x8000000000000000
  928808:	00 00 80 
  92880b:	48 39 94 08 f0 13 00 	cmp    QWORD PTR [rax+rcx*1+0x13f0],rdx
  928812:	00 
  928813:	75 1f                	jne    928834 <future_backtest::RunnerCore::run_multi+0x6264>
  928815:	48 85 db             	test   rbx,rbx
  928818:	0f 84 c2 00 00 00    	je     9288e0 <future_backtest::RunnerCore::run_multi+0x6310>
  92881e:	ba 01 00 00 00       	mov    edx,0x1
  928823:	4c 89 f7             	mov    rdi,r14
  928826:	48 89 de             	mov    rsi,rbx
  928829:	ff 15 f1 32 fd 00    	call   QWORD PTR [rip+0xfd32f1]        # 18fbb20 <_DYNAMIC+0x220>
  92882f:	e9 ac 00 00 00       	jmp    9288e0 <future_backtest::RunnerCore::run_multi+0x6310>
  928834:	48 8d 3c 08          	lea    rdi,[rax+rcx*1]
  928838:	48 81 c7 f0 13 00 00 	add    rdi,0x13f0
  92883f:	48 8b 94 24 f8 04 00 	mov    rdx,QWORD PTR [rsp+0x4f8]
  928846:	00 
  928847:	f2 0f 10 84 08 d8 07 	movsd  xmm0,QWORD PTR [rax+rcx*1+0x7d8]
  92884e:	00 00 
  928850:	48 89 9c 24 c8 1a 00 	mov    QWORD PTR [rsp+0x1ac8],rbx
  928857:	00 
  928858:	4c 89 b4 24 d0 1a 00 	mov    QWORD PTR [rsp+0x1ad0],r14
  92885f:	00 
  928860:	48 89 94 24 d8 1a 00 	mov    QWORD PTR [rsp+0x1ad8],rdx
  928867:	00 
  928868:	0f 28 4c 24 50       	movaps xmm1,XMMWORD PTR [rsp+0x50]
  92886d:	0f 11 8c 24 e0 1a 00 	movups XMMWORD PTR [rsp+0x1ae0],xmm1
  928874:	00 
  928875:	48 c7 84 24 f0 1a 00 	mov    QWORD PTR [rsp+0x1af0],0x0
  92887c:	00 00 00 00 00 
  928881:	f2 0f 10 4c 24 70    	movsd  xmm1,QWORD PTR [rsp+0x70]
  928887:	f2 0f 11 8c 24 f8 1a 	movsd  QWORD PTR [rsp+0x1af8],xmm1
  92888e:	00 00 
  928890:	66 0f 6f 8c 24 90 00 	movdqa xmm1,XMMWORD PTR [rsp+0x90]
  928897:	00 00 
  928899:	f3 0f 7f 8c 24 00 1b 	movdqu XMMWORD PTR [rsp+0x1b00],xmm1
  9288a0:	00 00 
  9288a2:	f2 0f 11 84 24 10 1b 	movsd  QWORD PTR [rsp+0x1b10],xmm0
  9288a9:	00 00 
  9288ab:	0f 10 84 08 08 08 00 	movups xmm0,XMMWORD PTR [rax+rcx*1+0x808]
  9288b2:	00 
  9288b3:	0f 11 84 24 18 1b 00 	movups XMMWORD PTR [rsp+0x1b18],xmm0
  9288ba:	00 
  9288bb:	66 0f 10 84 08 c8 07 	movupd xmm0,XMMWORD PTR [rax+rcx*1+0x7c8]
  9288c2:	00 00 
  9288c4:	66 0f c6 c0 01       	shufpd xmm0,xmm0,0x1
  9288c9:	66 0f 11 84 24 28 1b 	movupd XMMWORD PTR [rsp+0x1b28],xmm0
  9288d0:	00 00 
  9288d2:	48 8d b4 24 c8 1a 00 	lea    rsi,[rsp+0x1ac8]
  9288d9:	00 
  9288da:	ff 15 f8 3b fd 00    	call   QWORD PTR [rip+0xfd3bf8]        # 18fc4d8 <_DYNAMIC+0xbd8>
  9288e0:	48 8b 74 24 48       	mov    rsi,QWORD PTR [rsp+0x48]
  9288e5:	48 8b bc 24 b0 00 00 	mov    rdi,QWORD PTR [rsp+0xb0]
  9288ec:	00 
  9288ed:	48 39 f7             	cmp    rdi,rsi
  9288f0:	0f 83 7c 2b 00 00    	jae    92b472 <future_backtest::RunnerCore::run_multi+0x8ea2>
  9288f6:	48 8b 44 24 40       	mov    rax,QWORD PTR [rsp+0x40]
  9288fb:	48 69 cf 28 15 00 00 	imul   rcx,rdi,0x1528
  928902:	66 0f 10 84 08 58 07 	movupd xmm0,XMMWORD PTR [rax+rcx*1+0x758]
  928909:	00 00 
  92890b:	66 0f 29 44 24 70    	movapd XMMWORD PTR [rsp+0x70],xmm0
  928911:	48 8d bc 24 10 06 00 	lea    rdi,[rsp+0x610]
  928918:	00 
  928919:	48 8d b4 24 20 03 00 	lea    rsi,[rsp+0x320]
  928920:	00 
  928921:	48 8d 15 58 8b f2 00 	lea    rdx,[rip+0xf28b58]        # 1851480 <anon.609a31ba814f1e4156e50677fc366a7f.492.llvm.5215769359700358943+0xd90>
  928928:	ff 15 0a 37 fd 00    	call   QWORD PTR [rip+0xfd370a]        # 18fc038 <_DYNAMIC+0x738>
  92892e:	48 8b 84 24 20 06 00 	mov    rax,QWORD PTR [rsp+0x620]
  928935:	00 
  928936:	48 8d 8c 24 68 05 00 	lea    rcx,[rsp+0x568]
  92893d:	00 
  92893e:	48 89 41 10          	mov    QWORD PTR [rcx+0x10],rax
  928942:	0f 10 84 24 10 06 00 	movups xmm0,XMMWORD PTR [rsp+0x610]
  928949:	00 
  92894a:	0f 11 01             	movups XMMWORD PTR [rcx],xmm0
  92894d:	0f 28 44 24 50       	movaps xmm0,XMMWORD PTR [rsp+0x50]
  928952:	0f 11 84 24 80 05 00 	movups XMMWORD PTR [rsp+0x580],xmm0
  928959:	00 
  92895a:	66 0f 28 44 24 70    	movapd xmm0,XMMWORD PTR [rsp+0x70]
  928960:	66 0f 11 84 24 90 05 	movupd XMMWORD PTR [rsp+0x590],xmm0
  928967:	00 00 
  928969:	48 c7 84 24 00 05 00 	mov    QWORD PTR [rsp+0x500],0x2
  928970:	00 02 00 00 00 
  928975:	48 8b 74 24 48       	mov    rsi,QWORD PTR [rsp+0x48]
  92897a:	48 8b bc 24 b0 00 00 	mov    rdi,QWORD PTR [rsp+0xb0]
  928981:	00 
  928982:	48 39 f7             	cmp    rdi,rsi
  928985:	0f 83 f9 2a 00 00    	jae    92b484 <future_backtest::RunnerCore::run_multi+0x8eb4>
  92898b:	48 8b 5c 24 40       	mov    rbx,QWORD PTR [rsp+0x40]
  928990:	4c 69 f7 28 15 00 00 	imul   r14,rdi,0x1528
  928997:	48 b8 00 00 00 00 00 	movabs rax,0x8000000000000000
  92899e:	00 00 80 
  9289a1:	4a 39 84 33 f0 13 00 	cmp    QWORD PTR [rbx+r14*1+0x13f0],rax
  9289a8:	00 
  9289a9:	74 2e                	je     9289d9 <future_backtest::RunnerCore::run_multi+0x6409>
  9289ab:	48 8d bc 24 10 06 00 	lea    rdi,[rsp+0x610]
  9289b2:	00 
  9289b3:	48 8d b4 24 00 05 00 	lea    rsi,[rsp+0x500]
  9289ba:	00 
  9289bb:	e8 30 77 00 00       	call   9300f0 <<future_backtest::BacktestResult::backtest_result::BacktestShareStatusSlice as core::clone::Clone>::clone>
  9289c0:	4a 8d 3c 33          	lea    rdi,[rbx+r14*1]
  9289c4:	48 81 c7 f0 13 00 00 	add    rdi,0x13f0
  9289cb:	48 8d b4 24 10 06 00 	lea    rsi,[rsp+0x610]
  9289d2:	00 
  9289d3:	ff 15 f7 39 fd 00    	call   QWORD PTR [rip+0xfd39f7]        # 18fc3d0 <_DYNAMIC+0xad0>
  9289d9:	48 8b 84 24 88 00 00 	mov    rax,QWORD PTR [rsp+0x88]
  9289e0:	00 
  9289e1:	48 83 78 10 00       	cmp    QWORD PTR [rax+0x10],0x0
  9289e6:	0f 85 aa 2a 00 00    	jne    92b496 <future_backtest::RunnerCore::run_multi+0x8ec6>
  9289ec:	48 8b 84 24 88 00 00 	mov    rax,QWORD PTR [rsp+0x88]
  9289f3:	00 
  9289f4:	48 c7 40 10 ff ff ff 	mov    QWORD PTR [rax+0x10],0xffffffffffffffff
  9289fb:	ff 
  9289fc:	48 8b 84 24 30 03 00 	mov    rax,QWORD PTR [rsp+0x330]
  928a03:	00 
  928a04:	48 89 84 24 50 01 00 	mov    QWORD PTR [rsp+0x150],rax
  928a0b:	00 
  928a0c:	0f 10 84 24 20 03 00 	movups xmm0,XMMWORD PTR [rsp+0x320]
  928a13:	00 
  928a14:	0f 29 84 24 40 01 00 	movaps XMMWORD PTR [rsp+0x140],xmm0
  928a1b:	00 
  928a1c:	48 8b 84 24 80 01 00 	mov    rax,QWORD PTR [rsp+0x180]
  928a23:	00 
  928a24:	48 8d 8c 24 58 01 00 	lea    rcx,[rsp+0x158]
  928a2b:	00 
  928a2c:	48 89 41 10          	mov    QWORD PTR [rcx+0x10],rax
  928a30:	66 0f 10 84 24 70 01 	movupd xmm0,XMMWORD PTR [rsp+0x170]
  928a37:	00 00 
  928a39:	66 0f 11 01          	movupd XMMWORD PTR [rcx],xmm0
  928a3d:	ba a0 00 00 00       	mov    edx,0xa0
  928a42:	48 8d 9c 24 10 06 00 	lea    rbx,[rsp+0x610]
  928a49:	00 
  928a4a:	48 89 df             	mov    rdi,rbx
  928a4d:	48 8d b4 24 00 05 00 	lea    rsi,[rsp+0x500]
  928a54:	00 
  928a55:	ff 15 9d 34 fd 00    	call   QWORD PTR [rip+0xfd349d]        # 18fbef8 <memcpy@GLIBC_2.14>
  928a5b:	48 8d bc 24 c0 01 00 	lea    rdi,[rsp+0x1c0]
  928a62:	00 
  928a63:	48 8b b4 24 28 01 00 	mov    rsi,QWORD PTR [rsp+0x128]
  928a6a:	00 
  928a6b:	48 8d 94 24 40 01 00 	lea    rdx,[rsp+0x140]
  928a72:	00 
  928a73:	48 89 d9             	mov    rcx,rbx
  928a76:	e8 e5 f8 04 00       	call   978360 <hashbrown::map::HashMap<K,V,S,A>::insert>
  928a7b:	83 bc 24 c0 01 00 00 	cmp    DWORD PTR [rsp+0x1c0],0x3
  928a82:	03 
  928a83:	74 0d                	je     928a92 <future_backtest::RunnerCore::run_multi+0x64c2>
  928a85:	48 8d bc 24 c0 01 00 	lea    rdi,[rsp+0x1c0]
  928a8c:	00 
  928a8d:	e8 7e 6b fd ff       	call   8ff610 <core::ptr::drop_in_place<future_backtest::BacktestResult::backtest_result::BacktestShareStatusSlice>>
  928a92:	48 8b 84 24 88 00 00 	mov    rax,QWORD PTR [rsp+0x88]
  928a99:	00 
  928a9a:	48 ff 40 10          	inc    QWORD PTR [rax+0x10]
  928a9e:	48 8b 5c 24 48       	mov    rbx,QWORD PTR [rsp+0x48]
  928aa3:	48 8b 94 24 b0 00 00 	mov    rdx,QWORD PTR [rsp+0xb0]
  928aaa:	00 
  928aab:	48 39 da             	cmp    rdx,rbx
  928aae:	0f 83 ba 28 00 00    	jae    92b36e <future_backtest::RunnerCore::run_multi+0x8d9e>
  928ab4:	48 69 f2 28 15 00 00 	imul   rsi,rdx,0x1528
  928abb:	48 03 74 24 40       	add    rsi,QWORD PTR [rsp+0x40]
  928ac0:	83 bc 24 e0 0e 00 00 	cmp    DWORD PTR [rsp+0xee0],0x2
  928ac7:	02 
  928ac8:	48 8d 8c 24 e0 0e 00 	lea    rcx,[rsp+0xee0]
  928acf:	00 
  928ad0:	b8 00 00 00 00       	mov    eax,0x0
  928ad5:	48 0f 44 c8          	cmove  rcx,rax
  928ad9:	44 0f b6 84 24 c1 04 	movzx  r8d,BYTE PTR [rsp+0x4c1]
  928ae0:	00 00 
  928ae2:	48 8d bc 24 10 06 00 	lea    rdi,[rsp+0x610]
  928ae9:	00 
  928aea:	e8 21 96 ff ff       	call   922110 <future_backtest::RunnerCore::make_ffi_ctx>
  928aef:	48 8b 9c 24 10 06 00 	mov    rbx,QWORD PTR [rsp+0x610]
  928af6:	00 
  928af7:	4c 8b bc 24 18 06 00 	mov    r15,QWORD PTR [rsp+0x618]
  928afe:	00 
  928aff:	48 83 fb 03          	cmp    rbx,0x3
  928b03:	0f 84 97 16 00 00    	je     92a1a0 <future_backtest::RunnerCore::run_multi+0x7bd0>
  928b09:	ba e8 00 00 00       	mov    edx,0xe8
  928b0e:	48 8d bc 24 d0 01 00 	lea    rdi,[rsp+0x1d0]
  928b15:	00 
  928b16:	48 8d b4 24 20 06 00 	lea    rsi,[rsp+0x620]
  928b1d:	00 
  928b1e:	ff 15 d4 33 fd 00    	call   QWORD PTR [rip+0xfd33d4]        # 18fbef8 <memcpy@GLIBC_2.14>
  928b24:	48 89 9c 24 c0 01 00 	mov    QWORD PTR [rsp+0x1c0],rbx
  928b2b:	00 
  928b2c:	4c 89 bc 24 c8 01 00 	mov    QWORD PTR [rsp+0x1c8],r15
  928b33:	00 
  928b34:	48 8b b4 24 a8 03 00 	mov    rsi,QWORD PTR [rsp+0x3a8]
  928b3b:	00 
  928b3c:	48 8b 94 24 b0 03 00 	mov    rdx,QWORD PTR [rsp+0x3b0]
  928b43:	00 
  928b44:	48 8d bc 24 10 06 00 	lea    rdi,[rsp+0x610]
  928b4b:	00 
  928b4c:	ff 15 7e 49 fd 00    	call   QWORD PTR [rip+0xfd497e]        # 18fd4d0 <_DYNAMIC+0x1bd0>
  928b52:	48 8d bc 24 10 06 00 	lea    rdi,[rsp+0x610]
  928b59:	00 
  928b5a:	e8 91 76 fd ff       	call   9001f0 <core::result::Result<T,E>::unwrap_or_default>
  928b5f:	49 89 c6             	mov    r14,rax
  928b62:	48 89 d3             	mov    rbx,rdx
  928b65:	48 8b 44 24 18       	mov    rax,QWORD PTR [rsp+0x18]
  928b6a:	48 8b 40 10          	mov    rax,QWORD PTR [rax+0x10]
  928b6e:	48 b9 00 00 00 00 00 	movabs rcx,0x8000000000000000
  928b75:	00 00 80 
  928b78:	48 ff c9             	dec    rcx
  928b7b:	48 39 c8             	cmp    rax,rcx
  928b7e:	0f 83 f6 27 00 00    	jae    92b37a <future_backtest::RunnerCore::run_multi+0x8daa>
  928b84:	48 ff c0             	inc    rax
  928b87:	48 8b 4c 24 18       	mov    rcx,QWORD PTR [rsp+0x18]
  928b8c:	48 89 41 10          	mov    QWORD PTR [rcx+0x10],rax
  928b90:	48 8b bc 24 c0 00 00 	mov    rdi,QWORD PTR [rsp+0xc0]
  928b97:	00 
  928b98:	48 8d b4 24 a0 03 00 	lea    rsi,[rsp+0x3a0]
  928b9f:	00 
  928ba0:	e8 fb d5 fd ff       	call   9061a0 <hashbrown::map::HashMap<K,V,S,A>::get_inner>
  928ba5:	48 85 c0             	test   rax,rax
  928ba8:	0f 84 b6 01 00 00    	je     928d64 <future_backtest::RunnerCore::run_multi+0x6794>
  928bae:	48 83 c0 18          	add    rax,0x18
  928bb2:	48 8d bc 24 10 06 00 	lea    rdi,[rsp+0x610]
  928bb9:	00 
  928bba:	48 8d b4 24 a0 03 00 	lea    rsi,[rsp+0x3a0]
  928bc1:	00 
  928bc2:	4c 89 f2             	mov    rdx,r14
  928bc5:	48 89 c1             	mov    rcx,rax
  928bc8:	e8 93 3e 00 00       	call   92ca60 <future_backtest::RunnerCore::run_multi::{{closure}}>
  928bcd:	48 8b 84 24 20 06 00 	mov    rax,QWORD PTR [rsp+0x620]
  928bd4:	00 
  928bd5:	48 89 84 24 30 03 00 	mov    QWORD PTR [rsp+0x330],rax
  928bdc:	00 
  928bdd:	66 0f 10 84 24 10 06 	movupd xmm0,XMMWORD PTR [rsp+0x610]
  928be4:	00 00 
  928be6:	66 0f 29 84 24 20 03 	movapd XMMWORD PTR [rsp+0x320],xmm0
  928bed:	00 00 
  928bef:	0f b6 ac 24 28 06 00 	movzx  ebp,BYTE PTR [rsp+0x628]
  928bf6:	00 
  928bf7:	ba cf 00 00 00       	mov    edx,0xcf
  928bfc:	48 8d bc 24 00 05 00 	lea    rdi,[rsp+0x500]
  928c03:	00 
  928c04:	48 8d b4 24 29 06 00 	lea    rsi,[rsp+0x629]
  928c0b:	00 
  928c0c:	ff 15 e6 32 fd 00    	call   QWORD PTR [rip+0xfd32e6]        # 18fbef8 <memcpy@GLIBC_2.14>
  928c12:	48 8b 44 24 18       	mov    rax,QWORD PTR [rsp+0x18]
  928c17:	48 ff 48 10          	dec    QWORD PTR [rax+0x10]
  928c1b:	40 80 fd 02          	cmp    bpl,0x2
  928c1f:	0f 84 48 01 00 00    	je     928d6d <future_backtest::RunnerCore::run_multi+0x679d>
  928c25:	48 8b 84 24 30 03 00 	mov    rax,QWORD PTR [rsp+0x330]
  928c2c:	00 
  928c2d:	48 89 84 24 20 06 00 	mov    QWORD PTR [rsp+0x620],rax
  928c34:	00 
  928c35:	66 0f 28 84 24 20 03 	movapd xmm0,XMMWORD PTR [rsp+0x320]
  928c3c:	00 00 
  928c3e:	66 0f 29 84 24 10 06 	movapd XMMWORD PTR [rsp+0x610],xmm0
  928c45:	00 00 
  928c47:	40 88 ac 24 28 06 00 	mov    BYTE PTR [rsp+0x628],bpl
  928c4e:	00 
  928c4f:	ba cf 00 00 00       	mov    edx,0xcf
  928c54:	48 8d bc 24 29 06 00 	lea    rdi,[rsp+0x629]
  928c5b:	00 
  928c5c:	48 8d b4 24 00 05 00 	lea    rsi,[rsp+0x500]
  928c63:	00 
  928c64:	ff 15 8e 32 fd 00    	call   QWORD PTR [rip+0xfd328e]        # 18fbef8 <memcpy@GLIBC_2.14>
  928c6a:	48 8b b4 24 f8 00 00 	mov    rsi,QWORD PTR [rsp+0xf8]
  928c71:	00 
  928c72:	48 8b bc 24 b0 00 00 	mov    rdi,QWORD PTR [rsp+0xb0]
  928c79:	00 
  928c7a:	48 39 f7             	cmp    rdi,rsi
  928c7d:	0f 83 31 28 00 00    	jae    92b4b4 <future_backtest::RunnerCore::run_multi+0x8ee4>
  928c83:	48 8b 84 24 f0 00 00 	mov    rax,QWORD PTR [rsp+0xf0]
  928c8a:	00 
  928c8b:	48 8b 04 f8          	mov    rax,QWORD PTR [rax+rdi*8]
  928c8f:	48 8b 38             	mov    rdi,QWORD PTR [rax]
  928c92:	48 8d b4 24 10 06 00 	lea    rsi,[rsp+0x610]
  928c99:	00 
  928c9a:	48 8d 94 24 c0 01 00 	lea    rdx,[rsp+0x1c0]
  928ca1:	00 
  928ca2:	ff 50 18             	call   QWORD PTR [rax+0x18]
  928ca5:	89 84 24 94 03 00 00 	mov    DWORD PTR [rsp+0x394],eax
  928cac:	85 c0                	test   eax,eax
  928cae:	0f 89 b9 00 00 00    	jns    928d6d <future_backtest::RunnerCore::run_multi+0x679d>
  928cb4:	48 8d 84 24 b0 00 00 	lea    rax,[rsp+0xb0]
  928cbb:	00 
  928cbc:	48 89 84 24 40 01 00 	mov    QWORD PTR [rsp+0x140],rax
  928cc3:	00 
  928cc4:	48 8b 05 0d 32 fd 00 	mov    rax,QWORD PTR [rip+0xfd320d]        # 18fbed8 <_DYNAMIC+0x5d8>
  928ccb:	48 89 84 24 48 01 00 	mov    QWORD PTR [rsp+0x148],rax
  928cd2:	00 
  928cd3:	48 8d 84 24 94 03 00 	lea    rax,[rsp+0x394]
  928cda:	00 
  928cdb:	48 89 84 24 50 01 00 	mov    QWORD PTR [rsp+0x150],rax
  928ce2:	00 
  928ce3:	48 8b 05 16 35 fd 00 	mov    rax,QWORD PTR [rip+0xfd3516]        # 18fc200 <_DYNAMIC+0x900>
  928cea:	48 89 84 24 58 01 00 	mov    QWORD PTR [rsp+0x158],rax
  928cf1:	00 
  928cf2:	48 8d 84 24 c8 03 00 	lea    rax,[rsp+0x3c8]
  928cf9:	00 
  928cfa:	48 89 84 24 60 01 00 	mov    QWORD PTR [rsp+0x160],rax
  928d01:	00 
  928d02:	48 8b 05 b7 35 fd 00 	mov    rax,QWORD PTR [rip+0xfd35b7]        # 18fc2c0 <_DYNAMIC+0x9c0>
  928d09:	48 89 84 24 68 01 00 	mov    QWORD PTR [rsp+0x168],rax
  928d10:	00 
  928d11:	48 8d 05 e0 87 f2 00 	lea    rax,[rip+0xf287e0]        # 18514f8 <anon.609a31ba814f1e4156e50677fc366a7f.492.llvm.5215769359700358943+0xe08>
  928d18:	48 89 84 24 70 01 00 	mov    QWORD PTR [rsp+0x170],rax
  928d1f:	00 
  928d20:	48 c7 84 24 78 01 00 	mov    QWORD PTR [rsp+0x178],0x4
  928d27:	00 04 00 00 00 
  928d2c:	48 c7 84 24 90 01 00 	mov    QWORD PTR [rsp+0x190],0x0
  928d33:	00 00 00 00 00 
  928d38:	48 8d 84 24 40 01 00 	lea    rax,[rsp+0x140]
  928d3f:	00 
  928d40:	48 89 84 24 80 01 00 	mov    QWORD PTR [rsp+0x180],rax
  928d47:	00 
  928d48:	48 c7 84 24 88 01 00 	mov    QWORD PTR [rsp+0x188],0x3
  928d4f:	00 03 00 00 00 
  928d54:	48 8d bc 24 70 01 00 	lea    rdi,[rsp+0x170]
  928d5b:	00 
  928d5c:	ff 15 e6 31 fd 00    	call   QWORD PTR [rip+0xfd31e6]        # 18fbf48 <_DYNAMIC+0x648>
  928d62:	eb 09                	jmp    928d6d <future_backtest::RunnerCore::run_multi+0x679d>
  928d64:	48 8b 44 24 18       	mov    rax,QWORD PTR [rsp+0x18]
  928d69:	48 ff 48 10          	dec    QWORD PTR [rax+0x10]
  928d6d:	41 c6 06 00          	mov    BYTE PTR [r14],0x0
  928d71:	48 85 db             	test   rbx,rbx
  928d74:	74 11                	je     928d87 <future_backtest::RunnerCore::run_multi+0x67b7>
  928d76:	ba 01 00 00 00       	mov    edx,0x1
  928d7b:	4c 89 f7             	mov    rdi,r14
  928d7e:	48 89 de             	mov    rsi,rbx
  928d81:	ff 15 99 2d fd 00    	call   QWORD PTR [rip+0xfd2d99]        # 18fbb20 <_DYNAMIC+0x220>
  928d87:	48 8d bc 24 c0 01 00 	lea    rdi,[rsp+0x1c0]
  928d8e:	00 
  928d8f:	e8 6c 24 fd ff       	call   8fb200 <core::ptr::drop_in_place<future_backtest::ffi::FfiCtx>>
  928d94:	48 8b 8c 24 a8 00 00 	mov    rcx,QWORD PTR [rsp+0xa8]
  928d9b:	00 
  928d9c:	48 8b b4 24 40 03 00 	mov    rsi,QWORD PTR [rsp+0x340]
  928da3:	00 
  928da4:	48 39 ce             	cmp    rsi,rcx
  928da7:	48 89 f0             	mov    rax,rsi
  928daa:	48 83 d0 00          	adc    rax,0x0
  928dae:	48 89 f2             	mov    rdx,rsi
  928db1:	48 39 ce             	cmp    rsi,rcx
  928db4:	0f 82 c5 f3 ff ff    	jb     92817f <future_backtest::RunnerCore::run_multi+0x5baf>
  928dba:	83 bc 24 e0 0e 00 00 	cmp    DWORD PTR [rsp+0xee0],0x2
  928dc1:	02 
  928dc2:	74 1f                	je     928de3 <future_backtest::RunnerCore::run_multi+0x6813>
  928dc4:	f2 0f 10 84 24 c8 03 	movsd  xmm0,QWORD PTR [rsp+0x3c8]
  928dcb:	00 00 
  928dcd:	f3 0f 7e 8c 24 d0 03 	movq   xmm1,QWORD PTR [rsp+0x3d0]
  928dd4:	00 00 
  928dd6:	48 8d bc 24 e0 0e 00 	lea    rdi,[rsp+0xee0]
  928ddd:	00 
  928dde:	e8 4d 8d ff ff       	call   921b30 <future_backtest::RunnerCore::MetaRunState::record_portfolio>
  928de3:	48 8b 44 24 18       	mov    rax,QWORD PTR [rsp+0x18]
  928de8:	48 83 78 10 00       	cmp    QWORD PTR [rax+0x10],0x0
  928ded:	0f 85 f4 26 00 00    	jne    92b4e7 <future_backtest::RunnerCore::run_multi+0x8f17>
  928df3:	48 8b 44 24 18       	mov    rax,QWORD PTR [rsp+0x18]
  928df8:	48 c7 40 10 ff ff ff 	mov    QWORD PTR [rax+0x10],0xffffffffffffffff
  928dff:	ff 
  928e00:	48 8d bc 24 10 06 00 	lea    rdi,[rsp+0x610]
  928e07:	00 
  928e08:	48 8d b4 24 70 03 00 	lea    rsi,[rsp+0x370]
  928e0f:	00 
  928e10:	48 8d 15 71 84 f2 00 	lea    rdx,[rip+0xf28471]        # 1851288 <anon.609a31ba814f1e4156e50677fc366a7f.492.llvm.5215769359700358943+0xb98>
  928e17:	ff 15 1b 32 fd 00    	call   QWORD PTR [rip+0xfd321b]        # 18fc038 <_DYNAMIC+0x738>
  928e1d:	48 8b 84 24 20 06 00 	mov    rax,QWORD PTR [rsp+0x620]
  928e24:	00 
  928e25:	48 89 84 24 d0 01 00 	mov    QWORD PTR [rsp+0x1d0],rax
  928e2c:	00 
  928e2d:	66 0f 10 84 24 10 06 	movupd xmm0,XMMWORD PTR [rsp+0x610]
  928e34:	00 00 
  928e36:	66 0f 29 84 24 c0 01 	movapd XMMWORD PTR [rsp+0x1c0],xmm0
  928e3d:	00 00 
  928e3f:	48 8b bc 24 80 00 00 	mov    rdi,QWORD PTR [rsp+0x80]
  928e46:	00 
  928e47:	48 8d b4 24 c0 01 00 	lea    rsi,[rsp+0x1c0]
  928e4e:	00 
  928e4f:	ff 15 b3 3f fd 00    	call   QWORD PTR [rip+0xfd3fb3]        # 18fce08 <_DYNAMIC+0x1508>
  928e55:	49 89 c7             	mov    r15,rax
  928e58:	48 8b 54 24 18       	mov    rdx,QWORD PTR [rsp+0x18]
  928e5d:	48 8b 42 10          	mov    rax,QWORD PTR [rdx+0x10]
  928e61:	48 8d 48 01          	lea    rcx,[rax+0x1]
  928e65:	48 89 4a 10          	mov    QWORD PTR [rdx+0x10],rcx
  928e69:	4d 85 ff             	test   r15,r15
  928e6c:	0f 85 2e 13 00 00    	jne    92a1a0 <future_backtest::RunnerCore::run_multi+0x7bd0>
  928e72:	48 ba 00 00 00 00 00 	movabs rdx,0x8000000000000000
  928e79:	00 00 80 
  928e7c:	48 ff ca             	dec    rdx
  928e7f:	48 39 d1             	cmp    rcx,rdx
  928e82:	0f 83 68 26 00 00    	jae    92b4f0 <future_backtest::RunnerCore::run_multi+0x8f20>
  928e88:	48 83 c0 02          	add    rax,0x2
  928e8c:	48 8b 4c 24 18       	mov    rcx,QWORD PTR [rsp+0x18]
  928e91:	48 89 41 10          	mov    QWORD PTR [rcx+0x10],rax
  928e95:	0f 10 81 70 01 00 00 	movups xmm0,XMMWORD PTR [rcx+0x170]
  928e9c:	0f 29 44 24 50       	movaps XMMWORD PTR [rsp+0x50],xmm0
  928ea1:	48 8d bc 24 10 06 00 	lea    rdi,[rsp+0x610]
  928ea8:	00 
  928ea9:	48 8b b4 24 20 01 00 	mov    rsi,QWORD PTR [rsp+0x120]
  928eb0:	00 
  928eb1:	e8 0a 67 07 00       	call   99f5c0 <<hashbrown::raw::RawTable<T,A> as core::clone::Clone>::clone>
  928eb6:	0f 28 44 24 50       	movaps xmm0,XMMWORD PTR [rsp+0x50]
  928ebb:	0f 11 84 24 30 06 00 	movups XMMWORD PTR [rsp+0x630],xmm0
  928ec2:	00 
  928ec3:	0f 10 84 24 10 06 00 	movups xmm0,XMMWORD PTR [rsp+0x610]
  928eca:	00 
  928ecb:	f3 0f 6f 8c 24 20 06 	movdqu xmm1,XMMWORD PTR [rsp+0x620]
  928ed2:	00 00 
  928ed4:	0f 29 84 24 70 01 00 	movaps XMMWORD PTR [rsp+0x170],xmm0
  928edb:	00 
  928edc:	66 0f 7f 8c 24 80 01 	movdqa XMMWORD PTR [rsp+0x180],xmm1
  928ee3:	00 00 
  928ee5:	66 0f 10 84 24 30 06 	movupd xmm0,XMMWORD PTR [rsp+0x630]
  928eec:	00 00 
  928eee:	66 0f 29 84 24 90 01 	movapd XMMWORD PTR [rsp+0x190],xmm0
  928ef5:	00 00 
  928ef7:	48 8b 44 24 18       	mov    rax,QWORD PTR [rsp+0x18]
  928efc:	48 ff 48 10          	dec    QWORD PTR [rax+0x10]
  928f00:	48 8d 3d 31 68 f2 00 	lea    rdi,[rip+0xf26831]        # 184f738 <anon.609a31ba814f1e4156e50677fc366a7f.248.llvm.5215769359700358943+0x78>
  928f07:	e8 b4 e9 03 00       	call   9678c0 <std::thread::local::LocalKey<T>::with>
  928f0c:	0f 10 05 3d 68 f2 00 	movups xmm0,XMMWORD PTR [rip+0xf2683d]        # 184f750 <anon.609a31ba814f1e4156e50677fc366a7f.248.llvm.5215769359700358943+0x90>
  928f13:	0f 29 84 24 50 01 00 	movaps XMMWORD PTR [rsp+0x150],xmm0
  928f1a:	00 
  928f1b:	66 0f 10 05 1d 68 f2 	movupd xmm0,XMMWORD PTR [rip+0xf2681d]        # 184f740 <anon.609a31ba814f1e4156e50677fc366a7f.248.llvm.5215769359700358943+0x80>
  928f22:	00 
  928f23:	66 0f 29 84 24 40 01 	movapd XMMWORD PTR [rsp+0x140],xmm0
  928f2a:	00 00 
  928f2c:	48 89 84 24 60 01 00 	mov    QWORD PTR [rsp+0x160],rax
  928f33:	00 
  928f34:	48 89 94 24 68 01 00 	mov    QWORD PTR [rsp+0x168],rdx
  928f3b:	00 
  928f3c:	45 31 e4             	xor    r12d,r12d
  928f3f:	31 db                	xor    ebx,ebx
  928f41:	48 3b 9c 24 a8 00 00 	cmp    rbx,QWORD PTR [rsp+0xa8]
  928f48:	00 
  928f49:	0f 83 40 01 00 00    	jae    92908f <future_backtest::RunnerCore::run_multi+0x6abf>
  928f4f:	48 8b 74 24 48       	mov    rsi,QWORD PTR [rsp+0x48]
  928f54:	48 39 f3             	cmp    rbx,rsi
  928f57:	0f 83 9f 23 00 00    	jae    92b2fc <future_backtest::RunnerCore::run_multi+0x8d2c>
  928f5d:	4c 8b 74 24 40       	mov    r14,QWORD PTR [rsp+0x40]
  928f62:	f2 43 0f 10 84 26 d0 	movsd  xmm0,QWORD PTR [r14+r12*1+0x13d0]
  928f69:	13 00 00 
  928f6c:	f2 0f 11 44 24 70    	movsd  QWORD PTR [rsp+0x70],xmm0
  928f72:	f2 43 0f 10 84 26 d8 	movsd  xmm0,QWORD PTR [r14+r12*1+0x13d8]
  928f79:	13 00 00 
  928f7c:	f2 0f 11 84 24 90 00 	movsd  QWORD PTR [rsp+0x90],xmm0
  928f83:	00 00 
  928f85:	66 0f 28 84 24 90 01 	movapd xmm0,XMMWORD PTR [rsp+0x190]
  928f8c:	00 00 
  928f8e:	66 0f 29 44 24 50    	movapd XMMWORD PTR [rsp+0x50],xmm0
  928f94:	48 8d bc 24 10 06 00 	lea    rdi,[rsp+0x610]
  928f9b:	00 
  928f9c:	48 8d b4 24 70 01 00 	lea    rsi,[rsp+0x170]
  928fa3:	00 
  928fa4:	e8 17 66 07 00       	call   99f5c0 <<hashbrown::raw::RawTable<T,A> as core::clone::Clone>::clone>
  928fa9:	0f 28 44 24 50       	movaps xmm0,XMMWORD PTR [rsp+0x50]
  928fae:	0f 11 84 24 30 06 00 	movups XMMWORD PTR [rsp+0x630],xmm0
  928fb5:	00 
  928fb6:	0f 10 84 24 10 06 00 	movups xmm0,XMMWORD PTR [rsp+0x610]
  928fbd:	00 
  928fbe:	f3 0f 6f 8c 24 20 06 	movdqu xmm1,XMMWORD PTR [rsp+0x620]
  928fc5:	00 00 
  928fc7:	0f 29 84 24 00 05 00 	movaps XMMWORD PTR [rsp+0x500],xmm0
  928fce:	00 
  928fcf:	66 0f 7f 8c 24 10 05 	movdqa XMMWORD PTR [rsp+0x510],xmm1
  928fd6:	00 00 
  928fd8:	0f 10 84 24 30 06 00 	movups xmm0,XMMWORD PTR [rsp+0x630]
  928fdf:	00 
  928fe0:	0f 29 84 24 20 05 00 	movaps XMMWORD PTR [rsp+0x520],xmm0
  928fe7:	00 
  928fe8:	66 0f 28 84 24 60 01 	movapd xmm0,XMMWORD PTR [rsp+0x160]
  928fef:	00 00 
  928ff1:	66 0f 29 44 24 50    	movapd XMMWORD PTR [rsp+0x50],xmm0
  928ff7:	48 8d bc 24 10 06 00 	lea    rdi,[rsp+0x610]
  928ffe:	00 
  928fff:	48 8d b4 24 40 01 00 	lea    rsi,[rsp+0x140]
  929006:	00 
  929007:	e8 24 6b 07 00       	call   99fb30 <<hashbrown::raw::RawTable<T,A> as core::clone::Clone>::clone>
  92900c:	4d 01 e6             	add    r14,r12
  92900f:	0f 28 44 24 50       	movaps xmm0,XMMWORD PTR [rsp+0x50]
  929014:	0f 11 84 24 30 06 00 	movups XMMWORD PTR [rsp+0x630],xmm0
  92901b:	00 
  92901c:	0f 10 84 24 10 06 00 	movups xmm0,XMMWORD PTR [rsp+0x610]
  929023:	00 
  929024:	0f 10 8c 24 20 06 00 	movups xmm1,XMMWORD PTR [rsp+0x620]
  92902b:	00 
  92902c:	0f 29 84 24 c0 01 00 	movaps XMMWORD PTR [rsp+0x1c0],xmm0
  929033:	00 
  929034:	0f 29 8c 24 d0 01 00 	movaps XMMWORD PTR [rsp+0x1d0],xmm1
  92903b:	00 
  92903c:	0f 10 84 24 30 06 00 	movups xmm0,XMMWORD PTR [rsp+0x630]
  929043:	00 
  929044:	0f 29 84 24 e0 01 00 	movaps XMMWORD PTR [rsp+0x1e0],xmm0
  92904b:	00 
  92904c:	4c 89 f7             	mov    rdi,r14
  92904f:	f2 0f 10 84 24 90 00 	movsd  xmm0,QWORD PTR [rsp+0x90]
  929056:	00 00 
  929058:	f3 0f 7e 4c 24 70    	movq   xmm1,QWORD PTR [rsp+0x70]
  92905e:	48 8d b4 24 00 05 00 	lea    rsi,[rsp+0x500]
  929065:	00 
  929066:	48 8d 94 24 c0 01 00 	lea    rdx,[rsp+0x1c0]
  92906d:	00 
  92906e:	ff 15 84 2d fd 00    	call   QWORD PTR [rip+0xfd2d84]        # 18fbdf8 <_DYNAMIC+0x4f8>
  929074:	49 89 c7             	mov    r15,rax
  929077:	49 81 c4 28 15 00 00 	add    r12,0x1528
  92907e:	48 ff c3             	inc    rbx
  929081:	48 85 c0             	test   rax,rax
  929084:	0f 84 b7 fe ff ff    	je     928f41 <future_backtest::RunnerCore::run_multi+0x6971>
  92908a:	e9 f7 10 00 00       	jmp    92a186 <future_backtest::RunnerCore::run_multi+0x7bb6>
  92908f:	48 8d bc 24 40 01 00 	lea    rdi,[rsp+0x140]
  929096:	00 
  929097:	e8 64 a7 07 00       	call   9a3800 <<hashbrown::raw::RawTable<T,A> as core::ops::drop::Drop>::drop>
  92909c:	48 8d bc 24 70 01 00 	lea    rdi,[rsp+0x170]
  9290a3:	00 
  9290a4:	e8 77 b4 07 00       	call   9a4520 <<hashbrown::raw::RawTable<T,A> as core::ops::drop::Drop>::drop>
  9290a9:	48 8b 44 24 18       	mov    rax,QWORD PTR [rsp+0x18]
  9290ae:	48 83 78 10 00       	cmp    QWORD PTR [rax+0x10],0x0
  9290b3:	0f 85 46 24 00 00    	jne    92b4ff <future_backtest::RunnerCore::run_multi+0x8f2f>
  9290b9:	48 8b 44 24 18       	mov    rax,QWORD PTR [rsp+0x18]
  9290be:	48 c7 40 10 ff ff ff 	mov    QWORD PTR [rax+0x10],0xffffffffffffffff
  9290c5:	ff 
  9290c6:	48 8b 84 24 80 03 00 	mov    rax,QWORD PTR [rsp+0x380]
  9290cd:	00 
  9290ce:	48 89 84 24 20 06 00 	mov    QWORD PTR [rsp+0x620],rax
  9290d5:	00 
  9290d6:	66 0f 10 84 24 70 03 	movupd xmm0,XMMWORD PTR [rsp+0x370]
  9290dd:	00 00 
  9290df:	66 0f 29 84 24 10 06 	movapd XMMWORD PTR [rsp+0x610],xmm0
  9290e6:	00 00 
  9290e8:	48 8b bc 24 80 00 00 	mov    rdi,QWORD PTR [rsp+0x80]
  9290ef:	00 
  9290f0:	48 8d b4 24 10 06 00 	lea    rsi,[rsp+0x610]
  9290f7:	00 
  9290f8:	ff 15 32 3d fd 00    	call   QWORD PTR [rip+0xfd3d32]        # 18fce30 <_DYNAMIC+0x1530>
  9290fe:	49 89 c7             	mov    r15,rax
  929101:	48 8b 44 24 18       	mov    rax,QWORD PTR [rsp+0x18]
  929106:	48 ff 40 10          	inc    QWORD PTR [rax+0x10]
  92910a:	4d 85 ff             	test   r15,r15
  92910d:	0f 85 ad 10 00 00    	jne    92a1c0 <future_backtest::RunnerCore::run_multi+0x7bf0>
  929113:	48 ff 84 24 e8 05 00 	inc    QWORD PTR [rsp+0x5e8]
  92911a:	00 
  92911b:	48 8d bc 24 a0 03 00 	lea    rdi,[rsp+0x3a0]
  929122:	00 
  929123:	e8 48 3d fd ff       	call   8fce70 <core::ptr::drop_in_place<future_backtest::DataStruct::event_slice::EventSlice>>
  929128:	48 8b 84 24 b8 01 00 	mov    rax,QWORD PTR [rsp+0x1b8]
  92912f:	00 
  929130:	48 85 c0             	test   rax,rax
  929133:	4c 8d b4 24 b0 10 00 	lea    r14,[rsp+0x10b0]
  92913a:	00 
  92913b:	4c 8b 3d b6 2d fd 00 	mov    r15,QWORD PTR [rip+0xfd2db6]        # 18fbef8 <memcpy@GLIBC_2.14>
  929142:	0f 85 ab de ff ff    	jne    926ff3 <future_backtest::RunnerCore::run_multi+0x4a23>
  929148:	48 8d 84 24 e8 05 00 	lea    rax,[rsp+0x5e8]
  92914f:	00 
  929150:	48 89 84 24 c0 01 00 	mov    QWORD PTR [rsp+0x1c0],rax
  929157:	00 
  929158:	48 8b 05 79 2d fd 00 	mov    rax,QWORD PTR [rip+0xfd2d79]        # 18fbed8 <_DYNAMIC+0x5d8>
  92915f:	48 89 84 24 c8 01 00 	mov    QWORD PTR [rsp+0x1c8],rax
  929166:	00 
  929167:	48 8d 05 72 85 f2 00 	lea    rax,[rip+0xf28572]        # 18516e0 <anon.609a31ba814f1e4156e50677fc366a7f.492.llvm.5215769359700358943+0xff0>
  92916e:	48 89 84 24 10 06 00 	mov    QWORD PTR [rsp+0x610],rax
  929175:	00 
  929176:	48 c7 84 24 18 06 00 	mov    QWORD PTR [rsp+0x618],0x2
  92917d:	00 02 00 00 00 
  929182:	48 c7 84 24 30 06 00 	mov    QWORD PTR [rsp+0x630],0x0
  929189:	00 00 00 00 00 
  92918e:	48 8d 84 24 c0 01 00 	lea    rax,[rsp+0x1c0]
  929195:	00 
  929196:	48 89 84 24 20 06 00 	mov    QWORD PTR [rsp+0x620],rax
  92919d:	00 
  92919e:	48 c7 84 24 28 06 00 	mov    QWORD PTR [rsp+0x628],0x1
  9291a5:	00 01 00 00 00 
  9291aa:	48 8d bc 24 10 06 00 	lea    rdi,[rsp+0x610]
  9291b1:	00 
  9291b2:	ff 15 a8 33 fd 00    	call   QWORD PTR [rip+0xfd33a8]        # 18fc560 <_DYNAMIC+0xc60>
  9291b8:	48 83 bc 24 a8 00 00 	cmp    QWORD PTR [rsp+0xa8],0x0
  9291bf:	00 00 
  9291c1:	0f 84 88 06 00 00    	je     92984f <future_backtest::RunnerCore::run_multi+0x727f>
  9291c7:	48 8d 05 da 88 f2 00 	lea    rax,[rip+0xf288da]        # 1851aa8 <anon.609a31ba814f1e4156e50677fc366a7f.492.llvm.5215769359700358943+0x13b8>
  9291ce:	48 89 44 24 50       	mov    QWORD PTR [rsp+0x50],rax
  9291d3:	4c 8d ac 24 e0 0e 00 	lea    r13,[rsp+0xee0]
  9291da:	00 
  9291db:	48 8d 9c 24 10 06 00 	lea    rbx,[rsp+0x610]
  9291e2:	00 
  9291e3:	45 31 e4             	xor    r12d,r12d
  9291e6:	31 ed                	xor    ebp,ebp
  9291e8:	eb 1b                	jmp    929205 <future_backtest::RunnerCore::run_multi+0x6c35>
  9291ea:	48 8b 84 24 a8 00 00 	mov    rax,QWORD PTR [rsp+0xa8]
  9291f1:	00 
  9291f2:	48 ff c5             	inc    rbp
  9291f5:	49 81 c4 28 15 00 00 	add    r12,0x1528
  9291fc:	48 39 c5             	cmp    rbp,rax
  9291ff:	0f 83 4c 06 00 00    	jae    929851 <future_backtest::RunnerCore::run_multi+0x7281>
  929205:	48 89 ac 24 f0 05 00 	mov    QWORD PTR [rsp+0x5f0],rbp
  92920c:	00 
  92920d:	48 8b 74 24 48       	mov    rsi,QWORD PTR [rsp+0x48]
  929212:	48 39 f5             	cmp    rbp,rsi
  929215:	0f 83 39 20 00 00    	jae    92b254 <future_backtest::RunnerCore::run_multi+0x8c84>
  92921b:	48 8b 74 24 40       	mov    rsi,QWORD PTR [rsp+0x40]
  929220:	4c 01 e6             	add    rsi,r12
  929223:	83 bc 24 e0 0e 00 00 	cmp    DWORD PTR [rsp+0xee0],0x2
  92922a:	02 
  92922b:	4c 89 e9             	mov    rcx,r13
  92922e:	b8 00 00 00 00       	mov    eax,0x0
  929233:	48 0f 44 c8          	cmove  rcx,rax
  929237:	48 89 df             	mov    rdi,rbx
  92923a:	48 89 ea             	mov    rdx,rbp
  92923d:	45 31 c0             	xor    r8d,r8d
  929240:	e8 cb 8e ff ff       	call   922110 <future_backtest::RunnerCore::make_ffi_ctx>
  929245:	4c 8b b4 24 10 06 00 	mov    r14,QWORD PTR [rsp+0x610]
  92924c:	00 
  92924d:	4c 8b bc 24 18 06 00 	mov    r15,QWORD PTR [rsp+0x618]
  929254:	00 
  929255:	49 83 fe 03          	cmp    r14,0x3
  929259:	0f 84 6e 0f 00 00    	je     92a1cd <future_backtest::RunnerCore::run_multi+0x7bfd>
  92925f:	ba e8 00 00 00       	mov    edx,0xe8
  929264:	48 8d bc 24 d0 01 00 	lea    rdi,[rsp+0x1d0]
  92926b:	00 
  92926c:	48 8d b4 24 20 06 00 	lea    rsi,[rsp+0x620]
  929273:	00 
  929274:	ff 15 7e 2c fd 00    	call   QWORD PTR [rip+0xfd2c7e]        # 18fbef8 <memcpy@GLIBC_2.14>
  92927a:	4c 89 b4 24 c0 01 00 	mov    QWORD PTR [rsp+0x1c0],r14
  929281:	00 
  929282:	4c 89 bc 24 c8 01 00 	mov    QWORD PTR [rsp+0x1c8],r15
  929289:	00 
  92928a:	48 8b b4 24 f8 00 00 	mov    rsi,QWORD PTR [rsp+0xf8]
  929291:	00 
  929292:	48 8b bc 24 f0 05 00 	mov    rdi,QWORD PTR [rsp+0x5f0]
  929299:	00 
  92929a:	48 39 f7             	cmp    rdi,rsi
  92929d:	0f 83 45 1f 00 00    	jae    92b1e8 <future_backtest::RunnerCore::run_multi+0x8c18>
  9292a3:	48 8b 84 24 f0 00 00 	mov    rax,QWORD PTR [rsp+0xf0]
  9292aa:	00 
  9292ab:	48 8b 04 f8          	mov    rax,QWORD PTR [rax+rdi*8]
  9292af:	48 8b 38             	mov    rdi,QWORD PTR [rax]
  9292b2:	48 8d b4 24 c0 01 00 	lea    rsi,[rsp+0x1c0]
  9292b9:	00 
  9292ba:	ff 50 20             	call   QWORD PTR [rax+0x20]
  9292bd:	89 84 24 9c 03 00 00 	mov    DWORD PTR [rsp+0x39c],eax
  9292c4:	85 c0                	test   eax,eax
  9292c6:	0f 89 8a 00 00 00    	jns    929356 <future_backtest::RunnerCore::run_multi+0x6d86>
  9292cc:	48 8d 84 24 f0 05 00 	lea    rax,[rsp+0x5f0]
  9292d3:	00 
  9292d4:	48 89 84 24 a0 03 00 	mov    QWORD PTR [rsp+0x3a0],rax
  9292db:	00 
  9292dc:	48 8b 05 f5 2b fd 00 	mov    rax,QWORD PTR [rip+0xfd2bf5]        # 18fbed8 <_DYNAMIC+0x5d8>
  9292e3:	48 89 84 24 a8 03 00 	mov    QWORD PTR [rsp+0x3a8],rax
  9292ea:	00 
  9292eb:	48 8d 84 24 9c 03 00 	lea    rax,[rsp+0x39c]
  9292f2:	00 
  9292f3:	48 89 84 24 b0 03 00 	mov    QWORD PTR [rsp+0x3b0],rax
  9292fa:	00 
  9292fb:	48 8b 05 fe 2e fd 00 	mov    rax,QWORD PTR [rip+0xfd2efe]        # 18fc200 <_DYNAMIC+0x900>
  929302:	48 89 84 24 b8 03 00 	mov    QWORD PTR [rsp+0x3b8],rax
  929309:	00 
  92930a:	48 8d 05 c7 87 f2 00 	lea    rax,[rip+0xf287c7]        # 1851ad8 <anon.609a31ba814f1e4156e50677fc366a7f.492.llvm.5215769359700358943+0x13e8>
  929311:	48 89 84 24 10 06 00 	mov    QWORD PTR [rsp+0x610],rax
  929318:	00 
  929319:	48 c7 84 24 18 06 00 	mov    QWORD PTR [rsp+0x618],0x3
  929320:	00 03 00 00 00 
  929325:	48 c7 84 24 30 06 00 	mov    QWORD PTR [rsp+0x630],0x0
  92932c:	00 00 00 00 00 
  929331:	48 8d 84 24 a0 03 00 	lea    rax,[rsp+0x3a0]
  929338:	00 
  929339:	48 89 84 24 20 06 00 	mov    QWORD PTR [rsp+0x620],rax
  929340:	00 
  929341:	48 c7 84 24 28 06 00 	mov    QWORD PTR [rsp+0x628],0x2
  929348:	00 02 00 00 00 
  92934d:	48 89 df             	mov    rdi,rbx
  929350:	ff 15 f2 2b fd 00    	call   QWORD PTR [rip+0xfd2bf2]        # 18fbf48 <_DYNAMIC+0x648>
  929356:	48 8b b4 24 90 02 00 	mov    rsi,QWORD PTR [rsp+0x290]
  92935d:	00 
  92935e:	48 85 f6             	test   rsi,rsi
  929361:	74 13                	je     929376 <future_backtest::RunnerCore::run_multi+0x6da6>
  929363:	48 8b bc 24 98 02 00 	mov    rdi,QWORD PTR [rsp+0x298]
  92936a:	00 
  92936b:	ba 01 00 00 00       	mov    edx,0x1
  929370:	ff 15 aa 27 fd 00    	call   QWORD PTR [rip+0xfd27aa]        # 18fbb20 <_DYNAMIC+0x220>
  929376:	83 bc 24 c0 01 00 00 	cmp    DWORD PTR [rsp+0x1c0],0x2
  92937d:	02 
  92937e:	0f 84 66 fe ff ff    	je     9291ea <future_backtest::RunnerCore::run_multi+0x6c1a>
  929384:	48 8b b4 24 28 02 00 	mov    rsi,QWORD PTR [rsp+0x228]
  92938b:	00 
  92938c:	48 85 f6             	test   rsi,rsi
  92938f:	74 13                	je     9293a4 <future_backtest::RunnerCore::run_multi+0x6dd4>
  929391:	48 8b bc 24 30 02 00 	mov    rdi,QWORD PTR [rsp+0x230]
  929398:	00 
  929399:	ba 01 00 00 00       	mov    edx,0x1
  92939e:	ff 15 7c 27 fd 00    	call   QWORD PTR [rip+0xfd277c]        # 18fbb20 <_DYNAMIC+0x220>
  9293a4:	48 8b 84 24 40 02 00 	mov    rax,QWORD PTR [rsp+0x240]
  9293ab:	00 
  9293ac:	f0 48 ff 08          	lock dec QWORD PTR [rax]
  9293b0:	0f 85 34 fe ff ff    	jne    9291ea <future_backtest::RunnerCore::run_multi+0x6c1a>
  9293b6:	48 8d bc 24 40 02 00 	lea    rdi,[rsp+0x240]
  9293bd:	00 
  9293be:	ff 15 9c 2d fd 00    	call   QWORD PTR [rip+0xfd2d9c]        # 18fc160 <_DYNAMIC+0x860>
  9293c4:	e9 21 fe ff ff       	jmp    9291ea <future_backtest::RunnerCore::run_multi+0x6c1a>
  9293c9:	48 8d 05 88 7b f2 00 	lea    rax,[rip+0xf27b88]        # 1850f58 <anon.609a31ba814f1e4156e50677fc366a7f.492.llvm.5215769359700358943+0x868>
  9293d0:	48 89 84 24 d0 11 00 	mov    QWORD PTR [rsp+0x11d0],rax
  9293d7:	00 
  9293d8:	48 c7 84 24 d8 11 00 	mov    QWORD PTR [rsp+0x11d8],0x1
  9293df:	00 01 00 00 00 
  9293e4:	48 c7 84 24 e0 11 00 	mov    QWORD PTR [rsp+0x11e0],0x8
  9293eb:	00 08 00 00 00 
  9293f0:	66 0f 57 c0          	xorpd  xmm0,xmm0
  9293f4:	66 0f 11 84 24 e8 11 	movupd XMMWORD PTR [rsp+0x11e8],xmm0
  9293fb:	00 00 
  9293fd:	48 8d bc 24 d0 11 00 	lea    rdi,[rsp+0x11d0]
  929404:	00 
  929405:	e8 26 b2 fd ff       	call   904630 <anyhow::__private::format_err>
  92940a:	e9 a9 0c 00 00       	jmp    92a0b8 <future_backtest::RunnerCore::run_multi+0x7ae8>
  92940f:	48 8d 05 0a 7a f2 00 	lea    rax,[rip+0xf27a0a]        # 1850e20 <anon.609a31ba814f1e4156e50677fc366a7f.492.llvm.5215769359700358943+0x730>
  929416:	48 89 84 24 d0 11 00 	mov    QWORD PTR [rsp+0x11d0],rax
  92941d:	00 
  92941e:	48 c7 84 24 d8 11 00 	mov    QWORD PTR [rsp+0x11d8],0x1
  929425:	00 01 00 00 00 
  92942a:	48 c7 84 24 e0 11 00 	mov    QWORD PTR [rsp+0x11e0],0x8
  929431:	00 08 00 00 00 
  929436:	66 0f 57 c0          	xorpd  xmm0,xmm0
  92943a:	66 0f 11 84 24 e8 11 	movupd XMMWORD PTR [rsp+0x11e8],xmm0
  929441:	00 00 
  929443:	48 8d bc 24 d0 11 00 	lea    rdi,[rsp+0x11d0]
  92944a:	00 
  92944b:	e8 e0 b1 fd ff       	call   904630 <anyhow::__private::format_err>
  929450:	e9 63 0c 00 00       	jmp    92a0b8 <future_backtest::RunnerCore::run_multi+0x7ae8>
  929455:	ff 15 ed 2b fd 00    	call   QWORD PTR [rip+0xfd2bed]        # 18fc048 <_DYNAMIC+0x748>
  92945b:	48 89 c1             	mov    rcx,rax
  92945e:	49 89 56 08          	mov    QWORD PTR [r14+0x8],rdx
  929462:	41 c6 46 10 01       	mov    BYTE PTR [r14+0x10],0x1
  929467:	48 ff c0             	inc    rax
  92946a:	49 89 06             	mov    QWORD PTR [r14],rax
  92946d:	0f 10 05 8c c5 f2 00 	movups xmm0,XMMWORD PTR [rip+0xf2c58c]        # 1855a00 <anon.306c05995557b157a5a4a5b5d20bb2f5.311.llvm.2664273085281908480+0x10>
  929474:	0f 29 84 24 70 18 00 	movaps XMMWORD PTR [rsp+0x1870],xmm0
  92947b:	00 
  92947c:	66 0f 10 05 6c c5 f2 	movupd xmm0,XMMWORD PTR [rip+0xf2c56c]        # 18559f0 <anon.306c05995557b157a5a4a5b5d20bb2f5.311.llvm.2664273085281908480>
  929483:	00 
  929484:	66 0f 29 84 24 60 18 	movapd XMMWORD PTR [rsp+0x1860],xmm0
  92948b:	00 00 
  92948d:	48 89 8c 24 80 18 00 	mov    QWORD PTR [rsp+0x1880],rcx
  929494:	00 
  929495:	48 89 94 24 88 18 00 	mov    QWORD PTR [rsp+0x1888],rdx
  92949c:	00 
  92949d:	e9 f6 98 ff ff       	jmp    922d98 <future_backtest::RunnerCore::run_multi+0x7c8>
  9294a2:	ff 15 a0 2b fd 00    	call   QWORD PTR [rip+0xfd2ba0]        # 18fc048 <_DYNAMIC+0x748>
  9294a8:	49 89 56 08          	mov    QWORD PTR [r14+0x8],rdx
  9294ac:	41 c6 46 10 01       	mov    BYTE PTR [r14+0x10],0x1
  9294b1:	e9 e2 98 ff ff       	jmp    922d98 <future_backtest::RunnerCore::run_multi+0x7c8>
  9294b6:	48 8d 3d 9b d4 f0 00 	lea    rdi,[rip+0xf0d49b]        # 1836958 <anon.d0b8e27bea7bf57269a32e15b6abf5cf.229.llvm.1643563994444475245>
  9294bd:	ff 15 ed 29 fd 00    	call   QWORD PTR [rip+0xfd29ed]        # 18fbeb0 <_DYNAMIC+0x5b0>
  9294c3:	e9 54 20 00 00       	jmp    92b51c <future_backtest::RunnerCore::run_multi+0x8f4c>
  9294c8:	48 83 bc 24 e0 00 00 	cmp    QWORD PTR [rsp+0xe0],0x0
  9294cf:	00 00 
  9294d1:	0f 84 0f 1e 00 00    	je     92b2e6 <future_backtest::RunnerCore::run_multi+0x8d16>
  9294d7:	48 8b 8c 24 d8 00 00 	mov    rcx,QWORD PTR [rsp+0xd8]
  9294de:	00 
  9294df:	48 8d 81 20 01 00 00 	lea    rax,[rcx+0x120]
  9294e6:	48 89 84 24 a0 03 00 	mov    QWORD PTR [rsp+0x3a0],rax
  9294ed:	00 
  9294ee:	48 8b 81 30 01 00 00 	mov    rax,QWORD PTR [rcx+0x130]
  9294f5:	48 85 c0             	test   rax,rax
  9294f8:	0f 84 ad 0b 00 00    	je     92a0ab <future_backtest::RunnerCore::run_multi+0x7adb>
  9294fe:	4c 8b 89 28 01 00 00 	mov    r9,QWORD PTR [rcx+0x128]
  929505:	48 83 f8 01          	cmp    rax,0x1
  929509:	0f 85 70 03 00 00    	jne    92987f <future_backtest::RunnerCore::run_multi+0x72af>
  92950f:	41 0f b6 09          	movzx  ecx,BYTE PTR [r9]
  929513:	83 f9 2b             	cmp    ecx,0x2b
  929516:	0f 84 8f 0b 00 00    	je     92a0ab <future_backtest::RunnerCore::run_multi+0x7adb>
  92951c:	83 f9 2d             	cmp    ecx,0x2d
  92951f:	0f 84 86 0b 00 00    	je     92a0ab <future_backtest::RunnerCore::run_multi+0x7adb>
  929525:	e9 59 03 00 00       	jmp    929883 <future_backtest::RunnerCore::run_multi+0x72b3>
  92952a:	48 8d 84 24 b0 10 00 	lea    rax,[rsp+0x10b0]
  929531:	00 
  929532:	48 89 84 24 a0 03 00 	mov    QWORD PTR [rsp+0x3a0],rax
  929539:	00 
  92953a:	48 8b 05 97 29 fd 00 	mov    rax,QWORD PTR [rip+0xfd2997]        # 18fbed8 <_DYNAMIC+0x5d8>
  929541:	48 89 84 24 a8 03 00 	mov    QWORD PTR [rsp+0x3a8],rax
  929548:	00 
  929549:	48 8d 84 24 88 03 00 	lea    rax,[rsp+0x388]
  929550:	00 
  929551:	48 89 84 24 b0 03 00 	mov    QWORD PTR [rsp+0x3b0],rax
  929558:	00 
  929559:	48 8b 05 a0 2c fd 00 	mov    rax,QWORD PTR [rip+0xfd2ca0]        # 18fc200 <_DYNAMIC+0x900>
  929560:	48 89 84 24 b8 03 00 	mov    QWORD PTR [rsp+0x3b8],rax
  929567:	00 
  929568:	48 8d 05 e9 85 f2 00 	lea    rax,[rip+0xf285e9]        # 1851b58 <anon.609a31ba814f1e4156e50677fc366a7f.492.llvm.5215769359700358943+0x1468>
  92956f:	48 89 84 24 10 06 00 	mov    QWORD PTR [rsp+0x610],rax
  929576:	00 
  929577:	48 c7 84 24 18 06 00 	mov    QWORD PTR [rsp+0x618],0x2
  92957e:	00 02 00 00 00 
  929583:	48 c7 84 24 30 06 00 	mov    QWORD PTR [rsp+0x630],0x0
  92958a:	00 00 00 00 00 
  92958f:	48 8d 84 24 a0 03 00 	lea    rax,[rsp+0x3a0]
  929596:	00 
  929597:	48 89 84 24 20 06 00 	mov    QWORD PTR [rsp+0x620],rax
  92959e:	00 
  92959f:	48 c7 84 24 28 06 00 	mov    QWORD PTR [rsp+0x628],0x2
  9295a6:	00 02 00 00 00 
  9295ab:	48 8d bc 24 68 1b 00 	lea    rdi,[rsp+0x1b68]
  9295b2:	00 
  9295b3:	48 8d b4 24 10 06 00 	lea    rsi,[rsp+0x610]
  9295ba:	00 
  9295bb:	ff 15 97 2a fd 00    	call   QWORD PTR [rip+0xfd2a97]        # 18fc058 <_DYNAMIC+0x758>
  9295c1:	48 8d bc 24 68 1b 00 	lea    rdi,[rsp+0x1b68]
  9295c8:	00 
  9295c9:	e8 62 4b 04 00       	call   96e130 <anyhow::error::<impl anyhow::Error>::msg>
  9295ce:	49 89 c7             	mov    r15,rax
  9295d1:	48 8d bc 24 c0 01 00 	lea    rdi,[rsp+0x1c0]
  9295d8:	00 
  9295d9:	e8 22 1c fd ff       	call   8fb200 <core::ptr::drop_in_place<future_backtest::ffi::FfiCtx>>
  9295de:	e9 0e 0c 00 00       	jmp    92a1f1 <future_backtest::RunnerCore::run_multi+0x7c21>
  9295e3:	bf 08 00 00 00       	mov    edi,0x8
  9295e8:	be b0 01 00 00       	mov    esi,0x1b0
  9295ed:	ff 15 7d 29 fd 00    	call   QWORD PTR [rip+0xfd297d]        # 18fbf70 <_DYNAMIC+0x670>
  9295f3:	e9 24 1f 00 00       	jmp    92b51c <future_backtest::RunnerCore::run_multi+0x8f4c>
  9295f8:	ff 15 4a 2a fd 00    	call   QWORD PTR [rip+0xfd2a4a]        # 18fc048 <_DYNAMIC+0x748>
  9295fe:	48 89 c1             	mov    rcx,rax
  929601:	4c 8b 64 24 68       	mov    r12,QWORD PTR [rsp+0x68]
  929606:	49 89 04 24          	mov    QWORD PTR [r12],rax
  92960a:	49 89 54 24 08       	mov    QWORD PTR [r12+0x8],rdx
  92960f:	41 c6 44 24 10 01    	mov    BYTE PTR [r12+0x10],0x1
  929615:	eb 53                	jmp    92966a <future_backtest::RunnerCore::run_multi+0x709a>
  929617:	40 b5 01             	mov    bpl,0x1
  92961a:	ff 15 28 2a fd 00    	call   QWORD PTR [rip+0xfd2a28]        # 18fc048 <_DYNAMIC+0x748>
  929620:	4c 8b 64 24 68       	mov    r12,QWORD PTR [rsp+0x68]
  929625:	49 89 54 24 08       	mov    QWORD PTR [r12+0x8],rdx
  92962a:	41 c6 44 24 10 01    	mov    BYTE PTR [r12+0x10],0x1
  929630:	48 89 c1             	mov    rcx,rax
  929633:	48 ff c1             	inc    rcx
  929636:	49 89 0c 24          	mov    QWORD PTR [r12],rcx
  92963a:	0f 10 05 0f 61 f2 00 	movups xmm0,XMMWORD PTR [rip+0xf2610f]        # 184f750 <anon.609a31ba814f1e4156e50677fc366a7f.248.llvm.5215769359700358943+0x90>
  929641:	0f 29 84 24 e0 11 00 	movaps XMMWORD PTR [rsp+0x11e0],xmm0
  929648:	00 
  929649:	f3 0f 6f 05 ef 60 f2 	movdqu xmm0,XMMWORD PTR [rip+0xf260ef]        # 184f740 <anon.609a31ba814f1e4156e50677fc366a7f.248.llvm.5215769359700358943+0x80>
  929650:	00 
  929651:	66 0f 7f 84 24 d0 11 	movdqa XMMWORD PTR [rsp+0x11d0],xmm0
  929658:	00 00 
  92965a:	48 89 84 24 f0 11 00 	mov    QWORD PTR [rsp+0x11f0],rax
  929661:	00 
  929662:	48 89 94 24 f8 11 00 	mov    QWORD PTR [rsp+0x11f8],rdx
  929669:	00 
  92966a:	40 b6 01             	mov    sil,0x1
  92966d:	e9 7c 94 ff ff       	jmp    922aee <future_backtest::RunnerCore::run_multi+0x51e>
  929672:	ff 15 d0 29 fd 00    	call   QWORD PTR [rip+0xfd29d0]        # 18fc048 <_DYNAMIC+0x748>
  929678:	4c 8b 64 24 68       	mov    r12,QWORD PTR [rsp+0x68]
  92967d:	49 89 04 24          	mov    QWORD PTR [r12],rax
  929681:	49 89 54 24 08       	mov    QWORD PTR [r12+0x8],rdx
  929686:	41 c6 44 24 10 01    	mov    BYTE PTR [r12+0x10],0x1
  92968c:	0f 10 35 ad 60 f2 00 	movups xmm6,XMMWORD PTR [rip+0xf260ad]        # 184f740 <anon.609a31ba814f1e4156e50677fc366a7f.248.llvm.5215769359700358943+0x80>
  929693:	0f 10 3d b6 60 f2 00 	movups xmm7,XMMWORD PTR [rip+0xf260b6]        # 184f750 <anon.609a31ba814f1e4156e50677fc366a7f.248.llvm.5215769359700358943+0x90>
  92969a:	e9 d2 94 ff ff       	jmp    922b71 <future_backtest::RunnerCore::run_multi+0x5a1>
  92969f:	bf 08 00 00 00       	mov    edi,0x8
  9296a4:	be a8 00 00 00       	mov    esi,0xa8
  9296a9:	ff 15 c1 28 fd 00    	call   QWORD PTR [rip+0xfd28c1]        # 18fbf70 <_DYNAMIC+0x670>
  9296af:	e9 68 1e 00 00       	jmp    92b51c <future_backtest::RunnerCore::run_multi+0x8f4c>
  9296b4:	0f 10 84 24 e0 11 00 	movups xmm0,XMMWORD PTR [rsp+0x11e0]
  9296bb:	00 
  9296bc:	0f 11 84 24 20 06 00 	movups XMMWORD PTR [rsp+0x620],xmm0
  9296c3:	00 
  9296c4:	48 89 8c 24 10 06 00 	mov    QWORD PTR [rsp+0x610],rcx
  9296cb:	00 
  9296cc:	48 89 84 24 18 06 00 	mov    QWORD PTR [rsp+0x618],rax
  9296d3:	00 
  9296d4:	b0 01                	mov    al,0x1
  9296d6:	89 44 24 68          	mov    DWORD PTR [rsp+0x68],eax
  9296da:	48 8d bc 24 10 06 00 	lea    rdi,[rsp+0x610]
  9296e1:	00 
  9296e2:	e8 f9 5b 04 00       	call   96f2e0 <anyhow::error::<impl core::convert::From<E> for anyhow::Error>::from>
  9296e7:	49 89 c7             	mov    r15,rax
  9296ea:	e9 0f 0b 00 00       	jmp    92a1fe <future_backtest::RunnerCore::run_multi+0x7c2e>
  9296ef:	66 0f 10 84 24 e0 11 	movupd xmm0,XMMWORD PTR [rsp+0x11e0]
  9296f6:	00 00 
  9296f8:	66 0f 11 84 24 20 06 	movupd XMMWORD PTR [rsp+0x620],xmm0
  9296ff:	00 00 
  929701:	48 89 8c 24 10 06 00 	mov    QWORD PTR [rsp+0x610],rcx
  929708:	00 
  929709:	48 89 84 24 18 06 00 	mov    QWORD PTR [rsp+0x618],rax
  929710:	00 
  929711:	48 8d bc 24 10 06 00 	lea    rdi,[rsp+0x610]
  929718:	00 
  929719:	e8 c2 5b 04 00       	call   96f2e0 <anyhow::error::<impl core::convert::From<E> for anyhow::Error>::from>
  92971e:	49 89 c7             	mov    r15,rax
  929721:	b0 01                	mov    al,0x1
  929723:	89 44 24 68          	mov    DWORD PTR [rsp+0x68],eax
  929727:	48 8d bc 24 b0 10 00 	lea    rdi,[rsp+0x10b0]
  92972e:	00 
  92972f:	ff 15 eb 3a fd 00    	call   QWORD PTR [rip+0xfd3aeb]        # 18fd220 <_DYNAMIC+0x1920>
  929735:	e9 c4 0a 00 00       	jmp    92a1fe <future_backtest::RunnerCore::run_multi+0x7c2e>
  92973a:	48 89 fb             	mov    rbx,rdi
  92973d:	48 89 b4 24 f8 05 00 	mov    QWORD PTR [rsp+0x5f8],rsi
  929744:	00 
  929745:	4c 89 84 24 e8 02 00 	mov    QWORD PTR [rsp+0x2e8],r8
  92974c:	00 
  92974d:	66 0f 13 a4 24 e8 00 	movlpd QWORD PTR [rsp+0xe8],xmm4
  929754:	00 00 
  929756:	66 0f 17 a4 24 00 03 	movhpd QWORD PTR [rsp+0x300],xmm4
  92975d:	00 00 
  92975f:	48 8d 84 24 f8 05 00 	lea    rax,[rsp+0x5f8]
  929766:	00 
  929767:	48 89 84 24 d0 11 00 	mov    QWORD PTR [rsp+0x11d0],rax
  92976e:	00 
  92976f:	48 8b 0d 62 27 fd 00 	mov    rcx,QWORD PTR [rip+0xfd2762]        # 18fbed8 <_DYNAMIC+0x5d8>
  929776:	48 89 8c 24 d8 11 00 	mov    QWORD PTR [rsp+0x11d8],rcx
  92977d:	00 
  92977e:	48 8d 84 24 e8 02 00 	lea    rax,[rsp+0x2e8]
  929785:	00 
  929786:	48 89 84 24 e0 11 00 	mov    QWORD PTR [rsp+0x11e0],rax
  92978d:	00 
  92978e:	48 89 8c 24 e8 11 00 	mov    QWORD PTR [rsp+0x11e8],rcx
  929795:	00 
  929796:	48 8d 84 24 e8 00 00 	lea    rax,[rsp+0xe8]
  92979d:	00 
  92979e:	48 89 84 24 f0 11 00 	mov    QWORD PTR [rsp+0x11f0],rax
  9297a5:	00 
  9297a6:	48 8b 05 13 2b fd 00 	mov    rax,QWORD PTR [rip+0xfd2b13]        # 18fc2c0 <_DYNAMIC+0x9c0>
  9297ad:	48 89 84 24 f8 11 00 	mov    QWORD PTR [rsp+0x11f8],rax
  9297b4:	00 
  9297b5:	48 8d 8c 24 00 03 00 	lea    rcx,[rsp+0x300]
  9297bc:	00 
  9297bd:	48 89 8c 24 00 12 00 	mov    QWORD PTR [rsp+0x1200],rcx
  9297c4:	00 
  9297c5:	48 89 84 24 08 12 00 	mov    QWORD PTR [rsp+0x1208],rax
  9297cc:	00 
  9297cd:	48 8d 05 dc 77 f2 00 	lea    rax,[rip+0xf277dc]        # 1850fb0 <anon.609a31ba814f1e4156e50677fc366a7f.492.llvm.5215769359700358943+0x8c0>
  9297d4:	48 89 84 24 80 1b 00 	mov    QWORD PTR [rsp+0x1b80],rax
  9297db:	00 
  9297dc:	48 c7 84 24 88 1b 00 	mov    QWORD PTR [rsp+0x1b88],0x5
  9297e3:	00 05 00 00 00 
  9297e8:	48 c7 84 24 a0 1b 00 	mov    QWORD PTR [rsp+0x1ba0],0x0
  9297ef:	00 00 00 00 00 
  9297f4:	4c 89 bc 24 90 1b 00 	mov    QWORD PTR [rsp+0x1b90],r15
  9297fb:	00 
  9297fc:	48 c7 84 24 98 1b 00 	mov    QWORD PTR [rsp+0x1b98],0x4
  929803:	00 04 00 00 00 
  929808:	48 8d bc 24 a0 03 00 	lea    rdi,[rsp+0x3a0]
  92980f:	00 
  929810:	48 8d b4 24 80 1b 00 	lea    rsi,[rsp+0x1b80]
  929817:	00 
  929818:	ff 15 3a 28 fd 00    	call   QWORD PTR [rip+0xfd283a]        # 18fc058 <_DYNAMIC+0x758>
  92981e:	48 8d bc 24 a0 03 00 	lea    rdi,[rsp+0x3a0]
  929825:	00 
  929826:	e8 05 49 04 00       	call   96e130 <anyhow::error::<impl anyhow::Error>::msg>
  92982b:	e9 20 08 00 00       	jmp    92a050 <future_backtest::RunnerCore::run_multi+0x7a80>
  929830:	ff 15 12 28 fd 00    	call   QWORD PTR [rip+0xfd2812]        # 18fc048 <_DYNAMIC+0x748>
  929836:	4c 8b 64 24 68       	mov    r12,QWORD PTR [rsp+0x68]
  92983b:	49 89 04 24          	mov    QWORD PTR [r12],rax
  92983f:	49 89 54 24 08       	mov    QWORD PTR [r12+0x8],rdx
  929844:	41 c6 44 24 10 01    	mov    BYTE PTR [r12+0x10],0x1
  92984a:	e9 d0 a2 ff ff       	jmp    923b1f <future_backtest::RunnerCore::run_multi+0x154f>
  92984f:	31 c0                	xor    eax,eax
  929851:	48 8b 4c 24 48       	mov    rcx,QWORD PTR [rsp+0x48]
  929856:	48 85 c9             	test   rcx,rcx
  929859:	0f 84 3e 0a 00 00    	je     92a29d <future_backtest::RunnerCore::run_multi+0x7ccd>
  92985f:	48 8b 54 24 40       	mov    rdx,QWORD PTR [rsp+0x40]
  929864:	48 69 c1 28 15 00 00 	imul   rax,rcx,0x1528
  92986b:	48 01 d0             	add    rax,rdx
  92986e:	48 89 84 24 28 01 00 	mov    QWORD PTR [rsp+0x128],rax
  929875:	00 
  929876:	48 8d 82 28 15 00 00 	lea    rax,[rdx+0x1528]
  92987d:	eb 5c                	jmp    9298db <future_backtest::RunnerCore::run_multi+0x730b>
  92987f:	41 0f b6 09          	movzx  ecx,BYTE PTR [r9]
  929883:	80 f9 2d             	cmp    cl,0x2d
  929886:	0f 84 ad 04 00 00    	je     929d39 <future_backtest::RunnerCore::run_multi+0x7769>
  92988c:	0f b6 c9             	movzx  ecx,cl
  92988f:	83 f9 2b             	cmp    ecx,0x2b
  929892:	0f 85 dc 04 00 00    	jne    929d74 <future_backtest::RunnerCore::run_multi+0x77a4>
  929898:	49 8d 51 01          	lea    rdx,[r9+0x1]
  92989c:	48 8d 48 ff          	lea    rcx,[rax-0x1]
  9298a0:	48 83 f8 09          	cmp    rax,0x9
  9298a4:	0f 83 ce 05 00 00    	jae    929e78 <future_backtest::RunnerCore::run_multi+0x78a8>
  9298aa:	48 85 c9             	test   rcx,rcx
  9298ad:	0f 85 d1 04 00 00    	jne    929d84 <future_backtest::RunnerCore::run_multi+0x77b4>
  9298b3:	31 db                	xor    ebx,ebx
  9298b5:	e9 ee 04 00 00       	jmp    929da8 <future_backtest::RunnerCore::run_multi+0x77d8>
  9298ba:	48 8b 94 24 d0 04 00 	mov    rdx,QWORD PTR [rsp+0x4d0]
  9298c1:	00 
  9298c2:	48 8d 82 28 15 00 00 	lea    rax,[rdx+0x1528]
  9298c9:	48 3b 94 24 28 01 00 	cmp    rdx,QWORD PTR [rsp+0x128]
  9298d0:	00 
  9298d1:	48 0f 44 c2          	cmove  rax,rdx
  9298d5:	0f 84 ba 09 00 00    	je     92a295 <future_backtest::RunnerCore::run_multi+0x7cc5>
  9298db:	49 89 d4             	mov    r12,rdx
  9298de:	48 89 c2             	mov    rdx,rax
  9298e1:	f2 41 0f 10 84 24 f0 	movsd  xmm0,QWORD PTR [r12+0x5f0]
  9298e8:	05 00 00 
  9298eb:	66 0f 2e 05 7d c5 92 	ucomisd xmm0,QWORD PTR [rip+0xffffffffff92c57d]        # 255e70 <anon.23a7bc9302e079b368ad5af617974320.173.llvm.9485200918992093105>
  9298f2:	ff 
  9298f3:	72 cd                	jb     9298c2 <future_backtest::RunnerCore::run_multi+0x72f2>
  9298f5:	f2 0f 10 0d f3 c3 92 	movsd  xmm1,QWORD PTR [rip+0xffffffffff92c3f3]        # 255cf0 <anon.baa4d3160c6db26b1acb0467a3a6e91d.598.llvm.14045134056871974489+0x50>
  9298fc:	ff 
  9298fd:	66 0f 2e c8          	ucomisd xmm1,xmm0
  929901:	76 bf                	jbe    9298c2 <future_backtest::RunnerCore::run_multi+0x72f2>
  929903:	48 89 94 24 d0 04 00 	mov    QWORD PTR [rsp+0x4d0],rdx
  92990a:	00 
  92990b:	49 8b 84 24 68 07 00 	mov    rax,QWORD PTR [r12+0x768]
  929912:	00 
  929913:	49 8b 8c 24 70 07 00 	mov    rcx,QWORD PTR [r12+0x770]
  92991a:	00 
  92991b:	48 01 c1             	add    rcx,rax
  92991e:	48 ff c1             	inc    rcx
  929921:	66 0f 6f 00          	movdqa xmm0,XMMWORD PTR [rax]
  929925:	66 0f d7 d0          	pmovmskb edx,xmm0
  929929:	f7 d2                	not    edx
  92992b:	49 8b b4 24 80 07 00 	mov    rsi,QWORD PTR [r12+0x780]
  929932:	00 
  929933:	48 89 84 24 10 06 00 	mov    QWORD PTR [rsp+0x610],rax
  92993a:	00 
  92993b:	48 83 c0 10          	add    rax,0x10
  92993f:	48 89 84 24 18 06 00 	mov    QWORD PTR [rsp+0x618],rax
  929946:	00 
  929947:	48 89 8c 24 20 06 00 	mov    QWORD PTR [rsp+0x620],rcx
  92994e:	00 
  92994f:	66 89 94 24 28 06 00 	mov    WORD PTR [rsp+0x628],dx
  929956:	00 
  929957:	48 89 b4 24 30 06 00 	mov    QWORD PTR [rsp+0x630],rsi
  92995e:	00 
  92995f:	48 8d bc 24 a0 03 00 	lea    rdi,[rsp+0x3a0]
  929966:	00 
  929967:	48 8d b4 24 10 06 00 	lea    rsi,[rsp+0x610]
  92996e:	00 
  92996f:	48 8d 15 72 50 f2 00 	lea    rdx,[rip+0xf25072]        # 184e9e8 <anon.609a31ba814f1e4156e50677fc366a7f.99.llvm.5215769359700358943>
  929976:	e8 85 09 fb ff       	call   8da300 <<alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter>
  92997b:	48 8b bc 24 a8 03 00 	mov    rdi,QWORD PTR [rsp+0x3a8]
  929982:	00 
  929983:	48 8b 9c 24 b0 03 00 	mov    rbx,QWORD PTR [rsp+0x3b0]
  92998a:	00 
  92998b:	48 89 bc 24 c0 00 00 	mov    QWORD PTR [rsp+0xc0],rdi
  929992:	00 
  929993:	48 89 de             	mov    rsi,rbx
  929996:	e8 75 76 fd ff       	call   901010 <alloc::slice::stable_sort>
  92999b:	48 8b 84 24 a0 03 00 	mov    rax,QWORD PTR [rsp+0x3a0]
  9299a2:	00 
  9299a3:	48 89 84 24 a0 00 00 	mov    QWORD PTR [rsp+0xa0],rax
  9299aa:	00 
  9299ab:	48 85 db             	test   rbx,rbx
  9299ae:	0f 84 ba 02 00 00    	je     929c6e <future_backtest::RunnerCore::run_multi+0x769e>
  9299b4:	48 8b 84 24 c0 00 00 	mov    rax,QWORD PTR [rsp+0xc0]
  9299bb:	00 
  9299bc:	48 8d 0c d8          	lea    rcx,[rax+rbx*8]
  9299c0:	48 89 8c 24 20 01 00 	mov    QWORD PTR [rsp+0x120],rcx
  9299c7:	00 
  9299c8:	49 8d 8c 24 e0 12 00 	lea    rcx,[r12+0x12e0]
  9299cf:	00 
  9299d0:	48 89 8c 24 00 01 00 	mov    QWORD PTR [rsp+0x100],rcx
  9299d7:	00 
  9299d8:	49 8d 8c 24 88 07 00 	lea    rcx,[r12+0x788]
  9299df:	00 
  9299e0:	48 89 8c 24 b8 00 00 	mov    QWORD PTR [rsp+0xb8],rcx
  9299e7:	00 
  9299e8:	4c 8b 38             	mov    r15,QWORD PTR [rax]
  9299eb:	4c 89 bc 24 58 0e 00 	mov    QWORD PTR [rsp+0xe58],r15
  9299f2:	00 
  9299f3:	49 83 bc 24 80 07 00 	cmp    QWORD PTR [r12+0x780],0x0
  9299fa:	00 00 
  9299fc:	0f 84 9f 02 00 00    	je     929ca1 <future_backtest::RunnerCore::run_multi+0x76d1>
  929a02:	48 89 c5             	mov    rbp,rax
  929a05:	48 8b bc 24 b8 00 00 	mov    rdi,QWORD PTR [rsp+0xb8]
  929a0c:	00 
  929a0d:	4c 89 fe             	mov    rsi,r15
  929a10:	e8 cb 16 e3 ff       	call   75b0e0 <core::hash::BuildHasher::hash_one>
  929a15:	48 89 c3             	mov    rbx,rax
  929a18:	48 83 c5 08          	add    rbp,0x8
  929a1c:	48 c1 e8 39          	shr    rax,0x39
  929a20:	4d 8b b4 24 68 07 00 	mov    r14,QWORD PTR [r12+0x768]
  929a27:	00 
  929a28:	49 8b 8c 24 70 07 00 	mov    rcx,QWORD PTR [r12+0x770]
  929a2f:	00 
  929a30:	66 0f 6e c0          	movd   xmm0,eax
  929a34:	66 0f 60 c0          	punpcklbw xmm0,xmm0
  929a38:	f2 0f 70 c0 00       	pshuflw xmm0,xmm0,0x0
  929a3d:	66 0f 70 c8 00       	pshufd xmm1,xmm0,0x0
  929a42:	49 8d 86 70 fd ff ff 	lea    rax,[r14-0x290]
  929a49:	48 89 44 24 50       	mov    QWORD PTR [rsp+0x50],rax
  929a4e:	49 8b 47 08          	mov    rax,QWORD PTR [r15+0x8]
  929a52:	48 89 44 24 60       	mov    QWORD PTR [rsp+0x60],rax
  929a57:	49 8b 47 10          	mov    rax,QWORD PTR [r15+0x10]
  929a5b:	48 89 44 24 70       	mov    QWORD PTR [rsp+0x70],rax
  929a60:	48 c7 84 24 08 01 00 	mov    QWORD PTR [rsp+0x108],0x0
  929a67:	00 00 00 00 00 
  929a6c:	48 89 8c 24 90 00 00 	mov    QWORD PTR [rsp+0x90],rcx
  929a73:	00 
  929a74:	66 0f 7f 8c 24 30 01 	movdqa XMMWORD PTR [rsp+0x130],xmm1
  929a7b:	00 00 
  929a7d:	48 21 cb             	and    rbx,rcx
  929a80:	f3 41 0f 6f 04 1e    	movdqu xmm0,XMMWORD PTR [r14+rbx*1]
  929a86:	66 0f 7f 84 24 10 01 	movdqa XMMWORD PTR [rsp+0x110],xmm0
  929a8d:	00 00 
  929a8f:	66 0f 74 c1          	pcmpeqb xmm0,xmm1
  929a93:	66 44 0f d7 e8       	pmovmskb r13d,xmm0
  929a98:	45 85 ed             	test   r13d,r13d
  929a9b:	74 58                	je     929af5 <future_backtest::RunnerCore::run_multi+0x7525>
  929a9d:	f3 41 0f bc c5       	tzcnt  eax,r13d
  929aa2:	48 01 d8             	add    rax,rbx
  929aa5:	48 23 84 24 90 00 00 	and    rax,QWORD PTR [rsp+0x90]
  929aac:	00 
  929aad:	48 f7 d8             	neg    rax
  929ab0:	4c 69 f8 90 02 00 00 	imul   r15,rax,0x290
  929ab7:	48 8b 44 24 50       	mov    rax,QWORD PTR [rsp+0x50]
  929abc:	48 8b 4c 24 70       	mov    rcx,QWORD PTR [rsp+0x70]
  929ac1:	4a 3b 4c 38 10       	cmp    rcx,QWORD PTR [rax+r15*1+0x10]
  929ac6:	75 20                	jne    929ae8 <future_backtest::RunnerCore::run_multi+0x7518>
  929ac8:	48 8b 44 24 50       	mov    rax,QWORD PTR [rsp+0x50]
  929acd:	4c 01 f8             	add    rax,r15
  929ad0:	48 8b 70 08          	mov    rsi,QWORD PTR [rax+0x8]
  929ad4:	48 8b 7c 24 60       	mov    rdi,QWORD PTR [rsp+0x60]
  929ad9:	48 8b 54 24 70       	mov    rdx,QWORD PTR [rsp+0x70]
  929ade:	ff 15 1c 24 fd 00    	call   QWORD PTR [rip+0xfd241c]        # 18fbf00 <bcmp@GLIBC_2.2.5>
  929ae4:	85 c0                	test   eax,eax
  929ae6:	74 5b                	je     929b43 <future_backtest::RunnerCore::run_multi+0x7573>
  929ae8:	41 8d 45 ff          	lea    eax,[r13-0x1]
  929aec:	66 44 21 e8          	and    ax,r13w
  929af0:	41 89 c5             	mov    r13d,eax
  929af3:	75 a8                	jne    929a9d <future_backtest::RunnerCore::run_multi+0x74cd>
  929af5:	66 0f 6f 84 24 10 01 	movdqa xmm0,XMMWORD PTR [rsp+0x110]
  929afc:	00 00 
  929afe:	66 0f 74 05 fa 5d 92 	pcmpeqb xmm0,XMMWORD PTR [rip+0xffffffffff925dfa]        # 24f900 <anon.23a7bc9302e079b368ad5af617974320.28.llvm.9485200918992093105>
  929b05:	ff 
  929b06:	66 0f d7 c0          	pmovmskb eax,xmm0
  929b0a:	85 c0                	test   eax,eax
  929b0c:	0f 85 8f 01 00 00    	jne    929ca1 <future_backtest::RunnerCore::run_multi+0x76d1>
  929b12:	48 8b 84 24 08 01 00 	mov    rax,QWORD PTR [rsp+0x108]
  929b19:	00 
  929b1a:	48 01 c3             	add    rbx,rax
  929b1d:	48 83 c3 10          	add    rbx,0x10
  929b21:	48 83 c0 10          	add    rax,0x10
  929b25:	48 89 84 24 08 01 00 	mov    QWORD PTR [rsp+0x108],rax
  929b2c:	00 
  929b2d:	48 8b 8c 24 90 00 00 	mov    rcx,QWORD PTR [rsp+0x90]
  929b34:	00 
  929b35:	66 0f 6f 8c 24 30 01 	movdqa xmm1,XMMWORD PTR [rsp+0x130]
  929b3c:	00 00 
  929b3e:	e9 3a ff ff ff       	jmp    929a7d <future_backtest::RunnerCore::run_multi+0x74ad>
  929b43:	4b 8d 04 3e          	lea    rax,[r14+r15*1]
  929b47:	4b 83 7c 3e b8 00    	cmp    QWORD PTR [r14+r15*1-0x48],0x0
  929b4d:	7f 22                	jg     929b71 <future_backtest::RunnerCore::run_multi+0x75a1>
  929b4f:	f2 0f 10 40 c0       	movsd  xmm0,QWORD PTR [rax-0x40]
  929b54:	66 0f 2e 05 14 c3 92 	ucomisd xmm0,QWORD PTR [rip+0xffffffffff92c314]        # 255e70 <anon.23a7bc9302e079b368ad5af617974320.173.llvm.9485200918992093105>
  929b5b:	ff 
  929b5c:	77 13                	ja     929b71 <future_backtest::RunnerCore::run_multi+0x75a1>
  929b5e:	f2 0f 10 40 b0       	movsd  xmm0,QWORD PTR [rax-0x50]
  929b63:	66 0f 2e 05 05 c3 92 	ucomisd xmm0,QWORD PTR [rip+0xffffffffff92c305]        # 255e70 <anon.23a7bc9302e079b368ad5af617974320.173.llvm.9485200918992093105>
  929b6a:	ff 
  929b6b:	0f 86 ec 00 00 00    	jbe    929c5d <future_backtest::RunnerCore::run_multi+0x768d>
  929b71:	4b 8d 0c 3e          	lea    rcx,[r14+r15*1]
  929b75:	48 83 c1 b8          	add    rcx,0xffffffffffffffb8
  929b79:	48 8d 50 b0          	lea    rdx,[rax-0x50]
  929b7d:	48 83 c0 c0          	add    rax,0xffffffffffffffc0
  929b81:	48 8b b4 24 00 01 00 	mov    rsi,QWORD PTR [rsp+0x100]
  929b88:	00 
  929b89:	48 89 b4 24 10 06 00 	mov    QWORD PTR [rsp+0x610],rsi
  929b90:	00 
  929b91:	48 8d 35 c8 7e fd ff 	lea    rsi,[rip+0xfffffffffffd7ec8]        # 901a60 <<alloc::string::String as core::fmt::Display>::fmt>
  929b98:	48 89 b4 24 18 06 00 	mov    QWORD PTR [rsp+0x618],rsi
  929b9f:	00 
  929ba0:	48 8d b4 24 58 0e 00 	lea    rsi,[rsp+0xe58]
  929ba7:	00 
  929ba8:	48 89 b4 24 20 06 00 	mov    QWORD PTR [rsp+0x620],rsi
  929baf:	00 
  929bb0:	48 8d 35 b9 2a f2 ff 	lea    rsi,[rip+0xfffffffffff22ab9]        # 84c670 <<&T as core::fmt::Display>::fmt>
  929bb7:	48 89 b4 24 28 06 00 	mov    QWORD PTR [rsp+0x628],rsi
  929bbe:	00 
  929bbf:	48 89 94 24 30 06 00 	mov    QWORD PTR [rsp+0x630],rdx
  929bc6:	00 
  929bc7:	48 8b 15 f2 26 fd 00 	mov    rdx,QWORD PTR [rip+0xfd26f2]        # 18fc2c0 <_DYNAMIC+0x9c0>
  929bce:	48 89 94 24 38 06 00 	mov    QWORD PTR [rsp+0x638],rdx
  929bd5:	00 
  929bd6:	48 89 8c 24 40 06 00 	mov    QWORD PTR [rsp+0x640],rcx
  929bdd:	00 
  929bde:	48 8b 0d eb 24 fd 00 	mov    rcx,QWORD PTR [rip+0xfd24eb]        # 18fc0d0 <_DYNAMIC+0x7d0>
  929be5:	48 89 8c 24 48 06 00 	mov    QWORD PTR [rsp+0x648],rcx
  929bec:	00 
  929bed:	48 89 84 24 50 06 00 	mov    QWORD PTR [rsp+0x650],rax
  929bf4:	00 
  929bf5:	48 89 94 24 58 06 00 	mov    QWORD PTR [rsp+0x658],rdx
  929bfc:	00 
  929bfd:	48 8d 05 44 7e f2 00 	lea    rax,[rip+0xf27e44]        # 1851a48 <anon.609a31ba814f1e4156e50677fc366a7f.492.llvm.5215769359700358943+0x1358>
  929c04:	48 89 84 24 c0 01 00 	mov    QWORD PTR [rsp+0x1c0],rax
  929c0b:	00 
  929c0c:	48 c7 84 24 c8 01 00 	mov    QWORD PTR [rsp+0x1c8],0x6
  929c13:	00 06 00 00 00 
  929c18:	48 8d 05 21 44 95 ff 	lea    rax,[rip+0xffffffffff954421]        # 27e040 <anon.609a31ba814f1e4156e50677fc366a7f.490.llvm.5215769359700358943+0x21e2>
  929c1f:	48 89 84 24 e0 01 00 	mov    QWORD PTR [rsp+0x1e0],rax
  929c26:	00 
  929c27:	48 c7 84 24 e8 01 00 	mov    QWORD PTR [rsp+0x1e8],0x5
  929c2e:	00 05 00 00 00 
  929c33:	48 8d 84 24 10 06 00 	lea    rax,[rsp+0x610]
  929c3a:	00 
  929c3b:	48 89 84 24 d0 01 00 	mov    QWORD PTR [rsp+0x1d0],rax
  929c42:	00 
  929c43:	48 c7 84 24 d8 01 00 	mov    QWORD PTR [rsp+0x1d8],0x5
  929c4a:	00 05 00 00 00 
  929c4f:	48 8d bc 24 c0 01 00 	lea    rdi,[rsp+0x1c0]
  929c56:	00 
  929c57:	ff 15 03 29 fd 00    	call   QWORD PTR [rip+0xfd2903]        # 18fc560 <_DYNAMIC+0xc60>
  929c5d:	48 89 e8             	mov    rax,rbp
  929c60:	48 3b ac 24 20 01 00 	cmp    rbp,QWORD PTR [rsp+0x120]
  929c67:	00 
  929c68:	0f 85 7a fd ff ff    	jne    9299e8 <future_backtest::RunnerCore::run_multi+0x7418>
  929c6e:	48 83 bc 24 a0 00 00 	cmp    QWORD PTR [rsp+0xa0],0x0
  929c75:	00 00 
  929c77:	0f 84 3d fc ff ff    	je     9298ba <future_backtest::RunnerCore::run_multi+0x72ea>
  929c7d:	48 8b b4 24 a0 00 00 	mov    rsi,QWORD PTR [rsp+0xa0]
  929c84:	00 
  929c85:	48 c1 e6 03          	shl    rsi,0x3
  929c89:	ba 08 00 00 00       	mov    edx,0x8
  929c8e:	48 8b bc 24 c0 00 00 	mov    rdi,QWORD PTR [rsp+0xc0]
  929c95:	00 
  929c96:	ff 15 84 1e fd 00    	call   QWORD PTR [rip+0xfd1e84]        # 18fbb20 <_DYNAMIC+0x220>
  929c9c:	e9 19 fc ff ff       	jmp    9298ba <future_backtest::RunnerCore::run_multi+0x72ea>
  929ca1:	48 8d 3d 4e 43 95 ff 	lea    rdi,[rip+0xffffffffff95434e]        # 27dff6 <anon.609a31ba814f1e4156e50677fc366a7f.490.llvm.5215769359700358943+0x2198>
  929ca8:	48 8d 15 81 7d f2 00 	lea    rdx,[rip+0xf27d81]        # 1851a30 <anon.609a31ba814f1e4156e50677fc366a7f.492.llvm.5215769359700358943+0x1340>
  929caf:	be 16 00 00 00       	mov    esi,0x16
  929cb4:	ff 15 b6 23 fd 00    	call   QWORD PTR [rip+0xfd23b6]        # 18fc070 <_DYNAMIC+0x770>
  929cba:	e9 5d 18 00 00       	jmp    92b51c <future_backtest::RunnerCore::run_multi+0x8f4c>
  929cbf:	c6 45 00 00          	mov    BYTE PTR [rbp+0x0],0x0
  929cc3:	48 83 7c 24 60 00    	cmp    QWORD PTR [rsp+0x60],0x0
  929cc9:	74 13                	je     929cde <future_backtest::RunnerCore::run_multi+0x770e>
  929ccb:	ba 01 00 00 00       	mov    edx,0x1
  929cd0:	48 89 ef             	mov    rdi,rbp
  929cd3:	48 8b 74 24 60       	mov    rsi,QWORD PTR [rsp+0x60]
  929cd8:	ff 15 42 1e fd 00    	call   QWORD PTR [rip+0xfd1e42]        # 18fbb20 <_DYNAMIC+0x220>
  929cde:	48 8b 44 24 50       	mov    rax,QWORD PTR [rsp+0x50]
  929ce3:	c6 00 00             	mov    BYTE PTR [rax],0x0
  929ce6:	48 83 bc 24 90 00 00 	cmp    QWORD PTR [rsp+0x90],0x0
  929ced:	00 00 
  929cef:	74 18                	je     929d09 <future_backtest::RunnerCore::run_multi+0x7739>
  929cf1:	ba 01 00 00 00       	mov    edx,0x1
  929cf6:	48 8b 7c 24 50       	mov    rdi,QWORD PTR [rsp+0x50]
  929cfb:	48 8b b4 24 90 00 00 	mov    rsi,QWORD PTR [rsp+0x90]
  929d02:	00 
  929d03:	ff 15 17 1e fd 00    	call   QWORD PTR [rip+0xfd1e17]        # 18fbb20 <_DYNAMIC+0x220>
  929d09:	c6 03 00             	mov    BYTE PTR [rbx],0x0
  929d0c:	48 83 7c 24 70 00    	cmp    QWORD PTR [rsp+0x70],0x0
  929d12:	74 13                	je     929d27 <future_backtest::RunnerCore::run_multi+0x7757>
  929d14:	ba 01 00 00 00       	mov    edx,0x1
  929d19:	48 89 df             	mov    rdi,rbx
  929d1c:	48 8b 74 24 70       	mov    rsi,QWORD PTR [rsp+0x70]
  929d21:	ff 15 f9 1d fd 00    	call   QWORD PTR [rip+0xfd1df9]        # 18fbb20 <_DYNAMIC+0x220>
  929d27:	48 8d bc 24 70 01 00 	lea    rdi,[rsp+0x170]
  929d2e:	00 
  929d2f:	e8 5c 56 fd ff       	call   8ff390 <core::ptr::drop_in_place<alloc::vec::Vec<future_backtest::Order::trade_order::TradingOrder>>>
  929d34:	e9 67 04 00 00       	jmp    92a1a0 <future_backtest::RunnerCore::run_multi+0x7bd0>
  929d39:	48 83 f8 09          	cmp    rax,0x9
  929d3d:	0f 83 38 03 00 00    	jae    92a07b <future_backtest::RunnerCore::run_multi+0x7aab>
  929d43:	48 89 c1             	mov    rcx,rax
  929d46:	31 db                	xor    ebx,ebx
  929d48:	48 ff c9             	dec    rcx
  929d4b:	74 5b                	je     929da8 <future_backtest::RunnerCore::run_multi+0x77d8>
  929d4d:	b9 01 00 00 00       	mov    ecx,0x1
  929d52:	41 0f b6 14 09       	movzx  edx,BYTE PTR [r9+rcx*1]
  929d57:	83 c2 d0             	add    edx,0xffffffd0
  929d5a:	83 fa 09             	cmp    edx,0x9
  929d5d:	0f 87 48 03 00 00    	ja     92a0ab <future_backtest::RunnerCore::run_multi+0x7adb>
  929d63:	01 db                	add    ebx,ebx
  929d65:	8d 1c 9b             	lea    ebx,[rbx+rbx*4]
  929d68:	29 d3                	sub    ebx,edx
  929d6a:	48 ff c1             	inc    rcx
  929d6d:	48 39 c8             	cmp    rax,rcx
  929d70:	75 e0                	jne    929d52 <future_backtest::RunnerCore::run_multi+0x7782>
  929d72:	eb 34                	jmp    929da8 <future_backtest::RunnerCore::run_multi+0x77d8>
  929d74:	48 89 c1             	mov    rcx,rax
  929d77:	4c 89 ca             	mov    rdx,r9
  929d7a:	48 83 f8 07          	cmp    rax,0x7
  929d7e:	0f 87 f4 00 00 00    	ja     929e78 <future_backtest::RunnerCore::run_multi+0x78a8>
  929d84:	31 f6                	xor    esi,esi
  929d86:	31 db                	xor    ebx,ebx
  929d88:	0f b6 3c 32          	movzx  edi,BYTE PTR [rdx+rsi*1]
  929d8c:	83 c7 d0             	add    edi,0xffffffd0
  929d8f:	83 ff 09             	cmp    edi,0x9
  929d92:	0f 87 13 03 00 00    	ja     92a0ab <future_backtest::RunnerCore::run_multi+0x7adb>
  929d98:	44 8d 04 9b          	lea    r8d,[rbx+rbx*4]
  929d9c:	42 8d 1c 47          	lea    ebx,[rdi+r8*2]
  929da0:	48 ff c6             	inc    rsi
  929da3:	48 39 f1             	cmp    rcx,rsi
  929da6:	75 e0                	jne    929d88 <future_backtest::RunnerCore::run_multi+0x77b8>
  929da8:	48 8b b4 24 18 06 00 	mov    rsi,QWORD PTR [rsp+0x618]
  929daf:	00 
  929db0:	48 8b 94 24 20 06 00 	mov    rdx,QWORD PTR [rsp+0x620]
  929db7:	00 
  929db8:	48 89 04 24          	mov    QWORD PTR [rsp],rax
  929dbc:	48 8d 0d a5 b8 94 ff 	lea    rcx,[rip+0xffffffffff94b8a5]        # 275668 <anon.fe1b35fd190af3ec62b163d2072132da.124.llvm.6880758764856161>
  929dc3:	48 8d bc 24 60 18 00 	lea    rdi,[rsp+0x1860]
  929dca:	00 
  929dcb:	41 b8 06 00 00 00    	mov    r8d,0x6
  929dd1:	e8 8a ef ef ff       	call   828d60 <_ZN5alloc3str21_$LT$impl$u20$str$GT$7replace17h91d4bb4a02b9746dE.llvm.6880758764856161>
  929dd6:	4c 8b b4 24 68 18 00 	mov    r14,QWORD PTR [rsp+0x1868]
  929ddd:	00 
  929dde:	4c 8b bc 24 70 18 00 	mov    r15,QWORD PTR [rsp+0x1870]
  929de5:	00 
  929de6:	0f b6 ac 24 69 06 00 	movzx  ebp,BYTE PTR [rsp+0x669]
  929ded:	00 
  929dee:	48 8d bc 24 e0 0e 00 	lea    rdi,[rsp+0xee0]
  929df5:	00 
  929df6:	4c 8d a4 24 10 06 00 	lea    r12,[rsp+0x610]
  929dfd:	00 
  929dfe:	4c 89 e6             	mov    rsi,r12
  929e01:	ff 15 89 2d fd 00    	call   QWORD PTR [rip+0xfd2d89]        # 18fcb90 <_DYNAMIC+0x1290>
  929e07:	4c 89 24 24          	mov    QWORD PTR [rsp],r12
  929e0b:	40 0f b6 cd          	movzx  ecx,bpl
  929e0f:	48 8d bc 24 d0 11 00 	lea    rdi,[rsp+0x11d0]
  929e16:	00 
  929e17:	4c 8d 8c 24 e0 0e 00 	lea    r9,[rsp+0xee0]
  929e1e:	00 
  929e1f:	4c 89 f6             	mov    rsi,r14
  929e22:	4c 89 fa             	mov    rdx,r15
  929e25:	41 89 d8             	mov    r8d,ebx
  929e28:	ff 15 aa 36 fd 00    	call   QWORD PTR [rip+0xfd36aa]        # 18fd4d8 <_DYNAMIC+0x1bd8>
  929e2e:	4c 8b a4 24 d0 11 00 	mov    r12,QWORD PTR [rsp+0x11d0]
  929e35:	00 
  929e36:	4c 8b bc 24 d8 11 00 	mov    r15,QWORD PTR [rsp+0x11d8]
  929e3d:	00 
  929e3e:	48 b8 00 00 00 00 00 	movabs rax,0x8000000000000000
  929e45:	00 00 80 
  929e48:	49 39 c4             	cmp    r12,rax
  929e4b:	75 79                	jne    929ec6 <future_backtest::RunnerCore::run_multi+0x78f6>
  929e4d:	48 8d bc 24 e0 0e 00 	lea    rdi,[rsp+0xee0]
  929e54:	00 
  929e55:	e8 46 30 d5 ff       	call   67cea0 <<alloc::collections::btree::map::BTreeMap<K,V,A> as core::ops::drop::Drop>::drop>
  929e5a:	48 8b b4 24 60 18 00 	mov    rsi,QWORD PTR [rsp+0x1860]
  929e61:	00 
  929e62:	48 85 f6             	test   rsi,rsi
  929e65:	0f 84 37 bf ff ff    	je     925da2 <future_backtest::RunnerCore::run_multi+0x37d2>
  929e6b:	ba 01 00 00 00       	mov    edx,0x1
  929e70:	4c 89 f7             	mov    rdi,r14
  929e73:	e9 24 bf ff ff       	jmp    925d9c <future_backtest::RunnerCore::run_multi+0x37cc>
  929e78:	31 f6                	xor    esi,esi
  929e7a:	31 db                	xor    ebx,ebx
  929e7c:	48 39 f1             	cmp    rcx,rsi
  929e7f:	0f 84 23 ff ff ff    	je     929da8 <future_backtest::RunnerCore::run_multi+0x77d8>
  929e85:	6b db 0a             	imul   ebx,ebx,0xa
  929e88:	41 0f 90 c0          	seto   r8b
  929e8c:	0f b6 3c 32          	movzx  edi,BYTE PTR [rdx+rsi*1]
  929e90:	83 c7 d0             	add    edi,0xffffffd0
  929e93:	83 ff 09             	cmp    edi,0x9
  929e96:	0f 87 0f 02 00 00    	ja     92a0ab <future_backtest::RunnerCore::run_multi+0x7adb>
  929e9c:	45 84 c0             	test   r8b,r8b
  929e9f:	0f 85 06 02 00 00    	jne    92a0ab <future_backtest::RunnerCore::run_multi+0x7adb>
  929ea5:	48 ff c6             	inc    rsi
  929ea8:	01 fb                	add    ebx,edi
  929eaa:	71 d0                	jno    929e7c <future_backtest::RunnerCore::run_multi+0x78ac>
  929eac:	e9 fa 01 00 00       	jmp    92a0ab <future_backtest::RunnerCore::run_multi+0x7adb>
  929eb1:	bf 08 00 00 00       	mov    edi,0x8
  929eb6:	be 18 00 00 00       	mov    esi,0x18
  929ebb:	ff 15 af 20 fd 00    	call   QWORD PTR [rip+0xfd20af]        # 18fbf70 <_DYNAMIC+0x670>
  929ec1:	e9 56 16 00 00       	jmp    92b51c <future_backtest::RunnerCore::run_multi+0x8f4c>
  929ec6:	66 0f 10 84 24 e0 11 	movupd xmm0,XMMWORD PTR [rsp+0x11e0]
  929ecd:	00 00 
  929ecf:	66 0f 11 84 24 90 1b 	movupd XMMWORD PTR [rsp+0x1b90],xmm0
  929ed6:	00 00 
  929ed8:	4c 89 a4 24 80 1b 00 	mov    QWORD PTR [rsp+0x1b80],r12
  929edf:	00 
  929ee0:	4c 89 bc 24 88 1b 00 	mov    QWORD PTR [rsp+0x1b88],r15
  929ee7:	00 
  929ee8:	48 8d 9c 24 e0 0e 00 	lea    rbx,[rsp+0xee0]
  929eef:	00 
  929ef0:	48 89 df             	mov    rdi,rbx
  929ef3:	e8 a8 2f d5 ff       	call   67cea0 <<alloc::collections::btree::map::BTreeMap<K,V,A> as core::ops::drop::Drop>::drop>
  929ef8:	4c 8b ac 24 98 1b 00 	mov    r13,QWORD PTR [rsp+0x1b98]
  929eff:	00 
  929f00:	4c 89 ac 24 c0 01 00 	mov    QWORD PTR [rsp+0x1c0],r13
  929f07:	00 
  929f08:	48 8d 84 24 c0 01 00 	lea    rax,[rsp+0x1c0]
  929f0f:	00 
  929f10:	48 89 84 24 e0 0e 00 	mov    QWORD PTR [rsp+0xee0],rax
  929f17:	00 
  929f18:	48 8b 05 b9 1f fd 00 	mov    rax,QWORD PTR [rip+0xfd1fb9]        # 18fbed8 <_DYNAMIC+0x5d8>
  929f1f:	48 89 84 24 e8 0e 00 	mov    QWORD PTR [rsp+0xee8],rax
  929f26:	00 
  929f27:	48 8d 05 72 71 f2 00 	lea    rax,[rip+0xf27172]        # 18510a0 <anon.609a31ba814f1e4156e50677fc366a7f.492.llvm.5215769359700358943+0x9b0>
  929f2e:	48 89 84 24 d0 11 00 	mov    QWORD PTR [rsp+0x11d0],rax
  929f35:	00 
  929f36:	48 c7 84 24 d8 11 00 	mov    QWORD PTR [rsp+0x11d8],0x2
  929f3d:	00 02 00 00 00 
  929f42:	48 c7 84 24 f0 11 00 	mov    QWORD PTR [rsp+0x11f0],0x0
  929f49:	00 00 00 00 00 
  929f4e:	48 89 9c 24 e0 11 00 	mov    QWORD PTR [rsp+0x11e0],rbx
  929f55:	00 
  929f56:	48 c7 84 24 e8 11 00 	mov    QWORD PTR [rsp+0x11e8],0x1
  929f5d:	00 01 00 00 00 
  929f62:	48 8d bc 24 d0 11 00 	lea    rdi,[rsp+0x11d0]
  929f69:	00 
  929f6a:	ff 15 f0 25 fd 00    	call   QWORD PTR [rip+0xfd25f0]        # 18fc560 <_DYNAMIC+0xc60>
  929f70:	48 8b 9c 24 90 1b 00 	mov    rbx,QWORD PTR [rsp+0x1b90]
  929f77:	00 
  929f78:	48 8b b4 24 60 18 00 	mov    rsi,QWORD PTR [rsp+0x1860]
  929f7f:	00 
  929f80:	48 85 f6             	test   rsi,rsi
  929f83:	0f 84 45 cf ff ff    	je     926ece <future_backtest::RunnerCore::run_multi+0x48fe>
  929f89:	ba 01 00 00 00       	mov    edx,0x1
  929f8e:	4c 89 f7             	mov    rdi,r14
  929f91:	ff 15 89 1b fd 00    	call   QWORD PTR [rip+0xfd1b89]        # 18fbb20 <_DYNAMIC+0x220>
  929f97:	e9 32 cf ff ff       	jmp    926ece <future_backtest::RunnerCore::run_multi+0x48fe>
  929f9c:	48 89 fb             	mov    rbx,rdi
  929f9f:	48 8d 44 24 38       	lea    rax,[rsp+0x38]
  929fa4:	48 89 84 24 d0 11 00 	mov    QWORD PTR [rsp+0x11d0],rax
  929fab:	00 
  929fac:	48 8b 05 25 1f fd 00 	mov    rax,QWORD PTR [rip+0xfd1f25]        # 18fbed8 <_DYNAMIC+0x5d8>
  929fb3:	48 89 84 24 d8 11 00 	mov    QWORD PTR [rsp+0x11d8],rax
  929fba:	00 
  929fbb:	48 8d 84 24 40 0e 00 	lea    rax,[rsp+0xe40]
  929fc2:	00 
  929fc3:	48 89 84 24 e0 11 00 	mov    QWORD PTR [rsp+0x11e0],rax
  929fca:	00 
  929fcb:	48 8b 05 ee 22 fd 00 	mov    rax,QWORD PTR [rip+0xfd22ee]        # 18fc2c0 <_DYNAMIC+0x9c0>
  929fd2:	48 89 84 24 e8 11 00 	mov    QWORD PTR [rsp+0x11e8],rax
  929fd9:	00 
  929fda:	48 8d 8c 24 a8 01 00 	lea    rcx,[rsp+0x1a8]
  929fe1:	00 
  929fe2:	48 89 8c 24 f0 11 00 	mov    QWORD PTR [rsp+0x11f0],rcx
  929fe9:	00 
  929fea:	48 89 84 24 f8 11 00 	mov    QWORD PTR [rsp+0x11f8],rax
  929ff1:	00 
  929ff2:	48 8d 05 07 70 f2 00 	lea    rax,[rip+0xf27007]        # 1851000 <anon.609a31ba814f1e4156e50677fc366a7f.492.llvm.5215769359700358943+0x910>
  929ff9:	48 89 84 24 80 1b 00 	mov    QWORD PTR [rsp+0x1b80],rax
  92a000:	00 
  92a001:	48 c7 84 24 88 1b 00 	mov    QWORD PTR [rsp+0x1b88],0x4
  92a008:	00 04 00 00 00 
  92a00d:	48 c7 84 24 a0 1b 00 	mov    QWORD PTR [rsp+0x1ba0],0x0
  92a014:	00 00 00 00 00 
  92a019:	4c 89 bc 24 90 1b 00 	mov    QWORD PTR [rsp+0x1b90],r15
  92a020:	00 
  92a021:	48 c7 84 24 98 1b 00 	mov    QWORD PTR [rsp+0x1b98],0x3
  92a028:	00 03 00 00 00 
  92a02d:	48 8d bc 24 b0 10 00 	lea    rdi,[rsp+0x10b0]
  92a034:	00 
  92a035:	48 8d b4 24 80 1b 00 	lea    rsi,[rsp+0x1b80]
  92a03c:	00 
  92a03d:	ff 15 15 20 fd 00    	call   QWORD PTR [rip+0xfd2015]        # 18fc058 <_DYNAMIC+0x758>
  92a043:	48 8d bc 24 b0 10 00 	lea    rdi,[rsp+0x10b0]
  92a04a:	00 
  92a04b:	e8 e0 40 04 00       	call   96e130 <anyhow::error::<impl anyhow::Error>::msg>
  92a050:	49 89 c7             	mov    r15,rax
  92a053:	48 8b b4 24 00 05 00 	mov    rsi,QWORD PTR [rsp+0x500]
  92a05a:	00 
  92a05b:	48 85 f6             	test   rsi,rsi
  92a05e:	0f 84 cf bc ff ff    	je     925d33 <future_backtest::RunnerCore::run_multi+0x3763>
  92a064:	48 c1 e6 04          	shl    rsi,0x4
  92a068:	ba 08 00 00 00       	mov    edx,0x8
  92a06d:	48 89 df             	mov    rdi,rbx
  92a070:	ff 15 aa 1a fd 00    	call   QWORD PTR [rip+0xfd1aaa]        # 18fbb20 <_DYNAMIC+0x220>
  92a076:	e9 b8 bc ff ff       	jmp    925d33 <future_backtest::RunnerCore::run_multi+0x3763>
  92a07b:	31 db                	xor    ebx,ebx
  92a07d:	b9 01 00 00 00       	mov    ecx,0x1
  92a082:	48 39 c8             	cmp    rax,rcx
  92a085:	0f 84 1d fd ff ff    	je     929da8 <future_backtest::RunnerCore::run_multi+0x77d8>
  92a08b:	6b db 0a             	imul   ebx,ebx,0xa
  92a08e:	40 0f 90 c6          	seto   sil
  92a092:	41 0f b6 14 09       	movzx  edx,BYTE PTR [r9+rcx*1]
  92a097:	83 c2 d0             	add    edx,0xffffffd0
  92a09a:	83 fa 09             	cmp    edx,0x9
  92a09d:	77 0c                	ja     92a0ab <future_backtest::RunnerCore::run_multi+0x7adb>
  92a09f:	40 84 f6             	test   sil,sil
  92a0a2:	75 07                	jne    92a0ab <future_backtest::RunnerCore::run_multi+0x7adb>
  92a0a4:	48 ff c1             	inc    rcx
  92a0a7:	29 d3                	sub    ebx,edx
  92a0a9:	71 d7                	jno    92a082 <future_backtest::RunnerCore::run_multi+0x7ab2>
  92a0ab:	48 8d bc 24 a0 03 00 	lea    rdi,[rsp+0x3a0]
  92a0b2:	00 
  92a0b3:	e8 38 29 00 00       	call   92c9f0 <future_backtest::RunnerCore::run_multi::{{closure}}>
  92a0b8:	49 89 c7             	mov    r15,rax
  92a0bb:	e9 e2 bc ff ff       	jmp    925da2 <future_backtest::RunnerCore::run_multi+0x37d2>
  92a0c0:	48 8d 05 91 70 f2 00 	lea    rax,[rip+0xf27091]        # 1851158 <anon.609a31ba814f1e4156e50677fc366a7f.492.llvm.5215769359700358943+0xa68>
  92a0c7:	48 89 84 24 10 06 00 	mov    QWORD PTR [rsp+0x610],rax
  92a0ce:	00 
  92a0cf:	48 c7 84 24 18 06 00 	mov    QWORD PTR [rsp+0x618],0x1
  92a0d6:	00 01 00 00 00 
  92a0db:	48 c7 84 24 20 06 00 	mov    QWORD PTR [rsp+0x620],0x8
  92a0e2:	00 08 00 00 00 
  92a0e7:	66 0f ef c0          	pxor   xmm0,xmm0
  92a0eb:	f3 0f 7f 84 24 28 06 	movdqu XMMWORD PTR [rsp+0x628],xmm0
  92a0f2:	00 00 
  92a0f4:	40 b5 01             	mov    bpl,0x1
  92a0f7:	48 8d bc 24 10 06 00 	lea    rdi,[rsp+0x610]
  92a0fe:	00 
  92a0ff:	e8 2c a5 fd ff       	call   904630 <anyhow::__private::format_err>
  92a104:	49 89 c7             	mov    r15,rax
  92a107:	40 b5 01             	mov    bpl,0x1
  92a10a:	e9 39 ba ff ff       	jmp    925b48 <future_backtest::RunnerCore::run_multi+0x3578>
  92a10f:	c6 45 00 00          	mov    BYTE PTR [rbp+0x0],0x0
  92a113:	48 83 7c 24 60 00    	cmp    QWORD PTR [rsp+0x60],0x0
  92a119:	74 13                	je     92a12e <future_backtest::RunnerCore::run_multi+0x7b5e>
  92a11b:	ba 01 00 00 00       	mov    edx,0x1
  92a120:	48 89 ef             	mov    rdi,rbp
  92a123:	48 8b 74 24 60       	mov    rsi,QWORD PTR [rsp+0x60]
  92a128:	ff 15 f2 19 fd 00    	call   QWORD PTR [rip+0xfd19f2]        # 18fbb20 <_DYNAMIC+0x220>
  92a12e:	c6 03 00             	mov    BYTE PTR [rbx],0x0
  92a131:	48 83 bc 24 90 00 00 	cmp    QWORD PTR [rsp+0x90],0x0
  92a138:	00 00 
  92a13a:	74 16                	je     92a152 <future_backtest::RunnerCore::run_multi+0x7b82>
  92a13c:	ba 01 00 00 00       	mov    edx,0x1
  92a141:	48 89 df             	mov    rdi,rbx
  92a144:	48 8b b4 24 90 00 00 	mov    rsi,QWORD PTR [rsp+0x90]
  92a14b:	00 
  92a14c:	ff 15 ce 19 fd 00    	call   QWORD PTR [rip+0xfd19ce]        # 18fbb20 <_DYNAMIC+0x220>
  92a152:	48 8b 44 24 70       	mov    rax,QWORD PTR [rsp+0x70]
  92a157:	c6 00 00             	mov    BYTE PTR [rax],0x0
  92a15a:	48 83 7c 24 50 00    	cmp    QWORD PTR [rsp+0x50],0x0
  92a160:	74 15                	je     92a177 <future_backtest::RunnerCore::run_multi+0x7ba7>
  92a162:	ba 01 00 00 00       	mov    edx,0x1
  92a167:	48 8b 7c 24 70       	mov    rdi,QWORD PTR [rsp+0x70]
  92a16c:	48 8b 74 24 50       	mov    rsi,QWORD PTR [rsp+0x50]
  92a171:	ff 15 a9 19 fd 00    	call   QWORD PTR [rip+0xfd19a9]        # 18fbb20 <_DYNAMIC+0x220>
  92a177:	48 8d bc 24 70 01 00 	lea    rdi,[rsp+0x170]
  92a17e:	00 
  92a17f:	e8 0c 52 fd ff       	call   8ff390 <core::ptr::drop_in_place<alloc::vec::Vec<future_backtest::Order::trade_order::TradingOrder>>>
  92a184:	eb 1a                	jmp    92a1a0 <future_backtest::RunnerCore::run_multi+0x7bd0>
  92a186:	48 8d bc 24 40 01 00 	lea    rdi,[rsp+0x140]
  92a18d:	00 
  92a18e:	e8 6d 96 07 00       	call   9a3800 <<hashbrown::raw::RawTable<T,A> as core::ops::drop::Drop>::drop>
  92a193:	48 8d bc 24 70 01 00 	lea    rdi,[rsp+0x170]
  92a19a:	00 
  92a19b:	e8 80 a3 07 00       	call   9a4520 <<hashbrown::raw::RawTable<T,A> as core::ops::drop::Drop>::drop>
  92a1a0:	48 8b b4 24 70 03 00 	mov    rsi,QWORD PTR [rsp+0x370]
  92a1a7:	00 
  92a1a8:	48 85 f6             	test   rsi,rsi
  92a1ab:	74 13                	je     92a1c0 <future_backtest::RunnerCore::run_multi+0x7bf0>
  92a1ad:	48 8b bc 24 78 03 00 	mov    rdi,QWORD PTR [rsp+0x378]
  92a1b4:	00 
  92a1b5:	ba 01 00 00 00       	mov    edx,0x1
  92a1ba:	ff 15 60 19 fd 00    	call   QWORD PTR [rip+0xfd1960]        # 18fbb20 <_DYNAMIC+0x220>
  92a1c0:	48 8d bc 24 a0 03 00 	lea    rdi,[rsp+0x3a0]
  92a1c7:	00 
  92a1c8:	e8 a3 2c fd ff       	call   8fce70 <core::ptr::drop_in_place<future_backtest::DataStruct::event_slice::EventSlice>>
  92a1cd:	48 8b b4 24 00 03 00 	mov    rsi,QWORD PTR [rsp+0x300]
  92a1d4:	00 
  92a1d5:	48 85 f6             	test   rsi,rsi
  92a1d8:	74 17                	je     92a1f1 <future_backtest::RunnerCore::run_multi+0x7c21>
  92a1da:	48 8b bc 24 08 03 00 	mov    rdi,QWORD PTR [rsp+0x308]
  92a1e1:	00 
  92a1e2:	48 c1 e6 03          	shl    rsi,0x3
  92a1e6:	ba 08 00 00 00       	mov    edx,0x8
  92a1eb:	ff 15 2f 19 fd 00    	call   QWORD PTR [rip+0xfd192f]        # 18fbb20 <_DYNAMIC+0x220>
  92a1f1:	48 8d bc 24 d0 11 00 	lea    rdi,[rsp+0x11d0]
  92a1f8:	00 
  92a1f9:	e8 82 33 fd ff       	call   8fd580 <core::ptr::drop_in_place<future_backtest::Customer::customer_params::StrategyParams>>
  92a1fe:	48 8b b4 24 e8 00 00 	mov    rsi,QWORD PTR [rsp+0xe8]
  92a205:	00 
  92a206:	48 85 f6             	test   rsi,rsi
  92a209:	74 17                	je     92a222 <future_backtest::RunnerCore::run_multi+0x7c52>
  92a20b:	48 8b bc 24 f0 00 00 	mov    rdi,QWORD PTR [rsp+0xf0]
  92a212:	00 
  92a213:	48 c1 e6 03          	shl    rsi,0x3
  92a217:	ba 08 00 00 00       	mov    edx,0x8
  92a21c:	ff 15 fe 18 fd 00    	call   QWORD PTR [rip+0xfd18fe]        # 18fbb20 <_DYNAMIC+0x220>
  92a222:	48 8b 9c 24 f0 02 00 	mov    rbx,QWORD PTR [rsp+0x2f0]
  92a229:	00 
  92a22a:	4c 8b ac 24 f8 02 00 	mov    r13,QWORD PTR [rsp+0x2f8]
  92a231:	00 
  92a232:	49 ff c5             	inc    r13
  92a235:	48 8b 2d e4 2f fd 00 	mov    rbp,QWORD PTR [rip+0xfd2fe4]        # 18fd220 <_DYNAMIC+0x1920>
  92a23c:	48 89 df             	mov    rdi,rbx
  92a23f:	49 83 fd 01          	cmp    r13,0x1
  92a243:	74 0e                	je     92a253 <future_backtest::RunnerCore::run_multi+0x7c83>
  92a245:	4c 8d 77 08          	lea    r14,[rdi+0x8]
  92a249:	49 ff cd             	dec    r13
  92a24c:	ff d5                	call   rbp
  92a24e:	4c 89 f7             	mov    rdi,r14
  92a251:	eb ec                	jmp    92a23f <future_backtest::RunnerCore::run_multi+0x7c6f>
  92a253:	48 8b b4 24 e8 02 00 	mov    rsi,QWORD PTR [rsp+0x2e8]
  92a25a:	00 
  92a25b:	48 85 f6             	test   rsi,rsi
  92a25e:	74 12                	je     92a272 <future_backtest::RunnerCore::run_multi+0x7ca2>
  92a260:	48 c1 e6 03          	shl    rsi,0x3
  92a264:	ba 08 00 00 00       	mov    edx,0x8
  92a269:	48 89 df             	mov    rdi,rbx
  92a26c:	ff 15 ae 18 fd 00    	call   QWORD PTR [rip+0xfd18ae]        # 18fbb20 <_DYNAMIC+0x220>
  92a272:	48 8d bc 24 80 1b 00 	lea    rdi,[rsp+0x1b80]
  92a279:	00 
  92a27a:	e8 01 33 fd ff       	call   8fd580 <core::ptr::drop_in_place<future_backtest::Customer::customer_params::StrategyParams>>
  92a27f:	48 8d bc 24 e0 0e 00 	lea    rdi,[rsp+0xee0]
  92a286:	00 
  92a287:	8b 6c 24 20          	mov    ebp,DWORD PTR [rsp+0x20]
  92a28b:	e8 50 4c fd ff       	call   8feee0 <core::ptr::drop_in_place<core::option::Option<future_backtest::RunnerCore::MetaRunState>>>
  92a290:	e9 bd b7 ff ff       	jmp    925a52 <future_backtest::RunnerCore::run_multi+0x3482>
  92a295:	48 8b 84 24 a8 00 00 	mov    rax,QWORD PTR [rsp+0xa8]
  92a29c:	00 
  92a29d:	48 85 c0             	test   rax,rax
  92a2a0:	74 76                	je     92a318 <future_backtest::RunnerCore::run_multi+0x7d48>
  92a2a2:	31 ed                	xor    ebp,ebp
  92a2a4:	48 8d 05 55 77 f2 00 	lea    rax,[rip+0xf27755]        # 1851a00 <anon.609a31ba814f1e4156e50677fc366a7f.492.llvm.5215769359700358943+0x1310>
  92a2ab:	48 89 44 24 50       	mov    QWORD PTR [rsp+0x50],rax
  92a2b0:	48 8d 1d 61 77 f2 00 	lea    rbx,[rip+0xf27761]        # 1851a18 <anon.609a31ba814f1e4156e50677fc366a7f.492.llvm.5215769359700358943+0x1328>
  92a2b7:	4c 8b 35 62 18 fd 00 	mov    r14,QWORD PTR [rip+0xfd1862]        # 18fbb20 <_DYNAMIC+0x220>
  92a2be:	48 8b b4 24 f8 00 00 	mov    rsi,QWORD PTR [rsp+0xf8]
  92a2c5:	00 
  92a2c6:	48 39 f5             	cmp    rbp,rsi
  92a2c9:	0f 83 85 0f 00 00    	jae    92b254 <future_backtest::RunnerCore::run_multi+0x8c84>
  92a2cf:	48 8b 84 24 f0 00 00 	mov    rax,QWORD PTR [rsp+0xf0]
  92a2d6:	00 
  92a2d7:	48 8b 04 e8          	mov    rax,QWORD PTR [rax+rbp*8]
  92a2db:	48 8b 38             	mov    rdi,QWORD PTR [rax]
  92a2de:	ff 50 30             	call   QWORD PTR [rax+0x30]
  92a2e1:	48 8b b4 24 f8 00 00 	mov    rsi,QWORD PTR [rsp+0xf8]
  92a2e8:	00 
  92a2e9:	48 39 f5             	cmp    rbp,rsi
  92a2ec:	0f 83 5d 0f 00 00    	jae    92b24f <future_backtest::RunnerCore::run_multi+0x8c7f>
  92a2f2:	48 8b 84 24 f0 00 00 	mov    rax,QWORD PTR [rsp+0xf0]
  92a2f9:	00 
  92a2fa:	48 8b 3c e8          	mov    rdi,QWORD PTR [rax+rbp*8]
  92a2fe:	be 38 00 00 00       	mov    esi,0x38
  92a303:	ba 08 00 00 00       	mov    edx,0x8
  92a308:	41 ff d6             	call   r14
  92a30b:	48 ff c5             	inc    rbp
  92a30e:	48 3b ac 24 a8 00 00 	cmp    rbp,QWORD PTR [rsp+0xa8]
  92a315:	00 
  92a316:	72 a6                	jb     92a2be <future_backtest::RunnerCore::run_multi+0x7cee>
  92a318:	48 c7 84 24 00 05 00 	mov    QWORD PTR [rsp+0x500],0x0
  92a31f:	00 00 00 00 00 
  92a324:	48 c7 84 24 08 05 00 	mov    QWORD PTR [rsp+0x508],0x8
  92a32b:	00 08 00 00 00 
  92a330:	48 c7 84 24 10 05 00 	mov    QWORD PTR [rsp+0x510],0x0
  92a337:	00 00 00 00 00 
  92a33c:	48 8b 44 24 48       	mov    rax,QWORD PTR [rsp+0x48]
  92a341:	48 85 c0             	test   rax,rax
  92a344:	0f 84 48 09 00 00    	je     92ac92 <future_backtest::RunnerCore::run_multi+0x86c2>
  92a34a:	4c 8b 7c 24 40       	mov    r15,QWORD PTR [rsp+0x40]
  92a34f:	48 69 c0 28 15 00 00 	imul   rax,rax,0x1528
  92a356:	4c 01 f8             	add    rax,r15
  92a359:	48 89 44 24 50       	mov    QWORD PTR [rsp+0x50],rax
  92a35e:	45 31 f6             	xor    r14d,r14d
  92a361:	eb 15                	jmp    92a378 <future_backtest::RunnerCore::run_multi+0x7da8>
  92a363:	49 81 c7 28 15 00 00 	add    r15,0x1528
  92a36a:	49 ff c6             	inc    r14
  92a36d:	4c 3b 7c 24 50       	cmp    r15,QWORD PTR [rsp+0x50]
  92a372:	0f 84 44 01 00 00    	je     92a4bc <future_backtest::RunnerCore::run_multi+0x7eec>
  92a378:	49 8d b7 70 0c 00 00 	lea    rsi,[r15+0xc70]
  92a37f:	48 8d bc 24 c0 01 00 	lea    rdi,[rsp+0x1c0]
  92a386:	00 
  92a387:	48 8d 15 2a 76 f2 00 	lea    rdx,[rip+0xf2762a]        # 18519b8 <anon.609a31ba814f1e4156e50677fc366a7f.492.llvm.5215769359700358943+0x12c8>
  92a38e:	ff 15 a4 1c fd 00    	call   QWORD PTR [rip+0xfd1ca4]        # 18fc038 <_DYNAMIC+0x738>
  92a394:	48 8b 84 24 10 05 00 	mov    rax,QWORD PTR [rsp+0x510]
  92a39b:	00 
  92a39c:	48 8b ac 24 c8 01 00 	mov    rbp,QWORD PTR [rsp+0x1c8]
  92a3a3:	00 
  92a3a4:	4c 8b ac 24 d0 01 00 	mov    r13,QWORD PTR [rsp+0x1d0]
  92a3ab:	00 
  92a3ac:	48 85 c0             	test   rax,rax
  92a3af:	0f 84 8b 00 00 00    	je     92a440 <future_backtest::RunnerCore::run_multi+0x7e70>
  92a3b5:	48 8b 9c 24 08 05 00 	mov    rbx,QWORD PTR [rsp+0x508]
  92a3bc:	00 
  92a3bd:	48 83 c3 18          	add    rbx,0x18
  92a3c1:	48 c1 e0 04          	shl    rax,0x4
  92a3c5:	4c 8d 24 40          	lea    r12,[rax+rax*2]
  92a3c9:	eb 0a                	jmp    92a3d5 <future_backtest::RunnerCore::run_multi+0x7e05>
  92a3cb:	48 83 c3 30          	add    rbx,0x30
  92a3cf:	49 83 c4 d0          	add    r12,0xffffffffffffffd0
  92a3d3:	74 6b                	je     92a440 <future_backtest::RunnerCore::run_multi+0x7e70>
  92a3d5:	4c 39 6b f8          	cmp    QWORD PTR [rbx-0x8],r13
  92a3d9:	75 f0                	jne    92a3cb <future_backtest::RunnerCore::run_multi+0x7dfb>
  92a3db:	48 8b 7b f0          	mov    rdi,QWORD PTR [rbx-0x10]
  92a3df:	48 89 ee             	mov    rsi,rbp
  92a3e2:	4c 89 ea             	mov    rdx,r13
  92a3e5:	ff 15 15 1b fd 00    	call   QWORD PTR [rip+0xfd1b15]        # 18fbf00 <bcmp@GLIBC_2.2.5>
  92a3eb:	85 c0                	test   eax,eax
  92a3ed:	75 dc                	jne    92a3cb <future_backtest::RunnerCore::run_multi+0x7dfb>
  92a3ef:	4c 8b 63 10          	mov    r12,QWORD PTR [rbx+0x10]
  92a3f3:	4c 3b 23             	cmp    r12,QWORD PTR [rbx]
  92a3f6:	75 10                	jne    92a408 <future_backtest::RunnerCore::run_multi+0x7e38>
  92a3f8:	48 89 df             	mov    rdi,rbx
  92a3fb:	48 8d 35 ce 75 f2 00 	lea    rsi,[rip+0xf275ce]        # 18519d0 <anon.609a31ba814f1e4156e50677fc366a7f.492.llvm.5215769359700358943+0x12e0>
  92a402:	ff 15 d8 30 fd 00    	call   QWORD PTR [rip+0xfd30d8]        # 18fd4e0 <_DYNAMIC+0x1be0>
  92a408:	48 8b 43 08          	mov    rax,QWORD PTR [rbx+0x8]
  92a40c:	4e 89 34 e0          	mov    QWORD PTR [rax+r12*8],r14
  92a410:	49 ff c4             	inc    r12
  92a413:	4c 89 63 10          	mov    QWORD PTR [rbx+0x10],r12
  92a417:	48 8b b4 24 c0 01 00 	mov    rsi,QWORD PTR [rsp+0x1c0]
  92a41e:	00 
  92a41f:	48 85 f6             	test   rsi,rsi
  92a422:	0f 84 3b ff ff ff    	je     92a363 <future_backtest::RunnerCore::run_multi+0x7d93>
  92a428:	48 8b bc 24 c8 01 00 	mov    rdi,QWORD PTR [rsp+0x1c8]
  92a42f:	00 
  92a430:	ba 01 00 00 00       	mov    edx,0x1
  92a435:	ff 15 e5 16 fd 00    	call   QWORD PTR [rip+0xfd16e5]        # 18fbb20 <_DYNAMIC+0x220>
  92a43b:	e9 23 ff ff ff       	jmp    92a363 <future_backtest::RunnerCore::run_multi+0x7d93>
  92a440:	48 8b 9c 24 c0 01 00 	mov    rbx,QWORD PTR [rsp+0x1c0]
  92a447:	00 
  92a448:	ff 15 f2 16 fd 00    	call   QWORD PTR [rip+0xfd16f2]        # 18fbb40 <_DYNAMIC+0x240>
  92a44e:	bf 08 00 00 00       	mov    edi,0x8
  92a453:	be 08 00 00 00       	mov    esi,0x8
  92a458:	ff 15 ba 16 fd 00    	call   QWORD PTR [rip+0xfd16ba]        # 18fbb18 <_DYNAMIC+0x218>
  92a45e:	48 85 c0             	test   rax,rax
  92a461:	0f 84 68 0c 00 00    	je     92b0cf <future_backtest::RunnerCore::run_multi+0x8aff>
  92a467:	4c 89 30             	mov    QWORD PTR [rax],r14
  92a46a:	48 89 9c 24 10 06 00 	mov    QWORD PTR [rsp+0x610],rbx
  92a471:	00 
  92a472:	48 89 ac 24 18 06 00 	mov    QWORD PTR [rsp+0x618],rbp
  92a479:	00 
  92a47a:	4c 89 ac 24 20 06 00 	mov    QWORD PTR [rsp+0x620],r13
  92a481:	00 
  92a482:	48 c7 84 24 28 06 00 	mov    QWORD PTR [rsp+0x628],0x1
  92a489:	00 01 00 00 00 
  92a48e:	48 89 84 24 30 06 00 	mov    QWORD PTR [rsp+0x630],rax
  92a495:	00 
  92a496:	48 c7 84 24 38 06 00 	mov    QWORD PTR [rsp+0x638],0x1
  92a49d:	00 01 00 00 00 
  92a4a2:	48 8d bc 24 00 05 00 	lea    rdi,[rsp+0x500]
  92a4a9:	00 
  92a4aa:	48 8d b4 24 10 06 00 	lea    rsi,[rsp+0x610]
  92a4b1:	00 
  92a4b2:	e8 e9 6a fd ff       	call   900fa0 <alloc::vec::Vec<T,A>::push>
  92a4b7:	e9 a7 fe ff ff       	jmp    92a363 <future_backtest::RunnerCore::run_multi+0x7d93>
  92a4bc:	48 8b 84 24 10 05 00 	mov    rax,QWORD PTR [rsp+0x510]
  92a4c3:	00 
  92a4c4:	48 85 c0             	test   rax,rax
  92a4c7:	0f 84 c5 07 00 00    	je     92ac92 <future_backtest::RunnerCore::run_multi+0x86c2>
  92a4cd:	4c 8b b4 24 08 05 00 	mov    r14,QWORD PTR [rsp+0x508]
  92a4d4:	00 
  92a4d5:	48 8d 04 40          	lea    rax,[rax+rax*2]
  92a4d9:	48 c1 e0 04          	shl    rax,0x4
  92a4dd:	4c 01 f0             	add    rax,r14
  92a4e0:	48 89 44 24 70       	mov    QWORD PTR [rsp+0x70],rax
  92a4e5:	49 8d 46 30          	lea    rax,[r14+0x30]
  92a4e9:	48 8d 0d 30 73 f2 00 	lea    rcx,[rip+0xf27330]        # 1851820 <anon.609a31ba814f1e4156e50677fc366a7f.492.llvm.5215769359700358943+0x1130>
  92a4f0:	48 89 8c 24 c0 00 00 	mov    QWORD PTR [rsp+0xc0],rcx
  92a4f7:	00 
  92a4f8:	48 8d 0d 51 73 f2 00 	lea    rcx,[rip+0xf27351]        # 1851850 <anon.609a31ba814f1e4156e50677fc366a7f.492.llvm.5215769359700358943+0x1160>
  92a4ff:	48 89 8c 24 10 01 00 	mov    QWORD PTR [rsp+0x110],rcx
  92a506:	00 
  92a507:	48 89 44 24 50       	mov    QWORD PTR [rsp+0x50],rax
  92a50c:	4c 89 b4 24 40 01 00 	mov    QWORD PTR [rsp+0x140],r14
  92a513:	00 
  92a514:	49 8b 46 28          	mov    rax,QWORD PTR [r14+0x28]
  92a518:	48 83 f8 01          	cmp    rax,0x1
  92a51c:	0f 85 f4 01 00 00    	jne    92a716 <future_backtest::RunnerCore::run_multi+0x8146>
  92a522:	49 8b 46 20          	mov    rax,QWORD PTR [r14+0x20]
  92a526:	48 8b 38             	mov    rdi,QWORD PTR [rax]
  92a529:	48 8b 74 24 48       	mov    rsi,QWORD PTR [rsp+0x48]
  92a52e:	48 39 f7             	cmp    rdi,rsi
  92a531:	0f 83 7f 0e 00 00    	jae    92b3b6 <future_backtest::RunnerCore::run_multi+0x8de6>
  92a537:	48 8b 44 24 40       	mov    rax,QWORD PTR [rsp+0x40]
  92a53c:	48 69 cf 28 15 00 00 	imul   rcx,rdi,0x1528
  92a543:	48 8d 14 08          	lea    rdx,[rax+rcx*1]
  92a547:	48 81 c2 f8 0b 00 00 	add    rdx,0xbf8
  92a54e:	48 8d 84 08 70 0c 00 	lea    rax,[rax+rcx*1+0xc70]
  92a555:	00 
  92a556:	48 89 84 24 c0 01 00 	mov    QWORD PTR [rsp+0x1c0],rax
  92a55d:	00 
  92a55e:	48 8d 05 fb 74 fd ff 	lea    rax,[rip+0xfffffffffffd74fb]        # 901a60 <<alloc::string::String as core::fmt::Display>::fmt>
  92a565:	48 89 84 24 c8 01 00 	mov    QWORD PTR [rsp+0x1c8],rax
  92a56c:	00 
  92a56d:	48 89 94 24 d0 01 00 	mov    QWORD PTR [rsp+0x1d0],rdx
  92a574:	00 
  92a575:	48 89 84 24 d8 01 00 	mov    QWORD PTR [rsp+0x1d8],rax
  92a57c:	00 
  92a57d:	48 8d 05 3c 72 f2 00 	lea    rax,[rip+0xf2723c]        # 18517c0 <anon.609a31ba814f1e4156e50677fc366a7f.492.llvm.5215769359700358943+0x10d0>
  92a584:	48 89 84 24 10 06 00 	mov    QWORD PTR [rsp+0x610],rax
  92a58b:	00 
  92a58c:	48 c7 84 24 18 06 00 	mov    QWORD PTR [rsp+0x618],0x3
  92a593:	00 03 00 00 00 
  92a598:	48 c7 84 24 30 06 00 	mov    QWORD PTR [rsp+0x630],0x0
  92a59f:	00 00 00 00 00 
  92a5a4:	48 8d 84 24 c0 01 00 	lea    rax,[rsp+0x1c0]
  92a5ab:	00 
  92a5ac:	48 89 84 24 20 06 00 	mov    QWORD PTR [rsp+0x620],rax
  92a5b3:	00 
  92a5b4:	48 c7 84 24 28 06 00 	mov    QWORD PTR [rsp+0x628],0x2
  92a5bb:	00 02 00 00 00 
  92a5c0:	48 8d bc 24 a0 03 00 	lea    rdi,[rsp+0x3a0]
  92a5c7:	00 
  92a5c8:	48 8d b4 24 10 06 00 	lea    rsi,[rsp+0x610]
  92a5cf:	00 
  92a5d0:	ff 15 82 1a fd 00    	call   QWORD PTR [rip+0xfd1a82]        # 18fc058 <_DYNAMIC+0x758>
  92a5d6:	66 0f 10 84 24 a0 03 	movupd xmm0,XMMWORD PTR [rsp+0x3a0]
  92a5dd:	00 00 
  92a5df:	66 0f 29 84 24 b0 10 	movapd XMMWORD PTR [rsp+0x10b0],xmm0
  92a5e6:	00 00 
  92a5e8:	48 8b 84 24 b0 03 00 	mov    rax,QWORD PTR [rsp+0x3b0]
  92a5ef:	00 
  92a5f0:	48 89 84 24 c0 10 00 	mov    QWORD PTR [rsp+0x10c0],rax
  92a5f7:	00 
  92a5f8:	48 8d 84 24 b0 10 00 	lea    rax,[rsp+0x10b0]
  92a5ff:	00 
  92a600:	48 89 84 24 c0 01 00 	mov    QWORD PTR [rsp+0x1c0],rax
  92a607:	00 
  92a608:	48 8d 05 81 65 fd ff 	lea    rax,[rip+0xfffffffffffd6581]        # 900b90 <<alloc::string::String as core::fmt::Debug>::fmt>
  92a60f:	48 89 84 24 c8 01 00 	mov    QWORD PTR [rsp+0x1c8],rax
  92a616:	00 
  92a617:	48 8d 05 d2 71 f2 00 	lea    rax,[rip+0xf271d2]        # 18517f0 <anon.609a31ba814f1e4156e50677fc366a7f.492.llvm.5215769359700358943+0x1100>
  92a61e:	48 89 84 24 10 06 00 	mov    QWORD PTR [rsp+0x610],rax
  92a625:	00 
  92a626:	48 c7 84 24 18 06 00 	mov    QWORD PTR [rsp+0x618],0x2
  92a62d:	00 02 00 00 00 
  92a632:	48 c7 84 24 30 06 00 	mov    QWORD PTR [rsp+0x630],0x0
  92a639:	00 00 00 00 00 
  92a63e:	48 8d 84 24 c0 01 00 	lea    rax,[rsp+0x1c0]
  92a645:	00 
  92a646:	48 89 84 24 20 06 00 	mov    QWORD PTR [rsp+0x620],rax
  92a64d:	00 
  92a64e:	48 c7 84 24 28 06 00 	mov    QWORD PTR [rsp+0x628],0x1
  92a655:	00 01 00 00 00 
  92a65a:	48 8d bc 24 10 06 00 	lea    rdi,[rsp+0x610]
  92a661:	00 
  92a662:	ff 15 f8 1e fd 00    	call   QWORD PTR [rip+0xfd1ef8]        # 18fc560 <_DYNAMIC+0xc60>
  92a668:	48 8d 05 a1 71 f2 00 	lea    rax,[rip+0xf271a1]        # 1851810 <anon.609a31ba814f1e4156e50677fc366a7f.492.llvm.5215769359700358943+0x1120>
  92a66f:	48 89 84 24 10 06 00 	mov    QWORD PTR [rsp+0x610],rax
  92a676:	00 
  92a677:	48 c7 84 24 18 06 00 	mov    QWORD PTR [rsp+0x618],0x1
  92a67e:	00 01 00 00 00 
  92a683:	48 c7 84 24 20 06 00 	mov    QWORD PTR [rsp+0x620],0x8
  92a68a:	00 08 00 00 00 
  92a68f:	66 0f 57 c0          	xorpd  xmm0,xmm0
  92a693:	66 0f 11 84 24 28 06 	movupd XMMWORD PTR [rsp+0x628],xmm0
  92a69a:	00 00 
  92a69c:	48 8d bc 24 10 06 00 	lea    rdi,[rsp+0x610]
  92a6a3:	00 
  92a6a4:	ff 15 b6 1e fd 00    	call   QWORD PTR [rip+0xfd1eb6]        # 18fc560 <_DYNAMIC+0xc60>
  92a6aa:	49 83 7e 28 00       	cmp    QWORD PTR [r14+0x28],0x0
  92a6af:	0f 84 0d 0d 00 00    	je     92b3c2 <future_backtest::RunnerCore::run_multi+0x8df2>
  92a6b5:	49 8b 46 20          	mov    rax,QWORD PTR [r14+0x20]
  92a6b9:	48 8b 38             	mov    rdi,QWORD PTR [rax]
  92a6bc:	48 8b 74 24 48       	mov    rsi,QWORD PTR [rsp+0x48]
  92a6c1:	48 39 f7             	cmp    rdi,rsi
  92a6c4:	0f 83 fe 0c 00 00    	jae    92b3c8 <future_backtest::RunnerCore::run_multi+0x8df8>
  92a6ca:	48 69 ff 28 15 00 00 	imul   rdi,rdi,0x1528
  92a6d1:	48 03 7c 24 40       	add    rdi,QWORD PTR [rsp+0x40]
  92a6d6:	be 01 00 00 00       	mov    esi,0x1
  92a6db:	ff 15 af 16 fd 00    	call   QWORD PTR [rip+0xfd16af]        # 18fbd90 <_DYNAMIC+0x490>
  92a6e1:	49 89 c7             	mov    r15,rax
  92a6e4:	48 85 c0             	test   rax,rax
  92a6e7:	0f 85 90 09 00 00    	jne    92b07d <future_backtest::RunnerCore::run_multi+0x8aad>
  92a6ed:	48 8b b4 24 b0 10 00 	mov    rsi,QWORD PTR [rsp+0x10b0]
  92a6f4:	00 
  92a6f5:	48 85 f6             	test   rsi,rsi
  92a6f8:	0f 84 11 05 00 00    	je     92ac0f <future_backtest::RunnerCore::run_multi+0x863f>
  92a6fe:	48 8b bc 24 b8 10 00 	mov    rdi,QWORD PTR [rsp+0x10b8]
  92a705:	00 
  92a706:	ba 01 00 00 00       	mov    edx,0x1
  92a70b:	ff 15 0f 14 fd 00    	call   QWORD PTR [rip+0xfd140f]        # 18fbb20 <_DYNAMIC+0x220>
  92a711:	e9 f9 04 00 00       	jmp    92ac0f <future_backtest::RunnerCore::run_multi+0x863f>
  92a716:	49 8b 5e 20          	mov    rbx,QWORD PTR [r14+0x20]
  92a71a:	4c 8d 2c c3          	lea    r13,[rbx+rax*8]
  92a71e:	31 ed                	xor    ebp,ebp
  92a720:	4c 39 eb             	cmp    rbx,r13
  92a723:	41 0f 95 c4          	setne  r12b
  92a727:	74 37                	je     92a760 <future_backtest::RunnerCore::run_multi+0x8190>
  92a729:	48 8b 3b             	mov    rdi,QWORD PTR [rbx]
  92a72c:	48 8b 74 24 48       	mov    rsi,QWORD PTR [rsp+0x48]
  92a731:	48 39 f7             	cmp    rdi,rsi
  92a734:	0f 83 51 0b 00 00    	jae    92b28b <future_backtest::RunnerCore::run_multi+0x8cbb>
  92a73a:	48 69 ff 28 15 00 00 	imul   rdi,rdi,0x1528
  92a741:	48 03 7c 24 40       	add    rdi,QWORD PTR [rsp+0x40]
  92a746:	ff 15 54 16 fd 00    	call   QWORD PTR [rip+0xfd1654]        # 18fbda0 <_DYNAMIC+0x4a0>
  92a74c:	49 89 c7             	mov    r15,rax
  92a74f:	44 88 e5             	mov    bpl,r12b
  92a752:	48 8d 1c eb          	lea    rbx,[rbx+rbp*8]
  92a756:	48 85 c0             	test   rax,rax
  92a759:	74 c3                	je     92a71e <future_backtest::RunnerCore::run_multi+0x814e>
  92a75b:	e9 83 05 00 00       	jmp    92ace3 <future_backtest::RunnerCore::run_multi+0x8713>
  92a760:	49 83 7e 28 00       	cmp    QWORD PTR [r14+0x28],0x0
  92a765:	0f 84 73 0d 00 00    	je     92b4de <future_backtest::RunnerCore::run_multi+0x8f0e>
  92a76b:	49 8b 46 20          	mov    rax,QWORD PTR [r14+0x20]
  92a76f:	48 8b 38             	mov    rdi,QWORD PTR [rax]
  92a772:	48 8b 74 24 48       	mov    rsi,QWORD PTR [rsp+0x48]
  92a777:	48 39 f7             	cmp    rdi,rsi
  92a77a:	0f 83 43 0d 00 00    	jae    92b4c3 <future_backtest::RunnerCore::run_multi+0x8ef3>
  92a780:	48 8b 44 24 40       	mov    rax,QWORD PTR [rsp+0x40]
  92a785:	48 69 cf 28 15 00 00 	imul   rcx,rdi,0x1528
  92a78c:	48 ba 00 00 00 00 00 	movabs rdx,0x8000000000000000
  92a793:	00 00 80 
  92a796:	48 39 94 08 f0 13 00 	cmp    QWORD PTR [rax+rcx*1+0x13f0],rdx
  92a79d:	00 
  92a79e:	0f 84 ad 09 00 00    	je     92b151 <future_backtest::RunnerCore::run_multi+0x8b81>
  92a7a4:	4c 8d 2c 08          	lea    r13,[rax+rcx*1]
  92a7a8:	44 0f b6 a4 08 d2 12 	movzx  r12d,BYTE PTR [rax+rcx*1+0x12d2]
  92a7af:	00 00 
  92a7b1:	0f b6 84 08 a0 0c 00 	movzx  eax,BYTE PTR [rax+rcx*1+0xca0]
  92a7b8:	00 
  92a7b9:	88 84 24 90 00 00 00 	mov    BYTE PTR [rsp+0x90],al
  92a7c0:	48 b8 00 00 00 00 00 	movabs rax,0x8000000000000000
  92a7c7:	00 00 80 
  92a7ca:	48 89 c3             	mov    rbx,rax
  92a7cd:	49 39 85 50 14 00 00 	cmp    QWORD PTR [r13+0x1450],rax
  92a7d4:	74 58                	je     92a82e <future_backtest::RunnerCore::run_multi+0x825e>
  92a7d6:	49 8d b5 50 14 00 00 	lea    rsi,[r13+0x1450]
  92a7dd:	48 8d bc 24 10 06 00 	lea    rdi,[rsp+0x610]
  92a7e4:	00 
  92a7e5:	48 8d 15 8c 56 f2 00 	lea    rdx,[rip+0xf2568c]        # 184fe78 <anon.609a31ba814f1e4156e50677fc366a7f.248.llvm.5215769359700358943+0x7b8>
  92a7ec:	ff 15 46 18 fd 00    	call   QWORD PTR [rip+0xfd1846]        # 18fc038 <_DYNAMIC+0x738>
  92a7f2:	48 8b 9c 24 10 06 00 	mov    rbx,QWORD PTR [rsp+0x610]
  92a7f9:	00 
  92a7fa:	48 8b 84 24 18 06 00 	mov    rax,QWORD PTR [rsp+0x618]
  92a801:	00 
  92a802:	48 89 44 24 60       	mov    QWORD PTR [rsp+0x60],rax
  92a807:	48 b8 00 00 00 00 00 	movabs rax,0x8000000000000000
  92a80e:	00 00 80 
  92a811:	49 39 85 f0 13 00 00 	cmp    QWORD PTR [r13+0x13f0],rax
  92a818:	0f 84 45 09 00 00    	je     92b163 <future_backtest::RunnerCore::run_multi+0x8b93>
  92a81e:	48 8b 84 24 20 06 00 	mov    rax,QWORD PTR [rsp+0x620]
  92a825:	00 
  92a826:	48 89 84 24 28 01 00 	mov    QWORD PTR [rsp+0x128],rax
  92a82d:	00 
  92a82e:	48 b8 00 00 00 00 00 	movabs rax,0x8000000000000000
  92a835:	00 00 80 
  92a838:	48 89 c5             	mov    rbp,rax
  92a83b:	49 39 85 80 14 00 00 	cmp    QWORD PTR [r13+0x1480],rax
  92a842:	74 5b                	je     92a89f <future_backtest::RunnerCore::run_multi+0x82cf>
  92a844:	49 8d b5 80 14 00 00 	lea    rsi,[r13+0x1480]
  92a84b:	48 8d bc 24 10 06 00 	lea    rdi,[rsp+0x610]
  92a852:	00 
  92a853:	48 8d 15 1e 56 f2 00 	lea    rdx,[rip+0xf2561e]        # 184fe78 <anon.609a31ba814f1e4156e50677fc366a7f.248.llvm.5215769359700358943+0x7b8>
  92a85a:	ff 15 d8 17 fd 00    	call   QWORD PTR [rip+0xfd17d8]        # 18fc038 <_DYNAMIC+0x738>
  92a860:	48 8b ac 24 10 06 00 	mov    rbp,QWORD PTR [rsp+0x610]
  92a867:	00 
  92a868:	48 8b 84 24 18 06 00 	mov    rax,QWORD PTR [rsp+0x618]
  92a86f:	00 
  92a870:	48 89 84 24 a0 00 00 	mov    QWORD PTR [rsp+0xa0],rax
  92a877:	00 
  92a878:	48 b8 00 00 00 00 00 	movabs rax,0x8000000000000000
  92a87f:	00 00 80 
  92a882:	49 39 85 f0 13 00 00 	cmp    QWORD PTR [r13+0x13f0],rax
  92a889:	0f 84 e6 08 00 00    	je     92b175 <future_backtest::RunnerCore::run_multi+0x8ba5>
  92a88f:	48 8b 84 24 20 06 00 	mov    rax,QWORD PTR [rsp+0x620]
  92a896:	00 
  92a897:	48 89 84 24 08 01 00 	mov    QWORD PTR [rsp+0x108],rax
  92a89e:	00 
  92a89f:	48 b8 00 00 00 00 00 	movabs rax,0x8000000000000000
  92a8a6:	00 00 80 
  92a8a9:	49 89 c7             	mov    r15,rax
  92a8ac:	49 39 85 68 14 00 00 	cmp    QWORD PTR [r13+0x1468],rax
  92a8b3:	74 44                	je     92a8f9 <future_backtest::RunnerCore::run_multi+0x8329>
  92a8b5:	49 8d b5 68 14 00 00 	lea    rsi,[r13+0x1468]
  92a8bc:	48 8d bc 24 10 06 00 	lea    rdi,[rsp+0x610]
  92a8c3:	00 
  92a8c4:	48 8d 15 ad 55 f2 00 	lea    rdx,[rip+0xf255ad]        # 184fe78 <anon.609a31ba814f1e4156e50677fc366a7f.248.llvm.5215769359700358943+0x7b8>
  92a8cb:	ff 15 67 17 fd 00    	call   QWORD PTR [rip+0xfd1767]        # 18fc038 <_DYNAMIC+0x738>
  92a8d1:	4c 8b bc 24 10 06 00 	mov    r15,QWORD PTR [rsp+0x610]
  92a8d8:	00 
  92a8d9:	48 8b 84 24 18 06 00 	mov    rax,QWORD PTR [rsp+0x618]
  92a8e0:	00 
  92a8e1:	48 89 84 24 b8 00 00 	mov    QWORD PTR [rsp+0xb8],rax
  92a8e8:	00 
  92a8e9:	48 8b 84 24 20 06 00 	mov    rax,QWORD PTR [rsp+0x620]
  92a8f0:	00 
  92a8f1:	48 89 84 24 20 01 00 	mov    QWORD PTR [rsp+0x120],rax
  92a8f8:	00 
  92a8f9:	49 8b 46 28          	mov    rax,QWORD PTR [r14+0x28]
  92a8fd:	48 89 84 24 a0 03 00 	mov    QWORD PTR [rsp+0x3a0],rax
  92a904:	00 
  92a905:	48 8d 84 24 40 01 00 	lea    rax,[rsp+0x140]
  92a90c:	00 
  92a90d:	48 89 84 24 c0 01 00 	mov    QWORD PTR [rsp+0x1c0],rax
  92a914:	00 
  92a915:	48 8d 05 54 1d f2 ff 	lea    rax,[rip+0xfffffffffff21d54]        # 84c670 <<&T as core::fmt::Display>::fmt>
  92a91c:	48 89 84 24 c8 01 00 	mov    QWORD PTR [rsp+0x1c8],rax
  92a923:	00 
  92a924:	48 8d 84 24 a0 03 00 	lea    rax,[rsp+0x3a0]
  92a92b:	00 
  92a92c:	48 89 84 24 d0 01 00 	mov    QWORD PTR [rsp+0x1d0],rax
  92a933:	00 
  92a934:	48 8b 05 9d 15 fd 00 	mov    rax,QWORD PTR [rip+0xfd159d]        # 18fbed8 <_DYNAMIC+0x5d8>
  92a93b:	48 89 84 24 d8 01 00 	mov    QWORD PTR [rsp+0x1d8],rax
  92a942:	00 
  92a943:	48 8d 05 7e 6f f2 00 	lea    rax,[rip+0xf26f7e]        # 18518c8 <anon.609a31ba814f1e4156e50677fc366a7f.492.llvm.5215769359700358943+0x11d8>
  92a94a:	48 89 84 24 10 06 00 	mov    QWORD PTR [rsp+0x610],rax
  92a951:	00 
  92a952:	48 c7 84 24 18 06 00 	mov    QWORD PTR [rsp+0x618],0x3
  92a959:	00 03 00 00 00 
  92a95e:	48 c7 84 24 30 06 00 	mov    QWORD PTR [rsp+0x630],0x0
  92a965:	00 00 00 00 00 
  92a96a:	48 8d 84 24 c0 01 00 	lea    rax,[rsp+0x1c0]
  92a971:	00 
  92a972:	48 89 84 24 20 06 00 	mov    QWORD PTR [rsp+0x620],rax
  92a979:	00 
  92a97a:	48 c7 84 24 28 06 00 	mov    QWORD PTR [rsp+0x628],0x2
  92a981:	00 02 00 00 00 
  92a986:	48 8d bc 24 10 06 00 	lea    rdi,[rsp+0x610]
  92a98d:	00 
  92a98e:	ff 15 cc 1b fd 00    	call   QWORD PTR [rip+0xfd1bcc]        # 18fc560 <_DYNAMIC+0xc60>
  92a994:	80 bc 24 90 00 00 00 	cmp    BYTE PTR [rsp+0x90],0x0
  92a99b:	00 
  92a99c:	0f 84 fd 01 00 00    	je     92ab9f <future_backtest::RunnerCore::run_multi+0x85cf>
  92a9a2:	48 b8 00 00 00 00 00 	movabs rax,0x8000000000000000
  92a9a9:	00 00 80 
  92a9ac:	49 39 85 f0 13 00 00 	cmp    QWORD PTR [r13+0x13f0],rax
  92a9b3:	0f 84 1d 08 00 00    	je     92b1d6 <future_backtest::RunnerCore::run_multi+0x8c06>
  92a9b9:	f2 41 0f 10 85 98 14 	movsd  xmm0,QWORD PTR [r13+0x1498]
  92a9c0:	00 00 
  92a9c2:	48 c7 84 24 c0 01 00 	mov    QWORD PTR [rsp+0x1c0],0x0
  92a9c9:	00 00 00 00 00 
  92a9ce:	48 c7 84 24 c8 01 00 	mov    QWORD PTR [rsp+0x1c8],0x8
  92a9d5:	00 08 00 00 00 
  92a9da:	48 8d 84 24 d0 01 00 	lea    rax,[rsp+0x1d0]
  92a9e1:	00 
  92a9e2:	66 0f ef c9          	pxor   xmm1,xmm1
  92a9e6:	f3 0f 7f 08          	movdqu XMMWORD PTR [rax],xmm1
  92a9ea:	48 c7 84 24 e0 01 00 	mov    QWORD PTR [rsp+0x1e0],0x8
  92a9f1:	00 08 00 00 00 
  92a9f6:	f3 0f 7f 48 18       	movdqu XMMWORD PTR [rax+0x18],xmm1
  92a9fb:	48 c7 84 24 f8 01 00 	mov    QWORD PTR [rsp+0x1f8],0x8
  92aa02:	00 08 00 00 00 
  92aa07:	f3 0f 7f 48 30       	movdqu XMMWORD PTR [rax+0x30],xmm1
  92aa0c:	48 c7 84 24 10 02 00 	mov    QWORD PTR [rsp+0x210],0x8
  92aa13:	00 08 00 00 00 
  92aa18:	48 c7 84 24 18 02 00 	mov    QWORD PTR [rsp+0x218],0x0
  92aa1f:	00 00 00 00 00 
  92aa24:	f2 0f 11 84 24 68 02 	movsd  QWORD PTR [rsp+0x268],xmm0
  92aa2b:	00 00 
  92aa2d:	f3 0f 7f 88 a0 00 00 	movdqu XMMWORD PTR [rax+0xa0],xmm1
  92aa34:	00 
  92aa35:	48 89 9c 24 20 02 00 	mov    QWORD PTR [rsp+0x220],rbx
  92aa3c:	00 
  92aa3d:	48 8b 44 24 60       	mov    rax,QWORD PTR [rsp+0x60]
  92aa42:	48 89 84 24 28 02 00 	mov    QWORD PTR [rsp+0x228],rax
  92aa49:	00 
  92aa4a:	48 8b 84 24 28 01 00 	mov    rax,QWORD PTR [rsp+0x128]
  92aa51:	00 
  92aa52:	48 89 84 24 30 02 00 	mov    QWORD PTR [rsp+0x230],rax
  92aa59:	00 
  92aa5a:	48 89 ac 24 50 02 00 	mov    QWORD PTR [rsp+0x250],rbp
  92aa61:	00 
  92aa62:	48 8b 84 24 a0 00 00 	mov    rax,QWORD PTR [rsp+0xa0]
  92aa69:	00 
  92aa6a:	48 89 84 24 58 02 00 	mov    QWORD PTR [rsp+0x258],rax
  92aa71:	00 
  92aa72:	48 8b 84 24 08 01 00 	mov    rax,QWORD PTR [rsp+0x108]
  92aa79:	00 
  92aa7a:	48 89 84 24 60 02 00 	mov    QWORD PTR [rsp+0x260],rax
  92aa81:	00 
  92aa82:	4c 89 bc 24 38 02 00 	mov    QWORD PTR [rsp+0x238],r15
  92aa89:	00 
  92aa8a:	48 8b 84 24 b8 00 00 	mov    rax,QWORD PTR [rsp+0xb8]
  92aa91:	00 
  92aa92:	48 89 84 24 40 02 00 	mov    QWORD PTR [rsp+0x240],rax
  92aa99:	00 
  92aa9a:	48 8b 84 24 20 01 00 	mov    rax,QWORD PTR [rsp+0x120]
  92aaa1:	00 
  92aaa2:	48 89 84 24 48 02 00 	mov    QWORD PTR [rsp+0x248],rax
  92aaa9:	00 
  92aaaa:	4d 8b 7e 20          	mov    r15,QWORD PTR [r14+0x20]
  92aaae:	49 8b 46 28          	mov    rax,QWORD PTR [r14+0x28]
  92aab2:	4d 8d 34 c7          	lea    r14,[r15+rax*8]
  92aab6:	45 31 ed             	xor    r13d,r13d
  92aab9:	4d 39 f7             	cmp    r15,r14
  92aabc:	40 0f 95 c5          	setne  bpl
  92aac0:	0f 84 0d 01 00 00    	je     92abd3 <future_backtest::RunnerCore::run_multi+0x8603>
  92aac6:	49 8b 3f             	mov    rdi,QWORD PTR [r15]
  92aac9:	48 8b 74 24 48       	mov    rsi,QWORD PTR [rsp+0x48]
  92aace:	48 39 f7             	cmp    rdi,rsi
  92aad1:	0f 83 fd 07 00 00    	jae    92b2d4 <future_backtest::RunnerCore::run_multi+0x8d04>
  92aad7:	48 8b 44 24 40       	mov    rax,QWORD PTR [rsp+0x40]
  92aadc:	48 69 cf 28 15 00 00 	imul   rcx,rdi,0x1528
  92aae3:	48 ba 00 00 00 00 00 	movabs rdx,0x8000000000000000
  92aaea:	00 00 80 
  92aaed:	48 39 94 08 f0 13 00 	cmp    QWORD PTR [rax+rcx*1+0x13f0],rdx
  92aaf4:	00 
  92aaf5:	0f 84 06 06 00 00    	je     92b101 <future_backtest::RunnerCore::run_multi+0x8b31>
  92aafb:	48 8d 1c 08          	lea    rbx,[rax+rcx*1]
  92aaff:	48 81 c3 f0 13 00 00 	add    rbx,0x13f0
  92ab06:	48 8b 73 08          	mov    rsi,QWORD PTR [rbx+0x8]
  92ab0a:	48 69 53 10 28 02 00 	imul   rdx,QWORD PTR [rbx+0x10],0x228
  92ab11:	00 
  92ab12:	48 01 f2             	add    rdx,rsi
  92ab15:	48 8d bc 24 c0 01 00 	lea    rdi,[rsp+0x1c0]
  92ab1c:	00 
  92ab1d:	48 8d 0d 1c 6e f2 00 	lea    rcx,[rip+0xf26e1c]        # 1851940 <anon.609a31ba814f1e4156e50677fc366a7f.492.llvm.5215769359700358943+0x1250>
  92ab24:	e8 47 a4 f9 ff       	call   8c4f70 <alloc::vec::Vec<T,A>::extend_trusted>
  92ab29:	48 8b 73 20          	mov    rsi,QWORD PTR [rbx+0x20]
  92ab2d:	48 6b 53 28 70       	imul   rdx,QWORD PTR [rbx+0x28],0x70
  92ab32:	48 01 f2             	add    rdx,rsi
  92ab35:	48 8d bc 24 d8 01 00 	lea    rdi,[rsp+0x1d8]
  92ab3c:	00 
  92ab3d:	48 8d 0d 14 6e f2 00 	lea    rcx,[rip+0xf26e14]        # 1851958 <anon.609a31ba814f1e4156e50677fc366a7f.492.llvm.5215769359700358943+0x1268>
  92ab44:	e8 b7 a4 f9 ff       	call   8c5000 <alloc::vec::Vec<T,A>::extend_trusted>
  92ab49:	48 8b 73 38          	mov    rsi,QWORD PTR [rbx+0x38]
  92ab4d:	48 69 53 40 38 02 00 	imul   rdx,QWORD PTR [rbx+0x40],0x238
  92ab54:	00 
  92ab55:	48 01 f2             	add    rdx,rsi
  92ab58:	48 8d bc 24 f0 01 00 	lea    rdi,[rsp+0x1f0]
  92ab5f:	00 
  92ab60:	48 8d 0d 09 6e f2 00 	lea    rcx,[rip+0xf26e09]        # 1851970 <anon.609a31ba814f1e4156e50677fc366a7f.492.llvm.5215769359700358943+0x1280>
  92ab67:	e8 74 a3 f9 ff       	call   8c4ee0 <alloc::vec::Vec<T,A>::extend_trusted>
  92ab6c:	41 88 ed             	mov    r13b,bpl
  92ab6f:	4f 8d 3c ef          	lea    r15,[r15+r13*8]
  92ab73:	48 8b 73 50          	mov    rsi,QWORD PTR [rbx+0x50]
  92ab77:	48 8b 43 58          	mov    rax,QWORD PTR [rbx+0x58]
  92ab7b:	48 8d 14 80          	lea    rdx,[rax+rax*4]
  92ab7f:	48 c1 e2 05          	shl    rdx,0x5
  92ab83:	48 01 f2             	add    rdx,rsi
  92ab86:	48 8d bc 24 08 02 00 	lea    rdi,[rsp+0x208]
  92ab8d:	00 
  92ab8e:	48 8d 0d f3 6d f2 00 	lea    rcx,[rip+0xf26df3]        # 1851988 <anon.609a31ba814f1e4156e50677fc366a7f.492.llvm.5215769359700358943+0x1298>
  92ab95:	e8 06 a6 f9 ff       	call   8c51a0 <alloc::vec::Vec<T,A>::extend_trusted>
  92ab9a:	e9 17 ff ff ff       	jmp    92aab6 <future_backtest::RunnerCore::run_multi+0x84e6>
  92ab9f:	4a 8d 04 7d 00 00 00 	lea    rax,[r15*2+0x0]
  92aba6:	00 
  92aba7:	48 85 c0             	test   rax,rax
  92abaa:	0f 85 86 00 00 00    	jne    92ac36 <future_backtest::RunnerCore::run_multi+0x8666>
  92abb0:	48 8d 04 6d 00 00 00 	lea    rax,[rbp*2+0x0]
  92abb7:	00 
  92abb8:	48 85 c0             	test   rax,rax
  92abbb:	0f 85 9c 00 00 00    	jne    92ac5d <future_backtest::RunnerCore::run_multi+0x868d>
  92abc1:	48 8d 04 5d 00 00 00 	lea    rax,[rbx*2+0x0]
  92abc8:	00 
  92abc9:	48 85 c0             	test   rax,rax
  92abcc:	74 41                	je     92ac0f <future_backtest::RunnerCore::run_multi+0x863f>
  92abce:	e9 ad 00 00 00       	jmp    92ac80 <future_backtest::RunnerCore::run_multi+0x86b0>
  92abd3:	ba c0 00 00 00       	mov    edx,0xc0
  92abd8:	48 8d 9c 24 10 06 00 	lea    rbx,[rsp+0x610]
  92abdf:	00 
  92abe0:	48 89 df             	mov    rdi,rbx
  92abe3:	48 8d b4 24 c0 01 00 	lea    rsi,[rsp+0x1c0]
  92abea:	00 
  92abeb:	ff 15 07 13 fd 00    	call   QWORD PTR [rip+0xfd1307]        # 18fbef8 <memcpy@GLIBC_2.14>
  92abf1:	41 0f b6 d4          	movzx  edx,r12b
  92abf5:	48 89 df             	mov    rdi,rbx
  92abf8:	be 01 00 00 00       	mov    esi,0x1
  92abfd:	ff 15 b5 19 fd 00    	call   QWORD PTR [rip+0xfd19b5]        # 18fc5b8 <_DYNAMIC+0xcb8>
  92ac03:	49 89 c7             	mov    r15,rax
  92ac06:	48 85 c0             	test   rax,rax
  92ac09:	0f 85 d4 00 00 00    	jne    92ace3 <future_backtest::RunnerCore::run_multi+0x8713>
  92ac0f:	48 8b 4c 24 50       	mov    rcx,QWORD PTR [rsp+0x50]
  92ac14:	48 8d 41 30          	lea    rax,[rcx+0x30]
  92ac18:	48 3b 4c 24 70       	cmp    rcx,QWORD PTR [rsp+0x70]
  92ac1d:	48 0f 44 c1          	cmove  rax,rcx
  92ac21:	74 6f                	je     92ac92 <future_backtest::RunnerCore::run_multi+0x86c2>
  92ac23:	48 8b 4c 24 50       	mov    rcx,QWORD PTR [rsp+0x50]
  92ac28:	49 89 ce             	mov    r14,rcx
  92ac2b:	48 85 c9             	test   rcx,rcx
  92ac2e:	0f 85 d3 f8 ff ff    	jne    92a507 <future_backtest::RunnerCore::run_multi+0x7f37>
  92ac34:	eb 5c                	jmp    92ac92 <future_backtest::RunnerCore::run_multi+0x86c2>
  92ac36:	ba 01 00 00 00       	mov    edx,0x1
  92ac3b:	48 8b bc 24 b8 00 00 	mov    rdi,QWORD PTR [rsp+0xb8]
  92ac42:	00 
  92ac43:	4c 89 fe             	mov    rsi,r15
  92ac46:	ff 15 d4 0e fd 00    	call   QWORD PTR [rip+0xfd0ed4]        # 18fbb20 <_DYNAMIC+0x220>
  92ac4c:	48 8d 04 6d 00 00 00 	lea    rax,[rbp*2+0x0]
  92ac53:	00 
  92ac54:	48 85 c0             	test   rax,rax
  92ac57:	0f 84 64 ff ff ff    	je     92abc1 <future_backtest::RunnerCore::run_multi+0x85f1>
  92ac5d:	ba 01 00 00 00       	mov    edx,0x1
  92ac62:	48 8b bc 24 a0 00 00 	mov    rdi,QWORD PTR [rsp+0xa0]
  92ac69:	00 
  92ac6a:	48 89 ee             	mov    rsi,rbp
  92ac6d:	ff 15 ad 0e fd 00    	call   QWORD PTR [rip+0xfd0ead]        # 18fbb20 <_DYNAMIC+0x220>
  92ac73:	48 8d 04 5d 00 00 00 	lea    rax,[rbx*2+0x0]
  92ac7a:	00 
  92ac7b:	48 85 c0             	test   rax,rax
  92ac7e:	74 8f                	je     92ac0f <future_backtest::RunnerCore::run_multi+0x863f>
  92ac80:	ba 01 00 00 00       	mov    edx,0x1
  92ac85:	48 8b 7c 24 60       	mov    rdi,QWORD PTR [rsp+0x60]
  92ac8a:	48 89 de             	mov    rsi,rbx
  92ac8d:	e9 79 fa ff ff       	jmp    92a70b <future_backtest::RunnerCore::run_multi+0x813b>
  92ac92:	83 bc 24 e0 0e 00 00 	cmp    DWORD PTR [rsp+0xee0],0x2
  92ac99:	02 
  92ac9a:	0f 84 4e 01 00 00    	je     92adee <future_backtest::RunnerCore::run_multi+0x881e>
  92aca0:	48 83 bc 24 e0 00 00 	cmp    QWORD PTR [rsp+0xe0],0x0
  92aca7:	00 00 
  92aca9:	0f 84 20 08 00 00    	je     92b4cf <future_backtest::RunnerCore::run_multi+0x8eff>
  92acaf:	48 8b 84 24 d8 00 00 	mov    rax,QWORD PTR [rsp+0xd8]
  92acb6:	00 
  92acb7:	48 8d b4 24 80 0f 00 	lea    rsi,[rsp+0xf80]
  92acbe:	00 
  92acbf:	48 8b 90 28 01 00 00 	mov    rdx,QWORD PTR [rax+0x128]
  92acc6:	48 8b 88 30 01 00 00 	mov    rcx,QWORD PTR [rax+0x130]
  92accd:	48 8d bc 24 e0 0e 00 	lea    rdi,[rsp+0xee0]
  92acd4:	00 
  92acd5:	ff 15 0d 28 fd 00    	call   QWORD PTR [rip+0xfd280d]        # 18fd4e8 <_DYNAMIC+0x1be8>
  92acdb:	49 89 c7             	mov    r15,rax
  92acde:	48 85 c0             	test   rax,rax
  92ace1:	74 23                	je     92ad06 <future_backtest::RunnerCore::run_multi+0x8736>
  92ace3:	48 8d bc 24 00 05 00 	lea    rdi,[rsp+0x500]
  92acea:	00 
  92aceb:	e8 60 e1 fc ff       	call   8f8e50 <core::ptr::drop_in_place<alloc::vec::Vec<(alloc::string::String,alloc::vec::Vec<usize>)>>>
  92acf0:	48 8b b4 24 00 03 00 	mov    rsi,QWORD PTR [rsp+0x300]
  92acf7:	00 
  92acf8:	48 85 f6             	test   rsi,rsi
  92acfb:	0f 85 d9 f4 ff ff    	jne    92a1da <future_backtest::RunnerCore::run_multi+0x7c0a>
  92ad01:	e9 eb f4 ff ff       	jmp    92a1f1 <future_backtest::RunnerCore::run_multi+0x7c21>
  92ad06:	48 8b b4 24 70 10 00 	mov    rsi,QWORD PTR [rsp+0x1070]
  92ad0d:	00 
  92ad0e:	48 83 c6 10          	add    rsi,0x10
  92ad12:	48 8d bc 24 10 06 00 	lea    rdi,[rsp+0x610]
  92ad19:	00 
  92ad1a:	e8 61 c9 fc ff       	call   8f7680 <std::sync::poison::mutex::Mutex<T>::lock>
  92ad1f:	4c 8d b4 24 10 06 00 	lea    r14,[rsp+0x610]
  92ad26:	00 
  92ad27:	4c 89 f7             	mov    rdi,r14
  92ad2a:	e8 31 55 fd ff       	call   900260 <core::result::Result<T,E>::expect>
  92ad2f:	48 89 c3             	mov    rbx,rax
  92ad32:	89 d5                	mov    ebp,edx
  92ad34:	40 80 e5 01          	and    bpl,0x1
  92ad38:	48 83 c0 08          	add    rax,0x8
  92ad3c:	48 8d 4b 10          	lea    rcx,[rbx+0x10]
  92ad40:	48 8d 53 18          	lea    rdx,[rbx+0x18]
  92ad44:	48 89 de             	mov    rsi,rbx
  92ad47:	48 83 c6 20          	add    rsi,0x20
  92ad4b:	48 89 84 24 10 06 00 	mov    QWORD PTR [rsp+0x610],rax
  92ad52:	00 
  92ad53:	48 8b 05 8e 13 fd 00 	mov    rax,QWORD PTR [rip+0xfd138e]        # 18fc0e8 <_DYNAMIC+0x7e8>
  92ad5a:	48 89 84 24 18 06 00 	mov    QWORD PTR [rsp+0x618],rax
  92ad61:	00 
  92ad62:	48 89 8c 24 20 06 00 	mov    QWORD PTR [rsp+0x620],rcx
  92ad69:	00 
  92ad6a:	48 89 84 24 28 06 00 	mov    QWORD PTR [rsp+0x628],rax
  92ad71:	00 
  92ad72:	48 89 94 24 30 06 00 	mov    QWORD PTR [rsp+0x630],rdx
  92ad79:	00 
  92ad7a:	48 8b 0d 3f 15 fd 00 	mov    rcx,QWORD PTR [rip+0xfd153f]        # 18fc2c0 <_DYNAMIC+0x9c0>
  92ad81:	48 89 8c 24 38 06 00 	mov    QWORD PTR [rsp+0x638],rcx
  92ad88:	00 
  92ad89:	48 89 b4 24 40 06 00 	mov    QWORD PTR [rsp+0x640],rsi
  92ad90:	00 
  92ad91:	48 89 84 24 48 06 00 	mov    QWORD PTR [rsp+0x648],rax
  92ad98:	00 
  92ad99:	48 8d 05 90 69 f2 00 	lea    rax,[rip+0xf26990]        # 1851730 <anon.609a31ba814f1e4156e50677fc366a7f.492.llvm.5215769359700358943+0x1040>
  92ada0:	48 89 84 24 c0 01 00 	mov    QWORD PTR [rsp+0x1c0],rax
  92ada7:	00 
  92ada8:	48 c7 84 24 c8 01 00 	mov    QWORD PTR [rsp+0x1c8],0x5
  92adaf:	00 05 00 00 00 
  92adb4:	48 c7 84 24 e0 01 00 	mov    QWORD PTR [rsp+0x1e0],0x0
  92adbb:	00 00 00 00 00 
  92adc0:	4c 89 b4 24 d0 01 00 	mov    QWORD PTR [rsp+0x1d0],r14
  92adc7:	00 
  92adc8:	48 c7 84 24 d8 01 00 	mov    QWORD PTR [rsp+0x1d8],0x4
  92adcf:	00 04 00 00 00 
  92add4:	48 8d bc 24 c0 01 00 	lea    rdi,[rsp+0x1c0]
  92addb:	00 
  92addc:	ff 15 7e 17 fd 00    	call   QWORD PTR [rip+0xfd177e]        # 18fc560 <_DYNAMIC+0xc60>
  92ade2:	40 0f b6 f5          	movzx  esi,bpl
  92ade6:	48 89 df             	mov    rdi,rbx
  92ade9:	e8 a2 e8 fc ff       	call   8f9690 <core::ptr::drop_in_place<std::sync::poison::mutex::MutexGuard<future_backtest::MetaControl::output::MetaOrderMetrics>>>
  92adee:	48 8b 44 24 18       	mov    rax,QWORD PTR [rsp+0x18]
  92adf3:	48 83 78 10 00       	cmp    QWORD PTR [rax+0x10],0x0
  92adf8:	0f 85 a7 06 00 00    	jne    92b4a5 <future_backtest::RunnerCore::run_multi+0x8ed5>
  92adfe:	48 8b 44 24 18       	mov    rax,QWORD PTR [rsp+0x18]
  92ae03:	48 c7 40 10 ff ff ff 	mov    QWORD PTR [rax+0x10],0xffffffffffffffff
  92ae0a:	ff 
  92ae0b:	48 8d 35 6c 0d 95 ff 	lea    rsi,[rip+0xffffffffff950d6c]        # 27bb7e <anon.609a31ba814f1e4156e50677fc366a7f.245.llvm.5215769359700358943+0x3bd>
  92ae12:	48 8d bc 24 10 06 00 	lea    rdi,[rsp+0x610]
  92ae19:	00 
  92ae1a:	ba 19 00 00 00       	mov    edx,0x19
  92ae1f:	e8 8c ad fd ff       	call   905bb0 <<T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec>
  92ae24:	48 8b 84 24 20 06 00 	mov    rax,QWORD PTR [rsp+0x620]
  92ae2b:	00 
  92ae2c:	48 89 84 24 d0 01 00 	mov    QWORD PTR [rsp+0x1d0],rax
  92ae33:	00 
  92ae34:	66 0f 10 84 24 10 06 	movupd xmm0,XMMWORD PTR [rsp+0x610]
  92ae3b:	00 00 
  92ae3d:	66 0f 29 84 24 c0 01 	movapd XMMWORD PTR [rsp+0x1c0],xmm0
  92ae44:	00 00 
  92ae46:	48 8d b4 24 c0 01 00 	lea    rsi,[rsp+0x1c0]
  92ae4d:	00 
  92ae4e:	48 8b bc 24 80 00 00 	mov    rdi,QWORD PTR [rsp+0x80]
  92ae55:	00 
  92ae56:	ff 15 14 17 fd 00    	call   QWORD PTR [rip+0xfd1714]        # 18fc570 <_DYNAMIC+0xc70>
  92ae5c:	48 8b 44 24 18       	mov    rax,QWORD PTR [rsp+0x18]
  92ae61:	48 ff 40 10          	inc    QWORD PTR [rax+0x10]
  92ae65:	ff 15 85 25 fd 00    	call   QWORD PTR [rip+0xfd2585]        # 18fd3f0 <_DYNAMIC+0x1af0>
  92ae6b:	48 8d 05 0e 69 f2 00 	lea    rax,[rip+0xf2690e]        # 1851780 <anon.609a31ba814f1e4156e50677fc366a7f.492.llvm.5215769359700358943+0x1090>
  92ae72:	48 89 84 24 10 06 00 	mov    QWORD PTR [rsp+0x610],rax
  92ae79:	00 
  92ae7a:	48 c7 84 24 18 06 00 	mov    QWORD PTR [rsp+0x618],0x1
  92ae81:	00 01 00 00 00 
  92ae86:	48 c7 84 24 20 06 00 	mov    QWORD PTR [rsp+0x620],0x8
  92ae8d:	00 08 00 00 00 
  92ae92:	66 0f 57 c0          	xorpd  xmm0,xmm0
  92ae96:	66 0f 11 84 24 28 06 	movupd XMMWORD PTR [rsp+0x628],xmm0
  92ae9d:	00 00 
  92ae9f:	48 8d bc 24 10 06 00 	lea    rdi,[rsp+0x610]
  92aea6:	00 
  92aea7:	ff 15 b3 16 fd 00    	call   QWORD PTR [rip+0xfd16b3]        # 18fc560 <_DYNAMIC+0xc60>
  92aead:	48 8d bc 24 00 05 00 	lea    rdi,[rsp+0x500]
  92aeb4:	00 
  92aeb5:	e8 96 df fc ff       	call   8f8e50 <core::ptr::drop_in_place<alloc::vec::Vec<(alloc::string::String,alloc::vec::Vec<usize>)>>>
  92aeba:	48 8b b4 24 00 03 00 	mov    rsi,QWORD PTR [rsp+0x300]
  92aec1:	00 
  92aec2:	48 85 f6             	test   rsi,rsi
  92aec5:	74 17                	je     92aede <future_backtest::RunnerCore::run_multi+0x890e>
  92aec7:	48 8b bc 24 08 03 00 	mov    rdi,QWORD PTR [rsp+0x308]
  92aece:	00 
  92aecf:	48 c1 e6 03          	shl    rsi,0x3
  92aed3:	ba 08 00 00 00       	mov    edx,0x8
  92aed8:	ff 15 42 0c fd 00    	call   QWORD PTR [rip+0xfd0c42]        # 18fbb20 <_DYNAMIC+0x220>
  92aede:	c7 44 24 68 00 00 00 	mov    DWORD PTR [rsp+0x68],0x0
  92aee5:	00 
  92aee6:	48 8d bc 24 d0 11 00 	lea    rdi,[rsp+0x11d0]
  92aeed:	00 
  92aeee:	e8 8d 26 fd ff       	call   8fd580 <core::ptr::drop_in_place<future_backtest::Customer::customer_params::StrategyParams>>
  92aef3:	48 8b b4 24 e8 00 00 	mov    rsi,QWORD PTR [rsp+0xe8]
  92aefa:	00 
  92aefb:	48 85 f6             	test   rsi,rsi
  92aefe:	74 17                	je     92af17 <future_backtest::RunnerCore::run_multi+0x8947>
  92af00:	48 8b bc 24 f0 00 00 	mov    rdi,QWORD PTR [rsp+0xf0]
  92af07:	00 
  92af08:	48 c1 e6 03          	shl    rsi,0x3
  92af0c:	ba 08 00 00 00       	mov    edx,0x8
  92af11:	ff 15 09 0c fd 00    	call   QWORD PTR [rip+0xfd0c09]        # 18fbb20 <_DYNAMIC+0x220>
  92af17:	48 8d bc 24 80 1b 00 	lea    rdi,[rsp+0x1b80]
  92af1e:	00 
  92af1f:	e8 5c 26 fd ff       	call   8fd580 <core::ptr::drop_in_place<future_backtest::Customer::customer_params::StrategyParams>>
  92af24:	48 8d bc 24 e0 0e 00 	lea    rdi,[rsp+0xee0]
  92af2b:	00 
  92af2c:	8b 6c 24 20          	mov    ebp,DWORD PTR [rsp+0x20]
  92af30:	e8 ab 3f fd ff       	call   8feee0 <core::ptr::drop_in_place<core::option::Option<future_backtest::RunnerCore::MetaRunState>>>
  92af35:	48 8d bc 24 a8 01 00 	lea    rdi,[rsp+0x1a8]
  92af3c:	00 
  92af3d:	e8 9e 47 fd ff       	call   8ff6e0 <core::ptr::drop_in_place<alloc::vec::Vec<future_backtest::DataStruct::event_slice::EventSlice>>>
  92af42:	48 8d bc 24 60 18 00 	lea    rdi,[rsp+0x1860]
  92af49:	00 
  92af4a:	e8 d1 36 fd ff       	call   8fe620 <core::ptr::drop_in_place<future_backtest::MultiStrategy::event_producer::EventProducer>>
  92af4f:	48 8d 7c 24 38       	lea    rdi,[rsp+0x38]
  92af54:	e8 b7 3e fd ff       	call   8fee10 <core::ptr::drop_in_place<alloc::vec::Vec<future_backtest::Strategy::strategy::Strategy>>>
  92af59:	48 8b 84 24 88 00 00 	mov    rax,QWORD PTR [rsp+0x88]
  92af60:	00 
  92af61:	48 ff 08             	dec    QWORD PTR [rax]
  92af64:	8b 6c 24 20          	mov    ebp,DWORD PTR [rsp+0x20]
  92af68:	75 0e                	jne    92af78 <future_backtest::RunnerCore::run_multi+0x89a8>
  92af6a:	48 8d bc 24 60 03 00 	lea    rdi,[rsp+0x360]
  92af71:	00 
  92af72:	ff 15 d8 15 fd 00    	call   QWORD PTR [rip+0xfd15d8]        # 18fc550 <_DYNAMIC+0xc50>
  92af78:	48 8b 44 24 18       	mov    rax,QWORD PTR [rsp+0x18]
  92af7d:	48 ff 08             	dec    QWORD PTR [rax]
  92af80:	75 0e                	jne    92af90 <future_backtest::RunnerCore::run_multi+0x89c0>
  92af82:	48 8d bc 24 58 03 00 	lea    rdi,[rsp+0x358]
  92af89:	00 
  92af8a:	ff 15 c8 15 fd 00    	call   QWORD PTR [rip+0xfd15c8]        # 18fc558 <_DYNAMIC+0xc58>
  92af90:	48 8d bc 24 d0 00 00 	lea    rdi,[rsp+0xd0]
  92af97:	00 
  92af98:	e8 c3 42 fd ff       	call   8ff260 <core::ptr::drop_in_place<alloc::vec::Vec<future_backtest::Config::config::StrategyConfig>>>
  92af9d:	45 31 ff             	xor    r15d,r15d
  92afa0:	e9 9b ae ff ff       	jmp    925e40 <future_backtest::RunnerCore::run_multi+0x3870>
  92afa5:	48 8d 05 bc 61 f2 00 	lea    rax,[rip+0xf261bc]        # 1851168 <anon.609a31ba814f1e4156e50677fc366a7f.492.llvm.5215769359700358943+0xa78>
  92afac:	48 89 84 24 10 06 00 	mov    QWORD PTR [rsp+0x610],rax
  92afb3:	00 
  92afb4:	48 c7 84 24 18 06 00 	mov    QWORD PTR [rsp+0x618],0x1
  92afbb:	00 01 00 00 00 
  92afc0:	48 c7 84 24 20 06 00 	mov    QWORD PTR [rsp+0x620],0x8
  92afc7:	00 08 00 00 00 
  92afcc:	66 0f ef c0          	pxor   xmm0,xmm0
  92afd0:	f3 0f 7f 84 24 28 06 	movdqu XMMWORD PTR [rsp+0x628],xmm0
  92afd7:	00 00 
  92afd9:	48 8d bc 24 10 06 00 	lea    rdi,[rsp+0x610]
  92afe0:	00 
  92afe1:	e8 4a 96 fd ff       	call   904630 <anyhow::__private::format_err>
  92afe6:	e9 8c b3 ff ff       	jmp    926377 <future_backtest::RunnerCore::run_multi+0x3da7>
  92afeb:	48 8d 05 86 5c f2 00 	lea    rax,[rip+0xf25c86]        # 1850c78 <anon.609a31ba814f1e4156e50677fc366a7f.492.llvm.5215769359700358943+0x588>
  92aff2:	48 89 84 24 10 06 00 	mov    QWORD PTR [rsp+0x610],rax
  92aff9:	00 
  92affa:	48 c7 84 24 18 06 00 	mov    QWORD PTR [rsp+0x618],0x1
  92b001:	00 01 00 00 00 
  92b006:	48 c7 84 24 20 06 00 	mov    QWORD PTR [rsp+0x620],0x8
  92b00d:	00 08 00 00 00 
  92b012:	66 0f 57 c0          	xorpd  xmm0,xmm0
  92b016:	66 0f 11 84 24 28 06 	movupd XMMWORD PTR [rsp+0x628],xmm0
  92b01d:	00 00 
  92b01f:	48 8d bc 24 10 06 00 	lea    rdi,[rsp+0x610]
  92b026:	00 
  92b027:	e8 04 96 fd ff       	call   904630 <anyhow::__private::format_err>
  92b02c:	49 89 c7             	mov    r15,rax
  92b02f:	48 8d bc 24 d0 11 00 	lea    rdi,[rsp+0x11d0]
  92b036:	00 
  92b037:	e8 c4 fc fc ff       	call   8fad00 <core::ptr::drop_in_place<libloading::error::Error>>
  92b03c:	e9 e0 e6 ff ff       	jmp    929721 <future_backtest::RunnerCore::run_multi+0x7151>
  92b041:	48 8d 05 68 6c f2 00 	lea    rax,[rip+0xf26c68]        # 1851cb0 <anon.609a31ba814f1e4156e50677fc366a7f.492.llvm.5215769359700358943+0x15c0>
  92b048:	48 89 84 24 10 01 00 	mov    QWORD PTR [rsp+0x110],rax
  92b04f:	00 
  92b050:	48 8b bc 24 10 01 00 	mov    rdi,QWORD PTR [rsp+0x110]
  92b057:	00 
  92b058:	ff 15 e2 11 fd 00    	call   QWORD PTR [rip+0xfd11e2]        # 18fc240 <_DYNAMIC+0x940>
  92b05e:	e9 b9 04 00 00       	jmp    92b51c <future_backtest::RunnerCore::run_multi+0x8f4c>
  92b063:	48 8d 15 b6 5b f2 00 	lea    rdx,[rip+0xf25bb6]        # 1850c20 <anon.609a31ba814f1e4156e50677fc366a7f.492.llvm.5215769359700358943+0x530>
  92b06a:	be 20 00 00 00       	mov    esi,0x20
  92b06f:	48 89 c7             	mov    rdi,rax
  92b072:	ff 15 e0 12 fd 00    	call   QWORD PTR [rip+0xfd12e0]        # 18fc358 <_DYNAMIC+0xa58>
  92b078:	e9 9f 04 00 00       	jmp    92b51c <future_backtest::RunnerCore::run_multi+0x8f4c>
  92b07d:	48 8b b4 24 b0 10 00 	mov    rsi,QWORD PTR [rsp+0x10b0]
  92b084:	00 
  92b085:	48 85 f6             	test   rsi,rsi
  92b088:	0f 84 55 fc ff ff    	je     92ace3 <future_backtest::RunnerCore::run_multi+0x8713>
  92b08e:	48 8b bc 24 b8 10 00 	mov    rdi,QWORD PTR [rsp+0x10b8]
  92b095:	00 
  92b096:	ba 01 00 00 00       	mov    edx,0x1
  92b09b:	ff 15 7f 0a fd 00    	call   QWORD PTR [rip+0xfd0a7f]        # 18fbb20 <_DYNAMIC+0x220>
  92b0a1:	e9 3d fc ff ff       	jmp    92ace3 <future_backtest::RunnerCore::run_multi+0x8713>
  92b0a6:	48 8d 15 a3 5d f2 00 	lea    rdx,[rip+0xf25da3]        # 1850e50 <anon.609a31ba814f1e4156e50677fc366a7f.492.llvm.5215769359700358943+0x760>
  92b0ad:	4c 89 ff             	mov    rdi,r15
  92b0b0:	4c 89 fe             	mov    rsi,r15
  92b0b3:	ff 15 97 0f fd 00    	call   QWORD PTR [rip+0xfd0f97]        # 18fc050 <_DYNAMIC+0x750>
  92b0b9:	e9 5e 04 00 00       	jmp    92b51c <future_backtest::RunnerCore::run_multi+0x8f4c>
  92b0be:	4c 89 94 24 e0 05 00 	mov    QWORD PTR [rsp+0x5e0],r10
  92b0c5:	00 
  92b0c6:	48 8d 15 2b 6c f2 00 	lea    rdx,[rip+0xf26c2b]        # 1851cf8 <anon.609a31ba814f1e4156e50677fc366a7f.492.llvm.5215769359700358943+0x1608>
  92b0cd:	eb 21                	jmp    92b0f0 <future_backtest::RunnerCore::run_multi+0x8b20>
  92b0cf:	bf 08 00 00 00       	mov    edi,0x8
  92b0d4:	be 08 00 00 00       	mov    esi,0x8
  92b0d9:	ff 15 91 0e fd 00    	call   QWORD PTR [rip+0xfd0e91]        # 18fbf70 <_DYNAMIC+0x670>
  92b0df:	e9 38 04 00 00       	jmp    92b51c <future_backtest::RunnerCore::run_multi+0x8f4c>
  92b0e4:	48 8d 15 f5 5f f2 00 	lea    rdx,[rip+0xf25ff5]        # 18510e0 <anon.609a31ba814f1e4156e50677fc366a7f.492.llvm.5215769359700358943+0x9f0>
  92b0eb:	31 ff                	xor    edi,edi
  92b0ed:	45 31 ff             	xor    r15d,r15d
  92b0f0:	40 b5 01             	mov    bpl,0x1
  92b0f3:	4c 89 fe             	mov    rsi,r15
  92b0f6:	ff 15 54 0f fd 00    	call   QWORD PTR [rip+0xfd0f54]        # 18fc050 <_DYNAMIC+0x750>
  92b0fc:	e9 1b 04 00 00       	jmp    92b51c <future_backtest::RunnerCore::run_multi+0x8f4c>
  92b101:	48 8d 3d 20 68 f2 00 	lea    rdi,[rip+0xf26820]        # 1851928 <anon.609a31ba814f1e4156e50677fc366a7f.492.llvm.5215769359700358943+0x1238>
  92b108:	ff 15 a2 0d fd 00    	call   QWORD PTR [rip+0xfd0da2]        # 18fbeb0 <_DYNAMIC+0x5b0>
  92b10e:	e9 09 04 00 00       	jmp    92b51c <future_backtest::RunnerCore::run_multi+0x8f4c>
  92b113:	48 8d 15 f6 5f f2 00 	lea    rdx,[rip+0xf25ff6]        # 1851110 <anon.609a31ba814f1e4156e50677fc366a7f.492.llvm.5215769359700358943+0xa20>
  92b11a:	31 ff                	xor    edi,edi
  92b11c:	31 f6                	xor    esi,esi
  92b11e:	ff 15 2c 0f fd 00    	call   QWORD PTR [rip+0xfd0f2c]        # 18fc050 <_DYNAMIC+0x750>
  92b124:	e9 f3 03 00 00       	jmp    92b51c <future_backtest::RunnerCore::run_multi+0x8f4c>
  92b129:	48 8d 15 10 60 f2 00 	lea    rdx,[rip+0xf26010]        # 1851140 <anon.609a31ba814f1e4156e50677fc366a7f.492.llvm.5215769359700358943+0xa50>
  92b130:	31 ff                	xor    edi,edi
  92b132:	31 f6                	xor    esi,esi
  92b134:	ff 15 16 0f fd 00    	call   QWORD PTR [rip+0xfd0f16]        # 18fc050 <_DYNAMIC+0x750>
  92b13a:	e9 dd 03 00 00       	jmp    92b51c <future_backtest::RunnerCore::run_multi+0x8f4c>
  92b13f:	48 8d 3d aa 6a f2 00 	lea    rdi,[rip+0xf26aaa]        # 1851bf0 <anon.609a31ba814f1e4156e50677fc366a7f.492.llvm.5215769359700358943+0x1500>
  92b146:	ff 15 f4 10 fd 00    	call   QWORD PTR [rip+0xfd10f4]        # 18fc240 <_DYNAMIC+0x940>
  92b14c:	e9 cb 03 00 00       	jmp    92b51c <future_backtest::RunnerCore::run_multi+0x8f4c>
  92b151:	48 8d 3d 28 67 f2 00 	lea    rdi,[rip+0xf26728]        # 1851880 <anon.609a31ba814f1e4156e50677fc366a7f.492.llvm.5215769359700358943+0x1190>
  92b158:	ff 15 52 0d fd 00    	call   QWORD PTR [rip+0xfd0d52]        # 18fbeb0 <_DYNAMIC+0x5b0>
  92b15e:	e9 b9 03 00 00       	jmp    92b51c <future_backtest::RunnerCore::run_multi+0x8f4c>
  92b163:	48 8d 3d 2e 67 f2 00 	lea    rdi,[rip+0xf2672e]        # 1851898 <anon.609a31ba814f1e4156e50677fc366a7f.492.llvm.5215769359700358943+0x11a8>
  92b16a:	ff 15 40 0d fd 00    	call   QWORD PTR [rip+0xfd0d40]        # 18fbeb0 <_DYNAMIC+0x5b0>
  92b170:	e9 a7 03 00 00       	jmp    92b51c <future_backtest::RunnerCore::run_multi+0x8f4c>
  92b175:	48 8d 3d 34 67 f2 00 	lea    rdi,[rip+0xf26734]        # 18518b0 <anon.609a31ba814f1e4156e50677fc366a7f.492.llvm.5215769359700358943+0x11c0>
  92b17c:	ff 15 2e 0d fd 00    	call   QWORD PTR [rip+0xfd0d2e]        # 18fbeb0 <_DYNAMIC+0x5b0>
  92b182:	e9 95 03 00 00       	jmp    92b51c <future_backtest::RunnerCore::run_multi+0x8f4c>
  92b187:	48 8d 15 52 60 f2 00 	lea    rdx,[rip+0xf26052]        # 18511e0 <anon.609a31ba814f1e4156e50677fc366a7f.492.llvm.5215769359700358943+0xaf0>
  92b18e:	31 ff                	xor    edi,edi
  92b190:	31 f6                	xor    esi,esi
  92b192:	ff 15 b8 0e fd 00    	call   QWORD PTR [rip+0xfd0eb8]        # 18fc050 <_DYNAMIC+0x750>
  92b198:	e9 7f 03 00 00       	jmp    92b51c <future_backtest::RunnerCore::run_multi+0x8f4c>
  92b19d:	48 8d 3d 34 6a f2 00 	lea    rdi,[rip+0xf26a34]        # 1851bd8 <anon.609a31ba814f1e4156e50677fc366a7f.492.llvm.5215769359700358943+0x14e8>
  92b1a4:	ff 15 96 10 fd 00    	call   QWORD PTR [rip+0xfd1096]        # 18fc240 <_DYNAMIC+0x940>
  92b1aa:	e9 6d 03 00 00       	jmp    92b51c <future_backtest::RunnerCore::run_multi+0x8f4c>
  92b1af:	48 8d 15 52 69 f2 00 	lea    rdx,[rip+0xf26952]        # 1851b08 <anon.609a31ba814f1e4156e50677fc366a7f.492.llvm.5215769359700358943+0x1418>
  92b1b6:	48 89 ef             	mov    rdi,rbp
  92b1b9:	ff 15 91 0e fd 00    	call   QWORD PTR [rip+0xfd0e91]        # 18fc050 <_DYNAMIC+0x750>
  92b1bf:	e9 58 03 00 00       	jmp    92b51c <future_backtest::RunnerCore::run_multi+0x8f4c>
  92b1c4:	48 8d 15 55 69 f2 00 	lea    rdx,[rip+0xf26955]        # 1851b20 <anon.609a31ba814f1e4156e50677fc366a7f.492.llvm.5215769359700358943+0x1430>
  92b1cb:	ff 15 7f 0e fd 00    	call   QWORD PTR [rip+0xfd0e7f]        # 18fc050 <_DYNAMIC+0x750>
  92b1d1:	e9 46 03 00 00       	jmp    92b51c <future_backtest::RunnerCore::run_multi+0x8f4c>
  92b1d6:	48 8d 3d 1b 67 f2 00 	lea    rdi,[rip+0xf2671b]        # 18518f8 <anon.609a31ba814f1e4156e50677fc366a7f.492.llvm.5215769359700358943+0x1208>
  92b1dd:	ff 15 cd 0c fd 00    	call   QWORD PTR [rip+0xfd0ccd]        # 18fbeb0 <_DYNAMIC+0x5b0>
  92b1e3:	e9 34 03 00 00       	jmp    92b51c <future_backtest::RunnerCore::run_multi+0x8f4c>
  92b1e8:	48 8d 15 d1 68 f2 00 	lea    rdx,[rip+0xf268d1]        # 1851ac0 <anon.609a31ba814f1e4156e50677fc366a7f.492.llvm.5215769359700358943+0x13d0>
  92b1ef:	ff 15 5b 0e fd 00    	call   QWORD PTR [rip+0xfd0e5b]        # 18fc050 <_DYNAMIC+0x750>
  92b1f5:	e9 22 03 00 00       	jmp    92b51c <future_backtest::RunnerCore::run_multi+0x8f4c>
  92b1fa:	48 89 d3             	mov    rbx,rdx
  92b1fd:	48 8d 05 6c 64 f2 00 	lea    rax,[rip+0xf2646c]        # 1851670 <anon.609a31ba814f1e4156e50677fc366a7f.492.llvm.5215769359700358943+0xf80>
  92b204:	48 89 84 24 08 01 00 	mov    QWORD PTR [rsp+0x108],rax
  92b20b:	00 
  92b20c:	48 89 df             	mov    rdi,rbx
  92b20f:	48 8b 94 24 08 01 00 	mov    rdx,QWORD PTR [rsp+0x108]
  92b216:	00 
  92b217:	ff 15 33 0e fd 00    	call   QWORD PTR [rip+0xfd0e33]        # 18fc050 <_DYNAMIC+0x750>
  92b21d:	e9 fa 02 00 00       	jmp    92b51c <future_backtest::RunnerCore::run_multi+0x8f4c>
  92b222:	48 8d 15 5f 64 f2 00 	lea    rdx,[rip+0xf2645f]        # 1851688 <anon.609a31ba814f1e4156e50677fc366a7f.492.llvm.5215769359700358943+0xf98>
  92b229:	ff 15 21 0e fd 00    	call   QWORD PTR [rip+0xfd0e21]        # 18fc050 <_DYNAMIC+0x750>
  92b22f:	e9 e8 02 00 00       	jmp    92b51c <future_backtest::RunnerCore::run_multi+0x8f4c>
  92b234:	4c 89 eb             	mov    rbx,r13
  92b237:	48 8d 05 ea 63 f2 00 	lea    rax,[rip+0xf263ea]        # 1851628 <anon.609a31ba814f1e4156e50677fc366a7f.492.llvm.5215769359700358943+0xf38>
  92b23e:	48 89 d7             	mov    rdi,rdx
  92b241:	48 89 c2             	mov    rdx,rax
  92b244:	ff 15 06 0e fd 00    	call   QWORD PTR [rip+0xfd0e06]        # 18fc050 <_DYNAMIC+0x750>
  92b24a:	e9 cd 02 00 00       	jmp    92b51c <future_backtest::RunnerCore::run_multi+0x8f4c>
  92b24f:	48 89 5c 24 50       	mov    QWORD PTR [rsp+0x50],rbx
  92b254:	48 89 ef             	mov    rdi,rbp
  92b257:	48 8b 54 24 50       	mov    rdx,QWORD PTR [rsp+0x50]
  92b25c:	ff 15 ee 0d fd 00    	call   QWORD PTR [rip+0xfd0dee]        # 18fc050 <_DYNAMIC+0x750>
  92b262:	e9 b5 02 00 00       	jmp    92b51c <future_backtest::RunnerCore::run_multi+0x8f4c>
  92b267:	45 31 ed             	xor    r13d,r13d
  92b26a:	e9 6c b9 ff ff       	jmp    926bdb <future_backtest::RunnerCore::run_multi+0x460b>
  92b26f:	b0 01                	mov    al,0x1
  92b271:	89 44 24 68          	mov    DWORD PTR [rsp+0x68],eax
  92b275:	48 8d 15 ac 5f f2 00 	lea    rdx,[rip+0xf25fac]        # 1851228 <anon.609a31ba814f1e4156e50677fc366a7f.492.llvm.5215769359700358943+0xb38>
  92b27c:	31 ff                	xor    edi,edi
  92b27e:	31 f6                	xor    esi,esi
  92b280:	ff 15 ca 0d fd 00    	call   QWORD PTR [rip+0xfd0dca]        # 18fc050 <_DYNAMIC+0x750>
  92b286:	e9 91 02 00 00       	jmp    92b51c <future_backtest::RunnerCore::run_multi+0x8f4c>
  92b28b:	48 8d 05 0e 67 f2 00 	lea    rax,[rip+0xf2670e]        # 18519a0 <anon.609a31ba814f1e4156e50677fc366a7f.492.llvm.5215769359700358943+0x12b0>
  92b292:	48 89 84 24 10 01 00 	mov    QWORD PTR [rsp+0x110],rax
  92b299:	00 
  92b29a:	48 8b 94 24 10 01 00 	mov    rdx,QWORD PTR [rsp+0x110]
  92b2a1:	00 
  92b2a2:	ff 15 a8 0d fd 00    	call   QWORD PTR [rip+0xfd0da8]        # 18fc050 <_DYNAMIC+0x750>
  92b2a8:	e9 6f 02 00 00       	jmp    92b51c <future_backtest::RunnerCore::run_multi+0x8f4c>
  92b2ad:	4c 89 eb             	mov    rbx,r13
  92b2b0:	48 8d 05 99 62 f2 00 	lea    rax,[rip+0xf26299]        # 1851550 <anon.609a31ba814f1e4156e50677fc366a7f.492.llvm.5215769359700358943+0xe60>
  92b2b7:	48 89 d7             	mov    rdi,rdx
  92b2ba:	48 89 c2             	mov    rdx,rax
  92b2bd:	ff 15 8d 0d fd 00    	call   QWORD PTR [rip+0xfd0d8d]        # 18fc050 <_DYNAMIC+0x750>
  92b2c3:	e9 54 02 00 00       	jmp    92b51c <future_backtest::RunnerCore::run_multi+0x8f4c>
  92b2c8:	48 8d 05 11 63 f2 00 	lea    rax,[rip+0xf26311]        # 18515e0 <anon.609a31ba814f1e4156e50677fc366a7f.492.llvm.5215769359700358943+0xef0>
  92b2cf:	e9 47 01 00 00       	jmp    92b41b <future_backtest::RunnerCore::run_multi+0x8e4b>
  92b2d4:	48 8d 15 35 66 f2 00 	lea    rdx,[rip+0xf26635]        # 1851910 <anon.609a31ba814f1e4156e50677fc366a7f.492.llvm.5215769359700358943+0x1220>
  92b2db:	ff 15 6f 0d fd 00    	call   QWORD PTR [rip+0xfd0d6f]        # 18fc050 <_DYNAMIC+0x750>
  92b2e1:	e9 36 02 00 00       	jmp    92b51c <future_backtest::RunnerCore::run_multi+0x8f4c>
  92b2e6:	48 8d 15 9b 5d f2 00 	lea    rdx,[rip+0xf25d9b]        # 1851088 <anon.609a31ba814f1e4156e50677fc366a7f.492.llvm.5215769359700358943+0x998>
  92b2ed:	31 ff                	xor    edi,edi
  92b2ef:	31 f6                	xor    esi,esi
  92b2f1:	ff 15 59 0d fd 00    	call   QWORD PTR [rip+0xfd0d59]        # 18fc050 <_DYNAMIC+0x750>
  92b2f7:	e9 20 02 00 00       	jmp    92b51c <future_backtest::RunnerCore::run_multi+0x8f4c>
  92b2fc:	48 8d 15 b5 5f f2 00 	lea    rdx,[rip+0xf25fb5]        # 18512b8 <anon.609a31ba814f1e4156e50677fc366a7f.492.llvm.5215769359700358943+0xbc8>
  92b303:	48 89 df             	mov    rdi,rbx
  92b306:	ff 15 44 0d fd 00    	call   QWORD PTR [rip+0xfd0d44]        # 18fc050 <_DYNAMIC+0x750>
  92b30c:	e9 0b 02 00 00       	jmp    92b51c <future_backtest::RunnerCore::run_multi+0x8f4c>
  92b311:	48 89 de             	mov    rsi,rbx
  92b314:	48 8d 05 f5 62 f2 00 	lea    rax,[rip+0xf262f5]        # 1851610 <anon.609a31ba814f1e4156e50677fc366a7f.492.llvm.5215769359700358943+0xf20>
  92b31b:	48 89 84 24 d0 04 00 	mov    QWORD PTR [rsp+0x4d0],rax
  92b322:	00 
  92b323:	48 8b 94 24 d0 04 00 	mov    rdx,QWORD PTR [rsp+0x4d0]
  92b32a:	00 
  92b32b:	ff 15 1f 0d fd 00    	call   QWORD PTR [rip+0xfd0d1f]        # 18fc050 <_DYNAMIC+0x750>
  92b331:	e9 e6 01 00 00       	jmp    92b51c <future_backtest::RunnerCore::run_multi+0x8f4c>
  92b336:	48 8d 05 f3 5f f2 00 	lea    rax,[rip+0xf25ff3]        # 1851330 <anon.609a31ba814f1e4156e50677fc366a7f.492.llvm.5215769359700358943+0xc40>
  92b33d:	e9 d9 00 00 00       	jmp    92b41b <future_backtest::RunnerCore::run_multi+0x8e4b>
  92b342:	48 8b 9c 24 38 03 00 	mov    rbx,QWORD PTR [rsp+0x338]
  92b349:	00 
  92b34a:	48 8d 05 f7 5f f2 00 	lea    rax,[rip+0xf25ff7]        # 1851348 <anon.609a31ba814f1e4156e50677fc366a7f.492.llvm.5215769359700358943+0xc58>
  92b351:	e9 c5 00 00 00       	jmp    92b41b <future_backtest::RunnerCore::run_multi+0x8e4b>
  92b356:	48 8d 05 33 60 f2 00 	lea    rax,[rip+0xf26033]        # 1851390 <anon.609a31ba814f1e4156e50677fc366a7f.492.llvm.5215769359700358943+0xca0>
  92b35d:	e9 b9 00 00 00       	jmp    92b41b <future_backtest::RunnerCore::run_multi+0x8e4b>
  92b362:	48 8d 05 3f 60 f2 00 	lea    rax,[rip+0xf2603f]        # 18513a8 <anon.609a31ba814f1e4156e50677fc366a7f.492.llvm.5215769359700358943+0xcb8>
  92b369:	e9 ad 00 00 00       	jmp    92b41b <future_backtest::RunnerCore::run_multi+0x8e4b>
  92b36e:	48 8d 05 53 61 f2 00 	lea    rax,[rip+0xf26153]        # 18514c8 <anon.609a31ba814f1e4156e50677fc366a7f.492.llvm.5215769359700358943+0xdd8>
  92b375:	e9 a1 00 00 00       	jmp    92b41b <future_backtest::RunnerCore::run_multi+0x8e4b>
  92b37a:	48 8d 3d b7 61 f2 00 	lea    rdi,[rip+0xf261b7]        # 1851538 <anon.609a31ba814f1e4156e50677fc366a7f.492.llvm.5215769359700358943+0xe48>
  92b381:	ff 15 b1 0f fd 00    	call   QWORD PTR [rip+0xfd0fb1]        # 18fc338 <_DYNAMIC+0xa38>
  92b387:	e9 90 01 00 00       	jmp    92b51c <future_backtest::RunnerCore::run_multi+0x8f4c>
  92b38c:	48 8d 05 1d 62 f2 00 	lea    rax,[rip+0xf2621d]        # 18515b0 <anon.609a31ba814f1e4156e50677fc366a7f.492.llvm.5215769359700358943+0xec0>
  92b393:	e9 6e 01 00 00       	jmp    92b506 <future_backtest::RunnerCore::run_multi+0x8f36>
  92b398:	48 8d 05 61 5f f2 00 	lea    rax,[rip+0xf25f61]        # 1851300 <anon.609a31ba814f1e4156e50677fc366a7f.492.llvm.5215769359700358943+0xc10>
  92b39f:	eb 7a                	jmp    92b41b <future_backtest::RunnerCore::run_multi+0x8e4b>
  92b3a1:	48 8d 05 70 5f f2 00 	lea    rax,[rip+0xf25f70]        # 1851318 <anon.609a31ba814f1e4156e50677fc366a7f.492.llvm.5215769359700358943+0xc28>
  92b3a8:	eb 71                	jmp    92b41b <future_backtest::RunnerCore::run_multi+0x8e4b>
  92b3aa:	48 8d 05 e7 61 f2 00 	lea    rax,[rip+0xf261e7]        # 1851598 <anon.609a31ba814f1e4156e50677fc366a7f.492.llvm.5215769359700358943+0xea8>
  92b3b1:	e9 50 01 00 00       	jmp    92b506 <future_backtest::RunnerCore::run_multi+0x8f36>
  92b3b6:	48 8d 05 eb 63 f2 00 	lea    rax,[rip+0xf263eb]        # 18517a8 <anon.609a31ba814f1e4156e50677fc366a7f.492.llvm.5215769359700358943+0x10b8>
  92b3bd:	e9 d0 fe ff ff       	jmp    92b292 <future_backtest::RunnerCore::run_multi+0x8cc2>
  92b3c2:	31 ff                	xor    edi,edi
  92b3c4:	31 f6                	xor    esi,esi
  92b3c6:	eb 0f                	jmp    92b3d7 <future_backtest::RunnerCore::run_multi+0x8e07>
  92b3c8:	48 8d 05 69 64 f2 00 	lea    rax,[rip+0xf26469]        # 1851838 <anon.609a31ba814f1e4156e50677fc366a7f.492.llvm.5215769359700358943+0x1148>
  92b3cf:	48 89 84 24 c0 00 00 	mov    QWORD PTR [rsp+0xc0],rax
  92b3d6:	00 
  92b3d7:	48 8b 94 24 c0 00 00 	mov    rdx,QWORD PTR [rsp+0xc0]
  92b3de:	00 
  92b3df:	ff 15 6b 0c fd 00    	call   QWORD PTR [rip+0xfd0c6b]        # 18fc050 <_DYNAMIC+0x750>
  92b3e5:	e9 32 01 00 00       	jmp    92b51c <future_backtest::RunnerCore::run_multi+0x8f4c>
  92b3ea:	48 8b b4 24 38 03 00 	mov    rsi,QWORD PTR [rsp+0x338]
  92b3f1:	00 
  92b3f2:	48 8d 05 7f 5f f2 00 	lea    rax,[rip+0xf25f7f]        # 1851378 <anon.609a31ba814f1e4156e50677fc366a7f.492.llvm.5215769359700358943+0xc88>
  92b3f9:	48 89 84 24 d8 05 00 	mov    QWORD PTR [rsp+0x5d8],rax
  92b400:	00 
  92b401:	48 8b 94 24 d8 05 00 	mov    rdx,QWORD PTR [rsp+0x5d8]
  92b408:	00 
  92b409:	ff 15 41 0c fd 00    	call   QWORD PTR [rip+0xfd0c41]        # 18fc050 <_DYNAMIC+0x750>
  92b40f:	e9 08 01 00 00       	jmp    92b51c <future_backtest::RunnerCore::run_multi+0x8f4c>
  92b414:	48 8d 05 a5 5f f2 00 	lea    rax,[rip+0xf25fa5]        # 18513c0 <anon.609a31ba814f1e4156e50677fc366a7f.492.llvm.5215769359700358943+0xcd0>
  92b41b:	48 89 84 24 30 01 00 	mov    QWORD PTR [rsp+0x130],rax
  92b422:	00 
  92b423:	48 89 d7             	mov    rdi,rdx
  92b426:	48 89 de             	mov    rsi,rbx
  92b429:	48 8b 94 24 30 01 00 	mov    rdx,QWORD PTR [rsp+0x130]
  92b430:	00 
  92b431:	ff 15 19 0c fd 00    	call   QWORD PTR [rip+0xfd0c19]        # 18fc050 <_DYNAMIC+0x750>
  92b437:	e9 e0 00 00 00       	jmp    92b51c <future_backtest::RunnerCore::run_multi+0x8f4c>
  92b43c:	48 8d 15 ad 5f f2 00 	lea    rdx,[rip+0xf25fad]        # 18513f0 <anon.609a31ba814f1e4156e50677fc366a7f.492.llvm.5215769359700358943+0xd00>
  92b443:	ff 15 07 0c fd 00    	call   QWORD PTR [rip+0xfd0c07]        # 18fc050 <_DYNAMIC+0x750>
  92b449:	e9 ce 00 00 00       	jmp    92b51c <future_backtest::RunnerCore::run_multi+0x8f4c>
  92b44e:	48 8d 15 cb 5f f2 00 	lea    rdx,[rip+0xf25fcb]        # 1851420 <anon.609a31ba814f1e4156e50677fc366a7f.492.llvm.5215769359700358943+0xd30>
  92b455:	ff 15 f5 0b fd 00    	call   QWORD PTR [rip+0xfd0bf5]        # 18fc050 <_DYNAMIC+0x750>
  92b45b:	e9 bc 00 00 00       	jmp    92b51c <future_backtest::RunnerCore::run_multi+0x8f4c>
  92b460:	48 8d 15 e9 5f f2 00 	lea    rdx,[rip+0xf25fe9]        # 1851450 <anon.609a31ba814f1e4156e50677fc366a7f.492.llvm.5215769359700358943+0xd60>
  92b467:	ff 15 e3 0b fd 00    	call   QWORD PTR [rip+0xfd0be3]        # 18fc050 <_DYNAMIC+0x750>
  92b46d:	e9 aa 00 00 00       	jmp    92b51c <future_backtest::RunnerCore::run_multi+0x8f4c>
  92b472:	48 8d 15 ef 5f f2 00 	lea    rdx,[rip+0xf25fef]        # 1851468 <anon.609a31ba814f1e4156e50677fc366a7f.492.llvm.5215769359700358943+0xd78>
  92b479:	ff 15 d1 0b fd 00    	call   QWORD PTR [rip+0xfd0bd1]        # 18fc050 <_DYNAMIC+0x750>
  92b47f:	e9 98 00 00 00       	jmp    92b51c <future_backtest::RunnerCore::run_multi+0x8f4c>
  92b484:	48 8d 15 0d 60 f2 00 	lea    rdx,[rip+0xf2600d]        # 1851498 <anon.609a31ba814f1e4156e50677fc366a7f.492.llvm.5215769359700358943+0xda8>
  92b48b:	ff 15 bf 0b fd 00    	call   QWORD PTR [rip+0xfd0bbf]        # 18fc050 <_DYNAMIC+0x750>
  92b491:	e9 86 00 00 00       	jmp    92b51c <future_backtest::RunnerCore::run_multi+0x8f4c>
  92b496:	48 8d 3d 13 60 f2 00 	lea    rdi,[rip+0xf26013]        # 18514b0 <anon.609a31ba814f1e4156e50677fc366a7f.492.llvm.5215769359700358943+0xdc0>
  92b49d:	ff 15 9d 0d fd 00    	call   QWORD PTR [rip+0xfd0d9d]        # 18fc240 <_DYNAMIC+0x940>
  92b4a3:	eb 77                	jmp    92b51c <future_backtest::RunnerCore::run_multi+0x8f4c>
  92b4a5:	48 8d 3d e4 62 f2 00 	lea    rdi,[rip+0xf262e4]        # 1851790 <anon.609a31ba814f1e4156e50677fc366a7f.492.llvm.5215769359700358943+0x10a0>
  92b4ac:	ff 15 8e 0d fd 00    	call   QWORD PTR [rip+0xfd0d8e]        # 18fc240 <_DYNAMIC+0x940>
  92b4b2:	eb 68                	jmp    92b51c <future_backtest::RunnerCore::run_multi+0x8f4c>
  92b4b4:	48 8d 15 25 60 f2 00 	lea    rdx,[rip+0xf26025]        # 18514e0 <anon.609a31ba814f1e4156e50677fc366a7f.492.llvm.5215769359700358943+0xdf0>
  92b4bb:	ff 15 8f 0b fd 00    	call   QWORD PTR [rip+0xfd0b8f]        # 18fc050 <_DYNAMIC+0x750>
  92b4c1:	eb 59                	jmp    92b51c <future_backtest::RunnerCore::run_multi+0x8f4c>
  92b4c3:	48 8d 05 9e 63 f2 00 	lea    rax,[rip+0xf2639e]        # 1851868 <anon.609a31ba814f1e4156e50677fc366a7f.492.llvm.5215769359700358943+0x1178>
  92b4ca:	e9 c3 fd ff ff       	jmp    92b292 <future_backtest::RunnerCore::run_multi+0x8cc2>
  92b4cf:	48 8d 05 2a 62 f2 00 	lea    rax,[rip+0xf2622a]        # 1851700 <anon.609a31ba814f1e4156e50677fc366a7f.492.llvm.5215769359700358943+0x1010>
  92b4d6:	48 89 84 24 10 01 00 	mov    QWORD PTR [rsp+0x110],rax
  92b4dd:	00 
  92b4de:	31 ff                	xor    edi,edi
  92b4e0:	31 f6                	xor    esi,esi
  92b4e2:	e9 b3 fd ff ff       	jmp    92b29a <future_backtest::RunnerCore::run_multi+0x8cca>
  92b4e7:	48 8d 05 fa 5d f2 00 	lea    rax,[rip+0xf25dfa]        # 18512e8 <anon.609a31ba814f1e4156e50677fc366a7f.492.llvm.5215769359700358943+0xbf8>
  92b4ee:	eb 16                	jmp    92b506 <future_backtest::RunnerCore::run_multi+0x8f36>
  92b4f0:	48 8d 3d d9 5d f2 00 	lea    rdi,[rip+0xf25dd9]        # 18512d0 <anon.609a31ba814f1e4156e50677fc366a7f.492.llvm.5215769359700358943+0xbe0>
  92b4f7:	ff 15 3b 0e fd 00    	call   QWORD PTR [rip+0xfd0e3b]        # 18fc338 <_DYNAMIC+0xa38>
  92b4fd:	eb 1d                	jmp    92b51c <future_backtest::RunnerCore::run_multi+0x8f4c>
  92b4ff:	48 8d 05 9a 5d f2 00 	lea    rax,[rip+0xf25d9a]        # 18512a0 <anon.609a31ba814f1e4156e50677fc366a7f.492.llvm.5215769359700358943+0xbb0>
  92b506:	48 89 84 24 00 01 00 	mov    QWORD PTR [rsp+0x100],rax
  92b50d:	00 
  92b50e:	48 8b bc 24 00 01 00 	mov    rdi,QWORD PTR [rsp+0x100]
  92b515:	00 
  92b516:	ff 15 24 0d fd 00    	call   QWORD PTR [rip+0xfd0d24]        # 18fc240 <_DYNAMIC+0x940>
  92b51c:	0f 0b                	ud2    
  92b51e:	49 89 c4             	mov    r12,rax
  92b521:	48 8d bc 24 d0 11 00 	lea    rdi,[rsp+0x11d0]
  92b528:	00 
  92b529:	e8 d2 f7 fc ff       	call   8fad00 <core::ptr::drop_in_place<libloading::error::Error>>
  92b52e:	e9 d3 12 00 00       	jmp    92c806 <future_backtest::RunnerCore::run_multi+0xa236>
  92b533:	eb 77                	jmp    92b5ac <future_backtest::RunnerCore::run_multi+0x8fdc>
  92b535:	49 89 c4             	mov    r12,rax
  92b538:	48 8b 44 24 18       	mov    rax,QWORD PTR [rsp+0x18]
  92b53d:	48 ff 40 10          	inc    QWORD PTR [rax+0x10]
  92b541:	e9 df 08 00 00       	jmp    92be25 <future_backtest::RunnerCore::run_multi+0x9855>
  92b546:	49 89 c4             	mov    r12,rax
  92b549:	40 0f b6 f5          	movzx  esi,bpl
  92b54d:	48 89 df             	mov    rdi,rbx
  92b550:	e8 3b e1 fc ff       	call   8f9690 <core::ptr::drop_in_place<std::sync::poison::mutex::MutexGuard<future_backtest::MetaControl::output::MetaOrderMetrics>>>
  92b555:	e9 fc 0d 00 00       	jmp    92c356 <future_backtest::RunnerCore::run_multi+0x9d86>
  92b55a:	e9 08 02 00 00       	jmp    92b767 <future_backtest::RunnerCore::run_multi+0x9197>
  92b55f:	e9 82 0a 00 00       	jmp    92bfe6 <future_backtest::RunnerCore::run_multi+0x9a16>
  92b564:	49 89 c4             	mov    r12,rax
  92b567:	48 8d 04 6d 00 00 00 	lea    rax,[rbp*2+0x0]
  92b56e:	00 
  92b56f:	48 85 c0             	test   rax,rax
  92b572:	0f 84 1c 09 00 00    	je     92be94 <future_backtest::RunnerCore::run_multi+0x98c4>
  92b578:	e9 1d 0a 00 00       	jmp    92bf9a <future_backtest::RunnerCore::run_multi+0x99ca>
  92b57d:	49 89 c4             	mov    r12,rax
  92b580:	48 8d 04 5d 00 00 00 	lea    rax,[rbx*2+0x0]
  92b587:	00 
  92b588:	48 85 c0             	test   rax,rax
  92b58b:	0f 84 c5 0d 00 00    	je     92c356 <future_backtest::RunnerCore::run_multi+0x9d86>
  92b591:	e9 41 0a 00 00       	jmp    92bfd7 <future_backtest::RunnerCore::run_multi+0x9a07>
  92b596:	49 89 c4             	mov    r12,rax
  92b599:	48 8b 44 24 18       	mov    rax,QWORD PTR [rsp+0x18]
  92b59e:	48 ff 48 10          	dec    QWORD PTR [rax+0x10]
  92b5a2:	e9 26 08 00 00       	jmp    92bdcd <future_backtest::RunnerCore::run_multi+0x97fd>
  92b5a7:	e9 c7 08 00 00       	jmp    92be73 <future_backtest::RunnerCore::run_multi+0x98a3>
  92b5ac:	49 89 c4             	mov    r12,rax
  92b5af:	e9 eb 02 00 00       	jmp    92b89f <future_backtest::RunnerCore::run_multi+0x92cf>
  92b5b4:	e9 2c 03 00 00       	jmp    92b8e5 <future_backtest::RunnerCore::run_multi+0x9315>
  92b5b9:	49 89 c4             	mov    r12,rax
  92b5bc:	e9 e5 00 00 00       	jmp    92b6a6 <future_backtest::RunnerCore::run_multi+0x90d6>
  92b5c1:	49 89 c4             	mov    r12,rax
  92b5c4:	48 85 db             	test   rbx,rbx
  92b5c7:	0f 84 d9 00 00 00    	je     92b6a6 <future_backtest::RunnerCore::run_multi+0x90d6>
  92b5cd:	ba 01 00 00 00       	mov    edx,0x1
  92b5d2:	4c 89 f7             	mov    rdi,r14
  92b5d5:	48 89 de             	mov    rsi,rbx
  92b5d8:	ff 15 42 05 fd 00    	call   QWORD PTR [rip+0xfd0542]        # 18fbb20 <_DYNAMIC+0x220>
  92b5de:	e9 c3 00 00 00       	jmp    92b6a6 <future_backtest::RunnerCore::run_multi+0x90d6>
  92b5e3:	eb 0d                	jmp    92b5f2 <future_backtest::RunnerCore::run_multi+0x9022>
  92b5e5:	49 89 c4             	mov    r12,rax
  92b5e8:	e9 03 01 00 00       	jmp    92b6f0 <future_backtest::RunnerCore::run_multi+0x9120>
  92b5ed:	e9 a4 00 00 00       	jmp    92b696 <future_backtest::RunnerCore::run_multi+0x90c6>
  92b5f2:	49 89 c4             	mov    r12,rax
  92b5f5:	b3 01                	mov    bl,0x1
  92b5f7:	e9 cc 00 00 00       	jmp    92b6c8 <future_backtest::RunnerCore::run_multi+0x90f8>
  92b5fc:	49 89 c4             	mov    r12,rax
  92b5ff:	e9 ec 00 00 00       	jmp    92b6f0 <future_backtest::RunnerCore::run_multi+0x9120>
  92b604:	49 89 c4             	mov    r12,rax
  92b607:	48 8b 84 24 88 00 00 	mov    rax,QWORD PTR [rsp+0x88]
  92b60e:	00 
  92b60f:	48 ff 40 10          	inc    QWORD PTR [rax+0x10]
  92b613:	e9 b5 07 00 00       	jmp    92bdcd <future_backtest::RunnerCore::run_multi+0x97fd>
  92b618:	49 89 c4             	mov    r12,rax
  92b61b:	e9 86 00 00 00       	jmp    92b6a6 <future_backtest::RunnerCore::run_multi+0x90d6>
  92b620:	e9 c0 02 00 00       	jmp    92b8e5 <future_backtest::RunnerCore::run_multi+0x9315>
  92b625:	49 89 c4             	mov    r12,rax
  92b628:	48 8b b4 24 c0 01 00 	mov    rsi,QWORD PTR [rsp+0x1c0]
  92b62f:	00 
  92b630:	48 85 f6             	test   rsi,rsi
  92b633:	0f 84 af 02 00 00    	je     92b8e8 <future_backtest::RunnerCore::run_multi+0x9318>
  92b639:	48 8b bc 24 c8 01 00 	mov    rdi,QWORD PTR [rsp+0x1c8]
  92b640:	00 
  92b641:	ba 01 00 00 00       	mov    edx,0x1
  92b646:	ff 15 d4 04 fd 00    	call   QWORD PTR [rip+0xfd04d4]        # 18fbb20 <_DYNAMIC+0x220>
  92b64c:	e9 97 02 00 00       	jmp    92b8e8 <future_backtest::RunnerCore::run_multi+0x9318>
  92b651:	e9 8f 02 00 00       	jmp    92b8e5 <future_backtest::RunnerCore::run_multi+0x9315>
  92b656:	49 89 c4             	mov    r12,rax
  92b659:	48 8d bc 24 80 1b 00 	lea    rdi,[rsp+0x1b80]
  92b660:	00 
  92b661:	e8 7a 28 fd ff       	call   8fdee0 <core::ptr::drop_in_place<future_backtest::MetaControl::router::MetaDecisionSchedule>>
  92b666:	e9 bf 00 00 00       	jmp    92b72a <future_backtest::RunnerCore::run_multi+0x915a>
  92b66b:	49 89 c4             	mov    r12,rax
  92b66e:	48 8d bc 24 e0 0e 00 	lea    rdi,[rsp+0xee0]
  92b675:	00 
  92b676:	e8 25 18 d5 ff       	call   67cea0 <<alloc::collections::btree::map::BTreeMap<K,V,A> as core::ops::drop::Drop>::drop>
  92b67b:	e9 aa 00 00 00       	jmp    92b72a <future_backtest::RunnerCore::run_multi+0x915a>
  92b680:	e9 61 09 00 00       	jmp    92bfe6 <future_backtest::RunnerCore::run_multi+0x9a16>
  92b685:	49 89 c4             	mov    r12,rax
  92b688:	48 8b 44 24 18       	mov    rax,QWORD PTR [rsp+0x18]
  92b68d:	48 ff 40 10          	inc    QWORD PTR [rax+0x10]
  92b691:	e9 c0 0c 00 00       	jmp    92c356 <future_backtest::RunnerCore::run_multi+0x9d86>
  92b696:	49 89 c4             	mov    r12,rax
  92b699:	48 8d bc 24 00 05 00 	lea    rdi,[rsp+0x500]
  92b6a0:	00 
  92b6a1:	e8 6a 3f fd ff       	call   8ff610 <core::ptr::drop_in_place<future_backtest::BacktestResult::backtest_result::BacktestShareStatusSlice>>
  92b6a6:	48 8b b4 24 70 01 00 	mov    rsi,QWORD PTR [rsp+0x170]
  92b6ad:	00 
  92b6ae:	48 85 f6             	test   rsi,rsi
  92b6b1:	74 13                	je     92b6c6 <future_backtest::RunnerCore::run_multi+0x90f6>
  92b6b3:	48 8b bc 24 78 01 00 	mov    rdi,QWORD PTR [rsp+0x178]
  92b6ba:	00 
  92b6bb:	ba 01 00 00 00       	mov    edx,0x1
  92b6c0:	ff 15 5a 04 fd 00    	call   QWORD PTR [rip+0xfd045a]        # 18fbb20 <_DYNAMIC+0x220>
  92b6c6:	31 db                	xor    ebx,ebx
  92b6c8:	48 8b b4 24 20 03 00 	mov    rsi,QWORD PTR [rsp+0x320]
  92b6cf:	00 
  92b6d0:	48 85 f6             	test   rsi,rsi
  92b6d3:	74 13                	je     92b6e8 <future_backtest::RunnerCore::run_multi+0x9118>
  92b6d5:	48 8b bc 24 28 03 00 	mov    rdi,QWORD PTR [rsp+0x328]
  92b6dc:	00 
  92b6dd:	ba 01 00 00 00       	mov    edx,0x1
  92b6e2:	ff 15 38 04 fd 00    	call   QWORD PTR [rip+0xfd0438]        # 18fbb20 <_DYNAMIC+0x220>
  92b6e8:	84 db                	test   bl,bl
  92b6ea:	0f 84 dd 06 00 00    	je     92bdcd <future_backtest::RunnerCore::run_multi+0x97fd>
  92b6f0:	48 8b b4 24 e8 04 00 	mov    rsi,QWORD PTR [rsp+0x4e8]
  92b6f7:	00 
  92b6f8:	48 85 f6             	test   rsi,rsi
  92b6fb:	0f 84 cc 06 00 00    	je     92bdcd <future_backtest::RunnerCore::run_multi+0x97fd>
  92b701:	48 8b bc 24 f0 04 00 	mov    rdi,QWORD PTR [rsp+0x4f0]
  92b708:	00 
  92b709:	ba 01 00 00 00       	mov    edx,0x1
  92b70e:	ff 15 0c 04 fd 00    	call   QWORD PTR [rip+0xfd040c]        # 18fbb20 <_DYNAMIC+0x220>
  92b714:	e9 b4 06 00 00       	jmp    92bdcd <future_backtest::RunnerCore::run_multi+0x97fd>
  92b719:	49 89 c4             	mov    r12,rax
  92b71c:	48 8b 44 24 18       	mov    rax,QWORD PTR [rsp+0x18]
  92b721:	48 ff 48 10          	dec    QWORD PTR [rax+0x10]
  92b725:	eb 43                	jmp    92b76a <future_backtest::RunnerCore::run_multi+0x919a>
  92b727:	49 89 c4             	mov    r12,rax
  92b72a:	48 8b b4 24 60 18 00 	mov    rsi,QWORD PTR [rsp+0x1860]
  92b731:	00 
  92b732:	48 85 f6             	test   rsi,rsi
  92b735:	0f 84 e8 0e 00 00    	je     92c623 <future_backtest::RunnerCore::run_multi+0xa053>
  92b73b:	ba 01 00 00 00       	mov    edx,0x1
  92b740:	4c 89 f7             	mov    rdi,r14
  92b743:	ff 15 d7 03 fd 00    	call   QWORD PTR [rip+0xfd03d7]        # 18fbb20 <_DYNAMIC+0x220>
  92b749:	e9 d5 0e 00 00       	jmp    92c623 <future_backtest::RunnerCore::run_multi+0xa053>
  92b74e:	e9 17 03 00 00       	jmp    92ba6a <future_backtest::RunnerCore::run_multi+0x949a>
  92b753:	e9 72 06 00 00       	jmp    92bdca <future_backtest::RunnerCore::run_multi+0x97fa>
  92b758:	eb 31                	jmp    92b78b <future_backtest::RunnerCore::run_multi+0x91bb>
  92b75a:	49 89 c4             	mov    r12,rax
  92b75d:	e9 6f 0e 00 00       	jmp    92c5d1 <future_backtest::RunnerCore::run_multi+0xa001>
  92b762:	e9 7e 01 00 00       	jmp    92b8e5 <future_backtest::RunnerCore::run_multi+0x9315>
  92b767:	49 89 c4             	mov    r12,rax
  92b76a:	41 c6 06 00          	mov    BYTE PTR [r14],0x0
  92b76e:	48 85 db             	test   rbx,rbx
  92b771:	74 7e                	je     92b7f1 <future_backtest::RunnerCore::run_multi+0x9221>
  92b773:	ba 01 00 00 00       	mov    edx,0x1
  92b778:	4c 89 f7             	mov    rdi,r14
  92b77b:	48 89 de             	mov    rsi,rbx
  92b77e:	ff 15 9c 03 fd 00    	call   QWORD PTR [rip+0xfd039c]        # 18fbb20 <_DYNAMIC+0x220>
  92b784:	eb 6b                	jmp    92b7f1 <future_backtest::RunnerCore::run_multi+0x9221>
  92b786:	e9 fd 0c 00 00       	jmp    92c488 <future_backtest::RunnerCore::run_multi+0x9eb8>
  92b78b:	49 89 c4             	mov    r12,rax
  92b78e:	48 8b b4 24 b0 10 00 	mov    rsi,QWORD PTR [rsp+0x10b0]
  92b795:	00 
  92b796:	48 85 f6             	test   rsi,rsi
  92b799:	0f 84 b7 0b 00 00    	je     92c356 <future_backtest::RunnerCore::run_multi+0x9d86>
  92b79f:	48 8b bc 24 b8 10 00 	mov    rdi,QWORD PTR [rsp+0x10b8]
  92b7a6:	00 
  92b7a7:	e9 44 0b 00 00       	jmp    92c2f0 <future_backtest::RunnerCore::run_multi+0x9d20>
  92b7ac:	49 89 c4             	mov    r12,rax
  92b7af:	48 8b b4 24 c0 01 00 	mov    rsi,QWORD PTR [rsp+0x1c0]
  92b7b6:	00 
  92b7b7:	48 85 f6             	test   rsi,rsi
  92b7ba:	0f 84 96 0b 00 00    	je     92c356 <future_backtest::RunnerCore::run_multi+0x9d86>
  92b7c0:	48 8b bc 24 c8 01 00 	mov    rdi,QWORD PTR [rsp+0x1c8]
  92b7c7:	00 
  92b7c8:	e9 23 0b 00 00       	jmp    92c2f0 <future_backtest::RunnerCore::run_multi+0x9d20>
  92b7cd:	49 89 c4             	mov    r12,rax
  92b7d0:	48 8b b4 24 a0 03 00 	mov    rsi,QWORD PTR [rsp+0x3a0]
  92b7d7:	00 
  92b7d8:	48 85 f6             	test   rsi,rsi
  92b7db:	0f 85 58 0f 00 00    	jne    92c739 <future_backtest::RunnerCore::run_multi+0xa169>
  92b7e1:	e9 6a 0f 00 00       	jmp    92c750 <future_backtest::RunnerCore::run_multi+0xa180>
  92b7e6:	49 89 c4             	mov    r12,rax
  92b7e9:	e9 62 0f 00 00       	jmp    92c750 <future_backtest::RunnerCore::run_multi+0xa180>
  92b7ee:	49 89 c4             	mov    r12,rax
  92b7f1:	48 8d bc 24 c0 01 00 	lea    rdi,[rsp+0x1c0]
  92b7f8:	00 
  92b7f9:	e8 02 fa fc ff       	call   8fb200 <core::ptr::drop_in_place<future_backtest::ffi::FfiCtx>>
  92b7fe:	e9 ca 05 00 00       	jmp    92bdcd <future_backtest::RunnerCore::run_multi+0x97fd>
  92b803:	49 89 c4             	mov    r12,rax
  92b806:	48 8d bc 24 c0 01 00 	lea    rdi,[rsp+0x1c0]
  92b80d:	00 
  92b80e:	e8 ed f9 fc ff       	call   8fb200 <core::ptr::drop_in_place<future_backtest::ffi::FfiCtx>>
  92b813:	e9 ed 00 00 00       	jmp    92b905 <future_backtest::RunnerCore::run_multi+0x9335>
  92b818:	49 89 c4             	mov    r12,rax
  92b81b:	48 8d bc 24 10 06 00 	lea    rdi,[rsp+0x610]
  92b822:	00 
  92b823:	e8 c8 41 fd ff       	call   8ff9f0 <core::ptr::drop_in_place<future_backtest::Strategy::simulation::strategy_sos::watcher::StrategyWatcher>>
  92b828:	e9 6f 0f 00 00       	jmp    92c79c <future_backtest::RunnerCore::run_multi+0xa1cc>
  92b82d:	ff 15 8d 06 fd 00    	call   QWORD PTR [rip+0xfd068d]        # 18fbec0 <_DYNAMIC+0x5c0>
  92b833:	49 89 c4             	mov    r12,rax
  92b836:	48 8d bc 24 d0 11 00 	lea    rdi,[rsp+0x11d0]
  92b83d:	00 
  92b83e:	e8 8d 9c 07 00       	call   9a54d0 <<hashbrown::raw::RawTable<T,A> as core::ops::drop::Drop>::drop>
  92b843:	e9 54 0f 00 00       	jmp    92c79c <future_backtest::RunnerCore::run_multi+0xa1cc>
  92b848:	ff 15 72 06 fd 00    	call   QWORD PTR [rip+0xfd0672]        # 18fbec0 <_DYNAMIC+0x5c0>
  92b84e:	49 89 c4             	mov    r12,rax
  92b851:	48 8b b4 24 00 05 00 	mov    rsi,QWORD PTR [rsp+0x500]
  92b858:	00 
  92b859:	48 85 f6             	test   rsi,rsi
  92b85c:	0f 84 a7 0d 00 00    	je     92c609 <future_backtest::RunnerCore::run_multi+0xa039>
  92b862:	48 c1 e6 04          	shl    rsi,0x4
  92b866:	ba 08 00 00 00       	mov    edx,0x8
  92b86b:	48 89 df             	mov    rdi,rbx
  92b86e:	ff 15 ac 02 fd 00    	call   QWORD PTR [rip+0xfd02ac]        # 18fbb20 <_DYNAMIC+0x220>
  92b874:	e9 90 0d 00 00       	jmp    92c609 <future_backtest::RunnerCore::run_multi+0xa039>
  92b879:	eb 14                	jmp    92b88f <future_backtest::RunnerCore::run_multi+0x92bf>
  92b87b:	eb 12                	jmp    92b88f <future_backtest::RunnerCore::run_multi+0x92bf>
  92b87d:	49 89 c4             	mov    r12,rax
  92b880:	48 8d bc 24 00 05 00 	lea    rdi,[rsp+0x500]
  92b887:	00 
  92b888:	e8 93 8c 07 00       	call   9a4520 <<hashbrown::raw::RawTable<T,A> as core::ops::drop::Drop>::drop>
  92b88d:	eb 03                	jmp    92b892 <future_backtest::RunnerCore::run_multi+0x92c2>
  92b88f:	49 89 c4             	mov    r12,rax
  92b892:	48 8d bc 24 40 01 00 	lea    rdi,[rsp+0x140]
  92b899:	00 
  92b89a:	e8 61 7f 07 00       	call   9a3800 <<hashbrown::raw::RawTable<T,A> as core::ops::drop::Drop>::drop>
  92b89f:	48 8d bc 24 70 01 00 	lea    rdi,[rsp+0x170]
  92b8a6:	00 
  92b8a7:	e8 74 8c 07 00       	call   9a4520 <<hashbrown::raw::RawTable<T,A> as core::ops::drop::Drop>::drop>
  92b8ac:	e9 1c 05 00 00       	jmp    92bdcd <future_backtest::RunnerCore::run_multi+0x97fd>
  92b8b1:	49 89 c4             	mov    r12,rax
  92b8b4:	48 8d bc 24 80 1b 00 	lea    rdi,[rsp+0x1b80]
  92b8bb:	00 
  92b8bc:	e8 df 15 d5 ff       	call   67cea0 <<alloc::collections::btree::map::BTreeMap<K,V,A> as core::ops::drop::Drop>::drop>
  92b8c1:	e9 5d 0d 00 00       	jmp    92c623 <future_backtest::RunnerCore::run_multi+0xa053>
  92b8c6:	e9 89 03 00 00       	jmp    92bc54 <future_backtest::RunnerCore::run_multi+0x9684>
  92b8cb:	e9 fa 04 00 00       	jmp    92bdca <future_backtest::RunnerCore::run_multi+0x97fa>
  92b8d0:	49 89 c4             	mov    r12,rax
  92b8d3:	e9 3e 0d 00 00       	jmp    92c616 <future_backtest::RunnerCore::run_multi+0xa046>
  92b8d8:	49 89 c4             	mov    r12,rax
  92b8db:	e9 70 0e 00 00       	jmp    92c750 <future_backtest::RunnerCore::run_multi+0xa180>
  92b8e0:	e9 3e 0e 00 00       	jmp    92c723 <future_backtest::RunnerCore::run_multi+0xa153>
  92b8e5:	49 89 c4             	mov    r12,rax
  92b8e8:	48 8b 44 24 18       	mov    rax,QWORD PTR [rsp+0x18]
  92b8ed:	48 ff 40 10          	inc    QWORD PTR [rax+0x10]
  92b8f1:	e9 d7 04 00 00       	jmp    92bdcd <future_backtest::RunnerCore::run_multi+0x97fd>
  92b8f6:	e9 59 03 00 00       	jmp    92bc54 <future_backtest::RunnerCore::run_multi+0x9684>
  92b8fb:	e9 6a 01 00 00       	jmp    92ba6a <future_backtest::RunnerCore::run_multi+0x949a>
  92b900:	eb 00                	jmp    92b902 <future_backtest::RunnerCore::run_multi+0x9332>
  92b902:	49 89 c4             	mov    r12,rax
  92b905:	c6 45 00 00          	mov    BYTE PTR [rbp+0x0],0x0
  92b909:	48 83 7c 24 60 00    	cmp    QWORD PTR [rsp+0x60],0x0
  92b90f:	75 2b                	jne    92b93c <future_backtest::RunnerCore::run_multi+0x936c>
  92b911:	c6 03 00             	mov    BYTE PTR [rbx],0x0
  92b914:	48 83 bc 24 90 00 00 	cmp    QWORD PTR [rsp+0x90],0x0
  92b91b:	00 00 
  92b91d:	0f 85 f5 00 00 00    	jne    92ba18 <future_backtest::RunnerCore::run_multi+0x9448>
  92b923:	48 8b 44 24 70       	mov    rax,QWORD PTR [rsp+0x70]
  92b928:	c6 00 00             	mov    BYTE PTR [rax],0x0
  92b92b:	48 83 7c 24 50 00    	cmp    QWORD PTR [rsp+0x50],0x0
  92b931:	0f 85 1c 01 00 00    	jne    92ba53 <future_backtest::RunnerCore::run_multi+0x9483>
  92b937:	e9 31 01 00 00       	jmp    92ba6d <future_backtest::RunnerCore::run_multi+0x949d>
  92b93c:	ba 01 00 00 00       	mov    edx,0x1
  92b941:	48 89 ef             	mov    rdi,rbp
  92b944:	48 8b 74 24 60       	mov    rsi,QWORD PTR [rsp+0x60]
  92b949:	ff 15 d1 01 fd 00    	call   QWORD PTR [rip+0xfd01d1]        # 18fbb20 <_DYNAMIC+0x220>
  92b94f:	c6 03 00             	mov    BYTE PTR [rbx],0x0
  92b952:	48 83 bc 24 90 00 00 	cmp    QWORD PTR [rsp+0x90],0x0
  92b959:	00 00 
  92b95b:	74 c6                	je     92b923 <future_backtest::RunnerCore::run_multi+0x9353>
  92b95d:	e9 b6 00 00 00       	jmp    92ba18 <future_backtest::RunnerCore::run_multi+0x9448>
  92b962:	e9 63 04 00 00       	jmp    92bdca <future_backtest::RunnerCore::run_multi+0x97fa>
  92b967:	e9 b6 04 00 00       	jmp    92be22 <future_backtest::RunnerCore::run_multi+0x9852>
  92b96c:	49 89 c4             	mov    r12,rax
  92b96f:	48 8d bc 24 c0 01 00 	lea    rdi,[rsp+0x1c0]
  92b976:	00 
  92b977:	e8 84 f8 fc ff       	call   8fb200 <core::ptr::drop_in_place<future_backtest::ffi::FfiCtx>>
  92b97c:	e9 49 02 00 00       	jmp    92bbca <future_backtest::RunnerCore::run_multi+0x95fa>
  92b981:	e9 60 06 00 00       	jmp    92bfe6 <future_backtest::RunnerCore::run_multi+0x9a16>
  92b986:	e9 3f 04 00 00       	jmp    92bdca <future_backtest::RunnerCore::run_multi+0x97fa>
  92b98b:	e9 80 03 00 00       	jmp    92bd10 <future_backtest::RunnerCore::run_multi+0x9740>
  92b990:	e9 10 04 00 00       	jmp    92bda5 <future_backtest::RunnerCore::run_multi+0x97d5>
  92b995:	4c 89 eb             	mov    rbx,r13
  92b998:	49 89 c4             	mov    r12,rax
  92b99b:	48 8d bc 24 10 06 00 	lea    rdi,[rsp+0x610]
  92b9a2:	00 
  92b9a3:	e8 a8 d6 fc ff       	call   8f9050 <core::ptr::drop_in_place<core::result::Result<alloc::ffi::c_str::CString,alloc::ffi::c_str::NulError>>>
  92b9a8:	48 8b 44 24 50       	mov    rax,QWORD PTR [rsp+0x50]
  92b9ad:	c6 00 00             	mov    BYTE PTR [rax],0x0
  92b9b0:	48 83 bc 24 90 00 00 	cmp    QWORD PTR [rsp+0x90],0x0
  92b9b7:	00 00 
  92b9b9:	0f 84 2a 02 00 00    	je     92bbe9 <future_backtest::RunnerCore::run_multi+0x9619>
  92b9bf:	e9 58 02 00 00       	jmp    92bc1c <future_backtest::RunnerCore::run_multi+0x964c>
  92b9c4:	4c 89 eb             	mov    rbx,r13
  92b9c7:	49 89 c4             	mov    r12,rax
  92b9ca:	48 8d bc 24 10 06 00 	lea    rdi,[rsp+0x610]
  92b9d1:	00 
  92b9d2:	e8 79 d6 fc ff       	call   8f9050 <core::ptr::drop_in_place<core::result::Result<alloc::ffi::c_str::CString,alloc::ffi::c_str::NulError>>>
  92b9d7:	c6 03 00             	mov    BYTE PTR [rbx],0x0
  92b9da:	48 83 7c 24 70 00    	cmp    QWORD PTR [rsp+0x70],0x0
  92b9e0:	0f 85 59 02 00 00    	jne    92bc3f <future_backtest::RunnerCore::run_multi+0x966f>
  92b9e6:	e9 6c 02 00 00       	jmp    92bc57 <future_backtest::RunnerCore::run_multi+0x9687>
  92b9eb:	49 89 c4             	mov    r12,rax
  92b9ee:	48 8d bc 24 10 06 00 	lea    rdi,[rsp+0x610]
  92b9f5:	00 
  92b9f6:	e8 55 d6 fc ff       	call   8f9050 <core::ptr::drop_in_place<core::result::Result<alloc::ffi::c_str::CString,alloc::ffi::c_str::NulError>>>
  92b9fb:	e9 57 02 00 00       	jmp    92bc57 <future_backtest::RunnerCore::run_multi+0x9687>
  92ba00:	4c 89 eb             	mov    rbx,r13
  92ba03:	49 89 c4             	mov    r12,rax
  92ba06:	c6 03 00             	mov    BYTE PTR [rbx],0x0
  92ba09:	48 83 bc 24 90 00 00 	cmp    QWORD PTR [rsp+0x90],0x0
  92ba10:	00 00 
  92ba12:	0f 84 0b ff ff ff    	je     92b923 <future_backtest::RunnerCore::run_multi+0x9353>
  92ba18:	ba 01 00 00 00       	mov    edx,0x1
  92ba1d:	48 89 df             	mov    rdi,rbx
  92ba20:	48 8b b4 24 90 00 00 	mov    rsi,QWORD PTR [rsp+0x90]
  92ba27:	00 
  92ba28:	ff 15 f2 00 fd 00    	call   QWORD PTR [rip+0xfd00f2]        # 18fbb20 <_DYNAMIC+0x220>
  92ba2e:	48 8b 44 24 70       	mov    rax,QWORD PTR [rsp+0x70]
  92ba33:	c6 00 00             	mov    BYTE PTR [rax],0x0
  92ba36:	48 83 7c 24 50 00    	cmp    QWORD PTR [rsp+0x50],0x0
  92ba3c:	75 15                	jne    92ba53 <future_backtest::RunnerCore::run_multi+0x9483>
  92ba3e:	eb 2d                	jmp    92ba6d <future_backtest::RunnerCore::run_multi+0x949d>
  92ba40:	49 89 c4             	mov    r12,rax
  92ba43:	48 8b 44 24 70       	mov    rax,QWORD PTR [rsp+0x70]
  92ba48:	c6 00 00             	mov    BYTE PTR [rax],0x0
  92ba4b:	48 83 7c 24 50 00    	cmp    QWORD PTR [rsp+0x50],0x0
  92ba51:	74 1a                	je     92ba6d <future_backtest::RunnerCore::run_multi+0x949d>
  92ba53:	ba 01 00 00 00       	mov    edx,0x1
  92ba58:	48 8b 7c 24 70       	mov    rdi,QWORD PTR [rsp+0x70]
  92ba5d:	48 8b 74 24 50       	mov    rsi,QWORD PTR [rsp+0x50]
  92ba62:	ff 15 b8 00 fd 00    	call   QWORD PTR [rip+0xfd00b8]        # 18fbb20 <_DYNAMIC+0x220>
  92ba68:	eb 03                	jmp    92ba6d <future_backtest::RunnerCore::run_multi+0x949d>
  92ba6a:	49 89 c4             	mov    r12,rax
  92ba6d:	48 8d bc 24 70 01 00 	lea    rdi,[rsp+0x170]
  92ba74:	00 
  92ba75:	e8 16 39 fd ff       	call   8ff390 <core::ptr::drop_in_place<alloc::vec::Vec<future_backtest::Order::trade_order::TradingOrder>>>
  92ba7a:	e9 4e 03 00 00       	jmp    92bdcd <future_backtest::RunnerCore::run_multi+0x97fd>
  92ba7f:	e9 62 05 00 00       	jmp    92bfe6 <future_backtest::RunnerCore::run_multi+0x9a16>
  92ba84:	49 89 c4             	mov    r12,rax
  92ba87:	48 8d bc 24 d0 11 00 	lea    rdi,[rsp+0x11d0]
  92ba8e:	00 
  92ba8f:	e8 dc 14 fd ff       	call   8fcf70 <core::ptr::drop_in_place<(alloc::string::String,alloc::string::String)>>
  92ba94:	e9 bf 0a 00 00       	jmp    92c558 <future_backtest::RunnerCore::run_multi+0x9f88>
  92ba99:	49 89 c4             	mov    r12,rax
  92ba9c:	48 8d bc 24 10 06 00 	lea    rdi,[rsp+0x610]
  92baa3:	00 
  92baa4:	e8 a7 d5 fc ff       	call   8f9050 <core::ptr::drop_in_place<core::result::Result<alloc::ffi::c_str::CString,alloc::ffi::c_str::NulError>>>
  92baa9:	48 8b 44 24 50       	mov    rax,QWORD PTR [rsp+0x50]
  92baae:	c6 00 00             	mov    BYTE PTR [rax],0x0
  92bab1:	48 83 bc 24 90 00 00 	cmp    QWORD PTR [rsp+0x90],0x0
  92bab8:	00 00 
  92baba:	0f 85 96 02 00 00    	jne    92bd56 <future_backtest::RunnerCore::run_multi+0x9786>
  92bac0:	e9 a9 02 00 00       	jmp    92bd6e <future_backtest::RunnerCore::run_multi+0x979e>
  92bac5:	49 89 c4             	mov    r12,rax
  92bac8:	48 8d bc 24 10 06 00 	lea    rdi,[rsp+0x610]
  92bacf:	00 
  92bad0:	e8 7b d5 fc ff       	call   8f9050 <core::ptr::drop_in_place<core::result::Result<alloc::ffi::c_str::CString,alloc::ffi::c_str::NulError>>>
  92bad5:	41 c6 07 00          	mov    BYTE PTR [r15],0x0
  92bad9:	48 83 bc 24 a0 00 00 	cmp    QWORD PTR [rsp+0xa0],0x0
  92bae0:	00 00 
  92bae2:	0f 84 47 02 00 00    	je     92bd2f <future_backtest::RunnerCore::run_multi+0x975f>
  92bae8:	e9 9a 01 00 00       	jmp    92bc87 <future_backtest::RunnerCore::run_multi+0x96b7>
  92baed:	49 89 c4             	mov    r12,rax
  92baf0:	48 8d bc 24 10 06 00 	lea    rdi,[rsp+0x610]
  92baf7:	00 
  92baf8:	e8 53 d5 fc ff       	call   8f9050 <core::ptr::drop_in_place<core::result::Result<alloc::ffi::c_str::CString,alloc::ffi::c_str::NulError>>>
  92bafd:	48 8b 44 24 70       	mov    rax,QWORD PTR [rsp+0x70]
  92bb02:	c6 00 00             	mov    BYTE PTR [rax],0x0
  92bb05:	48 83 7c 24 60 00    	cmp    QWORD PTR [rsp+0x60],0x0
  92bb0b:	0f 84 32 02 00 00    	je     92bd43 <future_backtest::RunnerCore::run_multi+0x9773>
  92bb11:	e9 9b 01 00 00       	jmp    92bcb1 <future_backtest::RunnerCore::run_multi+0x96e1>
  92bb16:	49 89 c4             	mov    r12,rax
  92bb19:	48 8d bc 24 10 06 00 	lea    rdi,[rsp+0x610]
  92bb20:	00 
  92bb21:	e8 2a d5 fc ff       	call   8f9050 <core::ptr::drop_in_place<core::result::Result<alloc::ffi::c_str::CString,alloc::ffi::c_str::NulError>>>
  92bb26:	e9 43 02 00 00       	jmp    92bd6e <future_backtest::RunnerCore::run_multi+0x979e>
  92bb2b:	49 89 c4             	mov    r12,rax
  92bb2e:	48 8b b4 24 10 06 00 	mov    rsi,QWORD PTR [rsp+0x610]
  92bb35:	00 
  92bb36:	48 85 f6             	test   rsi,rsi
  92bb39:	74 17                	je     92bb52 <future_backtest::RunnerCore::run_multi+0x9582>
  92bb3b:	48 8b bc 24 18 06 00 	mov    rdi,QWORD PTR [rsp+0x618]
  92bb42:	00 
  92bb43:	48 c1 e6 03          	shl    rsi,0x3
  92bb47:	ba 08 00 00 00       	mov    edx,0x8
  92bb4c:	ff 15 ce ff fc 00    	call   QWORD PTR [rip+0xfcffce]        # 18fbb20 <_DYNAMIC+0x220>
  92bb52:	48 8d bc 24 80 1b 00 	lea    rdi,[rsp+0x1b80]
  92bb59:	00 
  92bb5a:	e8 31 39 fd ff       	call   8ff490 <core::ptr::drop_in_place<core::option::Option<alloc::vec::Vec<alloc::string::String>>>>
  92bb5f:	e9 a7 0d 00 00       	jmp    92c90b <future_backtest::RunnerCore::run_multi+0xa33b>
  92bb64:	e9 7d 04 00 00       	jmp    92bfe6 <future_backtest::RunnerCore::run_multi+0x9a16>
  92bb69:	e9 c9 06 00 00       	jmp    92c237 <future_backtest::RunnerCore::run_multi+0x9c67>
  92bb6e:	e9 57 02 00 00       	jmp    92bdca <future_backtest::RunnerCore::run_multi+0x97fa>
  92bb73:	e9 f0 03 00 00       	jmp    92bf68 <future_backtest::RunnerCore::run_multi+0x9998>
  92bb78:	49 89 c4             	mov    r12,rax
  92bb7b:	48 8d bc 24 10 06 00 	lea    rdi,[rsp+0x610]
  92bb82:	00 
  92bb83:	ff 15 97 16 fd 00    	call   QWORD PTR [rip+0xfd1697]        # 18fd220 <_DYNAMIC+0x1920>
  92bb89:	e9 dd 03 00 00       	jmp    92bf6b <future_backtest::RunnerCore::run_multi+0x999b>
  92bb8e:	ff 15 2c 03 fd 00    	call   QWORD PTR [rip+0xfd032c]        # 18fbec0 <_DYNAMIC+0x5c0>
  92bb94:	eb 31                	jmp    92bbc7 <future_backtest::RunnerCore::run_multi+0x95f7>
  92bb96:	4c 89 eb             	mov    rbx,r13
  92bb99:	49 89 c4             	mov    r12,rax
  92bb9c:	48 8b 44 24 50       	mov    rax,QWORD PTR [rsp+0x50]
  92bba1:	c6 00 00             	mov    BYTE PTR [rax],0x0
  92bba4:	48 83 bc 24 90 00 00 	cmp    QWORD PTR [rsp+0x90],0x0
  92bbab:	00 00 
  92bbad:	74 3a                	je     92bbe9 <future_backtest::RunnerCore::run_multi+0x9619>
  92bbaf:	eb 6b                	jmp    92bc1c <future_backtest::RunnerCore::run_multi+0x964c>
  92bbb1:	4c 89 eb             	mov    rbx,r13
  92bbb4:	49 89 c4             	mov    r12,rax
  92bbb7:	c6 03 00             	mov    BYTE PTR [rbx],0x0
  92bbba:	48 83 7c 24 70 00    	cmp    QWORD PTR [rsp+0x70],0x0
  92bbc0:	75 7d                	jne    92bc3f <future_backtest::RunnerCore::run_multi+0x966f>
  92bbc2:	e9 90 00 00 00       	jmp    92bc57 <future_backtest::RunnerCore::run_multi+0x9687>
  92bbc7:	49 89 c4             	mov    r12,rax
  92bbca:	c6 45 00 00          	mov    BYTE PTR [rbp+0x0],0x0
  92bbce:	48 83 7c 24 60 00    	cmp    QWORD PTR [rsp+0x60],0x0
  92bbd4:	75 20                	jne    92bbf6 <future_backtest::RunnerCore::run_multi+0x9626>
  92bbd6:	48 8b 44 24 50       	mov    rax,QWORD PTR [rsp+0x50]
  92bbdb:	c6 00 00             	mov    BYTE PTR [rax],0x0
  92bbde:	48 83 bc 24 90 00 00 	cmp    QWORD PTR [rsp+0x90],0x0
  92bbe5:	00 00 
  92bbe7:	75 33                	jne    92bc1c <future_backtest::RunnerCore::run_multi+0x964c>
  92bbe9:	c6 03 00             	mov    BYTE PTR [rbx],0x0
  92bbec:	48 83 7c 24 70 00    	cmp    QWORD PTR [rsp+0x70],0x0
  92bbf2:	75 4b                	jne    92bc3f <future_backtest::RunnerCore::run_multi+0x966f>
  92bbf4:	eb 61                	jmp    92bc57 <future_backtest::RunnerCore::run_multi+0x9687>
  92bbf6:	ba 01 00 00 00       	mov    edx,0x1
  92bbfb:	48 89 ef             	mov    rdi,rbp
  92bbfe:	48 8b 74 24 60       	mov    rsi,QWORD PTR [rsp+0x60]
  92bc03:	ff 15 17 ff fc 00    	call   QWORD PTR [rip+0xfcff17]        # 18fbb20 <_DYNAMIC+0x220>
  92bc09:	48 8b 44 24 50       	mov    rax,QWORD PTR [rsp+0x50]
  92bc0e:	c6 00 00             	mov    BYTE PTR [rax],0x0
  92bc11:	48 83 bc 24 90 00 00 	cmp    QWORD PTR [rsp+0x90],0x0
  92bc18:	00 00 
  92bc1a:	74 cd                	je     92bbe9 <future_backtest::RunnerCore::run_multi+0x9619>
  92bc1c:	ba 01 00 00 00       	mov    edx,0x1
  92bc21:	48 8b 7c 24 50       	mov    rdi,QWORD PTR [rsp+0x50]
  92bc26:	48 8b b4 24 90 00 00 	mov    rsi,QWORD PTR [rsp+0x90]
  92bc2d:	00 
  92bc2e:	ff 15 ec fe fc 00    	call   QWORD PTR [rip+0xfcfeec]        # 18fbb20 <_DYNAMIC+0x220>
  92bc34:	c6 03 00             	mov    BYTE PTR [rbx],0x0
  92bc37:	48 83 7c 24 70 00    	cmp    QWORD PTR [rsp+0x70],0x0
  92bc3d:	74 18                	je     92bc57 <future_backtest::RunnerCore::run_multi+0x9687>
  92bc3f:	ba 01 00 00 00       	mov    edx,0x1
  92bc44:	48 89 df             	mov    rdi,rbx
  92bc47:	48 8b 74 24 70       	mov    rsi,QWORD PTR [rsp+0x70]
  92bc4c:	ff 15 ce fe fc 00    	call   QWORD PTR [rip+0xfcfece]        # 18fbb20 <_DYNAMIC+0x220>
  92bc52:	eb 03                	jmp    92bc57 <future_backtest::RunnerCore::run_multi+0x9687>
  92bc54:	49 89 c4             	mov    r12,rax
  92bc57:	48 8d bc 24 70 01 00 	lea    rdi,[rsp+0x170]
  92bc5e:	00 
  92bc5f:	e8 2c 37 fd ff       	call   8ff390 <core::ptr::drop_in_place<alloc::vec::Vec<future_backtest::Order::trade_order::TradingOrder>>>
  92bc64:	e9 64 01 00 00       	jmp    92bdcd <future_backtest::RunnerCore::run_multi+0x97fd>
  92bc69:	49 89 c4             	mov    r12,rax
  92bc6c:	e9 b2 09 00 00       	jmp    92c623 <future_backtest::RunnerCore::run_multi+0xa053>
  92bc71:	49 89 c4             	mov    r12,rax
  92bc74:	41 c6 07 00          	mov    BYTE PTR [r15],0x0
  92bc78:	48 83 bc 24 a0 00 00 	cmp    QWORD PTR [rsp+0xa0],0x0
  92bc7f:	00 00 
  92bc81:	0f 84 a8 00 00 00    	je     92bd2f <future_backtest::RunnerCore::run_multi+0x975f>
  92bc87:	ba 01 00 00 00       	mov    edx,0x1
  92bc8c:	4c 89 ff             	mov    rdi,r15
  92bc8f:	48 8b b4 24 a0 00 00 	mov    rsi,QWORD PTR [rsp+0xa0]
  92bc96:	00 
  92bc97:	ff 15 83 fe fc 00    	call   QWORD PTR [rip+0xfcfe83]        # 18fbb20 <_DYNAMIC+0x220>
  92bc9d:	48 8b 44 24 70       	mov    rax,QWORD PTR [rsp+0x70]
  92bca2:	c6 00 00             	mov    BYTE PTR [rax],0x0
  92bca5:	48 83 7c 24 60 00    	cmp    QWORD PTR [rsp+0x60],0x0
  92bcab:	0f 84 92 00 00 00    	je     92bd43 <future_backtest::RunnerCore::run_multi+0x9773>
  92bcb1:	ba 01 00 00 00       	mov    edx,0x1
  92bcb6:	48 8b 7c 24 70       	mov    rdi,QWORD PTR [rsp+0x70]
  92bcbb:	48 8b 74 24 60       	mov    rsi,QWORD PTR [rsp+0x60]
  92bcc0:	ff 15 5a fe fc 00    	call   QWORD PTR [rip+0xfcfe5a]        # 18fbb20 <_DYNAMIC+0x220>
  92bcc6:	48 8b 44 24 50       	mov    rax,QWORD PTR [rsp+0x50]
  92bccb:	c6 00 00             	mov    BYTE PTR [rax],0x0
  92bcce:	48 83 bc 24 90 00 00 	cmp    QWORD PTR [rsp+0x90],0x0
  92bcd5:	00 00 
  92bcd7:	75 7d                	jne    92bd56 <future_backtest::RunnerCore::run_multi+0x9786>
  92bcd9:	e9 90 00 00 00       	jmp    92bd6e <future_backtest::RunnerCore::run_multi+0x979e>
  92bcde:	49 89 c4             	mov    r12,rax
  92bce1:	48 8b 44 24 70       	mov    rax,QWORD PTR [rsp+0x70]
  92bce6:	c6 00 00             	mov    BYTE PTR [rax],0x0
  92bce9:	48 83 7c 24 60 00    	cmp    QWORD PTR [rsp+0x60],0x0
  92bcef:	74 52                	je     92bd43 <future_backtest::RunnerCore::run_multi+0x9773>
  92bcf1:	eb be                	jmp    92bcb1 <future_backtest::RunnerCore::run_multi+0x96e1>
  92bcf3:	49 89 c4             	mov    r12,rax
  92bcf6:	48 8b 44 24 50       	mov    rax,QWORD PTR [rsp+0x50]
  92bcfb:	c6 00 00             	mov    BYTE PTR [rax],0x0
  92bcfe:	48 83 bc 24 90 00 00 	cmp    QWORD PTR [rsp+0x90],0x0
  92bd05:	00 00 
  92bd07:	75 4d                	jne    92bd56 <future_backtest::RunnerCore::run_multi+0x9786>
  92bd09:	eb 63                	jmp    92bd6e <future_backtest::RunnerCore::run_multi+0x979e>
  92bd0b:	49 89 c4             	mov    r12,rax
  92bd0e:	eb 5e                	jmp    92bd6e <future_backtest::RunnerCore::run_multi+0x979e>
  92bd10:	49 89 c4             	mov    r12,rax
  92bd13:	41 c6 06 00          	mov    BYTE PTR [r14],0x0
  92bd17:	4d 85 ed             	test   r13,r13
  92bd1a:	75 64                	jne    92bd80 <future_backtest::RunnerCore::run_multi+0x97b0>
  92bd1c:	41 c6 07 00          	mov    BYTE PTR [r15],0x0
  92bd20:	48 83 bc 24 a0 00 00 	cmp    QWORD PTR [rsp+0xa0],0x0
  92bd27:	00 00 
  92bd29:	0f 85 58 ff ff ff    	jne    92bc87 <future_backtest::RunnerCore::run_multi+0x96b7>
  92bd2f:	48 8b 44 24 70       	mov    rax,QWORD PTR [rsp+0x70]
  92bd34:	c6 00 00             	mov    BYTE PTR [rax],0x0
  92bd37:	48 83 7c 24 60 00    	cmp    QWORD PTR [rsp+0x60],0x0
  92bd3d:	0f 85 6e ff ff ff    	jne    92bcb1 <future_backtest::RunnerCore::run_multi+0x96e1>
  92bd43:	48 8b 44 24 50       	mov    rax,QWORD PTR [rsp+0x50]
  92bd48:	c6 00 00             	mov    BYTE PTR [rax],0x0
  92bd4b:	48 83 bc 24 90 00 00 	cmp    QWORD PTR [rsp+0x90],0x0
  92bd52:	00 00 
  92bd54:	74 18                	je     92bd6e <future_backtest::RunnerCore::run_multi+0x979e>
  92bd56:	ba 01 00 00 00       	mov    edx,0x1
  92bd5b:	48 8b 7c 24 50       	mov    rdi,QWORD PTR [rsp+0x50]
  92bd60:	48 8b b4 24 90 00 00 	mov    rsi,QWORD PTR [rsp+0x90]
  92bd67:	00 
  92bd68:	ff 15 b2 fd fc 00    	call   QWORD PTR [rip+0xfcfdb2]        # 18fbb20 <_DYNAMIC+0x220>
  92bd6e:	48 8d bc 24 c0 01 00 	lea    rdi,[rsp+0x1c0]
  92bd75:	00 
  92bd76:	e8 85 f4 fc ff       	call   8fb200 <core::ptr::drop_in_place<future_backtest::ffi::FfiCtx>>
  92bd7b:	e9 a5 00 00 00       	jmp    92be25 <future_backtest::RunnerCore::run_multi+0x9855>
  92bd80:	ba 01 00 00 00       	mov    edx,0x1
  92bd85:	4c 89 f7             	mov    rdi,r14
  92bd88:	4c 89 ee             	mov    rsi,r13
  92bd8b:	ff 15 8f fd fc 00    	call   QWORD PTR [rip+0xfcfd8f]        # 18fbb20 <_DYNAMIC+0x220>
  92bd91:	41 c6 07 00          	mov    BYTE PTR [r15],0x0
  92bd95:	48 83 bc 24 a0 00 00 	cmp    QWORD PTR [rsp+0xa0],0x0
  92bd9c:	00 00 
  92bd9e:	74 8f                	je     92bd2f <future_backtest::RunnerCore::run_multi+0x975f>
  92bda0:	e9 e2 fe ff ff       	jmp    92bc87 <future_backtest::RunnerCore::run_multi+0x96b7>
  92bda5:	49 89 c4             	mov    r12,rax
  92bda8:	48 8d bc 24 c0 01 00 	lea    rdi,[rsp+0x1c0]
  92bdaf:	00 
  92bdb0:	e8 4b f4 fc ff       	call   8fb200 <core::ptr::drop_in_place<future_backtest::ffi::FfiCtx>>
  92bdb5:	e9 96 09 00 00       	jmp    92c750 <future_backtest::RunnerCore::run_multi+0xa180>
  92bdba:	49 89 c4             	mov    r12,rax
  92bdbd:	e9 8e 09 00 00       	jmp    92c750 <future_backtest::RunnerCore::run_multi+0xa180>
  92bdc2:	49 89 c4             	mov    r12,rax
  92bdc5:	e9 50 0a 00 00       	jmp    92c81a <future_backtest::RunnerCore::run_multi+0xa24a>
  92bdca:	49 89 c4             	mov    r12,rax
  92bdcd:	48 8b b4 24 70 03 00 	mov    rsi,QWORD PTR [rsp+0x370]
  92bdd4:	00 
  92bdd5:	48 85 f6             	test   rsi,rsi
  92bdd8:	74 4b                	je     92be25 <future_backtest::RunnerCore::run_multi+0x9855>
  92bdda:	48 8b bc 24 78 03 00 	mov    rdi,QWORD PTR [rsp+0x378]
  92bde1:	00 
  92bde2:	ba 01 00 00 00       	mov    edx,0x1
  92bde7:	ff 15 33 fd fc 00    	call   QWORD PTR [rip+0xfcfd33]        # 18fbb20 <_DYNAMIC+0x220>
  92bded:	eb 36                	jmp    92be25 <future_backtest::RunnerCore::run_multi+0x9855>
  92bdef:	e9 94 06 00 00       	jmp    92c488 <future_backtest::RunnerCore::run_multi+0x9eb8>
  92bdf4:	eb 2c                	jmp    92be22 <future_backtest::RunnerCore::run_multi+0x9852>
  92bdf6:	49 89 c4             	mov    r12,rax
  92bdf9:	48 8b b4 24 a0 03 00 	mov    rsi,QWORD PTR [rsp+0x3a0]
  92be00:	00 
  92be01:	48 85 f6             	test   rsi,rsi
  92be04:	0f 84 fc 09 00 00    	je     92c806 <future_backtest::RunnerCore::run_multi+0xa236>
  92be0a:	48 8b bc 24 a8 03 00 	mov    rdi,QWORD PTR [rsp+0x3a8]
  92be11:	00 
  92be12:	ba 01 00 00 00       	mov    edx,0x1
  92be17:	ff 15 03 fd fc 00    	call   QWORD PTR [rip+0xfcfd03]        # 18fbb20 <_DYNAMIC+0x220>
  92be1d:	e9 e4 09 00 00       	jmp    92c806 <future_backtest::RunnerCore::run_multi+0xa236>
  92be22:	49 89 c4             	mov    r12,rax
  92be25:	48 8d bc 24 a0 03 00 	lea    rdi,[rsp+0x3a0]
  92be2c:	00 
  92be2d:	e8 3e 10 fd ff       	call   8fce70 <core::ptr::drop_in_place<future_backtest::DataStruct::event_slice::EventSlice>>
  92be32:	e9 19 09 00 00       	jmp    92c750 <future_backtest::RunnerCore::run_multi+0xa180>
  92be37:	49 89 c4             	mov    r12,rax
  92be3a:	e9 11 09 00 00       	jmp    92c750 <future_backtest::RunnerCore::run_multi+0xa180>
  92be3f:	49 89 c4             	mov    r12,rax
  92be42:	48 8b b4 24 10 06 00 	mov    rsi,QWORD PTR [rsp+0x610]
  92be49:	00 
  92be4a:	48 85 f6             	test   rsi,rsi
  92be4d:	0f 84 26 01 00 00    	je     92bf79 <future_backtest::RunnerCore::run_multi+0x99a9>
  92be53:	48 8b bc 24 18 06 00 	mov    rdi,QWORD PTR [rsp+0x618]
  92be5a:	00 
  92be5b:	ba 01 00 00 00       	mov    edx,0x1
  92be60:	ff 15 ba fc fc 00    	call   QWORD PTR [rip+0xfcfcba]        # 18fbb20 <_DYNAMIC+0x220>
  92be66:	48 8d bc 24 d0 11 00 	lea    rdi,[rsp+0x11d0]
  92be6d:	00 
  92be6e:	e9 93 0a 00 00       	jmp    92c906 <future_backtest::RunnerCore::run_multi+0xa336>
  92be73:	49 89 c4             	mov    r12,rax
  92be76:	4a 8d 04 7d 00 00 00 	lea    rax,[r15*2+0x0]
  92be7d:	00 
  92be7e:	48 85 c0             	test   rax,rax
  92be81:	75 27                	jne    92beaa <future_backtest::RunnerCore::run_multi+0x98da>
  92be83:	48 8d 04 6d 00 00 00 	lea    rax,[rbp*2+0x0]
  92be8a:	00 
  92be8b:	48 85 c0             	test   rax,rax
  92be8e:	0f 85 06 01 00 00    	jne    92bf9a <future_backtest::RunnerCore::run_multi+0x99ca>
  92be94:	48 8d 04 5d 00 00 00 	lea    rax,[rbx*2+0x0]
  92be9b:	00 
  92be9c:	48 85 c0             	test   rax,rax
  92be9f:	0f 84 b1 04 00 00    	je     92c356 <future_backtest::RunnerCore::run_multi+0x9d86>
  92bea5:	e9 2d 01 00 00       	jmp    92bfd7 <future_backtest::RunnerCore::run_multi+0x9a07>
  92beaa:	ba 01 00 00 00       	mov    edx,0x1
  92beaf:	48 8b bc 24 b8 00 00 	mov    rdi,QWORD PTR [rsp+0xb8]
  92beb6:	00 
  92beb7:	4c 89 fe             	mov    rsi,r15
  92beba:	ff 15 60 fc fc 00    	call   QWORD PTR [rip+0xfcfc60]        # 18fbb20 <_DYNAMIC+0x220>
  92bec0:	48 8d 04 6d 00 00 00 	lea    rax,[rbp*2+0x0]
  92bec7:	00 
  92bec8:	48 85 c0             	test   rax,rax
  92becb:	74 c7                	je     92be94 <future_backtest::RunnerCore::run_multi+0x98c4>
  92becd:	e9 c8 00 00 00       	jmp    92bf9a <future_backtest::RunnerCore::run_multi+0x99ca>
  92bed2:	eb 00                	jmp    92bed4 <future_backtest::RunnerCore::run_multi+0x9904>
  92bed4:	49 89 c4             	mov    r12,rax
  92bed7:	48 8d bc 24 c0 01 00 	lea    rdi,[rsp+0x1c0]
  92bede:	00 
  92bedf:	e8 1c f3 fc ff       	call   8fb200 <core::ptr::drop_in_place<future_backtest::ffi::FfiCtx>>
  92bee4:	e9 8b 08 00 00       	jmp    92c774 <future_backtest::RunnerCore::run_multi+0xa1a4>
  92bee9:	89 6c 24 20          	mov    DWORD PTR [rsp+0x20],ebp
  92beed:	49 89 c4             	mov    r12,rax
  92bef0:	e9 87 09 00 00       	jmp    92c87c <future_backtest::RunnerCore::run_multi+0xa2ac>
  92bef5:	eb 00                	jmp    92bef7 <future_backtest::RunnerCore::run_multi+0x9927>
  92bef7:	49 89 c4             	mov    r12,rax
  92befa:	e9 75 08 00 00       	jmp    92c774 <future_backtest::RunnerCore::run_multi+0xa1a4>
  92beff:	49 89 c4             	mov    r12,rax
  92bf02:	0f 10 84 24 d0 0e 00 	movups xmm0,XMMWORD PTR [rsp+0xed0]
  92bf09:	00 
  92bf0a:	0f 11 43 40          	movups XMMWORD PTR [rbx+0x40],xmm0
  92bf0e:	66 0f 10 84 24 90 0e 	movupd xmm0,XMMWORD PTR [rsp+0xe90]
  92bf15:	00 00 
  92bf17:	f3 0f 6f 8c 24 a0 0e 	movdqu xmm1,XMMWORD PTR [rsp+0xea0]
  92bf1e:	00 00 
  92bf20:	f3 0f 6f 94 24 b0 0e 	movdqu xmm2,XMMWORD PTR [rsp+0xeb0]
  92bf27:	00 00 
  92bf29:	f3 0f 6f 9c 24 c0 0e 	movdqu xmm3,XMMWORD PTR [rsp+0xec0]
  92bf30:	00 00 
  92bf32:	f3 0f 7f 5b 30       	movdqu XMMWORD PTR [rbx+0x30],xmm3
  92bf37:	f3 0f 7f 53 20       	movdqu XMMWORD PTR [rbx+0x20],xmm2
  92bf3c:	f3 0f 7f 4b 10       	movdqu XMMWORD PTR [rbx+0x10],xmm1
  92bf41:	66 0f 11 03          	movupd XMMWORD PTR [rbx],xmm0
  92bf45:	49 ff 46 10          	inc    QWORD PTR [r14+0x10]
  92bf49:	e9 14 09 00 00       	jmp    92c862 <future_backtest::RunnerCore::run_multi+0xa292>
  92bf4e:	49 89 c4             	mov    r12,rax
  92bf51:	48 8d bc 24 90 0e 00 	lea    rdi,[rsp+0xe90]
  92bf58:	00 
  92bf59:	e8 e2 02 fd ff       	call   8fc240 <core::ptr::drop_in_place<future_backtest::Logging::logging::BacktestLog>>
  92bf5e:	e9 ff 08 00 00       	jmp    92c862 <future_backtest::RunnerCore::run_multi+0xa292>
  92bf63:	e9 f7 08 00 00       	jmp    92c85f <future_backtest::RunnerCore::run_multi+0xa28f>
  92bf68:	49 89 c4             	mov    r12,rax
  92bf6b:	b0 01                	mov    al,0x1
  92bf6d:	89 44 24 68          	mov    DWORD PTR [rsp+0x68],eax
  92bf71:	e9 a4 08 00 00       	jmp    92c81a <future_backtest::RunnerCore::run_multi+0xa24a>
  92bf76:	49 89 c4             	mov    r12,rax
  92bf79:	48 8d bc 24 d0 11 00 	lea    rdi,[rsp+0x11d0]
  92bf80:	00 
  92bf81:	e9 80 09 00 00       	jmp    92c906 <future_backtest::RunnerCore::run_multi+0xa336>
  92bf86:	49 89 c4             	mov    r12,rax
  92bf89:	48 8d 04 6d 00 00 00 	lea    rax,[rbp*2+0x0]
  92bf90:	00 
  92bf91:	48 85 c0             	test   rax,rax
  92bf94:	0f 84 fa fe ff ff    	je     92be94 <future_backtest::RunnerCore::run_multi+0x98c4>
  92bf9a:	ba 01 00 00 00       	mov    edx,0x1
  92bf9f:	48 8b bc 24 a0 00 00 	mov    rdi,QWORD PTR [rsp+0xa0]
  92bfa6:	00 
  92bfa7:	48 89 ee             	mov    rsi,rbp
  92bfaa:	ff 15 70 fb fc 00    	call   QWORD PTR [rip+0xfcfb70]        # 18fbb20 <_DYNAMIC+0x220>
  92bfb0:	48 8d 04 5d 00 00 00 	lea    rax,[rbx*2+0x0]
  92bfb7:	00 
  92bfb8:	48 85 c0             	test   rax,rax
  92bfbb:	0f 84 95 03 00 00    	je     92c356 <future_backtest::RunnerCore::run_multi+0x9d86>
  92bfc1:	eb 14                	jmp    92bfd7 <future_backtest::RunnerCore::run_multi+0x9a07>
  92bfc3:	49 89 c4             	mov    r12,rax
  92bfc6:	48 8d 04 5d 00 00 00 	lea    rax,[rbx*2+0x0]
  92bfcd:	00 
  92bfce:	48 85 c0             	test   rax,rax
  92bfd1:	0f 84 7f 03 00 00    	je     92c356 <future_backtest::RunnerCore::run_multi+0x9d86>
  92bfd7:	ba 01 00 00 00       	mov    edx,0x1
  92bfdc:	48 8b 7c 24 60       	mov    rdi,QWORD PTR [rsp+0x60]
  92bfe1:	e9 67 03 00 00       	jmp    92c34d <future_backtest::RunnerCore::run_multi+0x9d7d>
  92bfe6:	49 89 c4             	mov    r12,rax
  92bfe9:	e9 68 03 00 00       	jmp    92c356 <future_backtest::RunnerCore::run_multi+0x9d86>
  92bfee:	e9 95 04 00 00       	jmp    92c488 <future_backtest::RunnerCore::run_multi+0x9eb8>
  92bff3:	eb 0d                	jmp    92c002 <future_backtest::RunnerCore::run_multi+0x9a32>
  92bff5:	49 89 c4             	mov    r12,rax
  92bff8:	e9 72 08 00 00       	jmp    92c86f <future_backtest::RunnerCore::run_multi+0xa29f>
  92bffd:	e9 04 06 00 00       	jmp    92c606 <future_backtest::RunnerCore::run_multi+0xa036>
  92c002:	49 89 c4             	mov    r12,rax
  92c005:	48 8d 9c 24 a0 03 00 	lea    rbx,[rsp+0x3a0]
  92c00c:	00 
  92c00d:	4c 8d b4 24 d0 11 00 	lea    r14,[rsp+0x11d0]
  92c014:	00 
  92c015:	48 89 df             	mov    rdi,rbx
  92c018:	4c 89 f6             	mov    rsi,r14
  92c01b:	e8 a0 62 d4 ff       	call   6722c0 <_ZN5alloc11collections5btree3map25IntoIter$LT$K$C$V$C$A$GT$10dying_next17he5722eb1ea305e80E.llvm.1643563994444475245>
  92c020:	48 83 bc 24 a0 03 00 	cmp    QWORD PTR [rsp+0x3a0],0x0
  92c027:	00 00 
  92c029:	75 ea                	jne    92c015 <future_backtest::RunnerCore::run_multi+0x9a45>
  92c02b:	e9 d9 05 00 00       	jmp    92c609 <future_backtest::RunnerCore::run_multi+0xa039>
  92c030:	ff 15 8a fe fc 00    	call   QWORD PTR [rip+0xfcfe8a]        # 18fbec0 <_DYNAMIC+0x5c0>
  92c036:	89 6c 24 20          	mov    DWORD PTR [rsp+0x20],ebp
  92c03a:	49 89 c4             	mov    r12,rax
  92c03d:	e9 13 09 00 00       	jmp    92c955 <future_backtest::RunnerCore::run_multi+0xa385>
  92c042:	49 89 c4             	mov    r12,rax
  92c045:	48 8b b4 24 e0 0e 00 	mov    rsi,QWORD PTR [rsp+0xee0]
  92c04c:	00 
  92c04d:	48 85 f6             	test   rsi,rsi
  92c050:	0f 84 89 05 00 00    	je     92c5df <future_backtest::RunnerCore::run_multi+0xa00f>
  92c056:	48 8b bc 24 e8 0e 00 	mov    rdi,QWORD PTR [rsp+0xee8]
  92c05d:	00 
  92c05e:	e9 fa 03 00 00       	jmp    92c45d <future_backtest::RunnerCore::run_multi+0x9e8d>
  92c063:	e9 bb 03 00 00       	jmp    92c423 <future_backtest::RunnerCore::run_multi+0x9e53>
  92c068:	49 89 c4             	mov    r12,rax
  92c06b:	48 8b b4 24 60 18 00 	mov    rsi,QWORD PTR [rsp+0x1860]
  92c072:	00 
  92c073:	48 85 f6             	test   rsi,rsi
  92c076:	0f 84 63 05 00 00    	je     92c5df <future_backtest::RunnerCore::run_multi+0xa00f>
  92c07c:	48 8b bc 24 68 18 00 	mov    rdi,QWORD PTR [rsp+0x1868]
  92c083:	00 
  92c084:	e9 d4 03 00 00       	jmp    92c45d <future_backtest::RunnerCore::run_multi+0x9e8d>
  92c089:	e9 95 03 00 00       	jmp    92c423 <future_backtest::RunnerCore::run_multi+0x9e53>
  92c08e:	49 89 c4             	mov    r12,rax
  92c091:	49 ff 46 10          	inc    QWORD PTR [r14+0x10]
  92c095:	e9 4c 07 00 00       	jmp    92c7e6 <future_backtest::RunnerCore::run_multi+0xa216>
  92c09a:	e9 d3 02 00 00       	jmp    92c372 <future_backtest::RunnerCore::run_multi+0x9da2>
  92c09f:	49 89 c4             	mov    r12,rax
  92c0a2:	49 ff cd             	dec    r13
  92c0a5:	74 0e                	je     92c0b5 <future_backtest::RunnerCore::run_multi+0x9ae5>
  92c0a7:	4d 8d 7e 08          	lea    r15,[r14+0x8]
  92c0ab:	4c 89 f7             	mov    rdi,r14
  92c0ae:	ff d5                	call   rbp
  92c0b0:	4d 89 fe             	mov    r14,r15
  92c0b3:	eb ed                	jmp    92c0a2 <future_backtest::RunnerCore::run_multi+0x9ad2>
  92c0b5:	48 8b b4 24 e8 02 00 	mov    rsi,QWORD PTR [rsp+0x2e8]
  92c0bc:	00 
  92c0bd:	48 85 f6             	test   rsi,rsi
  92c0c0:	0f 84 9c 07 00 00    	je     92c862 <future_backtest::RunnerCore::run_multi+0xa292>
  92c0c6:	48 c1 e6 03          	shl    rsi,0x3
  92c0ca:	ba 08 00 00 00       	mov    edx,0x8
  92c0cf:	48 89 df             	mov    rdi,rbx
  92c0d2:	ff 15 48 fa fc 00    	call   QWORD PTR [rip+0xfcfa48]        # 18fbb20 <_DYNAMIC+0x220>
  92c0d8:	e9 85 07 00 00       	jmp    92c862 <future_backtest::RunnerCore::run_multi+0xa292>
  92c0dd:	ff 15 dd fd fc 00    	call   QWORD PTR [rip+0xfcfddd]        # 18fbec0 <_DYNAMIC+0x5c0>
  92c0e3:	49 89 c4             	mov    r12,rax
  92c0e6:	e9 20 08 00 00       	jmp    92c90b <future_backtest::RunnerCore::run_multi+0xa33b>
  92c0eb:	49 89 c4             	mov    r12,rax
  92c0ee:	e9 c5 07 00 00       	jmp    92c8b8 <future_backtest::RunnerCore::run_multi+0xa2e8>
  92c0f3:	49 89 c4             	mov    r12,rax
  92c0f6:	be 18 00 00 00       	mov    esi,0x18
  92c0fb:	ba 08 00 00 00       	mov    edx,0x8
  92c100:	48 8b bc 24 80 00 00 	mov    rdi,QWORD PTR [rsp+0x80]
  92c107:	00 
  92c108:	ff 15 12 fa fc 00    	call   QWORD PTR [rip+0xfcfa12]        # 18fbb20 <_DYNAMIC+0x220>
  92c10e:	e9 f8 07 00 00       	jmp    92c90b <future_backtest::RunnerCore::run_multi+0xa33b>
  92c113:	49 89 c4             	mov    r12,rax
  92c116:	e9 cb 06 00 00       	jmp    92c7e6 <future_backtest::RunnerCore::run_multi+0xa216>
  92c11b:	49 89 c4             	mov    r12,rax
  92c11e:	48 8b b4 24 40 0e 00 	mov    rsi,QWORD PTR [rsp+0xe40]
  92c125:	00 
  92c126:	48 85 f6             	test   rsi,rsi
  92c129:	74 48                	je     92c173 <future_backtest::RunnerCore::run_multi+0x9ba3>
  92c12b:	48 8b bc 24 48 0e 00 	mov    rdi,QWORD PTR [rsp+0xe48]
  92c132:	00 
  92c133:	ba 01 00 00 00       	mov    edx,0x1
  92c138:	ff 15 e2 f9 fc 00    	call   QWORD PTR [rip+0xfcf9e2]        # 18fbb20 <_DYNAMIC+0x220>
  92c13e:	eb 33                	jmp    92c173 <future_backtest::RunnerCore::run_multi+0x9ba3>
  92c140:	49 89 c4             	mov    r12,rax
  92c143:	e9 63 07 00 00       	jmp    92c8ab <future_backtest::RunnerCore::run_multi+0xa2db>
  92c148:	49 89 c4             	mov    r12,rax
  92c14b:	e9 94 07 00 00       	jmp    92c8e4 <future_backtest::RunnerCore::run_multi+0xa314>
  92c150:	49 89 c4             	mov    r12,rax
  92c153:	e9 b3 07 00 00       	jmp    92c90b <future_backtest::RunnerCore::run_multi+0xa33b>
  92c158:	89 6c 24 20          	mov    DWORD PTR [rsp+0x20],ebp
  92c15c:	49 89 c4             	mov    r12,rax
  92c15f:	e9 25 07 00 00       	jmp    92c889 <future_backtest::RunnerCore::run_multi+0xa2b9>
  92c164:	89 6c 24 20          	mov    DWORD PTR [rsp+0x20],ebp
  92c168:	49 89 c4             	mov    r12,rax
  92c16b:	e9 ae 07 00 00       	jmp    92c91e <future_backtest::RunnerCore::run_multi+0xa34e>
  92c170:	49 89 c4             	mov    r12,rax
  92c173:	48 8d bc 24 a8 19 00 	lea    rdi,[rsp+0x19a8]
  92c17a:	00 
  92c17b:	e8 a0 2a fd ff       	call   8fec20 <core::ptr::drop_in_place<future_backtest::MultiStrategy::event_producer::EventProducerFilter>>
  92c180:	e9 86 07 00 00       	jmp    92c90b <future_backtest::RunnerCore::run_multi+0xa33b>
  92c185:	49 89 c4             	mov    r12,rax
  92c188:	e9 4a 07 00 00       	jmp    92c8d7 <future_backtest::RunnerCore::run_multi+0xa307>
  92c18d:	49 89 c4             	mov    r12,rax
  92c190:	48 8b b4 24 d0 11 00 	mov    rsi,QWORD PTR [rsp+0x11d0]
  92c197:	00 
  92c198:	48 85 f6             	test   rsi,rsi
  92c19b:	0f 84 50 07 00 00    	je     92c8f1 <future_backtest::RunnerCore::run_multi+0xa321>
  92c1a1:	48 8b bc 24 d8 11 00 	mov    rdi,QWORD PTR [rsp+0x11d8]
  92c1a8:	00 
  92c1a9:	ba 01 00 00 00       	mov    edx,0x1
  92c1ae:	ff 15 6c f9 fc 00    	call   QWORD PTR [rip+0xfcf96c]        # 18fbb20 <_DYNAMIC+0x220>
  92c1b4:	e9 38 07 00 00       	jmp    92c8f1 <future_backtest::RunnerCore::run_multi+0xa321>
  92c1b9:	49 89 c4             	mov    r12,rax
  92c1bc:	e9 30 07 00 00       	jmp    92c8f1 <future_backtest::RunnerCore::run_multi+0xa321>
  92c1c1:	49 89 c4             	mov    r12,rax
  92c1c4:	49 c7 06 00 00 00 00 	mov    QWORD PTR [r14],0x0
  92c1cb:	49 c7 46 08 08 00 00 	mov    QWORD PTR [r14+0x8],0x8
  92c1d2:	00 
  92c1d3:	66 0f 57 c0          	xorpd  xmm0,xmm0
  92c1d7:	66 41 0f 11 46 10    	movupd XMMWORD PTR [r14+0x10],xmm0
  92c1dd:	49 c7 46 20 08 00 00 	mov    QWORD PTR [r14+0x20],0x8
  92c1e4:	00 
  92c1e5:	66 41 0f 11 46 28    	movupd XMMWORD PTR [r14+0x28],xmm0
  92c1eb:	49 c7 46 38 08 00 00 	mov    QWORD PTR [r14+0x38],0x8
  92c1f2:	00 
  92c1f3:	66 41 0f 11 46 40    	movupd XMMWORD PTR [r14+0x40],xmm0
  92c1f9:	49 c7 46 50 08 00 00 	mov    QWORD PTR [r14+0x50],0x8
  92c200:	00 
  92c201:	49 c7 46 58 00 00 00 	mov    QWORD PTR [r14+0x58],0x0
  92c208:	00 
  92c209:	48 b8 00 00 00 00 00 	movabs rax,0x8000000000000000
  92c210:	00 00 80 
  92c213:	49 89 46 60          	mov    QWORD PTR [r14+0x60],rax
  92c217:	49 89 46 78          	mov    QWORD PTR [r14+0x78],rax
  92c21b:	49 89 86 90 00 00 00 	mov    QWORD PTR [r14+0x90],rax
  92c222:	4d 89 be a8 00 00 00 	mov    QWORD PTR [r14+0xa8],r15
  92c229:	66 41 0f 11 86 b0 00 	movupd XMMWORD PTR [r14+0xb0],xmm0
  92c230:	00 00 
  92c232:	e9 2b 06 00 00       	jmp    92c862 <future_backtest::RunnerCore::run_multi+0xa292>
  92c237:	49 89 c4             	mov    r12,rax
  92c23a:	48 8d bc 24 c0 01 00 	lea    rdi,[rsp+0x1c0]
  92c241:	00 
  92c242:	e8 a9 cc fc ff       	call   8f8ef0 <core::ptr::drop_in_place<alloc::vec::Vec<future_backtest::BacktestResult::backtest_result::TradeOrder>>>
  92c247:	48 8d bc 24 d8 01 00 	lea    rdi,[rsp+0x1d8]
  92c24e:	00 
  92c24f:	e8 2c cf fc ff       	call   8f9180 <core::ptr::drop_in_place<alloc::vec::Vec<future_backtest::BacktestResult::backtest_result::BacktestResultSlice>>>
  92c254:	48 8d bc 24 f0 01 00 	lea    rdi,[rsp+0x1f0]
  92c25b:	00 
  92c25c:	e8 af 32 fd ff       	call   8ff510 <core::ptr::drop_in_place<alloc::vec::Vec<future_backtest::TradePairs::trade_pairs::TradePair>>>
  92c261:	48 8d bc 24 08 02 00 	lea    rdi,[rsp+0x208]
  92c268:	00 
  92c269:	e8 22 d3 fc ff       	call   8f9590 <core::ptr::drop_in_place<alloc::vec::Vec<future_backtest::BacktestResult::backtest_result::BacktestShareStatusSlice>>>
  92c26e:	48 8b b4 24 20 02 00 	mov    rsi,QWORD PTR [rsp+0x220]
  92c275:	00 
  92c276:	48 b8 00 00 00 00 00 	movabs rax,0x8000000000000000
  92c27d:	00 00 80 
  92c280:	48 39 c6             	cmp    rsi,rax
  92c283:	74 18                	je     92c29d <future_backtest::RunnerCore::run_multi+0x9ccd>
  92c285:	48 85 f6             	test   rsi,rsi
  92c288:	74 13                	je     92c29d <future_backtest::RunnerCore::run_multi+0x9ccd>
  92c28a:	48 8b bc 24 28 02 00 	mov    rdi,QWORD PTR [rsp+0x228]
  92c291:	00 
  92c292:	ba 01 00 00 00       	mov    edx,0x1
  92c297:	ff 15 83 f8 fc 00    	call   QWORD PTR [rip+0xfcf883]        # 18fbb20 <_DYNAMIC+0x220>
  92c29d:	48 8b b4 24 38 02 00 	mov    rsi,QWORD PTR [rsp+0x238]
  92c2a4:	00 
  92c2a5:	48 b8 00 00 00 00 00 	movabs rax,0x8000000000000000
  92c2ac:	00 00 80 
  92c2af:	48 39 c6             	cmp    rsi,rax
  92c2b2:	74 18                	je     92c2cc <future_backtest::RunnerCore::run_multi+0x9cfc>
  92c2b4:	48 85 f6             	test   rsi,rsi
  92c2b7:	74 13                	je     92c2cc <future_backtest::RunnerCore::run_multi+0x9cfc>
  92c2b9:	48 8b bc 24 40 02 00 	mov    rdi,QWORD PTR [rsp+0x240]
  92c2c0:	00 
  92c2c1:	ba 01 00 00 00       	mov    edx,0x1
  92c2c6:	ff 15 54 f8 fc 00    	call   QWORD PTR [rip+0xfcf854]        # 18fbb20 <_DYNAMIC+0x220>
  92c2cc:	48 8b b4 24 50 02 00 	mov    rsi,QWORD PTR [rsp+0x250]
  92c2d3:	00 
  92c2d4:	48 b8 00 00 00 00 00 	movabs rax,0x8000000000000000
  92c2db:	00 00 80 
  92c2de:	48 39 c6             	cmp    rsi,rax
  92c2e1:	74 73                	je     92c356 <future_backtest::RunnerCore::run_multi+0x9d86>
  92c2e3:	48 85 f6             	test   rsi,rsi
  92c2e6:	74 6e                	je     92c356 <future_backtest::RunnerCore::run_multi+0x9d86>
  92c2e8:	48 8b bc 24 58 02 00 	mov    rdi,QWORD PTR [rsp+0x258]
  92c2ef:	00 
  92c2f0:	ba 01 00 00 00       	mov    edx,0x1
  92c2f5:	eb 59                	jmp    92c350 <future_backtest::RunnerCore::run_multi+0x9d80>
  92c2f7:	49 89 c4             	mov    r12,rax
  92c2fa:	eb 0e                	jmp    92c30a <future_backtest::RunnerCore::run_multi+0x9d3a>
  92c2fc:	49 89 c4             	mov    r12,rax
  92c2ff:	4c 89 f7             	mov    rdi,r14
  92c302:	4c 89 ee             	mov    rsi,r13
  92c305:	e8 56 d0 0b 00       	call   9e9360 <_ZN4core3ptr89drop_in_place$LT$$u5b$future_backtest..MetaControl..router..MetaDecisionSnapshot$u5d$$GT$17hf1a8d774989df26aE.llvm.12364612859142937606>
  92c30a:	48 85 db             	test   rbx,rbx
  92c30d:	0f 84 8f 06 00 00    	je     92c9a2 <future_backtest::RunnerCore::run_multi+0xa3d2>
  92c313:	48 c1 e3 06          	shl    rbx,0x6
  92c317:	ba 08 00 00 00       	mov    edx,0x8
  92c31c:	4c 89 f7             	mov    rdi,r14
  92c31f:	48 89 de             	mov    rsi,rbx
  92c322:	ff 15 f8 f7 fc 00    	call   QWORD PTR [rip+0xfcf7f8]        # 18fbb20 <_DYNAMIC+0x220>
  92c328:	e9 75 06 00 00       	jmp    92c9a2 <future_backtest::RunnerCore::run_multi+0xa3d2>
  92c32d:	ff 15 8d fb fc 00    	call   QWORD PTR [rip+0xfcfb8d]        # 18fbec0 <_DYNAMIC+0x5c0>
  92c333:	e9 a4 02 00 00       	jmp    92c5dc <future_backtest::RunnerCore::run_multi+0xa00c>
  92c338:	e9 c9 02 00 00       	jmp    92c606 <future_backtest::RunnerCore::run_multi+0xa036>
  92c33d:	49 89 c4             	mov    r12,rax
  92c340:	48 85 db             	test   rbx,rbx
  92c343:	74 11                	je     92c356 <future_backtest::RunnerCore::run_multi+0x9d86>
  92c345:	ba 01 00 00 00       	mov    edx,0x1
  92c34a:	48 89 ef             	mov    rdi,rbp
  92c34d:	48 89 de             	mov    rsi,rbx
  92c350:	ff 15 ca f7 fc 00    	call   QWORD PTR [rip+0xfcf7ca]        # 18fbb20 <_DYNAMIC+0x220>
  92c356:	48 8d bc 24 00 05 00 	lea    rdi,[rsp+0x500]
  92c35d:	00 
  92c35e:	e8 ed ca fc ff       	call   8f8e50 <core::ptr::drop_in_place<alloc::vec::Vec<(alloc::string::String,alloc::vec::Vec<usize>)>>>
  92c363:	e9 e8 03 00 00       	jmp    92c750 <future_backtest::RunnerCore::run_multi+0xa180>
  92c368:	e9 f7 02 00 00       	jmp    92c664 <future_backtest::RunnerCore::run_multi+0xa094>
  92c36d:	e9 13 03 00 00       	jmp    92c685 <future_backtest::RunnerCore::run_multi+0xa0b5>
  92c372:	49 89 c4             	mov    r12,rax
  92c375:	e9 5f 04 00 00       	jmp    92c7d9 <future_backtest::RunnerCore::run_multi+0xa209>
  92c37a:	49 89 c4             	mov    r12,rax
  92c37d:	48 8b b4 24 80 1b 00 	mov    rsi,QWORD PTR [rsp+0x1b80]
  92c384:	00 
  92c385:	48 85 f6             	test   rsi,rsi
  92c388:	0f 84 4b 04 00 00    	je     92c7d9 <future_backtest::RunnerCore::run_multi+0xa209>
  92c38e:	48 8b bc 24 88 1b 00 	mov    rdi,QWORD PTR [rsp+0x1b88]
  92c395:	00 
  92c396:	ba 01 00 00 00       	mov    edx,0x1
  92c39b:	ff 15 7f f7 fc 00    	call   QWORD PTR [rip+0xfcf77f]        # 18fbb20 <_DYNAMIC+0x220>
  92c3a1:	e9 33 04 00 00       	jmp    92c7d9 <future_backtest::RunnerCore::run_multi+0xa209>
  92c3a6:	49 89 c4             	mov    r12,rax
  92c3a9:	48 8b b4 24 80 1b 00 	mov    rsi,QWORD PTR [rsp+0x1b80]
  92c3b0:	00 
  92c3b1:	48 85 f6             	test   rsi,rsi
  92c3b4:	0f 84 4f 02 00 00    	je     92c609 <future_backtest::RunnerCore::run_multi+0xa039>
  92c3ba:	48 8b bc 24 88 1b 00 	mov    rdi,QWORD PTR [rsp+0x1b88]
  92c3c1:	00 
  92c3c2:	ba 01 00 00 00       	mov    edx,0x1
  92c3c7:	ff 15 53 f7 fc 00    	call   QWORD PTR [rip+0xfcf753]        # 18fbb20 <_DYNAMIC+0x220>
  92c3cd:	e9 37 02 00 00       	jmp    92c609 <future_backtest::RunnerCore::run_multi+0xa039>
  92c3d2:	89 6c 24 20          	mov    DWORD PTR [rsp+0x20],ebp
  92c3d6:	49 89 c4             	mov    r12,rax
  92c3d9:	49 ff cd             	dec    r13
  92c3dc:	74 14                	je     92c3f2 <future_backtest::RunnerCore::run_multi+0x9e22>
  92c3de:	4d 8d be 28 01 00 00 	lea    r15,[r14+0x128]
  92c3e5:	4c 89 f7             	mov    rdi,r14
  92c3e8:	e8 63 61 f9 ff       	call   8c2550 <_ZN4core3ptr73drop_in_place$LT$future_backtest..DataStruct..event_slice..EventSlice$GT$17h4393e6a5cd212903E.llvm.1325298290625399205>
  92c3ed:	4d 89 fe             	mov    r14,r15
  92c3f0:	eb e7                	jmp    92c3d9 <future_backtest::RunnerCore::run_multi+0x9e09>
  92c3f2:	48 8b 84 24 a8 01 00 	mov    rax,QWORD PTR [rsp+0x1a8]
  92c3f9:	00 
  92c3fa:	48 85 c0             	test   rax,rax
  92c3fd:	0f 84 86 04 00 00    	je     92c889 <future_backtest::RunnerCore::run_multi+0xa2b9>
  92c403:	48 69 f0 28 01 00 00 	imul   rsi,rax,0x128
  92c40a:	ba 08 00 00 00       	mov    edx,0x8
  92c40f:	48 89 df             	mov    rdi,rbx
  92c412:	ff 15 08 f7 fc 00    	call   QWORD PTR [rip+0xfcf708]        # 18fbb20 <_DYNAMIC+0x220>
  92c418:	e9 6c 04 00 00       	jmp    92c889 <future_backtest::RunnerCore::run_multi+0xa2b9>
  92c41d:	ff 15 9d fa fc 00    	call   QWORD PTR [rip+0xfcfa9d]        # 18fbec0 <_DYNAMIC+0x5c0>
  92c423:	49 89 c4             	mov    r12,rax
  92c426:	48 8b b4 24 10 06 00 	mov    rsi,QWORD PTR [rsp+0x610]
  92c42d:	00 
  92c42e:	48 85 f6             	test   rsi,rsi
  92c431:	0f 84 a8 01 00 00    	je     92c5df <future_backtest::RunnerCore::run_multi+0xa00f>
  92c437:	48 8b bc 24 18 06 00 	mov    rdi,QWORD PTR [rsp+0x618]
  92c43e:	00 
  92c43f:	eb 1c                	jmp    92c45d <future_backtest::RunnerCore::run_multi+0x9e8d>
  92c441:	49 89 c4             	mov    r12,rax
  92c444:	48 8b b4 24 c0 01 00 	mov    rsi,QWORD PTR [rsp+0x1c0]
  92c44b:	00 
  92c44c:	48 85 f6             	test   rsi,rsi
  92c44f:	0f 84 8a 01 00 00    	je     92c5df <future_backtest::RunnerCore::run_multi+0xa00f>
  92c455:	48 8b bc 24 c8 01 00 	mov    rdi,QWORD PTR [rsp+0x1c8]
  92c45c:	00 
  92c45d:	ba 01 00 00 00       	mov    edx,0x1
  92c462:	ff 15 b8 f6 fc 00    	call   QWORD PTR [rip+0xfcf6b8]        # 18fbb20 <_DYNAMIC+0x220>
  92c468:	e9 72 01 00 00       	jmp    92c5df <future_backtest::RunnerCore::run_multi+0xa00f>
  92c46d:	49 89 c4             	mov    r12,rax
  92c470:	48 8d bc 24 d0 2a 00 	lea    rdi,[rsp+0x2ad0]
  92c477:	00 
  92c478:	e8 b3 f7 fc ff       	call   8fbc30 <core::ptr::drop_in_place<future_backtest::Strategy::strategy::Strategy>>
  92c47d:	e9 4f 01 00 00       	jmp    92c5d1 <future_backtest::RunnerCore::run_multi+0xa001>
  92c482:	ff 15 38 fa fc 00    	call   QWORD PTR [rip+0xfcfa38]        # 18fbec0 <_DYNAMIC+0x5c0>
  92c488:	49 89 c4             	mov    r12,rax
  92c48b:	e9 76 03 00 00       	jmp    92c806 <future_backtest::RunnerCore::run_multi+0xa236>
  92c490:	89 6c 24 20          	mov    DWORD PTR [rsp+0x20],ebp
  92c494:	49 89 c4             	mov    r12,rax
  92c497:	49 ff ce             	dec    r14
  92c49a:	74 14                	je     92c4b0 <future_backtest::RunnerCore::run_multi+0x9ee0>
  92c49c:	4c 8d bb 28 15 00 00 	lea    r15,[rbx+0x1528]
  92c4a3:	48 89 df             	mov    rdi,rbx
  92c4a6:	e8 35 4c f9 ff       	call   8c10e0 <_ZN4core3ptr66drop_in_place$LT$future_backtest..Strategy..strategy..Strategy$GT$17hb325f64ad9ac2d20E.llvm.1325298290625399205>
  92c4ab:	4c 89 fb             	mov    rbx,r15
  92c4ae:	eb e7                	jmp    92c497 <future_backtest::RunnerCore::run_multi+0x9ec7>
  92c4b0:	48 8b 44 24 38       	mov    rax,QWORD PTR [rsp+0x38]
  92c4b5:	48 85 c0             	test   rax,rax
  92c4b8:	0f 84 6a 04 00 00    	je     92c928 <future_backtest::RunnerCore::run_multi+0xa358>
  92c4be:	48 8b 7c 24 40       	mov    rdi,QWORD PTR [rsp+0x40]
  92c4c3:	48 69 f0 28 15 00 00 	imul   rsi,rax,0x1528
  92c4ca:	ba 08 00 00 00       	mov    edx,0x8
  92c4cf:	ff 15 4b f6 fc 00    	call   QWORD PTR [rip+0xfcf64b]        # 18fbb20 <_DYNAMIC+0x220>
  92c4d5:	48 8b 84 24 88 00 00 	mov    rax,QWORD PTR [rsp+0x88]
  92c4dc:	00 
  92c4dd:	48 ff 08             	dec    QWORD PTR [rax]
  92c4e0:	0f 84 61 04 00 00    	je     92c947 <future_backtest::RunnerCore::run_multi+0xa377>
  92c4e6:	e9 6a 04 00 00       	jmp    92c955 <future_backtest::RunnerCore::run_multi+0xa385>
  92c4eb:	ff 15 cf f9 fc 00    	call   QWORD PTR [rip+0xfcf9cf]        # 18fbec0 <_DYNAMIC+0x5c0>
  92c4f1:	e9 d3 02 00 00       	jmp    92c7c9 <future_backtest::RunnerCore::run_multi+0xa1f9>
  92c4f6:	49 89 c4             	mov    r12,rax
  92c4f9:	e9 d3 00 00 00       	jmp    92c5d1 <future_backtest::RunnerCore::run_multi+0xa001>
  92c4fe:	49 89 c4             	mov    r12,rax
  92c501:	48 8b b4 24 d0 11 00 	mov    rsi,QWORD PTR [rsp+0x11d0]
  92c508:	00 
  92c509:	b0 01                	mov    al,0x1
  92c50b:	89 44 24 20          	mov    DWORD PTR [rsp+0x20],eax
  92c50f:	48 85 f6             	test   rsi,rsi
  92c512:	0f 84 06 04 00 00    	je     92c91e <future_backtest::RunnerCore::run_multi+0xa34e>
  92c518:	48 8b bc 24 d8 11 00 	mov    rdi,QWORD PTR [rsp+0x11d8]
  92c51f:	00 
  92c520:	ba 01 00 00 00       	mov    edx,0x1
  92c525:	ff 15 f5 f5 fc 00    	call   QWORD PTR [rip+0xfcf5f5]        # 18fbb20 <_DYNAMIC+0x220>
  92c52b:	e9 ee 03 00 00       	jmp    92c91e <future_backtest::RunnerCore::run_multi+0xa34e>
  92c530:	49 89 c4             	mov    r12,rax
  92c533:	48 8b b4 24 80 1b 00 	mov    rsi,QWORD PTR [rsp+0x1b80]
  92c53a:	00 
  92c53b:	48 85 f6             	test   rsi,rsi
  92c53e:	74 78                	je     92c5b8 <future_backtest::RunnerCore::run_multi+0x9fe8>
  92c540:	48 8b bc 24 88 1b 00 	mov    rdi,QWORD PTR [rsp+0x1b88]
  92c547:	00 
  92c548:	ba 01 00 00 00       	mov    edx,0x1
  92c54d:	ff 15 cd f5 fc 00    	call   QWORD PTR [rip+0xfcf5cd]        # 18fbb20 <_DYNAMIC+0x220>
  92c553:	eb 63                	jmp    92c5b8 <future_backtest::RunnerCore::run_multi+0x9fe8>
  92c555:	49 89 c4             	mov    r12,rax
  92c558:	48 8b 84 24 88 00 00 	mov    rax,QWORD PTR [rsp+0x88]
  92c55f:	00 
  92c560:	48 ff 40 10          	inc    QWORD PTR [rax+0x10]
  92c564:	eb 6b                	jmp    92c5d1 <future_backtest::RunnerCore::run_multi+0xa001>
  92c566:	e9 9b 00 00 00       	jmp    92c606 <future_backtest::RunnerCore::run_multi+0xa036>
  92c56b:	49 89 c4             	mov    r12,rax
  92c56e:	49 ff 4d 00          	dec    QWORD PTR [r13+0x0]
  92c572:	75 0e                	jne    92c582 <future_backtest::RunnerCore::run_multi+0x9fb2>
  92c574:	48 8d bc 24 d0 11 00 	lea    rdi,[rsp+0x11d0]
  92c57b:	00 
  92c57c:	ff 15 ce ff fc 00    	call   QWORD PTR [rip+0xfcffce]        # 18fc550 <_DYNAMIC+0xc50>
  92c582:	48 8b 44 24 18       	mov    rax,QWORD PTR [rsp+0x18]
  92c587:	48 ff 08             	dec    QWORD PTR [rax]
  92c58a:	b0 01                	mov    al,0x1
  92c58c:	89 44 24 20          	mov    DWORD PTR [rsp+0x20],eax
  92c590:	0f 85 88 03 00 00    	jne    92c91e <future_backtest::RunnerCore::run_multi+0xa34e>
  92c596:	48 8d bc 24 80 1b 00 	lea    rdi,[rsp+0x1b80]
  92c59d:	00 
  92c59e:	ff 15 b4 ff fc 00    	call   QWORD PTR [rip+0xfcffb4]        # 18fc558 <_DYNAMIC+0xc58>
  92c5a4:	e9 75 03 00 00       	jmp    92c91e <future_backtest::RunnerCore::run_multi+0xa34e>
  92c5a9:	49 89 c4             	mov    r12,rax
  92c5ac:	eb 23                	jmp    92c5d1 <future_backtest::RunnerCore::run_multi+0xa001>
  92c5ae:	eb 56                	jmp    92c606 <future_backtest::RunnerCore::run_multi+0xa036>
  92c5b0:	49 89 c4             	mov    r12,rax
  92c5b3:	eb 0f                	jmp    92c5c4 <future_backtest::RunnerCore::run_multi+0x9ff4>
  92c5b5:	49 89 c4             	mov    r12,rax
  92c5b8:	48 8b 84 24 88 00 00 	mov    rax,QWORD PTR [rsp+0x88]
  92c5bf:	00 
  92c5c0:	48 ff 40 10          	inc    QWORD PTR [rax+0x10]
  92c5c4:	48 8d bc 24 e0 0e 00 	lea    rdi,[rsp+0xee0]
  92c5cb:	00 
  92c5cc:	e8 9f 09 fd ff       	call   8fcf70 <core::ptr::drop_in_place<(alloc::string::String,alloc::string::String)>>
  92c5d1:	b0 01                	mov    al,0x1
  92c5d3:	89 44 24 20          	mov    DWORD PTR [rsp+0x20],eax
  92c5d7:	e9 42 03 00 00       	jmp    92c91e <future_backtest::RunnerCore::run_multi+0xa34e>
  92c5dc:	49 89 c4             	mov    r12,rax
  92c5df:	48 8d bc 24 a0 03 00 	lea    rdi,[rsp+0x3a0]
  92c5e6:	00 
  92c5e7:	e8 94 ef fc ff       	call   8fb580 <_ZN4core3ptr65drop_in_place$LT$alloc..vec..Vec$LT$alloc..string..String$GT$$GT$17hd2a54bddd809dd19E.llvm.5215769359700358943>
  92c5ec:	48 8d bc 24 b0 10 00 	lea    rdi,[rsp+0x10b0]
  92c5f3:	00 
  92c5f4:	e8 87 ef fc ff       	call   8fb580 <_ZN4core3ptr65drop_in_place$LT$alloc..vec..Vec$LT$alloc..string..String$GT$$GT$17hd2a54bddd809dd19E.llvm.5215769359700358943>
  92c5f9:	48 8d bc 24 00 05 00 	lea    rdi,[rsp+0x500]
  92c600:	00 
  92c601:	e9 00 03 00 00       	jmp    92c906 <future_backtest::RunnerCore::run_multi+0xa336>
  92c606:	49 89 c4             	mov    r12,rax
  92c609:	48 8d bc 24 e0 0e 00 	lea    rdi,[rsp+0xee0]
  92c610:	00 
  92c611:	e8 aa 5f 07 00       	call   9a25c0 <<hashbrown::raw::RawTable<T,A> as core::ops::drop::Drop>::drop>
  92c616:	48 8d bc 24 60 18 00 	lea    rdi,[rsp+0x1860]
  92c61d:	00 
  92c61e:	e8 bd 72 07 00       	call   9a38e0 <<hashbrown::raw::RawTable<T,A> as core::ops::drop::Drop>::drop>
  92c623:	48 8d bc 24 10 06 00 	lea    rdi,[rsp+0x610]
  92c62a:	00 
  92c62b:	e8 f0 04 fd ff       	call   8fcb20 <core::ptr::drop_in_place<future_backtest::MetaControl::config::MetaManifest>>
  92c630:	c7 84 24 c8 00 00 00 	mov    DWORD PTR [rsp+0xc8],0x0
  92c637:	00 00 00 00 
  92c63b:	e9 62 03 00 00       	jmp    92c9a2 <future_backtest::RunnerCore::run_multi+0xa3d2>
  92c640:	49 89 c4             	mov    r12,rax
  92c643:	48 8d bc 24 c8 22 00 	lea    rdi,[rsp+0x22c8]
  92c64a:	00 
  92c64b:	e8 d0 fc fc ff       	call   8fc320 <core::ptr::drop_in_place<future_backtest::Config::config::StrategyConfig>>
  92c650:	eb 5d                	jmp    92c6af <future_backtest::RunnerCore::run_multi+0xa0df>
  92c652:	ff 15 68 f8 fc 00    	call   QWORD PTR [rip+0xfcf868]        # 18fbec0 <_DYNAMIC+0x5c0>
  92c658:	89 6c 24 20          	mov    DWORD PTR [rsp+0x20],ebp
  92c65c:	49 89 c4             	mov    r12,rax
  92c65f:	e9 09 03 00 00       	jmp    92c96d <future_backtest::RunnerCore::run_multi+0xa39d>
  92c664:	49 89 c4             	mov    r12,rax
  92c667:	48 8b 84 24 f0 0e 00 	mov    rax,QWORD PTR [rsp+0xef0]
  92c66e:	00 
  92c66f:	48 89 43 10          	mov    QWORD PTR [rbx+0x10],rax
  92c673:	f3 0f 6f 84 24 e0 0e 	movdqu xmm0,XMMWORD PTR [rsp+0xee0]
  92c67a:	00 00 
  92c67c:	f3 0f 7f 03          	movdqu XMMWORD PTR [rbx],xmm0
  92c680:	e9 47 01 00 00       	jmp    92c7cc <future_backtest::RunnerCore::run_multi+0xa1fc>
  92c685:	49 89 c4             	mov    r12,rax
  92c688:	48 89 ab f0 14 00 00 	mov    QWORD PTR [rbx+0x14f0],rbp
  92c68f:	48 8b 44 24 70       	mov    rax,QWORD PTR [rsp+0x70]
  92c694:	48 89 83 f8 14 00 00 	mov    QWORD PTR [rbx+0x14f8],rax
  92c69b:	48 8b 44 24 20       	mov    rax,QWORD PTR [rsp+0x20]
  92c6a0:	48 89 83 00 15 00 00 	mov    QWORD PTR [rbx+0x1500],rax
  92c6a7:	e9 20 01 00 00       	jmp    92c7cc <future_backtest::RunnerCore::run_multi+0xa1fc>
  92c6ac:	49 89 c4             	mov    r12,rax
  92c6af:	b0 01                	mov    al,0x1
  92c6b1:	89 84 24 c8 00 00 00 	mov    DWORD PTR [rsp+0xc8],eax
  92c6b8:	e9 e5 02 00 00       	jmp    92c9a2 <future_backtest::RunnerCore::run_multi+0xa3d2>
  92c6bd:	49 89 c4             	mov    r12,rax
  92c6c0:	e9 46 02 00 00       	jmp    92c90b <future_backtest::RunnerCore::run_multi+0xa33b>
  92c6c5:	49 89 c4             	mov    r12,rax
  92c6c8:	0f 1f 84 00 00 00 00 	nop    DWORD PTR [rax+rax*1+0x0]
  92c6cf:	00 
  92c6d0:	49 ff ce             	dec    r14
  92c6d3:	74 14                	je     92c6e9 <future_backtest::RunnerCore::run_multi+0xa119>
  92c6d5:	4c 8d bb 08 08 00 00 	lea    r15,[rbx+0x808]
  92c6dc:	48 89 df             	mov    rdi,rbx
  92c6df:	e8 1c 50 f9 ff       	call   8c1700 <_ZN4core3ptr68drop_in_place$LT$future_backtest..Config..config..StrategyConfig$GT$17h915a237d4f00a607E.llvm.1325298290625399205>
  92c6e4:	4c 89 fb             	mov    rbx,r15
  92c6e7:	eb e7                	jmp    92c6d0 <future_backtest::RunnerCore::run_multi+0xa100>
  92c6e9:	48 8b 84 24 d0 00 00 	mov    rax,QWORD PTR [rsp+0xd0]
  92c6f0:	00 
  92c6f1:	48 85 c0             	test   rax,rax
  92c6f4:	0f 84 c0 02 00 00    	je     92c9ba <future_backtest::RunnerCore::run_multi+0xa3ea>
  92c6fa:	48 8b bc 24 d8 00 00 	mov    rdi,QWORD PTR [rsp+0xd8]
  92c701:	00 
  92c702:	48 89 c1             	mov    rcx,rax
  92c705:	48 c1 e1 0b          	shl    rcx,0xb
  92c709:	48 8d 34 c1          	lea    rsi,[rcx+rax*8]
  92c70d:	ba 08 00 00 00       	mov    edx,0x8
  92c712:	ff 15 08 f4 fc 00    	call   QWORD PTR [rip+0xfcf408]        # 18fbb20 <_DYNAMIC+0x220>
  92c718:	e9 9d 02 00 00       	jmp    92c9ba <future_backtest::RunnerCore::run_multi+0xa3ea>
  92c71d:	ff 15 9d f7 fc 00    	call   QWORD PTR [rip+0xfcf79d]        # 18fbec0 <_DYNAMIC+0x5c0>
  92c723:	49 89 c4             	mov    r12,rax
  92c726:	48 83 bc 24 a0 00 00 	cmp    QWORD PTR [rsp+0xa0],0x0
  92c72d:	00 00 
  92c72f:	74 1f                	je     92c750 <future_backtest::RunnerCore::run_multi+0xa180>
  92c731:	48 8b b4 24 a0 00 00 	mov    rsi,QWORD PTR [rsp+0xa0]
  92c738:	00 
  92c739:	48 c1 e6 03          	shl    rsi,0x3
  92c73d:	ba 08 00 00 00       	mov    edx,0x8
  92c742:	48 8b bc 24 c0 00 00 	mov    rdi,QWORD PTR [rsp+0xc0]
  92c749:	00 
  92c74a:	ff 15 d0 f3 fc 00    	call   QWORD PTR [rip+0xfcf3d0]        # 18fbb20 <_DYNAMIC+0x220>
  92c750:	48 8b b4 24 00 03 00 	mov    rsi,QWORD PTR [rsp+0x300]
  92c757:	00 
  92c758:	48 85 f6             	test   rsi,rsi
  92c75b:	74 17                	je     92c774 <future_backtest::RunnerCore::run_multi+0xa1a4>
  92c75d:	48 8b bc 24 08 03 00 	mov    rdi,QWORD PTR [rsp+0x308]
  92c764:	00 
  92c765:	48 c1 e6 03          	shl    rsi,0x3
  92c769:	ba 08 00 00 00       	mov    edx,0x8
  92c76e:	ff 15 ac f3 fc 00    	call   QWORD PTR [rip+0xfcf3ac]        # 18fbb20 <_DYNAMIC+0x220>
  92c774:	b0 01                	mov    al,0x1
  92c776:	89 44 24 68          	mov    DWORD PTR [rsp+0x68],eax
  92c77a:	48 8d bc 24 d0 11 00 	lea    rdi,[rsp+0x11d0]
  92c781:	00 
  92c782:	e8 f9 0d fd ff       	call   8fd580 <core::ptr::drop_in_place<future_backtest::Customer::customer_params::StrategyParams>>
  92c787:	e9 8e 00 00 00       	jmp    92c81a <future_backtest::RunnerCore::run_multi+0xa24a>
  92c78c:	49 89 c4             	mov    r12,rax
  92c78f:	48 8d bc 24 10 06 00 	lea    rdi,[rsp+0x610]
  92c796:	00 
  92c797:	e8 94 d0 fc ff       	call   8f9830 <core::ptr::drop_in_place<alloc::rc::RcInner<core::cell::RefCell<future_backtest::Strategy::simulation::strategy_sos::watcher::Watcher>>>>
  92c79c:	b0 01                	mov    al,0x1
  92c79e:	89 44 24 20          	mov    DWORD PTR [rsp+0x20],eax
  92c7a2:	e9 ae 01 00 00       	jmp    92c955 <future_backtest::RunnerCore::run_multi+0xa385>
  92c7a7:	ff 15 13 f7 fc 00    	call   QWORD PTR [rip+0xfcf713]        # 18fbec0 <_DYNAMIC+0x5c0>
  92c7ad:	49 89 c4             	mov    r12,rax
  92c7b0:	48 89 df             	mov    rdi,rbx
  92c7b3:	e8 88 f0 fc ff       	call   8fb840 <core::ptr::drop_in_place<future_backtest::Exchange::exchange::Exchange>>
  92c7b8:	b0 01                	mov    al,0x1
  92c7ba:	89 44 24 20          	mov    DWORD PTR [rsp+0x20],eax
  92c7be:	e9 aa 01 00 00       	jmp    92c96d <future_backtest::RunnerCore::run_multi+0xa39d>
  92c7c3:	ff 15 f7 f6 fc 00    	call   QWORD PTR [rip+0xfcf6f7]        # 18fbec0 <_DYNAMIC+0x5c0>
  92c7c9:	49 89 c4             	mov    r12,rax
  92c7cc:	48 8d bc 24 d0 11 00 	lea    rdi,[rsp+0x11d0]
  92c7d3:	00 
  92c7d4:	e8 97 07 fd ff       	call   8fcf70 <core::ptr::drop_in_place<(alloc::string::String,alloc::string::String)>>
  92c7d9:	48 8d bc 24 f8 05 00 	lea    rdi,[rsp+0x5f8]
  92c7e0:	00 
  92c7e1:	e8 9a ed fc ff       	call   8fb580 <_ZN4core3ptr65drop_in_place$LT$alloc..vec..Vec$LT$alloc..string..String$GT$$GT$17hd2a54bddd809dd19E.llvm.5215769359700358943>
  92c7e6:	b0 01                	mov    al,0x1
  92c7e8:	89 44 24 20          	mov    DWORD PTR [rsp+0x20],eax
  92c7ec:	e9 8b 00 00 00       	jmp    92c87c <future_backtest::RunnerCore::run_multi+0xa2ac>
  92c7f1:	49 89 c4             	mov    r12,rax
  92c7f4:	45 84 ed             	test   r13b,r13b
  92c7f7:	75 0d                	jne    92c806 <future_backtest::RunnerCore::run_multi+0xa236>
  92c7f9:	48 8d bc 24 d0 11 00 	lea    rdi,[rsp+0x11d0]
  92c800:	00 
  92c801:	e8 fa e4 fc ff       	call   8fad00 <core::ptr::drop_in_place<libloading::error::Error>>
  92c806:	b0 01                	mov    al,0x1
  92c808:	89 44 24 68          	mov    DWORD PTR [rsp+0x68],eax
  92c80c:	48 8d bc 24 b0 10 00 	lea    rdi,[rsp+0x10b0]
  92c813:	00 
  92c814:	ff 15 06 0a fd 00    	call   QWORD PTR [rip+0xfd0a06]        # 18fd220 <_DYNAMIC+0x1920>
  92c81a:	48 8b b4 24 e8 00 00 	mov    rsi,QWORD PTR [rsp+0xe8]
  92c821:	00 
  92c822:	48 85 f6             	test   rsi,rsi
  92c825:	74 17                	je     92c83e <future_backtest::RunnerCore::run_multi+0xa26e>
  92c827:	48 8b bc 24 f0 00 00 	mov    rdi,QWORD PTR [rsp+0xf0]
  92c82e:	00 
  92c82f:	48 c1 e6 03          	shl    rsi,0x3
  92c833:	ba 08 00 00 00       	mov    edx,0x8
  92c838:	ff 15 e2 f2 fc 00    	call   QWORD PTR [rip+0xfcf2e2]        # 18fbb20 <_DYNAMIC+0x220>
  92c83e:	80 7c 24 68 00       	cmp    BYTE PTR [rsp+0x68],0x0
  92c843:	75 0b                	jne    92c850 <future_backtest::RunnerCore::run_multi+0xa280>
  92c845:	eb 1b                	jmp    92c862 <future_backtest::RunnerCore::run_multi+0xa292>
  92c847:	ff 15 73 f6 fc 00    	call   QWORD PTR [rip+0xfcf673]        # 18fbec0 <_DYNAMIC+0x5c0>
  92c84d:	49 89 c4             	mov    r12,rax
  92c850:	48 8d bc 24 e8 02 00 	lea    rdi,[rsp+0x2e8]
  92c857:	00 
  92c858:	e8 d3 ff fc ff       	call   8fc830 <core::ptr::drop_in_place<alloc::vec::Vec<libloading::safe::Library>>>
  92c85d:	eb 03                	jmp    92c862 <future_backtest::RunnerCore::run_multi+0xa292>
  92c85f:	49 89 c4             	mov    r12,rax
  92c862:	48 8d bc 24 80 1b 00 	lea    rdi,[rsp+0x1b80]
  92c869:	00 
  92c86a:	e8 11 0d fd ff       	call   8fd580 <core::ptr::drop_in_place<future_backtest::Customer::customer_params::StrategyParams>>
  92c86f:	48 8d bc 24 e0 0e 00 	lea    rdi,[rsp+0xee0]
  92c876:	00 
  92c877:	e8 64 26 fd ff       	call   8feee0 <core::ptr::drop_in_place<core::option::Option<future_backtest::RunnerCore::MetaRunState>>>
  92c87c:	48 8d bc 24 a8 01 00 	lea    rdi,[rsp+0x1a8]
  92c883:	00 
  92c884:	e8 57 2e fd ff       	call   8ff6e0 <core::ptr::drop_in_place<alloc::vec::Vec<future_backtest::DataStruct::event_slice::EventSlice>>>
  92c889:	48 8d bc 24 60 18 00 	lea    rdi,[rsp+0x1860]
  92c890:	00 
  92c891:	e8 8a 1d fd ff       	call   8fe620 <core::ptr::drop_in_place<future_backtest::MultiStrategy::event_producer::EventProducer>>
  92c896:	e9 83 00 00 00       	jmp    92c91e <future_backtest::RunnerCore::run_multi+0xa34e>
  92c89b:	49 89 c4             	mov    r12,rax
  92c89e:	48 8d bc 24 e0 0e 00 	lea    rdi,[rsp+0xee0]
  92c8a5:	00 
  92c8a6:	e8 d5 ec fc ff       	call   8fb580 <_ZN4core3ptr65drop_in_place$LT$alloc..vec..Vec$LT$alloc..string..String$GT$$GT$17hd2a54bddd809dd19E.llvm.5215769359700358943>
  92c8ab:	48 8d bc 24 60 18 00 	lea    rdi,[rsp+0x1860]
  92c8b2:	00 
  92c8b3:	e8 d8 2b fd ff       	call   8ff490 <core::ptr::drop_in_place<core::option::Option<alloc::vec::Vec<alloc::string::String>>>>
  92c8b8:	48 8d bc 24 d0 11 00 	lea    rdi,[rsp+0x11d0]
  92c8bf:	00 
  92c8c0:	e8 9b eb fc ff       	call   8fb460 <core::ptr::drop_in_place<future_backtest::Config::config::FilterCode>>
  92c8c5:	eb 1d                	jmp    92c8e4 <future_backtest::RunnerCore::run_multi+0xa314>
  92c8c7:	49 89 c4             	mov    r12,rax
  92c8ca:	48 8d bc 24 e0 0e 00 	lea    rdi,[rsp+0xee0]
  92c8d1:	00 
  92c8d2:	e8 a9 ec fc ff       	call   8fb580 <_ZN4core3ptr65drop_in_place$LT$alloc..vec..Vec$LT$alloc..string..String$GT$$GT$17hd2a54bddd809dd19E.llvm.5215769359700358943>
  92c8d7:	48 8d bc 24 60 18 00 	lea    rdi,[rsp+0x1860]
  92c8de:	00 
  92c8df:	e8 ac 2b fd ff       	call   8ff490 <core::ptr::drop_in_place<core::option::Option<alloc::vec::Vec<alloc::string::String>>>>
  92c8e4:	48 8d bc 24 80 1b 00 	lea    rdi,[rsp+0x1b80]
  92c8eb:	00 
  92c8ec:	e8 7f 06 fd ff       	call   8fcf70 <core::ptr::drop_in_place<(alloc::string::String,alloc::string::String)>>
  92c8f1:	48 8d bc 24 c0 01 00 	lea    rdi,[rsp+0x1c0]
  92c8f8:	00 
  92c8f9:	e8 82 ec fc ff       	call   8fb580 <_ZN4core3ptr65drop_in_place$LT$alloc..vec..Vec$LT$alloc..string..String$GT$$GT$17hd2a54bddd809dd19E.llvm.5215769359700358943>
  92c8fe:	48 8d bc 24 a0 03 00 	lea    rdi,[rsp+0x3a0]
  92c905:	00 
  92c906:	e8 75 ec fc ff       	call   8fb580 <_ZN4core3ptr65drop_in_place$LT$alloc..vec..Vec$LT$alloc..string..String$GT$$GT$17hd2a54bddd809dd19E.llvm.5215769359700358943>
  92c90b:	b0 01                	mov    al,0x1
  92c90d:	89 44 24 20          	mov    DWORD PTR [rsp+0x20],eax
  92c911:	48 8d bc 24 60 0e 00 	lea    rdi,[rsp+0xe60]
  92c918:	00 
  92c919:	e8 a2 7f 07 00       	call   9a48c0 <<hashbrown::raw::RawTable<T,A> as core::ops::drop::Drop>::drop>
  92c91e:	48 8d 7c 24 38       	lea    rdi,[rsp+0x38]
  92c923:	e8 e8 24 fd ff       	call   8fee10 <core::ptr::drop_in_place<alloc::vec::Vec<future_backtest::Strategy::strategy::Strategy>>>
  92c928:	48 8b 84 24 88 00 00 	mov    rax,QWORD PTR [rsp+0x88]
  92c92f:	00 
  92c930:	48 ff 08             	dec    QWORD PTR [rax]
  92c933:	74 12                	je     92c947 <future_backtest::RunnerCore::run_multi+0xa377>
  92c935:	eb 1e                	jmp    92c955 <future_backtest::RunnerCore::run_multi+0xa385>
  92c937:	49 89 c4             	mov    r12,rax
  92c93a:	48 8b 84 24 88 00 00 	mov    rax,QWORD PTR [rsp+0x88]
  92c941:	00 
  92c942:	48 ff 08             	dec    QWORD PTR [rax]
  92c945:	75 0e                	jne    92c955 <future_backtest::RunnerCore::run_multi+0xa385>
  92c947:	48 8d bc 24 60 03 00 	lea    rdi,[rsp+0x360]
  92c94e:	00 
  92c94f:	ff 15 fb fb fc 00    	call   QWORD PTR [rip+0xfcfbfb]        # 18fc550 <_DYNAMIC+0xc50>
  92c955:	48 8b 44 24 18       	mov    rax,QWORD PTR [rsp+0x18]
  92c95a:	48 ff 08             	dec    QWORD PTR [rax]
  92c95d:	75 0e                	jne    92c96d <future_backtest::RunnerCore::run_multi+0xa39d>
  92c95f:	48 8d bc 24 58 03 00 	lea    rdi,[rsp+0x358]
  92c966:	00 
  92c967:	ff 15 eb fb fc 00    	call   QWORD PTR [rip+0xfcfbeb]        # 18fc558 <_DYNAMIC+0xc58>
  92c96d:	48 b8 00 00 00 00 00 	movabs rax,0x8000000000000000
  92c974:	00 00 80 
  92c977:	48 39 84 24 f0 19 00 	cmp    QWORD PTR [rsp+0x19f0],rax
  92c97e:	00 
  92c97f:	74 21                	je     92c9a2 <future_backtest::RunnerCore::run_multi+0xa3d2>
  92c981:	80 7c 24 20 00       	cmp    BYTE PTR [rsp+0x20],0x0
  92c986:	74 1a                	je     92c9a2 <future_backtest::RunnerCore::run_multi+0xa3d2>
  92c988:	48 8d bc 24 f0 19 00 	lea    rdi,[rsp+0x19f0]
  92c98f:	00 
  92c990:	e8 8b 01 fd ff       	call   8fcb20 <core::ptr::drop_in_place<future_backtest::MetaControl::config::MetaManifest>>
  92c995:	48 8d bc 24 a8 1a 00 	lea    rdi,[rsp+0x1aa8]
  92c99c:	00 
  92c99d:	e8 3e 15 fd ff       	call   8fdee0 <core::ptr::drop_in_place<future_backtest::MetaControl::router::MetaDecisionSchedule>>
  92c9a2:	48 8d bc 24 d0 00 00 	lea    rdi,[rsp+0xd0]
  92c9a9:	00 
  92c9aa:	e8 b1 28 fd ff       	call   8ff260 <core::ptr::drop_in_place<alloc::vec::Vec<future_backtest::Config::config::StrategyConfig>>>
  92c9af:	eb 09                	jmp    92c9ba <future_backtest::RunnerCore::run_multi+0xa3ea>
  92c9b1:	ff 15 09 f5 fc 00    	call   QWORD PTR [rip+0xfcf509]        # 18fbec0 <_DYNAMIC+0x5c0>
  92c9b7:	49 89 c4             	mov    r12,rax
  92c9ba:	48 b8 00 00 00 00 00 	movabs rax,0x8000000000000000
  92c9c1:	00 00 80 
  92c9c4:	48 39 84 24 50 03 00 	cmp    QWORD PTR [rsp+0x350],rax
  92c9cb:	00 
  92c9cc:	74 17                	je     92c9e5 <future_backtest::RunnerCore::run_multi+0xa415>
  92c9ce:	80 bc 24 c8 00 00 00 	cmp    BYTE PTR [rsp+0xc8],0x0
  92c9d5:	00 
  92c9d6:	74 0d                	je     92c9e5 <future_backtest::RunnerCore::run_multi+0xa415>
  92c9d8:	48 8b bc 24 48 03 00 	mov    rdi,QWORD PTR [rsp+0x348]
  92c9df:	00 
  92c9e0:	e8 3b 01 fd ff       	call   8fcb20 <core::ptr::drop_in_place<future_backtest::MetaControl::config::MetaManifest>>
  92c9e5:	4c 89 e7             	mov    rdi,r12
  92c9e8:	e8 83 7f f0 00       	call   1834970 <_Unwind_Resume@plt>
