0000000000040260 <<strategy_sm3::StrategySM3 as future_backtest_sdk::plugin::StrategyPlugin>::on_depth>:
   40260:	55                   	push   rbp
   40261:	41 57                	push   r15
   40263:	41 56                	push   r14
   40265:	41 55                	push   r13
   40267:	41 54                	push   r12
   40269:	53                   	push   rbx
   4026a:	48 83 ec 58          	sub    rsp,0x58
   4026e:	48 89 34 24          	mov    QWORD PTR [rsp],rsi
   40272:	48 8b b7 58 01 00 00 	mov    rsi,QWORD PTR [rdi+0x158]
   40279:	48 85 f6             	test   rsi,rsi
   4027c:	0f 84 2d 01 00 00    	je     403af <<strategy_sm3::StrategySM3 as future_backtest_sdk::plugin::StrategyPlugin>::on_depth+0x14f>
   40282:	48 89 f8             	mov    rax,rdi
   40285:	48 8b 14 24          	mov    rdx,QWORD PTR [rsp]
   40289:	48 8d 4a 20          	lea    rcx,[rdx+0x20]
   4028d:	48 89 4c 24 18       	mov    QWORD PTR [rsp+0x18],rcx
   40292:	48 8b 8f 60 01 00 00 	mov    rcx,QWORD PTR [rdi+0x160]
   40299:	48 89 4c 24 10       	mov    QWORD PTR [rsp+0x10],rcx
   4029e:	48 05 58 01 00 00    	add    rax,0x158
   402a4:	48 89 44 24 20       	mov    QWORD PTR [rsp+0x20],rax
   402a9:	48 8b 42 28          	mov    rax,QWORD PTR [rdx+0x28]
   402ad:	48 89 44 24 30       	mov    QWORD PTR [rsp+0x30],rax
   402b2:	4c 8b 62 30          	mov    r12,QWORD PTR [rdx+0x30]
   402b6:	48 8d 46 08          	lea    rax,[rsi+0x8]
   402ba:	48 89 74 24 08       	mov    QWORD PTR [rsp+0x8],rsi
   402bf:	0f b7 8e 1a 02 00 00 	movzx  ecx,WORD PTR [rsi+0x21a]
   402c6:	48 89 4c 24 28       	mov    QWORD PTR [rsp+0x28],rcx
   402cb:	8d 0c cd 00 00 00 00 	lea    ecx,[rcx*8+0x0]
   402d2:	4c 8d 2c 49          	lea    r13,[rcx+rcx*2]
   402d6:	48 c7 c3 ff ff ff ff 	mov    rbx,0xffffffffffffffff
   402dd:	31 ed                	xor    ebp,ebp
   402df:	90                   	nop
   402e0:	49 39 ed             	cmp    r13,rbp
   402e3:	74 5b                	je     40340 <<strategy_sm3::StrategySM3 as future_backtest_sdk::plugin::StrategyPlugin>::on_depth+0xe0>
   402e5:	4c 8d 78 18          	lea    r15,[rax+0x18]
   402e9:	48 8b 70 08          	mov    rsi,QWORD PTR [rax+0x8]
   402ed:	48 8b 50 10          	mov    rdx,QWORD PTR [rax+0x10]
   402f1:	4d 89 e6             	mov    r14,r12
   402f4:	49 29 d6             	sub    r14,rdx
   402f7:	49 0f 42 d4          	cmovb  rdx,r12
   402fb:	48 8b 7c 24 30       	mov    rdi,QWORD PTR [rsp+0x30]
   40300:	ff 15 22 be 09 00    	call   QWORD PTR [rip+0x9be22]        # dc128 <memcmp@GLIBC_2.2.5>
   40306:	48 98                	cdqe   
   40308:	85 c0                	test   eax,eax
   4030a:	4c 0f 45 f0          	cmovne r14,rax
   4030e:	4d 85 f6             	test   r14,r14
   40311:	0f 98 c0             	sets   al
   40314:	0f 9f c1             	setg   cl
   40317:	28 c1                	sub    cl,al
   40319:	48 83 c5 18          	add    rbp,0x18
   4031d:	48 ff c3             	inc    rbx
   40320:	4c 89 f8             	mov    rax,r15
   40323:	80 f9 01             	cmp    cl,0x1
   40326:	74 b8                	je     402e0 <<strategy_sm3::StrategySM3 as future_backtest_sdk::plugin::StrategyPlugin>::on_depth+0x80>
   40328:	0f b6 c1             	movzx  eax,cl
   4032b:	85 c0                	test   eax,eax
   4032d:	74 38                	je     40367 <<strategy_sm3::StrategySM3 as future_backtest_sdk::plugin::StrategyPlugin>::on_depth+0x107>
   4032f:	eb 14                	jmp    40345 <<strategy_sm3::StrategySM3 as future_backtest_sdk::plugin::StrategyPlugin>::on_depth+0xe5>
   40331:	66 66 66 66 66 66 2e 	data16 data16 data16 data16 data16 cs nop WORD PTR [rax+rax*1+0x0]
   40338:	0f 1f 84 00 00 00 00 
   4033f:	00 
   40340:	48 8b 5c 24 28       	mov    rbx,QWORD PTR [rsp+0x28]
   40345:	48 8b 74 24 08       	mov    rsi,QWORD PTR [rsp+0x8]
   4034a:	48 8b 44 24 10       	mov    rax,QWORD PTR [rsp+0x10]
   4034f:	48 83 e8 01          	sub    rax,0x1
   40353:	72 5a                	jb     403af <<strategy_sm3::StrategySM3 as future_backtest_sdk::plugin::StrategyPlugin>::on_depth+0x14f>
   40355:	48 89 44 24 10       	mov    QWORD PTR [rsp+0x10],rax
   4035a:	48 8b b4 de 20 02 00 	mov    rsi,QWORD PTR [rsi+rbx*8+0x220]
   40361:	00 
   40362:	e9 4f ff ff ff       	jmp    402b6 <<strategy_sm3::StrategySM3 as future_backtest_sdk::plugin::StrategyPlugin>::on_depth+0x56>
   40367:	48 8b 04 24          	mov    rax,QWORD PTR [rsp]
   4036b:	f2 0f 10 80 98 00 00 	movsd  xmm0,QWORD PTR [rax+0x98]
   40372:	00 
   40373:	48 8b 4c 24 08       	mov    rcx,QWORD PTR [rsp+0x8]
   40378:	66 0f 2e 84 29 f8 00 	ucomisd xmm0,QWORD PTR [rcx+rbp*1+0xf8]
   4037f:	00 00 
   40381:	75 18                	jne    4039b <<strategy_sm3::StrategySM3 as future_backtest_sdk::plugin::StrategyPlugin>::on_depth+0x13b>
   40383:	7a 16                	jp     4039b <<strategy_sm3::StrategySM3 as future_backtest_sdk::plugin::StrategyPlugin>::on_depth+0x13b>
   40385:	48 8b 04 24          	mov    rax,QWORD PTR [rsp]
   40389:	f2 0f 10 40 48       	movsd  xmm0,QWORD PTR [rax+0x48]
   4038e:	66 0f 2e 84 29 00 01 	ucomisd xmm0,QWORD PTR [rcx+rbp*1+0x100]
   40395:	00 00 
   40397:	75 02                	jne    4039b <<strategy_sm3::StrategySM3 as future_backtest_sdk::plugin::StrategyPlugin>::on_depth+0x13b>
   40399:	7b 14                	jnp    403af <<strategy_sm3::StrategySM3 as future_backtest_sdk::plugin::StrategyPlugin>::on_depth+0x14f>
   4039b:	48 8d 7c 24 38       	lea    rdi,[rsp+0x38]
   403a0:	48 8b 74 24 20       	mov    rsi,QWORD PTR [rsp+0x20]
   403a5:	48 8b 54 24 18       	mov    rdx,QWORD PTR [rsp+0x18]
   403aa:	e8 61 2f 01 00       	call   53310 <alloc::collections::btree::map::BTreeMap<K,V,A>::remove>
   403af:	31 c0                	xor    eax,eax
   403b1:	48 83 c4 58          	add    rsp,0x58
   403b5:	5b                   	pop    rbx
   403b6:	41 5c                	pop    r12
   403b8:	41 5d                	pop    r13
   403ba:	41 5e                	pop    r14
   403bc:	41 5f                	pop    r15
   403be:	5d                   	pop    rbp
   403bf:	c3                   	ret    