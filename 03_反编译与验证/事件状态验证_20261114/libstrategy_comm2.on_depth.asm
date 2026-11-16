0000000000048da0 <<strategy_comm2::StrategyComm2 as future_backtest_sdk::plugin::StrategyPlugin>::on_depth>:
   48da0:	48 83 bf 88 01 00 00 	cmp    QWORD PTR [rdi+0x188],0x0
   48da7:	00 
   48da8:	0f 84 ca 01 00 00    	je     48f78 <<strategy_comm2::StrategyComm2 as future_backtest_sdk::plugin::StrategyPlugin>::on_depth+0x1d8>
   48dae:	55                   	push   rbp
   48daf:	41 57                	push   r15
   48db1:	41 56                	push   r14
   48db3:	41 55                	push   r13
   48db5:	41 54                	push   r12
   48db7:	53                   	push   rbx
   48db8:	48 81 ec 98 00 00 00 	sub    rsp,0x98
   48dbf:	49 89 f6             	mov    r14,rsi
   48dc2:	48 83 c6 20          	add    rsi,0x20
   48dc6:	48 8d 87 70 01 00 00 	lea    rax,[rdi+0x170]
   48dcd:	48 89 44 24 30       	mov    QWORD PTR [rsp+0x30],rax
   48dd2:	48 8d 87 90 01 00 00 	lea    rax,[rdi+0x190]
   48dd9:	48 89 fb             	mov    rbx,rdi
   48ddc:	48 89 44 24 28       	mov    QWORD PTR [rsp+0x28],rax
   48de1:	48 89 c7             	mov    rdi,rax
   48de4:	48 89 74 24 38       	mov    QWORD PTR [rsp+0x38],rsi
   48de9:	e8 22 ea 00 00       	call   57810 <core::hash::BuildHasher::hash_one>
   48dee:	48 89 c1             	mov    rcx,rax
   48df1:	48 c1 e9 39          	shr    rcx,0x39
   48df5:	48 8b bb 70 01 00 00 	mov    rdi,QWORD PTR [rbx+0x170]
   48dfc:	48 8b b3 78 01 00 00 	mov    rsi,QWORD PTR [rbx+0x178]
   48e03:	66 0f 6e c1          	movd   xmm0,ecx
   48e07:	66 0f 60 c0          	punpcklbw xmm0,xmm0
   48e0b:	f2 0f 70 c0 00       	pshuflw xmm0,xmm0,0x0
   48e10:	66 0f 70 c8 00       	pshufd xmm1,xmm0,0x0
   48e15:	48 8d 6f d0          	lea    rbp,[rdi-0x30]
   48e19:	4d 8b 6e 28          	mov    r13,QWORD PTR [r14+0x28]
   48e1d:	49 8b 56 30          	mov    rdx,QWORD PTR [r14+0x30]
   48e21:	45 31 c0             	xor    r8d,r8d
   48e24:	66 0f 76 d2          	pcmpeqd xmm2,xmm2
   48e28:	4c 8b 3d b9 ce 08 00 	mov    r15,QWORD PTR [rip+0x8ceb9]        # d5ce8 <bcmp@GLIBC_2.2.5>
   48e2f:	48 21 f0             	and    rax,rsi
   48e32:	f3 0f 6f 1c 07       	movdqu xmm3,XMMWORD PTR [rdi+rax*1]
   48e37:	66 0f 6f c3          	movdqa xmm0,xmm3
   48e3b:	66 0f 74 c1          	pcmpeqb xmm0,xmm1
   48e3f:	66 0f d7 c8          	pmovmskb ecx,xmm0
   48e43:	85 c9                	test   ecx,ecx
   48e45:	0f 84 95 00 00 00    	je     48ee0 <<strategy_comm2::StrategyComm2 as future_backtest_sdk::plugin::StrategyPlugin>::on_depth+0x140>
   48e4b:	48 89 44 24 10       	mov    QWORD PTR [rsp+0x10],rax
   48e50:	66 0f 7f 4c 24 50    	movdqa XMMWORD PTR [rsp+0x50],xmm1
   48e56:	48 89 74 24 08       	mov    QWORD PTR [rsp+0x8],rsi
   48e5b:	4c 89 04 24          	mov    QWORD PTR [rsp],r8
   48e5f:	66 0f 7f 5c 24 40    	movdqa XMMWORD PTR [rsp+0x40],xmm3
   48e65:	48 89 4c 24 18       	mov    QWORD PTR [rsp+0x18],rcx
   48e6a:	f3 0f bc c9          	tzcnt  ecx,ecx
   48e6e:	48 01 c1             	add    rcx,rax
   48e71:	48 21 f1             	and    rcx,rsi
   48e74:	48 f7 d9             	neg    rcx
   48e77:	4c 8d 24 49          	lea    r12,[rcx+rcx*2]
   48e7b:	49 c1 e4 04          	shl    r12,0x4
   48e7f:	4a 3b 54 25 10       	cmp    rdx,QWORD PTR [rbp+r12*1+0x10]
   48e84:	75 28                	jne    48eae <<strategy_comm2::StrategyComm2 as future_backtest_sdk::plugin::StrategyPlugin>::on_depth+0x10e>
   48e86:	49 8d 04 2c          	lea    rax,[r12+rbp*1]
   48e8a:	48 8b 70 08          	mov    rsi,QWORD PTR [rax+0x8]
   48e8e:	48 89 7c 24 20       	mov    QWORD PTR [rsp+0x20],rdi
   48e93:	4c 89 ef             	mov    rdi,r13
   48e96:	4c 89 f3             	mov    rbx,r14
   48e99:	49 89 d6             	mov    r14,rdx
   48e9c:	41 ff d7             	call   r15
   48e9f:	48 8b 7c 24 20       	mov    rdi,QWORD PTR [rsp+0x20]
   48ea4:	4c 89 f2             	mov    rdx,r14
   48ea7:	49 89 de             	mov    r14,rbx
   48eaa:	85 c0                	test   eax,eax
   48eac:	74 4e                	je     48efc <<strategy_comm2::StrategyComm2 as future_backtest_sdk::plugin::StrategyPlugin>::on_depth+0x15c>
   48eae:	48 8b 4c 24 18       	mov    rcx,QWORD PTR [rsp+0x18]
   48eb3:	8d 41 ff             	lea    eax,[rcx-0x1]
   48eb6:	66 21 c8             	and    ax,cx
   48eb9:	89 c1                	mov    ecx,eax
   48ebb:	48 8b 44 24 10       	mov    rax,QWORD PTR [rsp+0x10]
   48ec0:	66 0f 6f 4c 24 50    	movdqa xmm1,XMMWORD PTR [rsp+0x50]
   48ec6:	48 8b 74 24 08       	mov    rsi,QWORD PTR [rsp+0x8]
   48ecb:	4c 8b 04 24          	mov    r8,QWORD PTR [rsp]
   48ecf:	66 0f 76 d2          	pcmpeqd xmm2,xmm2
   48ed3:	66 0f 6f 5c 24 40    	movdqa xmm3,XMMWORD PTR [rsp+0x40]
   48ed9:	75 8a                	jne    48e65 <<strategy_comm2::StrategyComm2 as future_backtest_sdk::plugin::StrategyPlugin>::on_depth+0xc5>
   48edb:	0f 1f 44 00 00       	nop    DWORD PTR [rax+rax*1+0x0]
   48ee0:	66 0f 74 da          	pcmpeqb xmm3,xmm2
   48ee4:	66 0f d7 cb          	pmovmskb ecx,xmm3
   48ee8:	85 c9                	test   ecx,ecx
   48eea:	75 7b                	jne    48f67 <<strategy_comm2::StrategyComm2 as future_backtest_sdk::plugin::StrategyPlugin>::on_depth+0x1c7>
   48eec:	4c 01 c0             	add    rax,r8
   48eef:	48 83 c0 10          	add    rax,0x10
   48ef3:	49 83 c0 10          	add    r8,0x10
   48ef7:	e9 33 ff ff ff       	jmp    48e2f <<strategy_comm2::StrategyComm2 as future_backtest_sdk::plugin::StrategyPlugin>::on_depth+0x8f>
   48efc:	f2 41 0f 10 86 98 00 	movsd  xmm0,QWORD PTR [r14+0x98]
   48f03:	00 00 
   48f05:	66 42 0f 2e 44 27 e8 	ucomisd xmm0,QWORD PTR [rdi+r12*1-0x18]
   48f0c:	75 13                	jne    48f21 <<strategy_comm2::StrategyComm2 as future_backtest_sdk::plugin::StrategyPlugin>::on_depth+0x181>
   48f0e:	7a 11                	jp     48f21 <<strategy_comm2::StrategyComm2 as future_backtest_sdk::plugin::StrategyPlugin>::on_depth+0x181>
   48f10:	f2 41 0f 10 46 48    	movsd  xmm0,QWORD PTR [r14+0x48]
   48f16:	66 42 0f 2e 44 27 f0 	ucomisd xmm0,QWORD PTR [rdi+r12*1-0x10]
   48f1d:	75 02                	jne    48f21 <<strategy_comm2::StrategyComm2 as future_backtest_sdk::plugin::StrategyPlugin>::on_depth+0x181>
   48f1f:	7b 46                	jnp    48f67 <<strategy_comm2::StrategyComm2 as future_backtest_sdk::plugin::StrategyPlugin>::on_depth+0x1c7>
   48f21:	48 8b 7c 24 28       	mov    rdi,QWORD PTR [rsp+0x28]
   48f26:	48 8b 5c 24 38       	mov    rbx,QWORD PTR [rsp+0x38]
   48f2b:	48 89 de             	mov    rsi,rbx
   48f2e:	e8 dd e8 00 00       	call   57810 <core::hash::BuildHasher::hash_one>
   48f33:	48 8d 7c 24 68       	lea    rdi,[rsp+0x68]
   48f38:	48 8b 74 24 30       	mov    rsi,QWORD PTR [rsp+0x30]
   48f3d:	48 89 c2             	mov    rdx,rax
   48f40:	48 89 d9             	mov    rcx,rbx
   48f43:	e8 88 e7 fe ff       	call   376d0 <hashbrown::raw::RawTable<T,A>::remove_entry>
   48f48:	48 8b 74 24 68       	mov    rsi,QWORD PTR [rsp+0x68]
   48f4d:	48 89 f0             	mov    rax,rsi
   48f50:	48 f7 d8             	neg    rax
   48f53:	70 12                	jo     48f67 <<strategy_comm2::StrategyComm2 as future_backtest_sdk::plugin::StrategyPlugin>::on_depth+0x1c7>
   48f55:	73 10                	jae    48f67 <<strategy_comm2::StrategyComm2 as future_backtest_sdk::plugin::StrategyPlugin>::on_depth+0x1c7>
   48f57:	48 8b 7c 24 70       	mov    rdi,QWORD PTR [rsp+0x70]
   48f5c:	ba 01 00 00 00       	mov    edx,0x1
   48f61:	ff 15 e9 cc 08 00    	call   QWORD PTR [rip+0x8cce9]        # d5c50 <_DYNAMIC+0x218>
   48f67:	48 81 c4 98 00 00 00 	add    rsp,0x98
   48f6e:	5b                   	pop    rbx
   48f6f:	41 5c                	pop    r12
   48f71:	41 5d                	pop    r13
   48f73:	41 5e                	pop    r14
   48f75:	41 5f                	pop    r15
   48f77:	5d                   	pop    rbp
   48f78:	31 c0                	xor    eax,eax
   48f7a:	c3                   	ret    
   48f7b:	cc                   	int3   
   48f7c:	cc                   	int3   
   48f7d:	cc                   	int3   
   48f7e:	cc                   	int3   
   48f7f:	cc                   	int3   