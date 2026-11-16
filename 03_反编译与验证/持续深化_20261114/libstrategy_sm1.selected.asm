000000000008ad70 <future_backtest_sdk::context::StrategyContext::cancel_order>:
   8ad70:	55                   	push   rbp
   8ad71:	41 57                	push   r15
   8ad73:	41 56                	push   r14
   8ad75:	41 55                	push   r13
   8ad77:	41 54                	push   r12
   8ad79:	53                   	push   rbx
   8ad7a:	48 81 ec 88 00 00 00 	sub    rsp,0x88
   8ad81:	4d 89 c7             	mov    r15,r8
   8ad84:	49 89 cc             	mov    r12,rcx
   8ad87:	49 89 fd             	mov    r13,rdi
   8ad8a:	48 89 34 24          	mov    QWORD PTR [rsp],rsi
   8ad8e:	48 89 54 24 08       	mov    QWORD PTR [rsp+0x8],rdx
   8ad93:	48 89 4c 24 10       	mov    QWORD PTR [rsp+0x10],rcx
   8ad98:	4c 89 44 24 18       	mov    QWORD PTR [rsp+0x18],r8
   8ad9d:	48 8b 2d ac ef 04 00 	mov    rbp,QWORD PTR [rip+0x4efac]        # d9d50 <_DYNAMIC+0x888>
   8ada4:	48 89 f7             	mov    rdi,rsi
   8ada7:	48 89 d6             	mov    rsi,rdx
   8adaa:	ff d5                	call   rbp
   8adac:	49 89 c6             	mov    r14,rax
   8adaf:	48 89 d3             	mov    rbx,rdx
   8adb2:	4c 89 e7             	mov    rdi,r12
   8adb5:	4c 89 fe             	mov    rsi,r15
   8adb8:	ff d5                	call   rbp
   8adba:	49 89 c4             	mov    r12,rax
   8adbd:	49 89 d7             	mov    r15,rdx
   8adc0:	49 8b 7d 30          	mov    rdi,QWORD PTR [r13+0x30]
   8adc4:	4c 89 f6             	mov    rsi,r14
   8adc7:	48 89 c2             	mov    rdx,rax
   8adca:	ff 15 40 f0 04 00    	call   QWORD PTR [rip+0x4f040]        # d9e10 <fb_ctx_cancel_order@Base>
   8add0:	85 c0                	test   eax,eax
   8add2:	78 4d                	js     8ae21 <future_backtest_sdk::context::StrategyContext::cancel_order+0xb1>
   8add4:	45 31 ed             	xor    r13d,r13d
   8add7:	41 c6 04 24 00       	mov    BYTE PTR [r12],0x0
   8addc:	4d 85 ff             	test   r15,r15
   8addf:	74 11                	je     8adf2 <future_backtest_sdk::context::StrategyContext::cancel_order+0x82>
   8ade1:	ba 01 00 00 00       	mov    edx,0x1
   8ade6:	4c 89 e7             	mov    rdi,r12
   8ade9:	4c 89 fe             	mov    rsi,r15
   8adec:	ff 15 de e8 04 00    	call   QWORD PTR [rip+0x4e8de]        # d96d0 <_DYNAMIC+0x208>
   8adf2:	41 c6 06 00          	mov    BYTE PTR [r14],0x0
   8adf6:	48 85 db             	test   rbx,rbx
   8adf9:	74 11                	je     8ae0c <future_backtest_sdk::context::StrategyContext::cancel_order+0x9c>
   8adfb:	ba 01 00 00 00       	mov    edx,0x1
   8ae00:	4c 89 f7             	mov    rdi,r14
   8ae03:	48 89 de             	mov    rsi,rbx
   8ae06:	ff 15 c4 e8 04 00    	call   QWORD PTR [rip+0x4e8c4]        # d96d0 <_DYNAMIC+0x208>
   8ae0c:	4c 89 e8             	mov    rax,r13
   8ae0f:	48 81 c4 88 00 00 00 	add    rsp,0x88
   8ae16:	5b                   	pop    rbx
   8ae17:	41 5c                	pop    r12
   8ae19:	41 5d                	pop    r13
   8ae1b:	41 5e                	pop    r14
   8ae1d:	41 5f                	pop    r15
   8ae1f:	5d                   	pop    rbp
   8ae20:	c3                   	ret    
   8ae21:	48 89 e0             	mov    rax,rsp
   8ae24:	48 89 44 24 20       	mov    QWORD PTR [rsp+0x20],rax
   8ae29:	48 8d 05 90 17 00 00 	lea    rax,[rip+0x1790]        # 8c5c0 <<&T as core::fmt::Display>::fmt>
   8ae30:	48 89 44 24 28       	mov    QWORD PTR [rsp+0x28],rax
   8ae35:	48 8d 4c 24 10       	lea    rcx,[rsp+0x10]
   8ae3a:	48 89 4c 24 30       	mov    QWORD PTR [rsp+0x30],rcx
   8ae3f:	48 89 44 24 38       	mov    QWORD PTR [rsp+0x38],rax
   8ae44:	48 8d 05 6d b3 04 00 	lea    rax,[rip+0x4b36d]        # d61b8 <anon.6dca787fc37e48e710a1dbd955c10c13.17.llvm.6582718418885566971+0x1b0>
   8ae4b:	48 89 44 24 40       	mov    QWORD PTR [rsp+0x40],rax
   8ae50:	48 c7 44 24 48 02 00 	mov    QWORD PTR [rsp+0x48],0x2
   8ae57:	00 00 
   8ae59:	48 c7 44 24 60 00 00 	mov    QWORD PTR [rsp+0x60],0x0
   8ae60:	00 00 
   8ae62:	48 8d 44 24 20       	lea    rax,[rsp+0x20]
   8ae67:	48 89 44 24 50       	mov    QWORD PTR [rsp+0x50],rax
   8ae6c:	48 c7 44 24 58 02 00 	mov    QWORD PTR [rsp+0x58],0x2
   8ae73:	00 00 
   8ae75:	48 8d 7c 24 70       	lea    rdi,[rsp+0x70]
   8ae7a:	48 8d 74 24 40       	lea    rsi,[rsp+0x40]
   8ae7f:	ff 15 8b e9 04 00    	call   QWORD PTR [rip+0x4e98b]        # d9810 <_DYNAMIC+0x348>
   8ae85:	48 8d 7c 24 70       	lea    rdi,[rsp+0x70]
   8ae8a:	e8 a1 09 00 00       	call   8b830 <anyhow::error::<impl anyhow::Error>::msg>
   8ae8f:	49 89 c5             	mov    r13,rax
   8ae92:	41 c6 04 24 00       	mov    BYTE PTR [r12],0x0
   8ae97:	4d 85 ff             	test   r15,r15
   8ae9a:	0f 85 41 ff ff ff    	jne    8ade1 <future_backtest_sdk::context::StrategyContext::cancel_order+0x71>
   8aea0:	e9 4d ff ff ff       	jmp    8adf2 <future_backtest_sdk::context::StrategyContext::cancel_order+0x82>
   8aea5:	49 89 c5             	mov    r13,rax
   8aea8:	41 c6 04 24 00       	mov    BYTE PTR [r12],0x0
   8aead:	4d 85 ff             	test   r15,r15
   8aeb0:	74 16                	je     8aec8 <future_backtest_sdk::context::StrategyContext::cancel_order+0x158>
   8aeb2:	ba 01 00 00 00       	mov    edx,0x1
   8aeb7:	4c 89 e7             	mov    rdi,r12
   8aeba:	4c 89 fe             	mov    rsi,r15
   8aebd:	ff 15 0d e8 04 00    	call   QWORD PTR [rip+0x4e80d]        # d96d0 <_DYNAMIC+0x208>
   8aec3:	eb 03                	jmp    8aec8 <future_backtest_sdk::context::StrategyContext::cancel_order+0x158>
   8aec5:	49 89 c5             	mov    r13,rax
   8aec8:	41 c6 06 00          	mov    BYTE PTR [r14],0x0
   8aecc:	48 85 db             	test   rbx,rbx
   8aecf:	74 11                	je     8aee2 <future_backtest_sdk::context::StrategyContext::cancel_order+0x172>
   8aed1:	ba 01 00 00 00       	mov    edx,0x1
   8aed6:	4c 89 f7             	mov    rdi,r14
   8aed9:	48 89 de             	mov    rsi,rbx
   8aedc:	ff 15 ee e7 04 00    	call   QWORD PTR [rip+0x4e7ee]        # d96d0 <_DYNAMIC+0x208>
   8aee2:	4c 89 ef             	mov    rdi,r13
   8aee5:	e8 56 77 04 00       	call   d2640 <_Unwind_Resume@plt>
   8aeea:	cc                   	int3   
   8aeeb:	cc                   	int3   
   8aeec:	cc                   	int3   
   8aeed:	cc                   	int3   
   8aeee:	cc                   	int3   
   8aeef:	cc                   	int3   

