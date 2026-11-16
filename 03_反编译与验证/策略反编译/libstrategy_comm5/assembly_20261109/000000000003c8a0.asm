000000000003c8a0 <<strategy_comm5::StrategyComm5 as future_backtest_sdk::plugin::StrategyPlugin>::on_begin>:
   3c8a0:	55                   	push   %rbp
   3c8a1:	41 57                	push   %r15
   3c8a3:	41 56                	push   %r14
   3c8a5:	41 55                	push   %r13
   3c8a7:	41 54                	push   %r12
   3c8a9:	53                   	push   %rbx
   3c8aa:	48 81 ec 78 0e 00 00 	sub    $0xe78,%rsp
   3c8b1:	48 89 bc 24 d8 01 00 	mov    %rdi,0x1d8(%rsp)
   3c8b8:	00 
   3c8b9:	48 8d bc 24 78 02 00 	lea    0x278(%rsp),%rdi
   3c8c0:	00 
   3c8c1:	48 89 b4 24 c0 00 00 	mov    %rsi,0xc0(%rsp)
   3c8c8:	00 
   3c8c9:	ff 15 99 74 0c 00    	call   *0xc7499(%rip)        # 103d68 <_DYNAMIC+0x308>
   3c8cf:	48 8b 9c 24 80 02 00 	mov    0x280(%rsp),%rbx
   3c8d6:	00 
   3c8d7:	4c 8b b4 24 88 02 00 	mov    0x288(%rsp),%r14
   3c8de:	00 
   3c8df:	48 c7 04 24 47 00 00 	movq   $0x47,(%rsp)
   3c8e6:	00 
   3c8e7:	48 8d 0d 3c c8 fd ff 	lea    -0x237c4(%rip),%rcx        # 1912a <anon.92663dfcd0d5e554049a6edbd6692e09.23.llvm.11068310199716953189+0x22e>
   3c8ee:	4c 8d 0d e3 0f 0c 00 	lea    0xc0fe3(%rip),%r9        # fd8d8 <anon.8868ba55c3fc5525a110cabbb60004d5.1.llvm.6579149275953927878+0x2e0>
   3c8f5:	48 8d bc 24 70 03 00 	lea    0x370(%rsp),%rdi
   3c8fc:	00 
   3c8fd:	41 b8 0b 00 00 00    	mov    $0xb,%r8d
   3c903:	48 89 de             	mov    %rbx,%rsi
   3c906:	4c 89 f2             	mov    %r14,%rdx
   3c909:	e8 32 1f 04 00       	call   7e840 <<toml::de::Deserializer as serde_core::de::Deserializer>::deserialize_struct>
   3c90e:	4c 8b bc 24 70 03 00 	mov    0x370(%rsp),%r15
   3c915:	00 
   3c916:	49 83 ff 02          	cmp    $0x2,%r15
   3c91a:	0f 85 b5 01 00 00    	jne    3cad5 <<strategy_comm5::StrategyComm5 as future_backtest_sdk::plugin::StrategyPlugin>::on_begin+0x235>
   3c920:	48 8d 84 24 78 03 00 	lea    0x378(%rsp),%rax
   3c927:	00 
   3c928:	0f 10 40 50          	movups 0x50(%rax),%xmm0
   3c92c:	0f 29 84 24 60 09 00 	movaps %xmm0,0x960(%rsp)
   3c933:	00 
   3c934:	0f 10 40 40          	movups 0x40(%rax),%xmm0
   3c938:	0f 29 84 24 50 09 00 	movaps %xmm0,0x950(%rsp)
   3c93f:	00 
   3c940:	f3 0f 6f 00          	movdqu (%rax),%xmm0
   3c944:	66 0f 10 48 10       	movupd 0x10(%rax),%xmm1
   3c949:	f3 0f 6f 50 20       	movdqu 0x20(%rax),%xmm2
   3c94e:	66 0f 10 58 30       	movupd 0x30(%rax),%xmm3
   3c953:	66 0f 29 9c 24 40 09 	movapd %xmm3,0x940(%rsp)
   3c95a:	00 00 
   3c95c:	66 0f 7f 94 24 30 09 	movdqa %xmm2,0x930(%rsp)
   3c963:	00 00 
   3c965:	66 0f 29 8c 24 20 09 	movapd %xmm1,0x920(%rsp)
   3c96c:	00 00 
   3c96e:	66 0f 7f 84 24 10 09 	movdqa %xmm0,0x910(%rsp)
   3c975:	00 00 
   3c977:	b9 c8 00 00 00       	mov    $0xc8,%ecx
   3c97c:	49 81 fe c8 00 00 00 	cmp    $0xc8,%r14
   3c983:	49 0f 42 ce          	cmovb  %r14,%rcx
   3c987:	76 0a                	jbe    3c993 <<strategy_comm5::StrategyComm5 as future_backtest_sdk::plugin::StrategyPlugin>::on_begin+0xf3>
   3c989:	80 3c 0b c0          	cmpb   $0xc0,(%rbx,%rcx,1)
   3c98d:	0f 8c e0 25 00 00    	jl     3ef73 <<strategy_comm5::StrategyComm5 as future_backtest_sdk::plugin::StrategyPlugin>::on_begin+0x26d3>
   3c993:	48 89 9c 24 c0 02 00 	mov    %rbx,0x2c0(%rsp)
   3c99a:	00 
   3c99b:	48 89 8c 24 c8 02 00 	mov    %rcx,0x2c8(%rsp)
   3c9a2:	00 
   3c9a3:	48 8d 84 24 10 09 00 	lea    0x910(%rsp),%rax
   3c9aa:	00 
   3c9ab:	48 89 84 24 10 01 00 	mov    %rax,0x110(%rsp)
   3c9b2:	00 
   3c9b3:	48 8b 05 b6 73 0c 00 	mov    0xc73b6(%rip),%rax        # 103d70 <_DYNAMIC+0x310>
   3c9ba:	48 89 84 24 18 01 00 	mov    %rax,0x118(%rsp)
   3c9c1:	00 
   3c9c2:	48 8d 84 24 c0 02 00 	lea    0x2c0(%rsp),%rax
   3c9c9:	00 
   3c9ca:	48 89 84 24 20 01 00 	mov    %rax,0x120(%rsp)
   3c9d1:	00 
   3c9d2:	48 8d 05 37 d8 03 00 	lea    0x3d837(%rip),%rax        # 7a210 <<&T as core::fmt::Display>::fmt>
   3c9d9:	48 89 84 24 28 01 00 	mov    %rax,0x128(%rsp)
   3c9e0:	00 
   3c9e1:	48 8d 05 98 13 0c 00 	lea    0xc1398(%rip),%rax        # fdd80 <anon.8868ba55c3fc5525a110cabbb60004d5.1.llvm.6579149275953927878+0x788>
   3c9e8:	48 89 44 24 20       	mov    %rax,0x20(%rsp)
   3c9ed:	48 c7 44 24 28 02 00 	movq   $0x2,0x28(%rsp)
   3c9f4:	00 00 
   3c9f6:	48 c7 44 24 40 00 00 	movq   $0x0,0x40(%rsp)
   3c9fd:	00 00 
   3c9ff:	48 8d 84 24 10 01 00 	lea    0x110(%rsp),%rax
   3ca06:	00 
   3ca07:	48 89 44 24 30       	mov    %rax,0x30(%rsp)
   3ca0c:	48 c7 44 24 38 02 00 	movq   $0x2,0x38(%rsp)
   3ca13:	00 00 
   3ca15:	48 8d bc 24 20 02 00 	lea    0x220(%rsp),%rdi
   3ca1c:	00 
   3ca1d:	48 8d 74 24 20       	lea    0x20(%rsp),%rsi
   3ca22:	ff 15 f0 72 0c 00    	call   *0xc72f0(%rip)        # 103d18 <_DYNAMIC+0x2b8>
   3ca28:	48 8d bc 24 20 02 00 	lea    0x220(%rsp),%rdi
   3ca2f:	00 
   3ca30:	e8 9b e6 03 00       	call   7b0d0 <anyhow::error::<impl anyhow::Error>::msg>
   3ca35:	48 89 c3             	mov    %rax,%rbx
   3ca38:	48 8b b4 24 28 09 00 	mov    0x928(%rsp),%rsi
   3ca3f:	00 
   3ca40:	48 85 f6             	test   %rsi,%rsi
   3ca43:	74 13                	je     3ca58 <<strategy_comm5::StrategyComm5 as future_backtest_sdk::plugin::StrategyPlugin>::on_begin+0x1b8>
   3ca45:	48 8b bc 24 30 09 00 	mov    0x930(%rsp),%rdi
   3ca4c:	00 
   3ca4d:	ba 01 00 00 00       	mov    $0x1,%edx
   3ca52:	ff 15 20 72 0c 00    	call   *0xc7220(%rip)        # 103c78 <_DYNAMIC+0x218>
   3ca58:	48 8b b4 24 58 09 00 	mov    0x958(%rsp),%rsi
   3ca5f:	00 
   3ca60:	48 89 f0             	mov    %rsi,%rax
   3ca63:	48 f7 d8             	neg    %rax
   3ca66:	70 15                	jo     3ca7d <<strategy_comm5::StrategyComm5 as future_backtest_sdk::plugin::StrategyPlugin>::on_begin+0x1dd>
   3ca68:	73 13                	jae    3ca7d <<strategy_comm5::StrategyComm5 as future_backtest_sdk::plugin::StrategyPlugin>::on_begin+0x1dd>
   3ca6a:	48 8b bc 24 60 09 00 	mov    0x960(%rsp),%rdi
   3ca71:	00 
   3ca72:	ba 01 00 00 00       	mov    $0x1,%edx
   3ca77:	ff 15 fb 71 0c 00    	call   *0xc71fb(%rip)        # 103c78 <_DYNAMIC+0x218>
   3ca7d:	4c 8b b4 24 48 09 00 	mov    0x948(%rsp),%r14
   3ca84:	00 
   3ca85:	4c 8b bc 24 50 09 00 	mov    0x950(%rsp),%r15
   3ca8c:	00 
   3ca8d:	4d 85 ff             	test   %r15,%r15
   3ca90:	0f 84 37 02 00 00    	je     3cccd <<strategy_comm5::StrategyComm5 as future_backtest_sdk::plugin::StrategyPlugin>::on_begin+0x42d>
   3ca96:	4d 8d 66 08          	lea    0x8(%r14),%r12
   3ca9a:	4c 8b 2d d7 71 0c 00 	mov    0xc71d7(%rip),%r13        # 103c78 <_DYNAMIC+0x218>
   3caa1:	eb 1a                	jmp    3cabd <<strategy_comm5::StrategyComm5 as future_backtest_sdk::plugin::StrategyPlugin>::on_begin+0x21d>
   3caa3:	66 66 66 66 2e 0f 1f 	data16 data16 data16 cs nopw 0x0(%rax,%rax,1)
   3caaa:	84 00 00 00 00 00 
   3cab0:	49 83 c4 18          	add    $0x18,%r12
   3cab4:	49 ff cf             	dec    %r15
   3cab7:	0f 84 10 02 00 00    	je     3cccd <<strategy_comm5::StrategyComm5 as future_backtest_sdk::plugin::StrategyPlugin>::on_begin+0x42d>
   3cabd:	49 8b 74 24 f8       	mov    -0x8(%r12),%rsi
   3cac2:	48 85 f6             	test   %rsi,%rsi
   3cac5:	74 e9                	je     3cab0 <<strategy_comm5::StrategyComm5 as future_backtest_sdk::plugin::StrategyPlugin>::on_begin+0x210>
   3cac7:	49 8b 3c 24          	mov    (%r12),%rdi
   3cacb:	ba 01 00 00 00       	mov    $0x1,%edx
   3cad0:	41 ff d5             	call   *%r13
   3cad3:	eb db                	jmp    3cab0 <<strategy_comm5::StrategyComm5 as future_backtest_sdk::plugin::StrategyPlugin>::on_begin+0x210>
   3cad5:	48 8b 9c 24 78 03 00 	mov    0x378(%rsp),%rbx
   3cadc:	00 
   3cadd:	48 8d b4 24 80 03 00 	lea    0x380(%rsp),%rsi
   3cae4:	00 
   3cae5:	48 8d bc 24 20 09 00 	lea    0x920(%rsp),%rdi
   3caec:	00 
   3caed:	ba 58 05 00 00       	mov    $0x558,%edx
   3caf2:	ff 15 d0 71 0c 00    	call   *0xc71d0(%rip)        # 103cc8 <memcpy@GLIBC_2.14>
   3caf8:	4c 89 bc 24 10 09 00 	mov    %r15,0x910(%rsp)
   3caff:	00 
   3cb00:	48 89 9c 24 18 09 00 	mov    %rbx,0x918(%rsp)
   3cb07:	00 
   3cb08:	80 bc 24 73 0e 00 00 	cmpb   $0x0,0xe73(%rsp)
   3cb0f:	00 
   3cb10:	74 58                	je     3cb6a <<strategy_comm5::StrategyComm5 as future_backtest_sdk::plugin::StrategyPlugin>::on_begin+0x2ca>
   3cb12:	f2 0f 10 8c 24 68 0e 	movsd  0xe68(%rsp),%xmm1
   3cb19:	00 00 
   3cb1b:	66 0f 57 c0          	xorpd  %xmm0,%xmm0
   3cb1f:	f2 0f 10 94 24 60 0e 	movsd  0xe60(%rsp),%xmm2
   3cb26:	00 00 
   3cb28:	66 0f 57 db          	xorpd  %xmm3,%xmm3
   3cb2c:	66 0f c2 da 01       	cmpltpd %xmm2,%xmm3
   3cb31:	66 0f 57 d2          	xorpd  %xmm2,%xmm2
   3cb35:	66 0f c2 d1 01       	cmpltpd %xmm1,%xmm2
   3cb3a:	66 0f 56 d3          	orpd   %xmm3,%xmm2
   3cb3e:	66 0f 7e d0          	movd   %xmm2,%eax
   3cb42:	a8 01                	test   $0x1,%al
   3cb44:	74 24                	je     3cb6a <<strategy_comm5::StrategyComm5 as future_backtest_sdk::plugin::StrategyPlugin>::on_begin+0x2ca>
   3cb46:	66 0f 2e 84 24 60 0d 	ucomisd 0xd60(%rsp),%xmm0
   3cb4d:	00 00 
   3cb4f:	76 19                	jbe    3cb6a <<strategy_comm5::StrategyComm5 as future_backtest_sdk::plugin::StrategyPlugin>::on_begin+0x2ca>
   3cb51:	48 8d 35 1d ca fd ff 	lea    -0x235e3(%rip),%rsi        # 19575 <anon.8868ba55c3fc5525a110cabbb60004d5.109.llvm.6579149275953927878+0x171>
   3cb58:	ba 14 01 00 00       	mov    $0x114,%edx
   3cb5d:	48 8b bc 24 c0 00 00 	mov    0xc0(%rsp),%rdi
   3cb64:	00 
   3cb65:	e8 d6 d4 03 00       	call   7a040 <future_backtest_sdk::context::StrategyContext::log_warn>
   3cb6a:	80 bc 24 75 0e 00 00 	cmpb   $0x0,0xe75(%rsp)
   3cb71:	00 
   3cb72:	0f 84 6a 22 00 00    	je     3ede2 <<strategy_comm5::StrategyComm5 as future_backtest_sdk::plugin::StrategyPlugin>::on_begin+0x2542>
   3cb78:	f3 0f 7e 84 24 10 0e 	movq   0xe10(%rsp),%xmm0
   3cb7f:	00 00 
   3cb81:	66 0f d6 44 24 10    	movq   %xmm0,0x10(%rsp)
   3cb87:	66 48 0f 7e c0       	movq   %xmm0,%rax
   3cb8c:	49 be ff ff ff ff ff 	movabs $0x7fffffffffffffff,%r14
   3cb93:	ff ff 7f 
   3cb96:	4c 21 f0             	and    %r14,%rax
   3cb99:	48 bd ff ff ff ff ff 	movabs $0x7fefffffffffffff,%rbp
   3cba0:	ff ef 7f 
   3cba3:	48 39 e8             	cmp    %rbp,%rax
   3cba6:	0f 9f c3             	setg   %bl
   3cba9:	ff 15 c9 71 0c 00    	call   *0xc71c9(%rip)        # 103d78 <_DYNAMIC+0x318>
   3cbaf:	f2 0f 10 4c 24 10    	movsd  0x10(%rsp),%xmm1
   3cbb5:	66 0f 2e c8          	ucomisd %xmm0,%xmm1
   3cbb9:	0f 85 3a 01 00 00    	jne    3ccf9 <<strategy_comm5::StrategyComm5 as future_backtest_sdk::plugin::StrategyPlugin>::on_begin+0x459>
   3cbbf:	0f 8a 34 01 00 00    	jp     3ccf9 <<strategy_comm5::StrategyComm5 as future_backtest_sdk::plugin::StrategyPlugin>::on_begin+0x459>
   3cbc5:	f2 0f 10 05 9b 97 fd 	movsd  -0x26865(%rip),%xmm0        # 16368 <GCC_except_table128+0xe4>
   3cbcc:	ff 
   3cbcd:	66 0f 2e c1          	ucomisd %xmm1,%xmm0
   3cbd1:	0f 87 22 01 00 00    	ja     3ccf9 <<strategy_comm5::StrategyComm5 as future_backtest_sdk::plugin::StrategyPlugin>::on_begin+0x459>
   3cbd7:	84 db                	test   %bl,%bl
   3cbd9:	0f 85 1a 01 00 00    	jne    3ccf9 <<strategy_comm5::StrategyComm5 as future_backtest_sdk::plugin::StrategyPlugin>::on_begin+0x459>
   3cbdf:	4c 8d 8c 24 18 0e 00 	lea    0xe18(%rsp),%r9
   3cbe6:	00 
   3cbe7:	48 8b 84 24 18 0e 00 	mov    0xe18(%rsp),%rax
   3cbee:	00 
   3cbef:	48 89 c1             	mov    %rax,%rcx
   3cbf2:	4c 21 f1             	and    %r14,%rcx
   3cbf5:	48 8d 51 ff          	lea    -0x1(%rcx),%rdx
   3cbf9:	48 be ff ff ff ff ff 	movabs $0xfffffffffffff,%rsi
   3cc00:	ff 0f 00 
   3cc03:	48 39 f2             	cmp    %rsi,%rdx
   3cc06:	0f 92 c2             	setb   %dl
   3cc09:	48 85 c0             	test   %rax,%rax
   3cc0c:	0f 98 c0             	sets   %al
   3cc0f:	20 c2                	and    %al,%dl
   3cc11:	48 85 c9             	test   %rcx,%rcx
   3cc14:	40 0f 94 c6          	sete   %sil
   3cc18:	48 bf 00 00 00 00 00 	movabs $0x7ff0000000000000,%rdi
   3cc1f:	00 f0 7f 
   3cc22:	48 39 f9             	cmp    %rdi,%rcx
   3cc25:	40 0f 9f c7          	setg   %dil
   3cc29:	41 0f 94 c0          	sete   %r8b
   3cc2d:	41 08 f0             	or     %sil,%r8b
   3cc30:	41 08 f8             	or     %dil,%r8b
   3cc33:	41 08 d0             	or     %dl,%r8b
   3cc36:	48 ba 00 00 00 00 00 	movabs $0xfff0000000000000,%rdx
   3cc3d:	00 f0 ff 
   3cc40:	48 01 ca             	add    %rcx,%rdx
   3cc43:	48 c1 ea 35          	shr    $0x35,%rdx
   3cc47:	81 fa ff 03 00 00    	cmp    $0x3ff,%edx
   3cc4d:	0f 92 c1             	setb   %cl
   3cc50:	20 c1                	and    %al,%cl
   3cc52:	44 08 c1             	or     %r8b,%cl
   3cc55:	80 f9 01             	cmp    $0x1,%cl
   3cc58:	0f 85 2a 01 00 00    	jne    3cd88 <<strategy_comm5::StrategyComm5 as future_backtest_sdk::plugin::StrategyPlugin>::on_begin+0x4e8>
   3cc5e:	4c 89 4c 24 20       	mov    %r9,0x20(%rsp)
   3cc63:	48 8b 05 16 71 0c 00 	mov    0xc7116(%rip),%rax        # 103d80 <_DYNAMIC+0x320>
   3cc6a:	48 89 44 24 28       	mov    %rax,0x28(%rsp)
   3cc6f:	48 8d 05 d2 10 0c 00 	lea    0xc10d2(%rip),%rax        # fdd48 <anon.8868ba55c3fc5525a110cabbb60004d5.1.llvm.6579149275953927878+0x750>
   3cc76:	48 89 84 24 70 03 00 	mov    %rax,0x370(%rsp)
   3cc7d:	00 
   3cc7e:	48 c7 84 24 78 03 00 	movq   $0x1,0x378(%rsp)
   3cc85:	00 01 00 00 00 
   3cc8a:	48 c7 84 24 90 03 00 	movq   $0x0,0x390(%rsp)
   3cc91:	00 00 00 00 00 
   3cc96:	48 8d 44 24 20       	lea    0x20(%rsp),%rax
   3cc9b:	48 89 84 24 80 03 00 	mov    %rax,0x380(%rsp)
   3cca2:	00 
   3cca3:	48 c7 84 24 88 03 00 	movq   $0x1,0x388(%rsp)
   3ccaa:	00 01 00 00 00 
   3ccaf:	48 8d 9c 24 f8 08 00 	lea    0x8f8(%rsp),%rbx
   3ccb6:	00 
   3ccb7:	48 8d b4 24 70 03 00 	lea    0x370(%rsp),%rsi
   3ccbe:	00 
   3ccbf:	48 89 df             	mov    %rbx,%rdi
   3ccc2:	ff 15 50 70 0c 00    	call   *0xc7050(%rip)        # 103d18 <_DYNAMIC+0x2b8>
   3ccc8:	e9 9e 00 00 00       	jmp    3cd6b <<strategy_comm5::StrategyComm5 as future_backtest_sdk::plugin::StrategyPlugin>::on_begin+0x4cb>
   3cccd:	48 8b 84 24 40 09 00 	mov    0x940(%rsp),%rax
   3ccd4:	00 
   3ccd5:	48 85 c0             	test   %rax,%rax
   3ccd8:	0f 84 4e 21 00 00    	je     3ee2c <<strategy_comm5::StrategyComm5 as future_backtest_sdk::plugin::StrategyPlugin>::on_begin+0x258c>
   3ccde:	48 c1 e0 03          	shl    $0x3,%rax
   3cce2:	48 8d 34 40          	lea    (%rax,%rax,2),%rsi
   3cce6:	ba 08 00 00 00       	mov    $0x8,%edx
   3cceb:	4c 89 f7             	mov    %r14,%rdi
   3ccee:	ff 15 84 6f 0c 00    	call   *0xc6f84(%rip)        # 103c78 <_DYNAMIC+0x218>
   3ccf4:	e9 33 21 00 00       	jmp    3ee2c <<strategy_comm5::StrategyComm5 as future_backtest_sdk::plugin::StrategyPlugin>::on_begin+0x258c>
   3ccf9:	48 8d 84 24 10 0e 00 	lea    0xe10(%rsp),%rax
   3cd00:	00 
   3cd01:	48 89 44 24 20       	mov    %rax,0x20(%rsp)
   3cd06:	48 8b 05 73 70 0c 00 	mov    0xc7073(%rip),%rax        # 103d80 <_DYNAMIC+0x320>
   3cd0d:	48 89 44 24 28       	mov    %rax,0x28(%rsp)
   3cd12:	48 8d 05 3f 10 0c 00 	lea    0xc103f(%rip),%rax        # fdd58 <anon.8868ba55c3fc5525a110cabbb60004d5.1.llvm.6579149275953927878+0x760>
   3cd19:	48 89 84 24 70 03 00 	mov    %rax,0x370(%rsp)
   3cd20:	00 
   3cd21:	48 c7 84 24 78 03 00 	movq   $0x1,0x378(%rsp)
   3cd28:	00 01 00 00 00 
   3cd2d:	48 c7 84 24 90 03 00 	movq   $0x0,0x390(%rsp)
   3cd34:	00 00 00 00 00 
   3cd39:	48 8d 44 24 20       	lea    0x20(%rsp),%rax
   3cd3e:	48 89 84 24 80 03 00 	mov    %rax,0x380(%rsp)
   3cd45:	00 
   3cd46:	48 c7 84 24 88 03 00 	movq   $0x1,0x388(%rsp)
   3cd4d:	00 01 00 00 00 
   3cd52:	48 8d 9c 24 e0 08 00 	lea    0x8e0(%rsp),%rbx
   3cd59:	00 
   3cd5a:	48 8d b4 24 70 03 00 	lea    0x370(%rsp),%rsi
   3cd61:	00 
   3cd62:	48 89 df             	mov    %rbx,%rdi
   3cd65:	ff 15 ad 6f 0c 00    	call   *0xc6fad(%rip)        # 103d18 <_DYNAMIC+0x2b8>
   3cd6b:	48 89 df             	mov    %rbx,%rdi
   3cd6e:	e8 5d e3 03 00       	call   7b0d0 <anyhow::error::<impl anyhow::Error>::msg>
   3cd73:	48 89 c3             	mov    %rax,%rbx
   3cd76:	48 8d bc 24 10 09 00 	lea    0x910(%rsp),%rdi
   3cd7d:	00 
   3cd7e:	e8 7d d6 ff ff       	call   3a400 <core::ptr::drop_in_place<strategy_comm5::Comm5Params>>
   3cd83:	e9 a4 20 00 00       	jmp    3ee2c <<strategy_comm5::StrategyComm5 as future_backtest_sdk::plugin::StrategyPlugin>::on_begin+0x258c>
   3cd88:	48 83 bc 24 d8 0c 00 	cmpq   $0x0,0xcd8(%rsp)
   3cd8f:	00 00 
   3cd91:	0f 84 ca 20 00 00    	je     3ee61 <<strategy_comm5::StrategyComm5 as future_backtest_sdk::plugin::StrategyPlugin>::on_begin+0x25c1>
   3cd97:	48 8d bc 24 70 03 00 	lea    0x370(%rsp),%rdi
   3cd9e:	00 
   3cd9f:	48 8b b4 24 c0 00 00 	mov    0xc0(%rsp),%rsi
   3cda6:	00 
   3cda7:	ff 15 db 6f 0c 00    	call   *0xc6fdb(%rip)        # 103d88 <_DYNAMIC+0x328>
   3cdad:	48 8b 9c 24 78 03 00 	mov    0x378(%rsp),%rbx
   3cdb4:	00 
   3cdb5:	4c 8b b4 24 80 03 00 	mov    0x380(%rsp),%r14
   3cdbc:	00 
   3cdbd:	4b 8d 04 76          	lea    (%r14,%r14,2),%rax
   3cdc1:	48 8d 14 c3          	lea    (%rbx,%rax,8),%rdx
   3cdc5:	48 8d 0d 4c 08 0c 00 	lea    0xc084c(%rip),%rcx        # fd618 <anon.8868ba55c3fc5525a110cabbb60004d5.1.llvm.6579149275953927878+0x20>
   3cdcc:	48 8d bc 24 e0 01 00 	lea    0x1e0(%rsp),%rdi
   3cdd3:	00 
   3cdd4:	48 89 de             	mov    %rbx,%rsi
   3cdd7:	e8 74 b5 04 00       	call   88350 <<alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter>
   3cddc:	4d 85 f6             	test   %r14,%r14
   3cddf:	74 2e                	je     3ce0f <<strategy_comm5::StrategyComm5 as future_backtest_sdk::plugin::StrategyPlugin>::on_begin+0x56f>
   3cde1:	4c 8d 7b 08          	lea    0x8(%rbx),%r15
   3cde5:	4c 8b 25 8c 6e 0c 00 	mov    0xc6e8c(%rip),%r12        # 103c78 <_DYNAMIC+0x218>
   3cdec:	eb 0b                	jmp    3cdf9 <<strategy_comm5::StrategyComm5 as future_backtest_sdk::plugin::StrategyPlugin>::on_begin+0x559>
   3cdee:	66 90                	xchg   %ax,%ax
   3cdf0:	49 83 c7 18          	add    $0x18,%r15
   3cdf4:	49 ff ce             	dec    %r14
   3cdf7:	74 16                	je     3ce0f <<strategy_comm5::StrategyComm5 as future_backtest_sdk::plugin::StrategyPlugin>::on_begin+0x56f>
   3cdf9:	49 8b 77 f8          	mov    -0x8(%r15),%rsi
   3cdfd:	48 85 f6             	test   %rsi,%rsi
   3ce00:	74 ee                	je     3cdf0 <<strategy_comm5::StrategyComm5 as future_backtest_sdk::plugin::StrategyPlugin>::on_begin+0x550>
   3ce02:	49 8b 3f             	mov    (%r15),%rdi
   3ce05:	ba 01 00 00 00       	mov    $0x1,%edx
   3ce0a:	41 ff d4             	call   *%r12
   3ce0d:	eb e1                	jmp    3cdf0 <<strategy_comm5::StrategyComm5 as future_backtest_sdk::plugin::StrategyPlugin>::on_begin+0x550>
   3ce0f:	48 8b 84 24 70 03 00 	mov    0x370(%rsp),%rax
   3ce16:	00 
   3ce17:	48 85 c0             	test   %rax,%rax
   3ce1a:	74 16                	je     3ce32 <<strategy_comm5::StrategyComm5 as future_backtest_sdk::plugin::StrategyPlugin>::on_begin+0x592>
   3ce1c:	48 c1 e0 03          	shl    $0x3,%rax
   3ce20:	48 8d 34 40          	lea    (%rax,%rax,2),%rsi
   3ce24:	ba 08 00 00 00       	mov    $0x8,%edx
   3ce29:	48 89 df             	mov    %rbx,%rdi
   3ce2c:	ff 15 46 6e 0c 00    	call   *0xc6e46(%rip)        # 103c78 <_DYNAMIC+0x218>
   3ce32:	48 8b b4 24 f0 01 00 	mov    0x1f0(%rsp),%rsi
   3ce39:	00 
   3ce3a:	48 83 fe 02          	cmp    $0x2,%rsi
   3ce3e:	0f 83 63 20 00 00    	jae    3eea7 <<strategy_comm5::StrategyComm5 as future_backtest_sdk::plugin::StrategyPlugin>::on_begin+0x2607>
   3ce44:	48 8d bc 24 e0 01 00 	lea    0x1e0(%rsp),%rdi
   3ce4b:	00 
   3ce4c:	e8 8f b1 04 00       	call   87fe0 <alloc::vec::Vec<T,A>::dedup_by>
   3ce51:	48 8b b4 24 b8 0c 00 	mov    0xcb8(%rsp),%rsi
   3ce58:	00 
   3ce59:	48 8b 94 24 c0 0c 00 	mov    0xcc0(%rsp),%rdx
   3ce60:	00 
   3ce61:	48 8d bc 24 10 01 00 	lea    0x110(%rsp),%rdi
   3ce68:	00 
   3ce69:	ff 15 21 6f 0c 00    	call   *0xc6f21(%rip)        # 103d90 <_DYNAMIC+0x330>
   3ce6f:	4c 8b b4 24 10 01 00 	mov    0x110(%rsp),%r14
   3ce76:	00 
   3ce77:	4c 89 f0             	mov    %r14,%rax
   3ce7a:	48 f7 d8             	neg    %rax
   3ce7d:	0f 81 a0 01 00 00    	jno    3d023 <<strategy_comm5::StrategyComm5 as future_backtest_sdk::plugin::StrategyPlugin>::on_begin+0x783>
   3ce83:	48 8d 84 24 b0 0c 00 	lea    0xcb0(%rsp),%rax
   3ce8a:	00 
   3ce8b:	48 8b 8c 24 18 01 00 	mov    0x118(%rsp),%rcx
   3ce92:	00 
   3ce93:	48 89 8c 24 20 02 00 	mov    %rcx,0x220(%rsp)
   3ce9a:	00 
   3ce9b:	48 89 44 24 20       	mov    %rax,0x20(%rsp)
   3cea0:	48 8d 05 99 da ff ff 	lea    -0x2567(%rip),%rax        # 3a940 <<alloc::string::String as core::fmt::Display>::fmt>
   3cea7:	48 89 44 24 28       	mov    %rax,0x28(%rsp)
   3ceac:	48 8d 84 24 20 02 00 	lea    0x220(%rsp),%rax
   3ceb3:	00 
   3ceb4:	48 89 44 24 30       	mov    %rax,0x30(%rsp)
   3ceb9:	48 8b 05 d8 6e 0c 00 	mov    0xc6ed8(%rip),%rax        # 103d98 <_DYNAMIC+0x338>
   3cec0:	48 89 44 24 38       	mov    %rax,0x38(%rsp)
   3cec5:	48 8d 05 dc 09 0c 00 	lea    0xc09dc(%rip),%rax        # fd8a8 <anon.8868ba55c3fc5525a110cabbb60004d5.1.llvm.6579149275953927878+0x2b0>
   3cecc:	48 89 84 24 70 03 00 	mov    %rax,0x370(%rsp)
   3ced3:	00 
   3ced4:	48 c7 84 24 78 03 00 	movq   $0x3,0x378(%rsp)
   3cedb:	00 03 00 00 00 
   3cee0:	48 c7 84 24 90 03 00 	movq   $0x0,0x390(%rsp)
   3cee7:	00 00 00 00 00 
   3ceec:	48 8d 44 24 20       	lea    0x20(%rsp),%rax
   3cef1:	48 89 84 24 80 03 00 	mov    %rax,0x380(%rsp)
   3cef8:	00 
   3cef9:	48 c7 84 24 88 03 00 	movq   $0x2,0x388(%rsp)
   3cf00:	00 02 00 00 00 
   3cf05:	48 8d bc 24 d8 02 00 	lea    0x2d8(%rsp),%rdi
   3cf0c:	00 
   3cf0d:	48 8d b4 24 70 03 00 	lea    0x370(%rsp),%rsi
   3cf14:	00 
   3cf15:	ff 15 fd 6d 0c 00    	call   *0xc6dfd(%rip)        # 103d18 <_DYNAMIC+0x2b8>
   3cf1b:	4c 8b b4 24 d8 02 00 	mov    0x2d8(%rsp),%r14
   3cf22:	00 
   3cf23:	4c 8b a4 24 e0 02 00 	mov    0x2e0(%rsp),%r12
   3cf2a:	00 
   3cf2b:	48 8b b4 24 e8 02 00 	mov    0x2e8(%rsp),%rsi
   3cf32:	00 
   3cf33:	4c 89 e7             	mov    %r12,%rdi
   3cf36:	ff 15 64 6e 0c 00    	call   *0xc6e64(%rip)        # 103da0 <_DYNAMIC+0x340>
   3cf3c:	48 89 c3             	mov    %rax,%rbx
   3cf3f:	49 89 d7             	mov    %rdx,%r15
   3cf42:	4d 85 f6             	test   %r14,%r14
   3cf45:	74 11                	je     3cf58 <<strategy_comm5::StrategyComm5 as future_backtest_sdk::plugin::StrategyPlugin>::on_begin+0x6b8>
   3cf47:	ba 01 00 00 00       	mov    $0x1,%edx
   3cf4c:	4c 89 e7             	mov    %r12,%rdi
   3cf4f:	4c 89 f6             	mov    %r14,%rsi
   3cf52:	ff 15 20 6d 0c 00    	call   *0xc6d20(%rip)        # 103c78 <_DYNAMIC+0x218>
   3cf58:	48 8b 84 24 c0 00 00 	mov    0xc0(%rsp),%rax
   3cf5f:	00 
   3cf60:	48 8b 78 30          	mov    0x30(%rax),%rdi
   3cf64:	48 89 de             	mov    %rbx,%rsi
   3cf67:	ff 15 3b 6e 0c 00    	call   *0xc6e3b(%rip)        # 103da8 <fb_ctx_log_info@Base>
   3cf6d:	c6 03 00             	movb   $0x0,(%rbx)
   3cf70:	4d 85 ff             	test   %r15,%r15
   3cf73:	74 11                	je     3cf86 <<strategy_comm5::StrategyComm5 as future_backtest_sdk::plugin::StrategyPlugin>::on_begin+0x6e6>
   3cf75:	ba 01 00 00 00       	mov    $0x1,%edx
   3cf7a:	48 89 df             	mov    %rbx,%rdi
   3cf7d:	4c 89 fe             	mov    %r15,%rsi
   3cf80:	ff 15 f2 6c 0c 00    	call   *0xc6cf2(%rip)        # 103c78 <_DYNAMIC+0x218>
   3cf86:	48 8b 84 24 20 02 00 	mov    0x220(%rsp),%rax
   3cf8d:	00 
   3cf8e:	89 c1                	mov    %eax,%ecx
   3cf90:	83 e1 03             	and    $0x3,%ecx
   3cf93:	83 f9 01             	cmp    $0x1,%ecx
   3cf96:	75 42                	jne    3cfda <<strategy_comm5::StrategyComm5 as future_backtest_sdk::plugin::StrategyPlugin>::on_begin+0x73a>
   3cf98:	4c 8d 70 ff          	lea    -0x1(%rax),%r14
   3cf9c:	4c 8b 78 ff          	mov    -0x1(%rax),%r15
   3cfa0:	48 8b 58 07          	mov    0x7(%rax),%rbx
   3cfa4:	48 8b 03             	mov    (%rbx),%rax
   3cfa7:	48 85 c0             	test   %rax,%rax
   3cfaa:	74 05                	je     3cfb1 <<strategy_comm5::StrategyComm5 as future_backtest_sdk::plugin::StrategyPlugin>::on_begin+0x711>
   3cfac:	4c 89 ff             	mov    %r15,%rdi
   3cfaf:	ff d0                	call   *%rax
   3cfb1:	48 8b 73 08          	mov    0x8(%rbx),%rsi
   3cfb5:	48 85 f6             	test   %rsi,%rsi
   3cfb8:	74 0d                	je     3cfc7 <<strategy_comm5::StrategyComm5 as future_backtest_sdk::plugin::StrategyPlugin>::on_begin+0x727>
   3cfba:	48 8b 53 10          	mov    0x10(%rbx),%rdx
   3cfbe:	4c 89 ff             	mov    %r15,%rdi
   3cfc1:	ff 15 b1 6c 0c 00    	call   *0xc6cb1(%rip)        # 103c78 <_DYNAMIC+0x218>
   3cfc7:	be 18 00 00 00       	mov    $0x18,%esi
   3cfcc:	ba 08 00 00 00       	mov    $0x8,%edx
   3cfd1:	4c 89 f7             	mov    %r14,%rdi
   3cfd4:	ff 15 9e 6c 0c 00    	call   *0xc6c9e(%rip)        # 103c78 <_DYNAMIC+0x218>
   3cfda:	48 8b 9c 24 e8 01 00 	mov    0x1e8(%rsp),%rbx
   3cfe1:	00 
   3cfe2:	4c 8b b4 24 f0 01 00 	mov    0x1f0(%rsp),%r14
   3cfe9:	00 
   3cfea:	4d 85 f6             	test   %r14,%r14
   3cfed:	0f 84 cc 1d 00 00    	je     3edbf <<strategy_comm5::StrategyComm5 as future_backtest_sdk::plugin::StrategyPlugin>::on_begin+0x251f>
   3cff3:	4c 8d 7b 08          	lea    0x8(%rbx),%r15
   3cff7:	4c 8b 25 7a 6c 0c 00 	mov    0xc6c7a(%rip),%r12        # 103c78 <_DYNAMIC+0x218>
   3cffe:	eb 0d                	jmp    3d00d <<strategy_comm5::StrategyComm5 as future_backtest_sdk::plugin::StrategyPlugin>::on_begin+0x76d>
   3d000:	49 83 c7 18          	add    $0x18,%r15
   3d004:	49 ff ce             	dec    %r14
   3d007:	0f 84 b2 1d 00 00    	je     3edbf <<strategy_comm5::StrategyComm5 as future_backtest_sdk::plugin::StrategyPlugin>::on_begin+0x251f>
   3d00d:	49 8b 77 f8          	mov    -0x8(%r15),%rsi
   3d011:	48 85 f6             	test   %rsi,%rsi
   3d014:	74 ea                	je     3d000 <<strategy_comm5::StrategyComm5 as future_backtest_sdk::plugin::StrategyPlugin>::on_begin+0x760>
   3d016:	49 8b 3f             	mov    (%r15),%rdi
   3d019:	ba 01 00 00 00       	mov    $0x1,%edx
   3d01e:	41 ff d4             	call   *%r12
   3d021:	eb dd                	jmp    3d000 <<strategy_comm5::StrategyComm5 as future_backtest_sdk::plugin::StrategyPlugin>::on_begin+0x760>
   3d023:	4c 8b bc 24 18 01 00 	mov    0x118(%rsp),%r15
   3d02a:	00 
   3d02b:	48 8b 9c 24 20 01 00 	mov    0x120(%rsp),%rbx
   3d032:	00 
   3d033:	66 48 8d 3d b5 6c 0c 	data16 lea 0xc6cb5(%rip),%rdi        # 103cf0 <_DYNAMIC+0x290>
   3d03a:	00 
   3d03b:	66 66 48 e8 4d f5 0b 	data16 data16 rex.W call fc590 <__tls_get_addr@plt>
   3d042:	00 
   3d043:	48 89 c6             	mov    %rax,%rsi
   3d046:	80 78 10 01          	cmpb   $0x1,0x10(%rax)
   3d04a:	4c 89 b4 24 c8 01 00 	mov    %r14,0x1c8(%rsp)
   3d051:	00 
   3d052:	4c 89 bc 24 d0 01 00 	mov    %r15,0x1d0(%rsp)
   3d059:	00 
   3d05a:	0f 85 6d 1e 00 00    	jne    3eecd <<strategy_comm5::StrategyComm5 as future_backtest_sdk::plugin::StrategyPlugin>::on_begin+0x262d>
   3d060:	48 8b 06             	mov    (%rsi),%rax
   3d063:	48 8b 56 08          	mov    0x8(%rsi),%rdx
   3d067:	48 8d 48 01          	lea    0x1(%rax),%rcx
   3d06b:	48 89 b4 24 50 02 00 	mov    %rsi,0x250(%rsp)
   3d072:	00 
   3d073:	48 89 0e             	mov    %rcx,(%rsi)
   3d076:	0f 10 05 33 06 0c 00 	movups 0xc0633(%rip),%xmm0        # fd6b0 <anon.8868ba55c3fc5525a110cabbb60004d5.1.llvm.6579149275953927878+0xb8>
   3d07d:	0f 29 84 24 30 02 00 	movaps %xmm0,0x230(%rsp)
   3d084:	00 
   3d085:	f3 0f 6f 05 13 06 0c 	movdqu 0xc0613(%rip),%xmm0        # fd6a0 <anon.8868ba55c3fc5525a110cabbb60004d5.1.llvm.6579149275953927878+0xa8>
   3d08c:	00 
   3d08d:	66 0f 7f 84 24 20 02 	movdqa %xmm0,0x220(%rsp)
   3d094:	00 00 
   3d096:	48 89 84 24 40 02 00 	mov    %rax,0x240(%rsp)
   3d09d:	00 
   3d09e:	48 89 94 24 48 02 00 	mov    %rdx,0x248(%rsp)
   3d0a5:	00 
   3d0a6:	48 c7 84 24 08 02 00 	movq   $0x0,0x208(%rsp)
   3d0ad:	00 00 00 00 00 
   3d0b2:	48 c7 84 24 18 02 00 	movq   $0x0,0x218(%rsp)
   3d0b9:	00 00 00 00 00 
   3d0be:	48 c7 84 24 58 02 00 	movq   $0x0,0x258(%rsp)
   3d0c5:	00 00 00 00 00 
   3d0ca:	48 c7 84 24 10 01 00 	movq   $0x0,0x110(%rsp)
   3d0d1:	00 00 00 00 00 
   3d0d6:	48 89 9c 24 18 01 00 	mov    %rbx,0x118(%rsp)
   3d0dd:	00 
   3d0de:	4c 8d b4 24 20 01 00 	lea    0x120(%rsp),%r14
   3d0e5:	00 
   3d0e6:	4c 89 bc 24 20 01 00 	mov    %r15,0x120(%rsp)
   3d0ed:	00 
   3d0ee:	48 89 9c 24 28 01 00 	mov    %rbx,0x128(%rsp)
   3d0f5:	00 
   3d0f6:	48 c7 84 24 30 01 00 	movq   $0x0,0x130(%rsp)
   3d0fd:	00 00 00 00 00 
   3d102:	48 89 9c 24 38 01 00 	mov    %rbx,0x138(%rsp)
   3d109:	00 
   3d10a:	48 b8 0a 00 00 00 0a 	movabs $0xa0000000a,%rax
   3d111:	00 00 00 
   3d114:	48 89 84 24 40 01 00 	mov    %rax,0x140(%rsp)
   3d11b:	00 
   3d11c:	c6 84 24 48 01 00 00 	movb   $0x1,0x148(%rsp)
   3d123:	01 
   3d124:	66 c7 84 24 50 01 00 	movw   $0x0,0x150(%rsp)
   3d12b:	00 00 00 
   3d12e:	4c 8d 64 24 30       	lea    0x30(%rsp),%r12
   3d133:	b0 01                	mov    $0x1,%al
   3d135:	89 44 24 10          	mov    %eax,0x10(%rsp)
   3d139:	4c 8d bc 24 70 03 00 	lea    0x370(%rsp),%r15
   3d140:	00 
   3d141:	66 66 66 66 66 66 2e 	data16 data16 data16 data16 data16 cs nopw 0x0(%rax,%rax,1)
   3d148:	0f 1f 84 00 00 00 00 
   3d14f:	00 
   3d150:	80 bc 24 51 01 00 00 	cmpb   $0x0,0x151(%rsp)
   3d157:	00 
   3d158:	0f 85 9d 05 00 00    	jne    3d6fb <<strategy_comm5::StrategyComm5 as future_backtest_sdk::plugin::StrategyPlugin>::on_begin+0xe5b>
   3d15e:	48 8b 9c 24 20 01 00 	mov    0x120(%rsp),%rbx
   3d165:	00 
   3d166:	4c 89 ff             	mov    %r15,%rdi
   3d169:	4c 89 f6             	mov    %r14,%rsi
   3d16c:	e8 9f d8 ff ff       	call   3aa10 <<core::str::pattern::CharSearcher as core::str::pattern::Searcher>::next_match>
   3d171:	83 bc 24 70 03 00 00 	cmpl   $0x1,0x370(%rsp)
   3d178:	01 
   3d179:	75 25                	jne    3d1a0 <<strategy_comm5::StrategyComm5 as future_backtest_sdk::plugin::StrategyPlugin>::on_begin+0x900>
   3d17b:	48 8b b4 24 80 03 00 	mov    0x380(%rsp),%rsi
   3d182:	00 
   3d183:	48 8b 84 24 10 01 00 	mov    0x110(%rsp),%rax
   3d18a:	00 
   3d18b:	48 89 b4 24 10 01 00 	mov    %rsi,0x110(%rsp)
   3d192:	00 
   3d193:	48 29 c6             	sub    %rax,%rsi
   3d196:	48 01 c3             	add    %rax,%rbx
   3d199:	48 85 f6             	test   %rsi,%rsi
   3d19c:	75 4a                	jne    3d1e8 <<strategy_comm5::StrategyComm5 as future_backtest_sdk::plugin::StrategyPlugin>::on_begin+0x948>
   3d19e:	eb 70                	jmp    3d210 <<strategy_comm5::StrategyComm5 as future_backtest_sdk::plugin::StrategyPlugin>::on_begin+0x970>
   3d1a0:	80 bc 24 51 01 00 00 	cmpb   $0x0,0x151(%rsp)
   3d1a7:	00 
   3d1a8:	0f 85 4d 05 00 00    	jne    3d6fb <<strategy_comm5::StrategyComm5 as future_backtest_sdk::plugin::StrategyPlugin>::on_begin+0xe5b>
   3d1ae:	c6 84 24 51 01 00 00 	movb   $0x1,0x151(%rsp)
   3d1b5:	01 
   3d1b6:	48 8b 9c 24 10 01 00 	mov    0x110(%rsp),%rbx
   3d1bd:	00 
   3d1be:	48 8b b4 24 18 01 00 	mov    0x118(%rsp),%rsi
   3d1c5:	00 
   3d1c6:	48 29 de             	sub    %rbx,%rsi
   3d1c9:	0f 95 c0             	setne  %al
   3d1cc:	0a 84 24 50 01 00 00 	or     0x150(%rsp),%al
   3d1d3:	3c 01                	cmp    $0x1,%al
   3d1d5:	0f 85 20 05 00 00    	jne    3d6fb <<strategy_comm5::StrategyComm5 as future_backtest_sdk::plugin::StrategyPlugin>::on_begin+0xe5b>
   3d1db:	48 03 9c 24 20 01 00 	add    0x120(%rsp),%rbx
   3d1e2:	00 
   3d1e3:	48 85 f6             	test   %rsi,%rsi
   3d1e6:	74 28                	je     3d210 <<strategy_comm5::StrategyComm5 as future_backtest_sdk::plugin::StrategyPlugin>::on_begin+0x970>
   3d1e8:	80 7c 33 ff 0a       	cmpb   $0xa,-0x1(%rbx,%rsi,1)
   3d1ed:	75 21                	jne    3d210 <<strategy_comm5::StrategyComm5 as future_backtest_sdk::plugin::StrategyPlugin>::on_begin+0x970>
   3d1ef:	48 89 f0             	mov    %rsi,%rax
   3d1f2:	48 ff c8             	dec    %rax
   3d1f5:	74 0d                	je     3d204 <<strategy_comm5::StrategyComm5 as future_backtest_sdk::plugin::StrategyPlugin>::on_begin+0x964>
   3d1f7:	80 7c 33 fe 0d       	cmpb   $0xd,-0x2(%rbx,%rsi,1)
   3d1fc:	75 0a                	jne    3d208 <<strategy_comm5::StrategyComm5 as future_backtest_sdk::plugin::StrategyPlugin>::on_begin+0x968>
   3d1fe:	48 83 c6 fe          	add    $0xfffffffffffffffe,%rsi
   3d202:	eb 0c                	jmp    3d210 <<strategy_comm5::StrategyComm5 as future_backtest_sdk::plugin::StrategyPlugin>::on_begin+0x970>
   3d204:	31 f6                	xor    %esi,%esi
   3d206:	eb 08                	jmp    3d210 <<strategy_comm5::StrategyComm5 as future_backtest_sdk::plugin::StrategyPlugin>::on_begin+0x970>
   3d208:	48 89 c6             	mov    %rax,%rsi
   3d20b:	0f 1f 44 00 00       	nopl   0x0(%rax,%rax,1)
   3d210:	48 85 db             	test   %rbx,%rbx
   3d213:	0f 84 e2 04 00 00    	je     3d6fb <<strategy_comm5::StrategyComm5 as future_backtest_sdk::plugin::StrategyPlugin>::on_begin+0xe5b>
   3d219:	48 89 df             	mov    %rbx,%rdi
   3d21c:	e8 6f 3b 04 00       	call   80d90 <core::str::<impl str>::trim_matches>
   3d221:	48 85 d2             	test   %rdx,%rdx
   3d224:	0f 84 26 ff ff ff    	je     3d150 <<strategy_comm5::StrategyComm5 as future_backtest_sdk::plugin::StrategyPlugin>::on_begin+0x8b0>
   3d22a:	48 c7 44 24 20 00 00 	movq   $0x0,0x20(%rsp)
   3d231:	00 00 
   3d233:	48 89 54 24 28       	mov    %rdx,0x28(%rsp)
   3d238:	48 89 c3             	mov    %rax,%rbx
   3d23b:	48 89 44 24 30       	mov    %rax,0x30(%rsp)
   3d240:	48 89 54 24 38       	mov    %rdx,0x38(%rsp)
   3d245:	48 c7 44 24 40 00 00 	movq   $0x0,0x40(%rsp)
   3d24c:	00 00 
   3d24e:	48 89 54 24 48       	mov    %rdx,0x48(%rsp)
   3d253:	48 b8 2c 00 00 00 2c 	movabs $0x2c0000002c,%rax
   3d25a:	00 00 00 
   3d25d:	48 89 44 24 50       	mov    %rax,0x50(%rsp)
   3d262:	c6 44 24 58 01       	movb   $0x1,0x58(%rsp)
   3d267:	66 c7 44 24 60 01 00 	movw   $0x1,0x60(%rsp)
   3d26e:	4c 89 ff             	mov    %r15,%rdi
   3d271:	4c 89 e6             	mov    %r12,%rsi
   3d274:	e8 97 d7 ff ff       	call   3aa10 <<core::str::pattern::CharSearcher as core::str::pattern::Searcher>::next_match>
   3d279:	83 bc 24 70 03 00 00 	cmpl   $0x1,0x370(%rsp)
   3d280:	01 
   3d281:	75 2f                	jne    3d2b2 <<strategy_comm5::StrategyComm5 as future_backtest_sdk::plugin::StrategyPlugin>::on_begin+0xa12>
   3d283:	48 8b 84 24 78 03 00 	mov    0x378(%rsp),%rax
   3d28a:	00 
   3d28b:	48 8b 8c 24 80 03 00 	mov    0x380(%rsp),%rcx
   3d292:	00 
   3d293:	48 8b 54 24 20       	mov    0x20(%rsp),%rdx
   3d298:	48 29 d0             	sub    %rdx,%rax
   3d29b:	48 89 84 24 a0 00 00 	mov    %rax,0xa0(%rsp)
   3d2a2:	00 
   3d2a3:	48 01 d3             	add    %rdx,%rbx
   3d2a6:	48 89 4c 24 20       	mov    %rcx,0x20(%rsp)
   3d2ab:	0f b6 4c 24 61       	movzbl 0x61(%rsp),%ecx
   3d2b0:	eb 0f                	jmp    3d2c1 <<strategy_comm5::StrategyComm5 as future_backtest_sdk::plugin::StrategyPlugin>::on_begin+0xa21>
   3d2b2:	0f b6 4c 24 61       	movzbl 0x61(%rsp),%ecx
   3d2b7:	84 c9                	test   %cl,%cl
   3d2b9:	0f 84 97 03 00 00    	je     3d656 <<strategy_comm5::StrategyComm5 as future_backtest_sdk::plugin::StrategyPlugin>::on_begin+0xdb6>
   3d2bf:	31 db                	xor    %ebx,%ebx
   3d2c1:	f6 c1 01             	test   $0x1,%cl
   3d2c4:	74 0d                	je     3d2d3 <<strategy_comm5::StrategyComm5 as future_backtest_sdk::plugin::StrategyPlugin>::on_begin+0xa33>
   3d2c6:	45 31 ed             	xor    %r13d,%r13d
   3d2c9:	f6 c1 01             	test   $0x1,%cl
   3d2cc:	74 58                	je     3d326 <<strategy_comm5::StrategyComm5 as future_backtest_sdk::plugin::StrategyPlugin>::on_begin+0xa86>
   3d2ce:	e9 07 04 00 00       	jmp    3d6da <<strategy_comm5::StrategyComm5 as future_backtest_sdk::plugin::StrategyPlugin>::on_begin+0xe3a>
   3d2d3:	4c 8b 6c 24 30       	mov    0x30(%rsp),%r13
   3d2d8:	4c 89 ff             	mov    %r15,%rdi
   3d2db:	48 8d 74 24 30       	lea    0x30(%rsp),%rsi
   3d2e0:	e8 2b d7 ff ff       	call   3aa10 <<core::str::pattern::CharSearcher as core::str::pattern::Searcher>::next_match>
   3d2e5:	83 bc 24 70 03 00 00 	cmpl   $0x1,0x370(%rsp)
   3d2ec:	01 
   3d2ed:	0f 85 6a 03 00 00    	jne    3d65d <<strategy_comm5::StrategyComm5 as future_backtest_sdk::plugin::StrategyPlugin>::on_begin+0xdbd>
   3d2f3:	48 8b 94 24 78 03 00 	mov    0x378(%rsp),%rdx
   3d2fa:	00 
   3d2fb:	48 8b 84 24 80 03 00 	mov    0x380(%rsp),%rax
   3d302:	00 
   3d303:	48 8b 4c 24 20       	mov    0x20(%rsp),%rcx
   3d308:	48 29 ca             	sub    %rcx,%rdx
   3d30b:	48 89 54 24 18       	mov    %rdx,0x18(%rsp)
   3d310:	49 01 cd             	add    %rcx,%r13
   3d313:	48 89 44 24 20       	mov    %rax,0x20(%rsp)
   3d318:	0f b6 4c 24 61       	movzbl 0x61(%rsp),%ecx
   3d31d:	f6 c1 01             	test   $0x1,%cl
   3d320:	0f 85 b4 03 00 00    	jne    3d6da <<strategy_comm5::StrategyComm5 as future_backtest_sdk::plugin::StrategyPlugin>::on_begin+0xe3a>
   3d326:	4c 8b 64 24 30       	mov    0x30(%rsp),%r12
   3d32b:	4c 89 ff             	mov    %r15,%rdi
   3d32e:	48 8d 74 24 30       	lea    0x30(%rsp),%rsi
   3d333:	e8 d8 d6 ff ff       	call   3aa10 <<core::str::pattern::CharSearcher as core::str::pattern::Searcher>::next_match>
   3d338:	83 bc 24 70 03 00 00 	cmpl   $0x1,0x370(%rsp)
   3d33f:	01 
   3d340:	0f 85 5d 03 00 00    	jne    3d6a3 <<strategy_comm5::StrategyComm5 as future_backtest_sdk::plugin::StrategyPlugin>::on_begin+0xe03>
   3d346:	48 8b 94 24 78 03 00 	mov    0x378(%rsp),%rdx
   3d34d:	00 
   3d34e:	48 8b 84 24 80 03 00 	mov    0x380(%rsp),%rax
   3d355:	00 
   3d356:	48 8b 4c 24 20       	mov    0x20(%rsp),%rcx
   3d35b:	48 29 ca             	sub    %rcx,%rdx
   3d35e:	48 89 54 24 70       	mov    %rdx,0x70(%rsp)
   3d363:	49 01 cc             	add    %rcx,%r12
   3d366:	48 89 44 24 20       	mov    %rax,0x20(%rsp)
   3d36b:	48 85 db             	test   %rbx,%rbx
   3d36e:	0f 84 66 03 00 00    	je     3d6da <<strategy_comm5::StrategyComm5 as future_backtest_sdk::plugin::StrategyPlugin>::on_begin+0xe3a>
   3d374:	4d 85 ed             	test   %r13,%r13
   3d377:	0f 84 5d 03 00 00    	je     3d6da <<strategy_comm5::StrategyComm5 as future_backtest_sdk::plugin::StrategyPlugin>::on_begin+0xe3a>
   3d37d:	48 89 df             	mov    %rbx,%rdi
   3d380:	48 8b b4 24 a0 00 00 	mov    0xa0(%rsp),%rsi
   3d387:	00 
   3d388:	e8 03 3a 04 00       	call   80d90 <core::str::<impl str>::trim_matches>
   3d38d:	48 89 84 24 a0 00 00 	mov    %rax,0xa0(%rsp)
   3d394:	00 
   3d395:	48 89 d3             	mov    %rdx,%rbx
   3d398:	4c 89 ef             	mov    %r13,%rdi
   3d39b:	48 8b 74 24 18       	mov    0x18(%rsp),%rsi
   3d3a0:	e8 eb 39 04 00       	call   80d90 <core::str::<impl str>::trim_matches>
   3d3a5:	48 89 44 24 18       	mov    %rax,0x18(%rsp)
   3d3aa:	49 89 d5             	mov    %rdx,%r13
   3d3ad:	4c 89 e7             	mov    %r12,%rdi
   3d3b0:	48 8b 74 24 70       	mov    0x70(%rsp),%rsi
   3d3b5:	e8 d6 39 04 00       	call   80d90 <core::str::<impl str>::trim_matches>
   3d3ba:	48 8d bc 24 88 00 00 	lea    0x88(%rsp),%rdi
   3d3c1:	00 
   3d3c2:	48 89 c6             	mov    %rax,%rsi
   3d3c5:	ff 15 e5 69 0c 00    	call   *0xc69e5(%rip)        # 103db0 <_DYNAMIC+0x350>
   3d3cb:	80 bc 24 88 00 00 00 	cmpb   $0x0,0x88(%rsp)
   3d3d2:	00 
   3d3d3:	0f 85 01 03 00 00    	jne    3d6da <<strategy_comm5::StrategyComm5 as future_backtest_sdk::plugin::StrategyPlugin>::on_begin+0xe3a>
   3d3d9:	48 85 db             	test   %rbx,%rbx
   3d3dc:	0f 84 f8 02 00 00    	je     3d6da <<strategy_comm5::StrategyComm5 as future_backtest_sdk::plugin::StrategyPlugin>::on_begin+0xe3a>
   3d3e2:	4d 85 ed             	test   %r13,%r13
   3d3e5:	0f 84 ef 02 00 00    	je     3d6da <<strategy_comm5::StrategyComm5 as future_backtest_sdk::plugin::StrategyPlugin>::on_begin+0xe3a>
   3d3eb:	f3 0f 7e 84 24 90 00 	movq   0x90(%rsp),%xmm0
   3d3f2:	00 00 
   3d3f4:	66 48 0f 7e c0       	movq   %xmm0,%rax
   3d3f9:	48 b9 ff ff ff ff ff 	movabs $0x7fffffffffffffff,%rcx
   3d400:	ff ff 7f 
   3d403:	48 21 c8             	and    %rcx,%rax
   3d406:	48 39 e8             	cmp    %rbp,%rax
   3d409:	0f 8f cb 02 00 00    	jg     3d6da <<strategy_comm5::StrategyComm5 as future_backtest_sdk::plugin::StrategyPlugin>::on_begin+0xe3a>
   3d40f:	66 0f d6 84 24 b0 01 	movq   %xmm0,0x1b0(%rsp)
   3d416:	00 00 
   3d418:	b9 01 00 00 00       	mov    $0x1,%ecx
   3d41d:	41 b8 01 00 00 00    	mov    $0x1,%r8d
   3d423:	4c 89 ff             	mov    %r15,%rdi
   3d426:	48 89 de             	mov    %rbx,%rsi
   3d429:	31 d2                	xor    %edx,%edx
   3d42b:	e8 d0 4d 04 00       	call   82200 <alloc::raw_vec::RawVecInner<A>::try_allocate_in>
   3d430:	48 8b 84 24 78 03 00 	mov    0x378(%rsp),%rax
   3d437:	00 
   3d438:	48 89 44 24 70       	mov    %rax,0x70(%rsp)
   3d43d:	83 bc 24 70 03 00 00 	cmpl   $0x1,0x370(%rsp)
   3d444:	01 
   3d445:	0f 84 3f 1b 00 00    	je     3ef8a <<strategy_comm5::StrategyComm5 as future_backtest_sdk::plugin::StrategyPlugin>::on_begin+0x26ea>
   3d44b:	48 89 da             	mov    %rbx,%rdx
   3d44e:	48 8b bc 24 80 03 00 	mov    0x380(%rsp),%rdi
   3d455:	00 
   3d456:	48 89 bc 24 e0 00 00 	mov    %rdi,0xe0(%rsp)
   3d45d:	00 
   3d45e:	48 8b b4 24 a0 00 00 	mov    0xa0(%rsp),%rsi
   3d465:	00 
   3d466:	4c 8b 25 5b 68 0c 00 	mov    0xc685b(%rip),%r12        # 103cc8 <memcpy@GLIBC_2.14>
   3d46d:	41 ff d4             	call   *%r12
   3d470:	b9 01 00 00 00       	mov    $0x1,%ecx
   3d475:	41 b8 01 00 00 00    	mov    $0x1,%r8d
   3d47b:	4c 89 ff             	mov    %r15,%rdi
   3d47e:	4c 89 ee             	mov    %r13,%rsi
   3d481:	31 d2                	xor    %edx,%edx
   3d483:	e8 78 4d 04 00       	call   82200 <alloc::raw_vec::RawVecInner<A>::try_allocate_in>
   3d488:	48 8b 84 24 78 03 00 	mov    0x378(%rsp),%rax
   3d48f:	00 
   3d490:	48 89 84 24 a0 00 00 	mov    %rax,0xa0(%rsp)
   3d497:	00 
   3d498:	83 bc 24 70 03 00 00 	cmpl   $0x1,0x370(%rsp)
   3d49f:	01 
   3d4a0:	0f 84 00 1b 00 00    	je     3efa6 <<strategy_comm5::StrategyComm5 as future_backtest_sdk::plugin::StrategyPlugin>::on_begin+0x2706>
   3d4a6:	48 8b bc 24 80 03 00 	mov    0x380(%rsp),%rdi
   3d4ad:	00 
   3d4ae:	48 89 bc 24 f0 00 00 	mov    %rdi,0xf0(%rsp)
   3d4b5:	00 
   3d4b6:	48 8b 74 24 18       	mov    0x18(%rsp),%rsi
   3d4bb:	4c 89 ea             	mov    %r13,%rdx
   3d4be:	41 ff d4             	call   *%r12
   3d4c1:	48 b8 00 00 00 00 00 	movabs $0x8000000000000000,%rax
   3d4c8:	00 00 80 
   3d4cb:	48 8b 4c 24 70       	mov    0x70(%rsp),%rcx
   3d4d0:	48 39 c1             	cmp    %rax,%rcx
   3d4d3:	0f 84 01 02 00 00    	je     3d6da <<strategy_comm5::StrategyComm5 as future_backtest_sdk::plugin::StrategyPlugin>::on_begin+0xe3a>
   3d4d9:	48 89 8c 24 c8 00 00 	mov    %rcx,0xc8(%rsp)
   3d4e0:	00 
   3d4e1:	48 8b 84 24 e0 00 00 	mov    0xe0(%rsp),%rax
   3d4e8:	00 
   3d4e9:	48 89 84 24 d0 00 00 	mov    %rax,0xd0(%rsp)
   3d4f0:	00 
   3d4f1:	48 89 9c 24 d8 00 00 	mov    %rbx,0xd8(%rsp)
   3d4f8:	00 
   3d4f9:	4c 89 ff             	mov    %r15,%rdi
   3d4fc:	48 8d b4 24 c8 00 00 	lea    0xc8(%rsp),%rsi
   3d503:	00 
   3d504:	48 8d 15 85 03 0c 00 	lea    0xc0385(%rip),%rdx        # fd890 <anon.8868ba55c3fc5525a110cabbb60004d5.1.llvm.6579149275953927878+0x298>
   3d50b:	ff 15 a7 68 0c 00    	call   *0xc68a7(%rip)        # 103db8 <_DYNAMIC+0x358>
   3d511:	48 8d bc 24 08 02 00 	lea    0x208(%rsp),%rdi
   3d518:	00 
   3d519:	4c 89 fe             	mov    %r15,%rsi
   3d51c:	e8 5f 44 03 00       	call   71980 <alloc::collections::btree::map::BTreeMap<K,V,A>::insert>
   3d521:	48 8b 84 24 a0 00 00 	mov    0xa0(%rsp),%rax
   3d528:	00 
   3d529:	48 89 84 24 88 00 00 	mov    %rax,0x88(%rsp)
   3d530:	00 
   3d531:	48 8b 84 24 f0 00 00 	mov    0xf0(%rsp),%rax
   3d538:	00 
   3d539:	48 89 84 24 90 00 00 	mov    %rax,0x90(%rsp)
   3d540:	00 
   3d541:	4c 89 ac 24 98 00 00 	mov    %r13,0x98(%rsp)
   3d548:	00 
   3d549:	4c 89 ff             	mov    %r15,%rdi
   3d54c:	48 8d b4 24 20 02 00 	lea    0x220(%rsp),%rsi
   3d553:	00 
   3d554:	48 8d 94 24 88 00 00 	lea    0x88(%rsp),%rdx
   3d55b:	00 
   3d55c:	e8 0f 50 03 00       	call   72570 <hashbrown::rustc_entry::<impl hashbrown::map::HashMap<K,V,S,A>>::rustc_entry>
   3d561:	4c 8b ac 24 70 03 00 	mov    0x370(%rsp),%r13
   3d568:	00 
   3d569:	4c 8b a4 24 78 03 00 	mov    0x378(%rsp),%r12
   3d570:	00 
   3d571:	48 b8 00 00 00 00 00 	movabs $0x8000000000000000,%rax
   3d578:	00 00 80 
   3d57b:	49 39 c5             	cmp    %rax,%r13
   3d57e:	0f 84 90 00 00 00    	je     3d614 <<strategy_comm5::StrategyComm5 as future_backtest_sdk::plugin::StrategyPlugin>::on_begin+0xd74>
   3d584:	48 8b 9c 24 80 03 00 	mov    0x380(%rsp),%rbx
   3d58b:	00 
   3d58c:	48 8b 84 24 88 03 00 	mov    0x388(%rsp),%rax
   3d593:	00 
   3d594:	48 89 44 24 10       	mov    %rax,0x10(%rsp)
   3d599:	48 8b 84 24 90 03 00 	mov    0x390(%rsp),%rax
   3d5a0:	00 
   3d5a1:	48 89 84 24 a0 00 00 	mov    %rax,0xa0(%rsp)
   3d5a8:	00 
   3d5a9:	48 8d 3d b8 00 0c 00 	lea    0xc00b8(%rip),%rdi        # fd668 <anon.8868ba55c3fc5525a110cabbb60004d5.1.llvm.6579149275953927878+0x70>
   3d5b0:	e8 5b 35 04 00       	call   80b10 <std::thread::local::LocalKey<T>::with>
   3d5b5:	4c 89 ac 24 70 03 00 	mov    %r13,0x370(%rsp)
   3d5bc:	00 
   3d5bd:	4c 89 a4 24 78 03 00 	mov    %r12,0x378(%rsp)
   3d5c4:	00 
   3d5c5:	48 89 9c 24 80 03 00 	mov    %rbx,0x380(%rsp)
   3d5cc:	00 
   3d5cd:	0f 10 05 dc 00 0c 00 	movups 0xc00dc(%rip),%xmm0        # fd6b0 <anon.8868ba55c3fc5525a110cabbb60004d5.1.llvm.6579149275953927878+0xb8>
   3d5d4:	48 8d 8c 24 88 03 00 	lea    0x388(%rsp),%rcx
   3d5db:	00 
   3d5dc:	0f 11 41 10          	movups %xmm0,0x10(%rcx)
   3d5e0:	f3 0f 6f 05 b8 00 0c 	movdqu 0xc00b8(%rip),%xmm0        # fd6a0 <anon.8868ba55c3fc5525a110cabbb60004d5.1.llvm.6579149275953927878+0xa8>
   3d5e7:	00 
   3d5e8:	f3 0f 7f 01          	movdqu %xmm0,(%rcx)
   3d5ec:	48 89 84 24 a8 03 00 	mov    %rax,0x3a8(%rsp)
   3d5f3:	00 
   3d5f4:	48 89 94 24 b0 03 00 	mov    %rdx,0x3b0(%rsp)
   3d5fb:	00 
   3d5fc:	48 8b 7c 24 10       	mov    0x10(%rsp),%rdi
   3d601:	48 8b b4 24 a0 00 00 	mov    0xa0(%rsp),%rsi
   3d608:	00 
   3d609:	4c 89 fa             	mov    %r15,%rdx
   3d60c:	e8 af 41 02 00       	call   617c0 <hashbrown::raw::RawTable<T,A>::insert_no_grow>
   3d611:	49 89 c4             	mov    %rax,%r12
   3d614:	49 83 c4 d0          	add    $0xffffffffffffffd0,%r12
   3d618:	48 8b 84 24 d8 00 00 	mov    0xd8(%rsp),%rax
   3d61f:	00 
   3d620:	48 89 84 24 80 03 00 	mov    %rax,0x380(%rsp)
   3d627:	00 
   3d628:	0f 10 84 24 c8 00 00 	movups 0xc8(%rsp),%xmm0
   3d62f:	00 
   3d630:	0f 29 84 24 70 03 00 	movaps %xmm0,0x370(%rsp)
   3d637:	00 
   3d638:	4c 89 e7             	mov    %r12,%rdi
   3d63b:	4c 89 fe             	mov    %r15,%rsi
   3d63e:	f3 0f 7e 84 24 b0 01 	movq   0x1b0(%rsp),%xmm0
   3d645:	00 00 
   3d647:	e8 64 5b 03 00       	call   731b0 <hashbrown::map::HashMap<K,V,S,A>::insert>
   3d64c:	4c 8d 64 24 30       	lea    0x30(%rsp),%r12
   3d651:	e9 98 00 00 00       	jmp    3d6ee <<strategy_comm5::StrategyComm5 as future_backtest_sdk::plugin::StrategyPlugin>::on_begin+0xe4e>
   3d656:	c6 44 24 61 01       	movb   $0x1,0x61(%rsp)
   3d65b:	eb 7d                	jmp    3d6da <<strategy_comm5::StrategyComm5 as future_backtest_sdk::plugin::StrategyPlugin>::on_begin+0xe3a>
   3d65d:	0f b6 4c 24 61       	movzbl 0x61(%rsp),%ecx
   3d662:	84 c9                	test   %cl,%cl
   3d664:	0f 85 5c fc ff ff    	jne    3d2c6 <<strategy_comm5::StrategyComm5 as future_backtest_sdk::plugin::StrategyPlugin>::on_begin+0xa26>
   3d66a:	c6 44 24 61 01       	movb   $0x1,0x61(%rsp)
   3d66f:	4c 8b 6c 24 20       	mov    0x20(%rsp),%r13
   3d674:	48 8b 74 24 28       	mov    0x28(%rsp),%rsi
   3d679:	4c 29 ee             	sub    %r13,%rsi
   3d67c:	0f 95 c2             	setne  %dl
   3d67f:	0a 54 24 60          	or     0x60(%rsp),%dl
   3d683:	b1 01                	mov    $0x1,%cl
   3d685:	80 fa 01             	cmp    $0x1,%dl
   3d688:	0f 85 38 fc ff ff    	jne    3d2c6 <<strategy_comm5::StrategyComm5 as future_backtest_sdk::plugin::StrategyPlugin>::on_begin+0xa26>
   3d68e:	48 89 74 24 18       	mov    %rsi,0x18(%rsp)
   3d693:	4c 03 6c 24 30       	add    0x30(%rsp),%r13
   3d698:	f6 c1 01             	test   $0x1,%cl
   3d69b:	0f 84 85 fc ff ff    	je     3d326 <<strategy_comm5::StrategyComm5 as future_backtest_sdk::plugin::StrategyPlugin>::on_begin+0xa86>
   3d6a1:	eb 37                	jmp    3d6da <<strategy_comm5::StrategyComm5 as future_backtest_sdk::plugin::StrategyPlugin>::on_begin+0xe3a>
   3d6a3:	80 7c 24 61 00       	cmpb   $0x0,0x61(%rsp)
   3d6a8:	75 30                	jne    3d6da <<strategy_comm5::StrategyComm5 as future_backtest_sdk::plugin::StrategyPlugin>::on_begin+0xe3a>
   3d6aa:	c6 44 24 61 01       	movb   $0x1,0x61(%rsp)
   3d6af:	4c 8b 64 24 20       	mov    0x20(%rsp),%r12
   3d6b4:	48 8b 4c 24 28       	mov    0x28(%rsp),%rcx
   3d6b9:	4c 29 e1             	sub    %r12,%rcx
   3d6bc:	0f 95 c0             	setne  %al
   3d6bf:	0a 44 24 60          	or     0x60(%rsp),%al
   3d6c3:	3c 01                	cmp    $0x1,%al
   3d6c5:	75 13                	jne    3d6da <<strategy_comm5::StrategyComm5 as future_backtest_sdk::plugin::StrategyPlugin>::on_begin+0xe3a>
   3d6c7:	48 89 4c 24 70       	mov    %rcx,0x70(%rsp)
   3d6cc:	4c 03 64 24 30       	add    0x30(%rsp),%r12
   3d6d1:	48 85 db             	test   %rbx,%rbx
   3d6d4:	0f 85 9a fc ff ff    	jne    3d374 <<strategy_comm5::StrategyComm5 as future_backtest_sdk::plugin::StrategyPlugin>::on_begin+0xad4>
   3d6da:	f6 44 24 10 01       	testb  $0x1,0x10(%rsp)
   3d6df:	4c 8d 64 24 30       	lea    0x30(%rsp),%r12
   3d6e4:	75 08                	jne    3d6ee <<strategy_comm5::StrategyComm5 as future_backtest_sdk::plugin::StrategyPlugin>::on_begin+0xe4e>
   3d6e6:	48 ff 84 24 58 02 00 	incq   0x258(%rsp)
   3d6ed:	00 
   3d6ee:	c7 44 24 10 00 00 00 	movl   $0x0,0x10(%rsp)
   3d6f5:	00 
   3d6f6:	e9 55 fa ff ff       	jmp    3d150 <<strategy_comm5::StrategyComm5 as future_backtest_sdk::plugin::StrategyPlugin>::on_begin+0x8b0>
   3d6fb:	f2 0f 10 84 24 10 0e 	movsd  0xe10(%rsp),%xmm0
   3d702:	00 00 
   3d704:	66 0f 57 c9          	xorpd  %xmm1,%xmm1
   3d708:	f2 0f 5f c1          	maxsd  %xmm1,%xmm0
   3d70c:	f2 48 0f 2c c0       	cvttsd2si %xmm0,%rax
   3d711:	48 89 c1             	mov    %rax,%rcx
   3d714:	66 0f 28 d0          	movapd %xmm0,%xmm2
   3d718:	f2 0f 5c 15 70 8c fd 	subsd  -0x27390(%rip),%xmm2        # 16390 <GCC_except_table128+0x10c>
   3d71f:	ff 
   3d720:	f2 48 0f 2c d2       	cvttsd2si %xmm2,%rdx
   3d725:	48 c1 f9 3f          	sar    $0x3f,%rcx
   3d729:	48 21 ca             	and    %rcx,%rdx
   3d72c:	48 09 c2             	or     %rax,%rdx
   3d72f:	31 c0                	xor    %eax,%eax
   3d731:	66 0f 2e c1          	ucomisd %xmm1,%xmm0
   3d735:	48 0f 43 c2          	cmovae %rdx,%rax
   3d739:	66 0f 2e 05 77 8b fd 	ucomisd -0x27489(%rip),%xmm0        # 162b8 <GCC_except_table128+0x34>
   3d740:	ff 
   3d741:	48 c7 c3 ff ff ff ff 	mov    $0xffffffffffffffff,%rbx
   3d748:	48 0f 46 d8          	cmovbe %rax,%rbx
   3d74c:	48 8b 84 24 08 02 00 	mov    0x208(%rsp),%rax
   3d753:	00 
   3d754:	48 8b 8c 24 10 02 00 	mov    0x210(%rsp),%rcx
   3d75b:	00 
   3d75c:	31 d2                	xor    %edx,%edx
   3d75e:	48 89 c6             	mov    %rax,%rsi
   3d761:	48 85 c0             	test   %rax,%rax
   3d764:	40 0f 95 c7          	setne  %dil
   3d768:	74 08                	je     3d772 <<strategy_comm5::StrategyComm5 as future_backtest_sdk::plugin::StrategyPlugin>::on_begin+0xed2>
   3d76a:	48 8b b4 24 18 02 00 	mov    0x218(%rsp),%rsi
   3d771:	00 
   3d772:	40 88 fa             	mov    %dil,%dl
   3d775:	48 89 94 24 70 03 00 	mov    %rdx,0x370(%rsp)
   3d77c:	00 
   3d77d:	48 c7 84 24 78 03 00 	movq   $0x0,0x378(%rsp)
   3d784:	00 00 00 00 00 
   3d789:	48 89 84 24 80 03 00 	mov    %rax,0x380(%rsp)
   3d790:	00 
   3d791:	48 89 8c 24 88 03 00 	mov    %rcx,0x388(%rsp)
   3d798:	00 
   3d799:	48 89 94 24 90 03 00 	mov    %rdx,0x390(%rsp)
   3d7a0:	00 
   3d7a1:	48 c7 84 24 98 03 00 	movq   $0x0,0x398(%rsp)
   3d7a8:	00 00 00 00 00 
   3d7ad:	48 89 84 24 a0 03 00 	mov    %rax,0x3a0(%rsp)
   3d7b4:	00 
   3d7b5:	48 89 8c 24 a8 03 00 	mov    %rcx,0x3a8(%rsp)
   3d7bc:	00 
   3d7bd:	48 89 b4 24 b0 03 00 	mov    %rsi,0x3b0(%rsp)
   3d7c4:	00 
   3d7c5:	48 8d 84 24 10 09 00 	lea    0x910(%rsp),%rax
   3d7cc:	00 
   3d7cd:	48 89 84 24 b8 03 00 	mov    %rax,0x3b8(%rsp)
   3d7d4:	00 
   3d7d5:	48 8d 15 3c fe 0b 00 	lea    0xbfe3c(%rip),%rdx        # fd618 <anon.8868ba55c3fc5525a110cabbb60004d5.1.llvm.6579149275953927878+0x20>
   3d7dc:	48 8d bc 24 88 01 00 	lea    0x188(%rsp),%rdi
   3d7e3:	00 
   3d7e4:	48 8d b4 24 70 03 00 	lea    0x370(%rsp),%rsi
   3d7eb:	00 
   3d7ec:	e8 ef ae 04 00       	call   886e0 <<alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter>
   3d7f1:	4c 8b b4 24 98 01 00 	mov    0x198(%rsp),%r14
   3d7f8:	00 
   3d7f9:	49 83 fe 02          	cmp    $0x2,%r14
   3d7fd:	72 62                	jb     3d861 <<strategy_comm5::StrategyComm5 as future_backtest_sdk::plugin::StrategyPlugin>::on_begin+0xfc1>
   3d7ff:	48 8b 84 24 90 01 00 	mov    0x190(%rsp),%rax
   3d806:	00 
   3d807:	4b 8d 0c 76          	lea    (%r14,%r14,2),%rcx
   3d80b:	49 d1 ee             	shr    %r14
   3d80e:	48 8d 0c c8          	lea    (%rax,%rcx,8),%rcx
   3d812:	48 83 c1 f8          	add    $0xfffffffffffffff8,%rcx
   3d816:	48 83 c0 10          	add    $0x10,%rax
   3d81a:	66 0f 1f 44 00 00    	nopw   0x0(%rax,%rax,1)
   3d820:	48 8b 50 f0          	mov    -0x10(%rax),%rdx
   3d824:	48 8b 71 f0          	mov    -0x10(%rcx),%rsi
   3d828:	48 89 70 f0          	mov    %rsi,-0x10(%rax)
   3d82c:	48 89 51 f0          	mov    %rdx,-0x10(%rcx)
   3d830:	48 8b 50 f8          	mov    -0x8(%rax),%rdx
   3d834:	48 8b 71 f8          	mov    -0x8(%rcx),%rsi
   3d838:	48 89 70 f8          	mov    %rsi,-0x8(%rax)
   3d83c:	48 89 51 f8          	mov    %rdx,-0x8(%rcx)
   3d840:	48 8b 10             	mov    (%rax),%rdx
   3d843:	48 8b 31             	mov    (%rcx),%rsi
   3d846:	48 89 30             	mov    %rsi,(%rax)
   3d849:	48 89 11             	mov    %rdx,(%rcx)
   3d84c:	48 83 c0 18          	add    $0x18,%rax
   3d850:	48 83 c1 e8          	add    $0xffffffffffffffe8,%rcx
   3d854:	49 ff ce             	dec    %r14
   3d857:	75 c7                	jne    3d820 <<strategy_comm5::StrategyComm5 as future_backtest_sdk::plugin::StrategyPlugin>::on_begin+0xf80>
   3d859:	4c 8b b4 24 98 01 00 	mov    0x198(%rsp),%r14
   3d860:	00 
   3d861:	49 29 de             	sub    %rbx,%r14
   3d864:	72 16                	jb     3d87c <<strategy_comm5::StrategyComm5 as future_backtest_sdk::plugin::StrategyPlugin>::on_begin+0xfdc>
   3d866:	48 8b 84 24 90 01 00 	mov    0x190(%rsp),%rax
   3d86d:	00 
   3d86e:	48 89 9c 24 98 01 00 	mov    %rbx,0x198(%rsp)
   3d875:	00 
   3d876:	0f 85 c8 07 00 00    	jne    3e044 <<strategy_comm5::StrategyComm5 as future_backtest_sdk::plugin::StrategyPlugin>::on_begin+0x17a4>
   3d87c:	f2 0f 10 05 54 8a fd 	movsd  -0x275ac(%rip),%xmm0        # 162d8 <GCC_except_table128+0x54>
   3d883:	ff 
   3d884:	f2 0f 5e 84 24 18 0e 	divsd  0xe18(%rsp),%xmm0
   3d88b:	00 00 
   3d88d:	ff 15 2d 65 0c 00    	call   *0xc652d(%rip)        # 103dc0 <exp2@GLIBC_2.29>
   3d893:	f2 0f 11 84 24 60 02 	movsd  %xmm0,0x260(%rsp)
   3d89a:	00 00 
   3d89c:	48 c7 84 24 f8 00 00 	movq   $0x0,0xf8(%rsp)
   3d8a3:	00 00 00 00 00 
   3d8a8:	48 c7 84 24 00 01 00 	movq   $0x8,0x100(%rsp)
   3d8af:	00 08 00 00 00 
   3d8b4:	48 c7 84 24 08 01 00 	movq   $0x0,0x108(%rsp)
   3d8bb:	00 00 00 00 00 
   3d8c0:	48 8b 9c 24 e8 01 00 	mov    0x1e8(%rsp),%rbx
   3d8c7:	00 
   3d8c8:	48 8b 94 24 f0 01 00 	mov    0x1f0(%rsp),%rdx
   3d8cf:	00 
   3d8d0:	48 8d 04 52          	lea    (%rdx,%rdx,2),%rax
   3d8d4:	48 8d 04 c3          	lea    (%rbx,%rax,8),%rax
   3d8d8:	48 89 84 24 f0 00 00 	mov    %rax,0xf0(%rsp)
   3d8df:	00 
   3d8e0:	48 89 94 24 c0 01 00 	mov    %rdx,0x1c0(%rsp)
   3d8e7:	00 
   3d8e8:	48 85 d2             	test   %rdx,%rdx
   3d8eb:	48 89 9c 24 a0 01 00 	mov    %rbx,0x1a0(%rsp)
   3d8f2:	00 
   3d8f3:	0f 84 c0 04 00 00    	je     3ddb9 <<strategy_comm5::StrategyComm5 as future_backtest_sdk::plugin::StrategyPlugin>::on_begin+0x1519>
   3d8f9:	48 83 bc 24 38 02 00 	cmpq   $0x0,0x238(%rsp)
   3d900:	00 00 
   3d902:	0f 84 b1 04 00 00    	je     3ddb9 <<strategy_comm5::StrategyComm5 as future_backtest_sdk::plugin::StrategyPlugin>::on_begin+0x1519>
   3d908:	f2 0f 10 84 24 50 0e 	movsd  0xe50(%rsp),%xmm0
   3d90f:	00 00 
   3d911:	66 0f 28 0d 67 92 fd 	movapd -0x26d99(%rip),%xmm1        # 16b80 <anon.2bc08f40ad58cb635718c2f09dbb11ab.6.llvm.4096812584824358744+0x2a0>
   3d918:	ff 
   3d919:	66 0f 29 84 24 a0 02 	movapd %xmm0,0x2a0(%rsp)
   3d920:	00 00 
   3d922:	66 0f 57 c8          	xorpd  %xmm0,%xmm1
   3d926:	66 0f 29 8c 24 20 03 	movapd %xmm1,0x320(%rsp)
   3d92d:	00 00 
   3d92f:	b8 01 00 00 00       	mov    $0x1,%eax
   3d934:	48 85 c0             	test   %rax,%rax
   3d937:	75 18                	jne    3d951 <<strategy_comm5::StrategyComm5 as future_backtest_sdk::plugin::StrategyPlugin>::on_begin+0x10b1>
   3d939:	e9 42 04 00 00       	jmp    3dd80 <<strategy_comm5::StrategyComm5 as future_backtest_sdk::plugin::StrategyPlugin>::on_begin+0x14e0>
   3d93e:	66 90                	xchg   %ax,%ax
   3d940:	48 8b 84 24 38 02 00 	mov    0x238(%rsp),%rax
   3d947:	00 
   3d948:	48 85 c0             	test   %rax,%rax
   3d94b:	0f 84 2f 04 00 00    	je     3dd80 <<strategy_comm5::StrategyComm5 as future_backtest_sdk::plugin::StrategyPlugin>::on_begin+0x14e0>
   3d951:	48 8d bc 24 40 02 00 	lea    0x240(%rsp),%rdi
   3d958:	00 
   3d959:	48 89 de             	mov    %rbx,%rsi
   3d95c:	e8 3f 1d 04 00       	call   7f6a0 <core::hash::BuildHasher::hash_one>
   3d961:	48 89 5c 24 68       	mov    %rbx,0x68(%rsp)
   3d966:	48 89 c1             	mov    %rax,%rcx
   3d969:	48 c1 e9 39          	shr    $0x39,%rcx
   3d96d:	4c 8b b4 24 20 02 00 	mov    0x220(%rsp),%r14
   3d974:	00 
   3d975:	4c 8b bc 24 28 02 00 	mov    0x228(%rsp),%r15
   3d97c:	00 
   3d97d:	66 0f 6e c1          	movd   %ecx,%xmm0
   3d981:	66 0f 60 c0          	punpcklbw %xmm0,%xmm0
   3d985:	f2 0f 70 c0 00       	pshuflw $0x0,%xmm0,%xmm0
   3d98a:	66 0f 70 c8 00       	pshufd $0x0,%xmm0,%xmm1
   3d98f:	4d 8d 66 b8          	lea    -0x48(%r14),%r12
   3d993:	31 d2                	xor    %edx,%edx
   3d995:	4c 21 f8             	and    %r15,%rax
   3d998:	f3 41 0f 6f 14 06    	movdqu (%r14,%rax,1),%xmm2
   3d99e:	66 0f 6f c2          	movdqa %xmm2,%xmm0
   3d9a2:	66 0f 74 c1          	pcmpeqb %xmm1,%xmm0
   3d9a6:	66 0f d7 e8          	pmovmskb %xmm0,%ebp
   3d9aa:	85 ed                	test   %ebp,%ebp
   3d9ac:	74 7b                	je     3da29 <<strategy_comm5::StrategyComm5 as future_backtest_sdk::plugin::StrategyPlugin>::on_begin+0x1189>
   3d9ae:	48 8b 4c 24 68       	mov    0x68(%rsp),%rcx
   3d9b3:	48 8b 59 10          	mov    0x10(%rcx),%rbx
   3d9b7:	48 89 44 24 10       	mov    %rax,0x10(%rsp)
   3d9bc:	66 0f 7f 8c 24 a0 00 	movdqa %xmm1,0xa0(%rsp)
   3d9c3:	00 00 
   3d9c5:	48 89 54 24 18       	mov    %rdx,0x18(%rsp)
   3d9ca:	66 0f 7f 54 24 70    	movdqa %xmm2,0x70(%rsp)
   3d9d0:	f3 0f bc cd          	tzcnt  %ebp,%ecx
   3d9d4:	48 01 c1             	add    %rax,%rcx
   3d9d7:	4c 21 f9             	and    %r15,%rcx
   3d9da:	48 f7 d9             	neg    %rcx
   3d9dd:	4c 8d 2c c9          	lea    (%rcx,%rcx,8),%r13
   3d9e1:	4b 3b 5c ec 10       	cmp    0x10(%r12,%r13,8),%rbx
   3d9e6:	75 1e                	jne    3da06 <<strategy_comm5::StrategyComm5 as future_backtest_sdk::plugin::StrategyPlugin>::on_begin+0x1166>
   3d9e8:	4b 8d 04 ec          	lea    (%r12,%r13,8),%rax
   3d9ec:	48 8b 70 08          	mov    0x8(%rax),%rsi
   3d9f0:	48 8b 44 24 68       	mov    0x68(%rsp),%rax
   3d9f5:	48 8b 78 08          	mov    0x8(%rax),%rdi
   3d9f9:	48 89 da             	mov    %rbx,%rdx
   3d9fc:	ff 15 26 63 0c 00    	call   *0xc6326(%rip)        # 103d28 <bcmp@GLIBC_2.2.5>
   3da02:	85 c0                	test   %eax,%eax
   3da04:	74 4c                	je     3da52 <<strategy_comm5::StrategyComm5 as future_backtest_sdk::plugin::StrategyPlugin>::on_begin+0x11b2>
   3da06:	8d 45 ff             	lea    -0x1(%rbp),%eax
   3da09:	66 21 e8             	and    %bp,%ax
   3da0c:	89 c5                	mov    %eax,%ebp
   3da0e:	48 8b 44 24 10       	mov    0x10(%rsp),%rax
   3da13:	66 0f 6f 8c 24 a0 00 	movdqa 0xa0(%rsp),%xmm1
   3da1a:	00 00 
   3da1c:	48 8b 54 24 18       	mov    0x18(%rsp),%rdx
   3da21:	66 0f 6f 54 24 70    	movdqa 0x70(%rsp),%xmm2
   3da27:	75 a7                	jne    3d9d0 <<strategy_comm5::StrategyComm5 as future_backtest_sdk::plugin::StrategyPlugin>::on_begin+0x1130>
   3da29:	66 0f 74 15 9f 8a fd 	pcmpeqb -0x27561(%rip),%xmm2        # 164d0 <anon.50e25bb1355b8971fc58210c29d1b4b6.2.llvm.1301231569978033549>
   3da30:	ff 
   3da31:	66 0f d7 ca          	pmovmskb %xmm2,%ecx
   3da35:	85 c9                	test   %ecx,%ecx
   3da37:	48 8b 5c 24 68       	mov    0x68(%rsp),%rbx
   3da3c:	0f 85 3e 03 00 00    	jne    3dd80 <<strategy_comm5::StrategyComm5 as future_backtest_sdk::plugin::StrategyPlugin>::on_begin+0x14e0>
   3da42:	48 01 d0             	add    %rdx,%rax
   3da45:	48 83 c0 10          	add    $0x10,%rax
   3da49:	48 83 c2 10          	add    $0x10,%rdx
   3da4d:	e9 43 ff ff ff       	jmp    3d995 <<strategy_comm5::StrategyComm5 as future_backtest_sdk::plugin::StrategyPlugin>::on_begin+0x10f5>
   3da52:	48 8b 84 24 98 01 00 	mov    0x198(%rsp),%rax
   3da59:	00 
   3da5a:	48 85 c0             	test   %rax,%rax
   3da5d:	48 8b 5c 24 68       	mov    0x68(%rsp),%rbx
   3da62:	0f 84 18 03 00 00    	je     3dd80 <<strategy_comm5::StrategyComm5 as future_backtest_sdk::plugin::StrategyPlugin>::on_begin+0x14e0>
   3da68:	4b 8d 2c ee          	lea    (%r14,%r13,8),%rbp
   3da6c:	48 83 7d e8 00       	cmpq   $0x0,-0x18(%rbp)
   3da71:	0f 84 09 03 00 00    	je     3dd80 <<strategy_comm5::StrategyComm5 as future_backtest_sdk::plugin::StrategyPlugin>::on_begin+0x14e0>
   3da77:	48 8b 9c 24 90 01 00 	mov    0x190(%rsp),%rbx
   3da7e:	00 
   3da7f:	48 8d 04 40          	lea    (%rax,%rax,2),%rax
   3da83:	48 8d 04 c3          	lea    (%rbx,%rax,8),%rax
   3da87:	48 89 84 24 a0 00 00 	mov    %rax,0xa0(%rsp)
   3da8e:	00 
   3da8f:	48 8d 45 f0          	lea    -0x10(%rbp),%rax
   3da93:	48 89 84 24 b0 01 00 	mov    %rax,0x1b0(%rsp)
   3da9a:	00 
   3da9b:	45 31 f6             	xor    %r14d,%r14d
   3da9e:	66 0f ef c0          	pxor   %xmm0,%xmm0
   3daa2:	66 0f d6 44 24 70    	movq   %xmm0,0x70(%rsp)
   3daa8:	b8 01 00 00 00       	mov    $0x1,%eax
   3daad:	66 0f d6 44 24 18    	movq   %xmm0,0x18(%rsp)
   3dab3:	48 89 ac 24 b8 00 00 	mov    %rbp,0xb8(%rsp)
   3daba:	00 
   3dabb:	48 85 c0             	test   %rax,%rax
   3dabe:	75 20                	jne    3dae0 <<strategy_comm5::StrategyComm5 as future_backtest_sdk::plugin::StrategyPlugin>::on_begin+0x1240>
   3dac0:	e9 f0 01 00 00       	jmp    3dcb5 <<strategy_comm5::StrategyComm5 as future_backtest_sdk::plugin::StrategyPlugin>::on_begin+0x1415>
   3dac5:	66 66 2e 0f 1f 84 00 	data16 cs nopw 0x0(%rax,%rax,1)
   3dacc:	00 00 00 00 
   3dad0:	41 ff c6             	inc    %r14d
   3dad3:	48 8b 45 e8          	mov    -0x18(%rbp),%rax
   3dad7:	48 85 c0             	test   %rax,%rax
   3dada:	0f 84 d5 01 00 00    	je     3dcb5 <<strategy_comm5::StrategyComm5 as future_backtest_sdk::plugin::StrategyPlugin>::on_begin+0x1415>
   3dae0:	48 8b bc 24 b0 01 00 	mov    0x1b0(%rsp),%rdi
   3dae7:	00 
   3dae8:	48 89 de             	mov    %rbx,%rsi
   3daeb:	e8 b0 1b 04 00       	call   7f6a0 <core::hash::BuildHasher::hash_one>
   3daf0:	49 89 c4             	mov    %rax,%r12
   3daf3:	44 89 74 24 10       	mov    %r14d,0x10(%rsp)
   3daf8:	48 c1 e8 39          	shr    $0x39,%rax
   3dafc:	4c 8b 75 d0          	mov    -0x30(%rbp),%r14
   3db00:	48 8b 4d d8          	mov    -0x28(%rbp),%rcx
   3db04:	66 0f 6e c0          	movd   %eax,%xmm0
   3db08:	66 0f 60 c0          	punpcklbw %xmm0,%xmm0
   3db0c:	f2 0f 70 c0 00       	pshuflw $0x0,%xmm0,%xmm0
   3db11:	66 0f 70 c8 00       	pshufd $0x0,%xmm0,%xmm1
   3db16:	49 8d 56 e0          	lea    -0x20(%r14),%rdx
   3db1a:	31 f6                	xor    %esi,%esi
   3db1c:	49 21 cc             	and    %rcx,%r12
   3db1f:	f3 43 0f 6f 14 26    	movdqu (%r14,%r12,1),%xmm2
   3db25:	66 0f 6f c2          	movdqa %xmm2,%xmm0
   3db29:	66 0f 74 c1          	pcmpeqb %xmm1,%xmm0
   3db2d:	66 44 0f d7 f8       	pmovmskb %xmm0,%r15d
   3db32:	45 85 ff             	test   %r15d,%r15d
   3db35:	0f 84 a5 00 00 00    	je     3dbe0 <<strategy_comm5::StrategyComm5 as future_backtest_sdk::plugin::StrategyPlugin>::on_begin+0x1340>
   3db3b:	4c 8b 6b 10          	mov    0x10(%rbx),%r13
   3db3f:	48 89 8c 24 e0 00 00 	mov    %rcx,0xe0(%rsp)
   3db46:	00 
   3db47:	66 0f 7f 8c 24 90 02 	movdqa %xmm1,0x290(%rsp)
   3db4e:	00 00 
   3db50:	48 89 94 24 b8 02 00 	mov    %rdx,0x2b8(%rsp)
   3db57:	00 
   3db58:	48 89 b4 24 b0 02 00 	mov    %rsi,0x2b0(%rsp)
   3db5f:	00 
   3db60:	66 0f 7f 94 24 30 03 	movdqa %xmm2,0x330(%rsp)
   3db67:	00 00 
   3db69:	f3 41 0f bc ef       	tzcnt  %r15d,%ebp
   3db6e:	4c 01 e5             	add    %r12,%rbp
   3db71:	48 21 cd             	and    %rcx,%rbp
   3db74:	48 89 e9             	mov    %rbp,%rcx
   3db77:	48 c1 e1 05          	shl    $0x5,%rcx
   3db7b:	48 89 d0             	mov    %rdx,%rax
   3db7e:	48 29 c8             	sub    %rcx,%rax
   3db81:	4c 3b 68 10          	cmp    0x10(%rax),%r13
   3db85:	75 15                	jne    3db9c <<strategy_comm5::StrategyComm5 as future_backtest_sdk::plugin::StrategyPlugin>::on_begin+0x12fc>
   3db87:	48 8b 70 08          	mov    0x8(%rax),%rsi
   3db8b:	48 8b 7b 08          	mov    0x8(%rbx),%rdi
   3db8f:	4c 89 ea             	mov    %r13,%rdx
   3db92:	ff 15 90 61 0c 00    	call   *0xc6190(%rip)        # 103d28 <bcmp@GLIBC_2.2.5>
   3db98:	85 c0                	test   %eax,%eax
   3db9a:	74 64                	je     3dc00 <<strategy_comm5::StrategyComm5 as future_backtest_sdk::plugin::StrategyPlugin>::on_begin+0x1360>
   3db9c:	41 8d 47 ff          	lea    -0x1(%r15),%eax
   3dba0:	66 44 21 f8          	and    %r15w,%ax
   3dba4:	41 89 c7             	mov    %eax,%r15d
   3dba7:	48 8b ac 24 b8 00 00 	mov    0xb8(%rsp),%rbp
   3dbae:	00 
   3dbaf:	48 8b 8c 24 e0 00 00 	mov    0xe0(%rsp),%rcx
   3dbb6:	00 
   3dbb7:	66 0f 6f 8c 24 90 02 	movdqa 0x290(%rsp),%xmm1
   3dbbe:	00 00 
   3dbc0:	48 8b 94 24 b8 02 00 	mov    0x2b8(%rsp),%rdx
   3dbc7:	00 
   3dbc8:	48 8b b4 24 b0 02 00 	mov    0x2b0(%rsp),%rsi
   3dbcf:	00 
   3dbd0:	66 0f 6f 94 24 30 03 	movdqa 0x330(%rsp),%xmm2
   3dbd7:	00 00 
   3dbd9:	75 8e                	jne    3db69 <<strategy_comm5::StrategyComm5 as future_backtest_sdk::plugin::StrategyPlugin>::on_begin+0x12c9>
   3dbdb:	0f 1f 44 00 00       	nopl   0x0(%rax,%rax,1)
   3dbe0:	66 0f 74 15 e8 88 fd 	pcmpeqb -0x27718(%rip),%xmm2        # 164d0 <anon.50e25bb1355b8971fc58210c29d1b4b6.2.llvm.1301231569978033549>
   3dbe7:	ff 
   3dbe8:	66 0f d7 c2          	pmovmskb %xmm2,%eax
   3dbec:	85 c0                	test   %eax,%eax
   3dbee:	75 60                	jne    3dc50 <<strategy_comm5::StrategyComm5 as future_backtest_sdk::plugin::StrategyPlugin>::on_begin+0x13b0>
   3dbf0:	49 01 f4             	add    %rsi,%r12
   3dbf3:	49 83 c4 10          	add    $0x10,%r12
   3dbf7:	48 83 c6 10          	add    $0x10,%rsi
   3dbfb:	e9 1c ff ff ff       	jmp    3db1c <<strategy_comm5::StrategyComm5 as future_backtest_sdk::plugin::StrategyPlugin>::on_begin+0x127c>
   3dc00:	48 f7 dd             	neg    %rbp
   3dc03:	48 c1 e5 05          	shl    $0x5,%rbp
   3dc07:	66 0f 28 8c 24 a0 02 	movapd 0x2a0(%rsp),%xmm1
   3dc0e:	00 00 
   3dc10:	66 0f 2e 0d 70 87 fd 	ucomisd -0x27890(%rip),%xmm1        # 16388 <GCC_except_table128+0x104>
   3dc17:	ff 
   3dc18:	f2 41 0f 10 54 2e f8 	movsd  -0x8(%r14,%rbp,1),%xmm2
   3dc1f:	76 3f                	jbe    3dc60 <<strategy_comm5::StrategyComm5 as future_backtest_sdk::plugin::StrategyPlugin>::on_begin+0x13c0>
   3dc21:	66 0f 28 84 24 20 03 	movapd 0x320(%rsp),%xmm0
   3dc28:	00 00 
   3dc2a:	f2 0f 5f c2          	maxsd  %xmm2,%xmm0
   3dc2e:	f2 0f 5d c8          	minsd  %xmm0,%xmm1
   3dc32:	66 0f 29 8c 24 e0 00 	movapd %xmm1,0xe0(%rsp)
   3dc39:	00 00 
   3dc3b:	48 8b ac 24 b8 00 00 	mov    0xb8(%rsp),%rbp
   3dc42:	00 
   3dc43:	44 8b 74 24 10       	mov    0x10(%rsp),%r14d
   3dc48:	eb 2c                	jmp    3dc76 <<strategy_comm5::StrategyComm5 as future_backtest_sdk::plugin::StrategyPlugin>::on_begin+0x13d6>
   3dc4a:	66 0f 1f 44 00 00    	nopw   0x0(%rax,%rax,1)
   3dc50:	44 8b 74 24 10       	mov    0x10(%rsp),%r14d
   3dc55:	eb 5e                	jmp    3dcb5 <<strategy_comm5::StrategyComm5 as future_backtest_sdk::plugin::StrategyPlugin>::on_begin+0x1415>
   3dc57:	66 0f 1f 84 00 00 00 	nopw   0x0(%rax,%rax,1)
   3dc5e:	00 00 
   3dc60:	48 8b ac 24 b8 00 00 	mov    0xb8(%rsp),%rbp
   3dc67:	00 
   3dc68:	44 8b 74 24 10       	mov    0x10(%rsp),%r14d
   3dc6d:	66 0f 29 94 24 e0 00 	movapd %xmm2,0xe0(%rsp)
   3dc74:	00 00 
   3dc76:	f2 0f 10 84 24 60 02 	movsd  0x260(%rsp),%xmm0
   3dc7d:	00 00 
   3dc7f:	44 89 f7             	mov    %r14d,%edi
   3dc82:	ff 15 40 61 0c 00    	call   *0xc6140(%rip)        # 103dc8 <_DYNAMIC+0x368>
   3dc88:	66 0f 28 94 24 e0 00 	movapd 0xe0(%rsp),%xmm2
   3dc8f:	00 00 
   3dc91:	f2 0f 59 d0          	mulsd  %xmm0,%xmm2
   3dc95:	f2 0f 10 4c 24 70    	movsd  0x70(%rsp),%xmm1
   3dc9b:	f2 0f 58 ca          	addsd  %xmm2,%xmm1
   3dc9f:	f2 0f 11 4c 24 70    	movsd  %xmm1,0x70(%rsp)
   3dca5:	f2 0f 10 4c 24 18    	movsd  0x18(%rsp),%xmm1
   3dcab:	f2 0f 58 c8          	addsd  %xmm0,%xmm1
   3dcaf:	f2 0f 11 4c 24 18    	movsd  %xmm1,0x18(%rsp)
   3dcb5:	48 83 c3 18          	add    $0x18,%rbx
   3dcb9:	48 3b 9c 24 a0 00 00 	cmp    0xa0(%rsp),%rbx
   3dcc0:	00 
   3dcc1:	0f 85 09 fe ff ff    	jne    3dad0 <<strategy_comm5::StrategyComm5 as future_backtest_sdk::plugin::StrategyPlugin>::on_begin+0x1230>
   3dcc7:	f2 0f 10 44 24 18    	movsd  0x18(%rsp),%xmm0
   3dccd:	66 0f 2e 05 b3 86 fd 	ucomisd -0x2794d(%rip),%xmm0        # 16388 <GCC_except_table128+0x104>
   3dcd4:	ff 
   3dcd5:	48 8b 5c 24 68       	mov    0x68(%rsp),%rbx
   3dcda:	0f 86 a0 00 00 00    	jbe    3dd80 <<strategy_comm5::StrategyComm5 as future_backtest_sdk::plugin::StrategyPlugin>::on_begin+0x14e0>
   3dce0:	48 8d bc 24 70 03 00 	lea    0x370(%rsp),%rdi
   3dce7:	00 
   3dce8:	48 89 de             	mov    %rbx,%rsi
   3dceb:	48 8d 15 6e fb 0b 00 	lea    0xbfb6e(%rip),%rdx        # fd860 <anon.8868ba55c3fc5525a110cabbb60004d5.1.llvm.6579149275953927878+0x268>
   3dcf2:	ff 15 c0 60 0c 00    	call   *0xc60c0(%rip)        # 103db8 <_DYNAMIC+0x358>
   3dcf8:	4c 8b bc 24 70 03 00 	mov    0x370(%rsp),%r15
   3dcff:	00 
   3dd00:	4c 8b a4 24 78 03 00 	mov    0x378(%rsp),%r12
   3dd07:	00 
   3dd08:	4c 8b b4 24 80 03 00 	mov    0x380(%rsp),%r14
   3dd0f:	00 
   3dd10:	48 8b 9c 24 08 01 00 	mov    0x108(%rsp),%rbx
   3dd17:	00 
   3dd18:	48 3b 9c 24 f8 00 00 	cmp    0xf8(%rsp),%rbx
   3dd1f:	00 
   3dd20:	75 14                	jne    3dd36 <<strategy_comm5::StrategyComm5 as future_backtest_sdk::plugin::StrategyPlugin>::on_begin+0x1496>
   3dd22:	48 8d bc 24 f8 00 00 	lea    0xf8(%rsp),%rdi
   3dd29:	00 
   3dd2a:	48 8d 35 47 fb 0b 00 	lea    0xbfb47(%rip),%rsi        # fd878 <anon.8868ba55c3fc5525a110cabbb60004d5.1.llvm.6579149275953927878+0x280>
   3dd31:	e8 ea 41 04 00       	call   81f20 <alloc::raw_vec::RawVec<T,A>::grow_one>
   3dd36:	f2 0f 10 44 24 70    	movsd  0x70(%rsp),%xmm0
   3dd3c:	f2 0f 5e 44 24 18    	divsd  0x18(%rsp),%xmm0
   3dd42:	48 8b 84 24 00 01 00 	mov    0x100(%rsp),%rax
   3dd49:	00 
   3dd4a:	48 89 d9             	mov    %rbx,%rcx
   3dd4d:	48 c1 e1 05          	shl    $0x5,%rcx
   3dd51:	4c 89 3c 08          	mov    %r15,(%rax,%rcx,1)
   3dd55:	4c 89 64 08 08       	mov    %r12,0x8(%rax,%rcx,1)
   3dd5a:	4c 89 74 08 10       	mov    %r14,0x10(%rax,%rcx,1)
   3dd5f:	f2 0f 11 44 08 18    	movsd  %xmm0,0x18(%rax,%rcx,1)
   3dd65:	48 ff c3             	inc    %rbx
   3dd68:	48 89 9c 24 08 01 00 	mov    %rbx,0x108(%rsp)
   3dd6f:	00 
   3dd70:	48 8b 5c 24 68       	mov    0x68(%rsp),%rbx
   3dd75:	66 66 2e 0f 1f 84 00 	data16 cs nopw 0x0(%rax,%rax,1)
   3dd7c:	00 00 00 00 
   3dd80:	48 83 c3 18          	add    $0x18,%rbx
   3dd84:	48 3b 9c 24 f0 00 00 	cmp    0xf0(%rsp),%rbx
   3dd8b:	00 
   3dd8c:	0f 85 ae fb ff ff    	jne    3d940 <<strategy_comm5::StrategyComm5 as future_backtest_sdk::plugin::StrategyPlugin>::on_begin+0x10a0>
   3dd92:	48 8b 9c 24 00 01 00 	mov    0x100(%rsp),%rbx
   3dd99:	00 
   3dd9a:	4c 8b b4 24 08 01 00 	mov    0x108(%rsp),%r14
   3dda1:	00 
   3dda2:	48 8d 44 24 20       	lea    0x20(%rsp),%rax
   3dda7:	48 89 84 24 70 03 00 	mov    %rax,0x370(%rsp)
   3ddae:	00 
   3ddaf:	49 83 fe 02          	cmp    $0x2,%r14
   3ddb3:	0f 83 3c 11 00 00    	jae    3eef5 <<strategy_comm5::StrategyComm5 as future_backtest_sdk::plugin::StrategyPlugin>::on_begin+0x2655>
   3ddb9:	48 8b b4 24 50 02 00 	mov    0x250(%rsp),%rsi
   3ddc0:	00 
   3ddc1:	80 7e 10 01          	cmpb   $0x1,0x10(%rsi)
   3ddc5:	0f 85 58 11 00 00    	jne    3ef23 <<strategy_comm5::StrategyComm5 as future_backtest_sdk::plugin::StrategyPlugin>::on_begin+0x2683>
   3ddcb:	48 8b 06             	mov    (%rsi),%rax
   3ddce:	48 8b 56 08          	mov    0x8(%rsi),%rdx
   3ddd2:	48 8d 48 01          	lea    0x1(%rax),%rcx
   3ddd6:	48 89 0e             	mov    %rcx,(%rsi)
   3ddd9:	0f 10 05 d0 f8 0b 00 	movups 0xbf8d0(%rip),%xmm0        # fd6b0 <anon.8868ba55c3fc5525a110cabbb60004d5.1.llvm.6579149275953927878+0xb8>
   3dde0:	0f 29 84 24 20 01 00 	movaps %xmm0,0x120(%rsp)
   3dde7:	00 
   3dde8:	66 0f 10 05 b0 f8 0b 	movupd 0xbf8b0(%rip),%xmm0        # fd6a0 <anon.8868ba55c3fc5525a110cabbb60004d5.1.llvm.6579149275953927878+0xa8>
   3ddef:	00 
   3ddf0:	66 0f 29 84 24 10 01 	movapd %xmm0,0x110(%rsp)
   3ddf7:	00 00 
   3ddf9:	48 89 84 24 30 01 00 	mov    %rax,0x130(%rsp)
   3de00:	00 
   3de01:	48 89 94 24 38 01 00 	mov    %rdx,0x138(%rsp)
   3de08:	00 
   3de09:	4c 8b bc 24 08 01 00 	mov    0x108(%rsp),%r15
   3de10:	00 
   3de11:	4d 85 ff             	test   %r15,%r15
   3de14:	74 69                	je     3de7f <<strategy_comm5::StrategyComm5 as future_backtest_sdk::plugin::StrategyPlugin>::on_begin+0x15df>
   3de16:	48 8b 9c 24 00 01 00 	mov    0x100(%rsp),%rbx
   3de1d:	00 
   3de1e:	49 c1 e7 05          	shl    $0x5,%r15
   3de22:	49 01 df             	add    %rbx,%r15
   3de25:	41 be 01 00 00 00    	mov    $0x1,%r14d
   3de2b:	4c 8d a4 24 70 03 00 	lea    0x370(%rsp),%r12
   3de32:	00 
   3de33:	4c 8d 6c 24 20       	lea    0x20(%rsp),%r13
   3de38:	48 8d ac 24 10 01 00 	lea    0x110(%rsp),%rbp
   3de3f:	00 
   3de40:	4c 89 e7             	mov    %r12,%rdi
   3de43:	48 89 de             	mov    %rbx,%rsi
   3de46:	48 8d 15 fb f9 0b 00 	lea    0xbf9fb(%rip),%rdx        # fd848 <anon.8868ba55c3fc5525a110cabbb60004d5.1.llvm.6579149275953927878+0x250>
   3de4d:	ff 15 65 5f 0c 00    	call   *0xc5f65(%rip)        # 103db8 <_DYNAMIC+0x358>
   3de53:	f2 0f 10 43 18       	movsd  0x18(%rbx),%xmm0
   3de58:	4c 89 ef             	mov    %r13,%rdi
   3de5b:	48 89 ee             	mov    %rbp,%rsi
   3de5e:	4c 89 e2             	mov    %r12,%rdx
   3de61:	4c 89 f1             	mov    %r14,%rcx
   3de64:	e8 67 4d 03 00       	call   72bd0 <hashbrown::map::HashMap<K,V,S,A>::insert>
   3de69:	49 ff c6             	inc    %r14
   3de6c:	48 83 c3 20          	add    $0x20,%rbx
   3de70:	4c 39 fb             	cmp    %r15,%rbx
   3de73:	75 cb                	jne    3de40 <<strategy_comm5::StrategyComm5 as future_backtest_sdk::plugin::StrategyPlugin>::on_begin+0x15a0>
   3de75:	48 8b 9c 24 08 01 00 	mov    0x108(%rsp),%rbx
   3de7c:	00 
   3de7d:	eb 02                	jmp    3de81 <<strategy_comm5::StrategyComm5 as future_backtest_sdk::plugin::StrategyPlugin>::on_begin+0x15e1>
   3de7f:	31 db                	xor    %ebx,%ebx
   3de81:	48 89 9c 24 80 01 00 	mov    %rbx,0x180(%rsp)
   3de88:	00 
   3de89:	0f 57 c9             	xorps  %xmm1,%xmm1
   3de8c:	f2 48 0f 2a cb       	cvtsi2sd %rbx,%xmm1
   3de91:	f2 0f 11 4c 24 10    	movsd  %xmm1,0x10(%rsp)
   3de97:	f2 0f 10 84 24 20 0e 	movsd  0xe20(%rsp),%xmm0
   3de9e:	00 00 
   3dea0:	f2 0f 59 c1          	mulsd  %xmm1,%xmm0
   3dea4:	4c 8b 35 25 5f 0c 00 	mov    0xc5f25(%rip),%r14        # 103dd0 <_DYNAMIC+0x370>
   3deab:	41 ff d6             	call   *%r14
   3deae:	f2 4c 0f 2c e8       	cvttsd2si %xmm0,%r13
   3deb3:	66 0f 2e 05 2d 84 fd 	ucomisd -0x27bd3(%rip),%xmm0        # 162e8 <GCC_except_table128+0x64>
   3deba:	ff 
   3debb:	48 bd ff ff ff ff ff 	movabs $0x7fffffffffffffff,%rbp
   3dec2:	ff ff 7f 
   3dec5:	4c 0f 47 ed          	cmova  %rbp,%r13
   3dec9:	45 31 ff             	xor    %r15d,%r15d
   3decc:	66 0f 2e c0          	ucomisd %xmm0,%xmm0
   3ded0:	4d 0f 4a ef          	cmovp  %r15,%r13
   3ded4:	4c 89 ac 24 68 02 00 	mov    %r13,0x268(%rsp)
   3dedb:	00 
   3dedc:	f2 0f 10 84 24 28 0e 	movsd  0xe28(%rsp),%xmm0
   3dee3:	00 00 
   3dee5:	f2 0f 59 44 24 10    	mulsd  0x10(%rsp),%xmm0
   3deeb:	41 ff d6             	call   *%r14
   3deee:	f2 4c 0f 2c e0       	cvttsd2si %xmm0,%r12
   3def3:	66 0f 2e 05 ed 83 fd 	ucomisd -0x27c13(%rip),%xmm0        # 162e8 <GCC_except_table128+0x64>
   3defa:	ff 
   3defb:	4c 0f 47 e5          	cmova  %rbp,%r12
   3deff:	66 0f 2e c0          	ucomisd %xmm0,%xmm0
   3df03:	4d 0f 4a e7          	cmovp  %r15,%r12
   3df07:	4d 39 ec             	cmp    %r13,%r12
   3df0a:	4d 0f 4e e5          	cmovle %r13,%r12
   3df0e:	4c 89 a4 24 f8 01 00 	mov    %r12,0x1f8(%rsp)
   3df15:	00 
   3df16:	f2 0f 10 84 24 30 0e 	movsd  0xe30(%rsp),%xmm0
   3df1d:	00 00 
   3df1f:	f2 0f 59 44 24 10    	mulsd  0x10(%rsp),%xmm0
   3df25:	41 ff d6             	call   *%r14
   3df28:	f2 48 0f 2c c0       	cvttsd2si %xmm0,%rax
   3df2d:	66 0f 2e 05 b3 83 fd 	ucomisd -0x27c4d(%rip),%xmm0        # 162e8 <GCC_except_table128+0x64>
   3df34:	ff 
   3df35:	48 0f 47 c5          	cmova  %rbp,%rax
   3df39:	66 0f 2e c0          	ucomisd %xmm0,%xmm0
   3df3d:	49 0f 4a c7          	cmovp  %r15,%rax
   3df41:	f2 0f 10 84 24 58 0e 	movsd  0xe58(%rsp),%xmm0
   3df48:	00 00 
   3df4a:	66 0f 2e 44 24 10    	ucomisd 0x10(%rsp),%xmm0
   3df50:	48 8d 8c 24 80 01 00 	lea    0x180(%rsp),%rcx
   3df57:	00 
   3df58:	48 89 84 24 b8 00 00 	mov    %rax,0xb8(%rsp)
   3df5f:	00 
   3df60:	0f 86 af 00 00 00    	jbe    3e015 <<strategy_comm5::StrategyComm5 as future_backtest_sdk::plugin::StrategyPlugin>::on_begin+0x1775>
   3df66:	48 8d 84 24 58 0e 00 	lea    0xe58(%rsp),%rax
   3df6d:	00 
   3df6e:	48 89 4c 24 20       	mov    %rcx,0x20(%rsp)
   3df73:	48 8b 0d 5e 5e 0c 00 	mov    0xc5e5e(%rip),%rcx        # 103dd8 <_DYNAMIC+0x378>
   3df7a:	48 89 4c 24 28       	mov    %rcx,0x28(%rsp)
   3df7f:	48 89 44 24 30       	mov    %rax,0x30(%rsp)
   3df84:	48 8b 05 f5 5d 0c 00 	mov    0xc5df5(%rip),%rax        # 103d80 <_DYNAMIC+0x320>
   3df8b:	48 89 44 24 38       	mov    %rax,0x38(%rsp)
   3df90:	48 8d 05 89 f7 0b 00 	lea    0xbf789(%rip),%rax        # fd720 <anon.8868ba55c3fc5525a110cabbb60004d5.1.llvm.6579149275953927878+0x128>
   3df97:	48 89 84 24 70 03 00 	mov    %rax,0x370(%rsp)
   3df9e:	00 
   3df9f:	48 c7 84 24 78 03 00 	movq   $0x2,0x378(%rsp)
   3dfa6:	00 02 00 00 00 
   3dfab:	48 c7 84 24 90 03 00 	movq   $0x0,0x390(%rsp)
   3dfb2:	00 00 00 00 00 
   3dfb7:	48 8d 44 24 20       	lea    0x20(%rsp),%rax
   3dfbc:	48 89 84 24 80 03 00 	mov    %rax,0x380(%rsp)
   3dfc3:	00 
   3dfc4:	48 c7 84 24 88 03 00 	movq   $0x2,0x388(%rsp)
   3dfcb:	00 02 00 00 00 
   3dfd0:	48 8d bc 24 40 03 00 	lea    0x340(%rsp),%rdi
   3dfd7:	00 
   3dfd8:	48 8d b4 24 70 03 00 	lea    0x370(%rsp),%rsi
   3dfdf:	00 
   3dfe0:	ff 15 32 5d 0c 00    	call   *0xc5d32(%rip)        # 103d18 <_DYNAMIC+0x2b8>
   3dfe6:	4c 8d b4 24 18 0e 00 	lea    0xe18(%rsp),%r14
   3dfed:	00 
   3dfee:	4c 8b bc 24 a0 01 00 	mov    0x1a0(%rsp),%r15
   3dff5:	00 
   3dff6:	66 0f 10 84 24 40 03 	movupd 0x340(%rsp),%xmm0
   3dffd:	00 00 
   3dfff:	66 0f 29 84 24 60 01 	movapd %xmm0,0x160(%rsp)
   3e006:	00 00 
   3e008:	48 8b 84 24 50 03 00 	mov    0x350(%rsp),%rax
   3e00f:	00 
   3e010:	e9 11 01 00 00       	jmp    3e126 <<strategy_comm5::StrategyComm5 as future_backtest_sdk::plugin::StrategyPlugin>::on_begin+0x1886>
   3e015:	48 29 c3             	sub    %rax,%rbx
   3e018:	49 39 dc             	cmp    %rbx,%r12
   3e01b:	4c 8d b4 24 18 0e 00 	lea    0xe18(%rsp),%r14
   3e022:	00 
   3e023:	4c 8b bc 24 a0 01 00 	mov    0x1a0(%rsp),%r15
   3e02a:	00 
   3e02b:	7d 56                	jge    3e083 <<strategy_comm5::StrategyComm5 as future_backtest_sdk::plugin::StrategyPlugin>::on_begin+0x17e3>
   3e02d:	48 b8 00 00 00 00 00 	movabs $0x8000000000000000,%rax
   3e034:	00 00 80 
   3e037:	48 89 84 24 60 01 00 	mov    %rax,0x160(%rsp)
   3e03e:	00 
   3e03f:	e9 ea 00 00 00       	jmp    3e12e <<strategy_comm5::StrategyComm5 as future_backtest_sdk::plugin::StrategyPlugin>::on_begin+0x188e>
   3e044:	48 8d 0c 5b          	lea    (%rbx,%rbx,2),%rcx
   3e048:	48 8d 1c c8          	lea    (%rax,%rcx,8),%rbx
   3e04c:	48 83 c3 08          	add    $0x8,%rbx
   3e050:	4c 8b 3d 21 5c 0c 00 	mov    0xc5c21(%rip),%r15        # 103c78 <_DYNAMIC+0x218>
   3e057:	eb 14                	jmp    3e06d <<strategy_comm5::StrategyComm5 as future_backtest_sdk::plugin::StrategyPlugin>::on_begin+0x17cd>
   3e059:	0f 1f 80 00 00 00 00 	nopl   0x0(%rax)
   3e060:	48 83 c3 18          	add    $0x18,%rbx
   3e064:	49 ff ce             	dec    %r14
   3e067:	0f 84 0f f8 ff ff    	je     3d87c <<strategy_comm5::StrategyComm5 as future_backtest_sdk::plugin::StrategyPlugin>::on_begin+0xfdc>
   3e06d:	48 8b 73 f8          	mov    -0x8(%rbx),%rsi
   3e071:	48 85 f6             	test   %rsi,%rsi
   3e074:	74 ea                	je     3e060 <<strategy_comm5::StrategyComm5 as future_backtest_sdk::plugin::StrategyPlugin>::on_begin+0x17c0>
   3e076:	48 8b 3b             	mov    (%rbx),%rdi
   3e079:	ba 01 00 00 00       	mov    $0x1,%edx
   3e07e:	41 ff d7             	call   *%r15
   3e081:	eb dd                	jmp    3e060 <<strategy_comm5::StrategyComm5 as future_backtest_sdk::plugin::StrategyPlugin>::on_begin+0x17c0>
   3e083:	48 89 9c 24 88 00 00 	mov    %rbx,0x88(%rsp)
   3e08a:	00 
   3e08b:	48 8d 84 24 f8 01 00 	lea    0x1f8(%rsp),%rax
   3e092:	00 
   3e093:	48 89 44 24 20       	mov    %rax,0x20(%rsp)
   3e098:	48 8b 05 39 5d 0c 00 	mov    0xc5d39(%rip),%rax        # 103dd8 <_DYNAMIC+0x378>
   3e09f:	48 89 44 24 28       	mov    %rax,0x28(%rsp)
   3e0a4:	48 8d 8c 24 88 00 00 	lea    0x88(%rsp),%rcx
   3e0ab:	00 
   3e0ac:	48 89 4c 24 30       	mov    %rcx,0x30(%rsp)
   3e0b1:	48 89 44 24 38       	mov    %rax,0x38(%rsp)
   3e0b6:	48 8d 05 43 f6 0b 00 	lea    0xbf643(%rip),%rax        # fd700 <anon.8868ba55c3fc5525a110cabbb60004d5.1.llvm.6579149275953927878+0x108>
   3e0bd:	48 89 84 24 70 03 00 	mov    %rax,0x370(%rsp)
   3e0c4:	00 
   3e0c5:	48 c7 84 24 78 03 00 	movq   $0x2,0x378(%rsp)
   3e0cc:	00 02 00 00 00 
   3e0d1:	48 c7 84 24 90 03 00 	movq   $0x0,0x390(%rsp)
   3e0d8:	00 00 00 00 00 
   3e0dd:	48 8d 44 24 20       	lea    0x20(%rsp),%rax
   3e0e2:	48 89 84 24 80 03 00 	mov    %rax,0x380(%rsp)
   3e0e9:	00 
   3e0ea:	48 c7 84 24 88 03 00 	movq   $0x2,0x388(%rsp)
   3e0f1:	00 02 00 00 00 
   3e0f6:	48 8d bc 24 58 03 00 	lea    0x358(%rsp),%rdi
   3e0fd:	00 
   3e0fe:	48 8d b4 24 70 03 00 	lea    0x370(%rsp),%rsi
   3e105:	00 
   3e106:	ff 15 0c 5c 0c 00    	call   *0xc5c0c(%rip)        # 103d18 <_DYNAMIC+0x2b8>
   3e10c:	66 0f 10 84 24 58 03 	movupd 0x358(%rsp),%xmm0
   3e113:	00 00 
   3e115:	66 0f 29 84 24 60 01 	movapd %xmm0,0x160(%rsp)
   3e11c:	00 00 
   3e11e:	48 8b 84 24 68 03 00 	mov    0x368(%rsp),%rax
   3e125:	00 
   3e126:	48 89 84 24 70 01 00 	mov    %rax,0x170(%rsp)
   3e12d:	00 
   3e12e:	48 8b 84 24 c0 01 00 	mov    0x1c0(%rsp),%rax
   3e135:	00 
   3e136:	48 85 c0             	test   %rax,%rax
   3e139:	0f 84 71 06 00 00    	je     3e7b0 <<strategy_comm5::StrategyComm5 as future_backtest_sdk::plugin::StrategyPlugin>::on_begin+0x1f10>
   3e13f:	49 8d 47 18          	lea    0x18(%r15),%rax
   3e143:	f2 0f 10 84 24 38 0e 	movsd  0xe38(%rsp),%xmm0
   3e14a:	00 00 
   3e14c:	f2 0f 11 44 24 68    	movsd  %xmm0,0x68(%rsp)
   3e152:	f2 0f 10 84 24 40 0e 	movsd  0xe40(%rsp),%xmm0
   3e159:	00 00 
   3e15b:	f2 0f 11 84 24 a0 02 	movsd  %xmm0,0x2a0(%rsp)
   3e162:	00 00 
   3e164:	f3 0f 7e 84 24 48 0e 	movq   0xe48(%rsp),%xmm0
   3e16b:	00 00 
   3e16d:	66 0f d6 84 24 90 02 	movq   %xmm0,0x290(%rsp)
   3e174:	00 00 
   3e176:	48 8b 8c 24 d8 01 00 	mov    0x1d8(%rsp),%rcx
   3e17d:	00 
   3e17e:	48 81 c1 28 06 00 00 	add    $0x628,%rcx
   3e185:	48 89 8c 24 a0 00 00 	mov    %rcx,0xa0(%rsp)
   3e18c:	00 
   3e18d:	eb 1f                	jmp    3e1ae <<strategy_comm5::StrategyComm5 as future_backtest_sdk::plugin::StrategyPlugin>::on_begin+0x190e>
   3e18f:	90                   	nop
   3e190:	48 8b 4c 24 10       	mov    0x10(%rsp),%rcx
   3e195:	48 8d 41 18          	lea    0x18(%rcx),%rax
   3e199:	49 89 cf             	mov    %rcx,%r15
   3e19c:	48 3b 8c 24 f0 00 00 	cmp    0xf0(%rsp),%rcx
   3e1a3:	00 
   3e1a4:	48 0f 44 c1          	cmove  %rcx,%rax
   3e1a8:	0f 84 02 06 00 00    	je     3e7b0 <<strategy_comm5::StrategyComm5 as future_backtest_sdk::plugin::StrategyPlugin>::on_begin+0x1f10>
   3e1ae:	48 89 44 24 10       	mov    %rax,0x10(%rsp)
   3e1b3:	4c 89 bc 24 00 02 00 	mov    %r15,0x200(%rsp)
   3e1ba:	00 
   3e1bb:	48 83 bc 24 28 01 00 	cmpq   $0x0,0x128(%rsp)
   3e1c2:	00 00 
   3e1c4:	f3 0f 7e 05 9c 81 fd 	movq   -0x27e64(%rip),%xmm0        # 16368 <GCC_except_table128+0xe4>
   3e1cb:	ff 
   3e1cc:	0f 84 88 01 00 00    	je     3e35a <<strategy_comm5::StrategyComm5 as future_backtest_sdk::plugin::StrategyPlugin>::on_begin+0x1aba>
   3e1d2:	48 8d bc 24 30 01 00 	lea    0x130(%rsp),%rdi
   3e1d9:	00 
   3e1da:	4c 89 fe             	mov    %r15,%rsi
   3e1dd:	e8 be 14 04 00       	call   7f6a0 <core::hash::BuildHasher::hash_one>
   3e1e2:	4c 89 bc 24 a0 01 00 	mov    %r15,0x1a0(%rsp)
   3e1e9:	00 
   3e1ea:	48 89 c1             	mov    %rax,%rcx
   3e1ed:	48 c1 e9 39          	shr    $0x39,%rcx
   3e1f1:	4c 8b b4 24 10 01 00 	mov    0x110(%rsp),%r14
   3e1f8:	00 
   3e1f9:	4c 8b a4 24 18 01 00 	mov    0x118(%rsp),%r12
   3e200:	00 
   3e201:	66 0f 6e c1          	movd   %ecx,%xmm0
   3e205:	66 0f 60 c0          	punpcklbw %xmm0,%xmm0
   3e209:	f2 0f 70 c0 00       	pshuflw $0x0,%xmm0,%xmm0
   3e20e:	66 0f 70 c8 00       	pshufd $0x0,%xmm0,%xmm1
   3e213:	49 8d 5e d8          	lea    -0x28(%r14),%rbx
   3e217:	31 d2                	xor    %edx,%edx
   3e219:	4c 21 e0             	and    %r12,%rax
   3e21c:	f3 41 0f 6f 14 06    	movdqu (%r14,%rax,1),%xmm2
   3e222:	66 0f 6f c2          	movdqa %xmm2,%xmm0
   3e226:	66 0f 74 c1          	pcmpeqb %xmm1,%xmm0
   3e22a:	66 44 0f d7 e8       	pmovmskb %xmm0,%r13d
   3e22f:	45 85 ed             	test   %r13d,%r13d
   3e232:	0f 84 8b 00 00 00    	je     3e2c3 <<strategy_comm5::StrategyComm5 as future_backtest_sdk::plugin::StrategyPlugin>::on_begin+0x1a23>
   3e238:	48 8b 8c 24 a0 01 00 	mov    0x1a0(%rsp),%rcx
   3e23f:	00 
   3e240:	4c 8b 79 10          	mov    0x10(%rcx),%r15
   3e244:	48 89 44 24 18       	mov    %rax,0x18(%rsp)
   3e249:	66 0f 7f 4c 24 70    	movdqa %xmm1,0x70(%rsp)
   3e24f:	48 89 94 24 e0 00 00 	mov    %rdx,0xe0(%rsp)
   3e256:	00 
   3e257:	66 0f 7f 94 24 b0 01 	movdqa %xmm2,0x1b0(%rsp)
   3e25e:	00 00 
   3e260:	f3 41 0f bc cd       	tzcnt  %r13d,%ecx
   3e265:	48 01 c1             	add    %rax,%rcx
   3e268:	4c 21 e1             	and    %r12,%rcx
   3e26b:	48 f7 d9             	neg    %rcx
   3e26e:	48 8d 2c 89          	lea    (%rcx,%rcx,4),%rbp
   3e272:	4c 3b 7c eb 10       	cmp    0x10(%rbx,%rbp,8),%r15
   3e277:	75 21                	jne    3e29a <<strategy_comm5::StrategyComm5 as future_backtest_sdk::plugin::StrategyPlugin>::on_begin+0x19fa>
   3e279:	48 8d 04 eb          	lea    (%rbx,%rbp,8),%rax
   3e27d:	48 8b 70 08          	mov    0x8(%rax),%rsi
   3e281:	48 8b 84 24 a0 01 00 	mov    0x1a0(%rsp),%rax
   3e288:	00 
   3e289:	48 8b 78 08          	mov    0x8(%rax),%rdi
   3e28d:	4c 89 fa             	mov    %r15,%rdx
   3e290:	ff 15 92 5a 0c 00    	call   *0xc5a92(%rip)        # 103d28 <bcmp@GLIBC_2.2.5>
   3e296:	85 c0                	test   %eax,%eax
   3e298:	74 56                	je     3e2f0 <<strategy_comm5::StrategyComm5 as future_backtest_sdk::plugin::StrategyPlugin>::on_begin+0x1a50>
   3e29a:	41 8d 45 ff          	lea    -0x1(%r13),%eax
   3e29e:	66 44 21 e8          	and    %r13w,%ax
   3e2a2:	41 89 c5             	mov    %eax,%r13d
   3e2a5:	48 8b 44 24 18       	mov    0x18(%rsp),%rax
   3e2aa:	66 0f 6f 4c 24 70    	movdqa 0x70(%rsp),%xmm1
   3e2b0:	48 8b 94 24 e0 00 00 	mov    0xe0(%rsp),%rdx
   3e2b7:	00 
   3e2b8:	66 0f 6f 94 24 b0 01 	movdqa 0x1b0(%rsp),%xmm2
   3e2bf:	00 00 
   3e2c1:	75 9d                	jne    3e260 <<strategy_comm5::StrategyComm5 as future_backtest_sdk::plugin::StrategyPlugin>::on_begin+0x19c0>
   3e2c3:	66 0f 74 15 05 82 fd 	pcmpeqb -0x27dfb(%rip),%xmm2        # 164d0 <anon.50e25bb1355b8971fc58210c29d1b4b6.2.llvm.1301231569978033549>
   3e2ca:	ff 
   3e2cb:	66 0f d7 ca          	pmovmskb %xmm2,%ecx
   3e2cf:	85 c9                	test   %ecx,%ecx
   3e2d1:	75 7f                	jne    3e352 <<strategy_comm5::StrategyComm5 as future_backtest_sdk::plugin::StrategyPlugin>::on_begin+0x1ab2>
   3e2d3:	48 01 d0             	add    %rdx,%rax
   3e2d6:	48 83 c0 10          	add    $0x10,%rax
   3e2da:	48 83 c2 10          	add    $0x10,%rdx
   3e2de:	e9 36 ff ff ff       	jmp    3e219 <<strategy_comm5::StrategyComm5 as future_backtest_sdk::plugin::StrategyPlugin>::on_begin+0x1979>
   3e2e3:	66 66 66 66 2e 0f 1f 	data16 data16 data16 cs nopw 0x0(%rax,%rax,1)
   3e2ea:	84 00 00 00 00 00 
   3e2f0:	f3 0f 7e 05 70 80 fd 	movq   -0x27f90(%rip),%xmm0        # 16368 <GCC_except_table128+0xe4>
   3e2f7:	ff 
   3e2f8:	48 b8 00 00 00 00 00 	movabs $0x8000000000000000,%rax
   3e2ff:	00 00 80 
   3e302:	48 39 84 24 60 01 00 	cmp    %rax,0x160(%rsp)
   3e309:	00 
   3e30a:	75 4e                	jne    3e35a <<strategy_comm5::StrategyComm5 as future_backtest_sdk::plugin::StrategyPlugin>::on_begin+0x1aba>
   3e30c:	49 8b 44 ee f8       	mov    -0x8(%r14,%rbp,8),%rax
   3e311:	f3 0f 7e 44 24 68    	movq   0x68(%rsp),%xmm0
   3e317:	48 3b 84 24 68 02 00 	cmp    0x268(%rsp),%rax
   3e31e:	00 
   3e31f:	7e 39                	jle    3e35a <<strategy_comm5::StrategyComm5 as future_backtest_sdk::plugin::StrategyPlugin>::on_begin+0x1aba>
   3e321:	f3 0f 7e 84 24 a0 02 	movq   0x2a0(%rsp),%xmm0
   3e328:	00 00 
   3e32a:	48 3b 84 24 f8 01 00 	cmp    0x1f8(%rsp),%rax
   3e331:	00 
   3e332:	7e 26                	jle    3e35a <<strategy_comm5::StrategyComm5 as future_backtest_sdk::plugin::StrategyPlugin>::on_begin+0x1aba>
   3e334:	48 8b 8c 24 80 01 00 	mov    0x180(%rsp),%rcx
   3e33b:	00 
   3e33c:	48 2b 8c 24 b8 00 00 	sub    0xb8(%rsp),%rcx
   3e343:	00 
   3e344:	f3 0f 7e 84 24 90 02 	movq   0x290(%rsp),%xmm0
   3e34b:	00 00 
   3e34d:	48 39 c8             	cmp    %rcx,%rax
   3e350:	7f 08                	jg     3e35a <<strategy_comm5::StrategyComm5 as future_backtest_sdk::plugin::StrategyPlugin>::on_begin+0x1aba>
   3e352:	f3 0f 7e 05 0e 80 fd 	movq   -0x27ff2(%rip),%xmm0        # 16368 <GCC_except_table128+0xe4>
   3e359:	ff 
   3e35a:	66 0f d6 84 24 70 02 	movq   %xmm0,0x270(%rsp)
   3e361:	00 00 
   3e363:	48 8b b4 24 00 02 00 	mov    0x200(%rsp),%rsi
   3e36a:	00 
   3e36b:	48 8d bc 24 70 03 00 	lea    0x370(%rsp),%rdi
   3e372:	00 
   3e373:	48 8d 15 76 f4 0b 00 	lea    0xbf476(%rip),%rdx        # fd7f0 <anon.8868ba55c3fc5525a110cabbb60004d5.1.llvm.6579149275953927878+0x1f8>
   3e37a:	ff 15 38 5a 0c 00    	call   *0xc5a38(%rip)        # 103db8 <_DYNAMIC+0x358>
   3e380:	f3 0f 7e 84 24 70 02 	movq   0x270(%rsp),%xmm0
   3e387:	00 00 
   3e389:	48 8b bc 24 a0 00 00 	mov    0xa0(%rsp),%rdi
   3e390:	00 
   3e391:	48 8d b4 24 70 03 00 	lea    0x370(%rsp),%rsi
   3e398:	00 
   3e399:	e8 12 4e 03 00       	call   731b0 <hashbrown::map::HashMap<K,V,S,A>::insert>
   3e39e:	48 83 bc 24 28 01 00 	cmpq   $0x0,0x128(%rsp)
   3e3a5:	00 00 
   3e3a7:	0f 84 23 01 00 00    	je     3e4d0 <<strategy_comm5::StrategyComm5 as future_backtest_sdk::plugin::StrategyPlugin>::on_begin+0x1c30>
   3e3ad:	4c 8b bc 24 00 02 00 	mov    0x200(%rsp),%r15
   3e3b4:	00 
   3e3b5:	48 8d bc 24 30 01 00 	lea    0x130(%rsp),%rdi
   3e3bc:	00 
   3e3bd:	4c 89 fe             	mov    %r15,%rsi
   3e3c0:	e8 db 12 04 00       	call   7f6a0 <core::hash::BuildHasher::hash_one>
   3e3c5:	48 89 c1             	mov    %rax,%rcx
   3e3c8:	48 c1 e9 39          	shr    $0x39,%rcx
   3e3cc:	4c 8b b4 24 10 01 00 	mov    0x110(%rsp),%r14
   3e3d3:	00 
   3e3d4:	48 8b b4 24 18 01 00 	mov    0x118(%rsp),%rsi
   3e3db:	00 
   3e3dc:	66 0f 6e c1          	movd   %ecx,%xmm0
   3e3e0:	66 0f 60 c0          	punpcklbw %xmm0,%xmm0
   3e3e4:	f2 0f 70 c0 00       	pshuflw $0x0,%xmm0,%xmm0
   3e3e9:	66 0f 70 c8 00       	pshufd $0x0,%xmm0,%xmm1
   3e3ee:	4d 8d 6e d8          	lea    -0x28(%r14),%r13
   3e3f2:	31 ff                	xor    %edi,%edi
   3e3f4:	48 21 f0             	and    %rsi,%rax
   3e3f7:	f3 41 0f 6f 14 06    	movdqu (%r14,%rax,1),%xmm2
   3e3fd:	66 0f 6f c2          	movdqa %xmm2,%xmm0
   3e401:	66 0f 74 c1          	pcmpeqb %xmm1,%xmm0
   3e405:	66 0f d7 e8          	pmovmskb %xmm0,%ebp
   3e409:	85 ed                	test   %ebp,%ebp
   3e40b:	0f 84 92 00 00 00    	je     3e4a3 <<strategy_comm5::StrategyComm5 as future_backtest_sdk::plugin::StrategyPlugin>::on_begin+0x1c03>
   3e411:	4d 8b 67 10          	mov    0x10(%r15),%r12
   3e415:	48 89 44 24 18       	mov    %rax,0x18(%rsp)
   3e41a:	66 0f 7f 4c 24 70    	movdqa %xmm1,0x70(%rsp)
   3e420:	48 89 b4 24 e0 00 00 	mov    %rsi,0xe0(%rsp)
   3e427:	00 
   3e428:	48 89 bc 24 b0 01 00 	mov    %rdi,0x1b0(%rsp)
   3e42f:	00 
   3e430:	66 0f 7f 94 24 a0 01 	movdqa %xmm2,0x1a0(%rsp)
   3e437:	00 00 
   3e439:	f3 0f bc cd          	tzcnt  %ebp,%ecx
   3e43d:	48 01 c1             	add    %rax,%rcx
   3e440:	48 21 f1             	and    %rsi,%rcx
   3e443:	48 f7 d9             	neg    %rcx
   3e446:	48 8d 1c 89          	lea    (%rcx,%rcx,4),%rbx
   3e44a:	4d 3b 64 dd 10       	cmp    0x10(%r13,%rbx,8),%r12
   3e44f:	75 24                	jne    3e475 <<strategy_comm5::StrategyComm5 as future_backtest_sdk::plugin::StrategyPlugin>::on_begin+0x1bd5>
   3e451:	48 8d 04 dd 00 00 00 	lea    0x0(,%rbx,8),%rax
   3e458:	00 
   3e459:	4c 01 e8             	add    %r13,%rax
   3e45c:	48 8b 70 08          	mov    0x8(%rax),%rsi
   3e460:	49 8b 7f 08          	mov    0x8(%r15),%rdi
   3e464:	4c 89 e2             	mov    %r12,%rdx
   3e467:	ff 15 bb 58 0c 00    	call   *0xc58bb(%rip)        # 103d28 <bcmp@GLIBC_2.2.5>
   3e46d:	85 c0                	test   %eax,%eax
   3e46f:	0f 84 cb 00 00 00    	je     3e540 <<strategy_comm5::StrategyComm5 as future_backtest_sdk::plugin::StrategyPlugin>::on_begin+0x1ca0>
   3e475:	8d 45 ff             	lea    -0x1(%rbp),%eax
   3e478:	66 21 e8             	and    %bp,%ax
   3e47b:	89 c5                	mov    %eax,%ebp
   3e47d:	48 8b 44 24 18       	mov    0x18(%rsp),%rax
   3e482:	66 0f 6f 4c 24 70    	movdqa 0x70(%rsp),%xmm1
   3e488:	48 8b b4 24 e0 00 00 	mov    0xe0(%rsp),%rsi
   3e48f:	00 
   3e490:	48 8b bc 24 b0 01 00 	mov    0x1b0(%rsp),%rdi
   3e497:	00 
   3e498:	66 0f 6f 94 24 a0 01 	movdqa 0x1a0(%rsp),%xmm2
   3e49f:	00 00 
   3e4a1:	75 96                	jne    3e439 <<strategy_comm5::StrategyComm5 as future_backtest_sdk::plugin::StrategyPlugin>::on_begin+0x1b99>
   3e4a3:	66 0f 74 15 25 80 fd 	pcmpeqb -0x27fdb(%rip),%xmm2        # 164d0 <anon.50e25bb1355b8971fc58210c29d1b4b6.2.llvm.1301231569978033549>
   3e4aa:	ff 
   3e4ab:	66 0f d7 ca          	pmovmskb %xmm2,%ecx
   3e4af:	85 c9                	test   %ecx,%ecx
   3e4b1:	75 1d                	jne    3e4d0 <<strategy_comm5::StrategyComm5 as future_backtest_sdk::plugin::StrategyPlugin>::on_begin+0x1c30>
   3e4b3:	48 01 f8             	add    %rdi,%rax
   3e4b6:	48 83 c0 10          	add    $0x10,%rax
   3e4ba:	48 83 c7 10          	add    $0x10,%rdi
   3e4be:	e9 31 ff ff ff       	jmp    3e3f4 <<strategy_comm5::StrategyComm5 as future_backtest_sdk::plugin::StrategyPlugin>::on_begin+0x1b54>
   3e4c3:	66 66 66 66 2e 0f 1f 	data16 data16 data16 cs nopw 0x0(%rax,%rax,1)
   3e4ca:	84 00 00 00 00 00 
   3e4d0:	48 8b 1d c1 57 0c 00 	mov    0xc57c1(%rip),%rbx        # 103c98 <_DYNAMIC+0x238>
   3e4d7:	ff d3                	call   *%rbx
   3e4d9:	bf 01 00 00 00       	mov    $0x1,%edi
   3e4de:	be 01 00 00 00       	mov    $0x1,%esi
   3e4e3:	4c 8b 35 86 57 0c 00 	mov    0xc5786(%rip),%r14        # 103c70 <_DYNAMIC+0x210>
   3e4ea:	41 ff d6             	call   *%r14
   3e4ed:	48 85 c0             	test   %rax,%rax
   3e4f0:	0f 84 4b 0a 00 00    	je     3ef41 <<strategy_comm5::StrategyComm5 as future_backtest_sdk::plugin::StrategyPlugin>::on_begin+0x26a1>
   3e4f6:	49 89 c7             	mov    %rax,%r15
   3e4f9:	c6 00 2d             	movb   $0x2d,(%rax)
   3e4fc:	ff d3                	call   *%rbx
   3e4fe:	bf 01 00 00 00       	mov    $0x1,%edi
   3e503:	be 01 00 00 00       	mov    $0x1,%esi
   3e508:	41 ff d6             	call   *%r14
   3e50b:	48 85 c0             	test   %rax,%rax
   3e50e:	48 8b 2d 63 57 0c 00 	mov    0xc5763(%rip),%rbp        # 103c78 <_DYNAMIC+0x218>
   3e515:	0f 84 3f 0a 00 00    	je     3ef5a <<strategy_comm5::StrategyComm5 as future_backtest_sdk::plugin::StrategyPlugin>::on_begin+0x26ba>
   3e51b:	c6 00 2d             	movb   $0x2d,(%rax)
   3e51e:	41 bc 01 00 00 00    	mov    $0x1,%r12d
   3e524:	bb 01 00 00 00       	mov    $0x1,%ebx
   3e529:	b9 01 00 00 00       	mov    $0x1,%ecx
   3e52e:	ba 01 00 00 00       	mov    $0x1,%edx
   3e533:	e9 df 00 00 00       	jmp    3e617 <<strategy_comm5::StrategyComm5 as future_backtest_sdk::plugin::StrategyPlugin>::on_begin+0x1d77>
   3e538:	0f 1f 84 00 00 00 00 	nopl   0x0(%rax,%rax,1)
   3e53f:	00 
   3e540:	f3 41 0f 7e 44 de f0 	movq   -0x10(%r14,%rbx,8),%xmm0
   3e547:	66 0f d6 84 24 c8 00 	movq   %xmm0,0xc8(%rsp)
   3e54e:	00 00 
   3e550:	4d 8b 74 de f8       	mov    -0x8(%r14,%rbx,8),%r14
   3e555:	48 8d 84 24 c8 00 00 	lea    0xc8(%rsp),%rax
   3e55c:	00 
   3e55d:	48 89 84 24 88 00 00 	mov    %rax,0x88(%rsp)
   3e564:	00 
   3e565:	48 8b 05 14 58 0c 00 	mov    0xc5814(%rip),%rax        # 103d80 <_DYNAMIC+0x320>
   3e56c:	48 89 84 24 90 00 00 	mov    %rax,0x90(%rsp)
   3e573:	00 
   3e574:	48 8d 05 65 83 fd ff 	lea    -0x27c9b(%rip),%rax        # 168e0 <anon.2bc08f40ad58cb635718c2f09dbb11ab.6.llvm.4096812584824358744>
   3e57b:	48 89 84 24 70 03 00 	mov    %rax,0x370(%rsp)
   3e582:	00 
   3e583:	48 c7 84 24 78 03 00 	movq   $0x1,0x378(%rsp)
   3e58a:	00 01 00 00 00 
   3e58f:	48 8d 05 f2 aa fd ff 	lea    -0x2550e(%rip),%rax        # 19088 <anon.92663dfcd0d5e554049a6edbd6692e09.23.llvm.11068310199716953189+0x18c>
   3e596:	48 89 84 24 90 03 00 	mov    %rax,0x390(%rsp)
   3e59d:	00 
   3e59e:	48 c7 84 24 98 03 00 	movq   $0x1,0x398(%rsp)
   3e5a5:	00 01 00 00 00 
   3e5aa:	48 8d 84 24 88 00 00 	lea    0x88(%rsp),%rax
   3e5b1:	00 
   3e5b2:	48 89 84 24 80 03 00 	mov    %rax,0x380(%rsp)
   3e5b9:	00 
   3e5ba:	48 c7 84 24 88 03 00 	movq   $0x1,0x388(%rsp)
   3e5c1:	00 01 00 00 00 
   3e5c6:	48 8d 7c 24 20       	lea    0x20(%rsp),%rdi
   3e5cb:	48 8d b4 24 70 03 00 	lea    0x370(%rsp),%rsi
   3e5d2:	00 
   3e5d3:	ff 15 3f 57 0c 00    	call   *0xc573f(%rip)        # 103d18 <_DYNAMIC+0x2b8>
   3e5d9:	4c 8b 64 24 20       	mov    0x20(%rsp),%r12
   3e5de:	4c 8b 7c 24 28       	mov    0x28(%rsp),%r15
   3e5e3:	48 8b 5c 24 30       	mov    0x30(%rsp),%rbx
   3e5e8:	48 8d bc 24 70 03 00 	lea    0x370(%rsp),%rdi
   3e5ef:	00 
   3e5f0:	4c 89 f6             	mov    %r14,%rsi
   3e5f3:	e8 c8 c1 ff ff       	call   3a7c0 <<i64 as alloc::string::SpecToString>::spec_to_string>
   3e5f8:	48 8b 8c 24 70 03 00 	mov    0x370(%rsp),%rcx
   3e5ff:	00 
   3e600:	48 8b 84 24 78 03 00 	mov    0x378(%rsp),%rax
   3e607:	00 
   3e608:	48 8b 94 24 80 03 00 	mov    0x380(%rsp),%rdx
   3e60f:	00 
   3e610:	48 8b 2d 61 56 0c 00 	mov    0xc5661(%rip),%rbp        # 103c78 <_DYNAMIC+0x218>
   3e617:	4c 89 a4 24 c8 00 00 	mov    %r12,0xc8(%rsp)
   3e61e:	00 
   3e61f:	4c 89 bc 24 d0 00 00 	mov    %r15,0xd0(%rsp)
   3e626:	00 
   3e627:	48 89 9c 24 d8 00 00 	mov    %rbx,0xd8(%rsp)
   3e62e:	00 
   3e62f:	48 89 8c 24 88 00 00 	mov    %rcx,0x88(%rsp)
   3e636:	00 
   3e637:	48 89 84 24 90 00 00 	mov    %rax,0x90(%rsp)
   3e63e:	00 
   3e63f:	48 89 94 24 98 00 00 	mov    %rdx,0x98(%rsp)
   3e646:	00 
   3e647:	48 8d 84 24 00 02 00 	lea    0x200(%rsp),%rax
   3e64e:	00 
   3e64f:	48 89 84 24 70 03 00 	mov    %rax,0x370(%rsp)
   3e656:	00 
   3e657:	48 8d 05 22 26 04 00 	lea    0x42622(%rip),%rax        # 80c80 <<&T as core::fmt::Display>::fmt>
   3e65e:	48 89 84 24 78 03 00 	mov    %rax,0x378(%rsp)
   3e665:	00 
   3e666:	48 8d 84 24 c8 00 00 	lea    0xc8(%rsp),%rax
   3e66d:	00 
   3e66e:	48 89 84 24 80 03 00 	mov    %rax,0x380(%rsp)
   3e675:	00 
   3e676:	48 8d 0d c3 c2 ff ff 	lea    -0x3d3d(%rip),%rcx        # 3a940 <<alloc::string::String as core::fmt::Display>::fmt>
   3e67d:	48 89 8c 24 88 03 00 	mov    %rcx,0x388(%rsp)
   3e684:	00 
   3e685:	48 8d 84 24 88 00 00 	lea    0x88(%rsp),%rax
   3e68c:	00 
   3e68d:	48 89 84 24 90 03 00 	mov    %rax,0x390(%rsp)
   3e694:	00 
   3e695:	48 89 8c 24 98 03 00 	mov    %rcx,0x398(%rsp)
   3e69c:	00 
   3e69d:	48 8d 84 24 70 02 00 	lea    0x270(%rsp),%rax
   3e6a4:	00 
   3e6a5:	48 89 84 24 a0 03 00 	mov    %rax,0x3a0(%rsp)
   3e6ac:	00 
   3e6ad:	48 8b 05 cc 56 0c 00 	mov    0xc56cc(%rip),%rax        # 103d80 <_DYNAMIC+0x320>
   3e6b4:	48 89 84 24 a8 03 00 	mov    %rax,0x3a8(%rsp)
   3e6bb:	00 
   3e6bc:	48 8d 05 45 f1 0b 00 	lea    0xbf145(%rip),%rax        # fd808 <anon.8868ba55c3fc5525a110cabbb60004d5.1.llvm.6579149275953927878+0x210>
   3e6c3:	48 89 44 24 20       	mov    %rax,0x20(%rsp)
   3e6c8:	48 c7 44 24 28 04 00 	movq   $0x4,0x28(%rsp)
   3e6cf:	00 00 
   3e6d1:	48 c7 44 24 40 00 00 	movq   $0x0,0x40(%rsp)
   3e6d8:	00 00 
   3e6da:	48 8d 84 24 70 03 00 	lea    0x370(%rsp),%rax
   3e6e1:	00 
   3e6e2:	48 89 44 24 30       	mov    %rax,0x30(%rsp)
   3e6e7:	48 c7 44 24 38 04 00 	movq   $0x4,0x38(%rsp)
   3e6ee:	00 00 
   3e6f0:	48 8d bc 24 f0 02 00 	lea    0x2f0(%rsp),%rdi
   3e6f7:	00 
   3e6f8:	48 8d 74 24 20       	lea    0x20(%rsp),%rsi
   3e6fd:	ff 15 15 56 0c 00    	call   *0xc5615(%rip)        # 103d18 <_DYNAMIC+0x2b8>
   3e703:	4c 8b ac 24 f0 02 00 	mov    0x2f0(%rsp),%r13
   3e70a:	00 
   3e70b:	4c 8b b4 24 f8 02 00 	mov    0x2f8(%rsp),%r14
   3e712:	00 
   3e713:	48 8b b4 24 00 03 00 	mov    0x300(%rsp),%rsi
   3e71a:	00 
   3e71b:	4c 89 f7             	mov    %r14,%rdi
   3e71e:	ff 15 7c 56 0c 00    	call   *0xc567c(%rip)        # 103da0 <_DYNAMIC+0x340>
   3e724:	49 89 c7             	mov    %rax,%r15
   3e727:	49 89 d4             	mov    %rdx,%r12
   3e72a:	4d 85 ed             	test   %r13,%r13
   3e72d:	74 0d                	je     3e73c <<strategy_comm5::StrategyComm5 as future_backtest_sdk::plugin::StrategyPlugin>::on_begin+0x1e9c>
   3e72f:	ba 01 00 00 00       	mov    $0x1,%edx
   3e734:	4c 89 f7             	mov    %r14,%rdi
   3e737:	4c 89 ee             	mov    %r13,%rsi
   3e73a:	ff d5                	call   *%rbp
   3e73c:	48 8b 84 24 c0 00 00 	mov    0xc0(%rsp),%rax
   3e743:	00 
   3e744:	48 8b 78 30          	mov    0x30(%rax),%rdi
   3e748:	4c 89 fe             	mov    %r15,%rsi
   3e74b:	ff 15 57 56 0c 00    	call   *0xc5657(%rip)        # 103da8 <fb_ctx_log_info@Base>
   3e751:	41 c6 07 00          	movb   $0x0,(%r15)
   3e755:	4d 85 e4             	test   %r12,%r12
   3e758:	74 0d                	je     3e767 <<strategy_comm5::StrategyComm5 as future_backtest_sdk::plugin::StrategyPlugin>::on_begin+0x1ec7>
   3e75a:	ba 01 00 00 00       	mov    $0x1,%edx
   3e75f:	4c 89 ff             	mov    %r15,%rdi
   3e762:	4c 89 e6             	mov    %r12,%rsi
   3e765:	ff d5                	call   *%rbp
   3e767:	48 8b b4 24 88 00 00 	mov    0x88(%rsp),%rsi
   3e76e:	00 
   3e76f:	48 85 f6             	test   %rsi,%rsi
   3e772:	4c 8d b4 24 18 0e 00 	lea    0xe18(%rsp),%r14
   3e779:	00 
   3e77a:	74 0f                	je     3e78b <<strategy_comm5::StrategyComm5 as future_backtest_sdk::plugin::StrategyPlugin>::on_begin+0x1eeb>
   3e77c:	48 8b bc 24 90 00 00 	mov    0x90(%rsp),%rdi
   3e783:	00 
   3e784:	ba 01 00 00 00       	mov    $0x1,%edx
   3e789:	ff d5                	call   *%rbp
   3e78b:	48 8b b4 24 c8 00 00 	mov    0xc8(%rsp),%rsi
   3e792:	00 
   3e793:	48 85 f6             	test   %rsi,%rsi
   3e796:	0f 84 f4 f9 ff ff    	je     3e190 <<strategy_comm5::StrategyComm5 as future_backtest_sdk::plugin::StrategyPlugin>::on_begin+0x18f0>
   3e79c:	48 8b bc 24 d0 00 00 	mov    0xd0(%rsp),%rdi
   3e7a3:	00 
   3e7a4:	ba 01 00 00 00       	mov    $0x1,%edx
   3e7a9:	ff d5                	call   *%rbp
   3e7ab:	e9 e0 f9 ff ff       	jmp    3e190 <<strategy_comm5::StrategyComm5 as future_backtest_sdk::plugin::StrategyPlugin>::on_begin+0x18f0>
   3e7b0:	48 8b 84 24 80 01 00 	mov    0x180(%rsp),%rax
   3e7b7:	00 
   3e7b8:	48 2b 84 24 b8 00 00 	sub    0xb8(%rsp),%rax
   3e7bf:	00 
   3e7c0:	48 b9 00 00 00 00 00 	movabs $0x8000000000000000,%rcx
   3e7c7:	00 00 80 
   3e7ca:	48 39 8c 24 60 01 00 	cmp    %rcx,0x160(%rsp)
   3e7d1:	00 
   3e7d2:	48 8d 0d 17 a8 fd ff 	lea    -0x257e9(%rip),%rcx        # 18ff0 <anon.92663dfcd0d5e554049a6edbd6692e09.23.llvm.11068310199716953189+0xf4>
   3e7d9:	48 0f 45 8c 24 68 01 	cmovne 0x168(%rsp),%rcx
   3e7e0:	00 00 
   3e7e2:	ba 02 00 00 00       	mov    $0x2,%edx
   3e7e7:	48 0f 45 94 24 70 01 	cmovne 0x170(%rsp),%rdx
   3e7ee:	00 00 
   3e7f0:	48 89 84 24 c8 00 00 	mov    %rax,0xc8(%rsp)
   3e7f7:	00 
   3e7f8:	48 89 8c 24 88 00 00 	mov    %rcx,0x88(%rsp)
   3e7ff:	00 
   3e800:	48 89 94 24 90 00 00 	mov    %rdx,0x90(%rsp)
   3e807:	00 
   3e808:	48 8d 84 24 c8 0c 00 	lea    0xcc8(%rsp),%rax
   3e80f:	00 
   3e810:	48 89 84 24 70 03 00 	mov    %rax,0x370(%rsp)
   3e817:	00 
   3e818:	48 8d 05 21 c1 ff ff 	lea    -0x3edf(%rip),%rax        # 3a940 <<alloc::string::String as core::fmt::Display>::fmt>
   3e81f:	48 89 84 24 78 03 00 	mov    %rax,0x378(%rsp)
   3e826:	00 
   3e827:	48 8d 84 24 88 01 00 	lea    0x188(%rsp),%rax
   3e82e:	00 
   3e82f:	48 89 84 24 80 03 00 	mov    %rax,0x380(%rsp)
   3e836:	00 
   3e837:	48 8d 05 52 99 04 00 	lea    0x49952(%rip),%rax        # 88190 <<alloc::vec::Vec<T,A> as core::fmt::Debug>::fmt>
   3e83e:	48 89 84 24 88 03 00 	mov    %rax,0x388(%rsp)
   3e845:	00 
   3e846:	4c 89 b4 24 90 03 00 	mov    %r14,0x390(%rsp)
   3e84d:	00 
   3e84e:	48 8b 05 2b 55 0c 00 	mov    0xc552b(%rip),%rax        # 103d80 <_DYNAMIC+0x320>
   3e855:	48 89 84 24 98 03 00 	mov    %rax,0x398(%rsp)
   3e85c:	00 
   3e85d:	48 8d 8c 24 60 02 00 	lea    0x260(%rsp),%rcx
   3e864:	00 
   3e865:	48 89 8c 24 a0 03 00 	mov    %rcx,0x3a0(%rsp)
   3e86c:	00 
   3e86d:	48 89 84 24 a8 03 00 	mov    %rax,0x3a8(%rsp)
   3e874:	00 
   3e875:	48 8d 84 24 80 01 00 	lea    0x180(%rsp),%rax
   3e87c:	00 
   3e87d:	48 89 84 24 b0 03 00 	mov    %rax,0x3b0(%rsp)
   3e884:	00 
   3e885:	48 8b 05 4c 55 0c 00 	mov    0xc554c(%rip),%rax        # 103dd8 <_DYNAMIC+0x378>
   3e88c:	48 89 84 24 b8 03 00 	mov    %rax,0x3b8(%rsp)
   3e893:	00 
   3e894:	48 8d 8c 24 68 02 00 	lea    0x268(%rsp),%rcx
   3e89b:	00 
   3e89c:	48 89 8c 24 c0 03 00 	mov    %rcx,0x3c0(%rsp)
   3e8a3:	00 
   3e8a4:	48 89 84 24 c8 03 00 	mov    %rax,0x3c8(%rsp)
   3e8ab:	00 
   3e8ac:	48 8d 8c 24 f8 01 00 	lea    0x1f8(%rsp),%rcx
   3e8b3:	00 
   3e8b4:	48 89 8c 24 d0 03 00 	mov    %rcx,0x3d0(%rsp)
   3e8bb:	00 
   3e8bc:	48 89 84 24 d8 03 00 	mov    %rax,0x3d8(%rsp)
   3e8c3:	00 
   3e8c4:	48 8d 8c 24 c8 00 00 	lea    0xc8(%rsp),%rcx
   3e8cb:	00 
   3e8cc:	48 89 8c 24 e0 03 00 	mov    %rcx,0x3e0(%rsp)
   3e8d3:	00 
   3e8d4:	48 89 84 24 e8 03 00 	mov    %rax,0x3e8(%rsp)
   3e8db:	00 
   3e8dc:	48 8d 84 24 58 02 00 	lea    0x258(%rsp),%rax
   3e8e3:	00 
   3e8e4:	48 89 84 24 f0 03 00 	mov    %rax,0x3f0(%rsp)
   3e8eb:	00 
   3e8ec:	48 8b 05 ed 54 0c 00 	mov    0xc54ed(%rip),%rax        # 103de0 <_DYNAMIC+0x380>
   3e8f3:	48 89 84 24 f8 03 00 	mov    %rax,0x3f8(%rsp)
   3e8fa:	00 
   3e8fb:	48 8d 84 24 88 00 00 	lea    0x88(%rsp),%rax
   3e902:	00 
   3e903:	48 89 84 24 00 04 00 	mov    %rax,0x400(%rsp)
   3e90a:	00 
   3e90b:	48 8d 05 fe b8 03 00 	lea    0x3b8fe(%rip),%rax        # 7a210 <<&T as core::fmt::Display>::fmt>
   3e912:	48 89 84 24 08 04 00 	mov    %rax,0x408(%rsp)
   3e919:	00 
   3e91a:	48 8d 05 1f ee 0b 00 	lea    0xbee1f(%rip),%rax        # fd740 <anon.8868ba55c3fc5525a110cabbb60004d5.1.llvm.6579149275953927878+0x148>
   3e921:	48 89 44 24 20       	mov    %rax,0x20(%rsp)
   3e926:	48 c7 44 24 28 0a 00 	movq   $0xa,0x28(%rsp)
   3e92d:	00 00 
   3e92f:	48 c7 44 24 40 00 00 	movq   $0x0,0x40(%rsp)
   3e936:	00 00 
   3e938:	48 8d 84 24 70 03 00 	lea    0x370(%rsp),%rax
   3e93f:	00 
   3e940:	48 89 44 24 30       	mov    %rax,0x30(%rsp)
   3e945:	48 c7 44 24 38 0a 00 	movq   $0xa,0x38(%rsp)
   3e94c:	00 00 
   3e94e:	48 8d bc 24 08 03 00 	lea    0x308(%rsp),%rdi
   3e955:	00 
   3e956:	48 8d 5c 24 20       	lea    0x20(%rsp),%rbx
   3e95b:	48 89 de             	mov    %rbx,%rsi
   3e95e:	ff 15 b4 53 0c 00    	call   *0xc53b4(%rip)        # 103d18 <_DYNAMIC+0x2b8>
   3e964:	4c 8b b4 24 08 03 00 	mov    0x308(%rsp),%r14
   3e96b:	00 
   3e96c:	4c 8b ac 24 10 03 00 	mov    0x310(%rsp),%r13
   3e973:	00 
   3e974:	48 8b b4 24 18 03 00 	mov    0x318(%rsp),%rsi
   3e97b:	00 
   3e97c:	4c 89 ef             	mov    %r13,%rdi
   3e97f:	ff 15 1b 54 0c 00    	call   *0xc541b(%rip)        # 103da0 <_DYNAMIC+0x340>
   3e985:	49 89 c7             	mov    %rax,%r15
   3e988:	49 89 d4             	mov    %rdx,%r12
   3e98b:	4d 85 f6             	test   %r14,%r14
   3e98e:	74 11                	je     3e9a1 <<strategy_comm5::StrategyComm5 as future_backtest_sdk::plugin::StrategyPlugin>::on_begin+0x2101>
   3e990:	ba 01 00 00 00       	mov    $0x1,%edx
   3e995:	4c 89 ef             	mov    %r13,%rdi
   3e998:	4c 89 f6             	mov    %r14,%rsi
   3e99b:	ff 15 d7 52 0c 00    	call   *0xc52d7(%rip)        # 103c78 <_DYNAMIC+0x218>
   3e9a1:	48 8b 84 24 c0 00 00 	mov    0xc0(%rsp),%rax
   3e9a8:	00 
   3e9a9:	48 8b 78 30          	mov    0x30(%rax),%rdi
   3e9ad:	4c 89 fe             	mov    %r15,%rsi
   3e9b0:	ff 15 f2 53 0c 00    	call   *0xc53f2(%rip)        # 103da8 <fb_ctx_log_info@Base>
   3e9b6:	41 c6 07 00          	movb   $0x0,(%r15)
   3e9ba:	4d 85 e4             	test   %r12,%r12
   3e9bd:	74 11                	je     3e9d0 <<strategy_comm5::StrategyComm5 as future_backtest_sdk::plugin::StrategyPlugin>::on_begin+0x2130>
   3e9bf:	ba 01 00 00 00       	mov    $0x1,%edx
   3e9c4:	4c 89 ff             	mov    %r15,%rdi
   3e9c7:	4c 89 e6             	mov    %r12,%rsi
   3e9ca:	ff 15 a8 52 0c 00    	call   *0xc52a8(%rip)        # 103c78 <_DYNAMIC+0x218>
   3e9d0:	48 b8 00 00 00 00 00 	movabs $0x8000000000000000,%rax
   3e9d7:	00 00 80 
   3e9da:	48 39 84 24 60 01 00 	cmp    %rax,0x160(%rsp)
   3e9e1:	00 
   3e9e2:	0f 84 be 00 00 00    	je     3eaa6 <<strategy_comm5::StrategyComm5 as future_backtest_sdk::plugin::StrategyPlugin>::on_begin+0x2206>
   3e9e8:	48 8d 84 24 60 01 00 	lea    0x160(%rsp),%rax
   3e9ef:	00 
   3e9f0:	48 89 84 24 88 00 00 	mov    %rax,0x88(%rsp)
   3e9f7:	00 
   3e9f8:	48 8d 84 24 88 00 00 	lea    0x88(%rsp),%rax
   3e9ff:	00 
   3ea00:	48 89 44 24 20       	mov    %rax,0x20(%rsp)
   3ea05:	48 8d 05 74 22 04 00 	lea    0x42274(%rip),%rax        # 80c80 <<&T as core::fmt::Display>::fmt>
   3ea0c:	48 89 44 24 28       	mov    %rax,0x28(%rsp)
   3ea11:	48 8d 05 c8 ed 0b 00 	lea    0xbedc8(%rip),%rax        # fd7e0 <anon.8868ba55c3fc5525a110cabbb60004d5.1.llvm.6579149275953927878+0x1e8>
   3ea18:	48 89 84 24 70 03 00 	mov    %rax,0x370(%rsp)
   3ea1f:	00 
   3ea20:	48 c7 84 24 78 03 00 	movq   $0x1,0x378(%rsp)
   3ea27:	00 01 00 00 00 
   3ea2c:	48 c7 84 24 90 03 00 	movq   $0x0,0x390(%rsp)
   3ea33:	00 00 00 00 00 
   3ea38:	48 89 9c 24 80 03 00 	mov    %rbx,0x380(%rsp)
   3ea3f:	00 
   3ea40:	48 c7 84 24 88 03 00 	movq   $0x1,0x388(%rsp)
   3ea47:	00 01 00 00 00 
   3ea4c:	48 8d bc 24 c0 02 00 	lea    0x2c0(%rsp),%rdi
   3ea53:	00 
   3ea54:	48 8d b4 24 70 03 00 	lea    0x370(%rsp),%rsi
   3ea5b:	00 
   3ea5c:	ff 15 b6 52 0c 00    	call   *0xc52b6(%rip)        # 103d18 <_DYNAMIC+0x2b8>
   3ea62:	48 8d b4 24 c0 02 00 	lea    0x2c0(%rsp),%rsi
   3ea69:	00 
   3ea6a:	48 8b bc 24 c0 00 00 	mov    0xc0(%rsp),%rdi
   3ea71:	00 
   3ea72:	e8 29 b5 03 00       	call   79fa0 <future_backtest_sdk::context::StrategyContext::log_info>
   3ea77:	48 8b b4 24 60 01 00 	mov    0x160(%rsp),%rsi
   3ea7e:	00 
   3ea7f:	48 b8 00 00 00 00 00 	movabs $0x8000000000000000,%rax
   3ea86:	00 00 80 
   3ea89:	48 39 c6             	cmp    %rax,%rsi
   3ea8c:	74 18                	je     3eaa6 <<strategy_comm5::StrategyComm5 as future_backtest_sdk::plugin::StrategyPlugin>::on_begin+0x2206>
   3ea8e:	48 85 f6             	test   %rsi,%rsi
   3ea91:	74 13                	je     3eaa6 <<strategy_comm5::StrategyComm5 as future_backtest_sdk::plugin::StrategyPlugin>::on_begin+0x2206>
   3ea93:	48 8b bc 24 68 01 00 	mov    0x168(%rsp),%rdi
   3ea9a:	00 
   3ea9b:	ba 01 00 00 00       	mov    $0x1,%edx
   3eaa0:	ff 15 d2 51 0c 00    	call   *0xc51d2(%rip)        # 103c78 <_DYNAMIC+0x218>
   3eaa6:	48 8b 9c 24 18 01 00 	mov    0x118(%rsp),%rbx
   3eaad:	00 
   3eaae:	48 85 db             	test   %rbx,%rbx
   3eab1:	0f 84 d1 00 00 00    	je     3eb88 <<strategy_comm5::StrategyComm5 as future_backtest_sdk::plugin::StrategyPlugin>::on_begin+0x22e8>
   3eab7:	4c 8b b4 24 28 01 00 	mov    0x128(%rsp),%r14
   3eabe:	00 
   3eabf:	4d 85 f6             	test   %r14,%r14
   3eac2:	0f 84 8e 00 00 00    	je     3eb56 <<strategy_comm5::StrategyComm5 as future_backtest_sdk::plugin::StrategyPlugin>::on_begin+0x22b6>
   3eac8:	4c 8b bc 24 10 01 00 	mov    0x110(%rsp),%r15
   3eacf:	00 
   3ead0:	66 41 0f 6f 07       	movdqa (%r15),%xmm0
   3ead5:	66 0f d7 e8          	pmovmskb %xmm0,%ebp
   3ead9:	f7 d5                	not    %ebp
   3eadb:	4d 8d 67 10          	lea    0x10(%r15),%r12
   3eadf:	4c 8b 2d 92 51 0c 00 	mov    0xc5192(%rip),%r13        # 103c78 <_DYNAMIC+0x218>
   3eae6:	eb 17                	jmp    3eaff <<strategy_comm5::StrategyComm5 as future_backtest_sdk::plugin::StrategyPlugin>::on_begin+0x225f>
   3eae8:	0f 1f 84 00 00 00 00 	nopl   0x0(%rax,%rax,1)
   3eaef:	00 
   3eaf0:	49 ff ce             	dec    %r14
   3eaf3:	8d 45 ff             	lea    -0x1(%rbp),%eax
   3eaf6:	21 e8                	and    %ebp,%eax
   3eaf8:	89 c5                	mov    %eax,%ebp
   3eafa:	4d 85 f6             	test   %r14,%r14
   3eafd:	74 57                	je     3eb56 <<strategy_comm5::StrategyComm5 as future_backtest_sdk::plugin::StrategyPlugin>::on_begin+0x22b6>
   3eaff:	66 85 ed             	test   %bp,%bp
   3eb02:	75 2b                	jne    3eb2f <<strategy_comm5::StrategyComm5 as future_backtest_sdk::plugin::StrategyPlugin>::on_begin+0x228f>
   3eb04:	66 66 66 2e 0f 1f 84 	data16 data16 cs nopw 0x0(%rax,%rax,1)
   3eb0b:	00 00 00 00 00 
   3eb10:	66 41 0f 6f 04 24    	movdqa (%r12),%xmm0
   3eb16:	66 0f d7 e8          	pmovmskb %xmm0,%ebp
   3eb1a:	49 81 c7 80 fd ff ff 	add    $0xfffffffffffffd80,%r15
   3eb21:	49 83 c4 10          	add    $0x10,%r12
   3eb25:	81 fd ff ff 00 00    	cmp    $0xffff,%ebp
   3eb2b:	74 e3                	je     3eb10 <<strategy_comm5::StrategyComm5 as future_backtest_sdk::plugin::StrategyPlugin>::on_begin+0x2270>
   3eb2d:	f7 d5                	not    %ebp
   3eb2f:	f3 0f bc c5          	tzcnt  %ebp,%eax
   3eb33:	48 f7 d8             	neg    %rax
   3eb36:	48 8d 04 80          	lea    (%rax,%rax,4),%rax
   3eb3a:	49 8b 74 c7 d8       	mov    -0x28(%r15,%rax,8),%rsi
   3eb3f:	48 85 f6             	test   %rsi,%rsi
   3eb42:	74 ac                	je     3eaf0 <<strategy_comm5::StrategyComm5 as future_backtest_sdk::plugin::StrategyPlugin>::on_begin+0x2250>
   3eb44:	49 8d 04 c7          	lea    (%r15,%rax,8),%rax
   3eb48:	48 8b 78 e0          	mov    -0x20(%rax),%rdi
   3eb4c:	ba 01 00 00 00       	mov    $0x1,%edx
   3eb51:	41 ff d5             	call   *%r13
   3eb54:	eb 9a                	jmp    3eaf0 <<strategy_comm5::StrategyComm5 as future_backtest_sdk::plugin::StrategyPlugin>::on_begin+0x2250>
   3eb56:	48 8d 04 9b          	lea    (%rbx,%rbx,4),%rax
   3eb5a:	48 8d 04 c5 37 00 00 	lea    0x37(,%rax,8),%rax
   3eb61:	00 
   3eb62:	48 83 e0 f0          	and    $0xfffffffffffffff0,%rax
   3eb66:	48 01 c3             	add    %rax,%rbx
   3eb69:	48 83 c3 11          	add    $0x11,%rbx
   3eb6d:	74 19                	je     3eb88 <<strategy_comm5::StrategyComm5 as future_backtest_sdk::plugin::StrategyPlugin>::on_begin+0x22e8>
   3eb6f:	48 8b bc 24 10 01 00 	mov    0x110(%rsp),%rdi
   3eb76:	00 
   3eb77:	48 29 c7             	sub    %rax,%rdi
   3eb7a:	ba 10 00 00 00       	mov    $0x10,%edx
   3eb7f:	48 89 de             	mov    %rbx,%rsi
   3eb82:	ff 15 f0 50 0c 00    	call   *0xc50f0(%rip)        # 103c78 <_DYNAMIC+0x218>
   3eb88:	48 8b 9c 24 08 01 00 	mov    0x108(%rsp),%rbx
   3eb8f:	00 
   3eb90:	48 85 db             	test   %rbx,%rbx
   3eb93:	74 3a                	je     3ebcf <<strategy_comm5::StrategyComm5 as future_backtest_sdk::plugin::StrategyPlugin>::on_begin+0x232f>
   3eb95:	4c 8b b4 24 00 01 00 	mov    0x100(%rsp),%r14
   3eb9c:	00 
   3eb9d:	49 83 c6 08          	add    $0x8,%r14
   3eba1:	4c 8b 3d d0 50 0c 00 	mov    0xc50d0(%rip),%r15        # 103c78 <_DYNAMIC+0x218>
   3eba8:	eb 0f                	jmp    3ebb9 <<strategy_comm5::StrategyComm5 as future_backtest_sdk::plugin::StrategyPlugin>::on_begin+0x2319>
   3ebaa:	66 0f 1f 44 00 00    	nopw   0x0(%rax,%rax,1)
   3ebb0:	49 83 c6 20          	add    $0x20,%r14
   3ebb4:	48 ff cb             	dec    %rbx
   3ebb7:	74 16                	je     3ebcf <<strategy_comm5::StrategyComm5 as future_backtest_sdk::plugin::StrategyPlugin>::on_begin+0x232f>
   3ebb9:	49 8b 76 f8          	mov    -0x8(%r14),%rsi
   3ebbd:	48 85 f6             	test   %rsi,%rsi
   3ebc0:	74 ee                	je     3ebb0 <<strategy_comm5::StrategyComm5 as future_backtest_sdk::plugin::StrategyPlugin>::on_begin+0x2310>
   3ebc2:	49 8b 3e             	mov    (%r14),%rdi
   3ebc5:	ba 01 00 00 00       	mov    $0x1,%edx
   3ebca:	41 ff d7             	call   *%r15
   3ebcd:	eb e1                	jmp    3ebb0 <<strategy_comm5::StrategyComm5 as future_backtest_sdk::plugin::StrategyPlugin>::on_begin+0x2310>
   3ebcf:	48 8b b4 24 f8 00 00 	mov    0xf8(%rsp),%rsi
   3ebd6:	00 
   3ebd7:	48 85 f6             	test   %rsi,%rsi
   3ebda:	74 17                	je     3ebf3 <<strategy_comm5::StrategyComm5 as future_backtest_sdk::plugin::StrategyPlugin>::on_begin+0x2353>
   3ebdc:	48 8b bc 24 00 01 00 	mov    0x100(%rsp),%rdi
   3ebe3:	00 
   3ebe4:	48 c1 e6 05          	shl    $0x5,%rsi
   3ebe8:	ba 08 00 00 00       	mov    $0x8,%edx
   3ebed:	ff 15 85 50 0c 00    	call   *0xc5085(%rip)        # 103c78 <_DYNAMIC+0x218>
   3ebf3:	48 8b 9c 24 98 01 00 	mov    0x198(%rsp),%rbx
   3ebfa:	00 
   3ebfb:	48 85 db             	test   %rbx,%rbx
   3ebfe:	74 3f                	je     3ec3f <<strategy_comm5::StrategyComm5 as future_backtest_sdk::plugin::StrategyPlugin>::on_begin+0x239f>
   3ec00:	4c 8b b4 24 90 01 00 	mov    0x190(%rsp),%r14
   3ec07:	00 
   3ec08:	49 83 c6 08          	add    $0x8,%r14
   3ec0c:	4c 8b 3d 65 50 0c 00 	mov    0xc5065(%rip),%r15        # 103c78 <_DYNAMIC+0x218>
   3ec13:	eb 14                	jmp    3ec29 <<strategy_comm5::StrategyComm5 as future_backtest_sdk::plugin::StrategyPlugin>::on_begin+0x2389>
   3ec15:	66 66 2e 0f 1f 84 00 	data16 cs nopw 0x0(%rax,%rax,1)
   3ec1c:	00 00 00 00 
   3ec20:	49 83 c6 18          	add    $0x18,%r14
   3ec24:	48 ff cb             	dec    %rbx
   3ec27:	74 16                	je     3ec3f <<strategy_comm5::StrategyComm5 as future_backtest_sdk::plugin::StrategyPlugin>::on_begin+0x239f>
   3ec29:	49 8b 76 f8          	mov    -0x8(%r14),%rsi
   3ec2d:	48 85 f6             	test   %rsi,%rsi
   3ec30:	74 ee                	je     3ec20 <<strategy_comm5::StrategyComm5 as future_backtest_sdk::plugin::StrategyPlugin>::on_begin+0x2380>
   3ec32:	49 8b 3e             	mov    (%r14),%rdi
   3ec35:	ba 01 00 00 00       	mov    $0x1,%edx
   3ec3a:	41 ff d7             	call   *%r15
   3ec3d:	eb e1                	jmp    3ec20 <<strategy_comm5::StrategyComm5 as future_backtest_sdk::plugin::StrategyPlugin>::on_begin+0x2380>
   3ec3f:	48 8b 84 24 88 01 00 	mov    0x188(%rsp),%rax
   3ec46:	00 
   3ec47:	48 85 c0             	test   %rax,%rax
   3ec4a:	74 1b                	je     3ec67 <<strategy_comm5::StrategyComm5 as future_backtest_sdk::plugin::StrategyPlugin>::on_begin+0x23c7>
   3ec4c:	48 8b bc 24 90 01 00 	mov    0x190(%rsp),%rdi
   3ec53:	00 
   3ec54:	48 c1 e0 03          	shl    $0x3,%rax
   3ec58:	48 8d 34 40          	lea    (%rax,%rax,2),%rsi
   3ec5c:	ba 08 00 00 00       	mov    $0x8,%edx
   3ec61:	ff 15 11 50 0c 00    	call   *0xc5011(%rip)        # 103c78 <_DYNAMIC+0x218>
   3ec67:	48 8b 8c 24 08 02 00 	mov    0x208(%rsp),%rcx
   3ec6e:	00 
   3ec6f:	48 85 c9             	test   %rcx,%rcx
   3ec72:	74 4f                	je     3ecc3 <<strategy_comm5::StrategyComm5 as future_backtest_sdk::plugin::StrategyPlugin>::on_begin+0x2423>
   3ec74:	48 8b 94 24 10 02 00 	mov    0x210(%rsp),%rdx
   3ec7b:	00 
   3ec7c:	48 8b 84 24 18 02 00 	mov    0x218(%rsp),%rax
   3ec83:	00 
   3ec84:	48 c7 84 24 78 03 00 	movq   $0x0,0x378(%rsp)
   3ec8b:	00 00 00 00 00 
   3ec90:	48 89 8c 24 80 03 00 	mov    %rcx,0x380(%rsp)
   3ec97:	00 
   3ec98:	48 89 94 24 88 03 00 	mov    %rdx,0x388(%rsp)
   3ec9f:	00 
   3eca0:	48 c7 84 24 98 03 00 	movq   $0x0,0x398(%rsp)
   3eca7:	00 00 00 00 00 
   3ecac:	48 89 8c 24 a0 03 00 	mov    %rcx,0x3a0(%rsp)
   3ecb3:	00 
   3ecb4:	48 89 94 24 a8 03 00 	mov    %rdx,0x3a8(%rsp)
   3ecbb:	00 
   3ecbc:	b9 01 00 00 00       	mov    $0x1,%ecx
   3ecc1:	eb 04                	jmp    3ecc7 <<strategy_comm5::StrategyComm5 as future_backtest_sdk::plugin::StrategyPlugin>::on_begin+0x2427>
   3ecc3:	31 c9                	xor    %ecx,%ecx
   3ecc5:	31 c0                	xor    %eax,%eax
   3ecc7:	48 89 8c 24 70 03 00 	mov    %rcx,0x370(%rsp)
   3ecce:	00 
   3eccf:	48 89 8c 24 90 03 00 	mov    %rcx,0x390(%rsp)
   3ecd6:	00 
   3ecd7:	48 89 84 24 b0 03 00 	mov    %rax,0x3b0(%rsp)
   3ecde:	00 
   3ecdf:	48 8d 7c 24 20       	lea    0x20(%rsp),%rdi
   3ece4:	48 8d b4 24 70 03 00 	lea    0x370(%rsp),%rsi
   3eceb:	00 
   3ecec:	e8 ff 2d 03 00       	call   71af0 <_ZN5alloc11collections5btree3map25IntoIter$LT$K$C$V$C$A$GT$10dying_next17h163d960ad2295a63E.llvm.14470263460209460932>
   3ecf1:	48 8b 44 24 20       	mov    0x20(%rsp),%rax
   3ecf6:	48 85 c0             	test   %rax,%rax
   3ecf9:	74 51                	je     3ed4c <<strategy_comm5::StrategyComm5 as future_backtest_sdk::plugin::StrategyPlugin>::on_begin+0x24ac>
   3ecfb:	48 8d 5c 24 20       	lea    0x20(%rsp),%rbx
   3ed00:	4c 8d b4 24 70 03 00 	lea    0x370(%rsp),%r14
   3ed07:	00 
   3ed08:	4c 8b 3d 69 4f 0c 00 	mov    0xc4f69(%rip),%r15        # 103c78 <_DYNAMIC+0x218>
   3ed0f:	90                   	nop
   3ed10:	48 8b 4c 24 30       	mov    0x30(%rsp),%rcx
   3ed15:	48 8d 0c 49          	lea    (%rcx,%rcx,2),%rcx
   3ed19:	48 8b 74 c8 08       	mov    0x8(%rax,%rcx,8),%rsi
   3ed1e:	48 85 f6             	test   %rsi,%rsi
   3ed21:	74 14                	je     3ed37 <<strategy_comm5::StrategyComm5 as future_backtest_sdk::plugin::StrategyPlugin>::on_begin+0x2497>
   3ed23:	48 8d 04 c8          	lea    (%rax,%rcx,8),%rax
   3ed27:	48 83 c0 08          	add    $0x8,%rax
   3ed2b:	48 8b 78 08          	mov    0x8(%rax),%rdi
   3ed2f:	ba 01 00 00 00       	mov    $0x1,%edx
   3ed34:	41 ff d7             	call   *%r15
   3ed37:	48 89 df             	mov    %rbx,%rdi
   3ed3a:	4c 89 f6             	mov    %r14,%rsi
   3ed3d:	e8 ae 2d 03 00       	call   71af0 <_ZN5alloc11collections5btree3map25IntoIter$LT$K$C$V$C$A$GT$10dying_next17h163d960ad2295a63E.llvm.14470263460209460932>
   3ed42:	48 8b 44 24 20       	mov    0x20(%rsp),%rax
   3ed47:	48 85 c0             	test   %rax,%rax
   3ed4a:	75 c4                	jne    3ed10 <<strategy_comm5::StrategyComm5 as future_backtest_sdk::plugin::StrategyPlugin>::on_begin+0x2470>
   3ed4c:	48 8d bc 24 20 02 00 	lea    0x220(%rsp),%rdi
   3ed53:	00 
   3ed54:	e8 17 25 02 00       	call   61270 <<hashbrown::raw::RawTable<T,A> as core::ops::drop::Drop>::drop>
   3ed59:	48 8b b4 24 c8 01 00 	mov    0x1c8(%rsp),%rsi
   3ed60:	00 
   3ed61:	48 85 f6             	test   %rsi,%rsi
   3ed64:	48 8b bc 24 d0 01 00 	mov    0x1d0(%rsp),%rdi
   3ed6b:	00 
   3ed6c:	74 0b                	je     3ed79 <<strategy_comm5::StrategyComm5 as future_backtest_sdk::plugin::StrategyPlugin>::on_begin+0x24d9>
   3ed6e:	ba 01 00 00 00       	mov    $0x1,%edx
   3ed73:	ff 15 ff 4e 0c 00    	call   *0xc4eff(%rip)        # 103c78 <_DYNAMIC+0x218>
   3ed79:	48 8b 9c 24 e8 01 00 	mov    0x1e8(%rsp),%rbx
   3ed80:	00 
   3ed81:	4c 8b b4 24 f0 01 00 	mov    0x1f0(%rsp),%r14
   3ed88:	00 
   3ed89:	4d 85 f6             	test   %r14,%r14
   3ed8c:	74 31                	je     3edbf <<strategy_comm5::StrategyComm5 as future_backtest_sdk::plugin::StrategyPlugin>::on_begin+0x251f>
   3ed8e:	4c 8d 7b 08          	lea    0x8(%rbx),%r15
   3ed92:	4c 8b 25 df 4e 0c 00 	mov    0xc4edf(%rip),%r12        # 103c78 <_DYNAMIC+0x218>
   3ed99:	eb 0e                	jmp    3eda9 <<strategy_comm5::StrategyComm5 as future_backtest_sdk::plugin::StrategyPlugin>::on_begin+0x2509>
   3ed9b:	0f 1f 44 00 00       	nopl   0x0(%rax,%rax,1)
   3eda0:	49 83 c7 18          	add    $0x18,%r15
   3eda4:	49 ff ce             	dec    %r14
   3eda7:	74 16                	je     3edbf <<strategy_comm5::StrategyComm5 as future_backtest_sdk::plugin::StrategyPlugin>::on_begin+0x251f>
   3eda9:	49 8b 77 f8          	mov    -0x8(%r15),%rsi
   3edad:	48 85 f6             	test   %rsi,%rsi
   3edb0:	74 ee                	je     3eda0 <<strategy_comm5::StrategyComm5 as future_backtest_sdk::plugin::StrategyPlugin>::on_begin+0x2500>
   3edb2:	49 8b 3f             	mov    (%r15),%rdi
   3edb5:	ba 01 00 00 00       	mov    $0x1,%edx
   3edba:	41 ff d4             	call   *%r12
   3edbd:	eb e1                	jmp    3eda0 <<strategy_comm5::StrategyComm5 as future_backtest_sdk::plugin::StrategyPlugin>::on_begin+0x2500>
   3edbf:	48 8b 84 24 e0 01 00 	mov    0x1e0(%rsp),%rax
   3edc6:	00 
   3edc7:	48 85 c0             	test   %rax,%rax
   3edca:	74 16                	je     3ede2 <<strategy_comm5::StrategyComm5 as future_backtest_sdk::plugin::StrategyPlugin>::on_begin+0x2542>
   3edcc:	48 c1 e0 03          	shl    $0x3,%rax
   3edd0:	48 8d 34 40          	lea    (%rax,%rax,2),%rsi
   3edd4:	ba 08 00 00 00       	mov    $0x8,%edx
   3edd9:	48 89 df             	mov    %rbx,%rdi
   3eddc:	ff 15 96 4e 0c 00    	call   *0xc4e96(%rip)        # 103c78 <_DYNAMIC+0x218>
   3ede2:	48 8d bc 24 70 03 00 	lea    0x370(%rsp),%rdi
   3ede9:	00 
   3edea:	48 8d b4 24 10 09 00 	lea    0x910(%rsp),%rsi
   3edf1:	00 
   3edf2:	ba 68 05 00 00       	mov    $0x568,%edx
   3edf7:	ff 15 cb 4e 0c 00    	call   *0xc4ecb(%rip)        # 103cc8 <memcpy@GLIBC_2.14>
   3edfd:	48 8b bc 24 d8 01 00 	mov    0x1d8(%rsp),%rdi
   3ee04:	00 
   3ee05:	83 3f 02             	cmpl   $0x2,(%rdi)
   3ee08:	74 0d                	je     3ee17 <<strategy_comm5::StrategyComm5 as future_backtest_sdk::plugin::StrategyPlugin>::on_begin+0x2577>
   3ee0a:	e8 f1 b5 ff ff       	call   3a400 <core::ptr::drop_in_place<strategy_comm5::Comm5Params>>
   3ee0f:	48 8b bc 24 d8 01 00 	mov    0x1d8(%rsp),%rdi
   3ee16:	00 
   3ee17:	48 8d b4 24 70 03 00 	lea    0x370(%rsp),%rsi
   3ee1e:	00 
   3ee1f:	ba 68 05 00 00       	mov    $0x568,%edx
   3ee24:	ff 15 9e 4e 0c 00    	call   *0xc4e9e(%rip)        # 103cc8 <memcpy@GLIBC_2.14>
   3ee2a:	31 db                	xor    %ebx,%ebx
   3ee2c:	48 8b b4 24 78 02 00 	mov    0x278(%rsp),%rsi
   3ee33:	00 
   3ee34:	48 85 f6             	test   %rsi,%rsi
   3ee37:	74 13                	je     3ee4c <<strategy_comm5::StrategyComm5 as future_backtest_sdk::plugin::StrategyPlugin>::on_begin+0x25ac>
   3ee39:	48 8b bc 24 80 02 00 	mov    0x280(%rsp),%rdi
   3ee40:	00 
   3ee41:	ba 01 00 00 00       	mov    $0x1,%edx
   3ee46:	ff 15 2c 4e 0c 00    	call   *0xc4e2c(%rip)        # 103c78 <_DYNAMIC+0x218>
   3ee4c:	48 89 d8             	mov    %rbx,%rax
   3ee4f:	48 81 c4 78 0e 00 00 	add    $0xe78,%rsp
   3ee56:	5b                   	pop    %rbx
   3ee57:	41 5c                	pop    %r12
   3ee59:	41 5d                	pop    %r13
   3ee5b:	41 5e                	pop    %r14
   3ee5d:	41 5f                	pop    %r15
   3ee5f:	5d                   	pop    %rbp
   3ee60:	c3                   	ret    
   3ee61:	48 8d 05 88 e8 0b 00 	lea    0xbe888(%rip),%rax        # fd6f0 <anon.8868ba55c3fc5525a110cabbb60004d5.1.llvm.6579149275953927878+0xf8>
   3ee68:	48 89 84 24 70 03 00 	mov    %rax,0x370(%rsp)
   3ee6f:	00 
   3ee70:	48 c7 84 24 78 03 00 	movq   $0x1,0x378(%rsp)
   3ee77:	00 01 00 00 00 
   3ee7c:	48 c7 84 24 80 03 00 	movq   $0x8,0x380(%rsp)
   3ee83:	00 08 00 00 00 
   3ee88:	66 0f 57 c0          	xorpd  %xmm0,%xmm0
   3ee8c:	66 0f 11 84 24 88 03 	movupd %xmm0,0x388(%rsp)
   3ee93:	00 00 
   3ee95:	48 8d bc 24 70 03 00 	lea    0x370(%rsp),%rdi
   3ee9c:	00 
   3ee9d:	e8 0e bb ff ff       	call   3a9b0 <anyhow::__private::format_err>
   3eea2:	e9 cc de ff ff       	jmp    3cd73 <<strategy_comm5::StrategyComm5 as future_backtest_sdk::plugin::StrategyPlugin>::on_begin+0x4d3>
   3eea7:	48 8b bc 24 e8 01 00 	mov    0x1e8(%rsp),%rdi
   3eeae:	00 
   3eeaf:	48 83 fe 15          	cmp    $0x15,%rsi
   3eeb3:	0f 83 0c 01 00 00    	jae    3efc5 <<strategy_comm5::StrategyComm5 as future_backtest_sdk::plugin::StrategyPlugin>::on_begin+0x2725>
   3eeb9:	48 8d 4c 24 20       	lea    0x20(%rsp),%rcx
   3eebe:	ba 01 00 00 00       	mov    $0x1,%edx
   3eec3:	e8 58 13 03 00       	call   70220 <core::slice::sort::shared::smallsort::insertion_sort_shift_left>
   3eec8:	e9 77 df ff ff       	jmp    3ce44 <<strategy_comm5::StrategyComm5 as future_backtest_sdk::plugin::StrategyPlugin>::on_begin+0x5a4>
   3eecd:	49 89 f4             	mov    %rsi,%r12
   3eed0:	ff 15 12 4f 0c 00    	call   *0xc4f12(%rip)        # 103de8 <_DYNAMIC+0x388>
   3eed6:	4c 89 e6             	mov    %r12,%rsi
   3eed9:	49 89 04 24          	mov    %rax,(%r12)
   3eedd:	49 89 54 24 08       	mov    %rdx,0x8(%r12)
   3eee2:	41 c6 44 24 10 01    	movb   $0x1,0x10(%r12)
   3eee8:	4c 8b bc 24 d0 01 00 	mov    0x1d0(%rsp),%r15
   3eeef:	00 
   3eef0:	e9 72 e1 ff ff       	jmp    3d067 <<strategy_comm5::StrategyComm5 as future_backtest_sdk::plugin::StrategyPlugin>::on_begin+0x7c7>
   3eef5:	49 83 fe 15          	cmp    $0x15,%r14
   3eef9:	0f 83 d5 00 00 00    	jae    3efd4 <<strategy_comm5::StrategyComm5 as future_backtest_sdk::plugin::StrategyPlugin>::on_begin+0x2734>
   3eeff:	49 c1 e6 05          	shl    $0x5,%r14
   3ef03:	41 bf 20 00 00 00    	mov    $0x20,%r15d
   3ef09:	4a 8d 34 3b          	lea    (%rbx,%r15,1),%rsi
   3ef0d:	48 89 df             	mov    %rbx,%rdi
   3ef10:	e8 1b 0d 03 00       	call   6fc30 <_ZN4core5slice4sort6shared9smallsort11insert_tail17h7c15d152ccb127feE.llvm.18106714090750252063>
   3ef15:	49 83 c7 20          	add    $0x20,%r15
   3ef19:	4d 39 fe             	cmp    %r15,%r14
   3ef1c:	75 eb                	jne    3ef09 <<strategy_comm5::StrategyComm5 as future_backtest_sdk::plugin::StrategyPlugin>::on_begin+0x2669>
   3ef1e:	e9 96 ee ff ff       	jmp    3ddb9 <<strategy_comm5::StrategyComm5 as future_backtest_sdk::plugin::StrategyPlugin>::on_begin+0x1519>
   3ef23:	ff 15 bf 4e 0c 00    	call   *0xc4ebf(%rip)        # 103de8 <_DYNAMIC+0x388>
   3ef29:	48 8b b4 24 50 02 00 	mov    0x250(%rsp),%rsi
   3ef30:	00 
   3ef31:	48 89 06             	mov    %rax,(%rsi)
   3ef34:	48 89 56 08          	mov    %rdx,0x8(%rsi)
   3ef38:	c6 46 10 01          	movb   $0x1,0x10(%rsi)
   3ef3c:	e9 91 ee ff ff       	jmp    3ddd2 <<strategy_comm5::StrategyComm5 as future_backtest_sdk::plugin::StrategyPlugin>::on_begin+0x1532>
   3ef41:	48 8d 15 40 e7 0b 00 	lea    0xbe740(%rip),%rdx        # fd688 <anon.8868ba55c3fc5525a110cabbb60004d5.1.llvm.6579149275953927878+0x90>
   3ef48:	bf 01 00 00 00       	mov    $0x1,%edi
   3ef4d:	be 01 00 00 00       	mov    $0x1,%esi
   3ef52:	ff 15 80 4d 0c 00    	call   *0xc4d80(%rip)        # 103cd8 <_DYNAMIC+0x278>
   3ef58:	eb 69                	jmp    3efc3 <<strategy_comm5::StrategyComm5 as future_backtest_sdk::plugin::StrategyPlugin>::on_begin+0x2723>
   3ef5a:	48 8d 15 27 e7 0b 00 	lea    0xbe727(%rip),%rdx        # fd688 <anon.8868ba55c3fc5525a110cabbb60004d5.1.llvm.6579149275953927878+0x90>
   3ef61:	bf 01 00 00 00       	mov    $0x1,%edi
   3ef66:	be 01 00 00 00       	mov    $0x1,%esi
   3ef6b:	ff 15 67 4d 0c 00    	call   *0xc4d67(%rip)        # 103cd8 <_DYNAMIC+0x278>
   3ef71:	eb 50                	jmp    3efc3 <<strategy_comm5::StrategyComm5 as future_backtest_sdk::plugin::StrategyPlugin>::on_begin+0x2723>
   3ef73:	4c 8d 05 ee ed 0b 00 	lea    0xbedee(%rip),%r8        # fdd68 <anon.8868ba55c3fc5525a110cabbb60004d5.1.llvm.6579149275953927878+0x770>
   3ef7a:	48 89 df             	mov    %rbx,%rdi
   3ef7d:	4c 89 f6             	mov    %r14,%rsi
   3ef80:	31 d2                	xor    %edx,%edx
   3ef82:	ff 15 68 4e 0c 00    	call   *0xc4e68(%rip)        # 103df0 <_DYNAMIC+0x390>
   3ef88:	eb 39                	jmp    3efc3 <<strategy_comm5::StrategyComm5 as future_backtest_sdk::plugin::StrategyPlugin>::on_begin+0x2723>
   3ef8a:	48 8b b4 24 80 03 00 	mov    0x380(%rsp),%rsi
   3ef91:	00 
   3ef92:	48 8d 15 ef e6 0b 00 	lea    0xbe6ef(%rip),%rdx        # fd688 <anon.8868ba55c3fc5525a110cabbb60004d5.1.llvm.6579149275953927878+0x90>
   3ef99:	48 8b 7c 24 70       	mov    0x70(%rsp),%rdi
   3ef9e:	ff 15 34 4d 0c 00    	call   *0xc4d34(%rip)        # 103cd8 <_DYNAMIC+0x278>
   3efa4:	eb 1d                	jmp    3efc3 <<strategy_comm5::StrategyComm5 as future_backtest_sdk::plugin::StrategyPlugin>::on_begin+0x2723>
   3efa6:	48 8b b4 24 80 03 00 	mov    0x380(%rsp),%rsi
   3efad:	00 
   3efae:	48 8d 15 d3 e6 0b 00 	lea    0xbe6d3(%rip),%rdx        # fd688 <anon.8868ba55c3fc5525a110cabbb60004d5.1.llvm.6579149275953927878+0x90>
   3efb5:	48 8b bc 24 a0 00 00 	mov    0xa0(%rsp),%rdi
   3efbc:	00 
   3efbd:	ff 15 15 4d 0c 00    	call   *0xc4d15(%rip)        # 103cd8 <_DYNAMIC+0x278>
   3efc3:	0f 0b                	ud2    
   3efc5:	48 8d 54 24 20       	lea    0x20(%rsp),%rdx
   3efca:	e8 c1 2c 04 00       	call   81c90 <core::slice::sort::stable::driftsort_main>
   3efcf:	e9 70 de ff ff       	jmp    3ce44 <<strategy_comm5::StrategyComm5 as future_backtest_sdk::plugin::StrategyPlugin>::on_begin+0x5a4>
   3efd4:	48 8d 94 24 70 03 00 	lea    0x370(%rsp),%rdx
   3efdb:	00 
   3efdc:	48 89 df             	mov    %rbx,%rdi
   3efdf:	4c 89 f6             	mov    %r14,%rsi
   3efe2:	e8 59 2b 04 00       	call   81b40 <core::slice::sort::stable::driftsort_main>
   3efe7:	e9 cd ed ff ff       	jmp    3ddb9 <<strategy_comm5::StrategyComm5 as future_backtest_sdk::plugin::StrategyPlugin>::on_begin+0x1519>
   3efec:	e9 20 02 00 00       	jmp    3f211 <<strategy_comm5::StrategyComm5 as future_backtest_sdk::plugin::StrategyPlugin>::on_begin+0x2971>
   3eff1:	48 89 c5             	mov    %rax,%rbp
   3eff4:	4d 85 ed             	test   %r13,%r13
   3eff7:	74 35                	je     3f02e <<strategy_comm5::StrategyComm5 as future_backtest_sdk::plugin::StrategyPlugin>::on_begin+0x278e>
   3eff9:	ba 01 00 00 00       	mov    $0x1,%edx
   3effe:	4c 89 e7             	mov    %r12,%rdi
   3f001:	4c 89 ee             	mov    %r13,%rsi
   3f004:	eb 22                	jmp    3f028 <<strategy_comm5::StrategyComm5 as future_backtest_sdk::plugin::StrategyPlugin>::on_begin+0x2788>
   3f006:	e9 f9 01 00 00       	jmp    3f204 <<strategy_comm5::StrategyComm5 as future_backtest_sdk::plugin::StrategyPlugin>::on_begin+0x2964>
   3f00b:	48 89 c5             	mov    %rax,%rbp
   3f00e:	eb 1e                	jmp    3f02e <<strategy_comm5::StrategyComm5 as future_backtest_sdk::plugin::StrategyPlugin>::on_begin+0x278e>
   3f010:	48 89 c5             	mov    %rax,%rbp
   3f013:	ba 01 00 00 00       	mov    $0x1,%edx
   3f018:	48 8b bc 24 f0 00 00 	mov    0xf0(%rsp),%rdi
   3f01f:	00 
   3f020:	48 8b b4 24 a0 00 00 	mov    0xa0(%rsp),%rsi
   3f027:	00 
   3f028:	ff 15 4a 4c 0c 00    	call   *0xc4c4a(%rip)        # 103c78 <_DYNAMIC+0x218>
   3f02e:	48 8b b4 24 c8 00 00 	mov    0xc8(%rsp),%rsi
   3f035:	00 
   3f036:	48 85 f6             	test   %rsi,%rsi
   3f039:	0f 84 43 02 00 00    	je     3f282 <<strategy_comm5::StrategyComm5 as future_backtest_sdk::plugin::StrategyPlugin>::on_begin+0x29e2>
   3f03f:	48 8b bc 24 d0 00 00 	mov    0xd0(%rsp),%rdi
   3f046:	00 
   3f047:	ba 01 00 00 00       	mov    $0x1,%edx
   3f04c:	ff 15 26 4c 0c 00    	call   *0xc4c26(%rip)        # 103c78 <_DYNAMIC+0x218>
   3f052:	e9 2b 02 00 00       	jmp    3f282 <<strategy_comm5::StrategyComm5 as future_backtest_sdk::plugin::StrategyPlugin>::on_begin+0x29e2>
   3f057:	48 89 c5             	mov    %rax,%rbp
   3f05a:	48 8b 73 08          	mov    0x8(%rbx),%rsi
   3f05e:	48 85 f6             	test   %rsi,%rsi
   3f061:	74 0d                	je     3f070 <<strategy_comm5::StrategyComm5 as future_backtest_sdk::plugin::StrategyPlugin>::on_begin+0x27d0>
   3f063:	48 8b 53 10          	mov    0x10(%rbx),%rdx
   3f067:	4c 89 ff             	mov    %r15,%rdi
   3f06a:	ff 15 08 4c 0c 00    	call   *0xc4c08(%rip)        # 103c78 <_DYNAMIC+0x218>
   3f070:	be 18 00 00 00       	mov    $0x18,%esi
   3f075:	ba 08 00 00 00       	mov    $0x8,%edx
   3f07a:	4c 89 f7             	mov    %r14,%rdi
   3f07d:	e9 3a 02 00 00       	jmp    3f2bc <<strategy_comm5::StrategyComm5 as future_backtest_sdk::plugin::StrategyPlugin>::on_begin+0x2a1c>
   3f082:	48 89 c5             	mov    %rax,%rbp
   3f085:	4d 85 ff             	test   %r15,%r15
   3f088:	0f 84 da 01 00 00    	je     3f268 <<strategy_comm5::StrategyComm5 as future_backtest_sdk::plugin::StrategyPlugin>::on_begin+0x29c8>
   3f08e:	ba 01 00 00 00       	mov    $0x1,%edx
   3f093:	4c 89 e7             	mov    %r12,%rdi
   3f096:	4c 89 fe             	mov    %r15,%rsi
   3f099:	ff 15 d9 4b 0c 00    	call   *0xc4bd9(%rip)        # 103c78 <_DYNAMIC+0x218>
   3f09f:	e9 c4 01 00 00       	jmp    3f268 <<strategy_comm5::StrategyComm5 as future_backtest_sdk::plugin::StrategyPlugin>::on_begin+0x29c8>
   3f0a4:	e9 5b 01 00 00       	jmp    3f204 <<strategy_comm5::StrategyComm5 as future_backtest_sdk::plugin::StrategyPlugin>::on_begin+0x2964>
   3f0a9:	e9 68 01 00 00       	jmp    3f216 <<strategy_comm5::StrategyComm5 as future_backtest_sdk::plugin::StrategyPlugin>::on_begin+0x2976>
   3f0ae:	48 89 c5             	mov    %rax,%rbp
   3f0b1:	e9 d9 01 00 00       	jmp    3f28f <<strategy_comm5::StrategyComm5 as future_backtest_sdk::plugin::StrategyPlugin>::on_begin+0x29ef>
   3f0b6:	48 89 c5             	mov    %rax,%rbp
   3f0b9:	4d 85 f6             	test   %r14,%r14
   3f0bc:	0f 84 71 01 00 00    	je     3f233 <<strategy_comm5::StrategyComm5 as future_backtest_sdk::plugin::StrategyPlugin>::on_begin+0x2993>
   3f0c2:	ba 01 00 00 00       	mov    $0x1,%edx
   3f0c7:	4c 89 ef             	mov    %r13,%rdi
   3f0ca:	4c 89 f6             	mov    %r14,%rsi
   3f0cd:	ff 15 a5 4b 0c 00    	call   *0xc4ba5(%rip)        # 103c78 <_DYNAMIC+0x218>
   3f0d3:	e9 5b 01 00 00       	jmp    3f233 <<strategy_comm5::StrategyComm5 as future_backtest_sdk::plugin::StrategyPlugin>::on_begin+0x2993>
   3f0d8:	48 89 c5             	mov    %rax,%rbp
   3f0db:	4d 85 f6             	test   %r14,%r14
   3f0de:	74 16                	je     3f0f6 <<strategy_comm5::StrategyComm5 as future_backtest_sdk::plugin::StrategyPlugin>::on_begin+0x2856>
   3f0e0:	ba 01 00 00 00       	mov    $0x1,%edx
   3f0e5:	4c 89 e7             	mov    %r12,%rdi
   3f0e8:	4c 89 f6             	mov    %r14,%rsi
   3f0eb:	ff 15 87 4b 0c 00    	call   *0xc4b87(%rip)        # 103c78 <_DYNAMIC+0x218>
   3f0f1:	eb 03                	jmp    3f0f6 <<strategy_comm5::StrategyComm5 as future_backtest_sdk::plugin::StrategyPlugin>::on_begin+0x2856>
   3f0f3:	48 89 c5             	mov    %rax,%rbp
   3f0f6:	48 8b bc 24 20 02 00 	mov    0x220(%rsp),%rdi
   3f0fd:	00 
   3f0fe:	e8 4d b2 ff ff       	call   3a350 <core::ptr::drop_in_place<std::io::error::Error>>
   3f103:	e9 ba 01 00 00       	jmp    3f2c2 <<strategy_comm5::StrategyComm5 as future_backtest_sdk::plugin::StrategyPlugin>::on_begin+0x2a22>
   3f108:	48 89 c5             	mov    %rax,%rbp
   3f10b:	e9 8c 01 00 00       	jmp    3f29c <<strategy_comm5::StrategyComm5 as future_backtest_sdk::plugin::StrategyPlugin>::on_begin+0x29fc>
   3f110:	48 89 c5             	mov    %rax,%rbp
   3f113:	48 8d bc 24 70 03 00 	lea    0x370(%rsp),%rdi
   3f11a:	00 
   3f11b:	e9 aa 01 00 00       	jmp    3f2ca <<strategy_comm5::StrategyComm5 as future_backtest_sdk::plugin::StrategyPlugin>::on_begin+0x2a2a>
   3f120:	48 89 c5             	mov    %rax,%rbp
   3f123:	e9 9a 01 00 00       	jmp    3f2c2 <<strategy_comm5::StrategyComm5 as future_backtest_sdk::plugin::StrategyPlugin>::on_begin+0x2a22>
   3f128:	48 89 c5             	mov    %rax,%rbp
   3f12b:	ba 01 00 00 00       	mov    $0x1,%edx
   3f130:	48 8b bc 24 e0 00 00 	mov    0xe0(%rsp),%rdi
   3f137:	00 
   3f138:	48 8b 74 24 70       	mov    0x70(%rsp),%rsi
   3f13d:	ff 15 35 4b 0c 00    	call   *0xc4b35(%rip)        # 103c78 <_DYNAMIC+0x218>
   3f143:	e9 3a 01 00 00       	jmp    3f282 <<strategy_comm5::StrategyComm5 as future_backtest_sdk::plugin::StrategyPlugin>::on_begin+0x29e2>
   3f148:	e9 b7 00 00 00       	jmp    3f204 <<strategy_comm5::StrategyComm5 as future_backtest_sdk::plugin::StrategyPlugin>::on_begin+0x2964>
   3f14d:	48 89 c5             	mov    %rax,%rbp
   3f150:	4d 85 e4             	test   %r12,%r12
   3f153:	0f 84 da 00 00 00    	je     3f233 <<strategy_comm5::StrategyComm5 as future_backtest_sdk::plugin::StrategyPlugin>::on_begin+0x2993>
   3f159:	ba 01 00 00 00       	mov    $0x1,%edx
   3f15e:	4c 89 ff             	mov    %r15,%rdi
   3f161:	4c 89 e6             	mov    %r12,%rsi
   3f164:	ff 15 0e 4b 0c 00    	call   *0xc4b0e(%rip)        # 103c78 <_DYNAMIC+0x218>
   3f16a:	e9 c4 00 00 00       	jmp    3f233 <<strategy_comm5::StrategyComm5 as future_backtest_sdk::plugin::StrategyPlugin>::on_begin+0x2993>
   3f16f:	e9 9d 00 00 00       	jmp    3f211 <<strategy_comm5::StrategyComm5 as future_backtest_sdk::plugin::StrategyPlugin>::on_begin+0x2971>
   3f174:	48 89 c5             	mov    %rax,%rbp
   3f177:	be 01 00 00 00       	mov    $0x1,%esi
   3f17c:	ba 01 00 00 00       	mov    $0x1,%edx
   3f181:	4c 89 ff             	mov    %r15,%rdi
   3f184:	ff 15 ee 4a 0c 00    	call   *0xc4aee(%rip)        # 103c78 <_DYNAMIC+0x218>
   3f18a:	e9 a4 00 00 00       	jmp    3f233 <<strategy_comm5::StrategyComm5 as future_backtest_sdk::plugin::StrategyPlugin>::on_begin+0x2993>
   3f18f:	e9 9c 00 00 00       	jmp    3f230 <<strategy_comm5::StrategyComm5 as future_backtest_sdk::plugin::StrategyPlugin>::on_begin+0x2990>
   3f194:	48 89 c5             	mov    %rax,%rbp
   3f197:	e9 33 01 00 00       	jmp    3f2cf <<strategy_comm5::StrategyComm5 as future_backtest_sdk::plugin::StrategyPlugin>::on_begin+0x2a2f>
   3f19c:	48 89 c5             	mov    %rax,%rbp
   3f19f:	eb 19                	jmp    3f1ba <<strategy_comm5::StrategyComm5 as future_backtest_sdk::plugin::StrategyPlugin>::on_begin+0x291a>
   3f1a1:	48 89 c5             	mov    %rax,%rbp
   3f1a4:	4d 85 ed             	test   %r13,%r13
   3f1a7:	74 11                	je     3f1ba <<strategy_comm5::StrategyComm5 as future_backtest_sdk::plugin::StrategyPlugin>::on_begin+0x291a>
   3f1a9:	ba 01 00 00 00       	mov    $0x1,%edx
   3f1ae:	4c 89 f7             	mov    %r14,%rdi
   3f1b1:	4c 89 ee             	mov    %r13,%rsi
   3f1b4:	ff 15 be 4a 0c 00    	call   *0xc4abe(%rip)        # 103c78 <_DYNAMIC+0x218>
   3f1ba:	48 8b b4 24 88 00 00 	mov    0x88(%rsp),%rsi
   3f1c1:	00 
   3f1c2:	48 85 f6             	test   %rsi,%rsi
   3f1c5:	74 13                	je     3f1da <<strategy_comm5::StrategyComm5 as future_backtest_sdk::plugin::StrategyPlugin>::on_begin+0x293a>
   3f1c7:	48 8b bc 24 90 00 00 	mov    0x90(%rsp),%rdi
   3f1ce:	00 
   3f1cf:	ba 01 00 00 00       	mov    $0x1,%edx
   3f1d4:	ff 15 9e 4a 0c 00    	call   *0xc4a9e(%rip)        # 103c78 <_DYNAMIC+0x218>
   3f1da:	48 8b b4 24 c8 00 00 	mov    0xc8(%rsp),%rsi
   3f1e1:	00 
   3f1e2:	48 85 f6             	test   %rsi,%rsi
   3f1e5:	74 4c                	je     3f233 <<strategy_comm5::StrategyComm5 as future_backtest_sdk::plugin::StrategyPlugin>::on_begin+0x2993>
   3f1e7:	48 8b bc 24 d0 00 00 	mov    0xd0(%rsp),%rdi
   3f1ee:	00 
   3f1ef:	ba 01 00 00 00       	mov    $0x1,%edx
   3f1f4:	ff 15 7e 4a 0c 00    	call   *0xc4a7e(%rip)        # 103c78 <_DYNAMIC+0x218>
   3f1fa:	eb 37                	jmp    3f233 <<strategy_comm5::StrategyComm5 as future_backtest_sdk::plugin::StrategyPlugin>::on_begin+0x2993>
   3f1fc:	48 89 c5             	mov    %rax,%rbp
   3f1ff:	e9 8b 00 00 00       	jmp    3f28f <<strategy_comm5::StrategyComm5 as future_backtest_sdk::plugin::StrategyPlugin>::on_begin+0x29ef>
   3f204:	48 89 c5             	mov    %rax,%rbp
   3f207:	eb 79                	jmp    3f282 <<strategy_comm5::StrategyComm5 as future_backtest_sdk::plugin::StrategyPlugin>::on_begin+0x29e2>
   3f209:	48 89 c5             	mov    %rax,%rbp
   3f20c:	e9 cb 00 00 00       	jmp    3f2dc <<strategy_comm5::StrategyComm5 as future_backtest_sdk::plugin::StrategyPlugin>::on_begin+0x2a3c>
   3f211:	48 89 c5             	mov    %rax,%rbp
   3f214:	eb 52                	jmp    3f268 <<strategy_comm5::StrategyComm5 as future_backtest_sdk::plugin::StrategyPlugin>::on_begin+0x29c8>
   3f216:	48 89 c5             	mov    %rax,%rbp
   3f219:	eb 40                	jmp    3f25b <<strategy_comm5::StrategyComm5 as future_backtest_sdk::plugin::StrategyPlugin>::on_begin+0x29bb>
   3f21b:	48 89 c5             	mov    %rax,%rbp
   3f21e:	48 8d bc 24 10 09 00 	lea    0x910(%rsp),%rdi
   3f225:	00 
   3f226:	e8 65 b0 ff ff       	call   3a290 <core::ptr::drop_in_place<toml::de::Error>>
   3f22b:	e9 ac 00 00 00       	jmp    3f2dc <<strategy_comm5::StrategyComm5 as future_backtest_sdk::plugin::StrategyPlugin>::on_begin+0x2a3c>
   3f230:	48 89 c5             	mov    %rax,%rbp
   3f233:	48 8b b4 24 60 01 00 	mov    0x160(%rsp),%rsi
   3f23a:	00 
   3f23b:	48 8d 04 75 00 00 00 	lea    0x0(,%rsi,2),%rax
   3f242:	00 
   3f243:	48 85 c0             	test   %rax,%rax
   3f246:	74 13                	je     3f25b <<strategy_comm5::StrategyComm5 as future_backtest_sdk::plugin::StrategyPlugin>::on_begin+0x29bb>
   3f248:	48 8b bc 24 68 01 00 	mov    0x168(%rsp),%rdi
   3f24f:	00 
   3f250:	ba 01 00 00 00       	mov    $0x1,%edx
   3f255:	ff 15 1d 4a 0c 00    	call   *0xc4a1d(%rip)        # 103c78 <_DYNAMIC+0x218>
   3f25b:	48 8d bc 24 10 01 00 	lea    0x110(%rsp),%rdi
   3f262:	00 
   3f263:	e8 28 1b 02 00       	call   60d90 <<hashbrown::raw::RawTable<T,A> as core::ops::drop::Drop>::drop>
   3f268:	48 8d bc 24 f8 00 00 	lea    0xf8(%rsp),%rdi
   3f26f:	00 
   3f270:	e8 2b b4 ff ff       	call   3a6a0 <core::ptr::drop_in_place<alloc::vec::Vec<(alloc::string::String,f64)>>>
   3f275:	48 8d bc 24 88 01 00 	lea    0x188(%rsp),%rdi
   3f27c:	00 
   3f27d:	e8 8e b3 ff ff       	call   3a610 <core::ptr::drop_in_place<alloc::vec::Vec<alloc::string::String>>>
   3f282:	48 8d bc 24 08 02 00 	lea    0x208(%rsp),%rdi
   3f289:	00 
   3f28a:	e8 e1 2f 03 00       	call   72270 <<alloc::collections::btree::map::BTreeMap<K,V,A> as core::ops::drop::Drop>::drop>
   3f28f:	48 8d bc 24 20 02 00 	lea    0x220(%rsp),%rdi
   3f296:	00 
   3f297:	e8 d4 1f 02 00       	call   61270 <<hashbrown::raw::RawTable<T,A> as core::ops::drop::Drop>::drop>
   3f29c:	48 83 bc 24 c8 01 00 	cmpq   $0x0,0x1c8(%rsp)
   3f2a3:	00 00 
   3f2a5:	74 1b                	je     3f2c2 <<strategy_comm5::StrategyComm5 as future_backtest_sdk::plugin::StrategyPlugin>::on_begin+0x2a22>
   3f2a7:	ba 01 00 00 00       	mov    $0x1,%edx
   3f2ac:	48 8b bc 24 d0 01 00 	mov    0x1d0(%rsp),%rdi
   3f2b3:	00 
   3f2b4:	48 8b b4 24 c8 01 00 	mov    0x1c8(%rsp),%rsi
   3f2bb:	00 
   3f2bc:	ff 15 b6 49 0c 00    	call   *0xc49b6(%rip)        # 103c78 <_DYNAMIC+0x218>
   3f2c2:	48 8d bc 24 e0 01 00 	lea    0x1e0(%rsp),%rdi
   3f2c9:	00 
   3f2ca:	e8 41 b3 ff ff       	call   3a610 <core::ptr::drop_in_place<alloc::vec::Vec<alloc::string::String>>>
   3f2cf:	48 8d bc 24 10 09 00 	lea    0x910(%rsp),%rdi
   3f2d6:	00 
   3f2d7:	e8 24 b1 ff ff       	call   3a400 <core::ptr::drop_in_place<strategy_comm5::Comm5Params>>
   3f2dc:	48 8b b4 24 78 02 00 	mov    0x278(%rsp),%rsi
   3f2e3:	00 
   3f2e4:	48 85 f6             	test   %rsi,%rsi
   3f2e7:	74 13                	je     3f2fc <<strategy_comm5::StrategyComm5 as future_backtest_sdk::plugin::StrategyPlugin>::on_begin+0x2a5c>
   3f2e9:	48 8b bc 24 80 02 00 	mov    0x280(%rsp),%rdi
   3f2f0:	00 
   3f2f1:	ba 01 00 00 00       	mov    $0x1,%edx
   3f2f6:	ff 15 7c 49 0c 00    	call   *0xc497c(%rip)        # 103c78 <_DYNAMIC+0x218>
   3f2fc:	48 89 ef             	mov    %rbp,%rdi
   3f2ff:	e8 7c d2 0b 00       	call   fc580 <_Unwind_Resume@plt>
   3f304:	ff 15 46 4a 0c 00    	call   *0xc4a46(%rip)        # 103d50 <_DYNAMIC+0x2f0>
   3f30a:	cc                   	int3   
   3f30b:	cc                   	int3   
   3f30c:	cc                   	int3   
   3f30d:	cc                   	int3   
   3f30e:	cc                   	int3   
   3f30f:	cc                   	int3   
