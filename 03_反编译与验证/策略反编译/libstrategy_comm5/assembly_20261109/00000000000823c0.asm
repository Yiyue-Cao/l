00000000000823c0 <strategy_comm5::signal_trigger::TsQuantileCalculator::update>:
   823c0:	55                   	push   %rbp
   823c1:	41 57                	push   %r15
   823c3:	41 56                	push   %r14
   823c5:	41 55                	push   %r13
   823c7:	41 54                	push   %r12
   823c9:	53                   	push   %rbx
   823ca:	48 83 ec 68          	sub    $0x68,%rsp
   823ce:	f2 0f 11 44 24 10    	movsd  %xmm0,0x10(%rsp)
   823d4:	48 89 fb             	mov    %rdi,%rbx
   823d7:	4c 8b 77 40          	mov    0x40(%rdi),%r14
   823db:	48 8b 07             	mov    (%rdi),%rax
   823de:	48 8b 4f 18          	mov    0x18(%rdi),%rcx
   823e2:	48 39 c1             	cmp    %rax,%rcx
   823e5:	f2 0f 11 4c 24 08    	movsd  %xmm1,0x8(%rsp)
   823eb:	75 1c                	jne    82409 <strategy_comm5::signal_trigger::TsQuantileCalculator::update+0x49>
   823ed:	48 8d 35 34 c7 07 00 	lea    0x7c734(%rip),%rsi        # feb28 <anon.50e25bb1355b8971fc58210c29d1b4b6.5.llvm.1301231569978033549+0x18>
   823f4:	48 89 df             	mov    %rbx,%rdi
   823f7:	e8 b4 77 ff ff       	call   79bb0 <_ZN5alloc11collections9vec_deque21VecDeque$LT$T$C$A$GT$4grow17h4ecc45fed9476e45E.llvm.10430611365073198366>
   823fc:	f2 0f 10 4c 24 08    	movsd  0x8(%rsp),%xmm1
   82402:	48 8b 03             	mov    (%rbx),%rax
   82405:	48 8b 4b 18          	mov    0x18(%rbx),%rcx
   82409:	48 03 4b 10          	add    0x10(%rbx),%rcx
   8240d:	31 d2                	xor    %edx,%edx
   8240f:	48 39 c1             	cmp    %rax,%rcx
   82412:	48 0f 42 c2          	cmovb  %rdx,%rax
   82416:	48 29 c1             	sub    %rax,%rcx
   82419:	48 8b 43 08          	mov    0x8(%rbx),%rax
   8241d:	48 8d 0c 49          	lea    (%rcx,%rcx,2),%rcx
   82421:	f2 0f 10 44 24 10    	movsd  0x10(%rsp),%xmm0
   82427:	f2 0f 11 04 c8       	movsd  %xmm0,(%rax,%rcx,8)
   8242c:	f2 0f 11 4c c8 08    	movsd  %xmm1,0x8(%rax,%rcx,8)
   82432:	4c 89 74 c8 10       	mov    %r14,0x10(%rax,%rcx,8)
   82437:	48 8b 4b 18          	mov    0x18(%rbx),%rcx
   8243b:	48 ff c1             	inc    %rcx
   8243e:	48 89 4b 18          	mov    %rcx,0x18(%rbx)
   82442:	4c 8d 7b 20          	lea    0x20(%rbx),%r15
   82446:	48 8b 43 20          	mov    0x20(%rbx),%rax
   8244a:	48 85 c0             	test   %rax,%rax
   8244d:	0f 84 97 00 00 00    	je     824ea <strategy_comm5::signal_trigger::TsQuantileCalculator::update+0x12a>
   82453:	48 8b 53 28          	mov    0x28(%rbx),%rdx
   82457:	0f b7 b8 ba 00 00 00 	movzwl 0xba(%rax),%edi
   8245e:	41 89 f8             	mov    %edi,%r8d
   82461:	41 c1 e0 04          	shl    $0x4,%r8d
   82465:	49 89 c1             	mov    %rax,%r9
   82468:	45 31 db             	xor    %r11d,%r11d
   8246b:	eb 26                	jmp    82493 <strategy_comm5::signal_trigger::TsQuantileCalculator::update+0xd3>
   8246d:	0f 1f 00             	nopl   (%rax)
   82470:	66 0f 2e c8          	ucomisd %xmm0,%xmm1
   82474:	72 5d                	jb     824d3 <strategy_comm5::signal_trigger::TsQuantileCalculator::update+0x113>
   82476:	4d 39 de             	cmp    %r11,%r14
   82479:	41 0f 97 c2          	seta   %r10b
   8247d:	41 80 da 00          	sbb    $0x0,%r10b
   82481:	49 83 c1 10          	add    $0x10,%r9
   82485:	49 83 c0 f0          	add    $0xfffffffffffffff0,%r8
   82489:	4c 8d 5e 01          	lea    0x1(%rsi),%r11
   8248d:	41 80 fa 01          	cmp    $0x1,%r10b
   82491:	75 2d                	jne    824c0 <strategy_comm5::signal_trigger::TsQuantileCalculator::update+0x100>
   82493:	4d 85 c0             	test   %r8,%r8
   82496:	74 38                	je     824d0 <strategy_comm5::signal_trigger::TsQuantileCalculator::update+0x110>
   82498:	4c 89 de             	mov    %r11,%rsi
   8249b:	f2 41 0f 10 01       	movsd  (%r9),%xmm0
   824a0:	4d 8b 59 08          	mov    0x8(%r9),%r11
   824a4:	66 0f 2e c1          	ucomisd %xmm1,%xmm0
   824a8:	73 c6                	jae    82470 <strategy_comm5::signal_trigger::TsQuantileCalculator::update+0xb0>
   824aa:	41 b2 01             	mov    $0x1,%r10b
   824ad:	66 0f 2e c8          	ucomisd %xmm0,%xmm1
   824b1:	72 c3                	jb     82476 <strategy_comm5::signal_trigger::TsQuantileCalculator::update+0xb6>
   824b3:	eb cc                	jmp    82481 <strategy_comm5::signal_trigger::TsQuantileCalculator::update+0xc1>
   824b5:	66 66 2e 0f 1f 84 00 	data16 cs nopw 0x0(%rax,%rax,1)
   824bc:	00 00 00 00 
   824c0:	41 0f b6 fa          	movzbl %r10b,%edi
   824c4:	85 ff                	test   %edi,%edi
   824c6:	74 5e                	je     82526 <strategy_comm5::signal_trigger::TsQuantileCalculator::update+0x166>
   824c8:	eb 09                	jmp    824d3 <strategy_comm5::signal_trigger::TsQuantileCalculator::update+0x113>
   824ca:	66 0f 1f 44 00 00    	nopw   0x0(%rax,%rax,1)
   824d0:	48 89 fe             	mov    %rdi,%rsi
   824d3:	48 83 ea 01          	sub    $0x1,%rdx
   824d7:	0f 82 c4 02 00 00    	jb     827a1 <strategy_comm5::signal_trigger::TsQuantileCalculator::update+0x3e1>
   824dd:	48 8b 84 f0 c0 00 00 	mov    0xc0(%rax,%rsi,8),%rax
   824e4:	00 
   824e5:	e9 6d ff ff ff       	jmp    82457 <strategy_comm5::signal_trigger::TsQuantileCalculator::update+0x97>
   824ea:	4c 89 7c 24 18       	mov    %r15,0x18(%rsp)
   824ef:	f2 0f 11 4c 24 20    	movsd  %xmm1,0x20(%rsp)
   824f5:	4c 89 74 24 28       	mov    %r14,0x28(%rsp)
   824fa:	48 89 54 24 30       	mov    %rdx,0x30(%rsp)
   824ff:	48 c7 44 24 38 00 00 	movq   $0x0,0x38(%rsp)
   82506:	00 00 
   82508:	48 89 74 24 40       	mov    %rsi,0x40(%rsp)
   8250d:	48 8d 7c 24 48       	lea    0x48(%rsp),%rdi
   82512:	48 8d 74 24 18       	lea    0x18(%rsp),%rsi
   82517:	e8 14 58 00 00       	call   87d30 <alloc::collections::btree::map::entry::VacantEntry<K,V,A>::insert_entry>
   8251c:	f2 0f 10 4c 24 08    	movsd  0x8(%rsp),%xmm1
   82522:	48 8b 4b 18          	mov    0x18(%rbx),%rcx
   82526:	48 ff 43 40          	incq   0x40(%rbx)
   8252a:	f2 0f 10 43 48       	movsd  0x48(%rbx),%xmm0
   8252f:	f2 0f 58 c1          	addsd  %xmm1,%xmm0
   82533:	f2 0f 11 43 48       	movsd  %xmm0,0x48(%rbx)
   82538:	48 8b 43 50          	mov    0x50(%rbx),%rax
   8253c:	48 ff c0             	inc    %rax
   8253f:	48 89 43 50          	mov    %rax,0x50(%rbx)
   82543:	66 48 0f 6e d8       	movq   %rax,%xmm3
   82548:	66 0f 62 1d f0 40 f9 	punpckldq -0x6bf10(%rip),%xmm3        # 16640 <anon.1907589fa464e488346b0cbfb2429808.2.llvm.14402732174179579021+0x40>
   8254f:	ff 
   82550:	66 0f 5c 1d a8 3f f9 	subpd  -0x6c058(%rip),%xmm3        # 16500 <anon.50e25bb1355b8971fc58210c29d1b4b6.2.llvm.1301231569978033549+0x30>
   82557:	ff 
   82558:	66 0f 28 d3          	movapd %xmm3,%xmm2
   8255c:	66 0f 15 d3          	unpckhpd %xmm3,%xmm2
   82560:	f2 0f 58 d3          	addsd  %xmm3,%xmm2
   82564:	66 0f 28 d8          	movapd %xmm0,%xmm3
   82568:	f2 0f 5e da          	divsd  %xmm2,%xmm3
   8256c:	f2 0f 11 5b 58       	movsd  %xmm3,0x58(%rbx)
   82571:	66 0f 28 d1          	movapd %xmm1,%xmm2
   82575:	f2 0f 59 d1          	mulsd  %xmm1,%xmm2
   82579:	f2 0f 58 53 60       	addsd  0x60(%rbx),%xmm2
   8257e:	f2 0f 11 53 60       	movsd  %xmm2,0x60(%rbx)
   82583:	66 0f 57 d2          	xorpd  %xmm2,%xmm2
   82587:	31 d2                	xor    %edx,%edx
   82589:	66 0f 2e ca          	ucomisd %xmm2,%xmm1
   8258d:	0f 96 c2             	setbe  %dl
   82590:	f2 0f 58 4c d3 70    	addsd  0x70(%rbx,%rdx,8),%xmm1
   82596:	f2 0f 11 4c d3 70    	movsd  %xmm1,0x70(%rbx,%rdx,8)
   8259c:	48 85 c9             	test   %rcx,%rcx
   8259f:	0f 84 ed 01 00 00    	je     82792 <strategy_comm5::signal_trigger::TsQuantileCalculator::update+0x3d2>
   825a5:	45 31 e4             	xor    %r12d,%r12d
   825a8:	4c 8d 74 24 18       	lea    0x18(%rsp),%r14
   825ad:	eb 48                	jmp    825f7 <strategy_comm5::signal_trigger::TsQuantileCalculator::update+0x237>
   825af:	90                   	nop
   825b0:	31 c0                	xor    %eax,%eax
   825b2:	f2 0f 11 4b 58       	movsd  %xmm1,0x58(%rbx)
   825b7:	66 0f 28 cb          	movapd %xmm3,%xmm1
   825bb:	f2 0f 59 cb          	mulsd  %xmm3,%xmm1
   825bf:	f2 0f 10 53 60       	movsd  0x60(%rbx),%xmm2
   825c4:	f2 0f 5c d1          	subsd  %xmm1,%xmm2
   825c8:	31 c9                	xor    %ecx,%ecx
   825ca:	66 0f 2e 1d b6 3d f9 	ucomisd -0x6c24a(%rip),%xmm3        # 16388 <GCC_except_table128+0x104>
   825d1:	ff 
   825d2:	f2 0f 11 53 60       	movsd  %xmm2,0x60(%rbx)
   825d7:	0f 96 c1             	setbe  %cl
   825da:	f2 0f 10 4c cb 70    	movsd  0x70(%rbx,%rcx,8),%xmm1
   825e0:	f2 0f 5c cb          	subsd  %xmm3,%xmm1
   825e4:	f2 0f 11 4c cb 70    	movsd  %xmm1,0x70(%rbx,%rcx,8)
   825ea:	48 8b 4b 18          	mov    0x18(%rbx),%rcx
   825ee:	48 85 c9             	test   %rcx,%rcx
   825f1:	0f 84 9b 01 00 00    	je     82792 <strategy_comm5::signal_trigger::TsQuantileCalculator::update+0x3d2>
   825f7:	48 8b 73 10          	mov    0x10(%rbx),%rsi
   825fb:	48 8b 3b             	mov    (%rbx),%rdi
   825fe:	48 8b 53 08          	mov    0x8(%rbx),%rdx
   82602:	48 39 fe             	cmp    %rdi,%rsi
   82605:	49 89 f8             	mov    %rdi,%r8
   82608:	4d 0f 42 c4          	cmovb  %r12,%r8
   8260c:	49 89 f1             	mov    %rsi,%r9
   8260f:	4d 29 c1             	sub    %r8,%r9
   82612:	4f 8d 04 49          	lea    (%r9,%r9,2),%r8
   82616:	f2 0f 10 4c 24 10    	movsd  0x10(%rsp),%xmm1
   8261c:	f2 42 0f 5c 0c c2    	subsd  (%rdx,%r8,8),%xmm1
   82622:	66 0f 2e 4b 38       	ucomisd 0x38(%rbx),%xmm1
   82627:	0f 86 65 01 00 00    	jbe    82792 <strategy_comm5::signal_trigger::TsQuantileCalculator::update+0x3d2>
   8262d:	4c 8d 46 01          	lea    0x1(%rsi),%r8
   82631:	49 39 f8             	cmp    %rdi,%r8
   82634:	41 b8 00 00 00 00    	mov    $0x0,%r8d
   8263a:	4c 0f 43 c7          	cmovae %rdi,%r8
   8263e:	49 f7 d8             	neg    %r8
   82641:	4a 8d 3c 06          	lea    (%rsi,%r8,1),%rdi
   82645:	48 ff c7             	inc    %rdi
   82648:	48 89 7b 10          	mov    %rdi,0x10(%rbx)
   8264c:	48 ff c9             	dec    %rcx
   8264f:	48 89 4b 18          	mov    %rcx,0x18(%rbx)
   82653:	48 8d 34 76          	lea    (%rsi,%rsi,2),%rsi
   82657:	f2 0f 10 5c f2 08    	movsd  0x8(%rdx,%rsi,8),%xmm3
   8265d:	48 8b 4b 20          	mov    0x20(%rbx),%rcx
   82661:	48 85 c9             	test   %rcx,%rcx
   82664:	0f 84 d7 00 00 00    	je     82741 <strategy_comm5::signal_trigger::TsQuantileCalculator::update+0x381>
   8266a:	48 8b 74 f2 10       	mov    0x10(%rdx,%rsi,8),%rsi
   8266f:	48 8b 53 28          	mov    0x28(%rbx),%rdx
   82673:	0f b7 b9 ba 00 00 00 	movzwl 0xba(%rcx),%edi
   8267a:	41 89 f8             	mov    %edi,%r8d
   8267d:	41 c1 e0 04          	shl    $0x4,%r8d
   82681:	49 c7 c5 ff ff ff ff 	mov    $0xffffffffffffffff,%r13
   82688:	49 89 cb             	mov    %rcx,%r11
   8268b:	45 31 d2             	xor    %r10d,%r10d
   8268e:	eb 26                	jmp    826b6 <strategy_comm5::signal_trigger::TsQuantileCalculator::update+0x2f6>
   82690:	66 0f 2e d9          	ucomisd %xmm1,%xmm3
   82694:	72 6b                	jb     82701 <strategy_comm5::signal_trigger::TsQuantileCalculator::update+0x341>
   82696:	4c 39 ee             	cmp    %r13,%rsi
   82699:	40 0f 97 c5          	seta   %bpl
   8269d:	40 80 dd 00          	sbb    $0x0,%bpl
   826a1:	49 83 c3 10          	add    $0x10,%r11
   826a5:	49 83 c0 f0          	add    $0xfffffffffffffff0,%r8
   826a9:	4d 8d 69 01          	lea    0x1(%r9),%r13
   826ad:	49 ff c2             	inc    %r10
   826b0:	40 80 fd 01          	cmp    $0x1,%bpl
   826b4:	75 2a                	jne    826e0 <strategy_comm5::signal_trigger::TsQuantileCalculator::update+0x320>
   826b6:	4d 85 c0             	test   %r8,%r8
   826b9:	74 33                	je     826ee <strategy_comm5::signal_trigger::TsQuantileCalculator::update+0x32e>
   826bb:	4d 89 e9             	mov    %r13,%r9
   826be:	f2 41 0f 10 0b       	movsd  (%r11),%xmm1
   826c3:	4d 8b 6b 08          	mov    0x8(%r11),%r13
   826c7:	66 0f 2e cb          	ucomisd %xmm3,%xmm1
   826cb:	73 c3                	jae    82690 <strategy_comm5::signal_trigger::TsQuantileCalculator::update+0x2d0>
   826cd:	40 b5 01             	mov    $0x1,%bpl
   826d0:	66 0f 2e d9          	ucomisd %xmm1,%xmm3
   826d4:	72 c0                	jb     82696 <strategy_comm5::signal_trigger::TsQuantileCalculator::update+0x2d6>
   826d6:	eb c9                	jmp    826a1 <strategy_comm5::signal_trigger::TsQuantileCalculator::update+0x2e1>
   826d8:	0f 1f 84 00 00 00 00 	nopl   0x0(%rax,%rax,1)
   826df:	00 
   826e0:	40 0f b6 fd          	movzbl %bpl,%edi
   826e4:	85 ff                	test   %edi,%edi
   826e6:	74 28                	je     82710 <strategy_comm5::signal_trigger::TsQuantileCalculator::update+0x350>
   826e8:	49 ff c1             	inc    %r9
   826eb:	4c 89 cf             	mov    %r9,%rdi
   826ee:	48 83 ea 01          	sub    $0x1,%rdx
   826f2:	72 4d                	jb     82741 <strategy_comm5::signal_trigger::TsQuantileCalculator::update+0x381>
   826f4:	48 8b 8c f9 c0 00 00 	mov    0xc0(%rcx,%rdi,8),%rcx
   826fb:	00 
   826fc:	e9 72 ff ff ff       	jmp    82673 <strategy_comm5::signal_trigger::TsQuantileCalculator::update+0x2b3>
   82701:	4c 89 d7             	mov    %r10,%rdi
   82704:	48 83 ea 01          	sub    $0x1,%rdx
   82708:	73 ea                	jae    826f4 <strategy_comm5::signal_trigger::TsQuantileCalculator::update+0x334>
   8270a:	eb 35                	jmp    82741 <strategy_comm5::signal_trigger::TsQuantileCalculator::update+0x381>
   8270c:	0f 1f 40 00          	nopl   0x0(%rax)
   82710:	48 89 4c 24 18       	mov    %rcx,0x18(%rsp)
   82715:	48 89 54 24 20       	mov    %rdx,0x20(%rsp)
   8271a:	4c 89 6c 24 28       	mov    %r13,0x28(%rsp)
   8271f:	4c 89 7c 24 30       	mov    %r15,0x30(%rsp)
   82724:	4c 89 f7             	mov    %r14,%rdi
   82727:	f2 0f 11 5c 24 08    	movsd  %xmm3,0x8(%rsp)
   8272d:	e8 ee 57 00 00       	call   87f20 <alloc::collections::btree::map::entry::OccupiedEntry<K,V,A>::remove_kv>
   82732:	f2 0f 10 5c 24 08    	movsd  0x8(%rsp),%xmm3
   82738:	f2 0f 10 43 48       	movsd  0x48(%rbx),%xmm0
   8273d:	48 8b 43 50          	mov    0x50(%rbx),%rax
   82741:	f2 0f 5c c3          	subsd  %xmm3,%xmm0
   82745:	f2 0f 11 43 48       	movsd  %xmm0,0x48(%rbx)
   8274a:	66 0f 57 c9          	xorpd  %xmm1,%xmm1
   8274e:	48 85 c0             	test   %rax,%rax
   82751:	0f 84 59 fe ff ff    	je     825b0 <strategy_comm5::signal_trigger::TsQuantileCalculator::update+0x1f0>
   82757:	48 ff c8             	dec    %rax
   8275a:	48 89 43 50          	mov    %rax,0x50(%rbx)
   8275e:	0f 84 4c fe ff ff    	je     825b0 <strategy_comm5::signal_trigger::TsQuantileCalculator::update+0x1f0>
   82764:	66 48 0f 6e c8       	movq   %rax,%xmm1
   82769:	66 0f 62 0d cf 3e f9 	punpckldq -0x6c131(%rip),%xmm1        # 16640 <anon.1907589fa464e488346b0cbfb2429808.2.llvm.14402732174179579021+0x40>
   82770:	ff 
   82771:	66 0f 5c 0d 87 3d f9 	subpd  -0x6c279(%rip),%xmm1        # 16500 <anon.50e25bb1355b8971fc58210c29d1b4b6.2.llvm.1301231569978033549+0x30>
   82778:	ff 
   82779:	66 0f 28 d1          	movapd %xmm1,%xmm2
   8277d:	66 0f 15 d1          	unpckhpd %xmm1,%xmm2
   82781:	f2 0f 58 d1          	addsd  %xmm1,%xmm2
   82785:	66 0f 28 c8          	movapd %xmm0,%xmm1
   82789:	f2 0f 5e ca          	divsd  %xmm2,%xmm1
   8278d:	e9 20 fe ff ff       	jmp    825b2 <strategy_comm5::signal_trigger::TsQuantileCalculator::update+0x1f2>
   82792:	48 83 c4 68          	add    $0x68,%rsp
   82796:	5b                   	pop    %rbx
   82797:	41 5c                	pop    %r12
   82799:	41 5d                	pop    %r13
   8279b:	41 5e                	pop    %r14
   8279d:	41 5f                	pop    %r15
   8279f:	5d                   	pop    %rbp
   827a0:	c3                   	ret    
   827a1:	48 89 c2             	mov    %rax,%rdx
   827a4:	e9 41 fd ff ff       	jmp    824ea <strategy_comm5::signal_trigger::TsQuantileCalculator::update+0x12a>
   827a9:	cc                   	int3   
   827aa:	cc                   	int3   
   827ab:	cc                   	int3   
   827ac:	cc                   	int3   
   827ad:	cc                   	int3   
   827ae:	cc                   	int3   
   827af:	cc                   	int3   
