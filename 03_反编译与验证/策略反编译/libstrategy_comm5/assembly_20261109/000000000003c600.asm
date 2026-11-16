000000000003c600 <strategy_comm5::StrategyComm5::xs_mult>:
   3c600:	55                   	push   %rbp
   3c601:	41 57                	push   %r15
   3c603:	41 56                	push   %r14
   3c605:	41 55                	push   %r13
   3c607:	41 54                	push   %r12
   3c609:	53                   	push   %rbx
   3c60a:	48 83 ec 58          	sub    $0x58,%rsp
   3c60e:	40 f6 c6 01          	test   $0x1,%sil
   3c612:	0f 84 88 00 00 00    	je     3c6a0 <strategy_comm5::StrategyComm5::xs_mult+0xa0>
   3c618:	48 01 d1             	add    %rdx,%rcx
   3c61b:	eb 0f                	jmp    3c62c <strategy_comm5::StrategyComm5::xs_mult+0x2c>
   3c61d:	0f 1f 00             	nopl   (%rax)
   3c620:	48 8d 48 ff          	lea    -0x1(%rax),%rcx
   3c624:	83 c6 c6             	add    $0xffffffc6,%esi
   3c627:	83 fe f5             	cmp    $0xfffffff5,%esi
   3c62a:	76 6f                	jbe    3c69b <strategy_comm5::StrategyComm5::xs_mult+0x9b>
   3c62c:	48 39 ca             	cmp    %rcx,%rdx
   3c62f:	74 7c                	je     3c6ad <strategy_comm5::StrategyComm5::xs_mult+0xad>
   3c631:	48 89 c8             	mov    %rcx,%rax
   3c634:	0f be 71 ff          	movsbl -0x1(%rcx),%esi
   3c638:	85 f6                	test   %esi,%esi
   3c63a:	79 e4                	jns    3c620 <strategy_comm5::StrategyComm5::xs_mult+0x20>
   3c63c:	44 0f b6 40 fe       	movzbl -0x2(%rax),%r8d
   3c641:	41 80 f8 c0          	cmp    $0xc0,%r8b
   3c645:	7d 25                	jge    3c66c <strategy_comm5::StrategyComm5::xs_mult+0x6c>
   3c647:	44 0f b6 48 fd       	movzbl -0x3(%rax),%r9d
   3c64c:	41 80 f9 c0          	cmp    $0xc0,%r9b
   3c650:	7d 24                	jge    3c676 <strategy_comm5::StrategyComm5::xs_mult+0x76>
   3c652:	48 8d 48 fc          	lea    -0x4(%rax),%rcx
   3c656:	44 0f b6 50 fc       	movzbl -0x4(%rax),%r10d
   3c65b:	41 83 e2 07          	and    $0x7,%r10d
   3c65f:	41 c1 e2 06          	shl    $0x6,%r10d
   3c663:	41 83 e1 3f          	and    $0x3f,%r9d
   3c667:	45 09 d1             	or     %r10d,%r9d
   3c66a:	eb 12                	jmp    3c67e <strategy_comm5::StrategyComm5::xs_mult+0x7e>
   3c66c:	48 8d 48 fe          	lea    -0x2(%rax),%rcx
   3c670:	41 83 e0 1f          	and    $0x1f,%r8d
   3c674:	eb 13                	jmp    3c689 <strategy_comm5::StrategyComm5::xs_mult+0x89>
   3c676:	48 8d 48 fd          	lea    -0x3(%rax),%rcx
   3c67a:	41 83 e1 0f          	and    $0xf,%r9d
   3c67e:	41 c1 e1 06          	shl    $0x6,%r9d
   3c682:	41 83 e0 3f          	and    $0x3f,%r8d
   3c686:	45 09 c8             	or     %r9d,%r8d
   3c689:	41 c1 e0 06          	shl    $0x6,%r8d
   3c68d:	83 e6 3f             	and    $0x3f,%esi
   3c690:	44 09 c6             	or     %r8d,%esi
   3c693:	83 c6 c6             	add    $0xffffffc6,%esi
   3c696:	83 fe f5             	cmp    $0xfffffff5,%esi
   3c699:	77 91                	ja     3c62c <strategy_comm5::StrategyComm5::xs_mult+0x2c>
   3c69b:	48 29 d0             	sub    %rdx,%rax
   3c69e:	eb 2b                	jmp    3c6cb <strategy_comm5::StrategyComm5::xs_mult+0xcb>
   3c6a0:	f2 0f 10 05 c0 9c fd 	movsd  -0x26340(%rip),%xmm0        # 16368 <GCC_except_table128+0xe4>
   3c6a7:	ff 
   3c6a8:	e9 e2 01 00 00       	jmp    3c88f <strategy_comm5::StrategyComm5::xs_mult+0x28f>
   3c6ad:	31 c0                	xor    %eax,%eax
   3c6af:	eb 1a                	jmp    3c6cb <strategy_comm5::StrategyComm5::xs_mult+0xcb>
   3c6b1:	66 66 66 66 66 66 2e 	data16 data16 data16 data16 data16 cs nopw 0x0(%rax,%rax,1)
   3c6b8:	0f 1f 84 00 00 00 00 
   3c6bf:	00 
   3c6c0:	48 ff c8             	dec    %rax
   3c6c3:	48 29 d0             	sub    %rdx,%rax
   3c6c6:	83 f9 5f             	cmp    $0x5f,%ecx
   3c6c9:	75 6e                	jne    3c739 <strategy_comm5::StrategyComm5::xs_mult+0x139>
   3c6cb:	48 89 c3             	mov    %rax,%rbx
   3c6ce:	48 85 c0             	test   %rax,%rax
   3c6d1:	74 66                	je     3c739 <strategy_comm5::StrategyComm5::xs_mult+0x139>
   3c6d3:	48 8d 04 1a          	lea    (%rdx,%rbx,1),%rax
   3c6d7:	0f be 48 ff          	movsbl -0x1(%rax),%ecx
   3c6db:	85 c9                	test   %ecx,%ecx
   3c6dd:	79 e1                	jns    3c6c0 <strategy_comm5::StrategyComm5::xs_mult+0xc0>
   3c6df:	0f b6 70 fe          	movzbl -0x2(%rax),%esi
   3c6e3:	40 80 fe c0          	cmp    $0xc0,%sil
   3c6e7:	7d 25                	jge    3c70e <strategy_comm5::StrategyComm5::xs_mult+0x10e>
   3c6e9:	44 0f b6 40 fd       	movzbl -0x3(%rax),%r8d
   3c6ee:	41 80 f8 c0          	cmp    $0xc0,%r8b
   3c6f2:	7d 23                	jge    3c717 <strategy_comm5::StrategyComm5::xs_mult+0x117>
   3c6f4:	44 0f b6 48 fc       	movzbl -0x4(%rax),%r9d
   3c6f9:	48 83 c0 fc          	add    $0xfffffffffffffffc,%rax
   3c6fd:	41 83 e1 07          	and    $0x7,%r9d
   3c701:	41 c1 e1 06          	shl    $0x6,%r9d
   3c705:	41 83 e0 3f          	and    $0x3f,%r8d
   3c709:	45 09 c8             	or     %r9d,%r8d
   3c70c:	eb 11                	jmp    3c71f <strategy_comm5::StrategyComm5::xs_mult+0x11f>
   3c70e:	48 83 c0 fe          	add    $0xfffffffffffffffe,%rax
   3c712:	83 e6 1f             	and    $0x1f,%esi
   3c715:	eb 12                	jmp    3c729 <strategy_comm5::StrategyComm5::xs_mult+0x129>
   3c717:	48 83 c0 fd          	add    $0xfffffffffffffffd,%rax
   3c71b:	41 83 e0 0f          	and    $0xf,%r8d
   3c71f:	41 c1 e0 06          	shl    $0x6,%r8d
   3c723:	83 e6 3f             	and    $0x3f,%esi
   3c726:	44 09 c6             	or     %r8d,%esi
   3c729:	c1 e6 06             	shl    $0x6,%esi
   3c72c:	83 e1 3f             	and    $0x3f,%ecx
   3c72f:	09 f1                	or     %esi,%ecx
   3c731:	48 29 d0             	sub    %rdx,%rax
   3c734:	83 f9 5f             	cmp    $0x5f,%ecx
   3c737:	74 92                	je     3c6cb <strategy_comm5::StrategyComm5::xs_mult+0xcb>
   3c739:	48 83 bf 40 06 00 00 	cmpq   $0x0,0x640(%rdi)
   3c740:	00 
   3c741:	0f 84 30 01 00 00    	je     3c877 <strategy_comm5::StrategyComm5::xs_mult+0x277>
   3c747:	48 8d 87 48 06 00 00 	lea    0x648(%rdi),%rax
   3c74e:	49 89 fe             	mov    %rdi,%r14
   3c751:	48 89 c7             	mov    %rax,%rdi
   3c754:	48 89 54 24 28       	mov    %rdx,0x28(%rsp)
   3c759:	48 89 d6             	mov    %rdx,%rsi
   3c75c:	48 89 da             	mov    %rbx,%rdx
   3c75f:	e8 dc 2a 04 00       	call   7f240 <core::hash::BuildHasher::hash_one>
   3c764:	48 89 c1             	mov    %rax,%rcx
   3c767:	48 c1 e9 39          	shr    $0x39,%rcx
   3c76b:	4d 8b be 28 06 00 00 	mov    0x628(%r14),%r15
   3c772:	49 8b b6 30 06 00 00 	mov    0x630(%r14),%rsi
   3c779:	66 0f 6e c1          	movd   %ecx,%xmm0
   3c77d:	66 0f 60 c0          	punpcklbw %xmm0,%xmm0
   3c781:	f2 0f 70 c0 00       	pshuflw $0x0,%xmm0,%xmm0
   3c786:	66 0f 70 c8 00       	pshufd $0x0,%xmm0,%xmm1
   3c78b:	49 8d 57 e0          	lea    -0x20(%r15),%rdx
   3c78f:	45 31 e4             	xor    %r12d,%r12d
   3c792:	66 0f 76 d2          	pcmpeqd %xmm2,%xmm2
   3c796:	4c 8b 2d 8b 75 0c 00 	mov    0xc758b(%rip),%r13        # 103d28 <bcmp@GLIBC_2.2.5>
   3c79d:	31 ff                	xor    %edi,%edi
   3c79f:	48 21 f0             	and    %rsi,%rax
   3c7a2:	f3 41 0f 6f 1c 07    	movdqu (%r15,%rax,1),%xmm3
   3c7a8:	66 0f 6f c3          	movdqa %xmm3,%xmm0
   3c7ac:	66 0f 74 c1          	pcmpeqb %xmm1,%xmm0
   3c7b0:	66 44 0f d7 f0       	pmovmskb %xmm0,%r14d
   3c7b5:	45 85 f6             	test   %r14d,%r14d
   3c7b8:	0f 84 82 00 00 00    	je     3c840 <strategy_comm5::StrategyComm5::xs_mult+0x240>
   3c7be:	48 89 44 24 20       	mov    %rax,0x20(%rsp)
   3c7c3:	66 0f 7f 4c 24 40    	movdqa %xmm1,0x40(%rsp)
   3c7c9:	48 89 54 24 18       	mov    %rdx,0x18(%rsp)
   3c7ce:	48 89 74 24 10       	mov    %rsi,0x10(%rsp)
   3c7d3:	48 89 7c 24 08       	mov    %rdi,0x8(%rsp)
   3c7d8:	66 0f 7f 5c 24 30    	movdqa %xmm3,0x30(%rsp)
   3c7de:	f3 41 0f bc ee       	tzcnt  %r14d,%ebp
   3c7e3:	48 01 c5             	add    %rax,%rbp
   3c7e6:	48 21 f5             	and    %rsi,%rbp
   3c7e9:	48 89 e9             	mov    %rbp,%rcx
   3c7ec:	48 c1 e1 05          	shl    $0x5,%rcx
   3c7f0:	48 89 d0             	mov    %rdx,%rax
   3c7f3:	48 29 c8             	sub    %rcx,%rax
   3c7f6:	48 3b 58 10          	cmp    0x10(%rax),%rbx
   3c7fa:	75 13                	jne    3c80f <strategy_comm5::StrategyComm5::xs_mult+0x20f>
   3c7fc:	48 8b 70 08          	mov    0x8(%rax),%rsi
   3c800:	48 8b 7c 24 28       	mov    0x28(%rsp),%rdi
   3c805:	48 89 da             	mov    %rbx,%rdx
   3c808:	41 ff d5             	call   *%r13
   3c80b:	85 c0                	test   %eax,%eax
   3c80d:	74 4d                	je     3c85c <strategy_comm5::StrategyComm5::xs_mult+0x25c>
   3c80f:	41 8d 46 ff          	lea    -0x1(%r14),%eax
   3c813:	66 44 21 f0          	and    %r14w,%ax
   3c817:	41 89 c6             	mov    %eax,%r14d
   3c81a:	48 8b 44 24 20       	mov    0x20(%rsp),%rax
   3c81f:	66 0f 6f 4c 24 40    	movdqa 0x40(%rsp),%xmm1
   3c825:	48 8b 54 24 18       	mov    0x18(%rsp),%rdx
   3c82a:	66 0f 76 d2          	pcmpeqd %xmm2,%xmm2
   3c82e:	48 8b 74 24 10       	mov    0x10(%rsp),%rsi
   3c833:	48 8b 7c 24 08       	mov    0x8(%rsp),%rdi
   3c838:	66 0f 6f 5c 24 30    	movdqa 0x30(%rsp),%xmm3
   3c83e:	75 9e                	jne    3c7de <strategy_comm5::StrategyComm5::xs_mult+0x1de>
   3c840:	66 0f 74 da          	pcmpeqb %xmm2,%xmm3
   3c844:	66 0f d7 cb          	pmovmskb %xmm3,%ecx
   3c848:	85 c9                	test   %ecx,%ecx
   3c84a:	75 1d                	jne    3c869 <strategy_comm5::StrategyComm5::xs_mult+0x269>
   3c84c:	48 01 f8             	add    %rdi,%rax
   3c84f:	48 83 c0 10          	add    $0x10,%rax
   3c853:	48 83 c7 10          	add    $0x10,%rdi
   3c857:	e9 43 ff ff ff       	jmp    3c79f <strategy_comm5::StrategyComm5::xs_mult+0x19f>
   3c85c:	48 f7 dd             	neg    %rbp
   3c85f:	48 c1 e5 05          	shl    $0x5,%rbp
   3c863:	49 01 ef             	add    %rbp,%r15
   3c866:	4d 89 fc             	mov    %r15,%r12
   3c869:	49 8d 44 24 e0       	lea    -0x20(%r12),%rax
   3c86e:	4d 85 e4             	test   %r12,%r12
   3c871:	49 0f 44 c4          	cmove  %r12,%rax
   3c875:	eb 02                	jmp    3c879 <strategy_comm5::StrategyComm5::xs_mult+0x279>
   3c877:	31 c0                	xor    %eax,%eax
   3c879:	48 8d 48 18          	lea    0x18(%rax),%rcx
   3c87d:	48 85 c0             	test   %rax,%rax
   3c880:	48 8d 05 e1 9a fd ff 	lea    -0x2651f(%rip),%rax        # 16368 <GCC_except_table128+0xe4>
   3c887:	48 0f 45 c1          	cmovne %rcx,%rax
   3c88b:	f2 0f 10 00          	movsd  (%rax),%xmm0
   3c88f:	48 83 c4 58          	add    $0x58,%rsp
   3c893:	5b                   	pop    %rbx
   3c894:	41 5c                	pop    %r12
   3c896:	41 5d                	pop    %r13
   3c898:	41 5e                	pop    %r14
   3c89a:	41 5f                	pop    %r15
   3c89c:	5d                   	pop    %rbp
   3c89d:	c3                   	ret    
   3c89e:	cc                   	int3   
   3c89f:	cc                   	int3   
