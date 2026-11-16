0000000000081770 <strategy_comm5::vol_spread_ratio::VolSpreadRatio::update>:
   81770:	53                   	push   %rbx
   81771:	48 83 ec 20          	sub    $0x20,%rsp
   81775:	f2 0f 11 44 24 08    	movsd  %xmm0,0x8(%rsp)
   8177b:	48 89 fb             	mov    %rdi,%rbx
   8177e:	66 0f 28 c1          	movapd %xmm1,%xmm0
   81782:	f2 0f 58 c2          	addsd  %xmm2,%xmm0
   81786:	f2 0f 10 1d 32 4c f9 	movsd  -0x6b3ce(%rip),%xmm3        # 163c0 <GCC_except_table128+0x13c>
   8178d:	ff 
   8178e:	f2 0f 59 d8          	mulsd  %xmm0,%xmm3
   81792:	f2 0f 11 5c 24 18    	movsd  %xmm3,0x18(%rsp)
   81798:	f2 0f 5c d1          	subsd  %xmm1,%xmm2
   8179c:	f2 0f 5e d0          	divsd  %xmm0,%xmm2
   817a0:	f2 0f 59 15 50 4c f9 	mulsd  -0x6b3b0(%rip),%xmm2        # 163f8 <GCC_except_table128+0x174>
   817a7:	ff 
   817a8:	66 0f 28 c2          	movapd %xmm2,%xmm0
   817ac:	ff 15 3e 29 08 00    	call   *0x8293e(%rip)        # 1040f0 <_DYNAMIC+0x690>
   817b2:	66 0f 28 d8          	movapd %xmm0,%xmm3
   817b6:	48 8b 0b             	mov    (%rbx),%rcx
   817b9:	48 8b 43 18          	mov    0x18(%rbx),%rax
   817bd:	48 39 c8             	cmp    %rcx,%rax
   817c0:	75 22                	jne    817e4 <strategy_comm5::vol_spread_ratio::VolSpreadRatio::update+0x74>
   817c2:	48 8d 35 f7 d2 07 00 	lea    0x7d2f7(%rip),%rsi        # feac0 <anon.215e5a04abb1900b96ee677731a32036.29.llvm.5469470877335241632>
   817c9:	48 89 df             	mov    %rbx,%rdi
   817cc:	f2 0f 11 5c 24 10    	movsd  %xmm3,0x10(%rsp)
   817d2:	e8 79 84 ff ff       	call   79c50 <_ZN5alloc11collections9vec_deque21VecDeque$LT$T$C$A$GT$4grow17h7334a6b484480404E.llvm.10430611365073198366>
   817d7:	f2 0f 10 5c 24 10    	movsd  0x10(%rsp),%xmm3
   817dd:	48 8b 0b             	mov    (%rbx),%rcx
   817e0:	48 8b 43 18          	mov    0x18(%rbx),%rax
   817e4:	f2 0f 5e 1d c4 4b f9 	divsd  -0x6b43c(%rip),%xmm3        # 163b0 <GCC_except_table128+0x12c>
   817eb:	ff 
   817ec:	48 03 43 10          	add    0x10(%rbx),%rax
   817f0:	31 d2                	xor    %edx,%edx
   817f2:	48 39 c8             	cmp    %rcx,%rax
   817f5:	48 0f 43 d1          	cmovae %rcx,%rdx
   817f9:	48 29 d0             	sub    %rdx,%rax
   817fc:	48 8b 4b 08          	mov    0x8(%rbx),%rcx
   81800:	48 c1 e0 04          	shl    $0x4,%rax
   81804:	f2 0f 10 44 24 08    	movsd  0x8(%rsp),%xmm0
   8180a:	f2 0f 11 04 01       	movsd  %xmm0,(%rcx,%rax,1)
   8180f:	f2 0f 10 4c 24 18    	movsd  0x18(%rsp),%xmm1
   81815:	f2 0f 11 4c 01 08    	movsd  %xmm1,0x8(%rcx,%rax,1)
   8181b:	48 8b 43 18          	mov    0x18(%rbx),%rax
   8181f:	48 89 c1             	mov    %rax,%rcx
   81822:	48 ff c1             	inc    %rcx
   81825:	48 89 4b 18          	mov    %rcx,0x18(%rbx)
   81829:	0f 85 5b 01 00 00    	jne    8198a <strategy_comm5::vol_spread_ratio::VolSpreadRatio::update+0x21a>
   8182f:	48 8d bb b8 00 00 00 	lea    0xb8(%rbx),%rdi
   81836:	66 0f 28 cb          	movapd %xmm3,%xmm1
   8183a:	e8 81 0b 00 00       	call   823c0 <strategy_comm5::signal_trigger::TsQuantileCalculator::update>
   8183f:	48 8b 7b 18          	mov    0x18(%rbx),%rdi
   81843:	48 85 ff             	test   %rdi,%rdi
   81846:	0f 84 36 01 00 00    	je     81982 <strategy_comm5::vol_spread_ratio::VolSpreadRatio::update+0x212>
   8184c:	48 8b 73 10          	mov    0x10(%rbx),%rsi
   81850:	48 8b 0b             	mov    (%rbx),%rcx
   81853:	31 c0                	xor    %eax,%eax
   81855:	48 39 ce             	cmp    %rcx,%rsi
   81858:	49 89 c8             	mov    %rcx,%r8
   8185b:	4c 0f 42 c0          	cmovb  %rax,%r8
   8185f:	48 8d 14 37          	lea    (%rdi,%rsi,1),%rdx
   81863:	48 ff ca             	dec    %rdx
   81866:	48 39 ca             	cmp    %rcx,%rdx
   81869:	48 0f 42 c8          	cmovb  %rax,%rcx
   8186d:	48 83 ff 01          	cmp    $0x1,%rdi
   81871:	0f 84 85 01 00 00    	je     819fc <strategy_comm5::vol_spread_ratio::VolSpreadRatio::update+0x28c>
   81877:	48 8b 7b 08          	mov    0x8(%rbx),%rdi
   8187b:	4c 29 c6             	sub    %r8,%rsi
   8187e:	48 c1 e6 04          	shl    $0x4,%rsi
   81882:	f2 0f 10 44 24 08    	movsd  0x8(%rsp),%xmm0
   81888:	f2 0f 5c 04 37       	subsd  (%rdi,%rsi,1),%xmm0
   8188d:	f2 0f 10 8b 48 01 00 	movsd  0x148(%rbx),%xmm1
   81894:	00 
   81895:	f2 0f 59 0d 23 4b f9 	mulsd  -0x6b4dd(%rip),%xmm1        # 163c0 <GCC_except_table128+0x13c>
   8189c:	ff 
   8189d:	66 0f 2e c1          	ucomisd %xmm1,%xmm0
   818a1:	0f 82 d5 00 00 00    	jb     8197c <strategy_comm5::vol_spread_ratio::VolSpreadRatio::update+0x20c>
   818a7:	48 01 fe             	add    %rdi,%rsi
   818aa:	f2 0f 10 4e 08       	movsd  0x8(%rsi),%xmm1
   818af:	66 0f 57 c0          	xorpd  %xmm0,%xmm0
   818b3:	66 0f 2e c8          	ucomisd %xmm0,%xmm1
   818b7:	0f 86 c5 00 00 00    	jbe    81982 <strategy_comm5::vol_spread_ratio::VolSpreadRatio::update+0x212>
   818bd:	48 29 ca             	sub    %rcx,%rdx
   818c0:	48 c1 e2 04          	shl    $0x4,%rdx
   818c4:	f2 0f 10 44 17 08    	movsd  0x8(%rdi,%rdx,1),%xmm0
   818ca:	f2 0f 5e c1          	divsd  %xmm1,%xmm0
   818ce:	f2 0f 58 05 02 4a f9 	addsd  -0x6b5fe(%rip),%xmm0        # 162d8 <GCC_except_table128+0x54>
   818d5:	ff 
   818d6:	f2 0f 59 05 1a 4b f9 	mulsd  -0x6b4e6(%rip),%xmm0        # 163f8 <GCC_except_table128+0x174>
   818dd:	ff 
   818de:	ff 15 0c 28 08 00    	call   *0x8280c(%rip)        # 1040f0 <_DYNAMIC+0x690>
   818e4:	66 0f 28 c8          	movapd %xmm0,%xmm1
   818e8:	f2 0f 5e 0d c0 4a f9 	divsd  -0x6b540(%rip),%xmm1        # 163b0 <GCC_except_table128+0x12c>
   818ef:	ff 
   818f0:	48 8d 7b 28          	lea    0x28(%rbx),%rdi
   818f4:	f2 0f 10 44 24 08    	movsd  0x8(%rsp),%xmm0
   818fa:	e8 c1 0a 00 00       	call   823c0 <strategy_comm5::signal_trigger::TsQuantileCalculator::update>
   818ff:	48 8b 43 78          	mov    0x78(%rbx),%rax
   81903:	f2 0f 10 8b 10 01 00 	movsd  0x110(%rbx),%xmm1
   8190a:	00 
   8190b:	66 0f 57 e4          	xorpd  %xmm4,%xmm4
   8190f:	66 0f 2e cc          	ucomisd %xmm4,%xmm1
   81913:	0f 97 c1             	seta   %cl
   81916:	48 83 f8 02          	cmp    $0x2,%rax
   8191a:	ba 01 00 00 00       	mov    $0x1,%edx
   8191f:	48 0f 43 d0          	cmovae %rax,%rdx
   81923:	f2 0f 10 83 88 00 00 	movsd  0x88(%rbx),%xmm0
   8192a:	00 
   8192b:	66 48 0f 6e d2       	movq   %rdx,%xmm2
   81930:	66 0f 62 15 08 4d f9 	punpckldq -0x6b2f8(%rip),%xmm2        # 16640 <anon.1907589fa464e488346b0cbfb2429808.2.llvm.14402732174179579021+0x40>
   81937:	ff 
   81938:	66 0f 5c 15 c0 4b f9 	subpd  -0x6b440(%rip),%xmm2        # 16500 <anon.50e25bb1355b8971fc58210c29d1b4b6.2.llvm.1301231569978033549+0x30>
   8193f:	ff 
   81940:	66 0f 28 da          	movapd %xmm2,%xmm3
   81944:	66 0f 15 da          	unpckhpd %xmm2,%xmm3
   81948:	f2 0f 58 da          	addsd  %xmm2,%xmm3
   8194c:	f2 0f 5e c3          	divsd  %xmm3,%xmm0
   81950:	f2 0f 10 93 80 00 00 	movsd  0x80(%rbx),%xmm2
   81957:	00 
   81958:	f2 0f 59 d2          	mulsd  %xmm2,%xmm2
   8195c:	f2 0f 5c c2          	subsd  %xmm2,%xmm0
   81960:	f2 0f 5f c4          	maxsd  %xmm4,%xmm0
   81964:	f2 0f 51 c0          	sqrtsd %xmm0,%xmm0
   81968:	f2 0f 11 83 90 00 00 	movsd  %xmm0,0x90(%rbx)
   8196f:	00 
   81970:	0f 93 c0             	setae  %al
   81973:	20 c8                	and    %cl,%al
   81975:	f2 0f 5e c1          	divsd  %xmm1,%xmm0
   81979:	0f b6 c0             	movzbl %al,%eax
   8197c:	48 83 c4 20          	add    $0x20,%rsp
   81980:	5b                   	pop    %rbx
   81981:	c3                   	ret    
   81982:	31 c0                	xor    %eax,%eax
   81984:	48 83 c4 20          	add    $0x20,%rsp
   81988:	5b                   	pop    %rbx
   81989:	c3                   	ret    
   8198a:	48 8b 0b             	mov    (%rbx),%rcx
   8198d:	48 8b 53 08          	mov    0x8(%rbx),%rdx
   81991:	f2 0f 10 53 20       	movsd  0x20(%rbx),%xmm2
   81996:	48 8b 73 10          	mov    0x10(%rbx),%rsi
   8199a:	eb 1c                	jmp    819b8 <strategy_comm5::vol_spread_ratio::VolSpreadRatio::update+0x248>
   8199c:	0f 1f 40 00          	nopl   0x0(%rax)
   819a0:	48 89 cf             	mov    %rcx,%rdi
   819a3:	48 29 fe             	sub    %rdi,%rsi
   819a6:	48 89 73 10          	mov    %rsi,0x10(%rbx)
   819aa:	48 89 43 18          	mov    %rax,0x18(%rbx)
   819ae:	48 83 c0 ff          	add    $0xffffffffffffffff,%rax
   819b2:	0f 83 77 fe ff ff    	jae    8182f <strategy_comm5::vol_spread_ratio::VolSpreadRatio::update+0xbf>
   819b8:	48 39 ce             	cmp    %rcx,%rsi
   819bb:	72 13                	jb     819d0 <strategy_comm5::vol_spread_ratio::VolSpreadRatio::update+0x260>
   819bd:	48 89 cf             	mov    %rcx,%rdi
   819c0:	eb 10                	jmp    819d2 <strategy_comm5::vol_spread_ratio::VolSpreadRatio::update+0x262>
   819c2:	66 66 66 66 66 2e 0f 	data16 data16 data16 data16 cs nopw 0x0(%rax,%rax,1)
   819c9:	1f 84 00 00 00 00 00 
   819d0:	31 ff                	xor    %edi,%edi
   819d2:	49 89 f0             	mov    %rsi,%r8
   819d5:	49 29 f8             	sub    %rdi,%r8
   819d8:	49 c1 e0 04          	shl    $0x4,%r8
   819dc:	66 0f 28 c8          	movapd %xmm0,%xmm1
   819e0:	f2 42 0f 5c 0c 02    	subsd  (%rdx,%r8,1),%xmm1
   819e6:	66 0f 2e ca          	ucomisd %xmm2,%xmm1
   819ea:	0f 86 3f fe ff ff    	jbe    8182f <strategy_comm5::vol_spread_ratio::VolSpreadRatio::update+0xbf>
   819f0:	48 ff c6             	inc    %rsi
   819f3:	48 39 ce             	cmp    %rcx,%rsi
   819f6:	73 a8                	jae    819a0 <strategy_comm5::vol_spread_ratio::VolSpreadRatio::update+0x230>
   819f8:	31 ff                	xor    %edi,%edi
   819fa:	eb a7                	jmp    819a3 <strategy_comm5::vol_spread_ratio::VolSpreadRatio::update+0x233>
   819fc:	48 83 c4 20          	add    $0x20,%rsp
   81a00:	5b                   	pop    %rbx
   81a01:	c3                   	ret    
   81a02:	cc                   	int3   
   81a03:	cc                   	int3   
   81a04:	cc                   	int3   
   81a05:	cc                   	int3   
   81a06:	cc                   	int3   
   81a07:	cc                   	int3   
   81a08:	cc                   	int3   
   81a09:	cc                   	int3   
   81a0a:	cc                   	int3   
   81a0b:	cc                   	int3   
   81a0c:	cc                   	int3   
   81a0d:	cc                   	int3   
   81a0e:	cc                   	int3   
   81a0f:	cc                   	int3   
