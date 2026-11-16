0000000000083f00 <strategy_comm5::signal_trigger::dynamic_threshold>:
   83f00:	48 89 f8             	mov    %rdi,%rax
   83f03:	66 0f 57 e4          	xorpd  %xmm4,%xmm4
   83f07:	66 0f 2e e1          	ucomisd %xmm1,%xmm4
   83f0b:	77 7c                	ja     83f89 <strategy_comm5::signal_trigger::dynamic_threshold+0x89>
   83f0d:	66 0f 2e e2          	ucomisd %xmm2,%xmm4
   83f11:	77 76                	ja     83f89 <strategy_comm5::signal_trigger::dynamic_threshold+0x89>
   83f13:	66 0f 2e c8          	ucomisd %xmm0,%xmm1
   83f17:	77 70                	ja     83f89 <strategy_comm5::signal_trigger::dynamic_threshold+0x89>
   83f19:	66 0f 28 25 9f 25 f9 	movapd -0x6da61(%rip),%xmm4        # 164c0 <GCC_except_table128+0x23c>
   83f20:	ff 
   83f21:	66 0f 54 e3          	andpd  %xmm3,%xmm4
   83f25:	f2 0f 10 2d b3 24 f9 	movsd  -0x6db4d(%rip),%xmm5        # 163e0 <GCC_except_table128+0x15c>
   83f2c:	ff 
   83f2d:	66 0f 2e ec          	ucomisd %xmm4,%xmm5
   83f31:	73 56                	jae    83f89 <strategy_comm5::signal_trigger::dynamic_threshold+0x89>
   83f33:	f2 0f 5c d1          	subsd  %xmm1,%xmm2
   83f37:	f2 0f 5f 15 09 24 f9 	maxsd  -0x6dbf7(%rip),%xmm2        # 16348 <GCC_except_table128+0xc4>
   83f3e:	ff 
   83f3f:	f2 0f 5c c1          	subsd  %xmm1,%xmm0
   83f43:	f2 0f 5e c2          	divsd  %xmm2,%xmm0
   83f47:	f2 0f 5d 05 19 24 f9 	minsd  -0x6dbe7(%rip),%xmm0        # 16368 <GCC_except_table128+0xe4>
   83f4e:	ff 
   83f4f:	f2 0f 59 d8          	mulsd  %xmm0,%xmm3
   83f53:	66 0f 54 1d 65 25 f9 	andpd  -0x6da9b(%rip),%xmm3        # 164c0 <GCC_except_table128+0x23c>
   83f5a:	ff 
   83f5b:	f2 0f 10 06          	movsd  (%rsi),%xmm0
   83f5f:	f2 0f 10 4e 18       	movsd  0x18(%rsi),%xmm1
   83f64:	f2 0f 5c c3          	subsd  %xmm3,%xmm0
   83f68:	f2 0f 5c cb          	subsd  %xmm3,%xmm1
   83f6c:	f2 0f 11 00          	movsd  %xmm0,(%rax)
   83f70:	66 0f 10 46 08       	movupd 0x8(%rsi),%xmm0
   83f75:	66 0f 70 d3 44       	pshufd $0x44,%xmm3,%xmm2
   83f7a:	66 0f 58 d0          	addpd  %xmm0,%xmm2
   83f7e:	66 0f 11 50 08       	movupd %xmm2,0x8(%rax)
   83f83:	f2 0f 11 48 18       	movsd  %xmm1,0x18(%rax)
   83f88:	c3                   	ret    
   83f89:	0f 10 06             	movups (%rsi),%xmm0
   83f8c:	0f 10 4e 10          	movups 0x10(%rsi),%xmm1
   83f90:	0f 11 48 10          	movups %xmm1,0x10(%rax)
   83f94:	0f 11 00             	movups %xmm0,(%rax)
   83f97:	c3                   	ret    
   83f98:	cc                   	int3   
   83f99:	cc                   	int3   
   83f9a:	cc                   	int3   
   83f9b:	cc                   	int3   
   83f9c:	cc                   	int3   
   83f9d:	cc                   	int3   
   83f9e:	cc                   	int3   
   83f9f:	cc                   	int3   
