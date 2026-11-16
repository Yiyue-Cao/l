0000000000083790 <strategy_comm5::signal_trigger::SignalTrigger::windows_rsi_trigger>:
   83790:	55                   	push   %rbp
   83791:	41 57                	push   %r15
   83793:	41 56                	push   %r14
   83795:	41 55                	push   %r13
   83797:	41 54                	push   %r12
   83799:	53                   	push   %rbx
   8379a:	48 83 ec 48          	sub    $0x48,%rsp
   8379e:	66 0f d6 44 24 18    	movq   %xmm0,0x18(%rsp)
   837a4:	48 89 7c 24 20       	mov    %rdi,0x20(%rsp)
   837a9:	48 c7 04 24 00 00 00 	movq   $0x0,(%rsp)
   837b0:	00 
   837b1:	48 c7 44 24 08 01 00 	movq   $0x1,0x8(%rsp)
   837b8:	00 00 
   837ba:	48 c7 44 24 10 00 00 	movq   $0x0,0x10(%rsp)
   837c1:	00 00 
   837c3:	4c 8b 66 18          	mov    0x18(%rsi),%r12
   837c7:	4d 85 e4             	test   %r12,%r12
   837ca:	0f 84 71 01 00 00    	je     83941 <strategy_comm5::signal_trigger::SignalTrigger::windows_rsi_trigger+0x1b1>
   837d0:	4c 8b 2e             	mov    (%rsi),%r13
   837d3:	49 8d 6d 10          	lea    0x10(%r13),%rbp
   837d7:	66 41 0f 6f 45 00    	movdqa 0x0(%r13),%xmm0
   837dd:	66 44 0f d7 f0       	pmovmskb %xmm0,%r14d
   837e2:	41 f7 d6             	not    %r14d
   837e5:	f2 0f 10 46 40       	movsd  0x40(%rsi),%xmm0
   837ea:	f2 0f 11 44 24 40    	movsd  %xmm0,0x40(%rsp)
   837f0:	f2 0f 10 46 58       	movsd  0x58(%rsi),%xmm0
   837f5:	f2 0f 11 44 24 38    	movsd  %xmm0,0x38(%rsp)
   837fb:	f2 0f 10 46 50       	movsd  0x50(%rsi),%xmm0
   83800:	f2 0f 11 44 24 30    	movsd  %xmm0,0x30(%rsp)
   83806:	f3 0f 7e 46 48       	movq   0x48(%rsi),%xmm0
   8380b:	66 0f d6 44 24 28    	movq   %xmm0,0x28(%rsp)
   83811:	b8 01 00 00 00       	mov    $0x1,%eax
   83816:	31 db                	xor    %ebx,%ebx
   83818:	eb 2d                	jmp    83847 <strategy_comm5::signal_trigger::SignalTrigger::windows_rsi_trigger+0xb7>
   8381a:	66 0f 1f 44 00 00    	nopw   0x0(%rax,%rax,1)
   83820:	48 8b 44 24 08       	mov    0x8(%rsp),%rax
   83825:	41 8d 4e ff          	lea    -0x1(%r14),%ecx
   83829:	44 21 f1             	and    %r14d,%ecx
   8382c:	49 ff cc             	dec    %r12
   8382f:	44 88 3c 18          	mov    %r15b,(%rax,%rbx,1)
   83833:	48 ff c3             	inc    %rbx
   83836:	48 89 5c 24 10       	mov    %rbx,0x10(%rsp)
   8383b:	41 89 ce             	mov    %ecx,%r14d
   8383e:	4d 85 e4             	test   %r12,%r12
   83841:	0f 84 fa 00 00 00    	je     83941 <strategy_comm5::signal_trigger::SignalTrigger::windows_rsi_trigger+0x1b1>
   83847:	66 45 85 f6          	test   %r14w,%r14w
   8384b:	75 24                	jne    83871 <strategy_comm5::signal_trigger::SignalTrigger::windows_rsi_trigger+0xe1>
   8384d:	0f 1f 00             	nopl   (%rax)
   83850:	66 0f 6f 45 00       	movdqa 0x0(%rbp),%xmm0
   83855:	66 44 0f d7 f0       	pmovmskb %xmm0,%r14d
   8385a:	49 81 c5 80 f6 ff ff 	add    $0xfffffffffffff680,%r13
   83861:	48 83 c5 10          	add    $0x10,%rbp
   83865:	41 81 fe ff ff 00 00 	cmp    $0xffff,%r14d
   8386c:	74 e2                	je     83850 <strategy_comm5::signal_trigger::SignalTrigger::windows_rsi_trigger+0xc0>
   8386e:	41 f7 d6             	not    %r14d
   83871:	f3 41 0f bc ce       	tzcnt  %r14d,%ecx
   83876:	48 f7 d9             	neg    %rcx
   83879:	48 69 c9 98 00 00 00 	imul   $0x98,%rcx,%rcx
   83880:	f2 41 0f 10 44 0d e8 	movsd  -0x18(%r13,%rcx,1),%xmm0
   83887:	66 0f 54 05 31 2c f9 	andpd  -0x6d3cf(%rip),%xmm0        # 164c0 <GCC_except_table128+0x23c>
   8388e:	ff 
   8388f:	f2 41 0f 10 4c 0d e0 	movsd  -0x20(%r13,%rcx,1),%xmm1
   83896:	f2 0f 5e c8          	divsd  %xmm0,%xmm1
   8389a:	f2 0f 58 0d c6 2a f9 	addsd  -0x6d53a(%rip),%xmm1        # 16368 <GCC_except_table128+0xe4>
   838a1:	ff 
   838a2:	f2 0f 10 1d 1e 2b f9 	movsd  -0x6d4e2(%rip),%xmm3        # 163c8 <GCC_except_table128+0x144>
   838a9:	ff 
   838aa:	66 0f 28 d3          	movapd %xmm3,%xmm2
   838ae:	f2 0f 5e d1          	divsd  %xmm1,%xmm2
   838b2:	66 0f 28 cb          	movapd %xmm3,%xmm1
   838b6:	f2 0f 5c ca          	subsd  %xmm2,%xmm1
   838ba:	f2 0f c2 05 85 2a f9 	cmpnlesd -0x6d57b(%rip),%xmm0        # 16348 <GCC_except_table128+0xc4>
   838c1:	ff 06 
   838c3:	66 0f 54 c8          	andpd  %xmm0,%xmm1
   838c7:	f2 0f 10 15 71 2b f9 	movsd  -0x6d48f(%rip),%xmm2        # 16440 <GCC_except_table128+0x1bc>
   838ce:	ff 
   838cf:	66 0f 55 c2          	andnpd %xmm2,%xmm0
   838d3:	66 0f 56 c1          	orpd   %xmm1,%xmm0
   838d7:	66 41 0f 13 44 0d f0 	movlpd %xmm0,-0x10(%r13,%rcx,1)
   838de:	66 0f 2e 44 24 40    	ucomisd 0x40(%rsp),%xmm0
   838e4:	73 3a                	jae    83920 <strategy_comm5::signal_trigger::SignalTrigger::windows_rsi_trigger+0x190>
   838e6:	41 b7 03             	mov    $0x3,%r15b
   838e9:	66 0f 2e 44 24 38    	ucomisd 0x38(%rsp),%xmm0
   838ef:	73 32                	jae    83923 <strategy_comm5::signal_trigger::SignalTrigger::windows_rsi_trigger+0x193>
   838f1:	41 b7 02             	mov    $0x2,%r15b
   838f4:	f2 0f 10 4c 24 30    	movsd  0x30(%rsp),%xmm1
   838fa:	66 0f 2e c8          	ucomisd %xmm0,%xmm1
   838fe:	73 23                	jae    83923 <strategy_comm5::signal_trigger::SignalTrigger::windows_rsi_trigger+0x193>
   83900:	31 c9                	xor    %ecx,%ecx
   83902:	f2 0f 10 4c 24 28    	movsd  0x28(%rsp),%xmm1
   83908:	66 0f 2e c8          	ucomisd %xmm0,%xmm1
   8390c:	0f 92 c1             	setb   %cl
   8390f:	44 8d 3c 49          	lea    (%rcx,%rcx,2),%r15d
   83913:	41 ff c7             	inc    %r15d
   83916:	eb 0b                	jmp    83923 <strategy_comm5::signal_trigger::SignalTrigger::windows_rsi_trigger+0x193>
   83918:	0f 1f 84 00 00 00 00 	nopl   0x0(%rax,%rax,1)
   8391f:	00 
   83920:	45 31 ff             	xor    %r15d,%r15d
   83923:	48 3b 1c 24          	cmp    (%rsp),%rbx
   83927:	0f 85 f8 fe ff ff    	jne    83825 <strategy_comm5::signal_trigger::SignalTrigger::windows_rsi_trigger+0x95>
   8392d:	48 89 e7             	mov    %rsp,%rdi
   83930:	48 8d 35 39 b2 07 00 	lea    0x7b239(%rip),%rsi        # feb70 <anon.50e25bb1355b8971fc58210c29d1b4b6.12.llvm.1301231569978033549>
   83937:	e8 a4 e6 ff ff       	call   81fe0 <_ZN5alloc7raw_vec19RawVec$LT$T$C$A$GT$8grow_one17h6d28e1fe0adf05efE.llvm.1301231569978033549>
   8393c:	e9 df fe ff ff       	jmp    83820 <strategy_comm5::signal_trigger::SignalTrigger::windows_rsi_trigger+0x90>
   83941:	48 89 e7             	mov    %rsp,%rdi
   83944:	f2 0f 10 44 24 18    	movsd  0x18(%rsp),%xmm0
   8394a:	e8 51 00 00 00       	call   839a0 <_ZN14strategy_comm514signal_trigger17enum_rate_counter17hb51fcb9e7a9a6c40E.llvm.1301231569978033549>
   8394f:	48 8b 4c 24 20       	mov    0x20(%rsp),%rcx
   83954:	88 01                	mov    %al,(%rcx)
   83956:	f2 0f 11 41 08       	movsd  %xmm0,0x8(%rcx)
   8395b:	48 89 c8             	mov    %rcx,%rax
   8395e:	48 83 c4 48          	add    $0x48,%rsp
   83962:	5b                   	pop    %rbx
   83963:	41 5c                	pop    %r12
   83965:	41 5d                	pop    %r13
   83967:	41 5e                	pop    %r14
   83969:	41 5f                	pop    %r15
   8396b:	5d                   	pop    %rbp
   8396c:	c3                   	ret    
   8396d:	48 89 c3             	mov    %rax,%rbx
   83970:	48 8b 34 24          	mov    (%rsp),%rsi
   83974:	48 85 f6             	test   %rsi,%rsi
   83977:	74 10                	je     83989 <strategy_comm5::signal_trigger::SignalTrigger::windows_rsi_trigger+0x1f9>
   83979:	48 8b 7c 24 08       	mov    0x8(%rsp),%rdi
   8397e:	ba 01 00 00 00       	mov    $0x1,%edx
   83983:	ff 15 ef 02 08 00    	call   *0x802ef(%rip)        # 103c78 <_DYNAMIC+0x218>
   83989:	48 89 df             	mov    %rbx,%rdi
   8398c:	e8 ef 8b 07 00       	call   fc580 <_Unwind_Resume@plt>
   83991:	cc                   	int3   
   83992:	cc                   	int3   
   83993:	cc                   	int3   
   83994:	cc                   	int3   
   83995:	cc                   	int3   
   83996:	cc                   	int3   
   83997:	cc                   	int3   
   83998:	cc                   	int3   
   83999:	cc                   	int3   
   8399a:	cc                   	int3   
   8399b:	cc                   	int3   
   8399c:	cc                   	int3   
   8399d:	cc                   	int3   
   8399e:	cc                   	int3   
   8399f:	cc                   	int3   
