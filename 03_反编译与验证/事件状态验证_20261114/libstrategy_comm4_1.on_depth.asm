0000000000055990 <<strategy_comm4_1::StrategyComm41 as future_backtest_sdk::plugin::StrategyPlugin>::on_depth>:
   55990:	48 83 bf 20 05 00 00 	cmp    QWORD PTR [rdi+0x520],0x0
   55997:	00 
   55998:	0f 84 ca 01 00 00    	je     55b68 <<strategy_comm4_1::StrategyComm41 as future_backtest_sdk::plugin::StrategyPlugin>::on_depth+0x1d8>
   5599e:	55                   	push   rbp
   5599f:	41 57                	push   r15
   559a1:	41 56                	push   r14
   559a3:	41 55                	push   r13
   559a5:	41 54                	push   r12
   559a7:	53                   	push   rbx
   559a8:	48 81 ec 98 00 00 00 	sub    rsp,0x98
   559af:	49 89 f6             	mov    r14,rsi
   559b2:	48 83 c6 20          	add    rsi,0x20
   559b6:	48 8d 87 08 05 00 00 	lea    rax,[rdi+0x508]
   559bd:	48 89 44 24 30       	mov    QWORD PTR [rsp+0x30],rax
   559c2:	48 8d 87 28 05 00 00 	lea    rax,[rdi+0x528]
   559c9:	48 89 fb             	mov    rbx,rdi
   559cc:	48 89 44 24 28       	mov    QWORD PTR [rsp+0x28],rax
   559d1:	48 89 c7             	mov    rdi,rax
   559d4:	48 89 74 24 38       	mov    QWORD PTR [rsp+0x38],rsi
   559d9:	e8 c2 6c 01 00       	call   6c6a0 <core::hash::BuildHasher::hash_one>
   559de:	48 89 c1             	mov    rcx,rax
   559e1:	48 c1 e9 39          	shr    rcx,0x39
   559e5:	48 8b bb 08 05 00 00 	mov    rdi,QWORD PTR [rbx+0x508]
   559ec:	48 8b b3 10 05 00 00 	mov    rsi,QWORD PTR [rbx+0x510]
   559f3:	66 0f 6e c1          	movd   xmm0,ecx
   559f7:	66 0f 60 c0          	punpcklbw xmm0,xmm0
   559fb:	f2 0f 70 c0 00       	pshuflw xmm0,xmm0,0x0
   55a00:	66 0f 70 c8 00       	pshufd xmm1,xmm0,0x0
   55a05:	48 8d 6f d0          	lea    rbp,[rdi-0x30]
   55a09:	4d 8b 6e 28          	mov    r13,QWORD PTR [r14+0x28]
   55a0d:	49 8b 56 30          	mov    rdx,QWORD PTR [r14+0x30]
   55a11:	45 31 c0             	xor    r8d,r8d
   55a14:	66 0f 76 d2          	pcmpeqd xmm2,xmm2
   55a18:	4c 8b 3d a9 c5 09 00 	mov    r15,QWORD PTR [rip+0x9c5a9]        # f1fc8 <bcmp@GLIBC_2.2.5>
   55a1f:	48 21 f0             	and    rax,rsi
   55a22:	f3 0f 6f 1c 07       	movdqu xmm3,XMMWORD PTR [rdi+rax*1]
   55a27:	66 0f 6f c3          	movdqa xmm0,xmm3
   55a2b:	66 0f 74 c1          	pcmpeqb xmm0,xmm1
   55a2f:	66 0f d7 c8          	pmovmskb ecx,xmm0
   55a33:	85 c9                	test   ecx,ecx
   55a35:	0f 84 95 00 00 00    	je     55ad0 <<strategy_comm4_1::StrategyComm41 as future_backtest_sdk::plugin::StrategyPlugin>::on_depth+0x140>
   55a3b:	48 89 44 24 10       	mov    QWORD PTR [rsp+0x10],rax
   55a40:	66 0f 7f 4c 24 50    	movdqa XMMWORD PTR [rsp+0x50],xmm1
   55a46:	48 89 74 24 08       	mov    QWORD PTR [rsp+0x8],rsi
   55a4b:	4c 89 04 24          	mov    QWORD PTR [rsp],r8
   55a4f:	66 0f 7f 5c 24 40    	movdqa XMMWORD PTR [rsp+0x40],xmm3
   55a55:	48 89 4c 24 18       	mov    QWORD PTR [rsp+0x18],rcx
   55a5a:	f3 0f bc c9          	tzcnt  ecx,ecx
   55a5e:	48 01 c1             	add    rcx,rax
   55a61:	48 21 f1             	and    rcx,rsi
   55a64:	48 f7 d9             	neg    rcx
   55a67:	4c 8d 24 49          	lea    r12,[rcx+rcx*2]
   55a6b:	49 c1 e4 04          	shl    r12,0x4
   55a6f:	4a 3b 54 25 10       	cmp    rdx,QWORD PTR [rbp+r12*1+0x10]
   55a74:	75 28                	jne    55a9e <<strategy_comm4_1::StrategyComm41 as future_backtest_sdk::plugin::StrategyPlugin>::on_depth+0x10e>
   55a76:	49 8d 04 2c          	lea    rax,[r12+rbp*1]
   55a7a:	48 8b 70 08          	mov    rsi,QWORD PTR [rax+0x8]
   55a7e:	48 89 7c 24 20       	mov    QWORD PTR [rsp+0x20],rdi
   55a83:	4c 89 ef             	mov    rdi,r13
   55a86:	4c 89 f3             	mov    rbx,r14
   55a89:	49 89 d6             	mov    r14,rdx
   55a8c:	41 ff d7             	call   r15
   55a8f:	48 8b 7c 24 20       	mov    rdi,QWORD PTR [rsp+0x20]
   55a94:	4c 89 f2             	mov    rdx,r14
   55a97:	49 89 de             	mov    r14,rbx
   55a9a:	85 c0                	test   eax,eax
   55a9c:	74 4e                	je     55aec <<strategy_comm4_1::StrategyComm41 as future_backtest_sdk::plugin::StrategyPlugin>::on_depth+0x15c>
   55a9e:	48 8b 4c 24 18       	mov    rcx,QWORD PTR [rsp+0x18]
   55aa3:	8d 41 ff             	lea    eax,[rcx-0x1]
   55aa6:	66 21 c8             	and    ax,cx
   55aa9:	89 c1                	mov    ecx,eax
   55aab:	48 8b 44 24 10       	mov    rax,QWORD PTR [rsp+0x10]
   55ab0:	66 0f 6f 4c 24 50    	movdqa xmm1,XMMWORD PTR [rsp+0x50]
   55ab6:	48 8b 74 24 08       	mov    rsi,QWORD PTR [rsp+0x8]
   55abb:	4c 8b 04 24          	mov    r8,QWORD PTR [rsp]
   55abf:	66 0f 76 d2          	pcmpeqd xmm2,xmm2
   55ac3:	66 0f 6f 5c 24 40    	movdqa xmm3,XMMWORD PTR [rsp+0x40]
   55ac9:	75 8a                	jne    55a55 <<strategy_comm4_1::StrategyComm41 as future_backtest_sdk::plugin::StrategyPlugin>::on_depth+0xc5>
   55acb:	0f 1f 44 00 00       	nop    DWORD PTR [rax+rax*1+0x0]
   55ad0:	66 0f 74 da          	pcmpeqb xmm3,xmm2
   55ad4:	66 0f d7 cb          	pmovmskb ecx,xmm3
   55ad8:	85 c9                	test   ecx,ecx
   55ada:	75 7b                	jne    55b57 <<strategy_comm4_1::StrategyComm41 as future_backtest_sdk::plugin::StrategyPlugin>::on_depth+0x1c7>
   55adc:	4c 01 c0             	add    rax,r8
   55adf:	48 83 c0 10          	add    rax,0x10
   55ae3:	49 83 c0 10          	add    r8,0x10
   55ae7:	e9 33 ff ff ff       	jmp    55a1f <<strategy_comm4_1::StrategyComm41 as future_backtest_sdk::plugin::StrategyPlugin>::on_depth+0x8f>
   55aec:	f2 41 0f 10 86 98 00 	movsd  xmm0,QWORD PTR [r14+0x98]
   55af3:	00 00 
   55af5:	66 42 0f 2e 44 27 e8 	ucomisd xmm0,QWORD PTR [rdi+r12*1-0x18]
   55afc:	75 13                	jne    55b11 <<strategy_comm4_1::StrategyComm41 as future_backtest_sdk::plugin::StrategyPlugin>::on_depth+0x181>
   55afe:	7a 11                	jp     55b11 <<strategy_comm4_1::StrategyComm41 as future_backtest_sdk::plugin::StrategyPlugin>::on_depth+0x181>
   55b00:	f2 41 0f 10 46 48    	movsd  xmm0,QWORD PTR [r14+0x48]
   55b06:	66 42 0f 2e 44 27 f0 	ucomisd xmm0,QWORD PTR [rdi+r12*1-0x10]
   55b0d:	75 02                	jne    55b11 <<strategy_comm4_1::StrategyComm41 as future_backtest_sdk::plugin::StrategyPlugin>::on_depth+0x181>
   55b0f:	7b 46                	jnp    55b57 <<strategy_comm4_1::StrategyComm41 as future_backtest_sdk::plugin::StrategyPlugin>::on_depth+0x1c7>
   55b11:	48 8b 7c 24 28       	mov    rdi,QWORD PTR [rsp+0x28]
   55b16:	48 8b 5c 24 38       	mov    rbx,QWORD PTR [rsp+0x38]
   55b1b:	48 89 de             	mov    rsi,rbx
   55b1e:	e8 7d 6b 01 00       	call   6c6a0 <core::hash::BuildHasher::hash_one>
   55b23:	48 8d 7c 24 68       	lea    rdi,[rsp+0x68]
   55b28:	48 8b 74 24 30       	mov    rsi,QWORD PTR [rsp+0x30]
   55b2d:	48 89 c2             	mov    rdx,rax
   55b30:	48 89 d9             	mov    rcx,rbx
   55b33:	e8 a8 37 00 00       	call   592e0 <hashbrown::raw::RawTable<T,A>::remove_entry>
   55b38:	48 8b 74 24 68       	mov    rsi,QWORD PTR [rsp+0x68]
   55b3d:	48 89 f0             	mov    rax,rsi
   55b40:	48 f7 d8             	neg    rax
   55b43:	70 12                	jo     55b57 <<strategy_comm4_1::StrategyComm41 as future_backtest_sdk::plugin::StrategyPlugin>::on_depth+0x1c7>
   55b45:	73 10                	jae    55b57 <<strategy_comm4_1::StrategyComm41 as future_backtest_sdk::plugin::StrategyPlugin>::on_depth+0x1c7>
   55b47:	48 8b 7c 24 70       	mov    rdi,QWORD PTR [rsp+0x70]
   55b4c:	ba 01 00 00 00       	mov    edx,0x1
   55b51:	ff 15 91 c3 09 00    	call   QWORD PTR [rip+0x9c391]        # f1ee8 <_DYNAMIC+0x218>
   55b57:	48 81 c4 98 00 00 00 	add    rsp,0x98
   55b5e:	5b                   	pop    rbx
   55b5f:	41 5c                	pop    r12
   55b61:	41 5d                	pop    r13
   55b63:	41 5e                	pop    r14
   55b65:	41 5f                	pop    r15
   55b67:	5d                   	pop    rbp
   55b68:	31 c0                	xor    eax,eax
   55b6a:	c3                   	ret    
   55b6b:	cc                   	int3   
   55b6c:	cc                   	int3   
   55b6d:	cc                   	int3   
   55b6e:	cc                   	int3   
   55b6f:	cc                   	int3   