000000000008a890 <future_backtest_sdk::context::StrategyContext::pending_orders>:
   8a890:	55                   	push   rbp
   8a891:	41 57                	push   r15
   8a893:	41 56                	push   r14
   8a895:	41 55                	push   r13
   8a897:	41 54                	push   r12
   8a899:	53                   	push   rbx
   8a89a:	48 81 ec 00 10 00 00 	sub    rsp,0x1000
   8a8a1:	48 c7 04 24 00 00 00 	mov    QWORD PTR [rsp],0x0
   8a8a8:	00 
   8a8a9:	48 81 ec f8 00 00 00 	sub    rsp,0xf8
   8a8b0:	48 89 74 24 08       	mov    QWORD PTR [rsp+0x8],rsi
   8a8b5:	48 89 7c 24 28       	mov    QWORD PTR [rsp+0x28],rdi
   8a8ba:	48 89 54 24 58       	mov    QWORD PTR [rsp+0x58],rdx
   8a8bf:	48 89 d7             	mov    rdi,rdx
   8a8c2:	48 89 4c 24 60       	mov    QWORD PTR [rsp+0x60],rcx
   8a8c7:	48 89 ce             	mov    rsi,rcx
   8a8ca:	ff 15 80 f4 04 00    	call   QWORD PTR [rip+0x4f480]        # d9d50 <_DYNAMIC+0x888>
   8a8d0:	49 89 c4             	mov    r12,rax
   8a8d3:	48 89 54 24 38       	mov    QWORD PTR [rsp+0x38],rdx
   8a8d8:	0f 57 c0             	xorps  xmm0,xmm0
   8a8db:	0f 29 84 24 e0 00 00 	movaps XMMWORD PTR [rsp+0xe0],xmm0
   8a8e2:	00 
   8a8e3:	0f 29 84 24 d0 00 00 	movaps XMMWORD PTR [rsp+0xd0],xmm0
   8a8ea:	00 
   8a8eb:	0f 29 84 24 c0 00 00 	movaps XMMWORD PTR [rsp+0xc0],xmm0
   8a8f2:	00 
   8a8f3:	0f 29 84 24 b0 00 00 	movaps XMMWORD PTR [rsp+0xb0],xmm0
   8a8fa:	00 
   8a8fb:	48 8d bc 24 f8 00 00 	lea    rdi,[rsp+0xf8]
   8a902:	00 
   8a903:	4c 8b 3d 96 f3 04 00 	mov    r15,QWORD PTR [rip+0x4f396]        # d9ca0 <memset@GLIBC_2.2.5>
   8a90a:	ba 00 02 00 00       	mov    edx,0x200
   8a90f:	31 f6                	xor    esi,esi
   8a911:	41 ff d7             	call   r15
   8a914:	48 8d bc 24 f8 02 00 	lea    rdi,[rsp+0x2f8]
   8a91b:	00 
   8a91c:	ba 00 02 00 00       	mov    edx,0x200
   8a921:	31 f6                	xor    esi,esi
   8a923:	41 ff d7             	call   r15
   8a926:	4c 8d ac 24 f8 04 00 	lea    r13,[rsp+0x4f8]
   8a92d:	00 
   8a92e:	ba 00 02 00 00       	mov    edx,0x200
   8a933:	4c 89 ef             	mov    rdi,r13
   8a936:	31 f6                	xor    esi,esi
   8a938:	41 ff d7             	call   r15
   8a93b:	48 8d 9c 24 f8 06 00 	lea    rbx,[rsp+0x6f8]
   8a942:	00 
   8a943:	ba 00 02 00 00       	mov    edx,0x200
   8a948:	48 89 df             	mov    rdi,rbx
   8a94b:	31 f6                	xor    esi,esi
   8a94d:	41 ff d7             	call   r15
   8a950:	48 8d ac 24 f8 08 00 	lea    rbp,[rsp+0x8f8]
   8a957:	00 
   8a958:	41 be 00 08 00 00    	mov    r14d,0x800
   8a95e:	ba 00 08 00 00       	mov    edx,0x800
   8a963:	48 89 ef             	mov    rdi,rbp
   8a966:	31 f6                	xor    esi,esi
   8a968:	41 ff d7             	call   r15
   8a96b:	48 8b 44 24 08       	mov    rax,QWORD PTR [rsp+0x8]
   8a970:	48 8b 78 30          	mov    rdi,QWORD PTR [rax+0x30]
   8a974:	48 8d 94 24 b0 00 00 	lea    rdx,[rsp+0xb0]
   8a97b:	00 
   8a97c:	4c 89 64 24 30       	mov    QWORD PTR [rsp+0x30],r12
   8a981:	4c 89 e6             	mov    rsi,r12
   8a984:	48 8d 8c 24 f8 00 00 	lea    rcx,[rsp+0xf8]
   8a98b:	00 
   8a98c:	4c 8d 84 24 f8 02 00 	lea    r8,[rsp+0x2f8]
   8a993:	00 
   8a994:	4d 89 e9             	mov    r9,r13
   8a997:	6a 40                	push   0x40
   8a999:	68 00 08 00 00       	push   0x800
   8a99e:	55                   	push   rbp
   8a99f:	53                   	push   rbx
   8a9a0:	ff 15 62 f4 04 00    	call   QWORD PTR [rip+0x4f462]        # d9e08 <fb_ctx_pending_orders@Base>
   8a9a6:	48 83 c4 20          	add    rsp,0x20
   8a9aa:	48 c7 44 24 10 00 00 	mov    QWORD PTR [rsp+0x10],0x0
   8a9b1:	00 00 
   8a9b3:	48 c7 44 24 18 08 00 	mov    QWORD PTR [rsp+0x18],0x8
   8a9ba:	00 00 
   8a9bc:	48 c7 44 24 20 00 00 	mov    QWORD PTR [rsp+0x20],0x0
   8a9c3:	00 00 
   8a9c5:	4c 63 e8             	movsxd r13,eax
   8a9c8:	48 8d 84 24 f8 10 00 	lea    rax,[rsp+0x10f8]
   8a9cf:	00 
   8a9d0:	31 d2                	xor    edx,edx
   8a9d2:	66 66 66 66 66 2e 0f 	data16 data16 data16 data16 cs nop WORD PTR [rax+rax*1+0x0]
   8a9d9:	1f 84 00 00 00 00 00 
   8a9e0:	44 0f b6 64 15 00    	movzx  r12d,BYTE PTR [rbp+rdx*1+0x0]
   8a9e6:	45 84 e4             	test   r12b,r12b
   8a9e9:	74 25                	je     8aa10 <future_backtest_sdk::context::StrategyContext::pending_orders+0x180>
   8a9eb:	48 8d 0c 2a          	lea    rcx,[rdx+rbp*1]
   8a9ef:	48 ff c1             	inc    rcx
   8a9f2:	48 ff c2             	inc    rdx
   8a9f5:	48 39 c1             	cmp    rcx,rax
   8a9f8:	75 e6                	jne    8a9e0 <future_backtest_sdk::context::StrategyContext::pending_orders+0x150>
   8a9fa:	49 89 ef             	mov    r15,rbp
   8a9fd:	4c 89 f3             	mov    rbx,r14
   8aa00:	4c 89 f2             	mov    rdx,r14
   8aa03:	eb 24                	jmp    8aa29 <future_backtest_sdk::context::StrategyContext::pending_orders+0x199>
   8aa05:	66 66 2e 0f 1f 84 00 	data16 cs nop WORD PTR [rax+rax*1+0x0]
   8aa0c:	00 00 00 00 
   8aa10:	48 89 d3             	mov    rbx,rdx
   8aa13:	48 f7 d3             	not    rbx
   8aa16:	4c 01 f3             	add    rbx,r14
   8aa19:	4c 8d 3c 2a          	lea    r15,[rdx+rbp*1]
   8aa1d:	49 ff c7             	inc    r15
   8aa20:	48 85 d2             	test   rdx,rdx
   8aa23:	0f 84 e3 00 00 00    	je     8ab0c <future_backtest_sdk::context::StrategyContext::pending_orders+0x27c>
   8aa29:	48 8d 7c 24 68       	lea    rdi,[rsp+0x68]
   8aa2e:	48 89 ee             	mov    rsi,rbp
   8aa31:	ff 15 79 f1 04 00    	call   QWORD PTR [rip+0x4f179]        # d9bb0 <_DYNAMIC+0x6e8>
   8aa37:	83 7c 24 68 01       	cmp    DWORD PTR [rsp+0x68],0x1
   8aa3c:	75 22                	jne    8aa60 <future_backtest_sdk::context::StrategyContext::pending_orders+0x1d0>
   8aa3e:	4c 8b 74 24 20       	mov    r14,QWORD PTR [rsp+0x20]
   8aa43:	45 84 e4             	test   r12b,r12b
   8aa46:	0f 84 bb 00 00 00    	je     8ab07 <future_backtest_sdk::context::StrategyContext::pending_orders+0x277>
   8aa4c:	e9 ce 00 00 00       	jmp    8ab1f <future_backtest_sdk::context::StrategyContext::pending_orders+0x28f>
   8aa51:	66 66 66 66 66 66 2e 	data16 data16 data16 data16 data16 cs nop WORD PTR [rax+rax*1+0x0]
   8aa58:	0f 1f 84 00 00 00 00 
   8aa5f:	00 
   8aa60:	48 8b 6c 24 78       	mov    rbp,QWORD PTR [rsp+0x78]
   8aa65:	48 85 ed             	test   rbp,rbp
   8aa68:	0f 88 c0 00 00 00    	js     8ab2e <future_backtest_sdk::context::StrategyContext::pending_orders+0x29e>
   8aa6e:	48 8b 74 24 70       	mov    rsi,QWORD PTR [rsp+0x70]
   8aa73:	74 38                	je     8aaad <future_backtest_sdk::context::StrategyContext::pending_orders+0x21d>
   8aa75:	48 89 74 24 08       	mov    QWORD PTR [rsp+0x8],rsi
   8aa7a:	4d 89 ee             	mov    r14,r13
   8aa7d:	ff 15 6d ec 04 00    	call   QWORD PTR [rip+0x4ec6d]        # d96f0 <_DYNAMIC+0x228>
   8aa83:	41 bd 01 00 00 00    	mov    r13d,0x1
   8aa89:	be 01 00 00 00       	mov    esi,0x1
   8aa8e:	48 89 ef             	mov    rdi,rbp
   8aa91:	ff 15 31 ec 04 00    	call   QWORD PTR [rip+0x4ec31]        # d96c8 <_DYNAMIC+0x200>
   8aa97:	48 85 c0             	test   rax,rax
   8aa9a:	0f 84 43 02 00 00    	je     8ace3 <future_backtest_sdk::context::StrategyContext::pending_orders+0x453>
   8aaa0:	48 89 c7             	mov    rdi,rax
   8aaa3:	4d 89 f5             	mov    r13,r14
   8aaa6:	48 8b 74 24 08       	mov    rsi,QWORD PTR [rsp+0x8]
   8aaab:	eb 05                	jmp    8aab2 <future_backtest_sdk::context::StrategyContext::pending_orders+0x222>
   8aaad:	bf 01 00 00 00       	mov    edi,0x1
   8aab2:	48 89 7c 24 08       	mov    QWORD PTR [rsp+0x8],rdi
   8aab7:	48 89 ea             	mov    rdx,rbp
   8aaba:	ff 15 68 ec 04 00    	call   QWORD PTR [rip+0x4ec68]        # d9728 <memcpy@GLIBC_2.14>
   8aac0:	4c 8b 74 24 20       	mov    r14,QWORD PTR [rsp+0x20]
   8aac5:	4c 3b 74 24 10       	cmp    r14,QWORD PTR [rsp+0x10]
   8aaca:	75 12                	jne    8aade <future_backtest_sdk::context::StrategyContext::pending_orders+0x24e>
   8aacc:	48 8d 7c 24 10       	lea    rdi,[rsp+0x10]
   8aad1:	48 8d 35 c8 b6 04 00 	lea    rsi,[rip+0x4b6c8]        # d61a0 <anon.6dca787fc37e48e710a1dbd955c10c13.17.llvm.6582718418885566971+0x198>
   8aad8:	ff 15 0a ed 04 00    	call   QWORD PTR [rip+0x4ed0a]        # d97e8 <_DYNAMIC+0x320>
   8aade:	48 8b 44 24 18       	mov    rax,QWORD PTR [rsp+0x18]
   8aae3:	4b 8d 0c 76          	lea    rcx,[r14+r14*2]
   8aae7:	48 89 2c c8          	mov    QWORD PTR [rax+rcx*8],rbp
   8aaeb:	48 8b 54 24 08       	mov    rdx,QWORD PTR [rsp+0x8]
   8aaf0:	48 89 54 c8 08       	mov    QWORD PTR [rax+rcx*8+0x8],rdx
   8aaf5:	48 89 6c c8 10       	mov    QWORD PTR [rax+rcx*8+0x10],rbp
   8aafa:	49 ff c6             	inc    r14
   8aafd:	4c 89 74 24 20       	mov    QWORD PTR [rsp+0x20],r14
   8ab02:	45 84 e4             	test   r12b,r12b
   8ab05:	75 18                	jne    8ab1f <future_backtest_sdk::context::StrategyContext::pending_orders+0x28f>
   8ab07:	4d 39 ee             	cmp    r14,r13
   8ab0a:	73 13                	jae    8ab1f <future_backtest_sdk::context::StrategyContext::pending_orders+0x28f>
   8ab0c:	49 8d 04 1f          	lea    rax,[r15+rbx*1]
   8ab10:	4c 89 fd             	mov    rbp,r15
   8ab13:	49 89 de             	mov    r14,rbx
   8ab16:	48 85 db             	test   rbx,rbx
   8ab19:	0f 85 b1 fe ff ff    	jne    8a9d0 <future_backtest_sdk::context::StrategyContext::pending_orders+0x140>
   8ab1f:	4c 8b 74 24 60       	mov    r14,QWORD PTR [rsp+0x60]
   8ab24:	4d 85 f6             	test   r14,r14
   8ab27:	79 1f                	jns    8ab48 <future_backtest_sdk::context::StrategyContext::pending_orders+0x2b8>
   8ab29:	45 31 ed             	xor    r13d,r13d
   8ab2c:	eb 08                	jmp    8ab36 <future_backtest_sdk::context::StrategyContext::pending_orders+0x2a6>
   8ab2e:	45 31 ed             	xor    r13d,r13d
   8ab31:	48 8b 74 24 08       	mov    rsi,QWORD PTR [rsp+0x8]
   8ab36:	48 8d 15 2b b5 04 00 	lea    rdx,[rip+0x4b52b]        # d6068 <anon.6dca787fc37e48e710a1dbd955c10c13.17.llvm.6582718418885566971+0x60>
   8ab3d:	4c 89 ef             	mov    rdi,r13
   8ab40:	ff 15 82 ec 04 00    	call   QWORD PTR [rip+0x4ec82]        # d97c8 <_DYNAMIC+0x300>
   8ab46:	0f 0b                	ud2    
   8ab48:	74 33                	je     8ab7d <future_backtest_sdk::context::StrategyContext::pending_orders+0x2ed>
   8ab4a:	4d 89 ef             	mov    r15,r13
   8ab4d:	ff 15 9d eb 04 00    	call   QWORD PTR [rip+0x4eb9d]        # d96f0 <_DYNAMIC+0x228>
   8ab53:	41 bd 01 00 00 00    	mov    r13d,0x1
   8ab59:	be 01 00 00 00       	mov    esi,0x1
   8ab5e:	4c 89 f7             	mov    rdi,r14
   8ab61:	ff 15 61 eb 04 00    	call   QWORD PTR [rip+0x4eb61]        # d96c8 <_DYNAMIC+0x200>
   8ab67:	48 85 c0             	test   rax,rax
   8ab6a:	4c 8b 64 24 28       	mov    r12,QWORD PTR [rsp+0x28]
   8ab6f:	0f 84 76 01 00 00    	je     8aceb <future_backtest_sdk::context::StrategyContext::pending_orders+0x45b>
   8ab75:	48 89 c3             	mov    rbx,rax
   8ab78:	4d 89 fd             	mov    r13,r15
   8ab7b:	eb 0a                	jmp    8ab87 <future_backtest_sdk::context::StrategyContext::pending_orders+0x2f7>
   8ab7d:	bb 01 00 00 00       	mov    ebx,0x1
   8ab82:	4c 8b 64 24 28       	mov    r12,QWORD PTR [rsp+0x28]
   8ab87:	48 89 df             	mov    rdi,rbx
   8ab8a:	48 8b 74 24 58       	mov    rsi,QWORD PTR [rsp+0x58]
   8ab8f:	4c 89 f2             	mov    rdx,r14
   8ab92:	ff 15 90 eb 04 00    	call   QWORD PTR [rip+0x4eb90]        # d9728 <memcpy@GLIBC_2.14>
   8ab98:	4c 89 74 24 40       	mov    QWORD PTR [rsp+0x40],r14
   8ab9d:	48 89 5c 24 48       	mov    QWORD PTR [rsp+0x48],rbx
   8aba2:	4c 89 74 24 50       	mov    QWORD PTR [rsp+0x50],r14
   8aba7:	48 8d 44 24 10       	lea    rax,[rsp+0x10]
   8abac:	48 89 44 24 68       	mov    QWORD PTR [rsp+0x68],rax
   8abb1:	48 8d 44 24 40       	lea    rax,[rsp+0x40]
   8abb6:	48 89 44 24 70       	mov    QWORD PTR [rsp+0x70],rax
   8abbb:	48 8d 84 24 b0 00 00 	lea    rax,[rsp+0xb0]
   8abc2:	00 
   8abc3:	48 89 44 24 78       	mov    QWORD PTR [rsp+0x78],rax
   8abc8:	48 8d 84 24 f8 00 00 	lea    rax,[rsp+0xf8]
   8abcf:	00 
   8abd0:	48 89 84 24 80 00 00 	mov    QWORD PTR [rsp+0x80],rax
   8abd7:	00 
   8abd8:	48 8d 84 24 f8 02 00 	lea    rax,[rsp+0x2f8]
   8abdf:	00 
   8abe0:	48 89 84 24 88 00 00 	mov    QWORD PTR [rsp+0x88],rax
   8abe7:	00 
   8abe8:	48 8d 84 24 f8 04 00 	lea    rax,[rsp+0x4f8]
   8abef:	00 
   8abf0:	48 89 84 24 90 00 00 	mov    QWORD PTR [rsp+0x90],rax
   8abf7:	00 
   8abf8:	48 8d 84 24 f8 06 00 	lea    rax,[rsp+0x6f8]
   8abff:	00 
   8ac00:	48 89 84 24 98 00 00 	mov    QWORD PTR [rsp+0x98],rax
   8ac07:	00 
   8ac08:	48 c7 84 24 a0 00 00 	mov    QWORD PTR [rsp+0xa0],0x0
   8ac0f:	00 00 00 00 00 
   8ac14:	4c 89 ac 24 a8 00 00 	mov    QWORD PTR [rsp+0xa8],r13
   8ac1b:	00 
   8ac1c:	48 8d 15 15 b4 04 00 	lea    rdx,[rip+0x4b415]        # d6038 <anon.6dca787fc37e48e710a1dbd955c10c13.17.llvm.6582718418885566971+0x30>
   8ac23:	48 8d 74 24 68       	lea    rsi,[rsp+0x68]
   8ac28:	4c 89 e7             	mov    rdi,r12
   8ac2b:	e8 c0 20 00 00       	call   8ccf0 <<alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter>
   8ac30:	48 8b 74 24 40       	mov    rsi,QWORD PTR [rsp+0x40]
   8ac35:	48 85 f6             	test   rsi,rsi
   8ac38:	74 10                	je     8ac4a <future_backtest_sdk::context::StrategyContext::pending_orders+0x3ba>
   8ac3a:	48 8b 7c 24 48       	mov    rdi,QWORD PTR [rsp+0x48]
   8ac3f:	ba 01 00 00 00       	mov    edx,0x1
   8ac44:	ff 15 86 ea 04 00    	call   QWORD PTR [rip+0x4ea86]        # d96d0 <_DYNAMIC+0x208>
   8ac4a:	48 8b 5c 24 20       	mov    rbx,QWORD PTR [rsp+0x20]
   8ac4f:	48 85 db             	test   rbx,rbx
   8ac52:	74 3b                	je     8ac8f <future_backtest_sdk::context::StrategyContext::pending_orders+0x3ff>
   8ac54:	4c 8b 74 24 18       	mov    r14,QWORD PTR [rsp+0x18]
   8ac59:	49 83 c6 08          	add    r14,0x8
   8ac5d:	4c 8b 3d 6c ea 04 00 	mov    r15,QWORD PTR [rip+0x4ea6c]        # d96d0 <_DYNAMIC+0x208>
   8ac64:	eb 13                	jmp    8ac79 <future_backtest_sdk::context::StrategyContext::pending_orders+0x3e9>
   8ac66:	66 2e 0f 1f 84 00 00 	cs nop WORD PTR [rax+rax*1+0x0]
   8ac6d:	00 00 00 
   8ac70:	49 83 c6 18          	add    r14,0x18
   8ac74:	48 ff cb             	dec    rbx
   8ac77:	74 16                	je     8ac8f <future_backtest_sdk::context::StrategyContext::pending_orders+0x3ff>
   8ac79:	49 8b 76 f8          	mov    rsi,QWORD PTR [r14-0x8]
   8ac7d:	48 85 f6             	test   rsi,rsi
   8ac80:	74 ee                	je     8ac70 <future_backtest_sdk::context::StrategyContext::pending_orders+0x3e0>
   8ac82:	49 8b 3e             	mov    rdi,QWORD PTR [r14]
   8ac85:	ba 01 00 00 00       	mov    edx,0x1
   8ac8a:	41 ff d7             	call   r15
   8ac8d:	eb e1                	jmp    8ac70 <future_backtest_sdk::context::StrategyContext::pending_orders+0x3e0>
   8ac8f:	48 8b 44 24 10       	mov    rax,QWORD PTR [rsp+0x10]
   8ac94:	48 85 c0             	test   rax,rax
   8ac97:	74 18                	je     8acb1 <future_backtest_sdk::context::StrategyContext::pending_orders+0x421>
   8ac99:	48 8b 7c 24 18       	mov    rdi,QWORD PTR [rsp+0x18]
   8ac9e:	48 c1 e0 03          	shl    rax,0x3
   8aca2:	48 8d 34 40          	lea    rsi,[rax+rax*2]
   8aca6:	ba 08 00 00 00       	mov    edx,0x8
   8acab:	ff 15 1f ea 04 00    	call   QWORD PTR [rip+0x4ea1f]        # d96d0 <_DYNAMIC+0x208>
   8acb1:	48 8b 7c 24 30       	mov    rdi,QWORD PTR [rsp+0x30]
   8acb6:	c6 07 00             	mov    BYTE PTR [rdi],0x0
   8acb9:	48 8b 74 24 38       	mov    rsi,QWORD PTR [rsp+0x38]
   8acbe:	48 85 f6             	test   rsi,rsi
   8acc1:	74 0b                	je     8acce <future_backtest_sdk::context::StrategyContext::pending_orders+0x43e>
   8acc3:	ba 01 00 00 00       	mov    edx,0x1
   8acc8:	ff 15 02 ea 04 00    	call   QWORD PTR [rip+0x4ea02]        # d96d0 <_DYNAMIC+0x208>
   8acce:	4c 89 e0             	mov    rax,r12
   8acd1:	48 81 c4 f8 10 00 00 	add    rsp,0x10f8
   8acd8:	5b                   	pop    rbx
   8acd9:	41 5c                	pop    r12
   8acdb:	41 5d                	pop    r13
   8acdd:	41 5e                	pop    r14
   8acdf:	41 5f                	pop    r15
   8ace1:	5d                   	pop    rbp
   8ace2:	c3                   	ret    
   8ace3:	48 89 ee             	mov    rsi,rbp
   8ace6:	e9 4b fe ff ff       	jmp    8ab36 <future_backtest_sdk::context::StrategyContext::pending_orders+0x2a6>
   8aceb:	4c 89 f6             	mov    rsi,r14
   8acee:	e9 43 fe ff ff       	jmp    8ab36 <future_backtest_sdk::context::StrategyContext::pending_orders+0x2a6>
   8acf3:	48 89 c3             	mov    rbx,rax
   8acf6:	48 8b 74 24 40       	mov    rsi,QWORD PTR [rsp+0x40]
   8acfb:	48 85 f6             	test   rsi,rsi
   8acfe:	74 34                	je     8ad34 <future_backtest_sdk::context::StrategyContext::pending_orders+0x4a4>
   8ad00:	48 8b 7c 24 48       	mov    rdi,QWORD PTR [rsp+0x48]
   8ad05:	ba 01 00 00 00       	mov    edx,0x1
   8ad0a:	ff 15 c0 e9 04 00    	call   QWORD PTR [rip+0x4e9c0]        # d96d0 <_DYNAMIC+0x208>
   8ad10:	eb 22                	jmp    8ad34 <future_backtest_sdk::context::StrategyContext::pending_orders+0x4a4>
   8ad12:	48 89 c3             	mov    rbx,rax
   8ad15:	48 85 ed             	test   rbp,rbp
   8ad18:	74 1a                	je     8ad34 <future_backtest_sdk::context::StrategyContext::pending_orders+0x4a4>
   8ad1a:	ba 01 00 00 00       	mov    edx,0x1
   8ad1f:	48 8b 7c 24 08       	mov    rdi,QWORD PTR [rsp+0x8]
   8ad24:	48 89 ee             	mov    rsi,rbp
   8ad27:	ff 15 a3 e9 04 00    	call   QWORD PTR [rip+0x4e9a3]        # d96d0 <_DYNAMIC+0x208>
   8ad2d:	eb 05                	jmp    8ad34 <future_backtest_sdk::context::StrategyContext::pending_orders+0x4a4>
   8ad2f:	eb 00                	jmp    8ad31 <future_backtest_sdk::context::StrategyContext::pending_orders+0x4a1>
   8ad31:	48 89 c3             	mov    rbx,rax
   8ad34:	48 8d 7c 24 10       	lea    rdi,[rsp+0x10]
   8ad39:	e8 52 e8 ff ff       	call   89590 <core::ptr::drop_in_place<alloc::vec::Vec<alloc::string::String>>>
   8ad3e:	48 8b 7c 24 30       	mov    rdi,QWORD PTR [rsp+0x30]
   8ad43:	c6 07 00             	mov    BYTE PTR [rdi],0x0
   8ad46:	48 8b 74 24 38       	mov    rsi,QWORD PTR [rsp+0x38]
   8ad4b:	48 85 f6             	test   rsi,rsi
   8ad4e:	74 0b                	je     8ad5b <future_backtest_sdk::context::StrategyContext::pending_orders+0x4cb>
   8ad50:	ba 01 00 00 00       	mov    edx,0x1
   8ad55:	ff 15 75 e9 04 00    	call   QWORD PTR [rip+0x4e975]        # d96d0 <_DYNAMIC+0x208>
   8ad5b:	48 89 df             	mov    rdi,rbx
   8ad5e:	e8 dd 78 04 00       	call   d2640 <_Unwind_Resume@plt>
   8ad63:	cc                   	int3   
   8ad64:	cc                   	int3   
   8ad65:	cc                   	int3   
   8ad66:	cc                   	int3   
   8ad67:	cc                   	int3   
   8ad68:	cc                   	int3   
   8ad69:	cc                   	int3   
   8ad6a:	cc                   	int3   
   8ad6b:	cc                   	int3   
   8ad6c:	cc                   	int3   
   8ad6d:	cc                   	int3   
   8ad6e:	cc                   	int3   
   8ad6f:	cc                   	int3   

