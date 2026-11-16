0000000000082e80 <strategy_comm5::signal_trigger::SignalTrigger::windows_quantile_trigger>:
   82e80:	55                   	push   %rbp
   82e81:	41 57                	push   %r15
   82e83:	41 56                	push   %r14
   82e85:	41 55                	push   %r13
   82e87:	41 54                	push   %r12
   82e89:	53                   	push   %rbx
   82e8a:	48 81 ec c8 00 00 00 	sub    $0xc8,%rsp
   82e91:	f2 0f 11 8c 24 a8 00 	movsd  %xmm1,0xa8(%rsp)
   82e98:	00 00 
   82e9a:	48 89 fb             	mov    %rdi,%rbx
   82e9d:	48 c7 44 24 08 00 00 	movq   $0x0,0x8(%rsp)
   82ea4:	00 00 
   82ea6:	48 c7 44 24 10 01 00 	movq   $0x1,0x10(%rsp)
   82ead:	00 00 
   82eaf:	48 c7 44 24 18 00 00 	movq   $0x0,0x18(%rsp)
   82eb6:	00 00 
   82eb8:	4c 8b 2e             	mov    (%rsi),%r13
   82ebb:	48 8b 4e 18          	mov    0x18(%rsi),%rcx
   82ebf:	66 41 0f 6f 4d 00    	movdqa 0x0(%r13),%xmm1
   82ec5:	66 0f d7 c1          	pmovmskb %xmm1,%eax
   82ec9:	49 8d 6d 10          	lea    0x10(%r13),%rbp
   82ecd:	66 0f ef c9          	pxor   %xmm1,%xmm1
   82ed1:	66 0f 2e c8          	ucomisd %xmm0,%xmm1
   82ed5:	0f 87 49 04 00 00    	ja     83324 <strategy_comm5::signal_trigger::SignalTrigger::windows_quantile_trigger+0x4a4>
   82edb:	66 0f 2e 05 85 34 f9 	ucomisd -0x6cb7b(%rip),%xmm0        # 16368 <GCC_except_table128+0xe4>
   82ee2:	ff 
   82ee3:	0f 87 3b 04 00 00    	ja     83324 <strategy_comm5::signal_trigger::SignalTrigger::windows_quantile_trigger+0x4a4>
   82ee9:	41 89 c4             	mov    %eax,%r12d
   82eec:	41 f7 d4             	not    %r12d
   82eef:	f2 0f 10 0d 71 34 f9 	movsd  -0x6cb8f(%rip),%xmm1        # 16368 <GCC_except_table128+0xe4>
   82ef6:	ff 
   82ef7:	66 0f 29 84 24 b0 00 	movapd %xmm0,0xb0(%rsp)
   82efe:	00 00 
   82f00:	f2 0f 5c c8          	subsd  %xmm0,%xmm1
   82f04:	66 0f 57 c0          	xorpd  %xmm0,%xmm0
   82f08:	66 0f 2e c1          	ucomisd %xmm1,%xmm0
   82f0c:	0f 87 47 04 00 00    	ja     83359 <strategy_comm5::signal_trigger::SignalTrigger::windows_quantile_trigger+0x4d9>
   82f12:	66 0f 2e 0d 4e 34 f9 	ucomisd -0x6cbb2(%rip),%xmm1        # 16368 <GCC_except_table128+0xe4>
   82f19:	ff 
   82f1a:	0f 87 39 04 00 00    	ja     83359 <strategy_comm5::signal_trigger::SignalTrigger::windows_quantile_trigger+0x4d9>
   82f20:	f2 0f 11 8c 24 a0 00 	movsd  %xmm1,0xa0(%rsp)
   82f27:	00 00 
   82f29:	48 85 c9             	test   %rcx,%rcx
   82f2c:	0f 84 b1 05 00 00    	je     834e3 <strategy_comm5::signal_trigger::SignalTrigger::windows_quantile_trigger+0x663>
   82f32:	f2 0f 10 46 40       	movsd  0x40(%rsi),%xmm0
   82f37:	f2 0f 11 84 24 88 00 	movsd  %xmm0,0x88(%rsp)
   82f3e:	00 00 
   82f40:	f2 0f 10 46 58       	movsd  0x58(%rsi),%xmm0
   82f45:	f2 0f 11 44 24 78    	movsd  %xmm0,0x78(%rsp)
   82f4b:	f2 0f 10 46 50       	movsd  0x50(%rsi),%xmm0
   82f50:	f2 0f 11 44 24 70    	movsd  %xmm0,0x70(%rsp)
   82f56:	f3 0f 7e 46 48       	movq   0x48(%rsi),%xmm0
   82f5b:	66 0f d6 44 24 68    	movq   %xmm0,0x68(%rsp)
   82f61:	b8 01 00 00 00       	mov    $0x1,%eax
   82f66:	48 89 84 24 80 00 00 	mov    %rax,0x80(%rsp)
   82f6d:	00 
   82f6e:	48 c7 04 24 00 00 00 	movq   $0x0,(%rsp)
   82f75:	00 
   82f76:	48 89 8c 24 98 00 00 	mov    %rcx,0x98(%rsp)
   82f7d:	00 
   82f7e:	66 45 85 e4          	test   %r12w,%r12w
   82f82:	75 2d                	jne    82fb1 <strategy_comm5::signal_trigger::SignalTrigger::windows_quantile_trigger+0x131>
   82f84:	66 66 66 2e 0f 1f 84 	data16 data16 cs nopw 0x0(%rax,%rax,1)
   82f8b:	00 00 00 00 00 
   82f90:	66 0f 6f 45 00       	movdqa 0x0(%rbp),%xmm0
   82f95:	66 44 0f d7 e0       	pmovmskb %xmm0,%r12d
   82f9a:	49 81 c5 80 f6 ff ff 	add    $0xfffffffffffff680,%r13
   82fa1:	48 83 c5 10          	add    $0x10,%rbp
   82fa5:	41 81 fc ff ff 00 00 	cmp    $0xffff,%r12d
   82fac:	74 e2                	je     82f90 <strategy_comm5::signal_trigger::SignalTrigger::windows_quantile_trigger+0x110>
   82fae:	41 f7 d4             	not    %r12d
   82fb1:	f3 41 0f bc c4       	tzcnt  %r12d,%eax
   82fb6:	48 f7 d8             	neg    %rax
   82fb9:	4c 69 f0 98 00 00 00 	imul   $0x98,%rax,%r14
   82fc0:	4f 8b 7c 35 a0       	mov    -0x60(%r13,%r14,1),%r15
   82fc5:	4d 85 ff             	test   %r15,%r15
   82fc8:	0f 84 e1 04 00 00    	je     834af <strategy_comm5::signal_trigger::SignalTrigger::windows_quantile_trigger+0x62f>
   82fce:	66 49 0f 6e c7       	movq   %r15,%xmm0
   82fd3:	66 0f 62 05 65 36 f9 	punpckldq -0x6c99b(%rip),%xmm0        # 16640 <anon.1907589fa464e488346b0cbfb2429808.2.llvm.14402732174179579021+0x40>
   82fda:	ff 
   82fdb:	66 0f 5c 05 1d 35 f9 	subpd  -0x6cae3(%rip),%xmm0        # 16500 <anon.50e25bb1355b8971fc58210c29d1b4b6.2.llvm.1301231569978033549+0x30>
   82fe2:	ff 
   82fe3:	66 0f 28 c8          	movapd %xmm0,%xmm1
   82fe7:	66 0f 15 c8          	unpckhpd %xmm0,%xmm1
   82feb:	f2 0f 58 c8          	addsd  %xmm0,%xmm1
   82fef:	f2 0f 59 8c 24 b0 00 	mulsd  0xb0(%rsp),%xmm1
   82ff6:	00 00 
   82ff8:	f2 48 0f 2c c1       	cvttsd2si %xmm1,%rax
   82ffd:	4d 01 ee             	add    %r13,%r14
   83000:	48 89 c1             	mov    %rax,%rcx
   83003:	48 c1 f9 3f          	sar    $0x3f,%rcx
   83007:	66 0f 28 c1          	movapd %xmm1,%xmm0
   8300b:	f2 0f 5c 05 7d 33 f9 	subsd  -0x6cc83(%rip),%xmm0        # 16390 <GCC_except_table128+0x10c>
   83012:	ff 
   83013:	f2 48 0f 2c d0       	cvttsd2si %xmm0,%rdx
   83018:	48 21 ca             	and    %rcx,%rdx
   8301b:	48 09 c2             	or     %rax,%rdx
   8301e:	66 0f 2e 0d 62 33 f9 	ucomisd -0x6cc9e(%rip),%xmm1        # 16388 <GCC_except_table128+0x104>
   83025:	ff 
   83026:	b8 00 00 00 00       	mov    $0x0,%eax
   8302b:	48 0f 43 c2          	cmovae %rdx,%rax
   8302f:	66 0f 2e 0d 81 32 f9 	ucomisd -0x6cd7f(%rip),%xmm1        # 162b8 <GCC_except_table128+0x34>
   83036:	ff 
   83037:	48 c7 c1 ff ff ff ff 	mov    $0xffffffffffffffff,%rcx
   8303e:	48 0f 47 c1          	cmova  %rcx,%rax
   83042:	49 8b 4e 90          	mov    -0x70(%r14),%rcx
   83046:	49 8b 56 98          	mov    -0x68(%r14),%rdx
   8304a:	31 f6                	xor    %esi,%esi
   8304c:	48 85 c9             	test   %rcx,%rcx
   8304f:	40 0f 95 c6          	setne  %sil
   83053:	4c 89 ff             	mov    %r15,%rdi
   83056:	48 0f 44 f9          	cmove  %rcx,%rdi
   8305a:	48 89 74 24 20       	mov    %rsi,0x20(%rsp)
   8305f:	48 c7 44 24 28 00 00 	movq   $0x0,0x28(%rsp)
   83066:	00 00 
   83068:	48 89 4c 24 30       	mov    %rcx,0x30(%rsp)
   8306d:	48 89 54 24 38       	mov    %rdx,0x38(%rsp)
   83072:	48 89 74 24 40       	mov    %rsi,0x40(%rsp)
   83077:	48 c7 44 24 48 00 00 	movq   $0x0,0x48(%rsp)
   8307e:	00 00 
   83080:	48 89 4c 24 50       	mov    %rcx,0x50(%rsp)
   83085:	48 89 54 24 58       	mov    %rdx,0x58(%rsp)
   8308a:	48 89 7c 24 60       	mov    %rdi,0x60(%rsp)
   8308f:	48 85 c0             	test   %rax,%rax
   83092:	74 24                	je     830b8 <strategy_comm5::signal_trigger::SignalTrigger::windows_quantile_trigger+0x238>
   83094:	4c 39 f8             	cmp    %r15,%rax
   83097:	4c 0f 42 f8          	cmovb  %rax,%r15
   8309b:	0f 1f 44 00 00       	nopl   0x0(%rax,%rax,1)
   830a0:	48 8d 7c 24 20       	lea    0x20(%rsp),%rdi
   830a5:	e8 b6 e4 fe ff       	call   71560 <<alloc::collections::btree::map::Iter<K,V> as core::iter::traits::iterator::Iterator>::next>
   830aa:	48 85 c0             	test   %rax,%rax
   830ad:	0f 84 fc 03 00 00    	je     834af <strategy_comm5::signal_trigger::SignalTrigger::windows_quantile_trigger+0x62f>
   830b3:	49 ff cf             	dec    %r15
   830b6:	75 e8                	jne    830a0 <strategy_comm5::signal_trigger::SignalTrigger::windows_quantile_trigger+0x220>
   830b8:	48 8d 7c 24 20       	lea    0x20(%rsp),%rdi
   830bd:	e8 9e e4 fe ff       	call   71560 <<alloc::collections::btree::map::Iter<K,V> as core::iter::traits::iterator::Iterator>::next>
   830c2:	48 85 c0             	test   %rax,%rax
   830c5:	0f 84 e4 03 00 00    	je     834af <strategy_comm5::signal_trigger::SignalTrigger::windows_quantile_trigger+0x62f>
   830cb:	4d 8b 7e a0          	mov    -0x60(%r14),%r15
   830cf:	4d 85 ff             	test   %r15,%r15
   830d2:	0f 84 d7 03 00 00    	je     834af <strategy_comm5::signal_trigger::SignalTrigger::windows_quantile_trigger+0x62f>
   830d8:	66 49 0f 6e c7       	movq   %r15,%xmm0
   830dd:	66 0f 62 05 5b 35 f9 	punpckldq -0x6caa5(%rip),%xmm0        # 16640 <anon.1907589fa464e488346b0cbfb2429808.2.llvm.14402732174179579021+0x40>
   830e4:	ff 
   830e5:	66 0f 5c 05 13 34 f9 	subpd  -0x6cbed(%rip),%xmm0        # 16500 <anon.50e25bb1355b8971fc58210c29d1b4b6.2.llvm.1301231569978033549+0x30>
   830ec:	ff 
   830ed:	66 0f 28 c8          	movapd %xmm0,%xmm1
   830f1:	66 0f 15 c8          	unpckhpd %xmm0,%xmm1
   830f5:	f2 0f 58 c8          	addsd  %xmm0,%xmm1
   830f9:	f2 0f 59 8c 24 a0 00 	mulsd  0xa0(%rsp),%xmm1
   83100:	00 00 
   83102:	f2 48 0f 2c c9       	cvttsd2si %xmm1,%rcx
   83107:	48 89 ca             	mov    %rcx,%rdx
   8310a:	48 c1 fa 3f          	sar    $0x3f,%rdx
   8310e:	66 0f 28 c1          	movapd %xmm1,%xmm0
   83112:	f2 0f 5c 05 76 32 f9 	subsd  -0x6cd8a(%rip),%xmm0        # 16390 <GCC_except_table128+0x10c>
   83119:	ff 
   8311a:	f2 48 0f 2c f0       	cvttsd2si %xmm0,%rsi
   8311f:	48 21 d6             	and    %rdx,%rsi
   83122:	48 09 ce             	or     %rcx,%rsi
   83125:	66 0f 2e 0d 5b 32 f9 	ucomisd -0x6cda5(%rip),%xmm1        # 16388 <GCC_except_table128+0x104>
   8312c:	ff 
   8312d:	b9 00 00 00 00       	mov    $0x0,%ecx
   83132:	48 0f 43 ce          	cmovae %rsi,%rcx
   83136:	66 0f 2e 0d 7a 31 f9 	ucomisd -0x6ce86(%rip),%xmm1        # 162b8 <GCC_except_table128+0x34>
   8313d:	ff 
   8313e:	48 c7 c2 ff ff ff ff 	mov    $0xffffffffffffffff,%rdx
   83145:	48 0f 47 ca          	cmova  %rdx,%rcx
   83149:	f2 0f 10 00          	movsd  (%rax),%xmm0
   8314d:	f2 0f 11 84 24 90 00 	movsd  %xmm0,0x90(%rsp)
   83154:	00 00 
   83156:	49 8b 46 90          	mov    -0x70(%r14),%rax
   8315a:	49 8b 56 98          	mov    -0x68(%r14),%rdx
   8315e:	31 f6                	xor    %esi,%esi
   83160:	48 85 c0             	test   %rax,%rax
   83163:	40 0f 95 c6          	setne  %sil
   83167:	4c 89 ff             	mov    %r15,%rdi
   8316a:	48 0f 44 f8          	cmove  %rax,%rdi
   8316e:	48 89 74 24 20       	mov    %rsi,0x20(%rsp)
   83173:	48 c7 44 24 28 00 00 	movq   $0x0,0x28(%rsp)
   8317a:	00 00 
   8317c:	48 89 44 24 30       	mov    %rax,0x30(%rsp)
   83181:	48 89 54 24 38       	mov    %rdx,0x38(%rsp)
   83186:	48 89 74 24 40       	mov    %rsi,0x40(%rsp)
   8318b:	48 c7 44 24 48 00 00 	movq   $0x0,0x48(%rsp)
   83192:	00 00 
   83194:	48 89 44 24 50       	mov    %rax,0x50(%rsp)
   83199:	48 89 54 24 58       	mov    %rdx,0x58(%rsp)
   8319e:	48 89 7c 24 60       	mov    %rdi,0x60(%rsp)
   831a3:	48 85 c9             	test   %rcx,%rcx
   831a6:	74 20                	je     831c8 <strategy_comm5::signal_trigger::SignalTrigger::windows_quantile_trigger+0x348>
   831a8:	4c 39 f9             	cmp    %r15,%rcx
   831ab:	4c 0f 42 f9          	cmovb  %rcx,%r15
   831af:	90                   	nop
   831b0:	48 8d 7c 24 20       	lea    0x20(%rsp),%rdi
   831b5:	e8 a6 e3 fe ff       	call   71560 <<alloc::collections::btree::map::Iter<K,V> as core::iter::traits::iterator::Iterator>::next>
   831ba:	48 85 c0             	test   %rax,%rax
   831bd:	0f 84 ec 02 00 00    	je     834af <strategy_comm5::signal_trigger::SignalTrigger::windows_quantile_trigger+0x62f>
   831c3:	49 ff cf             	dec    %r15
   831c6:	75 e8                	jne    831b0 <strategy_comm5::signal_trigger::SignalTrigger::windows_quantile_trigger+0x330>
   831c8:	48 8d 7c 24 20       	lea    0x20(%rsp),%rdi
   831cd:	e8 8e e3 fe ff       	call   71560 <<alloc::collections::btree::map::Iter<K,V> as core::iter::traits::iterator::Iterator>::next>
   831d2:	48 85 c0             	test   %rax,%rax
   831d5:	0f 84 d4 02 00 00    	je     834af <strategy_comm5::signal_trigger::SignalTrigger::windows_quantile_trigger+0x62f>
   831db:	b1 01                	mov    $0x1,%cl
   831dd:	f2 0f 10 8c 24 90 00 	movsd  0x90(%rsp),%xmm1
   831e4:	00 00 
   831e6:	66 0f 2e 8c 24 88 00 	ucomisd 0x88(%rsp),%xmm1
   831ed:	00 00 
   831ef:	73 3d                	jae    8322e <strategy_comm5::signal_trigger::SignalTrigger::windows_quantile_trigger+0x3ae>
   831f1:	ba 03 00 00 00       	mov    $0x3,%edx
   831f6:	66 0f 2e 4c 24 78    	ucomisd 0x78(%rsp),%xmm1
   831fc:	40 b6 01             	mov    $0x1,%sil
   831ff:	73 32                	jae    83233 <strategy_comm5::signal_trigger::SignalTrigger::windows_quantile_trigger+0x3b3>
   83201:	ba 02 00 00 00       	mov    $0x2,%edx
   83206:	f2 0f 10 44 24 70    	movsd  0x70(%rsp),%xmm0
   8320c:	66 0f 2e c1          	ucomisd %xmm1,%xmm0
   83210:	73 21                	jae    83233 <strategy_comm5::signal_trigger::SignalTrigger::windows_quantile_trigger+0x3b3>
   83212:	31 d2                	xor    %edx,%edx
   83214:	f2 0f 10 44 24 68    	movsd  0x68(%rsp),%xmm0
   8321a:	66 0f 2e c1          	ucomisd %xmm1,%xmm0
   8321e:	40 0f 93 c6          	setae  %sil
   83222:	0f 92 c2             	setb   %dl
   83225:	48 8d 14 52          	lea    (%rdx,%rdx,2),%rdx
   83229:	48 ff c2             	inc    %rdx
   8322c:	eb 05                	jmp    83233 <strategy_comm5::signal_trigger::SignalTrigger::windows_quantile_trigger+0x3b3>
   8322e:	40 b6 01             	mov    $0x1,%sil
   83231:	31 d2                	xor    %edx,%edx
   83233:	f2 0f 10 00          	movsd  (%rax),%xmm0
   83237:	66 0f 2e 84 24 88 00 	ucomisd 0x88(%rsp),%xmm0
   8323e:	00 00 
   83240:	73 31                	jae    83273 <strategy_comm5::signal_trigger::SignalTrigger::windows_quantile_trigger+0x3f3>
   83242:	b0 03                	mov    $0x3,%al
   83244:	66 0f 2e 44 24 78    	ucomisd 0x78(%rsp),%xmm0
   8324a:	73 29                	jae    83275 <strategy_comm5::signal_trigger::SignalTrigger::windows_quantile_trigger+0x3f5>
   8324c:	b0 02                	mov    $0x2,%al
   8324e:	f2 0f 10 4c 24 70    	movsd  0x70(%rsp),%xmm1
   83254:	66 0f 2e c8          	ucomisd %xmm0,%xmm1
   83258:	73 1b                	jae    83275 <strategy_comm5::signal_trigger::SignalTrigger::windows_quantile_trigger+0x3f5>
   8325a:	31 c0                	xor    %eax,%eax
   8325c:	f2 0f 10 4c 24 68    	movsd  0x68(%rsp),%xmm1
   83262:	66 0f 2e c8          	ucomisd %xmm0,%xmm1
   83266:	0f 93 c1             	setae  %cl
   83269:	0f 92 c0             	setb   %al
   8326c:	8d 04 40             	lea    (%rax,%rax,2),%eax
   8326f:	ff c0                	inc    %eax
   83271:	eb 02                	jmp    83275 <strategy_comm5::signal_trigger::SignalTrigger::windows_quantile_trigger+0x3f5>
   83273:	31 c0                	xor    %eax,%eax
   83275:	41 b6 04             	mov    $0x4,%r14b
   83278:	40 84 f6             	test   %sil,%sil
   8327b:	74 21                	je     8329e <strategy_comm5::signal_trigger::SignalTrigger::windows_quantile_trigger+0x41e>
   8327d:	84 c9                	test   %cl,%cl
   8327f:	75 3a                	jne    832bb <strategy_comm5::signal_trigger::SignalTrigger::windows_quantile_trigger+0x43b>
   83281:	48 83 fa 03          	cmp    $0x3,%rdx
   83285:	0f 94 c0             	sete   %al
   83288:	b1 04                	mov    $0x4,%cl
   8328a:	28 c1                	sub    %al,%cl
   8328c:	48 85 d2             	test   %rdx,%rdx
   8328f:	44 0f b6 f1          	movzbl %cl,%r14d
   83293:	b8 00 00 00 00       	mov    $0x0,%eax
   83298:	44 0f 44 f0          	cmove  %eax,%r14d
   8329c:	eb 1d                	jmp    832bb <strategy_comm5::signal_trigger::SignalTrigger::windows_quantile_trigger+0x43b>
   8329e:	84 c9                	test   %cl,%cl
   832a0:	74 19                	je     832bb <strategy_comm5::signal_trigger::SignalTrigger::windows_quantile_trigger+0x43b>
   832a2:	3c 02                	cmp    $0x2,%al
   832a4:	0f 95 c1             	setne  %cl
   832a7:	00 c9                	add    %cl,%cl
   832a9:	80 c1 02             	add    $0x2,%cl
   832ac:	3c 01                	cmp    $0x1,%al
   832ae:	44 0f b6 f1          	movzbl %cl,%r14d
   832b2:	b8 01 00 00 00       	mov    $0x1,%eax
   832b7:	44 0f 44 f0          	cmove  %eax,%r14d
   832bb:	48 8b 04 24          	mov    (%rsp),%rax
   832bf:	48 3b 44 24 08       	cmp    0x8(%rsp),%rax
   832c4:	75 1e                	jne    832e4 <strategy_comm5::signal_trigger::SignalTrigger::windows_quantile_trigger+0x464>
   832c6:	48 8d 7c 24 08       	lea    0x8(%rsp),%rdi
   832cb:	48 8d 35 6e b8 07 00 	lea    0x7b86e(%rip),%rsi        # feb40 <anon.50e25bb1355b8971fc58210c29d1b4b6.5.llvm.1301231569978033549+0x30>
   832d2:	e8 09 ed ff ff       	call   81fe0 <_ZN5alloc7raw_vec19RawVec$LT$T$C$A$GT$8grow_one17h6d28e1fe0adf05efE.llvm.1301231569978033549>
   832d7:	48 8b 44 24 10       	mov    0x10(%rsp),%rax
   832dc:	48 89 84 24 80 00 00 	mov    %rax,0x80(%rsp)
   832e3:	00 
   832e4:	41 8d 44 24 ff       	lea    -0x1(%r12),%eax
   832e9:	44 21 e0             	and    %r12d,%eax
   832ec:	48 8b 8c 24 98 00 00 	mov    0x98(%rsp),%rcx
   832f3:	00 
   832f4:	48 ff c9             	dec    %rcx
   832f7:	48 8b 94 24 80 00 00 	mov    0x80(%rsp),%rdx
   832fe:	00 
   832ff:	48 8b 34 24          	mov    (%rsp),%rsi
   83303:	44 88 34 32          	mov    %r14b,(%rdx,%rsi,1)
   83307:	48 ff c6             	inc    %rsi
   8330a:	48 89 34 24          	mov    %rsi,(%rsp)
   8330e:	48 89 74 24 18       	mov    %rsi,0x18(%rsp)
   83313:	41 89 c4             	mov    %eax,%r12d
   83316:	48 85 c9             	test   %rcx,%rcx
   83319:	0f 85 57 fc ff ff    	jne    82f76 <strategy_comm5::signal_trigger::SignalTrigger::windows_quantile_trigger+0xf6>
   8331f:	e9 bf 01 00 00       	jmp    834e3 <strategy_comm5::signal_trigger::SignalTrigger::windows_quantile_trigger+0x663>
   83324:	48 85 c9             	test   %rcx,%rcx
   83327:	0f 84 b6 01 00 00    	je     834e3 <strategy_comm5::signal_trigger::SignalTrigger::windows_quantile_trigger+0x663>
   8332d:	66 83 f8 ff          	cmp    $0xffff,%ax
   83331:	0f 85 78 01 00 00    	jne    834af <strategy_comm5::signal_trigger::SignalTrigger::windows_quantile_trigger+0x62f>
   83337:	66 0f 1f 84 00 00 00 	nopw   0x0(%rax,%rax,1)
   8333e:	00 00 
   83340:	66 0f 6f 45 00       	movdqa 0x0(%rbp),%xmm0
   83345:	48 83 c5 10          	add    $0x10,%rbp
   83349:	66 0f d7 c0          	pmovmskb %xmm0,%eax
   8334d:	3d ff ff 00 00       	cmp    $0xffff,%eax
   83352:	74 ec                	je     83340 <strategy_comm5::signal_trigger::SignalTrigger::windows_quantile_trigger+0x4c0>
   83354:	e9 56 01 00 00       	jmp    834af <strategy_comm5::signal_trigger::SignalTrigger::windows_quantile_trigger+0x62f>
   83359:	48 85 c9             	test   %rcx,%rcx
   8335c:	0f 84 81 01 00 00    	je     834e3 <strategy_comm5::signal_trigger::SignalTrigger::windows_quantile_trigger+0x663>
   83362:	66 83 f8 ff          	cmp    $0xffff,%ax
   83366:	75 29                	jne    83391 <strategy_comm5::signal_trigger::SignalTrigger::windows_quantile_trigger+0x511>
   83368:	0f 1f 84 00 00 00 00 	nopl   0x0(%rax,%rax,1)
   8336f:	00 
   83370:	66 0f 6f 45 00       	movdqa 0x0(%rbp),%xmm0
   83375:	66 44 0f d7 e0       	pmovmskb %xmm0,%r12d
   8337a:	49 81 c5 80 f6 ff ff 	add    $0xfffffffffffff680,%r13
   83381:	48 83 c5 10          	add    $0x10,%rbp
   83385:	41 81 fc ff ff 00 00 	cmp    $0xffff,%r12d
   8338c:	74 e2                	je     83370 <strategy_comm5::signal_trigger::SignalTrigger::windows_quantile_trigger+0x4f0>
   8338e:	41 f7 d4             	not    %r12d
   83391:	f3 41 0f bc c4       	tzcnt  %r12d,%eax
   83396:	48 f7 d8             	neg    %rax
   83399:	48 69 c0 98 00 00 00 	imul   $0x98,%rax,%rax
   833a0:	4d 8b 7c 05 a0       	mov    -0x60(%r13,%rax,1),%r15
   833a5:	4d 85 ff             	test   %r15,%r15
   833a8:	0f 84 01 01 00 00    	je     834af <strategy_comm5::signal_trigger::SignalTrigger::windows_quantile_trigger+0x62f>
   833ae:	66 49 0f 6e c7       	movq   %r15,%xmm0
   833b3:	66 0f 62 05 85 32 f9 	punpckldq -0x6cd7b(%rip),%xmm0        # 16640 <anon.1907589fa464e488346b0cbfb2429808.2.llvm.14402732174179579021+0x40>
   833ba:	ff 
   833bb:	66 0f 5c 05 3d 31 f9 	subpd  -0x6cec3(%rip),%xmm0        # 16500 <anon.50e25bb1355b8971fc58210c29d1b4b6.2.llvm.1301231569978033549+0x30>
   833c2:	ff 
   833c3:	66 0f 28 c8          	movapd %xmm0,%xmm1
   833c7:	66 0f 15 c8          	unpckhpd %xmm0,%xmm1
   833cb:	f2 0f 58 c8          	addsd  %xmm0,%xmm1
   833cf:	66 0f 28 94 24 b0 00 	movapd 0xb0(%rsp),%xmm2
   833d6:	00 00 
   833d8:	f2 0f 59 d1          	mulsd  %xmm1,%xmm2
   833dc:	f2 48 0f 2c ca       	cvttsd2si %xmm2,%rcx
   833e1:	49 01 c5             	add    %rax,%r13
   833e4:	48 89 c8             	mov    %rcx,%rax
   833e7:	48 c1 f8 3f          	sar    $0x3f,%rax
   833eb:	66 0f 28 c2          	movapd %xmm2,%xmm0
   833ef:	f2 0f 5c 05 99 2f f9 	subsd  -0x6d067(%rip),%xmm0        # 16390 <GCC_except_table128+0x10c>
   833f6:	ff 
   833f7:	f2 48 0f 2c d0       	cvttsd2si %xmm0,%rdx
   833fc:	48 21 c2             	and    %rax,%rdx
   833ff:	48 09 ca             	or     %rcx,%rdx
   83402:	31 c9                	xor    %ecx,%ecx
   83404:	66 0f 57 c0          	xorpd  %xmm0,%xmm0
   83408:	66 0f 2e d0          	ucomisd %xmm0,%xmm2
   8340c:	48 0f 43 ca          	cmovae %rdx,%rcx
   83410:	66 0f 2e 15 a0 2e f9 	ucomisd -0x6d160(%rip),%xmm2        # 162b8 <GCC_except_table128+0x34>
   83417:	ff 
   83418:	48 c7 c0 ff ff ff ff 	mov    $0xffffffffffffffff,%rax
   8341f:	48 0f 46 c1          	cmovbe %rcx,%rax
   83423:	49 8b 4d 90          	mov    -0x70(%r13),%rcx
   83427:	49 8b 55 98          	mov    -0x68(%r13),%rdx
   8342b:	31 f6                	xor    %esi,%esi
   8342d:	48 85 c9             	test   %rcx,%rcx
   83430:	40 0f 95 c6          	setne  %sil
   83434:	4c 89 ff             	mov    %r15,%rdi
   83437:	48 0f 44 f9          	cmove  %rcx,%rdi
   8343b:	48 89 74 24 20       	mov    %rsi,0x20(%rsp)
   83440:	48 c7 44 24 28 00 00 	movq   $0x0,0x28(%rsp)
   83447:	00 00 
   83449:	48 89 4c 24 30       	mov    %rcx,0x30(%rsp)
   8344e:	48 89 54 24 38       	mov    %rdx,0x38(%rsp)
   83453:	48 89 74 24 40       	mov    %rsi,0x40(%rsp)
   83458:	48 c7 44 24 48 00 00 	movq   $0x0,0x48(%rsp)
   8345f:	00 00 
   83461:	48 89 4c 24 50       	mov    %rcx,0x50(%rsp)
   83466:	48 89 54 24 58       	mov    %rdx,0x58(%rsp)
   8346b:	48 89 7c 24 60       	mov    %rdi,0x60(%rsp)
   83470:	48 85 c0             	test   %rax,%rax
   83473:	74 2d                	je     834a2 <strategy_comm5::signal_trigger::SignalTrigger::windows_quantile_trigger+0x622>
   83475:	4c 39 f8             	cmp    %r15,%rax
   83478:	4c 0f 42 f8          	cmovb  %rax,%r15
   8347c:	4c 8d 74 24 20       	lea    0x20(%rsp),%r14
   83481:	66 66 66 66 66 66 2e 	data16 data16 data16 data16 data16 cs nopw 0x0(%rax,%rax,1)
   83488:	0f 1f 84 00 00 00 00 
   8348f:	00 
   83490:	4c 89 f7             	mov    %r14,%rdi
   83493:	e8 c8 e0 fe ff       	call   71560 <<alloc::collections::btree::map::Iter<K,V> as core::iter::traits::iterator::Iterator>::next>
   83498:	48 85 c0             	test   %rax,%rax
   8349b:	74 12                	je     834af <strategy_comm5::signal_trigger::SignalTrigger::windows_quantile_trigger+0x62f>
   8349d:	49 ff cf             	dec    %r15
   834a0:	75 ee                	jne    83490 <strategy_comm5::signal_trigger::SignalTrigger::windows_quantile_trigger+0x610>
   834a2:	48 8d 7c 24 20       	lea    0x20(%rsp),%rdi
   834a7:	e8 b4 e0 fe ff       	call   71560 <<alloc::collections::btree::map::Iter<K,V> as core::iter::traits::iterator::Iterator>::next>
   834ac:	48 85 c0             	test   %rax,%rax
   834af:	48 8d 3d 43 79 f9 ff 	lea    -0x686bd(%rip),%rdi        # 1adf9 <anon.f91c20c02f2e2aee92b269b84ce5d562.30.llvm.16467262602388161857+0xc9>
   834b6:	be 12 00 00 00       	mov    $0x12,%esi
   834bb:	e8 d0 7b ff ff       	call   7b090 <anyhow::error::<impl anyhow::Error>::msg>
   834c0:	48 89 43 08          	mov    %rax,0x8(%rbx)
   834c4:	c6 03 05             	movb   $0x5,(%rbx)
   834c7:	48 8b 74 24 08       	mov    0x8(%rsp),%rsi
   834cc:	48 85 f6             	test   %rsi,%rsi
   834cf:	74 2c                	je     834fd <strategy_comm5::signal_trigger::SignalTrigger::windows_quantile_trigger+0x67d>
   834d1:	48 8b 7c 24 10       	mov    0x10(%rsp),%rdi
   834d6:	ba 01 00 00 00       	mov    $0x1,%edx
   834db:	ff 15 97 07 08 00    	call   *0x80797(%rip)        # 103c78 <_DYNAMIC+0x218>
   834e1:	eb 1a                	jmp    834fd <strategy_comm5::signal_trigger::SignalTrigger::windows_quantile_trigger+0x67d>
   834e3:	48 8d 7c 24 08       	lea    0x8(%rsp),%rdi
   834e8:	f3 0f 7e 84 24 a8 00 	movq   0xa8(%rsp),%xmm0
   834ef:	00 00 
   834f1:	e8 aa 04 00 00       	call   839a0 <_ZN14strategy_comm514signal_trigger17enum_rate_counter17hb51fcb9e7a9a6c40E.llvm.1301231569978033549>
   834f6:	88 03                	mov    %al,(%rbx)
   834f8:	66 0f d6 43 08       	movq   %xmm0,0x8(%rbx)
   834fd:	48 89 d8             	mov    %rbx,%rax
   83500:	48 81 c4 c8 00 00 00 	add    $0xc8,%rsp
   83507:	5b                   	pop    %rbx
   83508:	41 5c                	pop    %r12
   8350a:	41 5d                	pop    %r13
   8350c:	41 5e                	pop    %r14
   8350e:	41 5f                	pop    %r15
   83510:	5d                   	pop    %rbp
   83511:	c3                   	ret    
   83512:	eb 08                	jmp    8351c <strategy_comm5::signal_trigger::SignalTrigger::windows_quantile_trigger+0x69c>
   83514:	eb 06                	jmp    8351c <strategy_comm5::signal_trigger::SignalTrigger::windows_quantile_trigger+0x69c>
   83516:	eb 04                	jmp    8351c <strategy_comm5::signal_trigger::SignalTrigger::windows_quantile_trigger+0x69c>
   83518:	eb 02                	jmp    8351c <strategy_comm5::signal_trigger::SignalTrigger::windows_quantile_trigger+0x69c>
   8351a:	eb 00                	jmp    8351c <strategy_comm5::signal_trigger::SignalTrigger::windows_quantile_trigger+0x69c>
   8351c:	48 89 c3             	mov    %rax,%rbx
   8351f:	48 8b 74 24 08       	mov    0x8(%rsp),%rsi
   83524:	48 85 f6             	test   %rsi,%rsi
   83527:	74 10                	je     83539 <strategy_comm5::signal_trigger::SignalTrigger::windows_quantile_trigger+0x6b9>
   83529:	48 8b 7c 24 10       	mov    0x10(%rsp),%rdi
   8352e:	ba 01 00 00 00       	mov    $0x1,%edx
   83533:	ff 15 3f 07 08 00    	call   *0x8073f(%rip)        # 103c78 <_DYNAMIC+0x218>
   83539:	48 89 df             	mov    %rbx,%rdi
   8353c:	e8 3f 90 07 00       	call   fc580 <_Unwind_Resume@plt>
   83541:	cc                   	int3   
   83542:	cc                   	int3   
   83543:	cc                   	int3   
   83544:	cc                   	int3   
   83545:	cc                   	int3   
   83546:	cc                   	int3   
   83547:	cc                   	int3   
   83548:	cc                   	int3   
   83549:	cc                   	int3   
   8354a:	cc                   	int3   
   8354b:	cc                   	int3   
   8354c:	cc                   	int3   
   8354d:	cc                   	int3   
   8354e:	cc                   	int3   
   8354f:	cc                   	int3   
