00000000000b3e80 <future_backtest_sdk::context::StrategyContext::cancel_order>:
   b3e80:	55                   	push   rbp
   b3e81:	41 57                	push   r15
   b3e83:	41 56                	push   r14
   b3e85:	41 55                	push   r13
   b3e87:	41 54                	push   r12
   b3e89:	53                   	push   rbx
   b3e8a:	48 81 ec 88 00 00 00 	sub    rsp,0x88
   b3e91:	4d 89 c7             	mov    r15,r8
   b3e94:	49 89 cc             	mov    r12,rcx
   b3e97:	49 89 fd             	mov    r13,rdi
   b3e9a:	48 89 34 24          	mov    QWORD PTR [rsp],rsi
   b3e9e:	48 89 54 24 08       	mov    QWORD PTR [rsp+0x8],rdx
   b3ea3:	48 89 4c 24 10       	mov    QWORD PTR [rsp+0x10],rcx
   b3ea8:	4c 89 44 24 18       	mov    QWORD PTR [rsp+0x18],r8
   b3ead:	48 8b 2d ec fe 04 00 	mov    rbp,QWORD PTR [rip+0x4feec]        # 103da0 <_DYNAMIC+0x340>
   b3eb4:	48 89 f7             	mov    rdi,rsi
   b3eb7:	48 89 d6             	mov    rsi,rdx
   b3eba:	ff d5                	call   rbp
   b3ebc:	49 89 c6             	mov    r14,rax
   b3ebf:	48 89 d3             	mov    rbx,rdx
   b3ec2:	4c 89 e7             	mov    rdi,r12
   b3ec5:	4c 89 fe             	mov    rsi,r15
   b3ec8:	ff d5                	call   rbp
   b3eca:	49 89 c4             	mov    r12,rax
   b3ecd:	49 89 d7             	mov    r15,rdx
   b3ed0:	49 8b 7d 30          	mov    rdi,QWORD PTR [r13+0x30]
   b3ed4:	4c 89 f6             	mov    rsi,r14
   b3ed7:	48 89 c2             	mov    rdx,rax
   b3eda:	ff 15 50 05 05 00    	call   QWORD PTR [rip+0x50550]        # 104430 <fb_ctx_cancel_order@Base>
   b3ee0:	85 c0                	test   eax,eax
   b3ee2:	78 4d                	js     b3f31 <future_backtest_sdk::context::StrategyContext::cancel_order+0xb1>
   b3ee4:	45 31 ed             	xor    r13d,r13d
   b3ee7:	41 c6 04 24 00       	mov    BYTE PTR [r12],0x0
   b3eec:	4d 85 ff             	test   r15,r15
   b3eef:	74 11                	je     b3f02 <future_backtest_sdk::context::StrategyContext::cancel_order+0x82>
   b3ef1:	ba 01 00 00 00       	mov    edx,0x1
   b3ef6:	4c 89 e7             	mov    rdi,r12
   b3ef9:	4c 89 fe             	mov    rsi,r15
   b3efc:	ff 15 76 fd 04 00    	call   QWORD PTR [rip+0x4fd76]        # 103c78 <_DYNAMIC+0x218>
   b3f02:	41 c6 06 00          	mov    BYTE PTR [r14],0x0
   b3f06:	48 85 db             	test   rbx,rbx
   b3f09:	74 11                	je     b3f1c <future_backtest_sdk::context::StrategyContext::cancel_order+0x9c>
   b3f0b:	ba 01 00 00 00       	mov    edx,0x1
   b3f10:	4c 89 f7             	mov    rdi,r14
   b3f13:	48 89 de             	mov    rsi,rbx
   b3f16:	ff 15 5c fd 04 00    	call   QWORD PTR [rip+0x4fd5c]        # 103c78 <_DYNAMIC+0x218>
   b3f1c:	4c 89 e8             	mov    rax,r13
   b3f1f:	48 81 c4 88 00 00 00 	add    rsp,0x88
   b3f26:	5b                   	pop    rbx
   b3f27:	41 5c                	pop    r12
   b3f29:	41 5d                	pop    r13
   b3f2b:	41 5e                	pop    r14
   b3f2d:	41 5f                	pop    r15
   b3f2f:	5d                   	pop    rbp
   b3f30:	c3                   	ret    
   b3f31:	48 89 e0             	mov    rax,rsp
   b3f34:	48 89 44 24 20       	mov    QWORD PTR [rsp+0x20],rax
   b3f39:	48 8d 05 e0 18 00 00 	lea    rax,[rip+0x18e0]        # b5820 <<&T as core::fmt::Display>::fmt>
   b3f40:	48 89 44 24 28       	mov    QWORD PTR [rsp+0x28],rax
   b3f45:	48 8d 4c 24 10       	lea    rcx,[rsp+0x10]
   b3f4a:	48 89 4c 24 30       	mov    QWORD PTR [rsp+0x30],rcx
   b3f4f:	48 89 44 24 38       	mov    QWORD PTR [rsp+0x38],rax
   b3f54:	48 8d 05 7d c7 04 00 	lea    rax,[rip+0x4c77d]        # 1006d8 <anon.e69fa87c05f933b9fe1f9c21a2065ba3.7.llvm.603266175965479879+0x538>
   b3f5b:	48 89 44 24 40       	mov    QWORD PTR [rsp+0x40],rax
   b3f60:	48 c7 44 24 48 02 00 	mov    QWORD PTR [rsp+0x48],0x2
   b3f67:	00 00 
   b3f69:	48 c7 44 24 60 00 00 	mov    QWORD PTR [rsp+0x60],0x0
   b3f70:	00 00 
   b3f72:	48 8d 44 24 20       	lea    rax,[rsp+0x20]
   b3f77:	48 89 44 24 50       	mov    QWORD PTR [rsp+0x50],rax
   b3f7c:	48 c7 44 24 58 02 00 	mov    QWORD PTR [rsp+0x58],0x2
   b3f83:	00 00 
   b3f85:	48 8d 7c 24 70       	lea    rdi,[rsp+0x70]
   b3f8a:	48 8d 74 24 40       	lea    rsi,[rsp+0x40]
   b3f8f:	ff 15 83 fd 04 00    	call   QWORD PTR [rip+0x4fd83]        # 103d18 <_DYNAMIC+0x2b8>
   b3f95:	48 8d 7c 24 70       	lea    rdi,[rsp+0x70]
   b3f9a:	e8 f1 0a 00 00       	call   b4a90 <anyhow::error::<impl anyhow::Error>::msg>
   b3f9f:	49 89 c5             	mov    r13,rax
   b3fa2:	41 c6 04 24 00       	mov    BYTE PTR [r12],0x0
   b3fa7:	4d 85 ff             	test   r15,r15
   b3faa:	0f 85 41 ff ff ff    	jne    b3ef1 <future_backtest_sdk::context::StrategyContext::cancel_order+0x71>
   b3fb0:	e9 4d ff ff ff       	jmp    b3f02 <future_backtest_sdk::context::StrategyContext::cancel_order+0x82>
   b3fb5:	49 89 c5             	mov    r13,rax
   b3fb8:	41 c6 04 24 00       	mov    BYTE PTR [r12],0x0
   b3fbd:	4d 85 ff             	test   r15,r15
   b3fc0:	74 16                	je     b3fd8 <future_backtest_sdk::context::StrategyContext::cancel_order+0x158>
   b3fc2:	ba 01 00 00 00       	mov    edx,0x1
   b3fc7:	4c 89 e7             	mov    rdi,r12
   b3fca:	4c 89 fe             	mov    rsi,r15
   b3fcd:	ff 15 a5 fc 04 00    	call   QWORD PTR [rip+0x4fca5]        # 103c78 <_DYNAMIC+0x218>
   b3fd3:	eb 03                	jmp    b3fd8 <future_backtest_sdk::context::StrategyContext::cancel_order+0x158>
   b3fd5:	49 89 c5             	mov    r13,rax
   b3fd8:	41 c6 06 00          	mov    BYTE PTR [r14],0x0
   b3fdc:	48 85 db             	test   rbx,rbx
   b3fdf:	74 11                	je     b3ff2 <future_backtest_sdk::context::StrategyContext::cancel_order+0x172>
   b3fe1:	ba 01 00 00 00       	mov    edx,0x1
   b3fe6:	4c 89 f7             	mov    rdi,r14
   b3fe9:	48 89 de             	mov    rsi,rbx
   b3fec:	ff 15 86 fc 04 00    	call   QWORD PTR [rip+0x4fc86]        # 103c78 <_DYNAMIC+0x218>
   b3ff2:	4c 89 ef             	mov    rdi,r13
   b3ff5:	e8 86 85 04 00       	call   fc580 <_Unwind_Resume@plt>
   b3ffa:	cc                   	int3   
   b3ffb:	cc                   	int3   
   b3ffc:	cc                   	int3   
   b3ffd:	cc                   	int3   
   b3ffe:	cc                   	int3   
   b3fff:	cc                   	int3   

