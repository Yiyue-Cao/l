000000000003d6f0 <<strategy_comm3_2::StrategyComm3 as future_backtest_sdk::plugin::StrategyPlugin>::on_depth>:
   3d6f0:	48 83 bf f8 01 00 00 	cmp    QWORD PTR [rdi+0x1f8],0x0
   3d6f7:	00 
   3d6f8:	0f 84 ca 01 00 00    	je     3d8c8 <<strategy_comm3_2::StrategyComm3 as future_backtest_sdk::plugin::StrategyPlugin>::on_depth+0x1d8>
   3d6fe:	55                   	push   rbp
   3d6ff:	41 57                	push   r15
   3d701:	41 56                	push   r14
   3d703:	41 55                	push   r13
   3d705:	41 54                	push   r12
   3d707:	53                   	push   rbx
   3d708:	48 81 ec 98 00 00 00 	sub    rsp,0x98
   3d70f:	49 89 f6             	mov    r14,rsi
   3d712:	48 83 c6 20          	add    rsi,0x20
   3d716:	48 8d 87 e0 01 00 00 	lea    rax,[rdi+0x1e0]
   3d71d:	48 89 44 24 30       	mov    QWORD PTR [rsp+0x30],rax
   3d722:	48 8d 87 00 02 00 00 	lea    rax,[rdi+0x200]
   3d729:	48 89 fb             	mov    rbx,rdi
   3d72c:	48 89 44 24 28       	mov    QWORD PTR [rsp+0x28],rax
   3d731:	48 89 c7             	mov    rdi,rax
   3d734:	48 89 74 24 38       	mov    QWORD PTR [rsp+0x38],rsi
   3d739:	e8 e2 9c 01 00       	call   57420 <core::hash::BuildHasher::hash_one>
   3d73e:	48 89 c1             	mov    rcx,rax
   3d741:	48 c1 e9 39          	shr    rcx,0x39
   3d745:	48 8b bb e0 01 00 00 	mov    rdi,QWORD PTR [rbx+0x1e0]
   3d74c:	48 8b b3 e8 01 00 00 	mov    rsi,QWORD PTR [rbx+0x1e8]
   3d753:	66 0f 6e c1          	movd   xmm0,ecx
   3d757:	66 0f 60 c0          	punpcklbw xmm0,xmm0
   3d75b:	f2 0f 70 c0 00       	pshuflw xmm0,xmm0,0x0
   3d760:	66 0f 70 c8 00       	pshufd xmm1,xmm0,0x0
   3d765:	48 8d 6f d0          	lea    rbp,[rdi-0x30]
   3d769:	4d 8b 6e 28          	mov    r13,QWORD PTR [r14+0x28]
   3d76d:	49 8b 56 30          	mov    rdx,QWORD PTR [r14+0x30]
   3d771:	45 31 c0             	xor    r8d,r8d
   3d774:	66 0f 76 d2          	pcmpeqd xmm2,xmm2
   3d778:	4c 8b 3d 09 0d 0a 00 	mov    r15,QWORD PTR [rip+0xa0d09]        # de488 <bcmp@GLIBC_2.2.5>
   3d77f:	48 21 f0             	and    rax,rsi
   3d782:	f3 0f 6f 1c 07       	movdqu xmm3,XMMWORD PTR [rdi+rax*1]
   3d787:	66 0f 6f c3          	movdqa xmm0,xmm3
   3d78b:	66 0f 74 c1          	pcmpeqb xmm0,xmm1
   3d78f:	66 0f d7 c8          	pmovmskb ecx,xmm0
   3d793:	85 c9                	test   ecx,ecx
   3d795:	0f 84 95 00 00 00    	je     3d830 <<strategy_comm3_2::StrategyComm3 as future_backtest_sdk::plugin::StrategyPlugin>::on_depth+0x140>
   3d79b:	48 89 44 24 10       	mov    QWORD PTR [rsp+0x10],rax
   3d7a0:	66 0f 7f 4c 24 50    	movdqa XMMWORD PTR [rsp+0x50],xmm1
   3d7a6:	48 89 74 24 08       	mov    QWORD PTR [rsp+0x8],rsi
   3d7ab:	4c 89 04 24          	mov    QWORD PTR [rsp],r8
   3d7af:	66 0f 7f 5c 24 40    	movdqa XMMWORD PTR [rsp+0x40],xmm3
   3d7b5:	48 89 4c 24 18       	mov    QWORD PTR [rsp+0x18],rcx
   3d7ba:	f3 0f bc c9          	tzcnt  ecx,ecx
   3d7be:	48 01 c1             	add    rcx,rax
   3d7c1:	48 21 f1             	and    rcx,rsi
   3d7c4:	48 f7 d9             	neg    rcx
   3d7c7:	4c 8d 24 49          	lea    r12,[rcx+rcx*2]
   3d7cb:	49 c1 e4 04          	shl    r12,0x4
   3d7cf:	4a 3b 54 25 10       	cmp    rdx,QWORD PTR [rbp+r12*1+0x10]
   3d7d4:	75 28                	jne    3d7fe <<strategy_comm3_2::StrategyComm3 as future_backtest_sdk::plugin::StrategyPlugin>::on_depth+0x10e>
   3d7d6:	49 8d 04 2c          	lea    rax,[r12+rbp*1]
   3d7da:	48 8b 70 08          	mov    rsi,QWORD PTR [rax+0x8]
   3d7de:	48 89 7c 24 20       	mov    QWORD PTR [rsp+0x20],rdi
   3d7e3:	4c 89 ef             	mov    rdi,r13
   3d7e6:	4c 89 f3             	mov    rbx,r14
   3d7e9:	49 89 d6             	mov    r14,rdx
   3d7ec:	41 ff d7             	call   r15
   3d7ef:	48 8b 7c 24 20       	mov    rdi,QWORD PTR [rsp+0x20]
   3d7f4:	4c 89 f2             	mov    rdx,r14
   3d7f7:	49 89 de             	mov    r14,rbx
   3d7fa:	85 c0                	test   eax,eax
   3d7fc:	74 4e                	je     3d84c <<strategy_comm3_2::StrategyComm3 as future_backtest_sdk::plugin::StrategyPlugin>::on_depth+0x15c>
   3d7fe:	48 8b 4c 24 18       	mov    rcx,QWORD PTR [rsp+0x18]
   3d803:	8d 41 ff             	lea    eax,[rcx-0x1]
   3d806:	66 21 c8             	and    ax,cx
   3d809:	89 c1                	mov    ecx,eax
   3d80b:	48 8b 44 24 10       	mov    rax,QWORD PTR [rsp+0x10]
   3d810:	66 0f 6f 4c 24 50    	movdqa xmm1,XMMWORD PTR [rsp+0x50]
   3d816:	48 8b 74 24 08       	mov    rsi,QWORD PTR [rsp+0x8]
   3d81b:	4c 8b 04 24          	mov    r8,QWORD PTR [rsp]
   3d81f:	66 0f 76 d2          	pcmpeqd xmm2,xmm2
   3d823:	66 0f 6f 5c 24 40    	movdqa xmm3,XMMWORD PTR [rsp+0x40]
   3d829:	75 8a                	jne    3d7b5 <<strategy_comm3_2::StrategyComm3 as future_backtest_sdk::plugin::StrategyPlugin>::on_depth+0xc5>
   3d82b:	0f 1f 44 00 00       	nop    DWORD PTR [rax+rax*1+0x0]
   3d830:	66 0f 74 da          	pcmpeqb xmm3,xmm2
   3d834:	66 0f d7 cb          	pmovmskb ecx,xmm3
   3d838:	85 c9                	test   ecx,ecx
   3d83a:	75 7b                	jne    3d8b7 <<strategy_comm3_2::StrategyComm3 as future_backtest_sdk::plugin::StrategyPlugin>::on_depth+0x1c7>
   3d83c:	4c 01 c0             	add    rax,r8
   3d83f:	48 83 c0 10          	add    rax,0x10
   3d843:	49 83 c0 10          	add    r8,0x10
   3d847:	e9 33 ff ff ff       	jmp    3d77f <<strategy_comm3_2::StrategyComm3 as future_backtest_sdk::plugin::StrategyPlugin>::on_depth+0x8f>
   3d84c:	f2 41 0f 10 86 98 00 	movsd  xmm0,QWORD PTR [r14+0x98]
   3d853:	00 00 
   3d855:	66 42 0f 2e 44 27 e8 	ucomisd xmm0,QWORD PTR [rdi+r12*1-0x18]
   3d85c:	75 13                	jne    3d871 <<strategy_comm3_2::StrategyComm3 as future_backtest_sdk::plugin::StrategyPlugin>::on_depth+0x181>
   3d85e:	7a 11                	jp     3d871 <<strategy_comm3_2::StrategyComm3 as future_backtest_sdk::plugin::StrategyPlugin>::on_depth+0x181>
   3d860:	f2 41 0f 10 46 48    	movsd  xmm0,QWORD PTR [r14+0x48]
   3d866:	66 42 0f 2e 44 27 f0 	ucomisd xmm0,QWORD PTR [rdi+r12*1-0x10]
   3d86d:	75 02                	jne    3d871 <<strategy_comm3_2::StrategyComm3 as future_backtest_sdk::plugin::StrategyPlugin>::on_depth+0x181>
   3d86f:	7b 46                	jnp    3d8b7 <<strategy_comm3_2::StrategyComm3 as future_backtest_sdk::plugin::StrategyPlugin>::on_depth+0x1c7>
   3d871:	48 8b 7c 24 28       	mov    rdi,QWORD PTR [rsp+0x28]
   3d876:	48 8b 5c 24 38       	mov    rbx,QWORD PTR [rsp+0x38]
   3d87b:	48 89 de             	mov    rsi,rbx
   3d87e:	e8 9d 9b 01 00       	call   57420 <core::hash::BuildHasher::hash_one>
   3d883:	48 8d 7c 24 68       	lea    rdi,[rsp+0x68]
   3d888:	48 8b 74 24 30       	mov    rsi,QWORD PTR [rsp+0x30]
   3d88d:	48 89 c2             	mov    rdx,rax
   3d890:	48 89 d9             	mov    rcx,rbx
   3d893:	e8 48 f4 00 00       	call   4cce0 <hashbrown::raw::RawTable<T,A>::remove_entry>
   3d898:	48 8b 74 24 68       	mov    rsi,QWORD PTR [rsp+0x68]
   3d89d:	48 89 f0             	mov    rax,rsi
   3d8a0:	48 f7 d8             	neg    rax
   3d8a3:	70 12                	jo     3d8b7 <<strategy_comm3_2::StrategyComm3 as future_backtest_sdk::plugin::StrategyPlugin>::on_depth+0x1c7>
   3d8a5:	73 10                	jae    3d8b7 <<strategy_comm3_2::StrategyComm3 as future_backtest_sdk::plugin::StrategyPlugin>::on_depth+0x1c7>
   3d8a7:	48 8b 7c 24 70       	mov    rdi,QWORD PTR [rsp+0x70]
   3d8ac:	ba 01 00 00 00       	mov    edx,0x1
   3d8b1:	ff 15 19 0b 0a 00    	call   QWORD PTR [rip+0xa0b19]        # de3d0 <_DYNAMIC+0x218>
   3d8b7:	48 81 c4 98 00 00 00 	add    rsp,0x98
   3d8be:	5b                   	pop    rbx
   3d8bf:	41 5c                	pop    r12
   3d8c1:	41 5d                	pop    r13
   3d8c3:	41 5e                	pop    r14
   3d8c5:	41 5f                	pop    r15
   3d8c7:	5d                   	pop    rbp
   3d8c8:	31 c0                	xor    eax,eax
   3d8ca:	c3                   	ret    
   3d8cb:	cc                   	int3   
   3d8cc:	cc                   	int3   
   3d8cd:	cc                   	int3   
   3d8ce:	cc                   	int3   
   3d8cf:	cc                   	int3   