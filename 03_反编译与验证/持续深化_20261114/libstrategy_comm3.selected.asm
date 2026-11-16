000000000008e140 <future_backtest_sdk::context::StrategyContext::cancel_order>:
   8e140:	55                   	push   rbp
   8e141:	41 57                	push   r15
   8e143:	41 56                	push   r14
   8e145:	41 55                	push   r13
   8e147:	41 54                	push   r12
   8e149:	53                   	push   rbx
   8e14a:	48 81 ec 88 00 00 00 	sub    rsp,0x88
   8e151:	4d 89 c7             	mov    r15,r8
   8e154:	49 89 cc             	mov    r12,rcx
   8e157:	49 89 fd             	mov    r13,rdi
   8e15a:	48 89 34 24          	mov    QWORD PTR [rsp],rsi
   8e15e:	48 89 54 24 08       	mov    QWORD PTR [rsp+0x8],rdx
   8e163:	48 89 4c 24 10       	mov    QWORD PTR [rsp+0x10],rcx
   8e168:	4c 89 44 24 18       	mov    QWORD PTR [rsp+0x18],r8
   8e16d:	48 8b 2d 64 f0 04 00 	mov    rbp,QWORD PTR [rip+0x4f064]        # dd1d8 <_DYNAMIC+0x500>
   8e174:	48 89 f7             	mov    rdi,rsi
   8e177:	48 89 d6             	mov    rsi,rdx
   8e17a:	ff d5                	call   rbp
   8e17c:	49 89 c6             	mov    r14,rax
   8e17f:	48 89 d3             	mov    rbx,rdx
   8e182:	4c 89 e7             	mov    rdi,r12
   8e185:	4c 89 fe             	mov    rsi,r15
   8e188:	ff d5                	call   rbp
   8e18a:	49 89 c4             	mov    r12,rax
   8e18d:	49 89 d7             	mov    r15,rdx
   8e190:	49 8b 7d 30          	mov    rdi,QWORD PTR [r13+0x30]
   8e194:	4c 89 f6             	mov    rsi,r14
   8e197:	48 89 c2             	mov    rdx,rax
   8e19a:	ff 15 a0 f4 04 00    	call   QWORD PTR [rip+0x4f4a0]        # dd640 <fb_ctx_cancel_order@Base>
   8e1a0:	85 c0                	test   eax,eax
   8e1a2:	78 4d                	js     8e1f1 <future_backtest_sdk::context::StrategyContext::cancel_order+0xb1>
   8e1a4:	45 31 ed             	xor    r13d,r13d
   8e1a7:	41 c6 04 24 00       	mov    BYTE PTR [r12],0x0
   8e1ac:	4d 85 ff             	test   r15,r15
   8e1af:	74 11                	je     8e1c2 <future_backtest_sdk::context::StrategyContext::cancel_order+0x82>
   8e1b1:	ba 01 00 00 00       	mov    edx,0x1
   8e1b6:	4c 89 e7             	mov    rdi,r12
   8e1b9:	4c 89 fe             	mov    rsi,r15
   8e1bc:	ff 15 2e ed 04 00    	call   QWORD PTR [rip+0x4ed2e]        # dcef0 <_DYNAMIC+0x218>
   8e1c2:	41 c6 06 00          	mov    BYTE PTR [r14],0x0
   8e1c6:	48 85 db             	test   rbx,rbx
   8e1c9:	74 11                	je     8e1dc <future_backtest_sdk::context::StrategyContext::cancel_order+0x9c>
   8e1cb:	ba 01 00 00 00       	mov    edx,0x1
   8e1d0:	4c 89 f7             	mov    rdi,r14
   8e1d3:	48 89 de             	mov    rsi,rbx
   8e1d6:	ff 15 14 ed 04 00    	call   QWORD PTR [rip+0x4ed14]        # dcef0 <_DYNAMIC+0x218>
   8e1dc:	4c 89 e8             	mov    rax,r13
   8e1df:	48 81 c4 88 00 00 00 	add    rsp,0x88
   8e1e6:	5b                   	pop    rbx
   8e1e7:	41 5c                	pop    r12
   8e1e9:	41 5d                	pop    r13
   8e1eb:	41 5e                	pop    r14
   8e1ed:	41 5f                	pop    r15
   8e1ef:	5d                   	pop    rbp
   8e1f0:	c3                   	ret    
   8e1f1:	48 89 e0             	mov    rax,rsp
   8e1f4:	48 89 44 24 20       	mov    QWORD PTR [rsp+0x20],rax
   8e1f9:	48 8d 05 90 17 00 00 	lea    rax,[rip+0x1790]        # 8f990 <<&T as core::fmt::Display>::fmt>
   8e200:	48 89 44 24 28       	mov    QWORD PTR [rsp+0x28],rax
   8e205:	48 8d 4c 24 10       	lea    rcx,[rsp+0x10]
   8e20a:	48 89 4c 24 30       	mov    QWORD PTR [rsp+0x30],rcx
   8e20f:	48 89 44 24 38       	mov    QWORD PTR [rsp+0x38],rax
   8e214:	48 8d 05 35 b7 04 00 	lea    rax,[rip+0x4b735]        # d9950 <anon.e69fa87c05f933b9fe1f9c21a2065ba3.7.llvm.603266175965479879+0x538>
   8e21b:	48 89 44 24 40       	mov    QWORD PTR [rsp+0x40],rax
   8e220:	48 c7 44 24 48 02 00 	mov    QWORD PTR [rsp+0x48],0x2
   8e227:	00 00 
   8e229:	48 c7 44 24 60 00 00 	mov    QWORD PTR [rsp+0x60],0x0
   8e230:	00 00 
   8e232:	48 8d 44 24 20       	lea    rax,[rsp+0x20]
   8e237:	48 89 44 24 50       	mov    QWORD PTR [rsp+0x50],rax
   8e23c:	48 c7 44 24 58 02 00 	mov    QWORD PTR [rsp+0x58],0x2
   8e243:	00 00 
   8e245:	48 8d 7c 24 70       	lea    rdi,[rsp+0x70]
   8e24a:	48 8d 74 24 40       	lea    rsi,[rsp+0x40]
   8e24f:	ff 15 8b ed 04 00    	call   QWORD PTR [rip+0x4ed8b]        # dcfe0 <_DYNAMIC+0x308>
   8e255:	48 8d 7c 24 70       	lea    rdi,[rsp+0x70]
   8e25a:	e8 a1 09 00 00       	call   8ec00 <anyhow::error::<impl anyhow::Error>::msg>
   8e25f:	49 89 c5             	mov    r13,rax
   8e262:	41 c6 04 24 00       	mov    BYTE PTR [r12],0x0
   8e267:	4d 85 ff             	test   r15,r15
   8e26a:	0f 85 41 ff ff ff    	jne    8e1b1 <future_backtest_sdk::context::StrategyContext::cancel_order+0x71>
   8e270:	e9 4d ff ff ff       	jmp    8e1c2 <future_backtest_sdk::context::StrategyContext::cancel_order+0x82>
   8e275:	49 89 c5             	mov    r13,rax
   8e278:	41 c6 04 24 00       	mov    BYTE PTR [r12],0x0
   8e27d:	4d 85 ff             	test   r15,r15
   8e280:	74 16                	je     8e298 <future_backtest_sdk::context::StrategyContext::cancel_order+0x158>
   8e282:	ba 01 00 00 00       	mov    edx,0x1
   8e287:	4c 89 e7             	mov    rdi,r12
   8e28a:	4c 89 fe             	mov    rsi,r15
   8e28d:	ff 15 5d ec 04 00    	call   QWORD PTR [rip+0x4ec5d]        # dcef0 <_DYNAMIC+0x218>
   8e293:	eb 03                	jmp    8e298 <future_backtest_sdk::context::StrategyContext::cancel_order+0x158>
   8e295:	49 89 c5             	mov    r13,rax
   8e298:	41 c6 06 00          	mov    BYTE PTR [r14],0x0
   8e29c:	48 85 db             	test   rbx,rbx
   8e29f:	74 11                	je     8e2b2 <future_backtest_sdk::context::StrategyContext::cancel_order+0x172>
   8e2a1:	ba 01 00 00 00       	mov    edx,0x1
   8e2a6:	4c 89 f7             	mov    rdi,r14
   8e2a9:	48 89 de             	mov    rsi,rbx
   8e2ac:	ff 15 3e ec 04 00    	call   QWORD PTR [rip+0x4ec3e]        # dcef0 <_DYNAMIC+0x218>
   8e2b2:	4c 89 ef             	mov    rdi,r13
   8e2b5:	e8 46 7b 04 00       	call   d5e00 <_Unwind_Resume@plt>
   8e2ba:	cc                   	int3   
   8e2bb:	cc                   	int3   
   8e2bc:	cc                   	int3   
   8e2bd:	cc                   	int3   
   8e2be:	cc                   	int3   
   8e2bf:	cc                   	int3   

