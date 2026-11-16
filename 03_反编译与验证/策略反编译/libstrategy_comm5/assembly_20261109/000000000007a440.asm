000000000007a440 <core::ptr::drop_in_place<strategy_comm5::StrategyComm5>>:
   7a440:	55                   	push   %rbp
   7a441:	41 57                	push   %r15
   7a443:	41 56                	push   %r14
   7a445:	41 55                	push   %r13
   7a447:	41 54                	push   %r12
   7a449:	53                   	push   %rbx
   7a44a:	50                   	push   %rax
   7a44b:	48 89 fb             	mov    %rdi,%rbx
   7a44e:	48 81 c7 68 05 00 00 	add    $0x568,%rdi
   7a455:	48 89 1c 24          	mov    %rbx,(%rsp)
   7a459:	e8 a2 6b fe ff       	call   61000 <<hashbrown::raw::RawTable<T,A> as core::ops::drop::Drop>::drop>
   7a45e:	4c 8b b3 a0 05 00 00 	mov    0x5a0(%rbx),%r14
   7a465:	4d 85 f6             	test   %r14,%r14
   7a468:	0f 84 dd 00 00 00    	je     7a54b <core::ptr::drop_in_place<strategy_comm5::StrategyComm5>+0x10b>
   7a46e:	4c 8b bb b0 05 00 00 	mov    0x5b0(%rbx),%r15
   7a475:	4d 85 ff             	test   %r15,%r15
   7a478:	0f 84 9a 00 00 00    	je     7a518 <core::ptr::drop_in_place<strategy_comm5::StrategyComm5>+0xd8>
   7a47e:	48 8b 04 24          	mov    (%rsp),%rax
   7a482:	4c 8b a0 98 05 00 00 	mov    0x598(%rax),%r12
   7a489:	66 41 0f 6f 04 24    	movdqa (%r12),%xmm0
   7a48f:	66 0f d7 d8          	pmovmskb %xmm0,%ebx
   7a493:	f7 d3                	not    %ebx
   7a495:	4d 8d 6c 24 10       	lea    0x10(%r12),%r13
   7a49a:	48 8b 2d d7 97 08 00 	mov    0x897d7(%rip),%rbp        # 103c78 <_DYNAMIC+0x218>
   7a4a1:	eb 1c                	jmp    7a4bf <core::ptr::drop_in_place<strategy_comm5::StrategyComm5>+0x7f>
   7a4a3:	66 66 66 66 2e 0f 1f 	data16 data16 data16 cs nopw 0x0(%rax,%rax,1)
   7a4aa:	84 00 00 00 00 00 
   7a4b0:	49 ff cf             	dec    %r15
   7a4b3:	8d 43 ff             	lea    -0x1(%rbx),%eax
   7a4b6:	21 d8                	and    %ebx,%eax
   7a4b8:	89 c3                	mov    %eax,%ebx
   7a4ba:	4d 85 ff             	test   %r15,%r15
   7a4bd:	74 59                	je     7a518 <core::ptr::drop_in_place<strategy_comm5::StrategyComm5>+0xd8>
   7a4bf:	66 85 db             	test   %bx,%bx
   7a4c2:	75 2b                	jne    7a4ef <core::ptr::drop_in_place<strategy_comm5::StrategyComm5>+0xaf>
   7a4c4:	66 66 66 2e 0f 1f 84 	data16 data16 cs nopw 0x0(%rax,%rax,1)
   7a4cb:	00 00 00 00 00 
   7a4d0:	66 41 0f 6f 45 00    	movdqa 0x0(%r13),%xmm0
   7a4d6:	66 0f d7 d8          	pmovmskb %xmm0,%ebx
   7a4da:	49 81 c4 00 fd ff ff 	add    $0xfffffffffffffd00,%r12
   7a4e1:	49 83 c5 10          	add    $0x10,%r13
   7a4e5:	81 fb ff ff 00 00    	cmp    $0xffff,%ebx
   7a4eb:	74 e3                	je     7a4d0 <core::ptr::drop_in_place<strategy_comm5::StrategyComm5>+0x90>
   7a4ed:	f7 d3                	not    %ebx
   7a4ef:	f3 0f bc c3          	tzcnt  %ebx,%eax
   7a4f3:	48 f7 d8             	neg    %rax
   7a4f6:	48 8d 04 40          	lea    (%rax,%rax,2),%rax
   7a4fa:	48 c1 e0 04          	shl    $0x4,%rax
   7a4fe:	49 8b 74 04 d0       	mov    -0x30(%r12,%rax,1),%rsi
   7a503:	48 85 f6             	test   %rsi,%rsi
   7a506:	74 a8                	je     7a4b0 <core::ptr::drop_in_place<strategy_comm5::StrategyComm5>+0x70>
   7a508:	4c 01 e0             	add    %r12,%rax
   7a50b:	48 8b 78 d8          	mov    -0x28(%rax),%rdi
   7a50f:	ba 01 00 00 00       	mov    $0x1,%edx
   7a514:	ff d5                	call   *%rbp
   7a516:	eb 98                	jmp    7a4b0 <core::ptr::drop_in_place<strategy_comm5::StrategyComm5>+0x70>
   7a518:	49 6b f6 31          	imul   $0x31,%r14,%rsi
   7a51c:	48 83 c6 41          	add    $0x41,%rsi
   7a520:	48 8b 1c 24          	mov    (%rsp),%rbx
   7a524:	74 25                	je     7a54b <core::ptr::drop_in_place<strategy_comm5::StrategyComm5>+0x10b>
   7a526:	48 8b 83 98 05 00 00 	mov    0x598(%rbx),%rax
   7a52d:	49 c1 e6 04          	shl    $0x4,%r14
   7a531:	4b 8d 0c 76          	lea    (%r14,%r14,2),%rcx
   7a535:	48 f7 d9             	neg    %rcx
   7a538:	48 8d 3c 08          	lea    (%rax,%rcx,1),%rdi
   7a53c:	48 83 c7 d0          	add    $0xffffffffffffffd0,%rdi
   7a540:	ba 10 00 00 00       	mov    $0x10,%edx
   7a545:	ff 15 2d 97 08 00    	call   *0x8972d(%rip)        # 103c78 <_DYNAMIC+0x218>
   7a54b:	48 8d bb c8 05 00 00 	lea    0x5c8(%rbx),%rdi
   7a552:	e8 49 69 fe ff       	call   60ea0 <<hashbrown::raw::RawTable<T,A> as core::ops::drop::Drop>::drop>
   7a557:	48 89 df             	mov    %rbx,%rdi
   7a55a:	e8 21 04 00 00       	call   7a980 <core::ptr::drop_in_place<core::option::Option<strategy_comm5::Comm5Params>>>
   7a55f:	4c 8b b3 00 06 00 00 	mov    0x600(%rbx),%r14
   7a566:	4d 85 f6             	test   %r14,%r14
   7a569:	0f 84 d7 00 00 00    	je     7a646 <core::ptr::drop_in_place<strategy_comm5::StrategyComm5>+0x206>
   7a56f:	4c 8b bb 10 06 00 00 	mov    0x610(%rbx),%r15
   7a576:	4d 85 ff             	test   %r15,%r15
   7a579:	0f 84 93 00 00 00    	je     7a612 <core::ptr::drop_in_place<strategy_comm5::StrategyComm5>+0x1d2>
   7a57f:	48 8b 04 24          	mov    (%rsp),%rax
   7a583:	4c 8b a0 f8 05 00 00 	mov    0x5f8(%rax),%r12
   7a58a:	66 41 0f 6f 04 24    	movdqa (%r12),%xmm0
   7a590:	66 0f d7 d8          	pmovmskb %xmm0,%ebx
   7a594:	f7 d3                	not    %ebx
   7a596:	4d 8d 6c 24 10       	lea    0x10(%r12),%r13
   7a59b:	48 8b 2d d6 96 08 00 	mov    0x896d6(%rip),%rbp        # 103c78 <_DYNAMIC+0x218>
   7a5a2:	eb 1b                	jmp    7a5bf <core::ptr::drop_in_place<strategy_comm5::StrategyComm5>+0x17f>
   7a5a4:	66 66 66 2e 0f 1f 84 	data16 data16 cs nopw 0x0(%rax,%rax,1)
   7a5ab:	00 00 00 00 00 
   7a5b0:	49 ff cf             	dec    %r15
   7a5b3:	8d 43 ff             	lea    -0x1(%rbx),%eax
   7a5b6:	21 d8                	and    %ebx,%eax
   7a5b8:	89 c3                	mov    %eax,%ebx
   7a5ba:	4d 85 ff             	test   %r15,%r15
   7a5bd:	74 53                	je     7a612 <core::ptr::drop_in_place<strategy_comm5::StrategyComm5>+0x1d2>
   7a5bf:	66 85 db             	test   %bx,%bx
   7a5c2:	75 2b                	jne    7a5ef <core::ptr::drop_in_place<strategy_comm5::StrategyComm5>+0x1af>
   7a5c4:	66 66 66 2e 0f 1f 84 	data16 data16 cs nopw 0x0(%rax,%rax,1)
   7a5cb:	00 00 00 00 00 
   7a5d0:	66 41 0f 6f 45 00    	movdqa 0x0(%r13),%xmm0
   7a5d6:	66 0f d7 d8          	pmovmskb %xmm0,%ebx
   7a5da:	49 81 c4 00 fe ff ff 	add    $0xfffffffffffffe00,%r12
   7a5e1:	49 83 c5 10          	add    $0x10,%r13
   7a5e5:	81 fb ff ff 00 00    	cmp    $0xffff,%ebx
   7a5eb:	74 e3                	je     7a5d0 <core::ptr::drop_in_place<strategy_comm5::StrategyComm5>+0x190>
   7a5ed:	f7 d3                	not    %ebx
   7a5ef:	f3 0f bc cb          	tzcnt  %ebx,%ecx
   7a5f3:	c1 e1 05             	shl    $0x5,%ecx
   7a5f6:	4c 89 e0             	mov    %r12,%rax
   7a5f9:	48 29 c8             	sub    %rcx,%rax
   7a5fc:	48 8b 70 e0          	mov    -0x20(%rax),%rsi
   7a600:	48 85 f6             	test   %rsi,%rsi
   7a603:	74 ab                	je     7a5b0 <core::ptr::drop_in_place<strategy_comm5::StrategyComm5>+0x170>
   7a605:	48 8b 78 e8          	mov    -0x18(%rax),%rdi
   7a609:	ba 01 00 00 00       	mov    $0x1,%edx
   7a60e:	ff d5                	call   *%rbp
   7a610:	eb 9e                	jmp    7a5b0 <core::ptr::drop_in_place<strategy_comm5::StrategyComm5>+0x170>
   7a612:	4c 89 f0             	mov    %r14,%rax
   7a615:	48 c1 e0 05          	shl    $0x5,%rax
   7a619:	49 01 c6             	add    %rax,%r14
   7a61c:	49 83 c6 31          	add    $0x31,%r14
   7a620:	48 8b 1c 24          	mov    (%rsp),%rbx
   7a624:	74 20                	je     7a646 <core::ptr::drop_in_place<strategy_comm5::StrategyComm5>+0x206>
   7a626:	48 8b 8b f8 05 00 00 	mov    0x5f8(%rbx),%rcx
   7a62d:	48 f7 d8             	neg    %rax
   7a630:	48 8d 3c 01          	lea    (%rcx,%rax,1),%rdi
   7a634:	48 83 c7 e0          	add    $0xffffffffffffffe0,%rdi
   7a638:	ba 10 00 00 00       	mov    $0x10,%edx
   7a63d:	4c 89 f6             	mov    %r14,%rsi
   7a640:	ff 15 32 96 08 00    	call   *0x89632(%rip)        # 103c78 <_DYNAMIC+0x218>
   7a646:	4c 8b b3 30 06 00 00 	mov    0x630(%rbx),%r14
   7a64d:	4d 85 f6             	test   %r14,%r14
   7a650:	0f 84 de 00 00 00    	je     7a734 <core::ptr::drop_in_place<strategy_comm5::StrategyComm5>+0x2f4>
   7a656:	4c 8b bb 40 06 00 00 	mov    0x640(%rbx),%r15
   7a65d:	4d 85 ff             	test   %r15,%r15
   7a660:	0f 84 8c 00 00 00    	je     7a6f2 <core::ptr::drop_in_place<strategy_comm5::StrategyComm5>+0x2b2>
   7a666:	48 8b 04 24          	mov    (%rsp),%rax
   7a66a:	4c 8b a0 28 06 00 00 	mov    0x628(%rax),%r12
   7a671:	66 41 0f 6f 04 24    	movdqa (%r12),%xmm0
   7a677:	66 0f d7 d8          	pmovmskb %xmm0,%ebx
   7a67b:	f7 d3                	not    %ebx
   7a67d:	4d 8d 6c 24 10       	lea    0x10(%r12),%r13
   7a682:	48 8b 2d ef 95 08 00 	mov    0x895ef(%rip),%rbp        # 103c78 <_DYNAMIC+0x218>
   7a689:	eb 14                	jmp    7a69f <core::ptr::drop_in_place<strategy_comm5::StrategyComm5>+0x25f>
   7a68b:	0f 1f 44 00 00       	nopl   0x0(%rax,%rax,1)
   7a690:	49 ff cf             	dec    %r15
   7a693:	8d 43 ff             	lea    -0x1(%rbx),%eax
   7a696:	21 d8                	and    %ebx,%eax
   7a698:	89 c3                	mov    %eax,%ebx
   7a69a:	4d 85 ff             	test   %r15,%r15
   7a69d:	74 53                	je     7a6f2 <core::ptr::drop_in_place<strategy_comm5::StrategyComm5>+0x2b2>
   7a69f:	66 85 db             	test   %bx,%bx
   7a6a2:	75 2b                	jne    7a6cf <core::ptr::drop_in_place<strategy_comm5::StrategyComm5>+0x28f>
   7a6a4:	66 66 66 2e 0f 1f 84 	data16 data16 cs nopw 0x0(%rax,%rax,1)
   7a6ab:	00 00 00 00 00 
   7a6b0:	66 41 0f 6f 45 00    	movdqa 0x0(%r13),%xmm0
   7a6b6:	66 0f d7 d8          	pmovmskb %xmm0,%ebx
   7a6ba:	49 81 c4 00 fe ff ff 	add    $0xfffffffffffffe00,%r12
   7a6c1:	49 83 c5 10          	add    $0x10,%r13
   7a6c5:	81 fb ff ff 00 00    	cmp    $0xffff,%ebx
   7a6cb:	74 e3                	je     7a6b0 <core::ptr::drop_in_place<strategy_comm5::StrategyComm5>+0x270>
   7a6cd:	f7 d3                	not    %ebx
   7a6cf:	f3 0f bc cb          	tzcnt  %ebx,%ecx
   7a6d3:	c1 e1 05             	shl    $0x5,%ecx
   7a6d6:	4c 89 e0             	mov    %r12,%rax
   7a6d9:	48 29 c8             	sub    %rcx,%rax
   7a6dc:	48 8b 70 e0          	mov    -0x20(%rax),%rsi
   7a6e0:	48 85 f6             	test   %rsi,%rsi
   7a6e3:	74 ab                	je     7a690 <core::ptr::drop_in_place<strategy_comm5::StrategyComm5>+0x250>
   7a6e5:	48 8b 78 e8          	mov    -0x18(%rax),%rdi
   7a6e9:	ba 01 00 00 00       	mov    $0x1,%edx
   7a6ee:	ff d5                	call   *%rbp
   7a6f0:	eb 9e                	jmp    7a690 <core::ptr::drop_in_place<strategy_comm5::StrategyComm5>+0x250>
   7a6f2:	4c 89 f0             	mov    %r14,%rax
   7a6f5:	48 c1 e0 05          	shl    $0x5,%rax
   7a6f9:	49 01 c6             	add    %rax,%r14
   7a6fc:	49 83 c6 31          	add    $0x31,%r14
   7a700:	48 8b 0c 24          	mov    (%rsp),%rcx
   7a704:	74 2e                	je     7a734 <core::ptr::drop_in_place<strategy_comm5::StrategyComm5>+0x2f4>
   7a706:	48 8b 89 28 06 00 00 	mov    0x628(%rcx),%rcx
   7a70d:	48 f7 d8             	neg    %rax
   7a710:	48 8d 3c 01          	lea    (%rcx,%rax,1),%rdi
   7a714:	48 83 c7 e0          	add    $0xffffffffffffffe0,%rdi
   7a718:	ba 10 00 00 00       	mov    $0x10,%edx
   7a71d:	4c 89 f6             	mov    %r14,%rsi
   7a720:	48 83 c4 08          	add    $0x8,%rsp
   7a724:	5b                   	pop    %rbx
   7a725:	41 5c                	pop    %r12
   7a727:	41 5d                	pop    %r13
   7a729:	41 5e                	pop    %r14
   7a72b:	41 5f                	pop    %r15
   7a72d:	5d                   	pop    %rbp
   7a72e:	ff 25 44 95 08 00    	jmp    *0x89544(%rip)        # 103c78 <_DYNAMIC+0x218>
   7a734:	48 83 c4 08          	add    $0x8,%rsp
   7a738:	5b                   	pop    %rbx
   7a739:	41 5c                	pop    %r12
   7a73b:	41 5d                	pop    %r13
   7a73d:	41 5e                	pop    %r14
   7a73f:	41 5f                	pop    %r15
   7a741:	5d                   	pop    %rbp
   7a742:	c3                   	ret    
   7a743:	49 89 c6             	mov    %rax,%r14
   7a746:	eb 1f                	jmp    7a767 <core::ptr::drop_in_place<strategy_comm5::StrategyComm5>+0x327>
   7a748:	49 89 c6             	mov    %rax,%r14
   7a74b:	48 8d bb 98 05 00 00 	lea    0x598(%rbx),%rdi
   7a752:	e8 09 6a fe ff       	call   61160 <<hashbrown::raw::RawTable<T,A> as core::ops::drop::Drop>::drop>
   7a757:	48 8b 04 24          	mov    (%rsp),%rax
   7a75b:	48 8d b8 c8 05 00 00 	lea    0x5c8(%rax),%rdi
   7a762:	e8 39 67 fe ff       	call   60ea0 <<hashbrown::raw::RawTable<T,A> as core::ops::drop::Drop>::drop>
   7a767:	48 8b 1c 24          	mov    (%rsp),%rbx
   7a76b:	48 89 df             	mov    %rbx,%rdi
   7a76e:	e8 0d 02 00 00       	call   7a980 <core::ptr::drop_in_place<core::option::Option<strategy_comm5::Comm5Params>>>
   7a773:	48 8d bb f8 05 00 00 	lea    0x5f8(%rbx),%rdi
   7a77a:	e8 f1 63 fe ff       	call   60b70 <<hashbrown::raw::RawTable<T,A> as core::ops::drop::Drop>::drop>
   7a77f:	48 8b 3c 24          	mov    (%rsp),%rdi
   7a783:	48 81 c7 28 06 00 00 	add    $0x628,%rdi
   7a78a:	e8 f1 64 fe ff       	call   60c80 <<hashbrown::raw::RawTable<T,A> as core::ops::drop::Drop>::drop>
   7a78f:	4c 89 f7             	mov    %r14,%rdi
   7a792:	e8 e9 1d 08 00       	call   fc580 <_Unwind_Resume@plt>
   7a797:	ff 15 b3 95 08 00    	call   *0x895b3(%rip)        # 103d50 <_DYNAMIC+0x2f0>
   7a79d:	cc                   	int3   
   7a79e:	cc                   	int3   
   7a79f:	cc                   	int3   