00000000000b39a0 <future_backtest_sdk::context::StrategyContext::pending_orders>:
   b39a0:	55                   	push   rbp
   b39a1:	41 57                	push   r15
   b39a3:	41 56                	push   r14
   b39a5:	41 55                	push   r13
   b39a7:	41 54                	push   r12
   b39a9:	53                   	push   rbx
   b39aa:	48 81 ec 00 10 00 00 	sub    rsp,0x1000
   b39b1:	48 c7 04 24 00 00 00 	mov    QWORD PTR [rsp],0x0
   b39b8:	00 
   b39b9:	48 81 ec f8 00 00 00 	sub    rsp,0xf8
   b39c0:	48 89 74 24 08       	mov    QWORD PTR [rsp+0x8],rsi
   b39c5:	48 89 7c 24 28       	mov    QWORD PTR [rsp+0x28],rdi
   b39ca:	48 89 54 24 58       	mov    QWORD PTR [rsp+0x58],rdx
   b39cf:	48 89 d7             	mov    rdi,rdx
   b39d2:	48 89 4c 24 60       	mov    QWORD PTR [rsp+0x60],rcx
   b39d7:	48 89 ce             	mov    rsi,rcx
   b39da:	ff 15 c0 03 05 00    	call   QWORD PTR [rip+0x503c0]        # 103da0 <_DYNAMIC+0x340>
   b39e0:	49 89 c4             	mov    r12,rax
   b39e3:	48 89 54 24 38       	mov    QWORD PTR [rsp+0x38],rdx
   b39e8:	0f 57 c0             	xorps  xmm0,xmm0
   b39eb:	0f 29 84 24 e0 00 00 	movaps XMMWORD PTR [rsp+0xe0],xmm0
   b39f2:	00 
   b39f3:	0f 29 84 24 d0 00 00 	movaps XMMWORD PTR [rsp+0xd0],xmm0
   b39fa:	00 
   b39fb:	0f 29 84 24 c0 00 00 	movaps XMMWORD PTR [rsp+0xc0],xmm0
   b3a02:	00 
   b3a03:	0f 29 84 24 b0 00 00 	movaps XMMWORD PTR [rsp+0xb0],xmm0
   b3a0a:	00 
   b3a0b:	48 8d bc 24 f8 00 00 	lea    rdi,[rsp+0xf8]
   b3a12:	00 
   b3a13:	4c 8b 3d 4e 05 05 00 	mov    r15,QWORD PTR [rip+0x5054e]        # 103f68 <memset@GLIBC_2.2.5>
   b3a1a:	ba 00 02 00 00       	mov    edx,0x200
   b3a1f:	31 f6                	xor    esi,esi
   b3a21:	41 ff d7             	call   r15
   b3a24:	48 8d bc 24 f8 02 00 	lea    rdi,[rsp+0x2f8]
   b3a2b:	00 
   b3a2c:	ba 00 02 00 00       	mov    edx,0x200
   b3a31:	31 f6                	xor    esi,esi
   b3a33:	41 ff d7             	call   r15
   b3a36:	4c 8d ac 24 f8 04 00 	lea    r13,[rsp+0x4f8]
   b3a3d:	00 
   b3a3e:	ba 00 02 00 00       	mov    edx,0x200
   b3a43:	4c 89 ef             	mov    rdi,r13
   b3a46:	31 f6                	xor    esi,esi
   b3a48:	41 ff d7             	call   r15
   b3a4b:	48 8d 9c 24 f8 06 00 	lea    rbx,[rsp+0x6f8]
   b3a52:	00 
   b3a53:	ba 00 02 00 00       	mov    edx,0x200
   b3a58:	48 89 df             	mov    rdi,rbx
   b3a5b:	31 f6                	xor    esi,esi
   b3a5d:	41 ff d7             	call   r15
   b3a60:	48 8d ac 24 f8 08 00 	lea    rbp,[rsp+0x8f8]
   b3a67:	00 
   b3a68:	41 be 00 08 00 00    	mov    r14d,0x800
   b3a6e:	ba 00 08 00 00       	mov    edx,0x800
   b3a73:	48 89 ef             	mov    rdi,rbp
   b3a76:	31 f6                	xor    esi,esi
   b3a78:	41 ff d7             	call   r15
   b3a7b:	48 8b 44 24 08       	mov    rax,QWORD PTR [rsp+0x8]
   b3a80:	48 8b 78 30          	mov    rdi,QWORD PTR [rax+0x30]
   b3a84:	48 8d 94 24 b0 00 00 	lea    rdx,[rsp+0xb0]
   b3a8b:	00 
   b3a8c:	4c 89 64 24 30       	mov    QWORD PTR [rsp+0x30],r12
   b3a91:	4c 89 e6             	mov    rsi,r12
   b3a94:	48 8d 8c 24 f8 00 00 	lea    rcx,[rsp+0xf8]
   b3a9b:	00 
   b3a9c:	4c 8d 84 24 f8 02 00 	lea    r8,[rsp+0x2f8]
   b3aa3:	00 
   b3aa4:	4d 89 e9             	mov    r9,r13
   b3aa7:	6a 40                	push   0x40
   b3aa9:	68 00 08 00 00       	push   0x800
   b3aae:	55                   	push   rbp
   b3aaf:	53                   	push   rbx
   b3ab0:	ff 15 72 09 05 00    	call   QWORD PTR [rip+0x50972]        # 104428 <fb_ctx_pending_orders@Base>
   b3ab6:	48 83 c4 20          	add    rsp,0x20
   b3aba:	48 c7 44 24 10 00 00 	mov    QWORD PTR [rsp+0x10],0x0
   b3ac1:	00 00 
   b3ac3:	48 c7 44 24 18 08 00 	mov    QWORD PTR [rsp+0x18],0x8
   b3aca:	00 00 
   b3acc:	48 c7 44 24 20 00 00 	mov    QWORD PTR [rsp+0x20],0x0
   b3ad3:	00 00 
   b3ad5:	4c 63 e8             	movsxd r13,eax
   b3ad8:	48 8d 84 24 f8 10 00 	lea    rax,[rsp+0x10f8]
   b3adf:	00 
   b3ae0:	31 d2                	xor    edx,edx
   b3ae2:	66 66 66 66 66 2e 0f 	data16 data16 data16 data16 cs nop WORD PTR [rax+rax*1+0x0]
   b3ae9:	1f 84 00 00 00 00 00 
   b3af0:	44 0f b6 64 15 00    	movzx  r12d,BYTE PTR [rbp+rdx*1+0x0]
   b3af6:	45 84 e4             	test   r12b,r12b
   b3af9:	74 25                	je     b3b20 <future_backtest_sdk::context::StrategyContext::pending_orders+0x180>
   b3afb:	48 8d 0c 2a          	lea    rcx,[rdx+rbp*1]
   b3aff:	48 ff c1             	inc    rcx
   b3b02:	48 ff c2             	inc    rdx
   b3b05:	48 39 c1             	cmp    rcx,rax
   b3b08:	75 e6                	jne    b3af0 <future_backtest_sdk::context::StrategyContext::pending_orders+0x150>
   b3b0a:	49 89 ef             	mov    r15,rbp
   b3b0d:	4c 89 f3             	mov    rbx,r14
   b3b10:	4c 89 f2             	mov    rdx,r14
   b3b13:	eb 24                	jmp    b3b39 <future_backtest_sdk::context::StrategyContext::pending_orders+0x199>
   b3b15:	66 66 2e 0f 1f 84 00 	data16 cs nop WORD PTR [rax+rax*1+0x0]
   b3b1c:	00 00 00 00 
   b3b20:	48 89 d3             	mov    rbx,rdx
   b3b23:	48 f7 d3             	not    rbx
   b3b26:	4c 01 f3             	add    rbx,r14
   b3b29:	4c 8d 3c 2a          	lea    r15,[rdx+rbp*1]
   b3b2d:	49 ff c7             	inc    r15
   b3b30:	48 85 d2             	test   rdx,rdx
   b3b33:	0f 84 e3 00 00 00    	je     b3c1c <future_backtest_sdk::context::StrategyContext::pending_orders+0x27c>
   b3b39:	48 8d 7c 24 68       	lea    rdi,[rsp+0x68]
   b3b3e:	48 89 ee             	mov    rsi,rbp
   b3b41:	ff 15 c1 06 05 00    	call   QWORD PTR [rip+0x506c1]        # 104208 <_DYNAMIC+0x7a8>
   b3b47:	83 7c 24 68 01       	cmp    DWORD PTR [rsp+0x68],0x1
   b3b4c:	75 22                	jne    b3b70 <future_backtest_sdk::context::StrategyContext::pending_orders+0x1d0>
   b3b4e:	4c 8b 74 24 20       	mov    r14,QWORD PTR [rsp+0x20]
   b3b53:	45 84 e4             	test   r12b,r12b
   b3b56:	0f 84 bb 00 00 00    	je     b3c17 <future_backtest_sdk::context::StrategyContext::pending_orders+0x277>
   b3b5c:	e9 ce 00 00 00       	jmp    b3c2f <future_backtest_sdk::context::StrategyContext::pending_orders+0x28f>
   b3b61:	66 66 66 66 66 66 2e 	data16 data16 data16 data16 data16 cs nop WORD PTR [rax+rax*1+0x0]
   b3b68:	0f 1f 84 00 00 00 00 
   b3b6f:	00 
   b3b70:	48 8b 6c 24 78       	mov    rbp,QWORD PTR [rsp+0x78]
   b3b75:	48 85 ed             	test   rbp,rbp
   b3b78:	0f 88 c0 00 00 00    	js     b3c3e <future_backtest_sdk::context::StrategyContext::pending_orders+0x29e>
   b3b7e:	48 8b 74 24 70       	mov    rsi,QWORD PTR [rsp+0x70]
   b3b83:	74 38                	je     b3bbd <future_backtest_sdk::context::StrategyContext::pending_orders+0x21d>
   b3b85:	48 89 74 24 08       	mov    QWORD PTR [rsp+0x8],rsi
   b3b8a:	4d 89 ee             	mov    r14,r13
   b3b8d:	ff 15 05 01 05 00    	call   QWORD PTR [rip+0x50105]        # 103c98 <_DYNAMIC+0x238>
   b3b93:	41 bd 01 00 00 00    	mov    r13d,0x1
   b3b99:	be 01 00 00 00       	mov    esi,0x1
   b3b9e:	48 89 ef             	mov    rdi,rbp
   b3ba1:	ff 15 c9 00 05 00    	call   QWORD PTR [rip+0x500c9]        # 103c70 <_DYNAMIC+0x210>
   b3ba7:	48 85 c0             	test   rax,rax
   b3baa:	0f 84 43 02 00 00    	je     b3df3 <future_backtest_sdk::context::StrategyContext::pending_orders+0x453>
   b3bb0:	48 89 c7             	mov    rdi,rax
   b3bb3:	4d 89 f5             	mov    r13,r14
   b3bb6:	48 8b 74 24 08       	mov    rsi,QWORD PTR [rsp+0x8]
   b3bbb:	eb 05                	jmp    b3bc2 <future_backtest_sdk::context::StrategyContext::pending_orders+0x222>
   b3bbd:	bf 01 00 00 00       	mov    edi,0x1
   b3bc2:	48 89 7c 24 08       	mov    QWORD PTR [rsp+0x8],rdi
   b3bc7:	48 89 ea             	mov    rdx,rbp
   b3bca:	ff 15 f8 00 05 00    	call   QWORD PTR [rip+0x500f8]        # 103cc8 <memcpy@GLIBC_2.14>
   b3bd0:	4c 8b 74 24 20       	mov    r14,QWORD PTR [rsp+0x20]
   b3bd5:	4c 3b 74 24 10       	cmp    r14,QWORD PTR [rsp+0x10]
   b3bda:	75 12                	jne    b3bee <future_backtest_sdk::context::StrategyContext::pending_orders+0x24e>
   b3bdc:	48 8d 7c 24 10       	lea    rdi,[rsp+0x10]
   b3be1:	48 8d 35 d8 ca 04 00 	lea    rsi,[rip+0x4cad8]        # 1006c0 <anon.e69fa87c05f933b9fe1f9c21a2065ba3.7.llvm.603266175965479879+0x520>
   b3be8:	ff 15 5a 01 05 00    	call   QWORD PTR [rip+0x5015a]        # 103d48 <_DYNAMIC+0x2e8>
   b3bee:	48 8b 44 24 18       	mov    rax,QWORD PTR [rsp+0x18]
   b3bf3:	4b 8d 0c 76          	lea    rcx,[r14+r14*2]
   b3bf7:	48 89 2c c8          	mov    QWORD PTR [rax+rcx*8],rbp
   b3bfb:	48 8b 54 24 08       	mov    rdx,QWORD PTR [rsp+0x8]
   b3c00:	48 89 54 c8 08       	mov    QWORD PTR [rax+rcx*8+0x8],rdx
   b3c05:	48 89 6c c8 10       	mov    QWORD PTR [rax+rcx*8+0x10],rbp
   b3c0a:	49 ff c6             	inc    r14
   b3c0d:	4c 89 74 24 20       	mov    QWORD PTR [rsp+0x20],r14
   b3c12:	45 84 e4             	test   r12b,r12b
   b3c15:	75 18                	jne    b3c2f <future_backtest_sdk::context::StrategyContext::pending_orders+0x28f>
   b3c17:	4d 39 ee             	cmp    r14,r13
   b3c1a:	73 13                	jae    b3c2f <future_backtest_sdk::context::StrategyContext::pending_orders+0x28f>
   b3c1c:	49 8d 04 1f          	lea    rax,[r15+rbx*1]
   b3c20:	4c 89 fd             	mov    rbp,r15
   b3c23:	49 89 de             	mov    r14,rbx
   b3c26:	48 85 db             	test   rbx,rbx
   b3c29:	0f 85 b1 fe ff ff    	jne    b3ae0 <future_backtest_sdk::context::StrategyContext::pending_orders+0x140>
   b3c2f:	4c 8b 74 24 60       	mov    r14,QWORD PTR [rsp+0x60]
   b3c34:	4d 85 f6             	test   r14,r14
   b3c37:	79 1f                	jns    b3c58 <future_backtest_sdk::context::StrategyContext::pending_orders+0x2b8>
   b3c39:	45 31 ed             	xor    r13d,r13d
   b3c3c:	eb 08                	jmp    b3c46 <future_backtest_sdk::context::StrategyContext::pending_orders+0x2a6>
   b3c3e:	45 31 ed             	xor    r13d,r13d
   b3c41:	48 8b 74 24 08       	mov    rsi,QWORD PTR [rsp+0x8]
   b3c46:	48 8d 15 1b c9 04 00 	lea    rdx,[rip+0x4c91b]        # 100568 <anon.e69fa87c05f933b9fe1f9c21a2065ba3.7.llvm.603266175965479879+0x3c8>
   b3c4d:	4c 89 ef             	mov    rdi,r13
   b3c50:	ff 15 82 00 05 00    	call   QWORD PTR [rip+0x50082]        # 103cd8 <_DYNAMIC+0x278>
   b3c56:	0f 0b                	ud2    
   b3c58:	74 33                	je     b3c8d <future_backtest_sdk::context::StrategyContext::pending_orders+0x2ed>
   b3c5a:	4d 89 ef             	mov    r15,r13
   b3c5d:	ff 15 35 00 05 00    	call   QWORD PTR [rip+0x50035]        # 103c98 <_DYNAMIC+0x238>
   b3c63:	41 bd 01 00 00 00    	mov    r13d,0x1
   b3c69:	be 01 00 00 00       	mov    esi,0x1
   b3c6e:	4c 89 f7             	mov    rdi,r14
   b3c71:	ff 15 f9 ff 04 00    	call   QWORD PTR [rip+0x4fff9]        # 103c70 <_DYNAMIC+0x210>
   b3c77:	48 85 c0             	test   rax,rax
   b3c7a:	4c 8b 64 24 28       	mov    r12,QWORD PTR [rsp+0x28]
   b3c7f:	0f 84 76 01 00 00    	je     b3dfb <future_backtest_sdk::context::StrategyContext::pending_orders+0x45b>
   b3c85:	48 89 c3             	mov    rbx,rax
   b3c88:	4d 89 fd             	mov    r13,r15
   b3c8b:	eb 0a                	jmp    b3c97 <future_backtest_sdk::context::StrategyContext::pending_orders+0x2f7>
   b3c8d:	bb 01 00 00 00       	mov    ebx,0x1
   b3c92:	4c 8b 64 24 28       	mov    r12,QWORD PTR [rsp+0x28]
   b3c97:	48 89 df             	mov    rdi,rbx
   b3c9a:	48 8b 74 24 58       	mov    rsi,QWORD PTR [rsp+0x58]
   b3c9f:	4c 89 f2             	mov    rdx,r14
   b3ca2:	ff 15 20 00 05 00    	call   QWORD PTR [rip+0x50020]        # 103cc8 <memcpy@GLIBC_2.14>
   b3ca8:	4c 89 74 24 40       	mov    QWORD PTR [rsp+0x40],r14
   b3cad:	48 89 5c 24 48       	mov    QWORD PTR [rsp+0x48],rbx
   b3cb2:	4c 89 74 24 50       	mov    QWORD PTR [rsp+0x50],r14
   b3cb7:	48 8d 44 24 10       	lea    rax,[rsp+0x10]
   b3cbc:	48 89 44 24 68       	mov    QWORD PTR [rsp+0x68],rax
   b3cc1:	48 8d 44 24 40       	lea    rax,[rsp+0x40]
   b3cc6:	48 89 44 24 70       	mov    QWORD PTR [rsp+0x70],rax
   b3ccb:	48 8d 84 24 b0 00 00 	lea    rax,[rsp+0xb0]
   b3cd2:	00 
   b3cd3:	48 89 44 24 78       	mov    QWORD PTR [rsp+0x78],rax
   b3cd8:	48 8d 84 24 f8 00 00 	lea    rax,[rsp+0xf8]
   b3cdf:	00 
   b3ce0:	48 89 84 24 80 00 00 	mov    QWORD PTR [rsp+0x80],rax
   b3ce7:	00 
   b3ce8:	48 8d 84 24 f8 02 00 	lea    rax,[rsp+0x2f8]
   b3cef:	00 
   b3cf0:	48 89 84 24 88 00 00 	mov    QWORD PTR [rsp+0x88],rax
   b3cf7:	00 
   b3cf8:	48 8d 84 24 f8 04 00 	lea    rax,[rsp+0x4f8]
   b3cff:	00 
   b3d00:	48 89 84 24 90 00 00 	mov    QWORD PTR [rsp+0x90],rax
   b3d07:	00 
   b3d08:	48 8d 84 24 f8 06 00 	lea    rax,[rsp+0x6f8]
   b3d0f:	00 
   b3d10:	48 89 84 24 98 00 00 	mov    QWORD PTR [rsp+0x98],rax
   b3d17:	00 
   b3d18:	48 c7 84 24 a0 00 00 	mov    QWORD PTR [rsp+0xa0],0x0
   b3d1f:	00 00 00 00 00 
   b3d24:	4c 89 ac 24 a8 00 00 	mov    QWORD PTR [rsp+0xa8],r13
   b3d2b:	00 
   b3d2c:	48 8d 15 05 c8 04 00 	lea    rdx,[rip+0x4c805]        # 100538 <anon.e69fa87c05f933b9fe1f9c21a2065ba3.7.llvm.603266175965479879+0x398>
   b3d33:	48 8d 74 24 68       	lea    rsi,[rsp+0x68]
   b3d38:	4c 89 e7             	mov    rdi,r12
   b3d3b:	e8 10 22 00 00       	call   b5f50 <<alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter>
   b3d40:	48 8b 74 24 40       	mov    rsi,QWORD PTR [rsp+0x40]
   b3d45:	48 85 f6             	test   rsi,rsi
   b3d48:	74 10                	je     b3d5a <future_backtest_sdk::context::StrategyContext::pending_orders+0x3ba>
   b3d4a:	48 8b 7c 24 48       	mov    rdi,QWORD PTR [rsp+0x48]
   b3d4f:	ba 01 00 00 00       	mov    edx,0x1
   b3d54:	ff 15 1e ff 04 00    	call   QWORD PTR [rip+0x4ff1e]        # 103c78 <_DYNAMIC+0x218>
   b3d5a:	48 8b 5c 24 20       	mov    rbx,QWORD PTR [rsp+0x20]
   b3d5f:	48 85 db             	test   rbx,rbx
   b3d62:	74 3b                	je     b3d9f <future_backtest_sdk::context::StrategyContext::pending_orders+0x3ff>
   b3d64:	4c 8b 74 24 18       	mov    r14,QWORD PTR [rsp+0x18]
   b3d69:	49 83 c6 08          	add    r14,0x8
   b3d6d:	4c 8b 3d 04 ff 04 00 	mov    r15,QWORD PTR [rip+0x4ff04]        # 103c78 <_DYNAMIC+0x218>
   b3d74:	eb 13                	jmp    b3d89 <future_backtest_sdk::context::StrategyContext::pending_orders+0x3e9>
   b3d76:	66 2e 0f 1f 84 00 00 	cs nop WORD PTR [rax+rax*1+0x0]
   b3d7d:	00 00 00 
   b3d80:	49 83 c6 18          	add    r14,0x18
   b3d84:	48 ff cb             	dec    rbx
   b3d87:	74 16                	je     b3d9f <future_backtest_sdk::context::StrategyContext::pending_orders+0x3ff>
   b3d89:	49 8b 76 f8          	mov    rsi,QWORD PTR [r14-0x8]
   b3d8d:	48 85 f6             	test   rsi,rsi
   b3d90:	74 ee                	je     b3d80 <future_backtest_sdk::context::StrategyContext::pending_orders+0x3e0>
   b3d92:	49 8b 3e             	mov    rdi,QWORD PTR [r14]
   b3d95:	ba 01 00 00 00       	mov    edx,0x1
   b3d9a:	41 ff d7             	call   r15
   b3d9d:	eb e1                	jmp    b3d80 <future_backtest_sdk::context::StrategyContext::pending_orders+0x3e0>
   b3d9f:	48 8b 44 24 10       	mov    rax,QWORD PTR [rsp+0x10]
   b3da4:	48 85 c0             	test   rax,rax
   b3da7:	74 18                	je     b3dc1 <future_backtest_sdk::context::StrategyContext::pending_orders+0x421>
   b3da9:	48 8b 7c 24 18       	mov    rdi,QWORD PTR [rsp+0x18]
   b3dae:	48 c1 e0 03          	shl    rax,0x3
   b3db2:	48 8d 34 40          	lea    rsi,[rax+rax*2]
   b3db6:	ba 08 00 00 00       	mov    edx,0x8
   b3dbb:	ff 15 b7 fe 04 00    	call   QWORD PTR [rip+0x4feb7]        # 103c78 <_DYNAMIC+0x218>
   b3dc1:	48 8b 7c 24 30       	mov    rdi,QWORD PTR [rsp+0x30]
   b3dc6:	c6 07 00             	mov    BYTE PTR [rdi],0x0
   b3dc9:	48 8b 74 24 38       	mov    rsi,QWORD PTR [rsp+0x38]
   b3dce:	48 85 f6             	test   rsi,rsi
   b3dd1:	74 0b                	je     b3dde <future_backtest_sdk::context::StrategyContext::pending_orders+0x43e>
   b3dd3:	ba 01 00 00 00       	mov    edx,0x1
   b3dd8:	ff 15 9a fe 04 00    	call   QWORD PTR [rip+0x4fe9a]        # 103c78 <_DYNAMIC+0x218>
   b3dde:	4c 89 e0             	mov    rax,r12
   b3de1:	48 81 c4 f8 10 00 00 	add    rsp,0x10f8
   b3de8:	5b                   	pop    rbx
   b3de9:	41 5c                	pop    r12
   b3deb:	41 5d                	pop    r13
   b3ded:	41 5e                	pop    r14
   b3def:	41 5f                	pop    r15
   b3df1:	5d                   	pop    rbp
   b3df2:	c3                   	ret    
   b3df3:	48 89 ee             	mov    rsi,rbp
   b3df6:	e9 4b fe ff ff       	jmp    b3c46 <future_backtest_sdk::context::StrategyContext::pending_orders+0x2a6>
   b3dfb:	4c 89 f6             	mov    rsi,r14
   b3dfe:	e9 43 fe ff ff       	jmp    b3c46 <future_backtest_sdk::context::StrategyContext::pending_orders+0x2a6>
   b3e03:	48 89 c3             	mov    rbx,rax
   b3e06:	48 8b 74 24 40       	mov    rsi,QWORD PTR [rsp+0x40]
   b3e0b:	48 85 f6             	test   rsi,rsi
   b3e0e:	74 34                	je     b3e44 <future_backtest_sdk::context::StrategyContext::pending_orders+0x4a4>
   b3e10:	48 8b 7c 24 48       	mov    rdi,QWORD PTR [rsp+0x48]
   b3e15:	ba 01 00 00 00       	mov    edx,0x1
   b3e1a:	ff 15 58 fe 04 00    	call   QWORD PTR [rip+0x4fe58]        # 103c78 <_DYNAMIC+0x218>
   b3e20:	eb 22                	jmp    b3e44 <future_backtest_sdk::context::StrategyContext::pending_orders+0x4a4>
   b3e22:	48 89 c3             	mov    rbx,rax
   b3e25:	48 85 ed             	test   rbp,rbp
   b3e28:	74 1a                	je     b3e44 <future_backtest_sdk::context::StrategyContext::pending_orders+0x4a4>
   b3e2a:	ba 01 00 00 00       	mov    edx,0x1
   b3e2f:	48 8b 7c 24 08       	mov    rdi,QWORD PTR [rsp+0x8]
   b3e34:	48 89 ee             	mov    rsi,rbp
   b3e37:	ff 15 3b fe 04 00    	call   QWORD PTR [rip+0x4fe3b]        # 103c78 <_DYNAMIC+0x218>
   b3e3d:	eb 05                	jmp    b3e44 <future_backtest_sdk::context::StrategyContext::pending_orders+0x4a4>
   b3e3f:	eb 00                	jmp    b3e41 <future_backtest_sdk::context::StrategyContext::pending_orders+0x4a1>
   b3e41:	48 89 c3             	mov    rbx,rax
   b3e44:	48 8d 7c 24 10       	lea    rdi,[rsp+0x10]
   b3e49:	e8 32 e5 ff ff       	call   b2380 <core::ptr::drop_in_place<alloc::vec::Vec<alloc::string::String>>>
   b3e4e:	48 8b 7c 24 30       	mov    rdi,QWORD PTR [rsp+0x30]
   b3e53:	c6 07 00             	mov    BYTE PTR [rdi],0x0
   b3e56:	48 8b 74 24 38       	mov    rsi,QWORD PTR [rsp+0x38]
   b3e5b:	48 85 f6             	test   rsi,rsi
   b3e5e:	74 0b                	je     b3e6b <future_backtest_sdk::context::StrategyContext::pending_orders+0x4cb>
   b3e60:	ba 01 00 00 00       	mov    edx,0x1
   b3e65:	ff 15 0d fe 04 00    	call   QWORD PTR [rip+0x4fe0d]        # 103c78 <_DYNAMIC+0x218>
   b3e6b:	48 89 df             	mov    rdi,rbx
   b3e6e:	e8 0d 87 04 00       	call   fc580 <_Unwind_Resume@plt>
   b3e73:	cc                   	int3   
   b3e74:	cc                   	int3   
   b3e75:	cc                   	int3   
   b3e76:	cc                   	int3   
   b3e77:	cc                   	int3   
   b3e78:	cc                   	int3   
   b3e79:	cc                   	int3   
   b3e7a:	cc                   	int3   
   b3e7b:	cc                   	int3   
   b3e7c:	cc                   	int3   
   b3e7d:	cc                   	int3   
   b3e7e:	cc                   	int3   
   b3e7f:	cc                   	int3   

