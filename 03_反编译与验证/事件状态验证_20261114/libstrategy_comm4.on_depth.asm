0000000000054d80 <<strategy_comm4::StrategyComm4 as future_backtest_sdk::plugin::StrategyPlugin>::on_depth>:
   54d80:	48 83 bf 18 05 00 00 	cmp    QWORD PTR [rdi+0x518],0x0
   54d87:	00 
   54d88:	0f 84 ca 01 00 00    	je     54f58 <<strategy_comm4::StrategyComm4 as future_backtest_sdk::plugin::StrategyPlugin>::on_depth+0x1d8>
   54d8e:	55                   	push   rbp
   54d8f:	41 57                	push   r15
   54d91:	41 56                	push   r14
   54d93:	41 55                	push   r13
   54d95:	41 54                	push   r12
   54d97:	53                   	push   rbx
   54d98:	48 81 ec 98 00 00 00 	sub    rsp,0x98
   54d9f:	49 89 f6             	mov    r14,rsi
   54da2:	48 83 c6 20          	add    rsi,0x20
   54da6:	48 8d 87 00 05 00 00 	lea    rax,[rdi+0x500]
   54dad:	48 89 44 24 30       	mov    QWORD PTR [rsp+0x30],rax
   54db2:	48 8d 87 20 05 00 00 	lea    rax,[rdi+0x520]
   54db9:	48 89 fb             	mov    rbx,rdi
   54dbc:	48 89 44 24 28       	mov    QWORD PTR [rsp+0x28],rax
   54dc1:	48 89 c7             	mov    rdi,rax
   54dc4:	48 89 74 24 38       	mov    QWORD PTR [rsp+0x38],rsi
   54dc9:	e8 e2 6d 01 00       	call   6bbb0 <core::hash::BuildHasher::hash_one>
   54dce:	48 89 c1             	mov    rcx,rax
   54dd1:	48 c1 e9 39          	shr    rcx,0x39
   54dd5:	48 8b bb 00 05 00 00 	mov    rdi,QWORD PTR [rbx+0x500]
   54ddc:	48 8b b3 08 05 00 00 	mov    rsi,QWORD PTR [rbx+0x508]
   54de3:	66 0f 6e c1          	movd   xmm0,ecx
   54de7:	66 0f 60 c0          	punpcklbw xmm0,xmm0
   54deb:	f2 0f 70 c0 00       	pshuflw xmm0,xmm0,0x0
   54df0:	66 0f 70 c8 00       	pshufd xmm1,xmm0,0x0
   54df5:	48 8d 6f d0          	lea    rbp,[rdi-0x30]
   54df9:	4d 8b 6e 28          	mov    r13,QWORD PTR [r14+0x28]
   54dfd:	49 8b 56 30          	mov    rdx,QWORD PTR [r14+0x30]
   54e01:	45 31 c0             	xor    r8d,r8d
   54e04:	66 0f 76 d2          	pcmpeqd xmm2,xmm2
   54e08:	4c 8b 3d c9 c3 09 00 	mov    r15,QWORD PTR [rip+0x9c3c9]        # f11d8 <bcmp@GLIBC_2.2.5>
   54e0f:	48 21 f0             	and    rax,rsi
   54e12:	f3 0f 6f 1c 07       	movdqu xmm3,XMMWORD PTR [rdi+rax*1]
   54e17:	66 0f 6f c3          	movdqa xmm0,xmm3
   54e1b:	66 0f 74 c1          	pcmpeqb xmm0,xmm1
   54e1f:	66 0f d7 c8          	pmovmskb ecx,xmm0
   54e23:	85 c9                	test   ecx,ecx
   54e25:	0f 84 95 00 00 00    	je     54ec0 <<strategy_comm4::StrategyComm4 as future_backtest_sdk::plugin::StrategyPlugin>::on_depth+0x140>
   54e2b:	48 89 44 24 10       	mov    QWORD PTR [rsp+0x10],rax
   54e30:	66 0f 7f 4c 24 50    	movdqa XMMWORD PTR [rsp+0x50],xmm1
   54e36:	48 89 74 24 08       	mov    QWORD PTR [rsp+0x8],rsi
   54e3b:	4c 89 04 24          	mov    QWORD PTR [rsp],r8
   54e3f:	66 0f 7f 5c 24 40    	movdqa XMMWORD PTR [rsp+0x40],xmm3
   54e45:	48 89 4c 24 18       	mov    QWORD PTR [rsp+0x18],rcx
   54e4a:	f3 0f bc c9          	tzcnt  ecx,ecx
   54e4e:	48 01 c1             	add    rcx,rax
   54e51:	48 21 f1             	and    rcx,rsi
   54e54:	48 f7 d9             	neg    rcx
   54e57:	4c 8d 24 49          	lea    r12,[rcx+rcx*2]
   54e5b:	49 c1 e4 04          	shl    r12,0x4
   54e5f:	4a 3b 54 25 10       	cmp    rdx,QWORD PTR [rbp+r12*1+0x10]
   54e64:	75 28                	jne    54e8e <<strategy_comm4::StrategyComm4 as future_backtest_sdk::plugin::StrategyPlugin>::on_depth+0x10e>
   54e66:	49 8d 04 2c          	lea    rax,[r12+rbp*1]
   54e6a:	48 8b 70 08          	mov    rsi,QWORD PTR [rax+0x8]
   54e6e:	48 89 7c 24 20       	mov    QWORD PTR [rsp+0x20],rdi
   54e73:	4c 89 ef             	mov    rdi,r13
   54e76:	4c 89 f3             	mov    rbx,r14
   54e79:	49 89 d6             	mov    r14,rdx
   54e7c:	41 ff d7             	call   r15
   54e7f:	48 8b 7c 24 20       	mov    rdi,QWORD PTR [rsp+0x20]
   54e84:	4c 89 f2             	mov    rdx,r14
   54e87:	49 89 de             	mov    r14,rbx
   54e8a:	85 c0                	test   eax,eax
   54e8c:	74 4e                	je     54edc <<strategy_comm4::StrategyComm4 as future_backtest_sdk::plugin::StrategyPlugin>::on_depth+0x15c>
   54e8e:	48 8b 4c 24 18       	mov    rcx,QWORD PTR [rsp+0x18]
   54e93:	8d 41 ff             	lea    eax,[rcx-0x1]
   54e96:	66 21 c8             	and    ax,cx
   54e99:	89 c1                	mov    ecx,eax
   54e9b:	48 8b 44 24 10       	mov    rax,QWORD PTR [rsp+0x10]
   54ea0:	66 0f 6f 4c 24 50    	movdqa xmm1,XMMWORD PTR [rsp+0x50]
   54ea6:	48 8b 74 24 08       	mov    rsi,QWORD PTR [rsp+0x8]
   54eab:	4c 8b 04 24          	mov    r8,QWORD PTR [rsp]
   54eaf:	66 0f 76 d2          	pcmpeqd xmm2,xmm2
   54eb3:	66 0f 6f 5c 24 40    	movdqa xmm3,XMMWORD PTR [rsp+0x40]
   54eb9:	75 8a                	jne    54e45 <<strategy_comm4::StrategyComm4 as future_backtest_sdk::plugin::StrategyPlugin>::on_depth+0xc5>
   54ebb:	0f 1f 44 00 00       	nop    DWORD PTR [rax+rax*1+0x0]
   54ec0:	66 0f 74 da          	pcmpeqb xmm3,xmm2
   54ec4:	66 0f d7 cb          	pmovmskb ecx,xmm3
   54ec8:	85 c9                	test   ecx,ecx
   54eca:	75 7b                	jne    54f47 <<strategy_comm4::StrategyComm4 as future_backtest_sdk::plugin::StrategyPlugin>::on_depth+0x1c7>
   54ecc:	4c 01 c0             	add    rax,r8
   54ecf:	48 83 c0 10          	add    rax,0x10
   54ed3:	49 83 c0 10          	add    r8,0x10
   54ed7:	e9 33 ff ff ff       	jmp    54e0f <<strategy_comm4::StrategyComm4 as future_backtest_sdk::plugin::StrategyPlugin>::on_depth+0x8f>
   54edc:	f2 41 0f 10 86 98 00 	movsd  xmm0,QWORD PTR [r14+0x98]
   54ee3:	00 00 
   54ee5:	66 42 0f 2e 44 27 e8 	ucomisd xmm0,QWORD PTR [rdi+r12*1-0x18]
   54eec:	75 13                	jne    54f01 <<strategy_comm4::StrategyComm4 as future_backtest_sdk::plugin::StrategyPlugin>::on_depth+0x181>
   54eee:	7a 11                	jp     54f01 <<strategy_comm4::StrategyComm4 as future_backtest_sdk::plugin::StrategyPlugin>::on_depth+0x181>
   54ef0:	f2 41 0f 10 46 48    	movsd  xmm0,QWORD PTR [r14+0x48]
   54ef6:	66 42 0f 2e 44 27 f0 	ucomisd xmm0,QWORD PTR [rdi+r12*1-0x10]
   54efd:	75 02                	jne    54f01 <<strategy_comm4::StrategyComm4 as future_backtest_sdk::plugin::StrategyPlugin>::on_depth+0x181>
   54eff:	7b 46                	jnp    54f47 <<strategy_comm4::StrategyComm4 as future_backtest_sdk::plugin::StrategyPlugin>::on_depth+0x1c7>
   54f01:	48 8b 7c 24 28       	mov    rdi,QWORD PTR [rsp+0x28]
   54f06:	48 8b 5c 24 38       	mov    rbx,QWORD PTR [rsp+0x38]
   54f0b:	48 89 de             	mov    rsi,rbx
   54f0e:	e8 9d 6c 01 00       	call   6bbb0 <core::hash::BuildHasher::hash_one>
   54f13:	48 8d 7c 24 68       	lea    rdi,[rsp+0x68]
   54f18:	48 8b 74 24 30       	mov    rsi,QWORD PTR [rsp+0x30]
   54f1d:	48 89 c2             	mov    rdx,rax
   54f20:	48 89 d9             	mov    rcx,rbx
   54f23:	e8 88 37 00 00       	call   586b0 <hashbrown::raw::RawTable<T,A>::remove_entry>
   54f28:	48 8b 74 24 68       	mov    rsi,QWORD PTR [rsp+0x68]
   54f2d:	48 89 f0             	mov    rax,rsi
   54f30:	48 f7 d8             	neg    rax
   54f33:	70 12                	jo     54f47 <<strategy_comm4::StrategyComm4 as future_backtest_sdk::plugin::StrategyPlugin>::on_depth+0x1c7>
   54f35:	73 10                	jae    54f47 <<strategy_comm4::StrategyComm4 as future_backtest_sdk::plugin::StrategyPlugin>::on_depth+0x1c7>
   54f37:	48 8b 7c 24 70       	mov    rdi,QWORD PTR [rsp+0x70]
   54f3c:	ba 01 00 00 00       	mov    edx,0x1
   54f41:	ff 15 b1 c1 09 00    	call   QWORD PTR [rip+0x9c1b1]        # f10f8 <_DYNAMIC+0x218>
   54f47:	48 81 c4 98 00 00 00 	add    rsp,0x98
   54f4e:	5b                   	pop    rbx
   54f4f:	41 5c                	pop    r12
   54f51:	41 5d                	pop    r13
   54f53:	41 5e                	pop    r14
   54f55:	41 5f                	pop    r15
   54f57:	5d                   	pop    rbp
   54f58:	31 c0                	xor    eax,eax
   54f5a:	c3                   	ret    
   54f5b:	cc                   	int3   
   54f5c:	cc                   	int3   
   54f5d:	cc                   	int3   
   54f5e:	cc                   	int3   
   54f5f:	cc                   	int3   