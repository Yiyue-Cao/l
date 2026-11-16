000000000003b040 <strategy_comm5::Comm5Params::signal_trigger_mode>:
   3b040:	48 83 c6 ef          	add    $0xffffffffffffffef,%rsi
   3b044:	48 83 fe 05          	cmp    $0x5,%rsi
   3b048:	0f 87 f3 00 00 00    	ja     3b141 <strategy_comm5::Comm5Params::signal_trigger_mode+0x101>
   3b04e:	48 8d 05 4b bc fd ff 	lea    -0x243b5(%rip),%rax        # 16ca0 <anon.8d7226ba1ba94417efa9e0a1e98803de.1.llvm.16032588982719308145+0xf0>
   3b055:	48 63 0c b0          	movslq (%rax,%rsi,4),%rcx
   3b059:	48 01 c1             	add    %rax,%rcx
   3b05c:	ff e1                	jmp    *%rcx
   3b05e:	f3 0f 6f 07          	movdqu (%rdi),%xmm0
   3b062:	0f b6 47 10          	movzbl 0x10(%rdi),%eax
   3b066:	66 0f 6e c8          	movd   %eax,%xmm1
   3b06a:	66 0f 74 05 fe ba fd 	pcmpeqb -0x24502(%rip),%xmm0        # 16b70 <anon.2bc08f40ad58cb635718c2f09dbb11ab.6.llvm.4096812584824358744+0x290>
   3b071:	ff 
   3b072:	66 0f 74 0d 56 b8 fd 	pcmpeqb -0x247aa(%rip),%xmm1        # 168d0 <anon.1907589fa464e488346b0cbfb2429808.2.llvm.14402732174179579021+0x2d0>
   3b079:	ff 
   3b07a:	66 0f db c8          	pand   %xmm0,%xmm1
   3b07e:	66 0f d7 c1          	pmovmskb %xmm1,%eax
   3b082:	3d ff ff 00 00       	cmp    $0xffff,%eax
   3b087:	0f 84 b7 00 00 00    	je     3b144 <strategy_comm5::Comm5Params::signal_trigger_mode+0x104>
   3b08d:	48 b8 73 69 54 72 69 	movabs $0x6567676972546973,%rax
   3b094:	67 67 65 
   3b097:	48 33 47 08          	xor    0x8(%rdi),%rax
   3b09b:	48 b9 57 69 6e 64 6f 	movabs $0x5273776f646e6957,%rcx
   3b0a2:	77 73 52 
   3b0a5:	48 33 0f             	xor    (%rdi),%rcx
   3b0a8:	0f b6 57 10          	movzbl 0x10(%rdi),%edx
   3b0ac:	48 83 f2 72          	xor    $0x72,%rdx
   3b0b0:	48 09 ca             	or     %rcx,%rdx
   3b0b3:	31 c9                	xor    %ecx,%ecx
   3b0b5:	48 09 c2             	or     %rax,%rdx
   3b0b8:	0f 94 c1             	sete   %cl
   3b0bb:	8d 04 89             	lea    (%rcx,%rcx,4),%eax
   3b0be:	c3                   	ret    
   3b0bf:	66 0f 6e 47 10       	movd   0x10(%rdi),%xmm0
   3b0c4:	66 0f 74 05 e4 b7 fd 	pcmpeqb -0x2481c(%rip),%xmm0        # 168b0 <anon.1907589fa464e488346b0cbfb2429808.2.llvm.14402732174179579021+0x2b0>
   3b0cb:	ff 
   3b0cc:	f3 0f 6f 0f          	movdqu (%rdi),%xmm1
   3b0d0:	66 0f 74 0d e8 b7 fd 	pcmpeqb -0x24818(%rip),%xmm1        # 168c0 <anon.1907589fa464e488346b0cbfb2429808.2.llvm.14402732174179579021+0x2c0>
   3b0d7:	ff 
   3b0d8:	66 0f db c8          	pand   %xmm0,%xmm1
   3b0dc:	66 0f d7 c1          	pmovmskb %xmm1,%eax
   3b0e0:	3d ff ff 00 00       	cmp    $0xffff,%eax
   3b0e5:	0f 94 c0             	sete   %al
   3b0e8:	c0 e0 02             	shl    $0x2,%al
   3b0eb:	c3                   	ret    
   3b0ec:	f3 0f 6f 07          	movdqu (%rdi),%xmm0
   3b0f0:	0f b7 47 10          	movzwl 0x10(%rdi),%eax
   3b0f4:	66 0f 6e c8          	movd   %eax,%xmm1
   3b0f8:	66 0f 74 05 90 b6 fd 	pcmpeqb -0x24970(%rip),%xmm0        # 16790 <anon.1907589fa464e488346b0cbfb2429808.2.llvm.14402732174179579021+0x190>
   3b0ff:	ff 
   3b100:	66 0f 74 0d 28 b6 fd 	pcmpeqb -0x249d8(%rip),%xmm1        # 16730 <anon.1907589fa464e488346b0cbfb2429808.2.llvm.14402732174179579021+0x130>
   3b107:	ff 
   3b108:	66 0f db c8          	pand   %xmm0,%xmm1
   3b10c:	66 0f d7 c1          	pmovmskb %xmm1,%eax
   3b110:	3d ff ff 00 00       	cmp    $0xffff,%eax
   3b115:	0f 94 c0             	sete   %al
   3b118:	c3                   	ret    
   3b119:	f3 0f 6f 07          	movdqu (%rdi),%xmm0
   3b11d:	f3 0f 6f 4f 06       	movdqu 0x6(%rdi),%xmm1
   3b122:	66 0f 74 0d b6 ba fd 	pcmpeqb -0x2454a(%rip),%xmm1        # 16be0 <anon.8d7226ba1ba94417efa9e0a1e98803de.1.llvm.16032588982719308145+0x30>
   3b129:	ff 
   3b12a:	66 0f 74 05 8e b6 fd 	pcmpeqb -0x24972(%rip),%xmm0        # 167c0 <anon.1907589fa464e488346b0cbfb2429808.2.llvm.14402732174179579021+0x1c0>
   3b131:	ff 
   3b132:	66 0f db c1          	pand   %xmm1,%xmm0
   3b136:	66 0f d7 c0          	pmovmskb %xmm0,%eax
   3b13a:	3d ff ff 00 00       	cmp    $0xffff,%eax
   3b13f:	74 06                	je     3b147 <strategy_comm5::Comm5Params::signal_trigger_mode+0x107>
   3b141:	31 c0                	xor    %eax,%eax
   3b143:	c3                   	ret    
   3b144:	b0 02                	mov    $0x2,%al
   3b146:	c3                   	ret    
   3b147:	b0 03                	mov    $0x3,%al
   3b149:	c3                   	ret    
   3b14a:	cc                   	int3   
   3b14b:	cc                   	int3   
   3b14c:	cc                   	int3   
   3b14d:	cc                   	int3   
   3b14e:	cc                   	int3   
   3b14f:	cc                   	int3   
