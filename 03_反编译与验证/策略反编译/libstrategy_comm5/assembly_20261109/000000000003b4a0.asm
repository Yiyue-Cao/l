000000000003b4a0 <strategy_comm5::eff_amts>:
   3b4a0:	40 80 fe 02          	cmp    $0x2,%sil
   3b4a4:	74 1d                	je     3b4c3 <strategy_comm5::eff_amts+0x23>
   3b4a6:	40 0f b6 c6          	movzbl %sil,%eax
   3b4aa:	83 f8 01             	cmp    $0x1,%eax
   3b4ad:	75 38                	jne    3b4e7 <strategy_comm5::eff_amts+0x47>
   3b4af:	f2 0f 10 9f 50 05 00 	movsd  0x550(%rdi),%xmm3
   3b4b6:	00 
   3b4b7:	66 0f 57 e4          	xorpd  %xmm4,%xmm4
   3b4bb:	66 0f 2e dc          	ucomisd %xmm4,%xmm3
   3b4bf:	77 14                	ja     3b4d5 <strategy_comm5::eff_amts+0x35>
   3b4c1:	eb 24                	jmp    3b4e7 <strategy_comm5::eff_amts+0x47>
   3b4c3:	f2 0f 10 9f 58 05 00 	movsd  0x558(%rdi),%xmm3
   3b4ca:	00 
   3b4cb:	66 0f 57 e4          	xorpd  %xmm4,%xmm4
   3b4cf:	66 0f 2e dc          	ucomisd %xmm4,%xmm3
   3b4d3:	76 12                	jbe    3b4e7 <strategy_comm5::eff_amts+0x47>
   3b4d5:	f2 0f 10 87 50 04 00 	movsd  0x450(%rdi),%xmm0
   3b4dc:	00 
   3b4dd:	66 0f 2e e0          	ucomisd %xmm0,%xmm4
   3b4e1:	77 04                	ja     3b4e7 <strategy_comm5::eff_amts+0x47>
   3b4e3:	f2 0f 59 c3          	mulsd  %xmm3,%xmm0
   3b4e7:	66 0f 14 c1          	unpcklpd %xmm1,%xmm0
   3b4eb:	66 0f 57 c9          	xorpd  %xmm1,%xmm1
   3b4ef:	66 0f 28 d8          	movapd %xmm0,%xmm3
   3b4f3:	66 0f c2 d9 01       	cmpltpd %xmm1,%xmm3
   3b4f8:	66 0f 14 d2          	unpcklpd %xmm2,%xmm2
   3b4fc:	66 0f 59 d0          	mulpd  %xmm0,%xmm2
   3b500:	66 0f 54 c3          	andpd  %xmm3,%xmm0
   3b504:	66 0f 55 da          	andnpd %xmm2,%xmm3
   3b508:	66 0f 56 d8          	orpd   %xmm0,%xmm3
   3b50c:	66 0f 70 cb ee       	pshufd $0xee,%xmm3,%xmm1
   3b511:	66 0f 28 c3          	movapd %xmm3,%xmm0
   3b515:	c3                   	ret    
   3b516:	cc                   	int3   
   3b517:	cc                   	int3   
   3b518:	cc                   	int3   
   3b519:	cc                   	int3   
   3b51a:	cc                   	int3   
   3b51b:	cc                   	int3   
   3b51c:	cc                   	int3   
   3b51d:	cc                   	int3   
   3b51e:	cc                   	int3   
   3b51f:	cc                   	int3   
