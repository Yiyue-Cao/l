0000000000049620 <<strategy_sm1::StrategySM1 as future_backtest_sdk::plugin::StrategyPlugin>::on_depth>:
   49620:	55                   	push   rbp
   49621:	41 57                	push   r15
   49623:	41 56                	push   r14
   49625:	41 55                	push   r13
   49627:	41 54                	push   r12
   49629:	53                   	push   rbx
   4962a:	48 83 ec 58          	sub    rsp,0x58
   4962e:	48 89 34 24          	mov    QWORD PTR [rsp],rsi
   49632:	48 8b b7 68 01 00 00 	mov    rsi,QWORD PTR [rdi+0x168]
   49639:	48 85 f6             	test   rsi,rsi
   4963c:	0f 84 2d 01 00 00    	je     4976f <<strategy_sm1::StrategySM1 as future_backtest_sdk::plugin::StrategyPlugin>::on_depth+0x14f>
   49642:	48 89 f8             	mov    rax,rdi
   49645:	48 8b 14 24          	mov    rdx,QWORD PTR [rsp]
   49649:	48 8d 4a 20          	lea    rcx,[rdx+0x20]
   4964d:	48 89 4c 24 18       	mov    QWORD PTR [rsp+0x18],rcx
   49652:	48 8b 8f 70 01 00 00 	mov    rcx,QWORD PTR [rdi+0x170]
   49659:	48 89 4c 24 10       	mov    QWORD PTR [rsp+0x10],rcx
   4965e:	48 05 68 01 00 00    	add    rax,0x168
   49664:	48 89 44 24 20       	mov    QWORD PTR [rsp+0x20],rax
   49669:	48 8b 42 28          	mov    rax,QWORD PTR [rdx+0x28]
   4966d:	48 89 44 24 30       	mov    QWORD PTR [rsp+0x30],rax
   49672:	4c 8b 62 30          	mov    r12,QWORD PTR [rdx+0x30]
   49676:	48 8d 46 08          	lea    rax,[rsi+0x8]
   4967a:	48 89 74 24 08       	mov    QWORD PTR [rsp+0x8],rsi
   4967f:	0f b7 8e 1a 02 00 00 	movzx  ecx,WORD PTR [rsi+0x21a]
   49686:	48 89 4c 24 28       	mov    QWORD PTR [rsp+0x28],rcx
   4968b:	8d 0c cd 00 00 00 00 	lea    ecx,[rcx*8+0x0]
   49692:	4c 8d 2c 49          	lea    r13,[rcx+rcx*2]
   49696:	48 c7 c3 ff ff ff ff 	mov    rbx,0xffffffffffffffff
   4969d:	31 ed                	xor    ebp,ebp
   4969f:	90                   	nop
   496a0:	49 39 ed             	cmp    r13,rbp
   496a3:	74 5b                	je     49700 <<strategy_sm1::StrategySM1 as future_backtest_sdk::plugin::StrategyPlugin>::on_depth+0xe0>
   496a5:	4c 8d 78 18          	lea    r15,[rax+0x18]
   496a9:	48 8b 70 08          	mov    rsi,QWORD PTR [rax+0x8]
   496ad:	48 8b 50 10          	mov    rdx,QWORD PTR [rax+0x10]
   496b1:	4d 89 e6             	mov    r14,r12
   496b4:	49 29 d6             	sub    r14,rdx
   496b7:	49 0f 42 d4          	cmovb  rdx,r12
   496bb:	48 8b 7c 24 30       	mov    rdi,QWORD PTR [rsp+0x30]
   496c0:	ff 15 a2 00 09 00    	call   QWORD PTR [rip+0x900a2]        # d9768 <memcmp@GLIBC_2.2.5>
   496c6:	48 98                	cdqe   
   496c8:	85 c0                	test   eax,eax
   496ca:	4c 0f 45 f0          	cmovne r14,rax
   496ce:	4d 85 f6             	test   r14,r14
   496d1:	0f 98 c0             	sets   al
   496d4:	0f 9f c1             	setg   cl
   496d7:	28 c1                	sub    cl,al
   496d9:	48 83 c5 18          	add    rbp,0x18
   496dd:	48 ff c3             	inc    rbx
   496e0:	4c 89 f8             	mov    rax,r15
   496e3:	80 f9 01             	cmp    cl,0x1
   496e6:	74 b8                	je     496a0 <<strategy_sm1::StrategySM1 as future_backtest_sdk::plugin::StrategyPlugin>::on_depth+0x80>
   496e8:	0f b6 c1             	movzx  eax,cl
   496eb:	85 c0                	test   eax,eax
   496ed:	74 38                	je     49727 <<strategy_sm1::StrategySM1 as future_backtest_sdk::plugin::StrategyPlugin>::on_depth+0x107>
   496ef:	eb 14                	jmp    49705 <<strategy_sm1::StrategySM1 as future_backtest_sdk::plugin::StrategyPlugin>::on_depth+0xe5>
   496f1:	66 66 66 66 66 66 2e 	data16 data16 data16 data16 data16 cs nop WORD PTR [rax+rax*1+0x0]
   496f8:	0f 1f 84 00 00 00 00 
   496ff:	00 
   49700:	48 8b 5c 24 28       	mov    rbx,QWORD PTR [rsp+0x28]
   49705:	48 8b 74 24 08       	mov    rsi,QWORD PTR [rsp+0x8]
   4970a:	48 8b 44 24 10       	mov    rax,QWORD PTR [rsp+0x10]
   4970f:	48 83 e8 01          	sub    rax,0x1
   49713:	72 5a                	jb     4976f <<strategy_sm1::StrategySM1 as future_backtest_sdk::plugin::StrategyPlugin>::on_depth+0x14f>
   49715:	48 89 44 24 10       	mov    QWORD PTR [rsp+0x10],rax
   4971a:	48 8b b4 de 20 02 00 	mov    rsi,QWORD PTR [rsi+rbx*8+0x220]
   49721:	00 
   49722:	e9 4f ff ff ff       	jmp    49676 <<strategy_sm1::StrategySM1 as future_backtest_sdk::plugin::StrategyPlugin>::on_depth+0x56>
   49727:	48 8b 04 24          	mov    rax,QWORD PTR [rsp]
   4972b:	f2 0f 10 80 98 00 00 	movsd  xmm0,QWORD PTR [rax+0x98]
   49732:	00 
   49733:	48 8b 4c 24 08       	mov    rcx,QWORD PTR [rsp+0x8]
   49738:	66 0f 2e 84 29 f8 00 	ucomisd xmm0,QWORD PTR [rcx+rbp*1+0xf8]
   4973f:	00 00 
   49741:	75 18                	jne    4975b <<strategy_sm1::StrategySM1 as future_backtest_sdk::plugin::StrategyPlugin>::on_depth+0x13b>
   49743:	7a 16                	jp     4975b <<strategy_sm1::StrategySM1 as future_backtest_sdk::plugin::StrategyPlugin>::on_depth+0x13b>
   49745:	48 8b 04 24          	mov    rax,QWORD PTR [rsp]
   49749:	f2 0f 10 40 48       	movsd  xmm0,QWORD PTR [rax+0x48]
   4974e:	66 0f 2e 84 29 00 01 	ucomisd xmm0,QWORD PTR [rcx+rbp*1+0x100]
   49755:	00 00 
   49757:	75 02                	jne    4975b <<strategy_sm1::StrategySM1 as future_backtest_sdk::plugin::StrategyPlugin>::on_depth+0x13b>
   49759:	7b 14                	jnp    4976f <<strategy_sm1::StrategySM1 as future_backtest_sdk::plugin::StrategyPlugin>::on_depth+0x14f>
   4975b:	48 8d 7c 24 38       	lea    rdi,[rsp+0x38]
   49760:	48 8b 74 24 20       	mov    rsi,QWORD PTR [rsp+0x20]
   49765:	48 8b 54 24 18       	mov    rdx,QWORD PTR [rsp+0x18]
   4976a:	e8 b1 ef 00 00       	call   58720 <alloc::collections::btree::map::BTreeMap<K,V,A>::remove>
   4976f:	31 c0                	xor    eax,eax
   49771:	48 83 c4 58          	add    rsp,0x58
   49775:	5b                   	pop    rbx
   49776:	41 5c                	pop    r12
   49778:	41 5d                	pop    r13
   4977a:	41 5e                	pop    r14
   4977c:	41 5f                	pop    r15
   4977e:	5d                   	pop    rbp
   4977f:	c3                   	ret    