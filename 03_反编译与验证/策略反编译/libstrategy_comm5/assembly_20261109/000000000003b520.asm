000000000003b520 <strategy_comm5::next_phase>:
   3b520:	f2 0f 10 96 f8 04 00 	movsd  0x4f8(%rsi),%xmm2
   3b527:	00 
   3b528:	80 be 64 05 00 00 00 	cmpb   $0x0,0x564(%rsi)
   3b52f:	74 30                	je     3b561 <strategy_comm5::next_phase+0x41>
   3b531:	40 84 ff             	test   %dil,%dil
   3b534:	74 4c                	je     3b582 <strategy_comm5::next_phase+0x62>
   3b536:	40 0f b6 c7          	movzbl %dil,%eax
   3b53a:	83 f8 01             	cmp    $0x1,%eax
   3b53d:	75 7d                	jne    3b5bc <strategy_comm5::next_phase+0x9c>
   3b53f:	66 0f 2e ca          	ucomisd %xmm2,%xmm1
   3b543:	72 10                	jb     3b555 <strategy_comm5::next_phase+0x35>
   3b545:	f2 0f 10 8e f0 04 00 	movsd  0x4f0(%rsi),%xmm1
   3b54c:	00 
   3b54d:	b0 02                	mov    $0x2,%al
   3b54f:	66 0f 2e c8          	ucomisd %xmm0,%xmm1
   3b553:	73 2c                	jae    3b581 <strategy_comm5::next_phase+0x61>
   3b555:	66 0f 2e 86 d8 04 00 	ucomisd 0x4d8(%rsi),%xmm0
   3b55c:	00 
   3b55d:	0f 96 c0             	setbe  %al
   3b560:	c3                   	ret    
   3b561:	40 84 ff             	test   %dil,%dil
   3b564:	74 39                	je     3b59f <strategy_comm5::next_phase+0x7f>
   3b566:	40 0f b6 c7          	movzbl %dil,%eax
   3b56a:	83 f8 01             	cmp    $0x1,%eax
   3b56d:	75 5d                	jne    3b5cc <strategy_comm5::next_phase+0xac>
   3b56f:	66 0f 2e ca          	ucomisd %xmm2,%xmm1
   3b573:	72 6b                	jb     3b5e0 <strategy_comm5::next_phase+0xc0>
   3b575:	b0 02                	mov    $0x2,%al
   3b577:	66 0f 2e 86 e8 04 00 	ucomisd 0x4e8(%rsi),%xmm0
   3b57e:	00 
   3b57f:	72 5f                	jb     3b5e0 <strategy_comm5::next_phase+0xc0>
   3b581:	c3                   	ret    
   3b582:	f2 0f 10 9e e0 04 00 	movsd  0x4e0(%rsi),%xmm3
   3b589:	00 
   3b58a:	66 0f c2 c3 02       	cmplepd %xmm3,%xmm0
   3b58f:	66 0f c2 d1 02       	cmplepd %xmm1,%xmm2
   3b594:	66 0f 54 d0          	andpd  %xmm0,%xmm2
   3b598:	66 0f 7e d0          	movd   %xmm2,%eax
   3b59c:	24 01                	and    $0x1,%al
   3b59e:	c3                   	ret    
   3b59f:	f2 0f 10 9e d8 04 00 	movsd  0x4d8(%rsi),%xmm3
   3b5a6:	00 
   3b5a7:	66 0f c2 d8 02       	cmplepd %xmm0,%xmm3
   3b5ac:	66 0f c2 d1 02       	cmplepd %xmm1,%xmm2
   3b5b1:	66 0f 54 d3          	andpd  %xmm3,%xmm2
   3b5b5:	66 0f 7e d0          	movd   %xmm2,%eax
   3b5b9:	24 01                	and    $0x1,%al
   3b5bb:	c3                   	ret    
   3b5bc:	66 0f 2e 86 e8 04 00 	ucomisd 0x4e8(%rsi),%xmm0
   3b5c3:	00 
   3b5c4:	0f 97 c1             	seta   %cl
   3b5c7:	b0 02                	mov    $0x2,%al
   3b5c9:	28 c8                	sub    %cl,%al
   3b5cb:	c3                   	ret    
   3b5cc:	f2 0f 10 8e f0 04 00 	movsd  0x4f0(%rsi),%xmm1
   3b5d3:	00 
   3b5d4:	66 0f 2e c8          	ucomisd %xmm0,%xmm1
   3b5d8:	0f 97 c1             	seta   %cl
   3b5db:	b0 02                	mov    $0x2,%al
   3b5dd:	28 c8                	sub    %cl,%al
   3b5df:	c3                   	ret    
   3b5e0:	f2 0f 10 8e e0 04 00 	movsd  0x4e0(%rsi),%xmm1
   3b5e7:	00 
   3b5e8:	66 0f 2e c8          	ucomisd %xmm0,%xmm1
   3b5ec:	0f 96 c0             	setbe  %al
   3b5ef:	c3                   	ret    
