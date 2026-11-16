000000000003d140 <<strategy_comm3::StrategyComm3 as future_backtest_sdk::plugin::StrategyPlugin>::on_depth>:
   3d140:	48 83 bf e0 01 00 00 	cmp    QWORD PTR [rdi+0x1e0],0x0
   3d147:	00 
   3d148:	0f 84 ca 01 00 00    	je     3d318 <<strategy_comm3::StrategyComm3 as future_backtest_sdk::plugin::StrategyPlugin>::on_depth+0x1d8>
   3d14e:	55                   	push   rbp
   3d14f:	41 57                	push   r15
   3d151:	41 56                	push   r14
   3d153:	41 55                	push   r13
   3d155:	41 54                	push   r12
   3d157:	53                   	push   rbx
   3d158:	48 81 ec 98 00 00 00 	sub    rsp,0x98
   3d15f:	49 89 f6             	mov    r14,rsi
   3d162:	48 83 c6 20          	add    rsi,0x20
   3d166:	48 8d 87 c8 01 00 00 	lea    rax,[rdi+0x1c8]
   3d16d:	48 89 44 24 30       	mov    QWORD PTR [rsp+0x30],rax
   3d172:	48 8d 87 e8 01 00 00 	lea    rax,[rdi+0x1e8]
   3d179:	48 89 fb             	mov    rbx,rdi
   3d17c:	48 89 44 24 28       	mov    QWORD PTR [rsp+0x28],rax
   3d181:	48 89 c7             	mov    rdi,rax
   3d184:	48 89 74 24 38       	mov    QWORD PTR [rsp+0x38],rsi
   3d189:	e8 82 8f 01 00       	call   56110 <core::hash::BuildHasher::hash_one>
   3d18e:	48 89 c1             	mov    rcx,rax
   3d191:	48 c1 e9 39          	shr    rcx,0x39
   3d195:	48 8b bb c8 01 00 00 	mov    rdi,QWORD PTR [rbx+0x1c8]
   3d19c:	48 8b b3 d0 01 00 00 	mov    rsi,QWORD PTR [rbx+0x1d0]
   3d1a3:	66 0f 6e c1          	movd   xmm0,ecx
   3d1a7:	66 0f 60 c0          	punpcklbw xmm0,xmm0
   3d1ab:	f2 0f 70 c0 00       	pshuflw xmm0,xmm0,0x0
   3d1b0:	66 0f 70 c8 00       	pshufd xmm1,xmm0,0x0
   3d1b5:	48 8d 6f d0          	lea    rbp,[rdi-0x30]
   3d1b9:	4d 8b 6e 28          	mov    r13,QWORD PTR [r14+0x28]
   3d1bd:	49 8b 56 30          	mov    rdx,QWORD PTR [r14+0x30]
   3d1c1:	45 31 c0             	xor    r8d,r8d
   3d1c4:	66 0f 76 d2          	pcmpeqd xmm2,xmm2
   3d1c8:	4c 8b 3d d9 fd 09 00 	mov    r15,QWORD PTR [rip+0x9fdd9]        # dcfa8 <bcmp@GLIBC_2.2.5>
   3d1cf:	48 21 f0             	and    rax,rsi
   3d1d2:	f3 0f 6f 1c 07       	movdqu xmm3,XMMWORD PTR [rdi+rax*1]
   3d1d7:	66 0f 6f c3          	movdqa xmm0,xmm3
   3d1db:	66 0f 74 c1          	pcmpeqb xmm0,xmm1
   3d1df:	66 0f d7 c8          	pmovmskb ecx,xmm0
   3d1e3:	85 c9                	test   ecx,ecx
   3d1e5:	0f 84 95 00 00 00    	je     3d280 <<strategy_comm3::StrategyComm3 as future_backtest_sdk::plugin::StrategyPlugin>::on_depth+0x140>
   3d1eb:	48 89 44 24 10       	mov    QWORD PTR [rsp+0x10],rax
   3d1f0:	66 0f 7f 4c 24 50    	movdqa XMMWORD PTR [rsp+0x50],xmm1
   3d1f6:	48 89 74 24 08       	mov    QWORD PTR [rsp+0x8],rsi
   3d1fb:	4c 89 04 24          	mov    QWORD PTR [rsp],r8
   3d1ff:	66 0f 7f 5c 24 40    	movdqa XMMWORD PTR [rsp+0x40],xmm3
   3d205:	48 89 4c 24 18       	mov    QWORD PTR [rsp+0x18],rcx
   3d20a:	f3 0f bc c9          	tzcnt  ecx,ecx
   3d20e:	48 01 c1             	add    rcx,rax
   3d211:	48 21 f1             	and    rcx,rsi
   3d214:	48 f7 d9             	neg    rcx
   3d217:	4c 8d 24 49          	lea    r12,[rcx+rcx*2]
   3d21b:	49 c1 e4 04          	shl    r12,0x4
   3d21f:	4a 3b 54 25 10       	cmp    rdx,QWORD PTR [rbp+r12*1+0x10]
   3d224:	75 28                	jne    3d24e <<strategy_comm3::StrategyComm3 as future_backtest_sdk::plugin::StrategyPlugin>::on_depth+0x10e>
   3d226:	49 8d 04 2c          	lea    rax,[r12+rbp*1]
   3d22a:	48 8b 70 08          	mov    rsi,QWORD PTR [rax+0x8]
   3d22e:	48 89 7c 24 20       	mov    QWORD PTR [rsp+0x20],rdi
   3d233:	4c 89 ef             	mov    rdi,r13
   3d236:	4c 89 f3             	mov    rbx,r14
   3d239:	49 89 d6             	mov    r14,rdx
   3d23c:	41 ff d7             	call   r15
   3d23f:	48 8b 7c 24 20       	mov    rdi,QWORD PTR [rsp+0x20]
   3d244:	4c 89 f2             	mov    rdx,r14
   3d247:	49 89 de             	mov    r14,rbx
   3d24a:	85 c0                	test   eax,eax
   3d24c:	74 4e                	je     3d29c <<strategy_comm3::StrategyComm3 as future_backtest_sdk::plugin::StrategyPlugin>::on_depth+0x15c>
   3d24e:	48 8b 4c 24 18       	mov    rcx,QWORD PTR [rsp+0x18]
   3d253:	8d 41 ff             	lea    eax,[rcx-0x1]
   3d256:	66 21 c8             	and    ax,cx
   3d259:	89 c1                	mov    ecx,eax
   3d25b:	48 8b 44 24 10       	mov    rax,QWORD PTR [rsp+0x10]
   3d260:	66 0f 6f 4c 24 50    	movdqa xmm1,XMMWORD PTR [rsp+0x50]
   3d266:	48 8b 74 24 08       	mov    rsi,QWORD PTR [rsp+0x8]
   3d26b:	4c 8b 04 24          	mov    r8,QWORD PTR [rsp]
   3d26f:	66 0f 76 d2          	pcmpeqd xmm2,xmm2
   3d273:	66 0f 6f 5c 24 40    	movdqa xmm3,XMMWORD PTR [rsp+0x40]
   3d279:	75 8a                	jne    3d205 <<strategy_comm3::StrategyComm3 as future_backtest_sdk::plugin::StrategyPlugin>::on_depth+0xc5>
   3d27b:	0f 1f 44 00 00       	nop    DWORD PTR [rax+rax*1+0x0]
   3d280:	66 0f 74 da          	pcmpeqb xmm3,xmm2
   3d284:	66 0f d7 cb          	pmovmskb ecx,xmm3
   3d288:	85 c9                	test   ecx,ecx
   3d28a:	75 7b                	jne    3d307 <<strategy_comm3::StrategyComm3 as future_backtest_sdk::plugin::StrategyPlugin>::on_depth+0x1c7>
   3d28c:	4c 01 c0             	add    rax,r8
   3d28f:	48 83 c0 10          	add    rax,0x10
   3d293:	49 83 c0 10          	add    r8,0x10
   3d297:	e9 33 ff ff ff       	jmp    3d1cf <<strategy_comm3::StrategyComm3 as future_backtest_sdk::plugin::StrategyPlugin>::on_depth+0x8f>
   3d29c:	f2 41 0f 10 86 98 00 	movsd  xmm0,QWORD PTR [r14+0x98]
   3d2a3:	00 00 
   3d2a5:	66 42 0f 2e 44 27 e8 	ucomisd xmm0,QWORD PTR [rdi+r12*1-0x18]
   3d2ac:	75 13                	jne    3d2c1 <<strategy_comm3::StrategyComm3 as future_backtest_sdk::plugin::StrategyPlugin>::on_depth+0x181>
   3d2ae:	7a 11                	jp     3d2c1 <<strategy_comm3::StrategyComm3 as future_backtest_sdk::plugin::StrategyPlugin>::on_depth+0x181>
   3d2b0:	f2 41 0f 10 46 48    	movsd  xmm0,QWORD PTR [r14+0x48]
   3d2b6:	66 42 0f 2e 44 27 f0 	ucomisd xmm0,QWORD PTR [rdi+r12*1-0x10]
   3d2bd:	75 02                	jne    3d2c1 <<strategy_comm3::StrategyComm3 as future_backtest_sdk::plugin::StrategyPlugin>::on_depth+0x181>
   3d2bf:	7b 46                	jnp    3d307 <<strategy_comm3::StrategyComm3 as future_backtest_sdk::plugin::StrategyPlugin>::on_depth+0x1c7>
   3d2c1:	48 8b 7c 24 28       	mov    rdi,QWORD PTR [rsp+0x28]
   3d2c6:	48 8b 5c 24 38       	mov    rbx,QWORD PTR [rsp+0x38]
   3d2cb:	48 89 de             	mov    rsi,rbx
   3d2ce:	e8 3d 8e 01 00       	call   56110 <core::hash::BuildHasher::hash_one>
   3d2d3:	48 8d 7c 24 68       	lea    rdi,[rsp+0x68]
   3d2d8:	48 8b 74 24 30       	mov    rsi,QWORD PTR [rsp+0x30]
   3d2dd:	48 89 c2             	mov    rdx,rax
   3d2e0:	48 89 d9             	mov    rcx,rbx
   3d2e3:	e8 68 ea 00 00       	call   4bd50 <hashbrown::raw::RawTable<T,A>::remove_entry>
   3d2e8:	48 8b 74 24 68       	mov    rsi,QWORD PTR [rsp+0x68]
   3d2ed:	48 89 f0             	mov    rax,rsi
   3d2f0:	48 f7 d8             	neg    rax
   3d2f3:	70 12                	jo     3d307 <<strategy_comm3::StrategyComm3 as future_backtest_sdk::plugin::StrategyPlugin>::on_depth+0x1c7>
   3d2f5:	73 10                	jae    3d307 <<strategy_comm3::StrategyComm3 as future_backtest_sdk::plugin::StrategyPlugin>::on_depth+0x1c7>
   3d2f7:	48 8b 7c 24 70       	mov    rdi,QWORD PTR [rsp+0x70]
   3d2fc:	ba 01 00 00 00       	mov    edx,0x1
   3d301:	ff 15 e9 fb 09 00    	call   QWORD PTR [rip+0x9fbe9]        # dcef0 <_DYNAMIC+0x218>
   3d307:	48 81 c4 98 00 00 00 	add    rsp,0x98
   3d30e:	5b                   	pop    rbx
   3d30f:	41 5c                	pop    r12
   3d311:	41 5d                	pop    r13
   3d313:	41 5e                	pop    r14
   3d315:	41 5f                	pop    r15
   3d317:	5d                   	pop    rbp
   3d318:	31 c0                	xor    eax,eax
   3d31a:	c3                   	ret    
   3d31b:	cc                   	int3   
   3d31c:	cc                   	int3   
   3d31d:	cc                   	int3   
   3d31e:	cc                   	int3   
   3d31f:	cc                   	int3   