000000000008a510 <future_backtest_sdk::context::StrategyContext::cancel_pending_ids>:
   8a510:	55                   	push   rbp
   8a511:	41 57                	push   r15
   8a513:	41 56                	push   r14
   8a515:	41 55                	push   r13
   8a517:	41 54                	push   r12
   8a519:	53                   	push   rbx
   8a51a:	48 83 ec 58          	sub    rsp,0x58
   8a51e:	48 89 f3             	mov    rbx,rsi
   8a521:	48 89 7c 24 10       	mov    QWORD PTR [rsp+0x10],rdi
   8a526:	48 89 d7             	mov    rdi,rdx
   8a529:	48 89 ce             	mov    rsi,rcx
   8a52c:	ff 15 1e f8 04 00    	call   QWORD PTR [rip+0x4f81e]        # d9d50 <_DYNAMIC+0x888>
   8a532:	49 89 c4             	mov    r12,rax
   8a535:	49 89 d6             	mov    r14,rdx
   8a538:	ff 15 b2 f1 04 00    	call   QWORD PTR [rip+0x4f1b2]        # d96f0 <_DYNAMIC+0x228>
   8a53e:	bf 00 40 00 00       	mov    edi,0x4000
   8a543:	be 01 00 00 00       	mov    esi,0x1
   8a548:	ff 15 92 f1 04 00    	call   QWORD PTR [rip+0x4f192]        # d96e0 <_DYNAMIC+0x218>
   8a54e:	48 85 c0             	test   rax,rax
   8a551:	0f 84 1f 02 00 00    	je     8a776 <future_backtest_sdk::context::StrategyContext::cancel_pending_ids+0x266>
   8a557:	49 89 c7             	mov    r15,rax
   8a55a:	48 8b 7b 30          	mov    rdi,QWORD PTR [rbx+0x30]
   8a55e:	4c 89 e6             	mov    rsi,r12
   8a561:	48 89 c2             	mov    rdx,rax
   8a564:	b9 00 40 00 00       	mov    ecx,0x4000
   8a569:	ff 15 89 f8 04 00    	call   QWORD PTR [rip+0x4f889]        # d9df8 <fb_ctx_cancel_pending_ids@Base>
   8a56f:	85 c0                	test   eax,eax
   8a571:	0f 8e 44 01 00 00    	jle    8a6bb <future_backtest_sdk::context::StrategyContext::cancel_pending_ids+0x1ab>
   8a577:	4c 89 24 24          	mov    QWORD PTR [rsp],r12
   8a57b:	4c 89 74 24 08       	mov    QWORD PTR [rsp+0x8],r14
   8a580:	89 c5                	mov    ebp,eax
   8a582:	48 8d 04 ed 00 00 00 	lea    rax,[rbp*8+0x0]
   8a589:	00 
   8a58a:	48 8d 1c 40          	lea    rbx,[rax+rax*2]
   8a58e:	ff 15 5c f1 04 00    	call   QWORD PTR [rip+0x4f15c]        # d96f0 <_DYNAMIC+0x228>
   8a594:	be 08 00 00 00       	mov    esi,0x8
   8a599:	48 89 df             	mov    rdi,rbx
   8a59c:	ff 15 26 f1 04 00    	call   QWORD PTR [rip+0x4f126]        # d96c8 <_DYNAMIC+0x200>
   8a5a2:	48 85 c0             	test   rax,rax
   8a5a5:	0f 84 e4 01 00 00    	je     8a78f <future_backtest_sdk::context::StrategyContext::cancel_pending_ids+0x27f>
   8a5ab:	48 89 6c 24 18       	mov    QWORD PTR [rsp+0x18],rbp
   8a5b0:	48 89 44 24 20       	mov    QWORD PTR [rsp+0x20],rax
   8a5b5:	48 c7 44 24 28 00 00 	mov    QWORD PTR [rsp+0x28],0x0
   8a5bc:	00 00 
   8a5be:	45 31 f6             	xor    r14d,r14d
   8a5c1:	31 f6                	xor    esi,esi
   8a5c3:	31 d2                	xor    edx,edx
   8a5c5:	eb 40                	jmp    8a607 <future_backtest_sdk::context::StrategyContext::cancel_pending_ids+0xf7>
   8a5c7:	48 8b 44 24 20       	mov    rax,QWORD PTR [rsp+0x20]
   8a5cc:	4b 8d 0c 76          	lea    rcx,[r14+r14*2]
   8a5d0:	4c 89 2c c8          	mov    QWORD PTR [rax+rcx*8],r13
   8a5d4:	48 8b 54 24 38       	mov    rdx,QWORD PTR [rsp+0x38]
   8a5d9:	48 89 54 c8 08       	mov    QWORD PTR [rax+rcx*8+0x8],rdx
   8a5de:	48 89 5c c8 10       	mov    QWORD PTR [rax+rcx*8+0x10],rbx
   8a5e3:	49 ff c6             	inc    r14
   8a5e6:	4c 89 74 24 28       	mov    QWORD PTR [rsp+0x28],r14
   8a5eb:	4c 89 e6             	mov    rsi,r12
   8a5ee:	49 39 ee             	cmp    r14,rbp
   8a5f1:	0f 83 41 01 00 00    	jae    8a738 <future_backtest_sdk::context::StrategyContext::cancel_pending_ids+0x228>
   8a5f7:	4c 89 e2             	mov    rdx,r12
   8a5fa:	49 81 fc 00 40 00 00 	cmp    r12,0x4000
   8a601:	0f 84 31 01 00 00    	je     8a738 <future_backtest_sdk::context::StrategyContext::cancel_pending_ids+0x228>
   8a607:	4c 8d 62 01          	lea    r12,[rdx+0x1]
   8a60b:	41 80 3c 17 00       	cmp    BYTE PTR [r15+rdx*1],0x0
   8a610:	75 e5                	jne    8a5f7 <future_backtest_sdk::context::StrategyContext::cancel_pending_ids+0xe7>
   8a612:	48 39 d6             	cmp    rsi,rdx
   8a615:	73 d4                	jae    8a5eb <future_backtest_sdk::context::StrategyContext::cancel_pending_ids+0xdb>
   8a617:	48 29 f2             	sub    rdx,rsi
   8a61a:	4c 01 fe             	add    rsi,r15
   8a61d:	48 8d 7c 24 40       	lea    rdi,[rsp+0x40]
   8a622:	ff 15 20 f7 04 00    	call   QWORD PTR [rip+0x4f720]        # d9d48 <_DYNAMIC+0x880>
   8a628:	4c 8b 6c 24 40       	mov    r13,QWORD PTR [rsp+0x40]
   8a62d:	48 8b 74 24 48       	mov    rsi,QWORD PTR [rsp+0x48]
   8a632:	4c 89 e8             	mov    rax,r13
   8a635:	48 f7 d8             	neg    rax
   8a638:	48 8b 5c 24 50       	mov    rbx,QWORD PTR [rsp+0x50]
   8a63d:	71 50                	jno    8a68f <future_backtest_sdk::context::StrategyContext::cancel_pending_ids+0x17f>
   8a63f:	48 85 db             	test   rbx,rbx
   8a642:	0f 88 d1 00 00 00    	js     8a719 <future_backtest_sdk::context::StrategyContext::cancel_pending_ids+0x209>
   8a648:	74 28                	je     8a672 <future_backtest_sdk::context::StrategyContext::cancel_pending_ids+0x162>
   8a64a:	49 89 f5             	mov    r13,rsi
   8a64d:	ff 15 9d f0 04 00    	call   QWORD PTR [rip+0x4f09d]        # d96f0 <_DYNAMIC+0x228>
   8a653:	be 01 00 00 00       	mov    esi,0x1
   8a658:	48 89 df             	mov    rdi,rbx
   8a65b:	ff 15 67 f0 04 00    	call   QWORD PTR [rip+0x4f067]        # d96c8 <_DYNAMIC+0x200>
   8a661:	48 85 c0             	test   rax,rax
   8a664:	0f 84 3c 01 00 00    	je     8a7a6 <future_backtest_sdk::context::StrategyContext::cancel_pending_ids+0x296>
   8a66a:	49 89 c6             	mov    r14,rax
   8a66d:	4c 89 ee             	mov    rsi,r13
   8a670:	eb 06                	jmp    8a678 <future_backtest_sdk::context::StrategyContext::cancel_pending_ids+0x168>
   8a672:	41 be 01 00 00 00    	mov    r14d,0x1
   8a678:	4c 89 f7             	mov    rdi,r14
   8a67b:	48 89 da             	mov    rdx,rbx
   8a67e:	ff 15 a4 f0 04 00    	call   QWORD PTR [rip+0x4f0a4]        # d9728 <memcpy@GLIBC_2.14>
   8a684:	4c 89 74 24 30       	mov    QWORD PTR [rsp+0x30],r14
   8a689:	4c 89 f6             	mov    rsi,r14
   8a68c:	49 89 dd             	mov    r13,rbx
   8a68f:	48 89 74 24 38       	mov    QWORD PTR [rsp+0x38],rsi
   8a694:	4c 8b 74 24 28       	mov    r14,QWORD PTR [rsp+0x28]
   8a699:	4c 3b 74 24 18       	cmp    r14,QWORD PTR [rsp+0x18]
   8a69e:	0f 85 23 ff ff ff    	jne    8a5c7 <future_backtest_sdk::context::StrategyContext::cancel_pending_ids+0xb7>
   8a6a4:	48 8d 7c 24 18       	lea    rdi,[rsp+0x18]
   8a6a9:	48 8d 35 c8 ba 04 00 	lea    rsi,[rip+0x4bac8]        # d6178 <anon.6dca787fc37e48e710a1dbd955c10c13.17.llvm.6582718418885566971+0x170>
   8a6b0:	ff 15 32 f1 04 00    	call   QWORD PTR [rip+0x4f132]        # d97e8 <_DYNAMIC+0x320>
   8a6b6:	e9 0c ff ff ff       	jmp    8a5c7 <future_backtest_sdk::context::StrategyContext::cancel_pending_ids+0xb7>
   8a6bb:	48 8b 44 24 10       	mov    rax,QWORD PTR [rsp+0x10]
   8a6c0:	48 c7 00 00 00 00 00 	mov    QWORD PTR [rax],0x0
   8a6c7:	48 c7 40 08 08 00 00 	mov    QWORD PTR [rax+0x8],0x8
   8a6ce:	00 
   8a6cf:	48 c7 40 10 00 00 00 	mov    QWORD PTR [rax+0x10],0x0
   8a6d6:	00 
   8a6d7:	be 00 40 00 00       	mov    esi,0x4000
   8a6dc:	ba 01 00 00 00       	mov    edx,0x1
   8a6e1:	4c 89 ff             	mov    rdi,r15
   8a6e4:	ff 15 e6 ef 04 00    	call   QWORD PTR [rip+0x4efe6]        # d96d0 <_DYNAMIC+0x208>
   8a6ea:	41 c6 04 24 00       	mov    BYTE PTR [r12],0x0
   8a6ef:	4d 85 f6             	test   r14,r14
   8a6f2:	74 11                	je     8a705 <future_backtest_sdk::context::StrategyContext::cancel_pending_ids+0x1f5>
   8a6f4:	ba 01 00 00 00       	mov    edx,0x1
   8a6f9:	4c 89 e7             	mov    rdi,r12
   8a6fc:	4c 89 f6             	mov    rsi,r14
   8a6ff:	ff 15 cb ef 04 00    	call   QWORD PTR [rip+0x4efcb]        # d96d0 <_DYNAMIC+0x208>
   8a705:	48 8b 44 24 10       	mov    rax,QWORD PTR [rsp+0x10]
   8a70a:	48 83 c4 58          	add    rsp,0x58
   8a70e:	5b                   	pop    rbx
   8a70f:	41 5c                	pop    r12
   8a711:	41 5d                	pop    r13
   8a713:	41 5e                	pop    r14
   8a715:	41 5f                	pop    r15
   8a717:	5d                   	pop    rbp
   8a718:	c3                   	ret    
   8a719:	31 ff                	xor    edi,edi
   8a71b:	48 8d 15 46 b9 04 00 	lea    rdx,[rip+0x4b946]        # d6068 <anon.6dca787fc37e48e710a1dbd955c10c13.17.llvm.6582718418885566971+0x60>
   8a722:	48 8b 74 24 30       	mov    rsi,QWORD PTR [rsp+0x30]
   8a727:	4c 8b 74 24 08       	mov    r14,QWORD PTR [rsp+0x8]
   8a72c:	4c 8b 24 24          	mov    r12,QWORD PTR [rsp]
   8a730:	ff 15 92 f0 04 00    	call   QWORD PTR [rip+0x4f092]        # d97c8 <_DYNAMIC+0x300>
   8a736:	eb 6c                	jmp    8a7a4 <future_backtest_sdk::context::StrategyContext::cancel_pending_ids+0x294>
   8a738:	48 8b 44 24 28       	mov    rax,QWORD PTR [rsp+0x28]
   8a73d:	48 8b 4c 24 10       	mov    rcx,QWORD PTR [rsp+0x10]
   8a742:	48 89 41 10          	mov    QWORD PTR [rcx+0x10],rax
   8a746:	0f 10 44 24 18       	movups xmm0,XMMWORD PTR [rsp+0x18]
   8a74b:	0f 11 01             	movups XMMWORD PTR [rcx],xmm0
   8a74e:	be 00 40 00 00       	mov    esi,0x4000
   8a753:	ba 01 00 00 00       	mov    edx,0x1
   8a758:	4c 89 ff             	mov    rdi,r15
   8a75b:	ff 15 6f ef 04 00    	call   QWORD PTR [rip+0x4ef6f]        # d96d0 <_DYNAMIC+0x208>
   8a761:	4c 8b 24 24          	mov    r12,QWORD PTR [rsp]
   8a765:	41 c6 04 24 00       	mov    BYTE PTR [r12],0x0
   8a76a:	4c 8b 74 24 08       	mov    r14,QWORD PTR [rsp+0x8]
   8a76f:	4d 85 f6             	test   r14,r14
   8a772:	75 80                	jne    8a6f4 <future_backtest_sdk::context::StrategyContext::cancel_pending_ids+0x1e4>
   8a774:	eb 8f                	jmp    8a705 <future_backtest_sdk::context::StrategyContext::cancel_pending_ids+0x1f5>
   8a776:	48 8d 15 cb b9 04 00 	lea    rdx,[rip+0x4b9cb]        # d6148 <anon.6dca787fc37e48e710a1dbd955c10c13.17.llvm.6582718418885566971+0x140>
   8a77d:	bf 01 00 00 00       	mov    edi,0x1
   8a782:	be 00 40 00 00       	mov    esi,0x4000
   8a787:	ff 15 3b f0 04 00    	call   QWORD PTR [rip+0x4f03b]        # d97c8 <_DYNAMIC+0x300>
   8a78d:	eb 15                	jmp    8a7a4 <future_backtest_sdk::context::StrategyContext::cancel_pending_ids+0x294>
   8a78f:	48 8d 15 ca b9 04 00 	lea    rdx,[rip+0x4b9ca]        # d6160 <anon.6dca787fc37e48e710a1dbd955c10c13.17.llvm.6582718418885566971+0x158>
   8a796:	bf 08 00 00 00       	mov    edi,0x8
   8a79b:	48 89 de             	mov    rsi,rbx
   8a79e:	ff 15 24 f0 04 00    	call   QWORD PTR [rip+0x4f024]        # d97c8 <_DYNAMIC+0x300>
   8a7a4:	0f 0b                	ud2    
   8a7a6:	48 89 5c 24 30       	mov    QWORD PTR [rsp+0x30],rbx
   8a7ab:	bf 01 00 00 00       	mov    edi,0x1
   8a7b0:	e9 66 ff ff ff       	jmp    8a71b <future_backtest_sdk::context::StrategyContext::cancel_pending_ids+0x20b>
   8a7b5:	48 89 c3             	mov    rbx,rax
   8a7b8:	4d 85 ed             	test   r13,r13
   8a7bb:	74 2b                	je     8a7e8 <future_backtest_sdk::context::StrategyContext::cancel_pending_ids+0x2d8>
   8a7bd:	ba 01 00 00 00       	mov    edx,0x1
   8a7c2:	48 8b 7c 24 38       	mov    rdi,QWORD PTR [rsp+0x38]
   8a7c7:	4c 89 ee             	mov    rsi,r13
   8a7ca:	ff 15 00 ef 04 00    	call   QWORD PTR [rip+0x4ef00]        # d96d0 <_DYNAMIC+0x208>
   8a7d0:	eb 16                	jmp    8a7e8 <future_backtest_sdk::context::StrategyContext::cancel_pending_ids+0x2d8>
   8a7d2:	48 89 c3             	mov    rbx,rax
   8a7d5:	4c 8b 74 24 08       	mov    r14,QWORD PTR [rsp+0x8]
   8a7da:	4c 8b 24 24          	mov    r12,QWORD PTR [rsp]
   8a7de:	eb 20                	jmp    8a800 <future_backtest_sdk::context::StrategyContext::cancel_pending_ids+0x2f0>
   8a7e0:	48 89 c3             	mov    rbx,rax
   8a7e3:	eb 2e                	jmp    8a813 <future_backtest_sdk::context::StrategyContext::cancel_pending_ids+0x303>
   8a7e5:	48 89 c3             	mov    rbx,rax
   8a7e8:	4c 8b 74 24 08       	mov    r14,QWORD PTR [rsp+0x8]
   8a7ed:	4c 8b 24 24          	mov    r12,QWORD PTR [rsp]
   8a7f1:	eb 03                	jmp    8a7f6 <future_backtest_sdk::context::StrategyContext::cancel_pending_ids+0x2e6>
   8a7f3:	48 89 c3             	mov    rbx,rax
   8a7f6:	48 8d 7c 24 18       	lea    rdi,[rsp+0x18]
   8a7fb:	e8 90 ed ff ff       	call   89590 <core::ptr::drop_in_place<alloc::vec::Vec<alloc::string::String>>>
   8a800:	be 00 40 00 00       	mov    esi,0x4000
   8a805:	ba 01 00 00 00       	mov    edx,0x1
   8a80a:	4c 89 ff             	mov    rdi,r15
   8a80d:	ff 15 bd ee 04 00    	call   QWORD PTR [rip+0x4eebd]        # d96d0 <_DYNAMIC+0x208>
   8a813:	41 c6 04 24 00       	mov    BYTE PTR [r12],0x0
   8a818:	4d 85 f6             	test   r14,r14
   8a81b:	74 11                	je     8a82e <future_backtest_sdk::context::StrategyContext::cancel_pending_ids+0x31e>
   8a81d:	ba 01 00 00 00       	mov    edx,0x1
   8a822:	4c 89 e7             	mov    rdi,r12
   8a825:	4c 89 f6             	mov    rsi,r14
   8a828:	ff 15 a2 ee 04 00    	call   QWORD PTR [rip+0x4eea2]        # d96d0 <_DYNAMIC+0x208>
   8a82e:	48 89 df             	mov    rdi,rbx
   8a831:	e8 0a 7e 04 00       	call   d2640 <_Unwind_Resume@plt>
   8a836:	cc                   	int3   
   8a837:	cc                   	int3   
   8a838:	cc                   	int3   
   8a839:	cc                   	int3   
   8a83a:	cc                   	int3   
   8a83b:	cc                   	int3   
   8a83c:	cc                   	int3   
   8a83d:	cc                   	int3   
   8a83e:	cc                   	int3   
   8a83f:	cc                   	int3   