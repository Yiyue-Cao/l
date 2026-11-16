0000000000082bd0 <strategy_comm5::signal_trigger::SignalTrigger::point_signal_trigger_pv4>:
   82bd0:	48 89 f8             	mov    %rdi,%rax
   82bd3:	f2 0f 10 5e 38       	movsd  0x38(%rsi),%xmm3
   82bd8:	66 0f 54 15 e0 38 f9 	andpd  -0x6c720(%rip),%xmm2        # 164c0 <GCC_except_table128+0x23c>
   82bdf:	ff 
   82be0:	f2 0f 58 d1          	addsd  %xmm1,%xmm2
   82be4:	f2 0f 59 d0          	mulsd  %xmm0,%xmm2
   82be8:	66 0f 57 c0          	xorpd  %xmm0,%xmm0
   82bec:	66 0f 2e d8          	ucomisd %xmm0,%xmm3
   82bf0:	76 26                	jbe    82c18 <strategy_comm5::signal_trigger::SignalTrigger::point_signal_trigger_pv4+0x48>
   82bf2:	f2 0f 5c da          	subsd  %xmm2,%xmm3
   82bf6:	f2 0f 5f d8          	maxsd  %xmm0,%xmm3
   82bfa:	66 0f 28 d3          	movapd %xmm3,%xmm2
   82bfe:	66 0f 2e 56 40       	ucomisd 0x40(%rsi),%xmm2
   82c03:	72 22                	jb     82c27 <strategy_comm5::signal_trigger::SignalTrigger::point_signal_trigger_pv4+0x57>
   82c05:	31 c9                	xor    %ecx,%ecx
   82c07:	88 08                	mov    %cl,(%rax)
   82c09:	48 b9 00 00 00 00 00 	movabs $0x3ff0000000000000,%rcx
   82c10:	00 f0 3f 
   82c13:	48 89 48 08          	mov    %rcx,0x8(%rax)
   82c17:	c3                   	ret    
   82c18:	f2 0f 58 d3          	addsd  %xmm3,%xmm2
   82c1c:	f2 0f 5d d0          	minsd  %xmm0,%xmm2
   82c20:	66 0f 2e 56 40       	ucomisd 0x40(%rsi),%xmm2
   82c25:	73 de                	jae    82c05 <strategy_comm5::signal_trigger::SignalTrigger::point_signal_trigger_pv4+0x35>
   82c27:	b1 03                	mov    $0x3,%cl
   82c29:	66 0f 2e 56 58       	ucomisd 0x58(%rsi),%xmm2
   82c2e:	73 d7                	jae    82c07 <strategy_comm5::signal_trigger::SignalTrigger::point_signal_trigger_pv4+0x37>
   82c30:	f2 0f 10 46 50       	movsd  0x50(%rsi),%xmm0
   82c35:	b1 02                	mov    $0x2,%cl
   82c37:	66 0f 2e c2          	ucomisd %xmm2,%xmm0
   82c3b:	73 ca                	jae    82c07 <strategy_comm5::signal_trigger::SignalTrigger::point_signal_trigger_pv4+0x37>
   82c3d:	f2 0f 10 46 48       	movsd  0x48(%rsi),%xmm0
   82c42:	b1 04                	mov    $0x4,%cl
   82c44:	66 0f 2e c2          	ucomisd %xmm2,%xmm0
   82c48:	72 bd                	jb     82c07 <strategy_comm5::signal_trigger::SignalTrigger::point_signal_trigger_pv4+0x37>
   82c4a:	b1 01                	mov    $0x1,%cl
   82c4c:	88 08                	mov    %cl,(%rax)
   82c4e:	48 b9 00 00 00 00 00 	movabs $0x3ff0000000000000,%rcx
   82c55:	00 f0 3f 
   82c58:	48 89 48 08          	mov    %rcx,0x8(%rax)
   82c5c:	c3                   	ret    
   82c5d:	cc                   	int3   
   82c5e:	cc                   	int3   
   82c5f:	cc                   	int3   
