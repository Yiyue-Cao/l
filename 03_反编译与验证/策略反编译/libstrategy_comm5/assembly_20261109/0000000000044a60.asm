0000000000044a60 <<strategy_comm5::StrategyComm5 as future_backtest_sdk::plugin::StrategyPlugin>::on_finish>:
   44a60:	55                   	push   %rbp
   44a61:	41 57                	push   %r15
   44a63:	41 56                	push   %r14
   44a65:	41 55                	push   %r13
   44a67:	41 54                	push   %r12
   44a69:	53                   	push   %rbx
   44a6a:	48 83 ec 58          	sub    $0x58,%rsp
   44a6e:	48 89 f3             	mov    %rsi,%rbx
   44a71:	48 89 f7             	mov    %rsi,%rdi
   44a74:	ff 15 7e f3 0b 00    	call   *0xbf37e(%rip)        # 103df8 <_DYNAMIC+0x398>
   44a7a:	44 0f b7 70 34       	movzwl 0x34(%rax),%r14d
   44a7f:	f2 0f 10 40 28       	movsd  0x28(%rax),%xmm0
   44a84:	f2 0f 11 04 24       	movsd  %xmm0,(%rsp)
   44a89:	0f 10 40 18          	movups 0x18(%rax),%xmm0
   44a8d:	0f 29 44 24 40       	movaps %xmm0,0x40(%rsp)
   44a92:	44 8b 78 30          	mov    0x30(%rax),%r15d
   44a96:	0f b6 68 30          	movzbl 0x30(%rax),%ebp
   44a9a:	48 8d 15 ff 92 0b 00 	lea    0xb92ff(%rip),%rdx        # fdda0 <anon.8868ba55c3fc5525a110cabbb60004d5.152.llvm.6579149275953927878>
   44aa1:	48 8d 7c 24 08       	lea    0x8(%rsp),%rdi
   44aa6:	48 89 c6             	mov    %rax,%rsi
   44aa9:	e8 72 37 04 00       	call   88220 <<alloc::vec::Vec<T,A> as core::clone::Clone>::clone>
   44aae:	44 89 7c 24 38       	mov    %r15d,0x38(%rsp)
   44ab3:	66 44 89 74 24 3c    	mov    %r14w,0x3c(%rsp)
   44ab9:	0f 28 44 24 40       	movaps 0x40(%rsp),%xmm0
   44abe:	0f 11 44 24 20       	movups %xmm0,0x20(%rsp)
   44ac3:	f2 0f 10 04 24       	movsd  (%rsp),%xmm0
   44ac8:	f2 0f 11 44 24 30    	movsd  %xmm0,0x30(%rsp)
   44ace:	48 89 df             	mov    %rbx,%rdi
   44ad1:	ff 15 01 f4 0b 00    	call   *0xbf401(%rip)        # 103ed8 <_DYNAMIC+0x478>
   44ad7:	0f b6 f0             	movzbl %al,%esi
   44ada:	40 0f b6 d5          	movzbl %bpl,%edx
   44ade:	48 89 df             	mov    %rbx,%rdi
   44ae1:	ff 15 41 f3 0b 00    	call   *0xbf341(%rip)        # 103e28 <_DYNAMIC+0x3c8>
   44ae7:	48 89 c3             	mov    %rax,%rbx
   44aea:	4c 8b 74 24 10       	mov    0x10(%rsp),%r14
   44aef:	4c 8b 7c 24 18       	mov    0x18(%rsp),%r15
   44af4:	4d 85 ff             	test   %r15,%r15
   44af7:	74 38                	je     44b31 <<strategy_comm5::StrategyComm5 as future_backtest_sdk::plugin::StrategyPlugin>::on_finish+0xd1>
   44af9:	4d 8d 66 08          	lea    0x8(%r14),%r12
   44afd:	4c 8b 2d 74 f1 0b 00 	mov    0xbf174(%rip),%r13        # 103c78 <_DYNAMIC+0x218>
   44b04:	eb 13                	jmp    44b19 <<strategy_comm5::StrategyComm5 as future_backtest_sdk::plugin::StrategyPlugin>::on_finish+0xb9>
   44b06:	66 2e 0f 1f 84 00 00 	cs nopw 0x0(%rax,%rax,1)
   44b0d:	00 00 00 
   44b10:	49 83 c4 18          	add    $0x18,%r12
   44b14:	49 ff cf             	dec    %r15
   44b17:	74 18                	je     44b31 <<strategy_comm5::StrategyComm5 as future_backtest_sdk::plugin::StrategyPlugin>::on_finish+0xd1>
   44b19:	49 8b 74 24 f8       	mov    -0x8(%r12),%rsi
   44b1e:	48 85 f6             	test   %rsi,%rsi
   44b21:	74 ed                	je     44b10 <<strategy_comm5::StrategyComm5 as future_backtest_sdk::plugin::StrategyPlugin>::on_finish+0xb0>
   44b23:	49 8b 3c 24          	mov    (%r12),%rdi
   44b27:	ba 01 00 00 00       	mov    $0x1,%edx
   44b2c:	41 ff d5             	call   *%r13
   44b2f:	eb df                	jmp    44b10 <<strategy_comm5::StrategyComm5 as future_backtest_sdk::plugin::StrategyPlugin>::on_finish+0xb0>
   44b31:	48 8b 44 24 08       	mov    0x8(%rsp),%rax
   44b36:	48 85 c0             	test   %rax,%rax
   44b39:	74 16                	je     44b51 <<strategy_comm5::StrategyComm5 as future_backtest_sdk::plugin::StrategyPlugin>::on_finish+0xf1>
   44b3b:	48 c1 e0 03          	shl    $0x3,%rax
   44b3f:	48 8d 34 40          	lea    (%rax,%rax,2),%rsi
   44b43:	ba 08 00 00 00       	mov    $0x8,%edx
   44b48:	4c 89 f7             	mov    %r14,%rdi
   44b4b:	ff 15 27 f1 0b 00    	call   *0xbf127(%rip)        # 103c78 <_DYNAMIC+0x218>
   44b51:	48 89 d8             	mov    %rbx,%rax
   44b54:	48 83 c4 58          	add    $0x58,%rsp
   44b58:	5b                   	pop    %rbx
   44b59:	41 5c                	pop    %r12
   44b5b:	41 5d                	pop    %r13
   44b5d:	41 5e                	pop    %r14
   44b5f:	41 5f                	pop    %r15
   44b61:	5d                   	pop    %rbp
   44b62:	c3                   	ret    
   44b63:	48 89 c3             	mov    %rax,%rbx
   44b66:	48 8d 7c 24 08       	lea    0x8(%rsp),%rdi
   44b6b:	e8 10 5a ff ff       	call   3a580 <_ZN4core3ptr61drop_in_place$LT$future_backtest_sdk..types..StrategyPara$GT$17h0fce56cb6df95831E.llvm.6579149275953927878>
   44b70:	48 89 df             	mov    %rbx,%rdi
   44b73:	e8 08 7a 0b 00       	call   fc580 <_Unwind_Resume@plt>
   44b78:	cc                   	int3   
   44b79:	cc                   	int3   
   44b7a:	cc                   	int3   
   44b7b:	cc                   	int3   
   44b7c:	cc                   	int3   
   44b7d:	cc                   	int3   
   44b7e:	cc                   	int3   
   44b7f:	cc                   	int3   
