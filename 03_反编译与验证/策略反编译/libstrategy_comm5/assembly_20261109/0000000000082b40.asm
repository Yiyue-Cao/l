0000000000082b40 <strategy_comm5::signal_trigger::SignalTrigger::point_signal_trigger_pv1_spread>:
   82b40:	48 89 f8             	mov    %rdi,%rax
   82b43:	f2 0f 10 56 38       	movsd  0x38(%rsi),%xmm2
   82b48:	66 0f 54 0d 70 39 f9 	andpd  -0x6c690(%rip),%xmm1        # 164c0 <GCC_except_table128+0x23c>
   82b4f:	ff 
   82b50:	f2 0f 59 c8          	mulsd  %xmm0,%xmm1
   82b54:	66 0f 57 c0          	xorpd  %xmm0,%xmm0
   82b58:	66 0f 2e d0          	ucomisd %xmm0,%xmm2
   82b5c:	76 26                	jbe    82b84 <strategy_comm5::signal_trigger::SignalTrigger::point_signal_trigger_pv1_spread+0x44>
   82b5e:	f2 0f 5c d1          	subsd  %xmm1,%xmm2
   82b62:	f2 0f 5f d0          	maxsd  %xmm0,%xmm2
   82b66:	66 0f 28 ca          	movapd %xmm2,%xmm1
   82b6a:	66 0f 2e 4e 40       	ucomisd 0x40(%rsi),%xmm1
   82b6f:	72 22                	jb     82b93 <strategy_comm5::signal_trigger::SignalTrigger::point_signal_trigger_pv1_spread+0x53>
   82b71:	31 c9                	xor    %ecx,%ecx
   82b73:	88 08                	mov    %cl,(%rax)
   82b75:	48 b9 00 00 00 00 00 	movabs $0x3ff0000000000000,%rcx
   82b7c:	00 f0 3f 
   82b7f:	48 89 48 08          	mov    %rcx,0x8(%rax)
   82b83:	c3                   	ret    
   82b84:	f2 0f 58 ca          	addsd  %xmm2,%xmm1
   82b88:	f2 0f 5d c8          	minsd  %xmm0,%xmm1
   82b8c:	66 0f 2e 4e 40       	ucomisd 0x40(%rsi),%xmm1
   82b91:	73 de                	jae    82b71 <strategy_comm5::signal_trigger::SignalTrigger::point_signal_trigger_pv1_spread+0x31>
   82b93:	b1 03                	mov    $0x3,%cl
   82b95:	66 0f 2e 4e 58       	ucomisd 0x58(%rsi),%xmm1
   82b9a:	73 d7                	jae    82b73 <strategy_comm5::signal_trigger::SignalTrigger::point_signal_trigger_pv1_spread+0x33>
   82b9c:	f2 0f 10 46 50       	movsd  0x50(%rsi),%xmm0
   82ba1:	b1 02                	mov    $0x2,%cl
   82ba3:	66 0f 2e c1          	ucomisd %xmm1,%xmm0
   82ba7:	73 ca                	jae    82b73 <strategy_comm5::signal_trigger::SignalTrigger::point_signal_trigger_pv1_spread+0x33>
   82ba9:	f2 0f 10 46 48       	movsd  0x48(%rsi),%xmm0
   82bae:	b1 04                	mov    $0x4,%cl
   82bb0:	66 0f 2e c1          	ucomisd %xmm1,%xmm0
   82bb4:	72 bd                	jb     82b73 <strategy_comm5::signal_trigger::SignalTrigger::point_signal_trigger_pv1_spread+0x33>
   82bb6:	b1 01                	mov    $0x1,%cl
   82bb8:	88 08                	mov    %cl,(%rax)
   82bba:	48 b9 00 00 00 00 00 	movabs $0x3ff0000000000000,%rcx
   82bc1:	00 f0 3f 
   82bc4:	48 89 48 08          	mov    %rcx,0x8(%rax)
   82bc8:	c3                   	ret    
   82bc9:	cc                   	int3   
   82bca:	cc                   	int3   
   82bcb:	cc                   	int3   
   82bcc:	cc                   	int3   
   82bcd:	cc                   	int3   
   82bce:	cc                   	int3   
   82bcf:	cc                   	int3   
