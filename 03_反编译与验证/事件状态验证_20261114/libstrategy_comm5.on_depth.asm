0000000000044880 <<strategy_comm5::StrategyComm5 as future_backtest_sdk::plugin::StrategyPlugin>::on_depth>:
   44880:	48 83 bf b0 05 00 00 	cmp    QWORD PTR [rdi+0x5b0],0x0
   44887:	00 
   44888:	0f 84 ca 01 00 00    	je     44a58 <<strategy_comm5::StrategyComm5 as future_backtest_sdk::plugin::StrategyPlugin>::on_depth+0x1d8>
   4488e:	55                   	push   rbp
   4488f:	41 57                	push   r15
   44891:	41 56                	push   r14
   44893:	41 55                	push   r13
   44895:	41 54                	push   r12
   44897:	53                   	push   rbx
   44898:	48 81 ec 98 00 00 00 	sub    rsp,0x98
   4489f:	49 89 f6             	mov    r14,rsi
   448a2:	48 83 c6 20          	add    rsi,0x20
   448a6:	48 8d 87 98 05 00 00 	lea    rax,[rdi+0x598]
   448ad:	48 89 44 24 30       	mov    QWORD PTR [rsp+0x30],rax
   448b2:	48 8d 87 b8 05 00 00 	lea    rax,[rdi+0x5b8]
   448b9:	48 89 fb             	mov    rbx,rdi
   448bc:	48 89 44 24 28       	mov    QWORD PTR [rsp+0x28],rax
   448c1:	48 89 c7             	mov    rdi,rax
   448c4:	48 89 74 24 38       	mov    QWORD PTR [rsp+0x38],rsi
   448c9:	e8 d2 ad 03 00       	call   7f6a0 <core::hash::BuildHasher::hash_one>
   448ce:	48 89 c1             	mov    rcx,rax
   448d1:	48 c1 e9 39          	shr    rcx,0x39
   448d5:	48 8b bb 98 05 00 00 	mov    rdi,QWORD PTR [rbx+0x598]
   448dc:	48 8b b3 a0 05 00 00 	mov    rsi,QWORD PTR [rbx+0x5a0]
   448e3:	66 0f 6e c1          	movd   xmm0,ecx
   448e7:	66 0f 60 c0          	punpcklbw xmm0,xmm0
   448eb:	f2 0f 70 c0 00       	pshuflw xmm0,xmm0,0x0
   448f0:	66 0f 70 c8 00       	pshufd xmm1,xmm0,0x0
   448f5:	48 8d 6f d0          	lea    rbp,[rdi-0x30]
   448f9:	4d 8b 6e 28          	mov    r13,QWORD PTR [r14+0x28]
   448fd:	49 8b 56 30          	mov    rdx,QWORD PTR [r14+0x30]
   44901:	45 31 c0             	xor    r8d,r8d
   44904:	66 0f 76 d2          	pcmpeqd xmm2,xmm2
   44908:	4c 8b 3d 19 f4 0b 00 	mov    r15,QWORD PTR [rip+0xbf419]        # 103d28 <bcmp@GLIBC_2.2.5>
   4490f:	48 21 f0             	and    rax,rsi
   44912:	f3 0f 6f 1c 07       	movdqu xmm3,XMMWORD PTR [rdi+rax*1]
   44917:	66 0f 6f c3          	movdqa xmm0,xmm3
   4491b:	66 0f 74 c1          	pcmpeqb xmm0,xmm1
   4491f:	66 0f d7 c8          	pmovmskb ecx,xmm0
   44923:	85 c9                	test   ecx,ecx
   44925:	0f 84 95 00 00 00    	je     449c0 <<strategy_comm5::StrategyComm5 as future_backtest_sdk::plugin::StrategyPlugin>::on_depth+0x140>
   4492b:	48 89 44 24 10       	mov    QWORD PTR [rsp+0x10],rax
   44930:	66 0f 7f 4c 24 50    	movdqa XMMWORD PTR [rsp+0x50],xmm1
   44936:	48 89 74 24 08       	mov    QWORD PTR [rsp+0x8],rsi
   4493b:	4c 89 04 24          	mov    QWORD PTR [rsp],r8
   4493f:	66 0f 7f 5c 24 40    	movdqa XMMWORD PTR [rsp+0x40],xmm3
   44945:	48 89 4c 24 18       	mov    QWORD PTR [rsp+0x18],rcx
   4494a:	f3 0f bc c9          	tzcnt  ecx,ecx
   4494e:	48 01 c1             	add    rcx,rax
   44951:	48 21 f1             	and    rcx,rsi
   44954:	48 f7 d9             	neg    rcx
   44957:	4c 8d 24 49          	lea    r12,[rcx+rcx*2]
   4495b:	49 c1 e4 04          	shl    r12,0x4
   4495f:	4a 3b 54 25 10       	cmp    rdx,QWORD PTR [rbp+r12*1+0x10]
   44964:	75 28                	jne    4498e <<strategy_comm5::StrategyComm5 as future_backtest_sdk::plugin::StrategyPlugin>::on_depth+0x10e>
   44966:	49 8d 04 2c          	lea    rax,[r12+rbp*1]
   4496a:	48 8b 70 08          	mov    rsi,QWORD PTR [rax+0x8]
   4496e:	48 89 7c 24 20       	mov    QWORD PTR [rsp+0x20],rdi
   44973:	4c 89 ef             	mov    rdi,r13
   44976:	4c 89 f3             	mov    rbx,r14
   44979:	49 89 d6             	mov    r14,rdx
   4497c:	41 ff d7             	call   r15
   4497f:	48 8b 7c 24 20       	mov    rdi,QWORD PTR [rsp+0x20]
   44984:	4c 89 f2             	mov    rdx,r14
   44987:	49 89 de             	mov    r14,rbx
   4498a:	85 c0                	test   eax,eax
   4498c:	74 4e                	je     449dc <<strategy_comm5::StrategyComm5 as future_backtest_sdk::plugin::StrategyPlugin>::on_depth+0x15c>
   4498e:	48 8b 4c 24 18       	mov    rcx,QWORD PTR [rsp+0x18]
   44993:	8d 41 ff             	lea    eax,[rcx-0x1]
   44996:	66 21 c8             	and    ax,cx
   44999:	89 c1                	mov    ecx,eax
   4499b:	48 8b 44 24 10       	mov    rax,QWORD PTR [rsp+0x10]
   449a0:	66 0f 6f 4c 24 50    	movdqa xmm1,XMMWORD PTR [rsp+0x50]
   449a6:	48 8b 74 24 08       	mov    rsi,QWORD PTR [rsp+0x8]
   449ab:	4c 8b 04 24          	mov    r8,QWORD PTR [rsp]
   449af:	66 0f 76 d2          	pcmpeqd xmm2,xmm2
   449b3:	66 0f 6f 5c 24 40    	movdqa xmm3,XMMWORD PTR [rsp+0x40]
   449b9:	75 8a                	jne    44945 <<strategy_comm5::StrategyComm5 as future_backtest_sdk::plugin::StrategyPlugin>::on_depth+0xc5>
   449bb:	0f 1f 44 00 00       	nop    DWORD PTR [rax+rax*1+0x0]
   449c0:	66 0f 74 da          	pcmpeqb xmm3,xmm2
   449c4:	66 0f d7 cb          	pmovmskb ecx,xmm3
   449c8:	85 c9                	test   ecx,ecx
   449ca:	75 7b                	jne    44a47 <<strategy_comm5::StrategyComm5 as future_backtest_sdk::plugin::StrategyPlugin>::on_depth+0x1c7>
   449cc:	4c 01 c0             	add    rax,r8
   449cf:	48 83 c0 10          	add    rax,0x10
   449d3:	49 83 c0 10          	add    r8,0x10
   449d7:	e9 33 ff ff ff       	jmp    4490f <<strategy_comm5::StrategyComm5 as future_backtest_sdk::plugin::StrategyPlugin>::on_depth+0x8f>
   449dc:	f2 41 0f 10 86 98 00 	movsd  xmm0,QWORD PTR [r14+0x98]
   449e3:	00 00 
   449e5:	66 42 0f 2e 44 27 e8 	ucomisd xmm0,QWORD PTR [rdi+r12*1-0x18]
   449ec:	75 13                	jne    44a01 <<strategy_comm5::StrategyComm5 as future_backtest_sdk::plugin::StrategyPlugin>::on_depth+0x181>
   449ee:	7a 11                	jp     44a01 <<strategy_comm5::StrategyComm5 as future_backtest_sdk::plugin::StrategyPlugin>::on_depth+0x181>
   449f0:	f2 41 0f 10 46 48    	movsd  xmm0,QWORD PTR [r14+0x48]
   449f6:	66 42 0f 2e 44 27 f0 	ucomisd xmm0,QWORD PTR [rdi+r12*1-0x10]
   449fd:	75 02                	jne    44a01 <<strategy_comm5::StrategyComm5 as future_backtest_sdk::plugin::StrategyPlugin>::on_depth+0x181>
   449ff:	7b 46                	jnp    44a47 <<strategy_comm5::StrategyComm5 as future_backtest_sdk::plugin::StrategyPlugin>::on_depth+0x1c7>
   44a01:	48 8b 7c 24 28       	mov    rdi,QWORD PTR [rsp+0x28]
   44a06:	48 8b 5c 24 38       	mov    rbx,QWORD PTR [rsp+0x38]
   44a0b:	48 89 de             	mov    rsi,rbx
   44a0e:	e8 8d ac 03 00       	call   7f6a0 <core::hash::BuildHasher::hash_one>
   44a13:	48 8d 7c 24 68       	lea    rdi,[rsp+0x68]
   44a18:	48 8b 74 24 30       	mov    rsi,QWORD PTR [rsp+0x30]
   44a1d:	48 89 c2             	mov    rdx,rax
   44a20:	48 89 d9             	mov    rcx,rbx
   44a23:	e8 a8 cb 01 00       	call   615d0 <hashbrown::raw::RawTable<T,A>::remove_entry>
   44a28:	48 8b 74 24 68       	mov    rsi,QWORD PTR [rsp+0x68]
   44a2d:	48 89 f0             	mov    rax,rsi
   44a30:	48 f7 d8             	neg    rax
   44a33:	70 12                	jo     44a47 <<strategy_comm5::StrategyComm5 as future_backtest_sdk::plugin::StrategyPlugin>::on_depth+0x1c7>
   44a35:	73 10                	jae    44a47 <<strategy_comm5::StrategyComm5 as future_backtest_sdk::plugin::StrategyPlugin>::on_depth+0x1c7>
   44a37:	48 8b 7c 24 70       	mov    rdi,QWORD PTR [rsp+0x70]
   44a3c:	ba 01 00 00 00       	mov    edx,0x1
   44a41:	ff 15 31 f2 0b 00    	call   QWORD PTR [rip+0xbf231]        # 103c78 <_DYNAMIC+0x218>
   44a47:	48 81 c4 98 00 00 00 	add    rsp,0x98
   44a4e:	5b                   	pop    rbx
   44a4f:	41 5c                	pop    r12
   44a51:	41 5d                	pop    r13
   44a53:	41 5e                	pop    r14
   44a55:	41 5f                	pop    r15
   44a57:	5d                   	pop    rbp
   44a58:	31 c0                	xor    eax,eax
   44a5a:	c3                   	ret    
   44a5b:	cc                   	int3   
   44a5c:	cc                   	int3   
   44a5d:	cc                   	int3   
   44a5e:	cc                   	int3   
   44a5f:	cc                   	int3   