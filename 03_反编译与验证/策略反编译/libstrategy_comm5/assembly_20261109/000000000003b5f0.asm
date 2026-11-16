000000000003b5f0 <strategy_comm5::cancel_order_use_range>:
   3b5f0:	55                   	push   %rbp
   3b5f1:	41 57                	push   %r15
   3b5f3:	41 56                	push   %r14
   3b5f5:	41 55                	push   %r13
   3b5f7:	41 54                	push   %r12
   3b5f9:	53                   	push   %rbx
   3b5fa:	48 81 ec e8 00 00 00 	sub    $0xe8,%rsp
   3b601:	4c 89 c5             	mov    %r8,%rbp
   3b604:	f2 0f 11 4c 24 78    	movsd  %xmm1,0x78(%rsp)
   3b60a:	f2 0f 11 84 24 a0 00 	movsd  %xmm0,0xa0(%rsp)
   3b611:	00 00 
   3b613:	48 89 d0             	mov    %rdx,%rax
   3b616:	48 89 f2             	mov    %rsi,%rdx
   3b619:	48 89 fe             	mov    %rdi,%rsi
   3b61c:	88 4c 24 0e          	mov    %cl,0xe(%rsp)
   3b620:	80 f1 01             	xor    $0x1,%cl
   3b623:	88 4c 24 0f          	mov    %cl,0xf(%rsp)
   3b627:	48 8d bc 24 d0 00 00 	lea    0xd0(%rsp),%rdi
   3b62e:	00 
   3b62f:	48 89 b4 24 88 00 00 	mov    %rsi,0x88(%rsp)
   3b636:	00 
   3b637:	48 89 94 24 90 00 00 	mov    %rdx,0x90(%rsp)
   3b63e:	00 
   3b63f:	48 89 84 24 98 00 00 	mov    %rax,0x98(%rsp)
   3b646:	00 
   3b647:	48 89 c1             	mov    %rax,%rcx
   3b64a:	ff 15 e8 86 0c 00    	call   *0xc86e8(%rip)        # 103d38 <_DYNAMIC+0x2d8>
   3b650:	48 8b b4 24 d0 00 00 	mov    0xd0(%rsp),%rsi
   3b657:	00 
   3b658:	48 8b bc 24 d8 00 00 	mov    0xd8(%rsp),%rdi
   3b65f:	00 
   3b660:	48 8b 8c 24 e0 00 00 	mov    0xe0(%rsp),%rcx
   3b667:	00 
   3b668:	48 6b c1 58          	imul   $0x58,%rcx,%rax
   3b66c:	48 8d 14 07          	lea    (%rdi,%rax,1),%rdx
   3b670:	48 89 7c 24 50       	mov    %rdi,0x50(%rsp)
   3b675:	48 89 7c 24 58       	mov    %rdi,0x58(%rsp)
   3b67a:	48 89 74 24 60       	mov    %rsi,0x60(%rsp)
   3b67f:	48 89 54 24 30       	mov    %rdx,0x30(%rsp)
   3b684:	48 89 54 24 68       	mov    %rdx,0x68(%rsp)
   3b689:	48 8d 54 24 0f       	lea    0xf(%rsp),%rdx
   3b68e:	48 89 54 24 70       	mov    %rdx,0x70(%rsp)
   3b693:	48 85 c9             	test   %rcx,%rcx
   3b696:	48 89 6c 24 28       	mov    %rbp,0x28(%rsp)
   3b69b:	0f 84 17 02 00 00    	je     3b8b8 <strategy_comm5::cancel_order_use_range+0x2c8>
   3b6a1:	48 89 74 24 40       	mov    %rsi,0x40(%rsp)
   3b6a6:	48 8b 6c 24 58       	mov    0x58(%rsp),%rbp
   3b6ab:	4c 8d 3c 07          	lea    (%rdi,%rax,1),%r15
   3b6af:	49 83 c7 a8          	add    $0xffffffffffffffa8,%r15
   3b6b3:	48 89 7c 24 38       	mov    %rdi,0x38(%rsp)
   3b6b8:	48 89 f8             	mov    %rdi,%rax
   3b6bb:	4c 89 7c 24 48       	mov    %r15,0x48(%rsp)
   3b6c0:	49 29 c7             	sub    %rax,%r15
   3b6c3:	49 89 c5             	mov    %rax,%r13
   3b6c6:	eb 2a                	jmp    3b6f2 <strategy_comm5::cancel_order_use_range+0x102>
   3b6c8:	0f 1f 84 00 00 00 00 	nopl   0x0(%rax,%rax,1)
   3b6cf:	00 
   3b6d0:	48 b8 00 00 00 00 00 	movabs $0x8000000000000000,%rax
   3b6d7:	00 00 80 
   3b6da:	48 39 c3             	cmp    %rax,%rbx
   3b6dd:	75 71                	jne    3b750 <strategy_comm5::cancel_order_use_range+0x160>
   3b6df:	49 83 c5 58          	add    $0x58,%r13
   3b6e3:	49 83 c7 a8          	add    $0xffffffffffffffa8,%r15
   3b6e7:	4c 3b 6c 24 30       	cmp    0x30(%rsp),%r13
   3b6ec:	0f 84 b2 01 00 00    	je     3b8a4 <strategy_comm5::cancel_order_use_range+0x2b4>
   3b6f2:	49 8b 5d 00          	mov    0x0(%r13),%rbx
   3b6f6:	4d 8b 65 08          	mov    0x8(%r13),%r12
   3b6fa:	4d 8b 75 18          	mov    0x18(%r13),%r14
   3b6fe:	49 8b 45 20          	mov    0x20(%r13),%rax
   3b702:	48 89 44 24 10       	mov    %rax,0x10(%rsp)
   3b707:	41 0f b6 45 50       	movzbl 0x50(%r13),%eax
   3b70c:	3a 44 24 0f          	cmp    0xf(%rsp),%al
   3b710:	74 be                	je     3b6d0 <strategy_comm5::cancel_order_use_range+0xe0>
   3b712:	48 85 db             	test   %rbx,%rbx
   3b715:	74 11                	je     3b728 <strategy_comm5::cancel_order_use_range+0x138>
   3b717:	ba 01 00 00 00       	mov    $0x1,%edx
   3b71c:	4c 89 e7             	mov    %r12,%rdi
   3b71f:	48 89 de             	mov    %rbx,%rsi
   3b722:	ff 15 50 85 0c 00    	call   *0xc8550(%rip)        # 103c78 <_DYNAMIC+0x218>
   3b728:	4d 85 f6             	test   %r14,%r14
   3b72b:	74 b2                	je     3b6df <strategy_comm5::cancel_order_use_range+0xef>
   3b72d:	ba 01 00 00 00       	mov    $0x1,%edx
   3b732:	48 8b 7c 24 10       	mov    0x10(%rsp),%rdi
   3b737:	4c 89 f6             	mov    %r14,%rsi
   3b73a:	ff 15 38 85 0c 00    	call   *0xc8538(%rip)        # 103c78 <_DYNAMIC+0x218>
   3b740:	eb 9d                	jmp    3b6df <strategy_comm5::cancel_order_use_range+0xef>
   3b742:	66 66 66 66 66 2e 0f 	data16 data16 data16 data16 cs nopw 0x0(%rax,%rax,1)
   3b749:	1f 84 00 00 00 00 00 
   3b750:	49 8b 55 10          	mov    0x10(%r13),%rdx
   3b754:	48 8b 44 24 28       	mov    0x28(%rsp),%rax
   3b759:	48 8b 40 10          	mov    0x10(%rax),%rax
   3b75d:	48 85 c0             	test   %rax,%rax
   3b760:	48 89 54 24 20       	mov    %rdx,0x20(%rsp)
   3b765:	4c 89 74 24 18       	mov    %r14,0x18(%rsp)
   3b76a:	0f 84 90 00 00 00    	je     3b800 <strategy_comm5::cancel_order_use_range+0x210>
   3b770:	48 8b 4c 24 28       	mov    0x28(%rsp),%rcx
   3b775:	48 8b 49 08          	mov    0x8(%rcx),%rcx
   3b779:	48 8b 54 24 20       	mov    0x20(%rsp),%rdx
   3b77e:	48 c1 e0 03          	shl    $0x3,%rax
   3b782:	48 8d 04 40          	lea    (%rax,%rax,2),%rax
   3b786:	31 ed                	xor    %ebp,%ebp
   3b788:	48 89 84 24 80 00 00 	mov    %rax,0x80(%rsp)
   3b78f:	00 
   3b790:	eb 17                	jmp    3b7a9 <strategy_comm5::cancel_order_use_range+0x1b9>
   3b792:	66 66 66 66 66 2e 0f 	data16 data16 data16 data16 cs nopw 0x0(%rax,%rax,1)
   3b799:	1f 84 00 00 00 00 00 
   3b7a0:	48 83 c5 18          	add    $0x18,%rbp
   3b7a4:	48 39 e8             	cmp    %rbp,%rax
   3b7a7:	74 57                	je     3b800 <strategy_comm5::cancel_order_use_range+0x210>
   3b7a9:	48 39 54 29 10       	cmp    %rdx,0x10(%rcx,%rbp,1)
   3b7ae:	75 f0                	jne    3b7a0 <strategy_comm5::cancel_order_use_range+0x1b0>
   3b7b0:	48 8b 7c 29 08       	mov    0x8(%rcx,%rbp,1),%rdi
   3b7b5:	4c 89 e6             	mov    %r12,%rsi
   3b7b8:	49 89 ce             	mov    %rcx,%r14
   3b7bb:	ff 15 67 85 0c 00    	call   *0xc8567(%rip)        # 103d28 <bcmp@GLIBC_2.2.5>
   3b7c1:	4c 89 f1             	mov    %r14,%rcx
   3b7c4:	4c 8b 74 24 18       	mov    0x18(%rsp),%r14
   3b7c9:	48 8b 54 24 20       	mov    0x20(%rsp),%rdx
   3b7ce:	85 c0                	test   %eax,%eax
   3b7d0:	48 8b 84 24 80 00 00 	mov    0x80(%rsp),%rax
   3b7d7:	00 
   3b7d8:	75 c6                	jne    3b7a0 <strategy_comm5::cancel_order_use_range+0x1b0>
   3b7da:	48 85 db             	test   %rbx,%rbx
   3b7dd:	0f 84 8b 00 00 00    	je     3b86e <strategy_comm5::cancel_order_use_range+0x27e>
   3b7e3:	ba 01 00 00 00       	mov    $0x1,%edx
   3b7e8:	4c 89 e7             	mov    %r12,%rdi
   3b7eb:	48 89 de             	mov    %rbx,%rsi
   3b7ee:	ff 15 84 84 0c 00    	call   *0xc8484(%rip)        # 103c78 <_DYNAMIC+0x218>
   3b7f4:	eb 78                	jmp    3b86e <strategy_comm5::cancel_order_use_range+0x27e>
   3b7f6:	66 2e 0f 1f 84 00 00 	cs nopw 0x0(%rax,%rax,1)
   3b7fd:	00 00 00 
   3b800:	48 8b bc 24 88 00 00 	mov    0x88(%rsp),%rdi
   3b807:	00 
   3b808:	48 8b b4 24 90 00 00 	mov    0x90(%rsp),%rsi
   3b80f:	00 
   3b810:	49 89 d0             	mov    %rdx,%r8
   3b813:	48 8b 94 24 98 00 00 	mov    0x98(%rsp),%rdx
   3b81a:	00 
   3b81b:	4c 89 e1             	mov    %r12,%rcx
   3b81e:	ff 15 1c 85 0c 00    	call   *0xc851c(%rip)        # 103d40 <_DYNAMIC+0x2e0>
   3b824:	48 85 c0             	test   %rax,%rax
   3b827:	48 8b 6c 24 28       	mov    0x28(%rsp),%rbp
   3b82c:	0f 85 e0 03 00 00    	jne    3bc12 <strategy_comm5::cancel_order_use_range+0x622>
   3b832:	4c 8b 7d 10          	mov    0x10(%rbp),%r15
   3b836:	4c 3b 7d 00          	cmp    0x0(%rbp),%r15
   3b83a:	75 10                	jne    3b84c <strategy_comm5::cancel_order_use_range+0x25c>
   3b83c:	48 89 ef             	mov    %rbp,%rdi
   3b83f:	48 8d 35 7a 1e 0c 00 	lea    0xc1e7a(%rip),%rsi        # fd6c0 <anon.8868ba55c3fc5525a110cabbb60004d5.1.llvm.6579149275953927878+0xc8>
   3b846:	ff 15 fc 84 0c 00    	call   *0xc84fc(%rip)        # 103d48 <_DYNAMIC+0x2e8>
   3b84c:	48 8b 45 08          	mov    0x8(%rbp),%rax
   3b850:	4b 8d 0c 7f          	lea    (%r15,%r15,2),%rcx
   3b854:	48 89 1c c8          	mov    %rbx,(%rax,%rcx,8)
   3b858:	4c 89 64 c8 08       	mov    %r12,0x8(%rax,%rcx,8)
   3b85d:	48 8b 54 24 20       	mov    0x20(%rsp),%rdx
   3b862:	48 89 54 c8 10       	mov    %rdx,0x10(%rax,%rcx,8)
   3b867:	49 ff c7             	inc    %r15
   3b86a:	4c 89 7d 10          	mov    %r15,0x10(%rbp)
   3b86e:	4d 85 f6             	test   %r14,%r14
   3b871:	4c 8b 7c 24 48       	mov    0x48(%rsp),%r15
   3b876:	74 13                	je     3b88b <strategy_comm5::cancel_order_use_range+0x29b>
   3b878:	ba 01 00 00 00       	mov    $0x1,%edx
   3b87d:	48 8b 7c 24 10       	mov    0x10(%rsp),%rdi
   3b882:	4c 89 f6             	mov    %r14,%rsi
   3b885:	ff 15 ed 83 0c 00    	call   *0xc83ed(%rip)        # 103c78 <_DYNAMIC+0x218>
   3b88b:	49 8d 6d 58          	lea    0x58(%r13),%rbp
   3b88f:	48 89 e8             	mov    %rbp,%rax
   3b892:	48 3b 6c 24 30       	cmp    0x30(%rsp),%rbp
   3b897:	0f 85 23 fe ff ff    	jne    3b6c0 <strategy_comm5::cancel_order_use_range+0xd0>
   3b89d:	49 83 c5 58          	add    $0x58,%r13
   3b8a1:	4c 89 ed             	mov    %r13,%rbp
   3b8a4:	48 89 6c 24 58       	mov    %rbp,0x58(%rsp)
   3b8a9:	48 8b 7c 24 38       	mov    0x38(%rsp),%rdi
   3b8ae:	48 8b 74 24 40       	mov    0x40(%rsp),%rsi
   3b8b3:	48 8b 6c 24 28       	mov    0x28(%rsp),%rbp
   3b8b8:	48 85 f6             	test   %rsi,%rsi
   3b8bb:	74 0f                	je     3b8cc <strategy_comm5::cancel_order_use_range+0x2dc>
   3b8bd:	48 6b f6 58          	imul   $0x58,%rsi,%rsi
   3b8c1:	ba 08 00 00 00       	mov    $0x8,%edx
   3b8c6:	ff 15 ac 83 0c 00    	call   *0xc83ac(%rip)        # 103c78 <_DYNAMIC+0x218>
   3b8cc:	48 8d bc 24 b8 00 00 	lea    0xb8(%rsp),%rdi
   3b8d3:	00 
   3b8d4:	48 8b b4 24 88 00 00 	mov    0x88(%rsp),%rsi
   3b8db:	00 
   3b8dc:	48 8b 94 24 90 00 00 	mov    0x90(%rsp),%rdx
   3b8e3:	00 
   3b8e4:	48 8b 8c 24 98 00 00 	mov    0x98(%rsp),%rcx
   3b8eb:	00 
   3b8ec:	ff 15 46 84 0c 00    	call   *0xc8446(%rip)        # 103d38 <_DYNAMIC+0x2d8>
   3b8f2:	48 8b b4 24 b8 00 00 	mov    0xb8(%rsp),%rsi
   3b8f9:	00 
   3b8fa:	48 8b bc 24 c0 00 00 	mov    0xc0(%rsp),%rdi
   3b901:	00 
   3b902:	48 8b 8c 24 c8 00 00 	mov    0xc8(%rsp),%rcx
   3b909:	00 
   3b90a:	48 6b c1 58          	imul   $0x58,%rcx,%rax
   3b90e:	48 8d 14 07          	lea    (%rdi,%rax,1),%rdx
   3b912:	48 89 7c 24 50       	mov    %rdi,0x50(%rsp)
   3b917:	48 89 7c 24 58       	mov    %rdi,0x58(%rsp)
   3b91c:	48 89 74 24 60       	mov    %rsi,0x60(%rsp)
   3b921:	48 89 54 24 20       	mov    %rdx,0x20(%rsp)
   3b926:	48 89 54 24 68       	mov    %rdx,0x68(%rsp)
   3b92b:	48 8d 54 24 0e       	lea    0xe(%rsp),%rdx
   3b930:	48 89 54 24 70       	mov    %rdx,0x70(%rsp)
   3b935:	48 85 c9             	test   %rcx,%rcx
   3b938:	0f 84 ac 02 00 00    	je     3bbea <strategy_comm5::cancel_order_use_range+0x5fa>
   3b93e:	48 89 74 24 40       	mov    %rsi,0x40(%rsp)
   3b943:	f2 0f 10 84 24 a0 00 	movsd  0xa0(%rsp),%xmm0
   3b94a:	00 00 
   3b94c:	66 0f 28 d0          	movapd %xmm0,%xmm2
   3b950:	f2 0f 10 4c 24 78    	movsd  0x78(%rsp),%xmm1
   3b956:	f2 0f 58 d1          	addsd  %xmm1,%xmm2
   3b95a:	f2 0f 11 94 24 b0 00 	movsd  %xmm2,0xb0(%rsp)
   3b961:	00 00 
   3b963:	f2 0f 5c c1          	subsd  %xmm1,%xmm0
   3b967:	f2 0f 11 84 24 a0 00 	movsd  %xmm0,0xa0(%rsp)
   3b96e:	00 00 
   3b970:	48 8b 5c 24 58       	mov    0x58(%rsp),%rbx
   3b975:	4c 8d 3c 07          	lea    (%rdi,%rax,1),%r15
   3b979:	49 83 c7 a8          	add    $0xffffffffffffffa8,%r15
   3b97d:	48 89 7c 24 38       	mov    %rdi,0x38(%rsp)
   3b982:	48 89 f8             	mov    %rdi,%rax
   3b985:	4c 89 7c 24 48       	mov    %r15,0x48(%rsp)
   3b98a:	49 29 c7             	sub    %rax,%r15
   3b98d:	49 89 c5             	mov    %rax,%r13
   3b990:	eb 30                	jmp    3b9c2 <strategy_comm5::cancel_order_use_range+0x3d2>
   3b992:	66 66 66 66 66 2e 0f 	data16 data16 data16 data16 cs nopw 0x0(%rax,%rax,1)
   3b999:	1f 84 00 00 00 00 00 
   3b9a0:	48 b8 00 00 00 00 00 	movabs $0x8000000000000000,%rax
   3b9a7:	00 00 80 
   3b9aa:	49 39 c4             	cmp    %rax,%r12
   3b9ad:	75 71                	jne    3ba20 <strategy_comm5::cancel_order_use_range+0x430>
   3b9af:	49 83 c5 58          	add    $0x58,%r13
   3b9b3:	49 83 c7 a8          	add    $0xffffffffffffffa8,%r15
   3b9b7:	4c 3b 6c 24 20       	cmp    0x20(%rsp),%r13
   3b9bc:	0f 84 19 02 00 00    	je     3bbdb <strategy_comm5::cancel_order_use_range+0x5eb>
   3b9c2:	4d 8b 65 00          	mov    0x0(%r13),%r12
   3b9c6:	49 8b 7d 08          	mov    0x8(%r13),%rdi
   3b9ca:	49 8b 45 18          	mov    0x18(%r13),%rax
   3b9ce:	48 89 44 24 10       	mov    %rax,0x10(%rsp)
   3b9d3:	49 8b 45 20          	mov    0x20(%r13),%rax
   3b9d7:	48 89 44 24 30       	mov    %rax,0x30(%rsp)
   3b9dc:	45 0f b6 75 50       	movzbl 0x50(%r13),%r14d
   3b9e1:	44 3a 74 24 0e       	cmp    0xe(%rsp),%r14b
   3b9e6:	74 b8                	je     3b9a0 <strategy_comm5::cancel_order_use_range+0x3b0>
   3b9e8:	4d 85 e4             	test   %r12,%r12
   3b9eb:	74 0e                	je     3b9fb <strategy_comm5::cancel_order_use_range+0x40b>
   3b9ed:	ba 01 00 00 00       	mov    $0x1,%edx
   3b9f2:	4c 89 e6             	mov    %r12,%rsi
   3b9f5:	ff 15 7d 82 0c 00    	call   *0xc827d(%rip)        # 103c78 <_DYNAMIC+0x218>
   3b9fb:	48 83 7c 24 10 00    	cmpq   $0x0,0x10(%rsp)
   3ba01:	74 ac                	je     3b9af <strategy_comm5::cancel_order_use_range+0x3bf>
   3ba03:	ba 01 00 00 00       	mov    $0x1,%edx
   3ba08:	48 8b 7c 24 30       	mov    0x30(%rsp),%rdi
   3ba0d:	48 8b 74 24 10       	mov    0x10(%rsp),%rsi
   3ba12:	ff 15 60 82 0c 00    	call   *0xc8260(%rip)        # 103c78 <_DYNAMIC+0x218>
   3ba18:	eb 95                	jmp    3b9af <strategy_comm5::cancel_order_use_range+0x3bf>
   3ba1a:	66 0f 1f 44 00 00    	nopw   0x0(%rax,%rax,1)
   3ba20:	49 8b 5d 10          	mov    0x10(%r13),%rbx
   3ba24:	f2 41 0f 10 45 30    	movsd  0x30(%r13),%xmm0
   3ba2a:	f2 0f 11 84 24 a8 00 	movsd  %xmm0,0xa8(%rsp)
   3ba31:	00 00 
   3ba33:	48 8b 45 10          	mov    0x10(%rbp),%rax
   3ba37:	48 85 c0             	test   %rax,%rax
   3ba3a:	48 89 7c 24 18       	mov    %rdi,0x18(%rsp)
   3ba3f:	0f 84 9b 00 00 00    	je     3bae0 <strategy_comm5::cancel_order_use_range+0x4f0>
   3ba45:	48 8b 4c 24 28       	mov    0x28(%rsp),%rcx
   3ba4a:	48 8b 49 08          	mov    0x8(%rcx),%rcx
   3ba4e:	48 8b 7c 24 18       	mov    0x18(%rsp),%rdi
   3ba53:	48 c1 e0 03          	shl    $0x3,%rax
   3ba57:	48 8d 04 40          	lea    (%rax,%rax,2),%rax
   3ba5b:	31 ed                	xor    %ebp,%ebp
   3ba5d:	48 89 8c 24 80 00 00 	mov    %rcx,0x80(%rsp)
   3ba64:	00 
   3ba65:	48 89 44 24 78       	mov    %rax,0x78(%rsp)
   3ba6a:	eb 0d                	jmp    3ba79 <strategy_comm5::cancel_order_use_range+0x489>
   3ba6c:	0f 1f 40 00          	nopl   0x0(%rax)
   3ba70:	48 83 c5 18          	add    $0x18,%rbp
   3ba74:	48 39 e8             	cmp    %rbp,%rax
   3ba77:	74 67                	je     3bae0 <strategy_comm5::cancel_order_use_range+0x4f0>
   3ba79:	48 39 5c 29 10       	cmp    %rbx,0x10(%rcx,%rbp,1)
   3ba7e:	75 f0                	jne    3ba70 <strategy_comm5::cancel_order_use_range+0x480>
   3ba80:	48 89 fe             	mov    %rdi,%rsi
   3ba83:	48 8b 7c 29 08       	mov    0x8(%rcx,%rbp,1),%rdi
   3ba88:	48 89 da             	mov    %rbx,%rdx
   3ba8b:	ff 15 97 82 0c 00    	call   *0xc8297(%rip)        # 103d28 <bcmp@GLIBC_2.2.5>
   3ba91:	48 8b 8c 24 80 00 00 	mov    0x80(%rsp),%rcx
   3ba98:	00 
   3ba99:	48 8b 7c 24 18       	mov    0x18(%rsp),%rdi
   3ba9e:	85 c0                	test   %eax,%eax
   3baa0:	48 8b 44 24 78       	mov    0x78(%rsp),%rax
   3baa5:	75 c9                	jne    3ba70 <strategy_comm5::cancel_order_use_range+0x480>
   3baa7:	4d 85 e4             	test   %r12,%r12
   3baaa:	74 0e                	je     3baba <strategy_comm5::cancel_order_use_range+0x4ca>
   3baac:	ba 01 00 00 00       	mov    $0x1,%edx
   3bab1:	4c 89 e6             	mov    %r12,%rsi
   3bab4:	ff 15 be 81 0c 00    	call   *0xc81be(%rip)        # 103c78 <_DYNAMIC+0x218>
   3baba:	48 8b 74 24 10       	mov    0x10(%rsp),%rsi
   3babf:	48 85 f6             	test   %rsi,%rsi
   3bac2:	48 8b 6c 24 28       	mov    0x28(%rsp),%rbp
   3bac7:	0f 85 e0 00 00 00    	jne    3bbad <strategy_comm5::cancel_order_use_range+0x5bd>
   3bacd:	e9 eb 00 00 00       	jmp    3bbbd <strategy_comm5::cancel_order_use_range+0x5cd>
   3bad2:	66 66 66 66 66 2e 0f 	data16 data16 data16 data16 cs nopw 0x0(%rax,%rax,1)
   3bad9:	1f 84 00 00 00 00 00 
   3bae0:	48 89 f8             	mov    %rdi,%rax
   3bae3:	41 f6 c6 01          	test   $0x1,%r14b
   3bae7:	74 38                	je     3bb21 <strategy_comm5::cancel_order_use_range+0x531>
   3bae9:	f2 0f 10 84 24 a0 00 	movsd  0xa0(%rsp),%xmm0
   3baf0:	00 00 
   3baf2:	66 0f 2e 84 24 a8 00 	ucomisd 0xa8(%rsp),%xmm0
   3baf9:	00 00 
   3bafb:	48 8b 6c 24 28       	mov    0x28(%rsp),%rbp
   3bb00:	77 38                	ja     3bb3a <strategy_comm5::cancel_order_use_range+0x54a>
   3bb02:	4d 85 e4             	test   %r12,%r12
   3bb05:	0f 84 98 00 00 00    	je     3bba3 <strategy_comm5::cancel_order_use_range+0x5b3>
   3bb0b:	ba 01 00 00 00       	mov    $0x1,%edx
   3bb10:	48 89 c7             	mov    %rax,%rdi
   3bb13:	4c 89 e6             	mov    %r12,%rsi
   3bb16:	ff 15 5c 81 0c 00    	call   *0xc815c(%rip)        # 103c78 <_DYNAMIC+0x218>
   3bb1c:	e9 82 00 00 00       	jmp    3bba3 <strategy_comm5::cancel_order_use_range+0x5b3>
   3bb21:	f2 0f 10 84 24 a8 00 	movsd  0xa8(%rsp),%xmm0
   3bb28:	00 00 
   3bb2a:	66 0f 2e 84 24 b0 00 	ucomisd 0xb0(%rsp),%xmm0
   3bb31:	00 00 
   3bb33:	48 8b 6c 24 28       	mov    0x28(%rsp),%rbp
   3bb38:	76 c8                	jbe    3bb02 <strategy_comm5::cancel_order_use_range+0x512>
   3bb3a:	48 8b bc 24 88 00 00 	mov    0x88(%rsp),%rdi
   3bb41:	00 
   3bb42:	48 8b b4 24 90 00 00 	mov    0x90(%rsp),%rsi
   3bb49:	00 
   3bb4a:	49 89 d8             	mov    %rbx,%r8
   3bb4d:	48 8b 94 24 98 00 00 	mov    0x98(%rsp),%rdx
   3bb54:	00 
   3bb55:	48 89 c1             	mov    %rax,%rcx
   3bb58:	ff 15 e2 81 0c 00    	call   *0xc81e2(%rip)        # 103d40 <_DYNAMIC+0x2e0>
   3bb5e:	48 85 c0             	test   %rax,%rax
   3bb61:	0f 85 6e 01 00 00    	jne    3bcd5 <strategy_comm5::cancel_order_use_range+0x6e5>
   3bb67:	4c 8b 75 10          	mov    0x10(%rbp),%r14
   3bb6b:	4c 3b 75 00          	cmp    0x0(%rbp),%r14
   3bb6f:	75 10                	jne    3bb81 <strategy_comm5::cancel_order_use_range+0x591>
   3bb71:	48 89 ef             	mov    %rbp,%rdi
   3bb74:	48 8d 35 5d 1b 0c 00 	lea    0xc1b5d(%rip),%rsi        # fd6d8 <anon.8868ba55c3fc5525a110cabbb60004d5.1.llvm.6579149275953927878+0xe0>
   3bb7b:	ff 15 c7 81 0c 00    	call   *0xc81c7(%rip)        # 103d48 <_DYNAMIC+0x2e8>
   3bb81:	48 8b 45 08          	mov    0x8(%rbp),%rax
   3bb85:	4b 8d 0c 76          	lea    (%r14,%r14,2),%rcx
   3bb89:	4c 89 24 c8          	mov    %r12,(%rax,%rcx,8)
   3bb8d:	48 8b 54 24 18       	mov    0x18(%rsp),%rdx
   3bb92:	48 89 54 c8 08       	mov    %rdx,0x8(%rax,%rcx,8)
   3bb97:	48 89 5c c8 10       	mov    %rbx,0x10(%rax,%rcx,8)
   3bb9c:	49 ff c6             	inc    %r14
   3bb9f:	4c 89 75 10          	mov    %r14,0x10(%rbp)
   3bba3:	48 8b 74 24 10       	mov    0x10(%rsp),%rsi
   3bba8:	48 85 f6             	test   %rsi,%rsi
   3bbab:	74 10                	je     3bbbd <strategy_comm5::cancel_order_use_range+0x5cd>
   3bbad:	ba 01 00 00 00       	mov    $0x1,%edx
   3bbb2:	48 8b 7c 24 30       	mov    0x30(%rsp),%rdi
   3bbb7:	ff 15 bb 80 0c 00    	call   *0xc80bb(%rip)        # 103c78 <_DYNAMIC+0x218>
   3bbbd:	49 8d 5d 58          	lea    0x58(%r13),%rbx
   3bbc1:	48 89 d8             	mov    %rbx,%rax
   3bbc4:	48 3b 5c 24 20       	cmp    0x20(%rsp),%rbx
   3bbc9:	4c 8b 7c 24 48       	mov    0x48(%rsp),%r15
   3bbce:	0f 85 b6 fd ff ff    	jne    3b98a <strategy_comm5::cancel_order_use_range+0x39a>
   3bbd4:	49 83 c5 58          	add    $0x58,%r13
   3bbd8:	4c 89 eb             	mov    %r13,%rbx
   3bbdb:	48 89 5c 24 58       	mov    %rbx,0x58(%rsp)
   3bbe0:	48 8b 7c 24 38       	mov    0x38(%rsp),%rdi
   3bbe5:	48 8b 74 24 40       	mov    0x40(%rsp),%rsi
   3bbea:	48 85 f6             	test   %rsi,%rsi
   3bbed:	74 0f                	je     3bbfe <strategy_comm5::cancel_order_use_range+0x60e>
   3bbef:	48 6b f6 58          	imul   $0x58,%rsi,%rsi
   3bbf3:	ba 08 00 00 00       	mov    $0x8,%edx
   3bbf8:	ff 15 7a 80 0c 00    	call   *0xc807a(%rip)        # 103c78 <_DYNAMIC+0x218>
   3bbfe:	31 c0                	xor    %eax,%eax
   3bc00:	48 81 c4 e8 00 00 00 	add    $0xe8,%rsp
   3bc07:	5b                   	pop    %rbx
   3bc08:	41 5c                	pop    %r12
   3bc0a:	41 5d                	pop    %r13
   3bc0c:	41 5e                	pop    %r14
   3bc0e:	41 5f                	pop    %r15
   3bc10:	5d                   	pop    %rbp
   3bc11:	c3                   	ret    
   3bc12:	48 89 44 24 20       	mov    %rax,0x20(%rsp)
   3bc17:	49 8d 6d 58          	lea    0x58(%r13),%rbp
   3bc1b:	48 89 6c 24 58       	mov    %rbp,0x58(%rsp)
   3bc20:	48 85 db             	test   %rbx,%rbx
   3bc23:	74 11                	je     3bc36 <strategy_comm5::cancel_order_use_range+0x646>
   3bc25:	ba 01 00 00 00       	mov    $0x1,%edx
   3bc2a:	4c 89 e7             	mov    %r12,%rdi
   3bc2d:	48 89 de             	mov    %rbx,%rsi
   3bc30:	ff 15 42 80 0c 00    	call   *0xc8042(%rip)        # 103c78 <_DYNAMIC+0x218>
   3bc36:	4d 85 f6             	test   %r14,%r14
   3bc39:	74 13                	je     3bc4e <strategy_comm5::cancel_order_use_range+0x65e>
   3bc3b:	ba 01 00 00 00       	mov    $0x1,%edx
   3bc40:	48 8b 7c 24 10       	mov    0x10(%rsp),%rdi
   3bc45:	4c 89 f6             	mov    %r14,%rsi
   3bc48:	ff 15 2a 80 0c 00    	call   *0xc802a(%rip)        # 103c78 <_DYNAMIC+0x218>
   3bc4e:	48 3b 6c 24 30       	cmp    0x30(%rsp),%rbp
   3bc53:	74 58                	je     3bcad <strategy_comm5::cancel_order_use_range+0x6bd>
   3bc55:	49 83 c5 78          	add    $0x78,%r13
   3bc59:	48 b9 a3 8b 2e ba e8 	movabs $0x2e8ba2e8ba2e8ba3,%rcx
   3bc60:	a2 8b 2e 
   3bc63:	4c 89 f8             	mov    %r15,%rax
   3bc66:	48 f7 e1             	mul    %rcx
   3bc69:	48 89 d3             	mov    %rdx,%rbx
   3bc6c:	48 c1 eb 04          	shr    $0x4,%rbx
   3bc70:	eb 09                	jmp    3bc7b <strategy_comm5::cancel_order_use_range+0x68b>
   3bc72:	49 83 c5 58          	add    $0x58,%r13
   3bc76:	48 ff cb             	dec    %rbx
   3bc79:	74 32                	je     3bcad <strategy_comm5::cancel_order_use_range+0x6bd>
   3bc7b:	49 8b 75 e0          	mov    -0x20(%r13),%rsi
   3bc7f:	48 85 f6             	test   %rsi,%rsi
   3bc82:	74 0f                	je     3bc93 <strategy_comm5::cancel_order_use_range+0x6a3>
   3bc84:	49 8b 7d e8          	mov    -0x18(%r13),%rdi
   3bc88:	ba 01 00 00 00       	mov    $0x1,%edx
   3bc8d:	ff 15 e5 7f 0c 00    	call   *0xc7fe5(%rip)        # 103c78 <_DYNAMIC+0x218>
   3bc93:	49 8b 75 f8          	mov    -0x8(%r13),%rsi
   3bc97:	48 85 f6             	test   %rsi,%rsi
   3bc9a:	74 d6                	je     3bc72 <strategy_comm5::cancel_order_use_range+0x682>
   3bc9c:	49 8b 7d 00          	mov    0x0(%r13),%rdi
   3bca0:	ba 01 00 00 00       	mov    $0x1,%edx
   3bca5:	ff 15 cd 7f 0c 00    	call   *0xc7fcd(%rip)        # 103c78 <_DYNAMIC+0x218>
   3bcab:	eb c5                	jmp    3bc72 <strategy_comm5::cancel_order_use_range+0x682>
   3bcad:	48 8b 44 24 40       	mov    0x40(%rsp),%rax
   3bcb2:	48 85 c0             	test   %rax,%rax
   3bcb5:	74 14                	je     3bccb <strategy_comm5::cancel_order_use_range+0x6db>
   3bcb7:	48 6b f0 58          	imul   $0x58,%rax,%rsi
   3bcbb:	ba 08 00 00 00       	mov    $0x8,%edx
   3bcc0:	48 8b 7c 24 38       	mov    0x38(%rsp),%rdi
   3bcc5:	ff 15 ad 7f 0c 00    	call   *0xc7fad(%rip)        # 103c78 <_DYNAMIC+0x218>
   3bccb:	48 8b 44 24 20       	mov    0x20(%rsp),%rax
   3bcd0:	e9 2b ff ff ff       	jmp    3bc00 <strategy_comm5::cancel_order_use_range+0x610>
   3bcd5:	48 89 c5             	mov    %rax,%rbp
   3bcd8:	4d 8d 75 58          	lea    0x58(%r13),%r14
   3bcdc:	4c 89 74 24 58       	mov    %r14,0x58(%rsp)
   3bce1:	4d 85 e4             	test   %r12,%r12
   3bce4:	74 13                	je     3bcf9 <strategy_comm5::cancel_order_use_range+0x709>
   3bce6:	ba 01 00 00 00       	mov    $0x1,%edx
   3bceb:	48 8b 7c 24 18       	mov    0x18(%rsp),%rdi
   3bcf0:	4c 89 e6             	mov    %r12,%rsi
   3bcf3:	ff 15 7f 7f 0c 00    	call   *0xc7f7f(%rip)        # 103c78 <_DYNAMIC+0x218>
   3bcf9:	48 8b 74 24 10       	mov    0x10(%rsp),%rsi
   3bcfe:	48 85 f6             	test   %rsi,%rsi
   3bd01:	74 10                	je     3bd13 <strategy_comm5::cancel_order_use_range+0x723>
   3bd03:	ba 01 00 00 00       	mov    $0x1,%edx
   3bd08:	48 8b 7c 24 30       	mov    0x30(%rsp),%rdi
   3bd0d:	ff 15 65 7f 0c 00    	call   *0xc7f65(%rip)        # 103c78 <_DYNAMIC+0x218>
   3bd13:	4c 3b 74 24 20       	cmp    0x20(%rsp),%r14
   3bd18:	74 58                	je     3bd72 <strategy_comm5::cancel_order_use_range+0x782>
   3bd1a:	49 83 c5 78          	add    $0x78,%r13
   3bd1e:	48 b9 a3 8b 2e ba e8 	movabs $0x2e8ba2e8ba2e8ba3,%rcx
   3bd25:	a2 8b 2e 
   3bd28:	4c 89 f8             	mov    %r15,%rax
   3bd2b:	48 f7 e1             	mul    %rcx
   3bd2e:	48 89 d3             	mov    %rdx,%rbx
   3bd31:	48 c1 eb 04          	shr    $0x4,%rbx
   3bd35:	eb 09                	jmp    3bd40 <strategy_comm5::cancel_order_use_range+0x750>
   3bd37:	49 83 c5 58          	add    $0x58,%r13
   3bd3b:	48 ff cb             	dec    %rbx
   3bd3e:	74 32                	je     3bd72 <strategy_comm5::cancel_order_use_range+0x782>
   3bd40:	49 8b 75 e0          	mov    -0x20(%r13),%rsi
   3bd44:	48 85 f6             	test   %rsi,%rsi
   3bd47:	74 0f                	je     3bd58 <strategy_comm5::cancel_order_use_range+0x768>
   3bd49:	49 8b 7d e8          	mov    -0x18(%r13),%rdi
   3bd4d:	ba 01 00 00 00       	mov    $0x1,%edx
   3bd52:	ff 15 20 7f 0c 00    	call   *0xc7f20(%rip)        # 103c78 <_DYNAMIC+0x218>
   3bd58:	49 8b 75 f8          	mov    -0x8(%r13),%rsi
   3bd5c:	48 85 f6             	test   %rsi,%rsi
   3bd5f:	74 d6                	je     3bd37 <strategy_comm5::cancel_order_use_range+0x747>
   3bd61:	49 8b 7d 00          	mov    0x0(%r13),%rdi
   3bd65:	ba 01 00 00 00       	mov    $0x1,%edx
   3bd6a:	ff 15 08 7f 0c 00    	call   *0xc7f08(%rip)        # 103c78 <_DYNAMIC+0x218>
   3bd70:	eb c5                	jmp    3bd37 <strategy_comm5::cancel_order_use_range+0x747>
   3bd72:	48 8b 44 24 40       	mov    0x40(%rsp),%rax
   3bd77:	48 85 c0             	test   %rax,%rax
   3bd7a:	74 14                	je     3bd90 <strategy_comm5::cancel_order_use_range+0x7a0>
   3bd7c:	48 6b f0 58          	imul   $0x58,%rax,%rsi
   3bd80:	ba 08 00 00 00       	mov    $0x8,%edx
   3bd85:	48 8b 7c 24 38       	mov    0x38(%rsp),%rdi
   3bd8a:	ff 15 e8 7e 0c 00    	call   *0xc7ee8(%rip)        # 103c78 <_DYNAMIC+0x218>
   3bd90:	48 89 e8             	mov    %rbp,%rax
   3bd93:	e9 68 fe ff ff       	jmp    3bc00 <strategy_comm5::cancel_order_use_range+0x610>
   3bd98:	eb 02                	jmp    3bd9c <strategy_comm5::cancel_order_use_range+0x7ac>
   3bd9a:	eb 53                	jmp    3bdef <strategy_comm5::cancel_order_use_range+0x7ff>
   3bd9c:	49 89 c7             	mov    %rax,%r15
   3bd9f:	49 83 c5 58          	add    $0x58,%r13
   3bda3:	4c 89 6c 24 58       	mov    %r13,0x58(%rsp)
   3bda8:	4d 85 e4             	test   %r12,%r12
   3bdab:	74 13                	je     3bdc0 <strategy_comm5::cancel_order_use_range+0x7d0>
   3bdad:	ba 01 00 00 00       	mov    $0x1,%edx
   3bdb2:	48 8b 7c 24 18       	mov    0x18(%rsp),%rdi
   3bdb7:	4c 89 e6             	mov    %r12,%rsi
   3bdba:	ff 15 b8 7e 0c 00    	call   *0xc7eb8(%rip)        # 103c78 <_DYNAMIC+0x218>
   3bdc0:	48 83 7c 24 10 00    	cmpq   $0x0,0x10(%rsp)
   3bdc6:	74 15                	je     3bddd <strategy_comm5::cancel_order_use_range+0x7ed>
   3bdc8:	ba 01 00 00 00       	mov    $0x1,%edx
   3bdcd:	48 8b 7c 24 30       	mov    0x30(%rsp),%rdi
   3bdd2:	48 8b 74 24 10       	mov    0x10(%rsp),%rsi
   3bdd7:	ff 15 9b 7e 0c 00    	call   *0xc7e9b(%rip)        # 103c78 <_DYNAMIC+0x218>
   3bddd:	48 8d 7c 24 50       	lea    0x50(%rsp),%rdi
   3bde2:	e8 89 94 04 00       	call   85270 <<alloc::vec::into_iter::IntoIter<T,A> as core::ops::drop::Drop>::drop>
   3bde7:	eb 4f                	jmp    3be38 <strategy_comm5::cancel_order_use_range+0x848>
   3bde9:	ff 15 61 7f 0c 00    	call   *0xc7f61(%rip)        # 103d50 <_DYNAMIC+0x2f0>
   3bdef:	49 89 c7             	mov    %rax,%r15
   3bdf2:	49 83 c5 58          	add    $0x58,%r13
   3bdf6:	4c 89 6c 24 58       	mov    %r13,0x58(%rsp)
   3bdfb:	48 85 db             	test   %rbx,%rbx
   3bdfe:	74 11                	je     3be11 <strategy_comm5::cancel_order_use_range+0x821>
   3be00:	ba 01 00 00 00       	mov    $0x1,%edx
   3be05:	4c 89 e7             	mov    %r12,%rdi
   3be08:	48 89 de             	mov    %rbx,%rsi
   3be0b:	ff 15 67 7e 0c 00    	call   *0xc7e67(%rip)        # 103c78 <_DYNAMIC+0x218>
   3be11:	48 83 7c 24 18 00    	cmpq   $0x0,0x18(%rsp)
   3be17:	74 15                	je     3be2e <strategy_comm5::cancel_order_use_range+0x83e>
   3be19:	ba 01 00 00 00       	mov    $0x1,%edx
   3be1e:	48 8b 7c 24 10       	mov    0x10(%rsp),%rdi
   3be23:	48 8b 74 24 18       	mov    0x18(%rsp),%rsi
   3be28:	ff 15 4a 7e 0c 00    	call   *0xc7e4a(%rip)        # 103c78 <_DYNAMIC+0x218>
   3be2e:	48 8d 7c 24 50       	lea    0x50(%rsp),%rdi
   3be33:	e8 38 94 04 00       	call   85270 <<alloc::vec::into_iter::IntoIter<T,A> as core::ops::drop::Drop>::drop>
   3be38:	4c 89 ff             	mov    %r15,%rdi
   3be3b:	e8 40 07 0c 00       	call   fc580 <_Unwind_Resume@plt>
   3be40:	ff 15 0a 7f 0c 00    	call   *0xc7f0a(%rip)        # 103d50 <_DYNAMIC+0x2f0>
   3be46:	cc                   	int3   
   3be47:	cc                   	int3   
   3be48:	cc                   	int3   
   3be49:	cc                   	int3   
   3be4a:	cc                   	int3   
   3be4b:	cc                   	int3   
   3be4c:	cc                   	int3   
   3be4d:	cc                   	int3   
   3be4e:	cc                   	int3   
   3be4f:	cc                   	int3   