000000000008dc60 <future_backtest_sdk::context::StrategyContext::pending_orders>:
   8dc60:	55                   	push   rbp
   8dc61:	41 57                	push   r15
   8dc63:	41 56                	push   r14
   8dc65:	41 55                	push   r13
   8dc67:	41 54                	push   r12
   8dc69:	53                   	push   rbx
   8dc6a:	48 81 ec 00 10 00 00 	sub    rsp,0x1000
   8dc71:	48 c7 04 24 00 00 00 	mov    QWORD PTR [rsp],0x0
   8dc78:	00 
   8dc79:	48 81 ec f8 00 00 00 	sub    rsp,0xf8
   8dc80:	48 89 74 24 08       	mov    QWORD PTR [rsp+0x8],rsi
   8dc85:	48 89 7c 24 28       	mov    QWORD PTR [rsp+0x28],rdi
   8dc8a:	48 89 54 24 58       	mov    QWORD PTR [rsp+0x58],rdx
   8dc8f:	48 89 d7             	mov    rdi,rdx
   8dc92:	48 89 4c 24 60       	mov    QWORD PTR [rsp+0x60],rcx
   8dc97:	48 89 ce             	mov    rsi,rcx
   8dc9a:	ff 15 38 f5 04 00    	call   QWORD PTR [rip+0x4f538]        # dd1d8 <_DYNAMIC+0x500>
   8dca0:	49 89 c4             	mov    r12,rax
   8dca3:	48 89 54 24 38       	mov    QWORD PTR [rsp+0x38],rdx
   8dca8:	0f 57 c0             	xorps  xmm0,xmm0
   8dcab:	0f 29 84 24 e0 00 00 	movaps XMMWORD PTR [rsp+0xe0],xmm0
   8dcb2:	00 
   8dcb3:	0f 29 84 24 d0 00 00 	movaps XMMWORD PTR [rsp+0xd0],xmm0
   8dcba:	00 
   8dcbb:	0f 29 84 24 c0 00 00 	movaps XMMWORD PTR [rsp+0xc0],xmm0
   8dcc2:	00 
   8dcc3:	0f 29 84 24 b0 00 00 	movaps XMMWORD PTR [rsp+0xb0],xmm0
   8dcca:	00 
   8dccb:	48 8d bc 24 f8 00 00 	lea    rdi,[rsp+0xf8]
   8dcd2:	00 
   8dcd3:	4c 8b 3d 66 f4 04 00 	mov    r15,QWORD PTR [rip+0x4f466]        # dd140 <memset@GLIBC_2.2.5>
   8dcda:	ba 00 02 00 00       	mov    edx,0x200
   8dcdf:	31 f6                	xor    esi,esi
   8dce1:	41 ff d7             	call   r15
   8dce4:	48 8d bc 24 f8 02 00 	lea    rdi,[rsp+0x2f8]
   8dceb:	00 
   8dcec:	ba 00 02 00 00       	mov    edx,0x200
   8dcf1:	31 f6                	xor    esi,esi
   8dcf3:	41 ff d7             	call   r15
   8dcf6:	4c 8d ac 24 f8 04 00 	lea    r13,[rsp+0x4f8]
   8dcfd:	00 
   8dcfe:	ba 00 02 00 00       	mov    edx,0x200
   8dd03:	4c 89 ef             	mov    rdi,r13
   8dd06:	31 f6                	xor    esi,esi
   8dd08:	41 ff d7             	call   r15
   8dd0b:	48 8d 9c 24 f8 06 00 	lea    rbx,[rsp+0x6f8]
   8dd12:	00 
   8dd13:	ba 00 02 00 00       	mov    edx,0x200
   8dd18:	48 89 df             	mov    rdi,rbx
   8dd1b:	31 f6                	xor    esi,esi
   8dd1d:	41 ff d7             	call   r15
   8dd20:	48 8d ac 24 f8 08 00 	lea    rbp,[rsp+0x8f8]
   8dd27:	00 
   8dd28:	41 be 00 08 00 00    	mov    r14d,0x800
   8dd2e:	ba 00 08 00 00       	mov    edx,0x800
   8dd33:	48 89 ef             	mov    rdi,rbp
   8dd36:	31 f6                	xor    esi,esi
   8dd38:	41 ff d7             	call   r15
   8dd3b:	48 8b 44 24 08       	mov    rax,QWORD PTR [rsp+0x8]
   8dd40:	48 8b 78 30          	mov    rdi,QWORD PTR [rax+0x30]
   8dd44:	48 8d 94 24 b0 00 00 	lea    rdx,[rsp+0xb0]
   8dd4b:	00 
   8dd4c:	4c 89 64 24 30       	mov    QWORD PTR [rsp+0x30],r12
   8dd51:	4c 89 e6             	mov    rsi,r12
   8dd54:	48 8d 8c 24 f8 00 00 	lea    rcx,[rsp+0xf8]
   8dd5b:	00 
   8dd5c:	4c 8d 84 24 f8 02 00 	lea    r8,[rsp+0x2f8]
   8dd63:	00 
   8dd64:	4d 89 e9             	mov    r9,r13
   8dd67:	6a 40                	push   0x40
   8dd69:	68 00 08 00 00       	push   0x800
   8dd6e:	55                   	push   rbp
   8dd6f:	53                   	push   rbx
   8dd70:	ff 15 c2 f8 04 00    	call   QWORD PTR [rip+0x4f8c2]        # dd638 <fb_ctx_pending_orders@Base>
   8dd76:	48 83 c4 20          	add    rsp,0x20
   8dd7a:	48 c7 44 24 10 00 00 	mov    QWORD PTR [rsp+0x10],0x0
   8dd81:	00 00 
   8dd83:	48 c7 44 24 18 08 00 	mov    QWORD PTR [rsp+0x18],0x8
   8dd8a:	00 00 
   8dd8c:	48 c7 44 24 20 00 00 	mov    QWORD PTR [rsp+0x20],0x0
   8dd93:	00 00 
   8dd95:	4c 63 e8             	movsxd r13,eax
   8dd98:	48 8d 84 24 f8 10 00 	lea    rax,[rsp+0x10f8]
   8dd9f:	00 
   8dda0:	31 d2                	xor    edx,edx
   8dda2:	66 66 66 66 66 2e 0f 	data16 data16 data16 data16 cs nop WORD PTR [rax+rax*1+0x0]
   8dda9:	1f 84 00 00 00 00 00 
   8ddb0:	44 0f b6 64 15 00    	movzx  r12d,BYTE PTR [rbp+rdx*1+0x0]
   8ddb6:	45 84 e4             	test   r12b,r12b
   8ddb9:	74 25                	je     8dde0 <future_backtest_sdk::context::StrategyContext::pending_orders+0x180>
   8ddbb:	48 8d 0c 2a          	lea    rcx,[rdx+rbp*1]
   8ddbf:	48 ff c1             	inc    rcx
   8ddc2:	48 ff c2             	inc    rdx
   8ddc5:	48 39 c1             	cmp    rcx,rax
   8ddc8:	75 e6                	jne    8ddb0 <future_backtest_sdk::context::StrategyContext::pending_orders+0x150>
   8ddca:	49 89 ef             	mov    r15,rbp
   8ddcd:	4c 89 f3             	mov    rbx,r14
   8ddd0:	4c 89 f2             	mov    rdx,r14
   8ddd3:	eb 24                	jmp    8ddf9 <future_backtest_sdk::context::StrategyContext::pending_orders+0x199>
   8ddd5:	66 66 2e 0f 1f 84 00 	data16 cs nop WORD PTR [rax+rax*1+0x0]
   8dddc:	00 00 00 00 
   8dde0:	48 89 d3             	mov    rbx,rdx
   8dde3:	48 f7 d3             	not    rbx
   8dde6:	4c 01 f3             	add    rbx,r14
   8dde9:	4c 8d 3c 2a          	lea    r15,[rdx+rbp*1]
   8dded:	49 ff c7             	inc    r15
   8ddf0:	48 85 d2             	test   rdx,rdx
   8ddf3:	0f 84 e3 00 00 00    	je     8dedc <future_backtest_sdk::context::StrategyContext::pending_orders+0x27c>
   8ddf9:	48 8d 7c 24 68       	lea    rdi,[rsp+0x68]
   8ddfe:	48 89 ee             	mov    rsi,rbp
   8de01:	ff 15 e9 f5 04 00    	call   QWORD PTR [rip+0x4f5e9]        # dd3f0 <_DYNAMIC+0x718>
   8de07:	83 7c 24 68 01       	cmp    DWORD PTR [rsp+0x68],0x1
   8de0c:	75 22                	jne    8de30 <future_backtest_sdk::context::StrategyContext::pending_orders+0x1d0>
   8de0e:	4c 8b 74 24 20       	mov    r14,QWORD PTR [rsp+0x20]
   8de13:	45 84 e4             	test   r12b,r12b
   8de16:	0f 84 bb 00 00 00    	je     8ded7 <future_backtest_sdk::context::StrategyContext::pending_orders+0x277>
   8de1c:	e9 ce 00 00 00       	jmp    8deef <future_backtest_sdk::context::StrategyContext::pending_orders+0x28f>
   8de21:	66 66 66 66 66 66 2e 	data16 data16 data16 data16 data16 cs nop WORD PTR [rax+rax*1+0x0]
   8de28:	0f 1f 84 00 00 00 00 
   8de2f:	00 
   8de30:	48 8b 6c 24 78       	mov    rbp,QWORD PTR [rsp+0x78]
   8de35:	48 85 ed             	test   rbp,rbp
   8de38:	0f 88 c0 00 00 00    	js     8defe <future_backtest_sdk::context::StrategyContext::pending_orders+0x29e>
   8de3e:	48 8b 74 24 70       	mov    rsi,QWORD PTR [rsp+0x70]
   8de43:	74 38                	je     8de7d <future_backtest_sdk::context::StrategyContext::pending_orders+0x21d>
   8de45:	48 89 74 24 08       	mov    QWORD PTR [rsp+0x8],rsi
   8de4a:	4d 89 ee             	mov    r14,r13
   8de4d:	ff 15 bd f0 04 00    	call   QWORD PTR [rip+0x4f0bd]        # dcf10 <_DYNAMIC+0x238>
   8de53:	41 bd 01 00 00 00    	mov    r13d,0x1
   8de59:	be 01 00 00 00       	mov    esi,0x1
   8de5e:	48 89 ef             	mov    rdi,rbp
   8de61:	ff 15 81 f0 04 00    	call   QWORD PTR [rip+0x4f081]        # dcee8 <_DYNAMIC+0x210>
   8de67:	48 85 c0             	test   rax,rax
   8de6a:	0f 84 43 02 00 00    	je     8e0b3 <future_backtest_sdk::context::StrategyContext::pending_orders+0x453>
   8de70:	48 89 c7             	mov    rdi,rax
   8de73:	4d 89 f5             	mov    r13,r14
   8de76:	48 8b 74 24 08       	mov    rsi,QWORD PTR [rsp+0x8]
   8de7b:	eb 05                	jmp    8de82 <future_backtest_sdk::context::StrategyContext::pending_orders+0x222>
   8de7d:	bf 01 00 00 00       	mov    edi,0x1
   8de82:	48 89 7c 24 08       	mov    QWORD PTR [rsp+0x8],rdi
   8de87:	48 89 ea             	mov    rdx,rbp
   8de8a:	ff 15 c0 f0 04 00    	call   QWORD PTR [rip+0x4f0c0]        # dcf50 <memcpy@GLIBC_2.14>
   8de90:	4c 8b 74 24 20       	mov    r14,QWORD PTR [rsp+0x20]
   8de95:	4c 3b 74 24 10       	cmp    r14,QWORD PTR [rsp+0x10]
   8de9a:	75 12                	jne    8deae <future_backtest_sdk::context::StrategyContext::pending_orders+0x24e>
   8de9c:	48 8d 7c 24 10       	lea    rdi,[rsp+0x10]
   8dea1:	48 8d 35 90 ba 04 00 	lea    rsi,[rip+0x4ba90]        # d9938 <anon.e69fa87c05f933b9fe1f9c21a2065ba3.7.llvm.603266175965479879+0x520>
   8dea8:	ff 15 12 f1 04 00    	call   QWORD PTR [rip+0x4f112]        # dcfc0 <_DYNAMIC+0x2e8>
   8deae:	48 8b 44 24 18       	mov    rax,QWORD PTR [rsp+0x18]
   8deb3:	4b 8d 0c 76          	lea    rcx,[r14+r14*2]
   8deb7:	48 89 2c c8          	mov    QWORD PTR [rax+rcx*8],rbp
   8debb:	48 8b 54 24 08       	mov    rdx,QWORD PTR [rsp+0x8]
   8dec0:	48 89 54 c8 08       	mov    QWORD PTR [rax+rcx*8+0x8],rdx
   8dec5:	48 89 6c c8 10       	mov    QWORD PTR [rax+rcx*8+0x10],rbp
   8deca:	49 ff c6             	inc    r14
   8decd:	4c 89 74 24 20       	mov    QWORD PTR [rsp+0x20],r14
   8ded2:	45 84 e4             	test   r12b,r12b
   8ded5:	75 18                	jne    8deef <future_backtest_sdk::context::StrategyContext::pending_orders+0x28f>
   8ded7:	4d 39 ee             	cmp    r14,r13
   8deda:	73 13                	jae    8deef <future_backtest_sdk::context::StrategyContext::pending_orders+0x28f>
   8dedc:	49 8d 04 1f          	lea    rax,[r15+rbx*1]
   8dee0:	4c 89 fd             	mov    rbp,r15
   8dee3:	49 89 de             	mov    r14,rbx
   8dee6:	48 85 db             	test   rbx,rbx
   8dee9:	0f 85 b1 fe ff ff    	jne    8dda0 <future_backtest_sdk::context::StrategyContext::pending_orders+0x140>
   8deef:	4c 8b 74 24 60       	mov    r14,QWORD PTR [rsp+0x60]
   8def4:	4d 85 f6             	test   r14,r14
   8def7:	79 1f                	jns    8df18 <future_backtest_sdk::context::StrategyContext::pending_orders+0x2b8>
   8def9:	45 31 ed             	xor    r13d,r13d
   8defc:	eb 08                	jmp    8df06 <future_backtest_sdk::context::StrategyContext::pending_orders+0x2a6>
   8defe:	45 31 ed             	xor    r13d,r13d
   8df01:	48 8b 74 24 08       	mov    rsi,QWORD PTR [rsp+0x8]
   8df06:	48 8d 15 d3 b8 04 00 	lea    rdx,[rip+0x4b8d3]        # d97e0 <anon.e69fa87c05f933b9fe1f9c21a2065ba3.7.llvm.603266175965479879+0x3c8>
   8df0d:	4c 89 ef             	mov    rdi,r13
   8df10:	ff 15 72 f0 04 00    	call   QWORD PTR [rip+0x4f072]        # dcf88 <_DYNAMIC+0x2b0>
   8df16:	0f 0b                	ud2    
   8df18:	74 33                	je     8df4d <future_backtest_sdk::context::StrategyContext::pending_orders+0x2ed>
   8df1a:	4d 89 ef             	mov    r15,r13
   8df1d:	ff 15 ed ef 04 00    	call   QWORD PTR [rip+0x4efed]        # dcf10 <_DYNAMIC+0x238>
   8df23:	41 bd 01 00 00 00    	mov    r13d,0x1
   8df29:	be 01 00 00 00       	mov    esi,0x1
   8df2e:	4c 89 f7             	mov    rdi,r14
   8df31:	ff 15 b1 ef 04 00    	call   QWORD PTR [rip+0x4efb1]        # dcee8 <_DYNAMIC+0x210>
   8df37:	48 85 c0             	test   rax,rax
   8df3a:	4c 8b 64 24 28       	mov    r12,QWORD PTR [rsp+0x28]
   8df3f:	0f 84 76 01 00 00    	je     8e0bb <future_backtest_sdk::context::StrategyContext::pending_orders+0x45b>
   8df45:	48 89 c3             	mov    rbx,rax
   8df48:	4d 89 fd             	mov    r13,r15
   8df4b:	eb 0a                	jmp    8df57 <future_backtest_sdk::context::StrategyContext::pending_orders+0x2f7>
   8df4d:	bb 01 00 00 00       	mov    ebx,0x1
   8df52:	4c 8b 64 24 28       	mov    r12,QWORD PTR [rsp+0x28]
   8df57:	48 89 df             	mov    rdi,rbx
   8df5a:	48 8b 74 24 58       	mov    rsi,QWORD PTR [rsp+0x58]
   8df5f:	4c 89 f2             	mov    rdx,r14
   8df62:	ff 15 e8 ef 04 00    	call   QWORD PTR [rip+0x4efe8]        # dcf50 <memcpy@GLIBC_2.14>
   8df68:	4c 89 74 24 40       	mov    QWORD PTR [rsp+0x40],r14
   8df6d:	48 89 5c 24 48       	mov    QWORD PTR [rsp+0x48],rbx
   8df72:	4c 89 74 24 50       	mov    QWORD PTR [rsp+0x50],r14
   8df77:	48 8d 44 24 10       	lea    rax,[rsp+0x10]
   8df7c:	48 89 44 24 68       	mov    QWORD PTR [rsp+0x68],rax
   8df81:	48 8d 44 24 40       	lea    rax,[rsp+0x40]
   8df86:	48 89 44 24 70       	mov    QWORD PTR [rsp+0x70],rax
   8df8b:	48 8d 84 24 b0 00 00 	lea    rax,[rsp+0xb0]
   8df92:	00 
   8df93:	48 89 44 24 78       	mov    QWORD PTR [rsp+0x78],rax
   8df98:	48 8d 84 24 f8 00 00 	lea    rax,[rsp+0xf8]
   8df9f:	00 
   8dfa0:	48 89 84 24 80 00 00 	mov    QWORD PTR [rsp+0x80],rax
   8dfa7:	00 
   8dfa8:	48 8d 84 24 f8 02 00 	lea    rax,[rsp+0x2f8]
   8dfaf:	00 
   8dfb0:	48 89 84 24 88 00 00 	mov    QWORD PTR [rsp+0x88],rax
   8dfb7:	00 
   8dfb8:	48 8d 84 24 f8 04 00 	lea    rax,[rsp+0x4f8]
   8dfbf:	00 
   8dfc0:	48 89 84 24 90 00 00 	mov    QWORD PTR [rsp+0x90],rax
   8dfc7:	00 
   8dfc8:	48 8d 84 24 f8 06 00 	lea    rax,[rsp+0x6f8]
   8dfcf:	00 
   8dfd0:	48 89 84 24 98 00 00 	mov    QWORD PTR [rsp+0x98],rax
   8dfd7:	00 
   8dfd8:	48 c7 84 24 a0 00 00 	mov    QWORD PTR [rsp+0xa0],0x0
   8dfdf:	00 00 00 00 00 
   8dfe4:	4c 89 ac 24 a8 00 00 	mov    QWORD PTR [rsp+0xa8],r13
   8dfeb:	00 
   8dfec:	48 8d 15 bd b7 04 00 	lea    rdx,[rip+0x4b7bd]        # d97b0 <anon.e69fa87c05f933b9fe1f9c21a2065ba3.7.llvm.603266175965479879+0x398>
   8dff3:	48 8d 74 24 68       	lea    rsi,[rsp+0x68]
   8dff8:	4c 89 e7             	mov    rdi,r12
   8dffb:	e8 c0 20 00 00       	call   900c0 <<alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter>
   8e000:	48 8b 74 24 40       	mov    rsi,QWORD PTR [rsp+0x40]
   8e005:	48 85 f6             	test   rsi,rsi
   8e008:	74 10                	je     8e01a <future_backtest_sdk::context::StrategyContext::pending_orders+0x3ba>
   8e00a:	48 8b 7c 24 48       	mov    rdi,QWORD PTR [rsp+0x48]
   8e00f:	ba 01 00 00 00       	mov    edx,0x1
   8e014:	ff 15 d6 ee 04 00    	call   QWORD PTR [rip+0x4eed6]        # dcef0 <_DYNAMIC+0x218>
   8e01a:	48 8b 5c 24 20       	mov    rbx,QWORD PTR [rsp+0x20]
   8e01f:	48 85 db             	test   rbx,rbx
   8e022:	74 3b                	je     8e05f <future_backtest_sdk::context::StrategyContext::pending_orders+0x3ff>
   8e024:	4c 8b 74 24 18       	mov    r14,QWORD PTR [rsp+0x18]
   8e029:	49 83 c6 08          	add    r14,0x8
   8e02d:	4c 8b 3d bc ee 04 00 	mov    r15,QWORD PTR [rip+0x4eebc]        # dcef0 <_DYNAMIC+0x218>
   8e034:	eb 13                	jmp    8e049 <future_backtest_sdk::context::StrategyContext::pending_orders+0x3e9>
   8e036:	66 2e 0f 1f 84 00 00 	cs nop WORD PTR [rax+rax*1+0x0]
   8e03d:	00 00 00 
   8e040:	49 83 c6 18          	add    r14,0x18
   8e044:	48 ff cb             	dec    rbx
   8e047:	74 16                	je     8e05f <future_backtest_sdk::context::StrategyContext::pending_orders+0x3ff>
   8e049:	49 8b 76 f8          	mov    rsi,QWORD PTR [r14-0x8]
   8e04d:	48 85 f6             	test   rsi,rsi
   8e050:	74 ee                	je     8e040 <future_backtest_sdk::context::StrategyContext::pending_orders+0x3e0>
   8e052:	49 8b 3e             	mov    rdi,QWORD PTR [r14]
   8e055:	ba 01 00 00 00       	mov    edx,0x1
   8e05a:	41 ff d7             	call   r15
   8e05d:	eb e1                	jmp    8e040 <future_backtest_sdk::context::StrategyContext::pending_orders+0x3e0>
   8e05f:	48 8b 44 24 10       	mov    rax,QWORD PTR [rsp+0x10]
   8e064:	48 85 c0             	test   rax,rax
   8e067:	74 18                	je     8e081 <future_backtest_sdk::context::StrategyContext::pending_orders+0x421>
   8e069:	48 8b 7c 24 18       	mov    rdi,QWORD PTR [rsp+0x18]
   8e06e:	48 c1 e0 03          	shl    rax,0x3
   8e072:	48 8d 34 40          	lea    rsi,[rax+rax*2]
   8e076:	ba 08 00 00 00       	mov    edx,0x8
   8e07b:	ff 15 6f ee 04 00    	call   QWORD PTR [rip+0x4ee6f]        # dcef0 <_DYNAMIC+0x218>
   8e081:	48 8b 7c 24 30       	mov    rdi,QWORD PTR [rsp+0x30]
   8e086:	c6 07 00             	mov    BYTE PTR [rdi],0x0
   8e089:	48 8b 74 24 38       	mov    rsi,QWORD PTR [rsp+0x38]
   8e08e:	48 85 f6             	test   rsi,rsi
   8e091:	74 0b                	je     8e09e <future_backtest_sdk::context::StrategyContext::pending_orders+0x43e>
   8e093:	ba 01 00 00 00       	mov    edx,0x1
   8e098:	ff 15 52 ee 04 00    	call   QWORD PTR [rip+0x4ee52]        # dcef0 <_DYNAMIC+0x218>
   8e09e:	4c 89 e0             	mov    rax,r12
   8e0a1:	48 81 c4 f8 10 00 00 	add    rsp,0x10f8
   8e0a8:	5b                   	pop    rbx
   8e0a9:	41 5c                	pop    r12
   8e0ab:	41 5d                	pop    r13
   8e0ad:	41 5e                	pop    r14
   8e0af:	41 5f                	pop    r15
   8e0b1:	5d                   	pop    rbp
   8e0b2:	c3                   	ret    
   8e0b3:	48 89 ee             	mov    rsi,rbp
   8e0b6:	e9 4b fe ff ff       	jmp    8df06 <future_backtest_sdk::context::StrategyContext::pending_orders+0x2a6>
   8e0bb:	4c 89 f6             	mov    rsi,r14
   8e0be:	e9 43 fe ff ff       	jmp    8df06 <future_backtest_sdk::context::StrategyContext::pending_orders+0x2a6>
   8e0c3:	48 89 c3             	mov    rbx,rax
   8e0c6:	48 8b 74 24 40       	mov    rsi,QWORD PTR [rsp+0x40]
   8e0cb:	48 85 f6             	test   rsi,rsi
   8e0ce:	74 34                	je     8e104 <future_backtest_sdk::context::StrategyContext::pending_orders+0x4a4>
   8e0d0:	48 8b 7c 24 48       	mov    rdi,QWORD PTR [rsp+0x48]
   8e0d5:	ba 01 00 00 00       	mov    edx,0x1
   8e0da:	ff 15 10 ee 04 00    	call   QWORD PTR [rip+0x4ee10]        # dcef0 <_DYNAMIC+0x218>
   8e0e0:	eb 22                	jmp    8e104 <future_backtest_sdk::context::StrategyContext::pending_orders+0x4a4>
   8e0e2:	48 89 c3             	mov    rbx,rax
   8e0e5:	48 85 ed             	test   rbp,rbp
   8e0e8:	74 1a                	je     8e104 <future_backtest_sdk::context::StrategyContext::pending_orders+0x4a4>
   8e0ea:	ba 01 00 00 00       	mov    edx,0x1
   8e0ef:	48 8b 7c 24 08       	mov    rdi,QWORD PTR [rsp+0x8]
   8e0f4:	48 89 ee             	mov    rsi,rbp
   8e0f7:	ff 15 f3 ed 04 00    	call   QWORD PTR [rip+0x4edf3]        # dcef0 <_DYNAMIC+0x218>
   8e0fd:	eb 05                	jmp    8e104 <future_backtest_sdk::context::StrategyContext::pending_orders+0x4a4>
   8e0ff:	eb 00                	jmp    8e101 <future_backtest_sdk::context::StrategyContext::pending_orders+0x4a1>
   8e101:	48 89 c3             	mov    rbx,rax
   8e104:	48 8d 7c 24 10       	lea    rdi,[rsp+0x10]
   8e109:	e8 32 e5 ff ff       	call   8c640 <core::ptr::drop_in_place<alloc::vec::Vec<alloc::string::String>>>
   8e10e:	48 8b 7c 24 30       	mov    rdi,QWORD PTR [rsp+0x30]
   8e113:	c6 07 00             	mov    BYTE PTR [rdi],0x0
   8e116:	48 8b 74 24 38       	mov    rsi,QWORD PTR [rsp+0x38]
   8e11b:	48 85 f6             	test   rsi,rsi
   8e11e:	74 0b                	je     8e12b <future_backtest_sdk::context::StrategyContext::pending_orders+0x4cb>
   8e120:	ba 01 00 00 00       	mov    edx,0x1
   8e125:	ff 15 c5 ed 04 00    	call   QWORD PTR [rip+0x4edc5]        # dcef0 <_DYNAMIC+0x218>
   8e12b:	48 89 df             	mov    rdi,rbx
   8e12e:	e8 cd 7c 04 00       	call   d5e00 <_Unwind_Resume@plt>
   8e133:	cc                   	int3   
   8e134:	cc                   	int3   
   8e135:	cc                   	int3   
   8e136:	cc                   	int3   
   8e137:	cc                   	int3   
   8e138:	cc                   	int3   
   8e139:	cc                   	int3   
   8e13a:	cc                   	int3   
   8e13b:	cc                   	int3   
   8e13c:	cc                   	int3   
   8e13d:	cc                   	int3   
   8e13e:	cc                   	int3   
   8e13f:	cc                   	int3   

