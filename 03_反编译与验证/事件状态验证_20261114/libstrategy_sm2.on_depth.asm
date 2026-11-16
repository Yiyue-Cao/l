0000000000048df0 <<strategy_sm2::StrategySM2 as future_backtest_sdk::plugin::StrategyPlugin>::on_depth>:
   48df0:	55                   	push   rbp
   48df1:	41 57                	push   r15
   48df3:	41 56                	push   r14
   48df5:	41 55                	push   r13
   48df7:	41 54                	push   r12
   48df9:	53                   	push   rbx
   48dfa:	48 83 ec 58          	sub    rsp,0x58
   48dfe:	48 89 34 24          	mov    QWORD PTR [rsp],rsi
   48e02:	48 8b b7 58 01 00 00 	mov    rsi,QWORD PTR [rdi+0x158]
   48e09:	48 85 f6             	test   rsi,rsi
   48e0c:	0f 84 2d 01 00 00    	je     48f3f <<strategy_sm2::StrategySM2 as future_backtest_sdk::plugin::StrategyPlugin>::on_depth+0x14f>
   48e12:	48 89 f8             	mov    rax,rdi
   48e15:	48 8b 14 24          	mov    rdx,QWORD PTR [rsp]
   48e19:	48 8d 4a 20          	lea    rcx,[rdx+0x20]
   48e1d:	48 89 4c 24 18       	mov    QWORD PTR [rsp+0x18],rcx
   48e22:	48 8b 8f 60 01 00 00 	mov    rcx,QWORD PTR [rdi+0x160]
   48e29:	48 89 4c 24 10       	mov    QWORD PTR [rsp+0x10],rcx
   48e2e:	48 05 58 01 00 00    	add    rax,0x158
   48e34:	48 89 44 24 20       	mov    QWORD PTR [rsp+0x20],rax
   48e39:	48 8b 42 28          	mov    rax,QWORD PTR [rdx+0x28]
   48e3d:	48 89 44 24 30       	mov    QWORD PTR [rsp+0x30],rax
   48e42:	4c 8b 62 30          	mov    r12,QWORD PTR [rdx+0x30]
   48e46:	48 8d 46 08          	lea    rax,[rsi+0x8]
   48e4a:	48 89 74 24 08       	mov    QWORD PTR [rsp+0x8],rsi
   48e4f:	0f b7 8e 1a 02 00 00 	movzx  ecx,WORD PTR [rsi+0x21a]
   48e56:	48 89 4c 24 28       	mov    QWORD PTR [rsp+0x28],rcx
   48e5b:	8d 0c cd 00 00 00 00 	lea    ecx,[rcx*8+0x0]
   48e62:	4c 8d 2c 49          	lea    r13,[rcx+rcx*2]
   48e66:	48 c7 c3 ff ff ff ff 	mov    rbx,0xffffffffffffffff
   48e6d:	31 ed                	xor    ebp,ebp
   48e6f:	90                   	nop
   48e70:	49 39 ed             	cmp    r13,rbp
   48e73:	74 5b                	je     48ed0 <<strategy_sm2::StrategySM2 as future_backtest_sdk::plugin::StrategyPlugin>::on_depth+0xe0>
   48e75:	4c 8d 78 18          	lea    r15,[rax+0x18]
   48e79:	48 8b 70 08          	mov    rsi,QWORD PTR [rax+0x8]
   48e7d:	48 8b 50 10          	mov    rdx,QWORD PTR [rax+0x10]
   48e81:	4d 89 e6             	mov    r14,r12
   48e84:	49 29 d6             	sub    r14,rdx
   48e87:	49 0f 42 d4          	cmovb  rdx,r12
   48e8b:	48 8b 7c 24 30       	mov    rdi,QWORD PTR [rsp+0x30]
   48e90:	ff 15 da e8 08 00    	call   QWORD PTR [rip+0x8e8da]        # d7770 <memcmp@GLIBC_2.2.5>
   48e96:	48 98                	cdqe   
   48e98:	85 c0                	test   eax,eax
   48e9a:	4c 0f 45 f0          	cmovne r14,rax
   48e9e:	4d 85 f6             	test   r14,r14
   48ea1:	0f 98 c0             	sets   al
   48ea4:	0f 9f c1             	setg   cl
   48ea7:	28 c1                	sub    cl,al
   48ea9:	48 83 c5 18          	add    rbp,0x18
   48ead:	48 ff c3             	inc    rbx
   48eb0:	4c 89 f8             	mov    rax,r15
   48eb3:	80 f9 01             	cmp    cl,0x1
   48eb6:	74 b8                	je     48e70 <<strategy_sm2::StrategySM2 as future_backtest_sdk::plugin::StrategyPlugin>::on_depth+0x80>
   48eb8:	0f b6 c1             	movzx  eax,cl
   48ebb:	85 c0                	test   eax,eax
   48ebd:	74 38                	je     48ef7 <<strategy_sm2::StrategySM2 as future_backtest_sdk::plugin::StrategyPlugin>::on_depth+0x107>
   48ebf:	eb 14                	jmp    48ed5 <<strategy_sm2::StrategySM2 as future_backtest_sdk::plugin::StrategyPlugin>::on_depth+0xe5>
   48ec1:	66 66 66 66 66 66 2e 	data16 data16 data16 data16 data16 cs nop WORD PTR [rax+rax*1+0x0]
   48ec8:	0f 1f 84 00 00 00 00 
   48ecf:	00 
   48ed0:	48 8b 5c 24 28       	mov    rbx,QWORD PTR [rsp+0x28]
   48ed5:	48 8b 74 24 08       	mov    rsi,QWORD PTR [rsp+0x8]
   48eda:	48 8b 44 24 10       	mov    rax,QWORD PTR [rsp+0x10]
   48edf:	48 83 e8 01          	sub    rax,0x1
   48ee3:	72 5a                	jb     48f3f <<strategy_sm2::StrategySM2 as future_backtest_sdk::plugin::StrategyPlugin>::on_depth+0x14f>
   48ee5:	48 89 44 24 10       	mov    QWORD PTR [rsp+0x10],rax
   48eea:	48 8b b4 de 20 02 00 	mov    rsi,QWORD PTR [rsi+rbx*8+0x220]
   48ef1:	00 
   48ef2:	e9 4f ff ff ff       	jmp    48e46 <<strategy_sm2::StrategySM2 as future_backtest_sdk::plugin::StrategyPlugin>::on_depth+0x56>
   48ef7:	48 8b 04 24          	mov    rax,QWORD PTR [rsp]
   48efb:	f2 0f 10 80 98 00 00 	movsd  xmm0,QWORD PTR [rax+0x98]
   48f02:	00 
   48f03:	48 8b 4c 24 08       	mov    rcx,QWORD PTR [rsp+0x8]
   48f08:	66 0f 2e 84 29 f8 00 	ucomisd xmm0,QWORD PTR [rcx+rbp*1+0xf8]
   48f0f:	00 00 
   48f11:	75 18                	jne    48f2b <<strategy_sm2::StrategySM2 as future_backtest_sdk::plugin::StrategyPlugin>::on_depth+0x13b>
   48f13:	7a 16                	jp     48f2b <<strategy_sm2::StrategySM2 as future_backtest_sdk::plugin::StrategyPlugin>::on_depth+0x13b>
   48f15:	48 8b 04 24          	mov    rax,QWORD PTR [rsp]
   48f19:	f2 0f 10 40 48       	movsd  xmm0,QWORD PTR [rax+0x48]
   48f1e:	66 0f 2e 84 29 00 01 	ucomisd xmm0,QWORD PTR [rcx+rbp*1+0x100]
   48f25:	00 00 
   48f27:	75 02                	jne    48f2b <<strategy_sm2::StrategySM2 as future_backtest_sdk::plugin::StrategyPlugin>::on_depth+0x13b>
   48f29:	7b 14                	jnp    48f3f <<strategy_sm2::StrategySM2 as future_backtest_sdk::plugin::StrategyPlugin>::on_depth+0x14f>
   48f2b:	48 8d 7c 24 38       	lea    rdi,[rsp+0x38]
   48f30:	48 8b 74 24 20       	mov    rsi,QWORD PTR [rsp+0x20]
   48f35:	48 8b 54 24 18       	mov    rdx,QWORD PTR [rsp+0x18]
   48f3a:	e8 91 8b 00 00       	call   51ad0 <alloc::collections::btree::map::BTreeMap<K,V,A>::remove>
   48f3f:	31 c0                	xor    eax,eax
   48f41:	48 83 c4 58          	add    rsp,0x58
   48f45:	5b                   	pop    rbx
   48f46:	41 5c                	pop    r12
   48f48:	41 5d                	pop    r13
   48f4a:	41 5e                	pop    r14
   48f4c:	41 5f                	pop    r15
   48f4e:	5d                   	pop    rbp
   48f4f:	c3                   	ret    