00000000000b3620 <future_backtest_sdk::context::StrategyContext::cancel_pending_ids>:
   b3620:	55                   	push   rbp
   b3621:	41 57                	push   r15
   b3623:	41 56                	push   r14
   b3625:	41 55                	push   r13
   b3627:	41 54                	push   r12
   b3629:	53                   	push   rbx
   b362a:	48 83 ec 58          	sub    rsp,0x58
   b362e:	48 89 f3             	mov    rbx,rsi
   b3631:	48 89 7c 24 10       	mov    QWORD PTR [rsp+0x10],rdi
   b3636:	48 89 d7             	mov    rdi,rdx
   b3639:	48 89 ce             	mov    rsi,rcx
   b363c:	ff 15 5e 07 05 00    	call   QWORD PTR [rip+0x5075e]        # 103da0 <_DYNAMIC+0x340>
   b3642:	49 89 c4             	mov    r12,rax
   b3645:	49 89 d6             	mov    r14,rdx
   b3648:	ff 15 4a 06 05 00    	call   QWORD PTR [rip+0x5064a]        # 103c98 <_DYNAMIC+0x238>
   b364e:	bf 00 40 00 00       	mov    edi,0x4000
   b3653:	be 01 00 00 00       	mov    esi,0x1
   b3658:	ff 15 2a 06 05 00    	call   QWORD PTR [rip+0x5062a]        # 103c88 <_DYNAMIC+0x228>
   b365e:	48 85 c0             	test   rax,rax
   b3661:	0f 84 1f 02 00 00    	je     b3886 <future_backtest_sdk::context::StrategyContext::cancel_pending_ids+0x266>
   b3667:	49 89 c7             	mov    r15,rax
   b366a:	48 8b 7b 30          	mov    rdi,QWORD PTR [rbx+0x30]
   b366e:	4c 89 e6             	mov    rsi,r12
   b3671:	48 89 c2             	mov    rdx,rax
   b3674:	b9 00 40 00 00       	mov    ecx,0x4000
   b3679:	ff 15 99 0d 05 00    	call   QWORD PTR [rip+0x50d99]        # 104418 <fb_ctx_cancel_pending_ids@Base>
   b367f:	85 c0                	test   eax,eax
   b3681:	0f 8e 44 01 00 00    	jle    b37cb <future_backtest_sdk::context::StrategyContext::cancel_pending_ids+0x1ab>
   b3687:	4c 89 24 24          	mov    QWORD PTR [rsp],r12
   b368b:	4c 89 74 24 08       	mov    QWORD PTR [rsp+0x8],r14
   b3690:	89 c5                	mov    ebp,eax
   b3692:	48 8d 04 ed 00 00 00 	lea    rax,[rbp*8+0x0]
   b3699:	00 
   b369a:	48 8d 1c 40          	lea    rbx,[rax+rax*2]
   b369e:	ff 15 f4 05 05 00    	call   QWORD PTR [rip+0x505f4]        # 103c98 <_DYNAMIC+0x238>
   b36a4:	be 08 00 00 00       	mov    esi,0x8
   b36a9:	48 89 df             	mov    rdi,rbx
   b36ac:	ff 15 be 05 05 00    	call   QWORD PTR [rip+0x505be]        # 103c70 <_DYNAMIC+0x210>
   b36b2:	48 85 c0             	test   rax,rax
   b36b5:	0f 84 e4 01 00 00    	je     b389f <future_backtest_sdk::context::StrategyContext::cancel_pending_ids+0x27f>
   b36bb:	48 89 6c 24 18       	mov    QWORD PTR [rsp+0x18],rbp
   b36c0:	48 89 44 24 20       	mov    QWORD PTR [rsp+0x20],rax
   b36c5:	48 c7 44 24 28 00 00 	mov    QWORD PTR [rsp+0x28],0x0
   b36cc:	00 00 
   b36ce:	45 31 f6             	xor    r14d,r14d
   b36d1:	31 f6                	xor    esi,esi
   b36d3:	31 d2                	xor    edx,edx
   b36d5:	eb 40                	jmp    b3717 <future_backtest_sdk::context::StrategyContext::cancel_pending_ids+0xf7>
   b36d7:	48 8b 44 24 20       	mov    rax,QWORD PTR [rsp+0x20]
   b36dc:	4b 8d 0c 76          	lea    rcx,[r14+r14*2]
   b36e0:	4c 89 2c c8          	mov    QWORD PTR [rax+rcx*8],r13
   b36e4:	48 8b 54 24 38       	mov    rdx,QWORD PTR [rsp+0x38]
   b36e9:	48 89 54 c8 08       	mov    QWORD PTR [rax+rcx*8+0x8],rdx
   b36ee:	48 89 5c c8 10       	mov    QWORD PTR [rax+rcx*8+0x10],rbx
   b36f3:	49 ff c6             	inc    r14
   b36f6:	4c 89 74 24 28       	mov    QWORD PTR [rsp+0x28],r14
   b36fb:	4c 89 e6             	mov    rsi,r12
   b36fe:	49 39 ee             	cmp    r14,rbp
   b3701:	0f 83 41 01 00 00    	jae    b3848 <future_backtest_sdk::context::StrategyContext::cancel_pending_ids+0x228>
   b3707:	4c 89 e2             	mov    rdx,r12
   b370a:	49 81 fc 00 40 00 00 	cmp    r12,0x4000
   b3711:	0f 84 31 01 00 00    	je     b3848 <future_backtest_sdk::context::StrategyContext::cancel_pending_ids+0x228>
   b3717:	4c 8d 62 01          	lea    r12,[rdx+0x1]
   b371b:	41 80 3c 17 00       	cmp    BYTE PTR [r15+rdx*1],0x0
   b3720:	75 e5                	jne    b3707 <future_backtest_sdk::context::StrategyContext::cancel_pending_ids+0xe7>
   b3722:	48 39 d6             	cmp    rsi,rdx
   b3725:	73 d4                	jae    b36fb <future_backtest_sdk::context::StrategyContext::cancel_pending_ids+0xdb>
   b3727:	48 29 f2             	sub    rdx,rsi
   b372a:	4c 01 fe             	add    rsi,r15
   b372d:	48 8d 7c 24 40       	lea    rdi,[rsp+0x40]
   b3732:	ff 15 10 0c 05 00    	call   QWORD PTR [rip+0x50c10]        # 104348 <_DYNAMIC+0x8e8>
   b3738:	4c 8b 6c 24 40       	mov    r13,QWORD PTR [rsp+0x40]
   b373d:	48 8b 74 24 48       	mov    rsi,QWORD PTR [rsp+0x48]
   b3742:	4c 89 e8             	mov    rax,r13
   b3745:	48 f7 d8             	neg    rax
   b3748:	48 8b 5c 24 50       	mov    rbx,QWORD PTR [rsp+0x50]
   b374d:	71 50                	jno    b379f <future_backtest_sdk::context::StrategyContext::cancel_pending_ids+0x17f>
   b374f:	48 85 db             	test   rbx,rbx
   b3752:	0f 88 d1 00 00 00    	js     b3829 <future_backtest_sdk::context::StrategyContext::cancel_pending_ids+0x209>
   b3758:	74 28                	je     b3782 <future_backtest_sdk::context::StrategyContext::cancel_pending_ids+0x162>
   b375a:	49 89 f5             	mov    r13,rsi
   b375d:	ff 15 35 05 05 00    	call   QWORD PTR [rip+0x50535]        # 103c98 <_DYNAMIC+0x238>
   b3763:	be 01 00 00 00       	mov    esi,0x1
   b3768:	48 89 df             	mov    rdi,rbx
   b376b:	ff 15 ff 04 05 00    	call   QWORD PTR [rip+0x504ff]        # 103c70 <_DYNAMIC+0x210>
   b3771:	48 85 c0             	test   rax,rax
   b3774:	0f 84 3c 01 00 00    	je     b38b6 <future_backtest_sdk::context::StrategyContext::cancel_pending_ids+0x296>
   b377a:	49 89 c6             	mov    r14,rax
   b377d:	4c 89 ee             	mov    rsi,r13
   b3780:	eb 06                	jmp    b3788 <future_backtest_sdk::context::StrategyContext::cancel_pending_ids+0x168>
   b3782:	41 be 01 00 00 00    	mov    r14d,0x1
   b3788:	4c 89 f7             	mov    rdi,r14
   b378b:	48 89 da             	mov    rdx,rbx
   b378e:	ff 15 34 05 05 00    	call   QWORD PTR [rip+0x50534]        # 103cc8 <memcpy@GLIBC_2.14>
   b3794:	4c 89 74 24 30       	mov    QWORD PTR [rsp+0x30],r14
   b3799:	4c 89 f6             	mov    rsi,r14
   b379c:	49 89 dd             	mov    r13,rbx
   b379f:	48 89 74 24 38       	mov    QWORD PTR [rsp+0x38],rsi
   b37a4:	4c 8b 74 24 28       	mov    r14,QWORD PTR [rsp+0x28]
   b37a9:	4c 3b 74 24 18       	cmp    r14,QWORD PTR [rsp+0x18]
   b37ae:	0f 85 23 ff ff ff    	jne    b36d7 <future_backtest_sdk::context::StrategyContext::cancel_pending_ids+0xb7>
   b37b4:	48 8d 7c 24 18       	lea    rdi,[rsp+0x18]
   b37b9:	48 8d 35 d8 ce 04 00 	lea    rsi,[rip+0x4ced8]        # 100698 <anon.e69fa87c05f933b9fe1f9c21a2065ba3.7.llvm.603266175965479879+0x4f8>
   b37c0:	ff 15 82 05 05 00    	call   QWORD PTR [rip+0x50582]        # 103d48 <_DYNAMIC+0x2e8>
   b37c6:	e9 0c ff ff ff       	jmp    b36d7 <future_backtest_sdk::context::StrategyContext::cancel_pending_ids+0xb7>
   b37cb:	48 8b 44 24 10       	mov    rax,QWORD PTR [rsp+0x10]
   b37d0:	48 c7 00 00 00 00 00 	mov    QWORD PTR [rax],0x0
   b37d7:	48 c7 40 08 08 00 00 	mov    QWORD PTR [rax+0x8],0x8
   b37de:	00 
   b37df:	48 c7 40 10 00 00 00 	mov    QWORD PTR [rax+0x10],0x0
   b37e6:	00 
   b37e7:	be 00 40 00 00       	mov    esi,0x4000
   b37ec:	ba 01 00 00 00       	mov    edx,0x1
   b37f1:	4c 89 ff             	mov    rdi,r15
   b37f4:	ff 15 7e 04 05 00    	call   QWORD PTR [rip+0x5047e]        # 103c78 <_DYNAMIC+0x218>
   b37fa:	41 c6 04 24 00       	mov    BYTE PTR [r12],0x0
   b37ff:	4d 85 f6             	test   r14,r14
   b3802:	74 11                	je     b3815 <future_backtest_sdk::context::StrategyContext::cancel_pending_ids+0x1f5>
   b3804:	ba 01 00 00 00       	mov    edx,0x1
   b3809:	4c 89 e7             	mov    rdi,r12
   b380c:	4c 89 f6             	mov    rsi,r14
   b380f:	ff 15 63 04 05 00    	call   QWORD PTR [rip+0x50463]        # 103c78 <_DYNAMIC+0x218>
   b3815:	48 8b 44 24 10       	mov    rax,QWORD PTR [rsp+0x10]
   b381a:	48 83 c4 58          	add    rsp,0x58
   b381e:	5b                   	pop    rbx
   b381f:	41 5c                	pop    r12
   b3821:	41 5d                	pop    r13
   b3823:	41 5e                	pop    r14
   b3825:	41 5f                	pop    r15
   b3827:	5d                   	pop    rbp
   b3828:	c3                   	ret    
   b3829:	31 ff                	xor    edi,edi
   b382b:	48 8d 15 36 cd 04 00 	lea    rdx,[rip+0x4cd36]        # 100568 <anon.e69fa87c05f933b9fe1f9c21a2065ba3.7.llvm.603266175965479879+0x3c8>
   b3832:	48 8b 74 24 30       	mov    rsi,QWORD PTR [rsp+0x30]
   b3837:	4c 8b 74 24 08       	mov    r14,QWORD PTR [rsp+0x8]
   b383c:	4c 8b 24 24          	mov    r12,QWORD PTR [rsp]
   b3840:	ff 15 92 04 05 00    	call   QWORD PTR [rip+0x50492]        # 103cd8 <_DYNAMIC+0x278>
   b3846:	eb 6c                	jmp    b38b4 <future_backtest_sdk::context::StrategyContext::cancel_pending_ids+0x294>
   b3848:	48 8b 44 24 28       	mov    rax,QWORD PTR [rsp+0x28]
   b384d:	48 8b 4c 24 10       	mov    rcx,QWORD PTR [rsp+0x10]
   b3852:	48 89 41 10          	mov    QWORD PTR [rcx+0x10],rax
   b3856:	0f 10 44 24 18       	movups xmm0,XMMWORD PTR [rsp+0x18]
   b385b:	0f 11 01             	movups XMMWORD PTR [rcx],xmm0
   b385e:	be 00 40 00 00       	mov    esi,0x4000
   b3863:	ba 01 00 00 00       	mov    edx,0x1
   b3868:	4c 89 ff             	mov    rdi,r15
   b386b:	ff 15 07 04 05 00    	call   QWORD PTR [rip+0x50407]        # 103c78 <_DYNAMIC+0x218>
   b3871:	4c 8b 24 24          	mov    r12,QWORD PTR [rsp]
   b3875:	41 c6 04 24 00       	mov    BYTE PTR [r12],0x0
   b387a:	4c 8b 74 24 08       	mov    r14,QWORD PTR [rsp+0x8]
   b387f:	4d 85 f6             	test   r14,r14
   b3882:	75 80                	jne    b3804 <future_backtest_sdk::context::StrategyContext::cancel_pending_ids+0x1e4>
   b3884:	eb 8f                	jmp    b3815 <future_backtest_sdk::context::StrategyContext::cancel_pending_ids+0x1f5>
   b3886:	48 8d 15 db cd 04 00 	lea    rdx,[rip+0x4cddb]        # 100668 <anon.e69fa87c05f933b9fe1f9c21a2065ba3.7.llvm.603266175965479879+0x4c8>
   b388d:	bf 01 00 00 00       	mov    edi,0x1
   b3892:	be 00 40 00 00       	mov    esi,0x4000
   b3897:	ff 15 3b 04 05 00    	call   QWORD PTR [rip+0x5043b]        # 103cd8 <_DYNAMIC+0x278>
   b389d:	eb 15                	jmp    b38b4 <future_backtest_sdk::context::StrategyContext::cancel_pending_ids+0x294>
   b389f:	48 8d 15 da cd 04 00 	lea    rdx,[rip+0x4cdda]        # 100680 <anon.e69fa87c05f933b9fe1f9c21a2065ba3.7.llvm.603266175965479879+0x4e0>
   b38a6:	bf 08 00 00 00       	mov    edi,0x8
   b38ab:	48 89 de             	mov    rsi,rbx
   b38ae:	ff 15 24 04 05 00    	call   QWORD PTR [rip+0x50424]        # 103cd8 <_DYNAMIC+0x278>
   b38b4:	0f 0b                	ud2    
   b38b6:	48 89 5c 24 30       	mov    QWORD PTR [rsp+0x30],rbx
   b38bb:	bf 01 00 00 00       	mov    edi,0x1
   b38c0:	e9 66 ff ff ff       	jmp    b382b <future_backtest_sdk::context::StrategyContext::cancel_pending_ids+0x20b>
   b38c5:	48 89 c3             	mov    rbx,rax
   b38c8:	4d 85 ed             	test   r13,r13
   b38cb:	74 2b                	je     b38f8 <future_backtest_sdk::context::StrategyContext::cancel_pending_ids+0x2d8>
   b38cd:	ba 01 00 00 00       	mov    edx,0x1
   b38d2:	48 8b 7c 24 38       	mov    rdi,QWORD PTR [rsp+0x38]
   b38d7:	4c 89 ee             	mov    rsi,r13
   b38da:	ff 15 98 03 05 00    	call   QWORD PTR [rip+0x50398]        # 103c78 <_DYNAMIC+0x218>
   b38e0:	eb 16                	jmp    b38f8 <future_backtest_sdk::context::StrategyContext::cancel_pending_ids+0x2d8>
   b38e2:	48 89 c3             	mov    rbx,rax
   b38e5:	4c 8b 74 24 08       	mov    r14,QWORD PTR [rsp+0x8]
   b38ea:	4c 8b 24 24          	mov    r12,QWORD PTR [rsp]
   b38ee:	eb 20                	jmp    b3910 <future_backtest_sdk::context::StrategyContext::cancel_pending_ids+0x2f0>
   b38f0:	48 89 c3             	mov    rbx,rax
   b38f3:	eb 2e                	jmp    b3923 <future_backtest_sdk::context::StrategyContext::cancel_pending_ids+0x303>
   b38f5:	48 89 c3             	mov    rbx,rax
   b38f8:	4c 8b 74 24 08       	mov    r14,QWORD PTR [rsp+0x8]
   b38fd:	4c 8b 24 24          	mov    r12,QWORD PTR [rsp]
   b3901:	eb 03                	jmp    b3906 <future_backtest_sdk::context::StrategyContext::cancel_pending_ids+0x2e6>
   b3903:	48 89 c3             	mov    rbx,rax
   b3906:	48 8d 7c 24 18       	lea    rdi,[rsp+0x18]
   b390b:	e8 70 ea ff ff       	call   b2380 <core::ptr::drop_in_place<alloc::vec::Vec<alloc::string::String>>>
   b3910:	be 00 40 00 00       	mov    esi,0x4000
   b3915:	ba 01 00 00 00       	mov    edx,0x1
   b391a:	4c 89 ff             	mov    rdi,r15
   b391d:	ff 15 55 03 05 00    	call   QWORD PTR [rip+0x50355]        # 103c78 <_DYNAMIC+0x218>
   b3923:	41 c6 04 24 00       	mov    BYTE PTR [r12],0x0
   b3928:	4d 85 f6             	test   r14,r14
   b392b:	74 11                	je     b393e <future_backtest_sdk::context::StrategyContext::cancel_pending_ids+0x31e>
   b392d:	ba 01 00 00 00       	mov    edx,0x1
   b3932:	4c 89 e7             	mov    rdi,r12
   b3935:	4c 89 f6             	mov    rsi,r14
   b3938:	ff 15 3a 03 05 00    	call   QWORD PTR [rip+0x5033a]        # 103c78 <_DYNAMIC+0x218>
   b393e:	48 89 df             	mov    rdi,rbx
   b3941:	e8 3a 8c 04 00       	call   fc580 <_Unwind_Resume@plt>
   b3946:	cc                   	int3   
   b3947:	cc                   	int3   
   b3948:	cc                   	int3   
   b3949:	cc                   	int3   
   b394a:	cc                   	int3   
   b394b:	cc                   	int3   
   b394c:	cc                   	int3   
   b394d:	cc                   	int3   
   b394e:	cc                   	int3   
   b394f:	cc                   	int3   