000000000008d8e0 <future_backtest_sdk::context::StrategyContext::cancel_pending_ids>:
   8d8e0:	55                   	push   rbp
   8d8e1:	41 57                	push   r15
   8d8e3:	41 56                	push   r14
   8d8e5:	41 55                	push   r13
   8d8e7:	41 54                	push   r12
   8d8e9:	53                   	push   rbx
   8d8ea:	48 83 ec 58          	sub    rsp,0x58
   8d8ee:	48 89 f3             	mov    rbx,rsi
   8d8f1:	48 89 7c 24 10       	mov    QWORD PTR [rsp+0x10],rdi
   8d8f6:	48 89 d7             	mov    rdi,rdx
   8d8f9:	48 89 ce             	mov    rsi,rcx
   8d8fc:	ff 15 d6 f8 04 00    	call   QWORD PTR [rip+0x4f8d6]        # dd1d8 <_DYNAMIC+0x500>
   8d902:	49 89 c4             	mov    r12,rax
   8d905:	49 89 d6             	mov    r14,rdx
   8d908:	ff 15 02 f6 04 00    	call   QWORD PTR [rip+0x4f602]        # dcf10 <_DYNAMIC+0x238>
   8d90e:	bf 00 40 00 00       	mov    edi,0x4000
   8d913:	be 01 00 00 00       	mov    esi,0x1
   8d918:	ff 15 e2 f5 04 00    	call   QWORD PTR [rip+0x4f5e2]        # dcf00 <_DYNAMIC+0x228>
   8d91e:	48 85 c0             	test   rax,rax
   8d921:	0f 84 1f 02 00 00    	je     8db46 <future_backtest_sdk::context::StrategyContext::cancel_pending_ids+0x266>
   8d927:	49 89 c7             	mov    r15,rax
   8d92a:	48 8b 7b 30          	mov    rdi,QWORD PTR [rbx+0x30]
   8d92e:	4c 89 e6             	mov    rsi,r12
   8d931:	48 89 c2             	mov    rdx,rax
   8d934:	b9 00 40 00 00       	mov    ecx,0x4000
   8d939:	ff 15 e9 fc 04 00    	call   QWORD PTR [rip+0x4fce9]        # dd628 <fb_ctx_cancel_pending_ids@Base>
   8d93f:	85 c0                	test   eax,eax
   8d941:	0f 8e 44 01 00 00    	jle    8da8b <future_backtest_sdk::context::StrategyContext::cancel_pending_ids+0x1ab>
   8d947:	4c 89 24 24          	mov    QWORD PTR [rsp],r12
   8d94b:	4c 89 74 24 08       	mov    QWORD PTR [rsp+0x8],r14
   8d950:	89 c5                	mov    ebp,eax
   8d952:	48 8d 04 ed 00 00 00 	lea    rax,[rbp*8+0x0]
   8d959:	00 
   8d95a:	48 8d 1c 40          	lea    rbx,[rax+rax*2]
   8d95e:	ff 15 ac f5 04 00    	call   QWORD PTR [rip+0x4f5ac]        # dcf10 <_DYNAMIC+0x238>
   8d964:	be 08 00 00 00       	mov    esi,0x8
   8d969:	48 89 df             	mov    rdi,rbx
   8d96c:	ff 15 76 f5 04 00    	call   QWORD PTR [rip+0x4f576]        # dcee8 <_DYNAMIC+0x210>
   8d972:	48 85 c0             	test   rax,rax
   8d975:	0f 84 e4 01 00 00    	je     8db5f <future_backtest_sdk::context::StrategyContext::cancel_pending_ids+0x27f>
   8d97b:	48 89 6c 24 18       	mov    QWORD PTR [rsp+0x18],rbp
   8d980:	48 89 44 24 20       	mov    QWORD PTR [rsp+0x20],rax
   8d985:	48 c7 44 24 28 00 00 	mov    QWORD PTR [rsp+0x28],0x0
   8d98c:	00 00 
   8d98e:	45 31 f6             	xor    r14d,r14d
   8d991:	31 f6                	xor    esi,esi
   8d993:	31 d2                	xor    edx,edx
   8d995:	eb 40                	jmp    8d9d7 <future_backtest_sdk::context::StrategyContext::cancel_pending_ids+0xf7>
   8d997:	48 8b 44 24 20       	mov    rax,QWORD PTR [rsp+0x20]
   8d99c:	4b 8d 0c 76          	lea    rcx,[r14+r14*2]
   8d9a0:	4c 89 2c c8          	mov    QWORD PTR [rax+rcx*8],r13
   8d9a4:	48 8b 54 24 38       	mov    rdx,QWORD PTR [rsp+0x38]
   8d9a9:	48 89 54 c8 08       	mov    QWORD PTR [rax+rcx*8+0x8],rdx
   8d9ae:	48 89 5c c8 10       	mov    QWORD PTR [rax+rcx*8+0x10],rbx
   8d9b3:	49 ff c6             	inc    r14
   8d9b6:	4c 89 74 24 28       	mov    QWORD PTR [rsp+0x28],r14
   8d9bb:	4c 89 e6             	mov    rsi,r12
   8d9be:	49 39 ee             	cmp    r14,rbp
   8d9c1:	0f 83 41 01 00 00    	jae    8db08 <future_backtest_sdk::context::StrategyContext::cancel_pending_ids+0x228>
   8d9c7:	4c 89 e2             	mov    rdx,r12
   8d9ca:	49 81 fc 00 40 00 00 	cmp    r12,0x4000
   8d9d1:	0f 84 31 01 00 00    	je     8db08 <future_backtest_sdk::context::StrategyContext::cancel_pending_ids+0x228>
   8d9d7:	4c 8d 62 01          	lea    r12,[rdx+0x1]
   8d9db:	41 80 3c 17 00       	cmp    BYTE PTR [r15+rdx*1],0x0
   8d9e0:	75 e5                	jne    8d9c7 <future_backtest_sdk::context::StrategyContext::cancel_pending_ids+0xe7>
   8d9e2:	48 39 d6             	cmp    rsi,rdx
   8d9e5:	73 d4                	jae    8d9bb <future_backtest_sdk::context::StrategyContext::cancel_pending_ids+0xdb>
   8d9e7:	48 29 f2             	sub    rdx,rsi
   8d9ea:	4c 01 fe             	add    rsi,r15
   8d9ed:	48 8d 7c 24 40       	lea    rdi,[rsp+0x40]
   8d9f2:	ff 15 60 fb 04 00    	call   QWORD PTR [rip+0x4fb60]        # dd558 <_DYNAMIC+0x880>
   8d9f8:	4c 8b 6c 24 40       	mov    r13,QWORD PTR [rsp+0x40]
   8d9fd:	48 8b 74 24 48       	mov    rsi,QWORD PTR [rsp+0x48]
   8da02:	4c 89 e8             	mov    rax,r13
   8da05:	48 f7 d8             	neg    rax
   8da08:	48 8b 5c 24 50       	mov    rbx,QWORD PTR [rsp+0x50]
   8da0d:	71 50                	jno    8da5f <future_backtest_sdk::context::StrategyContext::cancel_pending_ids+0x17f>
   8da0f:	48 85 db             	test   rbx,rbx
   8da12:	0f 88 d1 00 00 00    	js     8dae9 <future_backtest_sdk::context::StrategyContext::cancel_pending_ids+0x209>
   8da18:	74 28                	je     8da42 <future_backtest_sdk::context::StrategyContext::cancel_pending_ids+0x162>
   8da1a:	49 89 f5             	mov    r13,rsi
   8da1d:	ff 15 ed f4 04 00    	call   QWORD PTR [rip+0x4f4ed]        # dcf10 <_DYNAMIC+0x238>
   8da23:	be 01 00 00 00       	mov    esi,0x1
   8da28:	48 89 df             	mov    rdi,rbx
   8da2b:	ff 15 b7 f4 04 00    	call   QWORD PTR [rip+0x4f4b7]        # dcee8 <_DYNAMIC+0x210>
   8da31:	48 85 c0             	test   rax,rax
   8da34:	0f 84 3c 01 00 00    	je     8db76 <future_backtest_sdk::context::StrategyContext::cancel_pending_ids+0x296>
   8da3a:	49 89 c6             	mov    r14,rax
   8da3d:	4c 89 ee             	mov    rsi,r13
   8da40:	eb 06                	jmp    8da48 <future_backtest_sdk::context::StrategyContext::cancel_pending_ids+0x168>
   8da42:	41 be 01 00 00 00    	mov    r14d,0x1
   8da48:	4c 89 f7             	mov    rdi,r14
   8da4b:	48 89 da             	mov    rdx,rbx
   8da4e:	ff 15 fc f4 04 00    	call   QWORD PTR [rip+0x4f4fc]        # dcf50 <memcpy@GLIBC_2.14>
   8da54:	4c 89 74 24 30       	mov    QWORD PTR [rsp+0x30],r14
   8da59:	4c 89 f6             	mov    rsi,r14
   8da5c:	49 89 dd             	mov    r13,rbx
   8da5f:	48 89 74 24 38       	mov    QWORD PTR [rsp+0x38],rsi
   8da64:	4c 8b 74 24 28       	mov    r14,QWORD PTR [rsp+0x28]
   8da69:	4c 3b 74 24 18       	cmp    r14,QWORD PTR [rsp+0x18]
   8da6e:	0f 85 23 ff ff ff    	jne    8d997 <future_backtest_sdk::context::StrategyContext::cancel_pending_ids+0xb7>
   8da74:	48 8d 7c 24 18       	lea    rdi,[rsp+0x18]
   8da79:	48 8d 35 90 be 04 00 	lea    rsi,[rip+0x4be90]        # d9910 <anon.e69fa87c05f933b9fe1f9c21a2065ba3.7.llvm.603266175965479879+0x4f8>
   8da80:	ff 15 3a f5 04 00    	call   QWORD PTR [rip+0x4f53a]        # dcfc0 <_DYNAMIC+0x2e8>
   8da86:	e9 0c ff ff ff       	jmp    8d997 <future_backtest_sdk::context::StrategyContext::cancel_pending_ids+0xb7>
   8da8b:	48 8b 44 24 10       	mov    rax,QWORD PTR [rsp+0x10]
   8da90:	48 c7 00 00 00 00 00 	mov    QWORD PTR [rax],0x0
   8da97:	48 c7 40 08 08 00 00 	mov    QWORD PTR [rax+0x8],0x8
   8da9e:	00 
   8da9f:	48 c7 40 10 00 00 00 	mov    QWORD PTR [rax+0x10],0x0
   8daa6:	00 
   8daa7:	be 00 40 00 00       	mov    esi,0x4000
   8daac:	ba 01 00 00 00       	mov    edx,0x1
   8dab1:	4c 89 ff             	mov    rdi,r15
   8dab4:	ff 15 36 f4 04 00    	call   QWORD PTR [rip+0x4f436]        # dcef0 <_DYNAMIC+0x218>
   8daba:	41 c6 04 24 00       	mov    BYTE PTR [r12],0x0
   8dabf:	4d 85 f6             	test   r14,r14
   8dac2:	74 11                	je     8dad5 <future_backtest_sdk::context::StrategyContext::cancel_pending_ids+0x1f5>
   8dac4:	ba 01 00 00 00       	mov    edx,0x1
   8dac9:	4c 89 e7             	mov    rdi,r12
   8dacc:	4c 89 f6             	mov    rsi,r14
   8dacf:	ff 15 1b f4 04 00    	call   QWORD PTR [rip+0x4f41b]        # dcef0 <_DYNAMIC+0x218>
   8dad5:	48 8b 44 24 10       	mov    rax,QWORD PTR [rsp+0x10]
   8dada:	48 83 c4 58          	add    rsp,0x58
   8dade:	5b                   	pop    rbx
   8dadf:	41 5c                	pop    r12
   8dae1:	41 5d                	pop    r13
   8dae3:	41 5e                	pop    r14
   8dae5:	41 5f                	pop    r15
   8dae7:	5d                   	pop    rbp
   8dae8:	c3                   	ret    
   8dae9:	31 ff                	xor    edi,edi
   8daeb:	48 8d 15 ee bc 04 00 	lea    rdx,[rip+0x4bcee]        # d97e0 <anon.e69fa87c05f933b9fe1f9c21a2065ba3.7.llvm.603266175965479879+0x3c8>
   8daf2:	48 8b 74 24 30       	mov    rsi,QWORD PTR [rsp+0x30]
   8daf7:	4c 8b 74 24 08       	mov    r14,QWORD PTR [rsp+0x8]
   8dafc:	4c 8b 24 24          	mov    r12,QWORD PTR [rsp]
   8db00:	ff 15 82 f4 04 00    	call   QWORD PTR [rip+0x4f482]        # dcf88 <_DYNAMIC+0x2b0>
   8db06:	eb 6c                	jmp    8db74 <future_backtest_sdk::context::StrategyContext::cancel_pending_ids+0x294>
   8db08:	48 8b 44 24 28       	mov    rax,QWORD PTR [rsp+0x28]
   8db0d:	48 8b 4c 24 10       	mov    rcx,QWORD PTR [rsp+0x10]
   8db12:	48 89 41 10          	mov    QWORD PTR [rcx+0x10],rax
   8db16:	0f 10 44 24 18       	movups xmm0,XMMWORD PTR [rsp+0x18]
   8db1b:	0f 11 01             	movups XMMWORD PTR [rcx],xmm0
   8db1e:	be 00 40 00 00       	mov    esi,0x4000
   8db23:	ba 01 00 00 00       	mov    edx,0x1
   8db28:	4c 89 ff             	mov    rdi,r15
   8db2b:	ff 15 bf f3 04 00    	call   QWORD PTR [rip+0x4f3bf]        # dcef0 <_DYNAMIC+0x218>
   8db31:	4c 8b 24 24          	mov    r12,QWORD PTR [rsp]
   8db35:	41 c6 04 24 00       	mov    BYTE PTR [r12],0x0
   8db3a:	4c 8b 74 24 08       	mov    r14,QWORD PTR [rsp+0x8]
   8db3f:	4d 85 f6             	test   r14,r14
   8db42:	75 80                	jne    8dac4 <future_backtest_sdk::context::StrategyContext::cancel_pending_ids+0x1e4>
   8db44:	eb 8f                	jmp    8dad5 <future_backtest_sdk::context::StrategyContext::cancel_pending_ids+0x1f5>
   8db46:	48 8d 15 93 bd 04 00 	lea    rdx,[rip+0x4bd93]        # d98e0 <anon.e69fa87c05f933b9fe1f9c21a2065ba3.7.llvm.603266175965479879+0x4c8>
   8db4d:	bf 01 00 00 00       	mov    edi,0x1
   8db52:	be 00 40 00 00       	mov    esi,0x4000
   8db57:	ff 15 2b f4 04 00    	call   QWORD PTR [rip+0x4f42b]        # dcf88 <_DYNAMIC+0x2b0>
   8db5d:	eb 15                	jmp    8db74 <future_backtest_sdk::context::StrategyContext::cancel_pending_ids+0x294>
   8db5f:	48 8d 15 92 bd 04 00 	lea    rdx,[rip+0x4bd92]        # d98f8 <anon.e69fa87c05f933b9fe1f9c21a2065ba3.7.llvm.603266175965479879+0x4e0>
   8db66:	bf 08 00 00 00       	mov    edi,0x8
   8db6b:	48 89 de             	mov    rsi,rbx
   8db6e:	ff 15 14 f4 04 00    	call   QWORD PTR [rip+0x4f414]        # dcf88 <_DYNAMIC+0x2b0>
   8db74:	0f 0b                	ud2    
   8db76:	48 89 5c 24 30       	mov    QWORD PTR [rsp+0x30],rbx
   8db7b:	bf 01 00 00 00       	mov    edi,0x1
   8db80:	e9 66 ff ff ff       	jmp    8daeb <future_backtest_sdk::context::StrategyContext::cancel_pending_ids+0x20b>
   8db85:	48 89 c3             	mov    rbx,rax
   8db88:	4d 85 ed             	test   r13,r13
   8db8b:	74 2b                	je     8dbb8 <future_backtest_sdk::context::StrategyContext::cancel_pending_ids+0x2d8>
   8db8d:	ba 01 00 00 00       	mov    edx,0x1
   8db92:	48 8b 7c 24 38       	mov    rdi,QWORD PTR [rsp+0x38]
   8db97:	4c 89 ee             	mov    rsi,r13
   8db9a:	ff 15 50 f3 04 00    	call   QWORD PTR [rip+0x4f350]        # dcef0 <_DYNAMIC+0x218>
   8dba0:	eb 16                	jmp    8dbb8 <future_backtest_sdk::context::StrategyContext::cancel_pending_ids+0x2d8>
   8dba2:	48 89 c3             	mov    rbx,rax
   8dba5:	4c 8b 74 24 08       	mov    r14,QWORD PTR [rsp+0x8]
   8dbaa:	4c 8b 24 24          	mov    r12,QWORD PTR [rsp]
   8dbae:	eb 20                	jmp    8dbd0 <future_backtest_sdk::context::StrategyContext::cancel_pending_ids+0x2f0>
   8dbb0:	48 89 c3             	mov    rbx,rax
   8dbb3:	eb 2e                	jmp    8dbe3 <future_backtest_sdk::context::StrategyContext::cancel_pending_ids+0x303>
   8dbb5:	48 89 c3             	mov    rbx,rax
   8dbb8:	4c 8b 74 24 08       	mov    r14,QWORD PTR [rsp+0x8]
   8dbbd:	4c 8b 24 24          	mov    r12,QWORD PTR [rsp]
   8dbc1:	eb 03                	jmp    8dbc6 <future_backtest_sdk::context::StrategyContext::cancel_pending_ids+0x2e6>
   8dbc3:	48 89 c3             	mov    rbx,rax
   8dbc6:	48 8d 7c 24 18       	lea    rdi,[rsp+0x18]
   8dbcb:	e8 70 ea ff ff       	call   8c640 <core::ptr::drop_in_place<alloc::vec::Vec<alloc::string::String>>>
   8dbd0:	be 00 40 00 00       	mov    esi,0x4000
   8dbd5:	ba 01 00 00 00       	mov    edx,0x1
   8dbda:	4c 89 ff             	mov    rdi,r15
   8dbdd:	ff 15 0d f3 04 00    	call   QWORD PTR [rip+0x4f30d]        # dcef0 <_DYNAMIC+0x218>
   8dbe3:	41 c6 04 24 00       	mov    BYTE PTR [r12],0x0
   8dbe8:	4d 85 f6             	test   r14,r14
   8dbeb:	74 11                	je     8dbfe <future_backtest_sdk::context::StrategyContext::cancel_pending_ids+0x31e>
   8dbed:	ba 01 00 00 00       	mov    edx,0x1
   8dbf2:	4c 89 e7             	mov    rdi,r12
   8dbf5:	4c 89 f6             	mov    rsi,r14
   8dbf8:	ff 15 f2 f2 04 00    	call   QWORD PTR [rip+0x4f2f2]        # dcef0 <_DYNAMIC+0x218>
   8dbfe:	48 89 df             	mov    rdi,rbx
   8dc01:	e8 fa 81 04 00       	call   d5e00 <_Unwind_Resume@plt>
   8dc06:	cc                   	int3   
   8dc07:	cc                   	int3   
   8dc08:	cc                   	int3   
   8dc09:	cc                   	int3   
   8dc0a:	cc                   	int3   
   8dc0b:	cc                   	int3   
   8dc0c:	cc                   	int3   
   8dc0d:	cc                   	int3   
   8dc0e:	cc                   	int3   
   8dc0f:	cc                   	int3   