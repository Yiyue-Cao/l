000000000003d720 <<strategy_comm3_1::StrategyComm3 as future_backtest_sdk::plugin::StrategyPlugin>::on_depth>:
   3d720:	48 83 bf f0 01 00 00 	cmp    QWORD PTR [rdi+0x1f0],0x0
   3d727:	00 
   3d728:	0f 84 ca 01 00 00    	je     3d8f8 <<strategy_comm3_1::StrategyComm3 as future_backtest_sdk::plugin::StrategyPlugin>::on_depth+0x1d8>
   3d72e:	55                   	push   rbp
   3d72f:	41 57                	push   r15
   3d731:	41 56                	push   r14
   3d733:	41 55                	push   r13
   3d735:	41 54                	push   r12
   3d737:	53                   	push   rbx
   3d738:	48 81 ec 98 00 00 00 	sub    rsp,0x98
   3d73f:	49 89 f6             	mov    r14,rsi
   3d742:	48 83 c6 20          	add    rsi,0x20
   3d746:	48 8d 87 d8 01 00 00 	lea    rax,[rdi+0x1d8]
   3d74d:	48 89 44 24 30       	mov    QWORD PTR [rsp+0x30],rax
   3d752:	48 8d 87 f8 01 00 00 	lea    rax,[rdi+0x1f8]
   3d759:	48 89 fb             	mov    rbx,rdi
   3d75c:	48 89 44 24 28       	mov    QWORD PTR [rsp+0x28],rax
   3d761:	48 89 c7             	mov    rdi,rax
   3d764:	48 89 74 24 38       	mov    QWORD PTR [rsp+0x38],rsi
   3d769:	e8 d2 9a 01 00       	call   57240 <core::hash::BuildHasher::hash_one>
   3d76e:	48 89 c1             	mov    rcx,rax
   3d771:	48 c1 e9 39          	shr    rcx,0x39
   3d775:	48 8b bb d8 01 00 00 	mov    rdi,QWORD PTR [rbx+0x1d8]
   3d77c:	48 8b b3 e0 01 00 00 	mov    rsi,QWORD PTR [rbx+0x1e0]
   3d783:	66 0f 6e c1          	movd   xmm0,ecx
   3d787:	66 0f 60 c0          	punpcklbw xmm0,xmm0
   3d78b:	f2 0f 70 c0 00       	pshuflw xmm0,xmm0,0x0
   3d790:	66 0f 70 c8 00       	pshufd xmm1,xmm0,0x0
   3d795:	48 8d 6f d0          	lea    rbp,[rdi-0x30]
   3d799:	4d 8b 6e 28          	mov    r13,QWORD PTR [r14+0x28]
   3d79d:	49 8b 56 30          	mov    rdx,QWORD PTR [r14+0x30]
   3d7a1:	45 31 c0             	xor    r8d,r8d
   3d7a4:	66 0f 76 d2          	pcmpeqd xmm2,xmm2
   3d7a8:	4c 8b 3d f9 09 0a 00 	mov    r15,QWORD PTR [rip+0xa09f9]        # de1a8 <bcmp@GLIBC_2.2.5>
   3d7af:	48 21 f0             	and    rax,rsi
   3d7b2:	f3 0f 6f 1c 07       	movdqu xmm3,XMMWORD PTR [rdi+rax*1]
   3d7b7:	66 0f 6f c3          	movdqa xmm0,xmm3
   3d7bb:	66 0f 74 c1          	pcmpeqb xmm0,xmm1
   3d7bf:	66 0f d7 c8          	pmovmskb ecx,xmm0
   3d7c3:	85 c9                	test   ecx,ecx
   3d7c5:	0f 84 95 00 00 00    	je     3d860 <<strategy_comm3_1::StrategyComm3 as future_backtest_sdk::plugin::StrategyPlugin>::on_depth+0x140>
   3d7cb:	48 89 44 24 10       	mov    QWORD PTR [rsp+0x10],rax
   3d7d0:	66 0f 7f 4c 24 50    	movdqa XMMWORD PTR [rsp+0x50],xmm1
   3d7d6:	48 89 74 24 08       	mov    QWORD PTR [rsp+0x8],rsi
   3d7db:	4c 89 04 24          	mov    QWORD PTR [rsp],r8
   3d7df:	66 0f 7f 5c 24 40    	movdqa XMMWORD PTR [rsp+0x40],xmm3
   3d7e5:	48 89 4c 24 18       	mov    QWORD PTR [rsp+0x18],rcx
   3d7ea:	f3 0f bc c9          	tzcnt  ecx,ecx
   3d7ee:	48 01 c1             	add    rcx,rax
   3d7f1:	48 21 f1             	and    rcx,rsi
   3d7f4:	48 f7 d9             	neg    rcx
   3d7f7:	4c 8d 24 49          	lea    r12,[rcx+rcx*2]
   3d7fb:	49 c1 e4 04          	shl    r12,0x4
   3d7ff:	4a 3b 54 25 10       	cmp    rdx,QWORD PTR [rbp+r12*1+0x10]
   3d804:	75 28                	jne    3d82e <<strategy_comm3_1::StrategyComm3 as future_backtest_sdk::plugin::StrategyPlugin>::on_depth+0x10e>
   3d806:	49 8d 04 2c          	lea    rax,[r12+rbp*1]
   3d80a:	48 8b 70 08          	mov    rsi,QWORD PTR [rax+0x8]
   3d80e:	48 89 7c 24 20       	mov    QWORD PTR [rsp+0x20],rdi
   3d813:	4c 89 ef             	mov    rdi,r13
   3d816:	4c 89 f3             	mov    rbx,r14
   3d819:	49 89 d6             	mov    r14,rdx
   3d81c:	41 ff d7             	call   r15
   3d81f:	48 8b 7c 24 20       	mov    rdi,QWORD PTR [rsp+0x20]
   3d824:	4c 89 f2             	mov    rdx,r14
   3d827:	49 89 de             	mov    r14,rbx
   3d82a:	85 c0                	test   eax,eax
   3d82c:	74 4e                	je     3d87c <<strategy_comm3_1::StrategyComm3 as future_backtest_sdk::plugin::StrategyPlugin>::on_depth+0x15c>
   3d82e:	48 8b 4c 24 18       	mov    rcx,QWORD PTR [rsp+0x18]
   3d833:	8d 41 ff             	lea    eax,[rcx-0x1]
   3d836:	66 21 c8             	and    ax,cx
   3d839:	89 c1                	mov    ecx,eax
   3d83b:	48 8b 44 24 10       	mov    rax,QWORD PTR [rsp+0x10]
   3d840:	66 0f 6f 4c 24 50    	movdqa xmm1,XMMWORD PTR [rsp+0x50]
   3d846:	48 8b 74 24 08       	mov    rsi,QWORD PTR [rsp+0x8]
   3d84b:	4c 8b 04 24          	mov    r8,QWORD PTR [rsp]
   3d84f:	66 0f 76 d2          	pcmpeqd xmm2,xmm2
   3d853:	66 0f 6f 5c 24 40    	movdqa xmm3,XMMWORD PTR [rsp+0x40]
   3d859:	75 8a                	jne    3d7e5 <<strategy_comm3_1::StrategyComm3 as future_backtest_sdk::plugin::StrategyPlugin>::on_depth+0xc5>
   3d85b:	0f 1f 44 00 00       	nop    DWORD PTR [rax+rax*1+0x0]
   3d860:	66 0f 74 da          	pcmpeqb xmm3,xmm2
   3d864:	66 0f d7 cb          	pmovmskb ecx,xmm3
   3d868:	85 c9                	test   ecx,ecx
   3d86a:	75 7b                	jne    3d8e7 <<strategy_comm3_1::StrategyComm3 as future_backtest_sdk::plugin::StrategyPlugin>::on_depth+0x1c7>
   3d86c:	4c 01 c0             	add    rax,r8
   3d86f:	48 83 c0 10          	add    rax,0x10
   3d873:	49 83 c0 10          	add    r8,0x10
   3d877:	e9 33 ff ff ff       	jmp    3d7af <<strategy_comm3_1::StrategyComm3 as future_backtest_sdk::plugin::StrategyPlugin>::on_depth+0x8f>
   3d87c:	f2 41 0f 10 86 98 00 	movsd  xmm0,QWORD PTR [r14+0x98]
   3d883:	00 00 
   3d885:	66 42 0f 2e 44 27 e8 	ucomisd xmm0,QWORD PTR [rdi+r12*1-0x18]
   3d88c:	75 13                	jne    3d8a1 <<strategy_comm3_1::StrategyComm3 as future_backtest_sdk::plugin::StrategyPlugin>::on_depth+0x181>
   3d88e:	7a 11                	jp     3d8a1 <<strategy_comm3_1::StrategyComm3 as future_backtest_sdk::plugin::StrategyPlugin>::on_depth+0x181>
   3d890:	f2 41 0f 10 46 48    	movsd  xmm0,QWORD PTR [r14+0x48]
   3d896:	66 42 0f 2e 44 27 f0 	ucomisd xmm0,QWORD PTR [rdi+r12*1-0x10]
   3d89d:	75 02                	jne    3d8a1 <<strategy_comm3_1::StrategyComm3 as future_backtest_sdk::plugin::StrategyPlugin>::on_depth+0x181>
   3d89f:	7b 46                	jnp    3d8e7 <<strategy_comm3_1::StrategyComm3 as future_backtest_sdk::plugin::StrategyPlugin>::on_depth+0x1c7>
   3d8a1:	48 8b 7c 24 28       	mov    rdi,QWORD PTR [rsp+0x28]
   3d8a6:	48 8b 5c 24 38       	mov    rbx,QWORD PTR [rsp+0x38]
   3d8ab:	48 89 de             	mov    rsi,rbx
   3d8ae:	e8 8d 99 01 00       	call   57240 <core::hash::BuildHasher::hash_one>
   3d8b3:	48 8d 7c 24 68       	lea    rdi,[rsp+0x68]
   3d8b8:	48 8b 74 24 30       	mov    rsi,QWORD PTR [rsp+0x30]
   3d8bd:	48 89 c2             	mov    rdx,rax
   3d8c0:	48 89 d9             	mov    rcx,rbx
   3d8c3:	e8 68 f0 00 00       	call   4c930 <hashbrown::raw::RawTable<T,A>::remove_entry>
   3d8c8:	48 8b 74 24 68       	mov    rsi,QWORD PTR [rsp+0x68]
   3d8cd:	48 89 f0             	mov    rax,rsi
   3d8d0:	48 f7 d8             	neg    rax
   3d8d3:	70 12                	jo     3d8e7 <<strategy_comm3_1::StrategyComm3 as future_backtest_sdk::plugin::StrategyPlugin>::on_depth+0x1c7>
   3d8d5:	73 10                	jae    3d8e7 <<strategy_comm3_1::StrategyComm3 as future_backtest_sdk::plugin::StrategyPlugin>::on_depth+0x1c7>
   3d8d7:	48 8b 7c 24 70       	mov    rdi,QWORD PTR [rsp+0x70]
   3d8dc:	ba 01 00 00 00       	mov    edx,0x1
   3d8e1:	ff 15 09 08 0a 00    	call   QWORD PTR [rip+0xa0809]        # de0f0 <_DYNAMIC+0x218>
   3d8e7:	48 81 c4 98 00 00 00 	add    rsp,0x98
   3d8ee:	5b                   	pop    rbx
   3d8ef:	41 5c                	pop    r12
   3d8f1:	41 5d                	pop    r13
   3d8f3:	41 5e                	pop    r14
   3d8f5:	41 5f                	pop    r15
   3d8f7:	5d                   	pop    rbp
   3d8f8:	31 c0                	xor    eax,eax
   3d8fa:	c3                   	ret    
   3d8fb:	cc                   	int3   
   3d8fc:	cc                   	int3   
   3d8fd:	cc                   	int3   
   3d8fe:	cc                   	int3   
   3d8ff:	cc                   	int3   