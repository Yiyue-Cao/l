0000000000083550 <strategy_comm5::signal_trigger::SignalTrigger::windows_sharpe_trigger>:
   83550:	55                   	push   %rbp
   83551:	41 57                	push   %r15
   83553:	41 56                	push   %r14
   83555:	41 55                	push   %r13
   83557:	41 54                	push   %r12
   83559:	53                   	push   %rbx
   8355a:	48 83 ec 48          	sub    $0x48,%rsp
   8355e:	66 0f d6 44 24 18    	movq   %xmm0,0x18(%rsp)
   83564:	48 89 7c 24 20       	mov    %rdi,0x20(%rsp)
   83569:	48 c7 04 24 00 00 00 	movq   $0x0,(%rsp)
   83570:	00 
   83571:	48 c7 44 24 08 01 00 	movq   $0x1,0x8(%rsp)
   83578:	00 00 
   8357a:	48 c7 44 24 10 00 00 	movq   $0x0,0x10(%rsp)
   83581:	00 00 
   83583:	4c 8b 66 18          	mov    0x18(%rsi),%r12
   83587:	4d 85 e4             	test   %r12,%r12
   8358a:	0f 84 a1 01 00 00    	je     83731 <strategy_comm5::signal_trigger::SignalTrigger::windows_sharpe_trigger+0x1e1>
   83590:	4c 8b 2e             	mov    (%rsi),%r13
   83593:	49 8d 6d 10          	lea    0x10(%r13),%rbp
   83597:	66 41 0f 6f 45 00    	movdqa 0x0(%r13),%xmm0
   8359d:	66 44 0f d7 f0       	pmovmskb %xmm0,%r14d
   835a2:	41 f7 d6             	not    %r14d
   835a5:	f2 0f 10 46 40       	movsd  0x40(%rsi),%xmm0
   835aa:	f2 0f 11 44 24 40    	movsd  %xmm0,0x40(%rsp)
   835b0:	f2 0f 10 46 58       	movsd  0x58(%rsi),%xmm0
   835b5:	f2 0f 11 44 24 38    	movsd  %xmm0,0x38(%rsp)
   835bb:	f2 0f 10 46 50       	movsd  0x50(%rsi),%xmm0
   835c0:	f2 0f 11 44 24 30    	movsd  %xmm0,0x30(%rsp)
   835c6:	f3 0f 7e 46 48       	movq   0x48(%rsi),%xmm0
   835cb:	66 0f d6 44 24 28    	movq   %xmm0,0x28(%rsp)
   835d1:	b8 01 00 00 00       	mov    $0x1,%eax
   835d6:	31 db                	xor    %ebx,%ebx
   835d8:	eb 2d                	jmp    83607 <strategy_comm5::signal_trigger::SignalTrigger::windows_sharpe_trigger+0xb7>
   835da:	66 0f 1f 44 00 00    	nopw   0x0(%rax,%rax,1)
   835e0:	48 8b 44 24 08       	mov    0x8(%rsp),%rax
   835e5:	41 8d 4e ff          	lea    -0x1(%r14),%ecx
   835e9:	44 21 f1             	and    %r14d,%ecx
   835ec:	49 ff cc             	dec    %r12
   835ef:	44 88 3c 18          	mov    %r15b,(%rax,%rbx,1)
   835f3:	48 ff c3             	inc    %rbx
   835f6:	48 89 5c 24 10       	mov    %rbx,0x10(%rsp)
   835fb:	41 89 ce             	mov    %ecx,%r14d
   835fe:	4d 85 e4             	test   %r12,%r12
   83601:	0f 84 2a 01 00 00    	je     83731 <strategy_comm5::signal_trigger::SignalTrigger::windows_sharpe_trigger+0x1e1>
   83607:	66 45 85 f6          	test   %r14w,%r14w
   8360b:	75 24                	jne    83631 <strategy_comm5::signal_trigger::SignalTrigger::windows_sharpe_trigger+0xe1>
   8360d:	0f 1f 00             	nopl   (%rax)
   83610:	66 0f 6f 45 00       	movdqa 0x0(%rbp),%xmm0
   83615:	66 44 0f d7 f0       	pmovmskb %xmm0,%r14d
   8361a:	49 81 c5 80 f6 ff ff 	add    $0xfffffffffffff680,%r13
   83621:	48 83 c5 10          	add    $0x10,%rbp
   83625:	41 81 fe ff ff 00 00 	cmp    $0xffff,%r14d
   8362c:	74 e2                	je     83610 <strategy_comm5::signal_trigger::SignalTrigger::windows_sharpe_trigger+0xc0>
   8362e:	41 f7 d6             	not    %r14d
   83631:	f3 41 0f bc ce       	tzcnt  %r14d,%ecx
   83636:	48 f7 d9             	neg    %rcx
   83639:	48 69 c9 98 00 00 00 	imul   $0x98,%rcx,%rcx
   83640:	49 8b 54 0d c0       	mov    -0x40(%r13,%rcx,1),%rdx
   83645:	48 83 fa 01          	cmp    $0x1,%rdx
   83649:	48 83 d2 00          	adc    $0x0,%rdx
   8364d:	f2 41 0f 10 54 0d d0 	movsd  -0x30(%r13,%rcx,1),%xmm2
   83654:	66 48 0f 6e c2       	movq   %rdx,%xmm0
   83659:	66 0f 62 05 df 2f f9 	punpckldq -0x6d021(%rip),%xmm0        # 16640 <anon.1907589fa464e488346b0cbfb2429808.2.llvm.14402732174179579021+0x40>
   83660:	ff 
   83661:	66 0f 5c 05 97 2e f9 	subpd  -0x6d169(%rip),%xmm0        # 16500 <anon.50e25bb1355b8971fc58210c29d1b4b6.2.llvm.1301231569978033549+0x30>
   83668:	ff 
   83669:	66 0f 28 c8          	movapd %xmm0,%xmm1
   8366d:	66 0f 15 c8          	unpckhpd %xmm0,%xmm1
   83671:	f2 0f 58 c8          	addsd  %xmm0,%xmm1
   83675:	f2 0f 5e d1          	divsd  %xmm1,%xmm2
   83679:	f2 41 0f 10 4c 0d c8 	movsd  -0x38(%r13,%rcx,1),%xmm1
   83680:	66 0f 28 c1          	movapd %xmm1,%xmm0
   83684:	f2 0f 59 c1          	mulsd  %xmm1,%xmm0
   83688:	f2 0f 5c d0          	subsd  %xmm0,%xmm2
   8368c:	66 0f 57 c0          	xorpd  %xmm0,%xmm0
   83690:	f2 0f 5f d0          	maxsd  %xmm0,%xmm2
   83694:	f2 0f 51 d2          	sqrtsd %xmm2,%xmm2
   83698:	f2 41 0f 11 54 0d d8 	movsd  %xmm2,-0x28(%r13,%rcx,1)
   8369f:	66 0f 28 da          	movapd %xmm2,%xmm3
   836a3:	66 0f 54 1d 15 2e f9 	andpd  -0x6d1eb(%rip),%xmm3        # 164c0 <GCC_except_table128+0x23c>
   836aa:	ff 
   836ab:	f2 0f 10 25 95 2c f9 	movsd  -0x6d36b(%rip),%xmm4        # 16348 <GCC_except_table128+0xc4>
   836b2:	ff 
   836b3:	66 0f 2e e3          	ucomisd %xmm3,%xmm4
   836b7:	73 08                	jae    836c1 <strategy_comm5::signal_trigger::SignalTrigger::windows_sharpe_trigger+0x171>
   836b9:	f2 0f 5e ca          	divsd  %xmm2,%xmm1
   836bd:	66 0f 28 c1          	movapd %xmm1,%xmm0
   836c1:	4c 01 e9             	add    %r13,%rcx
   836c4:	f2 0f 11 41 f8       	movsd  %xmm0,-0x8(%rcx)
   836c9:	66 0f 2e 44 24 40    	ucomisd 0x40(%rsp),%xmm0
   836cf:	73 3f                	jae    83710 <strategy_comm5::signal_trigger::SignalTrigger::windows_sharpe_trigger+0x1c0>
   836d1:	41 b7 03             	mov    $0x3,%r15b
   836d4:	66 0f 2e 44 24 38    	ucomisd 0x38(%rsp),%xmm0
   836da:	73 37                	jae    83713 <strategy_comm5::signal_trigger::SignalTrigger::windows_sharpe_trigger+0x1c3>
   836dc:	41 b7 02             	mov    $0x2,%r15b
   836df:	f2 0f 10 4c 24 30    	movsd  0x30(%rsp),%xmm1
   836e5:	66 0f 2e c8          	ucomisd %xmm0,%xmm1
   836e9:	73 28                	jae    83713 <strategy_comm5::signal_trigger::SignalTrigger::windows_sharpe_trigger+0x1c3>
   836eb:	31 c9                	xor    %ecx,%ecx
   836ed:	f2 0f 10 4c 24 28    	movsd  0x28(%rsp),%xmm1
   836f3:	66 0f 2e c8          	ucomisd %xmm0,%xmm1
   836f7:	0f 92 c1             	setb   %cl
   836fa:	44 8d 3c 49          	lea    (%rcx,%rcx,2),%r15d
   836fe:	41 ff c7             	inc    %r15d
   83701:	eb 10                	jmp    83713 <strategy_comm5::signal_trigger::SignalTrigger::windows_sharpe_trigger+0x1c3>
   83703:	66 66 66 66 2e 0f 1f 	data16 data16 data16 cs nopw 0x0(%rax,%rax,1)
   8370a:	84 00 00 00 00 00 
   83710:	45 31 ff             	xor    %r15d,%r15d
   83713:	48 3b 1c 24          	cmp    (%rsp),%rbx
   83717:	0f 85 c8 fe ff ff    	jne    835e5 <strategy_comm5::signal_trigger::SignalTrigger::windows_sharpe_trigger+0x95>
   8371d:	48 89 e7             	mov    %rsp,%rdi
   83720:	48 8d 35 31 b4 07 00 	lea    0x7b431(%rip),%rsi        # feb58 <anon.50e25bb1355b8971fc58210c29d1b4b6.11.llvm.1301231569978033549>
   83727:	e8 b4 e8 ff ff       	call   81fe0 <_ZN5alloc7raw_vec19RawVec$LT$T$C$A$GT$8grow_one17h6d28e1fe0adf05efE.llvm.1301231569978033549>
   8372c:	e9 af fe ff ff       	jmp    835e0 <strategy_comm5::signal_trigger::SignalTrigger::windows_sharpe_trigger+0x90>
   83731:	48 89 e7             	mov    %rsp,%rdi
   83734:	f2 0f 10 44 24 18    	movsd  0x18(%rsp),%xmm0
   8373a:	e8 61 02 00 00       	call   839a0 <_ZN14strategy_comm514signal_trigger17enum_rate_counter17hb51fcb9e7a9a6c40E.llvm.1301231569978033549>
   8373f:	48 8b 4c 24 20       	mov    0x20(%rsp),%rcx
   83744:	88 01                	mov    %al,(%rcx)
   83746:	f2 0f 11 41 08       	movsd  %xmm0,0x8(%rcx)
   8374b:	48 89 c8             	mov    %rcx,%rax
   8374e:	48 83 c4 48          	add    $0x48,%rsp
   83752:	5b                   	pop    %rbx
   83753:	41 5c                	pop    %r12
   83755:	41 5d                	pop    %r13
   83757:	41 5e                	pop    %r14
   83759:	41 5f                	pop    %r15
   8375b:	5d                   	pop    %rbp
   8375c:	c3                   	ret    
   8375d:	48 89 c3             	mov    %rax,%rbx
   83760:	48 8b 34 24          	mov    (%rsp),%rsi
   83764:	48 85 f6             	test   %rsi,%rsi
   83767:	74 10                	je     83779 <strategy_comm5::signal_trigger::SignalTrigger::windows_sharpe_trigger+0x229>
   83769:	48 8b 7c 24 08       	mov    0x8(%rsp),%rdi
   8376e:	ba 01 00 00 00       	mov    $0x1,%edx
   83773:	ff 15 ff 04 08 00    	call   *0x804ff(%rip)        # 103c78 <_DYNAMIC+0x218>
   83779:	48 89 df             	mov    %rbx,%rdi
   8377c:	e8 ff 8d 07 00       	call   fc580 <_Unwind_Resume@plt>
   83781:	cc                   	int3   
   83782:	cc                   	int3   
   83783:	cc                   	int3   
   83784:	cc                   	int3   
   83785:	cc                   	int3   
   83786:	cc                   	int3   
   83787:	cc                   	int3   
   83788:	cc                   	int3   
   83789:	cc                   	int3   
   8378a:	cc                   	int3   
   8378b:	cc                   	int3   
   8378c:	cc                   	int3   
   8378d:	cc                   	int3   
   8378e:	cc                   	int3   
   8378f:	cc                   	int3   
