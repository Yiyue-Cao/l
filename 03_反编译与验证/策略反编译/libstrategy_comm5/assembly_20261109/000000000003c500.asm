000000000003c500 <strategy_comm5::taker_fillable_cum>:
   3c500:	66 0f 28 c8          	movapd %xmm0,%xmm1
   3c504:	85 f6                	test   %esi,%esi
   3c506:	b9 48 00 00 00       	mov    $0x48,%ecx
   3c50b:	b8 98 00 00 00       	mov    $0x98,%eax
   3c510:	48 0f 45 c1          	cmovne %rcx,%rax
   3c514:	66 0f 57 c0          	xorpd  %xmm0,%xmm0
   3c518:	66 0f 2e 04 07       	ucomisd (%rdi,%rax,1),%xmm0
   3c51d:	0f 83 d6 00 00 00    	jae    3c5f9 <strategy_comm5::taker_fillable_cum+0xf9>
   3c523:	66 0f 57 db          	xorpd  %xmm3,%xmm3
   3c527:	f2 0f 10 44 07 08    	movsd  0x8(%rdi,%rax,1),%xmm0
   3c52d:	f2 0f 58 c3          	addsd  %xmm3,%xmm0
   3c531:	f2 0f 10 54 07 10    	movsd  0x10(%rdi,%rax,1),%xmm2
   3c537:	66 0f 2e da          	ucomisd %xmm2,%xmm3
   3c53b:	0f 83 b8 00 00 00    	jae    3c5f9 <strategy_comm5::taker_fillable_cum+0xf9>
   3c541:	31 c9                	xor    %ecx,%ecx
   3c543:	66 0f 2e ca          	ucomisd %xmm2,%xmm1
   3c547:	0f 93 c1             	setae  %cl
   3c54a:	31 d2                	xor    %edx,%edx
   3c54c:	66 0f 2e d1          	ucomisd %xmm1,%xmm2
   3c550:	0f 93 c2             	setae  %dl
   3c553:	40 84 f6             	test   %sil,%sil
   3c556:	0f 45 d1             	cmovne %ecx,%edx
   3c559:	80 fa 01             	cmp    $0x1,%dl
   3c55c:	0f 85 97 00 00 00    	jne    3c5f9 <strategy_comm5::taker_fillable_cum+0xf9>
   3c562:	f2 0f 58 44 07 18    	addsd  0x18(%rdi,%rax,1),%xmm0
   3c568:	f2 0f 10 54 07 20    	movsd  0x20(%rdi,%rax,1),%xmm2
   3c56e:	66 0f 2e da          	ucomisd %xmm2,%xmm3
   3c572:	0f 83 81 00 00 00    	jae    3c5f9 <strategy_comm5::taker_fillable_cum+0xf9>
   3c578:	31 c9                	xor    %ecx,%ecx
   3c57a:	66 0f 2e ca          	ucomisd %xmm2,%xmm1
   3c57e:	0f 93 c1             	setae  %cl
   3c581:	31 d2                	xor    %edx,%edx
   3c583:	66 0f 2e d1          	ucomisd %xmm1,%xmm2
   3c587:	0f 93 c2             	setae  %dl
   3c58a:	40 84 f6             	test   %sil,%sil
   3c58d:	0f 45 d1             	cmovne %ecx,%edx
   3c590:	80 fa 01             	cmp    $0x1,%dl
   3c593:	75 64                	jne    3c5f9 <strategy_comm5::taker_fillable_cum+0xf9>
   3c595:	f2 0f 58 44 07 28    	addsd  0x28(%rdi,%rax,1),%xmm0
   3c59b:	f2 0f 10 54 07 30    	movsd  0x30(%rdi,%rax,1),%xmm2
   3c5a1:	66 0f 2e da          	ucomisd %xmm2,%xmm3
   3c5a5:	73 52                	jae    3c5f9 <strategy_comm5::taker_fillable_cum+0xf9>
   3c5a7:	31 c9                	xor    %ecx,%ecx
   3c5a9:	66 0f 2e ca          	ucomisd %xmm2,%xmm1
   3c5ad:	0f 93 c1             	setae  %cl
   3c5b0:	31 d2                	xor    %edx,%edx
   3c5b2:	66 0f 2e d1          	ucomisd %xmm1,%xmm2
   3c5b6:	0f 93 c2             	setae  %dl
   3c5b9:	40 84 f6             	test   %sil,%sil
   3c5bc:	0f 45 d1             	cmovne %ecx,%edx
   3c5bf:	80 fa 01             	cmp    $0x1,%dl
   3c5c2:	75 35                	jne    3c5f9 <strategy_comm5::taker_fillable_cum+0xf9>
   3c5c4:	f2 0f 58 44 07 38    	addsd  0x38(%rdi,%rax,1),%xmm0
   3c5ca:	f2 0f 10 54 07 40    	movsd  0x40(%rdi,%rax,1),%xmm2
   3c5d0:	66 0f 2e da          	ucomisd %xmm2,%xmm3
   3c5d4:	73 23                	jae    3c5f9 <strategy_comm5::taker_fillable_cum+0xf9>
   3c5d6:	31 c9                	xor    %ecx,%ecx
   3c5d8:	66 0f 2e ca          	ucomisd %xmm2,%xmm1
   3c5dc:	0f 93 c1             	setae  %cl
   3c5df:	31 d2                	xor    %edx,%edx
   3c5e1:	66 0f 2e d1          	ucomisd %xmm1,%xmm2
   3c5e5:	0f 93 c2             	setae  %dl
   3c5e8:	40 84 f6             	test   %sil,%sil
   3c5eb:	0f 45 d1             	cmovne %ecx,%edx
   3c5ee:	80 fa 01             	cmp    $0x1,%dl
   3c5f1:	75 06                	jne    3c5f9 <strategy_comm5::taker_fillable_cum+0xf9>
   3c5f3:	f2 0f 58 44 07 48    	addsd  0x48(%rdi,%rax,1),%xmm0
   3c5f9:	c3                   	ret    
   3c5fa:	cc                   	int3   
   3c5fb:	cc                   	int3   
   3c5fc:	cc                   	int3   
   3c5fd:	cc                   	int3   
   3c5fe:	cc                   	int3   
   3c5ff:	cc                   	int3   
