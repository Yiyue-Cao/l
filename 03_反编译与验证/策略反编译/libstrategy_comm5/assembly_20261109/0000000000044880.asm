0000000000044880 <<strategy_comm5::StrategyComm5 as future_backtest_sdk::plugin::StrategyPlugin>::on_depth>:
   44880:	48 83 bf b0 05 00 00 	cmpq   $0x0,0x5b0(%rdi)
   44887:	00 
   44888:	0f 84 ca 01 00 00    	je     44a58 <<strategy_comm5::StrategyComm5 as future_backtest_sdk::plugin::StrategyPlugin>::on_depth+0x1d8>
   4488e:	55                   	push   %rbp
   4488f:	41 57                	push   %r15
   44891:	41 56                	push   %r14
   44893:	41 55                	push   %r13
   44895:	41 54                	push   %r12
   44897:	53                   	push   %rbx
   44898:	48 81 ec 98 00 00 00 	sub    $0x98,%rsp
   4489f:	49 89 f6             	mov    %rsi,%r14
   448a2:	48 83 c6 20          	add    $0x20,%rsi
   448a6:	48 8d 87 98 05 00 00 	lea    0x598(%rdi),%rax
   448ad:	48 89 44 24 30       	mov    %rax,0x30(%rsp)
   448b2:	48 8d 87 b8 05 00 00 	lea    0x5b8(%rdi),%rax
   448b9:	48 89 fb             	mov    %rdi,%rbx
   448bc:	48 89 44 24 28       	mov    %rax,0x28(%rsp)
   448c1:	48 89 c7             	mov    %rax,%rdi
   448c4:	48 89 74 24 38       	mov    %rsi,0x38(%rsp)
   448c9:	e8 d2 ad 03 00       	call   7f6a0 <core::hash::BuildHasher::hash_one>
   448ce:	48 89 c1             	mov    %rax,%rcx
   448d1:	48 c1 e9 39          	shr    $0x39,%rcx
   448d5:	48 8b bb 98 05 00 00 	mov    0x598(%rbx),%rdi
   448dc:	48 8b b3 a0 05 00 00 	mov    0x5a0(%rbx),%rsi
   448e3:	66 0f 6e c1          	movd   %ecx,%xmm0
   448e7:	66 0f 60 c0          	punpcklbw %xmm0,%xmm0
   448eb:	f2 0f 70 c0 00       	pshuflw $0x0,%xmm0,%xmm0
   448f0:	66 0f 70 c8 00       	pshufd $0x0,%xmm0,%xmm1
   448f5:	48 8d 6f d0          	lea    -0x30(%rdi),%rbp
   448f9:	4d 8b 6e 28          	mov    0x28(%r14),%r13
   448fd:	49 8b 56 30          	mov    0x30(%r14),%rdx
   44901:	45 31 c0             	xor    %r8d,%r8d
   44904:	66 0f 76 d2          	pcmpeqd %xmm2,%xmm2
   44908:	4c 8b 3d 19 f4 0b 00 	mov    0xbf419(%rip),%r15        # 103d28 <bcmp@GLIBC_2.2.5>
   4490f:	48 21 f0             	and    %rsi,%rax
   44912:	f3 0f 6f 1c 07       	movdqu (%rdi,%rax,1),%xmm3
   44917:	66 0f 6f c3          	movdqa %xmm3,%xmm0
   4491b:	66 0f 74 c1          	pcmpeqb %xmm1,%xmm0
   4491f:	66 0f d7 c8          	pmovmskb %xmm0,%ecx
   44923:	85 c9                	test   %ecx,%ecx
   44925:	0f 84 95 00 00 00    	je     449c0 <<strategy_comm5::StrategyComm5 as future_backtest_sdk::plugin::StrategyPlugin>::on_depth+0x140>
   4492b:	48 89 44 24 10       	mov    %rax,0x10(%rsp)
   44930:	66 0f 7f 4c 24 50    	movdqa %xmm1,0x50(%rsp)
   44936:	48 89 74 24 08       	mov    %rsi,0x8(%rsp)
   4493b:	4c 89 04 24          	mov    %r8,(%rsp)
   4493f:	66 0f 7f 5c 24 40    	movdqa %xmm3,0x40(%rsp)
   44945:	48 89 4c 24 18       	mov    %rcx,0x18(%rsp)
   4494a:	f3 0f bc c9          	tzcnt  %ecx,%ecx
   4494e:	48 01 c1             	add    %rax,%rcx
   44951:	48 21 f1             	and    %rsi,%rcx
   44954:	48 f7 d9             	neg    %rcx
   44957:	4c 8d 24 49          	lea    (%rcx,%rcx,2),%r12
   4495b:	49 c1 e4 04          	shl    $0x4,%r12
   4495f:	4a 3b 54 25 10       	cmp    0x10(%rbp,%r12,1),%rdx
   44964:	75 28                	jne    4498e <<strategy_comm5::StrategyComm5 as future_backtest_sdk::plugin::StrategyPlugin>::on_depth+0x10e>
   44966:	49 8d 04 2c          	lea    (%r12,%rbp,1),%rax
   4496a:	48 8b 70 08          	mov    0x8(%rax),%rsi
   4496e:	48 89 7c 24 20       	mov    %rdi,0x20(%rsp)
   44973:	4c 89 ef             	mov    %r13,%rdi
   44976:	4c 89 f3             	mov    %r14,%rbx
   44979:	49 89 d6             	mov    %rdx,%r14
   4497c:	41 ff d7             	call   *%r15
   4497f:	48 8b 7c 24 20       	mov    0x20(%rsp),%rdi
   44984:	4c 89 f2             	mov    %r14,%rdx
   44987:	49 89 de             	mov    %rbx,%r14
   4498a:	85 c0                	test   %eax,%eax
   4498c:	74 4e                	je     449dc <<strategy_comm5::StrategyComm5 as future_backtest_sdk::plugin::StrategyPlugin>::on_depth+0x15c>
   4498e:	48 8b 4c 24 18       	mov    0x18(%rsp),%rcx
   44993:	8d 41 ff             	lea    -0x1(%rcx),%eax
   44996:	66 21 c8             	and    %cx,%ax
   44999:	89 c1                	mov    %eax,%ecx
   4499b:	48 8b 44 24 10       	mov    0x10(%rsp),%rax
   449a0:	66 0f 6f 4c 24 50    	movdqa 0x50(%rsp),%xmm1
   449a6:	48 8b 74 24 08       	mov    0x8(%rsp),%rsi
   449ab:	4c 8b 04 24          	mov    (%rsp),%r8
   449af:	66 0f 76 d2          	pcmpeqd %xmm2,%xmm2
   449b3:	66 0f 6f 5c 24 40    	movdqa 0x40(%rsp),%xmm3
   449b9:	75 8a                	jne    44945 <<strategy_comm5::StrategyComm5 as future_backtest_sdk::plugin::StrategyPlugin>::on_depth+0xc5>
   449bb:	0f 1f 44 00 00       	nopl   0x0(%rax,%rax,1)
   449c0:	66 0f 74 da          	pcmpeqb %xmm2,%xmm3
   449c4:	66 0f d7 cb          	pmovmskb %xmm3,%ecx
   449c8:	85 c9                	test   %ecx,%ecx
   449ca:	75 7b                	jne    44a47 <<strategy_comm5::StrategyComm5 as future_backtest_sdk::plugin::StrategyPlugin>::on_depth+0x1c7>
   449cc:	4c 01 c0             	add    %r8,%rax
   449cf:	48 83 c0 10          	add    $0x10,%rax
   449d3:	49 83 c0 10          	add    $0x10,%r8
   449d7:	e9 33 ff ff ff       	jmp    4490f <<strategy_comm5::StrategyComm5 as future_backtest_sdk::plugin::StrategyPlugin>::on_depth+0x8f>
   449dc:	f2 41 0f 10 86 98 00 	movsd  0x98(%r14),%xmm0
   449e3:	00 00 
   449e5:	66 42 0f 2e 44 27 e8 	ucomisd -0x18(%rdi,%r12,1),%xmm0
   449ec:	75 13                	jne    44a01 <<strategy_comm5::StrategyComm5 as future_backtest_sdk::plugin::StrategyPlugin>::on_depth+0x181>
   449ee:	7a 11                	jp     44a01 <<strategy_comm5::StrategyComm5 as future_backtest_sdk::plugin::StrategyPlugin>::on_depth+0x181>
   449f0:	f2 41 0f 10 46 48    	movsd  0x48(%r14),%xmm0
   449f6:	66 42 0f 2e 44 27 f0 	ucomisd -0x10(%rdi,%r12,1),%xmm0
   449fd:	75 02                	jne    44a01 <<strategy_comm5::StrategyComm5 as future_backtest_sdk::plugin::StrategyPlugin>::on_depth+0x181>
   449ff:	7b 46                	jnp    44a47 <<strategy_comm5::StrategyComm5 as future_backtest_sdk::plugin::StrategyPlugin>::on_depth+0x1c7>
   44a01:	48 8b 7c 24 28       	mov    0x28(%rsp),%rdi
   44a06:	48 8b 5c 24 38       	mov    0x38(%rsp),%rbx
   44a0b:	48 89 de             	mov    %rbx,%rsi
   44a0e:	e8 8d ac 03 00       	call   7f6a0 <core::hash::BuildHasher::hash_one>
   44a13:	48 8d 7c 24 68       	lea    0x68(%rsp),%rdi
   44a18:	48 8b 74 24 30       	mov    0x30(%rsp),%rsi
   44a1d:	48 89 c2             	mov    %rax,%rdx
   44a20:	48 89 d9             	mov    %rbx,%rcx
   44a23:	e8 a8 cb 01 00       	call   615d0 <hashbrown::raw::RawTable<T,A>::remove_entry>
   44a28:	48 8b 74 24 68       	mov    0x68(%rsp),%rsi
   44a2d:	48 89 f0             	mov    %rsi,%rax
   44a30:	48 f7 d8             	neg    %rax
   44a33:	70 12                	jo     44a47 <<strategy_comm5::StrategyComm5 as future_backtest_sdk::plugin::StrategyPlugin>::on_depth+0x1c7>
   44a35:	73 10                	jae    44a47 <<strategy_comm5::StrategyComm5 as future_backtest_sdk::plugin::StrategyPlugin>::on_depth+0x1c7>
   44a37:	48 8b 7c 24 70       	mov    0x70(%rsp),%rdi
   44a3c:	ba 01 00 00 00       	mov    $0x1,%edx
   44a41:	ff 15 31 f2 0b 00    	call   *0xbf231(%rip)        # 103c78 <_DYNAMIC+0x218>
   44a47:	48 81 c4 98 00 00 00 	add    $0x98,%rsp
   44a4e:	5b                   	pop    %rbx
   44a4f:	41 5c                	pop    %r12
   44a51:	41 5d                	pop    %r13
   44a53:	41 5e                	pop    %r14
   44a55:	41 5f                	pop    %r15
   44a57:	5d                   	pop    %rbp
   44a58:	31 c0                	xor    %eax,%eax
   44a5a:	c3                   	ret    
   44a5b:	cc                   	int3   
   44a5c:	cc                   	int3   
   44a5d:	cc                   	int3   
   44a5e:	cc                   	int3   
   44a5f:	cc                   	int3   
