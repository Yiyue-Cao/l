000000000003c3c0 <strategy_comm5::high_taker_rate>:
   3c3c0:	48 83 ec 58          	sub    $0x58,%rsp
   3c3c4:	66 44 0f 28 c3       	movapd %xmm3,%xmm8
   3c3c9:	f2 44 0f 58 c4       	addsd  %xmm4,%xmm8
   3c3ce:	66 45 0f 57 c9       	xorpd  %xmm9,%xmm9
   3c3d3:	66 45 0f 2e c8       	ucomisd %xmm8,%xmm9
   3c3d8:	73 19                	jae    3c3f3 <strategy_comm5::high_taker_rate+0x33>
   3c3da:	66 45 0f 57 d2       	xorpd  %xmm10,%xmm10
   3c3df:	66 41 0f 2e fa       	ucomisd %xmm10,%xmm7
   3c3e4:	76 17                	jbe    3c3fd <strategy_comm5::high_taker_rate+0x3d>
   3c3e6:	66 0f 2e d7          	ucomisd %xmm7,%xmm2
   3c3ea:	76 11                	jbe    3c3fd <strategy_comm5::high_taker_rate+0x3d>
   3c3ec:	f2 44 0f 10 4c 24 60 	movsd  0x60(%rsp),%xmm9
   3c3f3:	66 41 0f 28 c1       	movapd %xmm9,%xmm0
   3c3f8:	48 83 c4 58          	add    $0x58,%rsp
   3c3fc:	c3                   	ret    
   3c3fd:	f2 0f 5c dc          	subsd  %xmm4,%xmm3
   3c401:	f2 41 0f 5e d8       	divsd  %xmm8,%xmm3
   3c406:	66 44 0f 28 cb       	movapd %xmm3,%xmm9
   3c40b:	f2 45 0f 5f ca       	maxsd  %xmm10,%xmm9
   3c410:	66 44 0f 2e d2       	ucomisd %xmm2,%xmm10
   3c415:	73 dc                	jae    3c3f3 <strategy_comm5::high_taker_rate+0x33>
   3c417:	f2 0f 10 1d 49 9f fd 	movsd  -0x260b7(%rip),%xmm3        # 16368 <GCC_except_table128+0xe4>
   3c41e:	ff 
   3c41f:	66 0f 2e dd          	ucomisd %xmm5,%xmm3
   3c423:	73 ce                	jae    3c3f3 <strategy_comm5::high_taker_rate+0x33>
   3c425:	66 0f 54 0d 93 a0 fd 	andpd  -0x25f6d(%rip),%xmm1        # 164c0 <GCC_except_table128+0x23c>
   3c42c:	ff 
   3c42d:	f2 0f 10 1d ab 9f fd 	movsd  -0x26055(%rip),%xmm3        # 163e0 <GCC_except_table128+0x15c>
   3c434:	ff 
   3c435:	66 0f 2e d9          	ucomisd %xmm1,%xmm3
   3c439:	77 b8                	ja     3c3f3 <strategy_comm5::high_taker_rate+0x33>
   3c43b:	66 0f 54 05 7d a0 fd 	andpd  -0x25f83(%rip),%xmm0        # 164c0 <GCC_except_table128+0x23c>
   3c442:	ff 
   3c443:	66 0f 29 44 24 40    	movapd %xmm0,0x40(%rsp)
   3c449:	f2 0f 5e c1          	divsd  %xmm1,%xmm0
   3c44d:	f2 0f 58 05 83 9e fd 	addsd  -0x2617d(%rip),%xmm0        # 162d8 <GCC_except_table128+0x54>
   3c454:	ff 
   3c455:	66 0f 57 db          	xorpd  %xmm3,%xmm3
   3c459:	f2 0f 5f c3          	maxsd  %xmm3,%xmm0
   3c45d:	f2 0f 59 05 5b 9f fd 	mulsd  -0x260a5(%rip),%xmm0        # 163c0 <GCC_except_table128+0x13c>
   3c464:	ff 
   3c465:	66 0f 29 6c 24 20    	movapd %xmm5,0x20(%rsp)
   3c46b:	f2 44 0f 11 4c 24 18 	movsd  %xmm9,0x18(%rsp)
   3c472:	f2 0f 11 74 24 08    	movsd  %xmm6,0x8(%rsp)
   3c478:	f2 0f 11 54 24 10    	movsd  %xmm2,0x10(%rsp)
   3c47e:	66 0f 29 4c 24 30    	movapd %xmm1,0x30(%rsp)
   3c484:	ff 15 d6 78 0c 00    	call   *0xc78d6(%rip)        # 103d60 <tanh@GLIBC_2.2.5>
   3c48a:	f2 44 0f 10 4c 24 18 	movsd  0x18(%rsp),%xmm9
   3c491:	66 0f 28 54 24 20    	movapd 0x20(%rsp),%xmm2
   3c497:	f2 0f 58 15 39 9e fd 	addsd  -0x261c7(%rip),%xmm2        # 162d8 <GCC_except_table128+0x54>
   3c49e:	ff 
   3c49f:	f2 0f 59 d0          	mulsd  %xmm0,%xmm2
   3c4a3:	f2 0f 58 15 bd 9e fd 	addsd  -0x26143(%rip),%xmm2        # 16368 <GCC_except_table128+0xe4>
   3c4aa:	ff 
   3c4ab:	66 0f 28 4c 24 40    	movapd 0x40(%rsp),%xmm1
   3c4b1:	f2 0f 5c 4c 24 30    	subsd  0x30(%rsp),%xmm1
   3c4b7:	f2 0f 59 4c 24 08    	mulsd  0x8(%rsp),%xmm1
   3c4bd:	f2 0f 5e 4c 24 10    	divsd  0x10(%rsp),%xmm1
   3c4c3:	66 0f 28 c1          	movapd %xmm1,%xmm0
   3c4c7:	66 0f 28 d9          	movapd %xmm1,%xmm3
   3c4cb:	f2 0f 5d c2          	minsd  %xmm2,%xmm0
   3c4cf:	f2 0f c2 d2 03       	cmpunordsd %xmm2,%xmm2
   3c4d4:	66 0f 28 ca          	movapd %xmm2,%xmm1
   3c4d8:	66 0f 55 c8          	andnpd %xmm0,%xmm1
   3c4dc:	66 0f 54 d3          	andpd  %xmm3,%xmm2
   3c4e0:	66 0f 56 d1          	orpd   %xmm1,%xmm2
   3c4e4:	f2 0f 5f 15 9c 9e fd 	maxsd  -0x26164(%rip),%xmm2        # 16388 <GCC_except_table128+0x104>
   3c4eb:	ff 
   3c4ec:	f2 44 0f 59 ca       	mulsd  %xmm2,%xmm9
   3c4f1:	66 41 0f 28 c1       	movapd %xmm9,%xmm0
   3c4f6:	48 83 c4 58          	add    $0x58,%rsp
   3c4fa:	c3                   	ret    
   3c4fb:	cc                   	int3   
   3c4fc:	cc                   	int3   
   3c4fd:	cc                   	int3   
   3c4fe:	cc                   	int3   
   3c4ff:	cc                   	int3   
