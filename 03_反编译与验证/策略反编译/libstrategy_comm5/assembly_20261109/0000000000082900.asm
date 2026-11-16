0000000000082900 <strategy_comm5::signal_trigger::SignalTrigger::update_score>:
   82900:	55                   	push   %rbp
   82901:	41 57                	push   %r15
   82903:	41 56                	push   %r14
   82905:	41 55                	push   %r13
   82907:	41 54                	push   %r12
   82909:	53                   	push   %rbx
   8290a:	48 83 ec 38          	sub    $0x38,%rsp
   8290e:	48 89 54 24 08       	mov    %rdx,0x8(%rsp)
   82913:	49 89 f7             	mov    %rsi,%r15
   82916:	66 0f d6 5c 24 18    	movq   %xmm3,0x18(%rsp)
   8291c:	66 0f d6 54 24 10    	movq   %xmm2,0x10(%rsp)
   82922:	48 89 fb             	mov    %rdi,%rbx
   82925:	66 0f d6 44 24 20    	movq   %xmm0,0x20(%rsp)
   8292b:	66 0f d6 47 30       	movq   %xmm0,0x30(%rdi)
   82930:	66 0f d6 4c 24 28    	movq   %xmm1,0x28(%rsp)
   82936:	66 0f d6 4f 38       	movq   %xmm1,0x38(%rdi)
   8293b:	4c 8b 67 18          	mov    0x18(%rdi),%r12
   8293f:	4d 85 e4             	test   %r12,%r12
   82942:	74 7b                	je     829bf <strategy_comm5::signal_trigger::SignalTrigger::update_score+0xbf>
   82944:	4c 8b 2b             	mov    (%rbx),%r13
   82947:	49 8d 6d 10          	lea    0x10(%r13),%rbp
   8294b:	66 41 0f 6f 45 00    	movdqa 0x0(%r13),%xmm0
   82951:	66 0f d7 c0          	pmovmskb %xmm0,%eax
   82955:	f7 d0                	not    %eax
   82957:	eb 40                	jmp    82999 <strategy_comm5::signal_trigger::SignalTrigger::update_score+0x99>
   82959:	0f 1f 80 00 00 00 00 	nopl   0x0(%rax)
   82960:	44 8d 70 ff          	lea    -0x1(%rax),%r14d
   82964:	f3 0f bc c8          	tzcnt  %eax,%ecx
   82968:	41 21 c6             	and    %eax,%r14d
   8296b:	48 f7 d9             	neg    %rcx
   8296e:	48 69 c1 98 00 00 00 	imul   $0x98,%rcx,%rax
   82975:	4a 8d 3c 28          	lea    (%rax,%r13,1),%rdi
   82979:	48 81 c7 70 ff ff ff 	add    $0xffffffffffffff70,%rdi
   82980:	f3 0f 7e 44 24 20    	movq   0x20(%rsp),%xmm0
   82986:	f3 0f 7e 4c 24 28    	movq   0x28(%rsp),%xmm1
   8298c:	e8 2f fa ff ff       	call   823c0 <strategy_comm5::signal_trigger::TsQuantileCalculator::update>
   82991:	44 89 f0             	mov    %r14d,%eax
   82994:	49 ff cc             	dec    %r12
   82997:	74 26                	je     829bf <strategy_comm5::signal_trigger::SignalTrigger::update_score+0xbf>
   82999:	66 85 c0             	test   %ax,%ax
   8299c:	75 c2                	jne    82960 <strategy_comm5::signal_trigger::SignalTrigger::update_score+0x60>
   8299e:	66 90                	xchg   %ax,%ax
   829a0:	66 0f 6f 45 00       	movdqa 0x0(%rbp),%xmm0
   829a5:	66 0f d7 c0          	pmovmskb %xmm0,%eax
   829a9:	49 81 c5 80 f6 ff ff 	add    $0xfffffffffffff680,%r13
   829b0:	48 83 c5 10          	add    $0x10,%rbp
   829b4:	3d ff ff 00 00       	cmp    $0xffff,%eax
   829b9:	74 e5                	je     829a0 <strategy_comm5::signal_trigger::SignalTrigger::update_score+0xa0>
   829bb:	f7 d0                	not    %eax
   829bd:	eb a1                	jmp    82960 <strategy_comm5::signal_trigger::SignalTrigger::update_score+0x60>
   829bf:	41 f6 c7 01          	test   $0x1,%r15b
   829c3:	0f 84 b5 00 00 00    	je     82a7e <strategy_comm5::signal_trigger::SignalTrigger::update_score+0x17e>
   829c9:	4c 8b 74 24 08       	mov    0x8(%rsp),%r14
   829ce:	4c 89 74 24 30       	mov    %r14,0x30(%rsp)
   829d3:	48 83 7b 18 00       	cmpq   $0x0,0x18(%rbx)
   829d8:	0f 84 4f 01 00 00    	je     82b2d <strategy_comm5::signal_trigger::SignalTrigger::update_score+0x22d>
   829de:	48 8d 7b 20          	lea    0x20(%rbx),%rdi
   829e2:	48 8d 74 24 30       	lea    0x30(%rsp),%rsi
   829e7:	e8 54 cb ff ff       	call   7f540 <core::hash::BuildHasher::hash_one>
   829ec:	48 89 c6             	mov    %rax,%rsi
   829ef:	48 c1 ee 39          	shr    $0x39,%rsi
   829f3:	48 8b 0b             	mov    (%rbx),%rcx
   829f6:	48 8b 53 08          	mov    0x8(%rbx),%rdx
   829fa:	66 0f 6e c6          	movd   %esi,%xmm0
   829fe:	66 0f 60 c0          	punpcklbw %xmm0,%xmm0
   82a02:	f2 0f 70 c0 00       	pshuflw $0x0,%xmm0,%xmm0
   82a07:	66 0f 70 c0 00       	pshufd $0x0,%xmm0,%xmm0
   82a0c:	48 8d b1 68 ff ff ff 	lea    -0x98(%rcx),%rsi
   82a13:	31 ff                	xor    %edi,%edi
   82a15:	66 0f 76 c9          	pcmpeqd %xmm1,%xmm1
   82a19:	48 21 d0             	and    %rdx,%rax
   82a1c:	f3 0f 6f 14 01       	movdqu (%rcx,%rax,1),%xmm2
   82a21:	66 0f 6f da          	movdqa %xmm2,%xmm3
   82a25:	66 0f 74 d8          	pcmpeqb %xmm0,%xmm3
   82a29:	66 44 0f d7 c3       	pmovmskb %xmm3,%r8d
   82a2e:	45 85 c0             	test   %r8d,%r8d
   82a31:	74 2c                	je     82a5f <strategy_comm5::signal_trigger::SignalTrigger::update_score+0x15f>
   82a33:	f3 45 0f bc c8       	tzcnt  %r8d,%r9d
   82a38:	49 01 c1             	add    %rax,%r9
   82a3b:	49 21 d1             	and    %rdx,%r9
   82a3e:	49 f7 d9             	neg    %r9
   82a41:	4d 69 c9 98 00 00 00 	imul   $0x98,%r9,%r9
   82a48:	4e 3b 34 0e          	cmp    (%rsi,%r9,1),%r14
   82a4c:	0f 84 7d 00 00 00    	je     82acf <strategy_comm5::signal_trigger::SignalTrigger::update_score+0x1cf>
   82a52:	45 8d 48 ff          	lea    -0x1(%r8),%r9d
   82a56:	66 45 21 c1          	and    %r8w,%r9w
   82a5a:	45 89 c8             	mov    %r9d,%r8d
   82a5d:	75 d4                	jne    82a33 <strategy_comm5::signal_trigger::SignalTrigger::update_score+0x133>
   82a5f:	66 0f 74 d1          	pcmpeqb %xmm1,%xmm2
   82a63:	66 44 0f d7 c2       	pmovmskb %xmm2,%r8d
   82a68:	45 85 c0             	test   %r8d,%r8d
   82a6b:	0f 85 bc 00 00 00    	jne    82b2d <strategy_comm5::signal_trigger::SignalTrigger::update_score+0x22d>
   82a71:	48 01 f8             	add    %rdi,%rax
   82a74:	48 83 c0 10          	add    $0x10,%rax
   82a78:	48 83 c7 10          	add    $0x10,%rdi
   82a7c:	eb 9b                	jmp    82a19 <strategy_comm5::signal_trigger::SignalTrigger::update_score+0x119>
   82a7e:	48 83 7b 18 00       	cmpq   $0x0,0x18(%rbx)
   82a83:	0f 84 a4 00 00 00    	je     82b2d <strategy_comm5::signal_trigger::SignalTrigger::update_score+0x22d>
   82a89:	48 8b 03             	mov    (%rbx),%rax
   82a8c:	66 0f 6f 00          	movdqa (%rax),%xmm0
   82a90:	66 0f d7 c8          	pmovmskb %xmm0,%ecx
   82a94:	81 f9 ff ff 00 00    	cmp    $0xffff,%ecx
   82a9a:	75 1e                	jne    82aba <strategy_comm5::signal_trigger::SignalTrigger::update_score+0x1ba>
   82a9c:	48 8d 50 10          	lea    0x10(%rax),%rdx
   82aa0:	66 0f 6f 02          	movdqa (%rdx),%xmm0
   82aa4:	66 0f d7 c8          	pmovmskb %xmm0,%ecx
   82aa8:	48 05 80 f6 ff ff    	add    $0xfffffffffffff680,%rax
   82aae:	48 83 c2 10          	add    $0x10,%rdx
   82ab2:	81 f9 ff ff 00 00    	cmp    $0xffff,%ecx
   82ab8:	74 e6                	je     82aa0 <strategy_comm5::signal_trigger::SignalTrigger::update_score+0x1a0>
   82aba:	f7 d1                	not    %ecx
   82abc:	f3 0f bc c9          	tzcnt  %ecx,%ecx
   82ac0:	48 f7 d9             	neg    %rcx
   82ac3:	48 69 c9 98 00 00 00 	imul   $0x98,%rcx,%rcx
   82aca:	48 01 c1             	add    %rax,%rcx
   82acd:	eb 03                	jmp    82ad2 <strategy_comm5::signal_trigger::SignalTrigger::update_score+0x1d2>
   82acf:	4c 01 c9             	add    %r9,%rcx
   82ad2:	f2 0f 10 41 c8       	movsd  -0x38(%rcx),%xmm0
   82ad7:	f2 0f 11 43 60       	movsd  %xmm0,0x60(%rbx)
   82adc:	f2 0f 10 49 d8       	movsd  -0x28(%rcx),%xmm1
   82ae1:	f2 0f 11 4b 68       	movsd  %xmm1,0x68(%rbx)
   82ae6:	f2 0f 10 53 38       	movsd  0x38(%rbx),%xmm2
   82aeb:	f2 0f 10 64 24 10    	movsd  0x10(%rsp),%xmm4
   82af1:	f2 0f 59 e1          	mulsd  %xmm1,%xmm4
   82af5:	66 0f 28 d8          	movapd %xmm0,%xmm3
   82af9:	f2 0f 58 dc          	addsd  %xmm4,%xmm3
   82afd:	f2 0f 58 e2          	addsd  %xmm2,%xmm4
   82b01:	f2 0f 11 a3 80 00 00 	movsd  %xmm4,0x80(%rbx)
   82b08:	00 
   82b09:	f2 0f 10 64 24 18    	movsd  0x18(%rsp),%xmm4
   82b0f:	f2 0f 59 e1          	mulsd  %xmm1,%xmm4
   82b13:	f2 0f 5c d4          	subsd  %xmm4,%xmm2
   82b17:	f2 0f 11 93 88 00 00 	movsd  %xmm2,0x88(%rbx)
   82b1e:	00 
   82b1f:	f2 0f 11 5b 70       	movsd  %xmm3,0x70(%rbx)
   82b24:	f2 0f 5c c4          	subsd  %xmm4,%xmm0
   82b28:	f2 0f 11 43 78       	movsd  %xmm0,0x78(%rbx)
   82b2d:	48 83 c4 38          	add    $0x38,%rsp
   82b31:	5b                   	pop    %rbx
   82b32:	41 5c                	pop    %r12
   82b34:	41 5d                	pop    %r13
   82b36:	41 5e                	pop    %r14
   82b38:	41 5f                	pop    %r15
   82b3a:	5d                   	pop    %rbp
   82b3b:	c3                   	ret    
   82b3c:	cc                   	int3   
   82b3d:	cc                   	int3   
   82b3e:	cc                   	int3   
   82b3f:	cc                   	int3   
