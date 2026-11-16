0000000000095320 <future_backtest_sdk::context::StrategyContext::cancel_order>:
   95320:	55                   	push   rbp
   95321:	41 57                	push   r15
   95323:	41 56                	push   r14
   95325:	41 55                	push   r13
   95327:	41 54                	push   r12
   95329:	53                   	push   rbx
   9532a:	48 81 ec 88 00 00 00 	sub    rsp,0x88
   95331:	4d 89 c7             	mov    r15,r8
   95334:	49 89 cc             	mov    r12,rcx
   95337:	49 89 fd             	mov    r13,rdi
   9533a:	48 89 34 24          	mov    QWORD PTR [rsp],rsi
   9533e:	48 89 54 24 08       	mov    QWORD PTR [rsp+0x8],rdx
   95343:	48 89 4c 24 10       	mov    QWORD PTR [rsp+0x10],rcx
   95348:	4c 89 44 24 18       	mov    QWORD PTR [rsp+0x18],r8
   9534d:	48 8b 2d bc f0 04 00 	mov    rbp,QWORD PTR [rip+0x4f0bc]        # e4410 <_DYNAMIC+0x850>
   95354:	48 89 f7             	mov    rdi,rsi
   95357:	48 89 d6             	mov    rsi,rdx
   9535a:	ff d5                	call   rbp
   9535c:	49 89 c6             	mov    r14,rax
   9535f:	48 89 d3             	mov    rbx,rdx
   95362:	4c 89 e7             	mov    rdi,r12
   95365:	4c 89 fe             	mov    rsi,r15
   95368:	ff d5                	call   rbp
   9536a:	49 89 c4             	mov    r12,rax
   9536d:	49 89 d7             	mov    r15,rdx
   95370:	49 8b 7d 30          	mov    rdi,QWORD PTR [r13+0x30]
   95374:	4c 89 f6             	mov    rsi,r14
   95377:	48 89 c2             	mov    rdx,rax
   9537a:	ff 15 50 f1 04 00    	call   QWORD PTR [rip+0x4f150]        # e44d0 <fb_ctx_cancel_order@Base>
   95380:	85 c0                	test   eax,eax
   95382:	78 4d                	js     953d1 <future_backtest_sdk::context::StrategyContext::cancel_order+0xb1>
   95384:	45 31 ed             	xor    r13d,r13d
   95387:	41 c6 04 24 00       	mov    BYTE PTR [r12],0x0
   9538c:	4d 85 ff             	test   r15,r15
   9538f:	74 11                	je     953a2 <future_backtest_sdk::context::StrategyContext::cancel_order+0x82>
   95391:	ba 01 00 00 00       	mov    edx,0x1
   95396:	4c 89 e7             	mov    rdi,r12
   95399:	4c 89 fe             	mov    rsi,r15
   9539c:	ff 15 26 ea 04 00    	call   QWORD PTR [rip+0x4ea26]        # e3dc8 <_DYNAMIC+0x208>
   953a2:	41 c6 06 00          	mov    BYTE PTR [r14],0x0
   953a6:	48 85 db             	test   rbx,rbx
   953a9:	74 11                	je     953bc <future_backtest_sdk::context::StrategyContext::cancel_order+0x9c>
   953ab:	ba 01 00 00 00       	mov    edx,0x1
   953b0:	4c 89 f7             	mov    rdi,r14
   953b3:	48 89 de             	mov    rsi,rbx
   953b6:	ff 15 0c ea 04 00    	call   QWORD PTR [rip+0x4ea0c]        # e3dc8 <_DYNAMIC+0x208>
   953bc:	4c 89 e8             	mov    rax,r13
   953bf:	48 81 c4 88 00 00 00 	add    rsp,0x88
   953c6:	5b                   	pop    rbx
   953c7:	41 5c                	pop    r12
   953c9:	41 5d                	pop    r13
   953cb:	41 5e                	pop    r14
   953cd:	41 5f                	pop    r15
   953cf:	5d                   	pop    rbp
   953d0:	c3                   	ret    
   953d1:	48 89 e0             	mov    rax,rsp
   953d4:	48 89 44 24 20       	mov    QWORD PTR [rsp+0x20],rax
   953d9:	48 8d 05 40 19 00 00 	lea    rax,[rip+0x1940]        # 96d20 <<&T as core::fmt::Display>::fmt>
   953e0:	48 89 44 24 28       	mov    QWORD PTR [rsp+0x28],rax
   953e5:	48 8d 4c 24 10       	lea    rcx,[rsp+0x10]
   953ea:	48 89 4c 24 30       	mov    QWORD PTR [rsp+0x30],rcx
   953ef:	48 89 44 24 38       	mov    QWORD PTR [rsp+0x38],rax
   953f4:	48 8d 05 45 b5 04 00 	lea    rax,[rip+0x4b545]        # e0940 <anon.e69fa87c05f933b9fe1f9c21a2065ba3.7.llvm.603266175965479879+0x4f8>
   953fb:	48 89 44 24 40       	mov    QWORD PTR [rsp+0x40],rax
   95400:	48 c7 44 24 48 02 00 	mov    QWORD PTR [rsp+0x48],0x2
   95407:	00 00 
   95409:	48 c7 44 24 60 00 00 	mov    QWORD PTR [rsp+0x60],0x0
   95410:	00 00 
   95412:	48 8d 44 24 20       	lea    rax,[rsp+0x20]
   95417:	48 89 44 24 50       	mov    QWORD PTR [rsp+0x50],rax
   9541c:	48 c7 44 24 58 02 00 	mov    QWORD PTR [rsp+0x58],0x2
   95423:	00 00 
   95425:	48 8d 7c 24 70       	lea    rdi,[rsp+0x70]
   9542a:	48 8d 74 24 40       	lea    rsi,[rsp+0x40]
   9542f:	ff 15 6b ea 04 00    	call   QWORD PTR [rip+0x4ea6b]        # e3ea0 <_DYNAMIC+0x2e0>
   95435:	48 8d 7c 24 70       	lea    rdi,[rsp+0x70]
   9543a:	e8 51 0b 00 00       	call   95f90 <anyhow::error::<impl anyhow::Error>::msg>
   9543f:	49 89 c5             	mov    r13,rax
   95442:	41 c6 04 24 00       	mov    BYTE PTR [r12],0x0
   95447:	4d 85 ff             	test   r15,r15
   9544a:	0f 85 41 ff ff ff    	jne    95391 <future_backtest_sdk::context::StrategyContext::cancel_order+0x71>
   95450:	e9 4d ff ff ff       	jmp    953a2 <future_backtest_sdk::context::StrategyContext::cancel_order+0x82>
   95455:	49 89 c5             	mov    r13,rax
   95458:	41 c6 04 24 00       	mov    BYTE PTR [r12],0x0
   9545d:	4d 85 ff             	test   r15,r15
   95460:	74 16                	je     95478 <future_backtest_sdk::context::StrategyContext::cancel_order+0x158>
   95462:	ba 01 00 00 00       	mov    edx,0x1
   95467:	4c 89 e7             	mov    rdi,r12
   9546a:	4c 89 fe             	mov    rsi,r15
   9546d:	ff 15 55 e9 04 00    	call   QWORD PTR [rip+0x4e955]        # e3dc8 <_DYNAMIC+0x208>
   95473:	eb 03                	jmp    95478 <future_backtest_sdk::context::StrategyContext::cancel_order+0x158>
   95475:	49 89 c5             	mov    r13,rax
   95478:	41 c6 06 00          	mov    BYTE PTR [r14],0x0
   9547c:	48 85 db             	test   rbx,rbx
   9547f:	74 11                	je     95492 <future_backtest_sdk::context::StrategyContext::cancel_order+0x172>
   95481:	ba 01 00 00 00       	mov    edx,0x1
   95486:	4c 89 f7             	mov    rdi,r14
   95489:	48 89 de             	mov    rsi,rbx
   9548c:	ff 15 36 e9 04 00    	call   QWORD PTR [rip+0x4e936]        # e3dc8 <_DYNAMIC+0x208>
   95492:	4c 89 ef             	mov    rdi,r13
   95495:	e8 f6 74 04 00       	call   dc990 <_Unwind_Resume@plt>
   9549a:	cc                   	int3   
   9549b:	cc                   	int3   
   9549c:	cc                   	int3   
   9549d:	cc                   	int3   
   9549e:	cc                   	int3   
   9549f:	cc                   	int3   

0000000000094e40 <future_backtest_sdk::context::StrategyContext::pending_orders>:
   94e40:	55                   	push   rbp
   94e41:	41 57                	push   r15
   94e43:	41 56                	push   r14
   94e45:	41 55                	push   r13
   94e47:	41 54                	push   r12
   94e49:	53                   	push   rbx
   94e4a:	48 81 ec 00 10 00 00 	sub    rsp,0x1000
   94e51:	48 c7 04 24 00 00 00 	mov    QWORD PTR [rsp],0x0
   94e58:	00 
   94e59:	48 81 ec f8 00 00 00 	sub    rsp,0xf8
   94e60:	48 89 74 24 08       	mov    QWORD PTR [rsp+0x8],rsi
   94e65:	48 89 7c 24 28       	mov    QWORD PTR [rsp+0x28],rdi
   94e6a:	48 89 54 24 58       	mov    QWORD PTR [rsp+0x58],rdx
   94e6f:	48 89 d7             	mov    rdi,rdx
   94e72:	48 89 4c 24 60       	mov    QWORD PTR [rsp+0x60],rcx
   94e77:	48 89 ce             	mov    rsi,rcx
   94e7a:	ff 15 90 f5 04 00    	call   QWORD PTR [rip+0x4f590]        # e4410 <_DYNAMIC+0x850>
   94e80:	49 89 c4             	mov    r12,rax
   94e83:	48 89 54 24 38       	mov    QWORD PTR [rsp+0x38],rdx
   94e88:	0f 57 c0             	xorps  xmm0,xmm0
   94e8b:	0f 29 84 24 e0 00 00 	movaps XMMWORD PTR [rsp+0xe0],xmm0
   94e92:	00 
   94e93:	0f 29 84 24 d0 00 00 	movaps XMMWORD PTR [rsp+0xd0],xmm0
   94e9a:	00 
   94e9b:	0f 29 84 24 c0 00 00 	movaps XMMWORD PTR [rsp+0xc0],xmm0
   94ea2:	00 
   94ea3:	0f 29 84 24 b0 00 00 	movaps XMMWORD PTR [rsp+0xb0],xmm0
   94eaa:	00 
   94eab:	48 8d bc 24 f8 00 00 	lea    rdi,[rsp+0xf8]
   94eb2:	00 
   94eb3:	4c 8b 3d 0e f0 04 00 	mov    r15,QWORD PTR [rip+0x4f00e]        # e3ec8 <memset@GLIBC_2.2.5>
   94eba:	ba 00 02 00 00       	mov    edx,0x200
   94ebf:	31 f6                	xor    esi,esi
   94ec1:	41 ff d7             	call   r15
   94ec4:	48 8d bc 24 f8 02 00 	lea    rdi,[rsp+0x2f8]
   94ecb:	00 
   94ecc:	ba 00 02 00 00       	mov    edx,0x200
   94ed1:	31 f6                	xor    esi,esi
   94ed3:	41 ff d7             	call   r15
   94ed6:	4c 8d ac 24 f8 04 00 	lea    r13,[rsp+0x4f8]
   94edd:	00 
   94ede:	ba 00 02 00 00       	mov    edx,0x200
   94ee3:	4c 89 ef             	mov    rdi,r13
   94ee6:	31 f6                	xor    esi,esi
   94ee8:	41 ff d7             	call   r15
   94eeb:	48 8d 9c 24 f8 06 00 	lea    rbx,[rsp+0x6f8]
   94ef2:	00 
   94ef3:	ba 00 02 00 00       	mov    edx,0x200
   94ef8:	48 89 df             	mov    rdi,rbx
   94efb:	31 f6                	xor    esi,esi
   94efd:	41 ff d7             	call   r15
   94f00:	48 8d ac 24 f8 08 00 	lea    rbp,[rsp+0x8f8]
   94f07:	00 
   94f08:	41 be 00 08 00 00    	mov    r14d,0x800
   94f0e:	ba 00 08 00 00       	mov    edx,0x800
   94f13:	48 89 ef             	mov    rdi,rbp
   94f16:	31 f6                	xor    esi,esi
   94f18:	41 ff d7             	call   r15
   94f1b:	48 8b 44 24 08       	mov    rax,QWORD PTR [rsp+0x8]
   94f20:	48 8b 78 30          	mov    rdi,QWORD PTR [rax+0x30]
   94f24:	48 8d 94 24 b0 00 00 	lea    rdx,[rsp+0xb0]
   94f2b:	00 
   94f2c:	4c 89 64 24 30       	mov    QWORD PTR [rsp+0x30],r12
   94f31:	4c 89 e6             	mov    rsi,r12
   94f34:	48 8d 8c 24 f8 00 00 	lea    rcx,[rsp+0xf8]
   94f3b:	00 
   94f3c:	4c 8d 84 24 f8 02 00 	lea    r8,[rsp+0x2f8]
   94f43:	00 
   94f44:	4d 89 e9             	mov    r9,r13
   94f47:	6a 40                	push   0x40
   94f49:	68 00 08 00 00       	push   0x800
   94f4e:	55                   	push   rbp
   94f4f:	53                   	push   rbx
   94f50:	ff 15 72 f5 04 00    	call   QWORD PTR [rip+0x4f572]        # e44c8 <fb_ctx_pending_orders@Base>
   94f56:	48 83 c4 20          	add    rsp,0x20
   94f5a:	48 c7 44 24 10 00 00 	mov    QWORD PTR [rsp+0x10],0x0
   94f61:	00 00 
   94f63:	48 c7 44 24 18 08 00 	mov    QWORD PTR [rsp+0x18],0x8
   94f6a:	00 00 
   94f6c:	48 c7 44 24 20 00 00 	mov    QWORD PTR [rsp+0x20],0x0
   94f73:	00 00 
   94f75:	4c 63 e8             	movsxd r13,eax
   94f78:	48 8d 84 24 f8 10 00 	lea    rax,[rsp+0x10f8]
   94f7f:	00 
   94f80:	31 d2                	xor    edx,edx
   94f82:	66 66 66 66 66 2e 0f 	data16 data16 data16 data16 cs nop WORD PTR [rax+rax*1+0x0]
   94f89:	1f 84 00 00 00 00 00 
   94f90:	44 0f b6 64 15 00    	movzx  r12d,BYTE PTR [rbp+rdx*1+0x0]
   94f96:	45 84 e4             	test   r12b,r12b
   94f99:	74 25                	je     94fc0 <future_backtest_sdk::context::StrategyContext::pending_orders+0x180>
   94f9b:	48 8d 0c 2a          	lea    rcx,[rdx+rbp*1]
   94f9f:	48 ff c1             	inc    rcx
   94fa2:	48 ff c2             	inc    rdx
   94fa5:	48 39 c1             	cmp    rcx,rax
   94fa8:	75 e6                	jne    94f90 <future_backtest_sdk::context::StrategyContext::pending_orders+0x150>
   94faa:	49 89 ef             	mov    r15,rbp
   94fad:	4c 89 f3             	mov    rbx,r14
   94fb0:	4c 89 f2             	mov    rdx,r14
   94fb3:	eb 24                	jmp    94fd9 <future_backtest_sdk::context::StrategyContext::pending_orders+0x199>
   94fb5:	66 66 2e 0f 1f 84 00 	data16 cs nop WORD PTR [rax+rax*1+0x0]
   94fbc:	00 00 00 00 
   94fc0:	48 89 d3             	mov    rbx,rdx
   94fc3:	48 f7 d3             	not    rbx
   94fc6:	4c 01 f3             	add    rbx,r14
   94fc9:	4c 8d 3c 2a          	lea    r15,[rdx+rbp*1]
   94fcd:	49 ff c7             	inc    r15
   94fd0:	48 85 d2             	test   rdx,rdx
   94fd3:	0f 84 e3 00 00 00    	je     950bc <future_backtest_sdk::context::StrategyContext::pending_orders+0x27c>
   94fd9:	48 8d 7c 24 68       	lea    rdi,[rsp+0x68]
   94fde:	48 89 ee             	mov    rsi,rbp
   94fe1:	ff 15 c9 f2 04 00    	call   QWORD PTR [rip+0x4f2c9]        # e42b0 <_DYNAMIC+0x6f0>
   94fe7:	83 7c 24 68 01       	cmp    DWORD PTR [rsp+0x68],0x1
   94fec:	75 22                	jne    95010 <future_backtest_sdk::context::StrategyContext::pending_orders+0x1d0>
   94fee:	4c 8b 74 24 20       	mov    r14,QWORD PTR [rsp+0x20]
   94ff3:	45 84 e4             	test   r12b,r12b
   94ff6:	0f 84 bb 00 00 00    	je     950b7 <future_backtest_sdk::context::StrategyContext::pending_orders+0x277>
   94ffc:	e9 ce 00 00 00       	jmp    950cf <future_backtest_sdk::context::StrategyContext::pending_orders+0x28f>
   95001:	66 66 66 66 66 66 2e 	data16 data16 data16 data16 data16 cs nop WORD PTR [rax+rax*1+0x0]
   95008:	0f 1f 84 00 00 00 00 
   9500f:	00 
   95010:	48 8b 6c 24 78       	mov    rbp,QWORD PTR [rsp+0x78]
   95015:	48 85 ed             	test   rbp,rbp
   95018:	0f 88 c0 00 00 00    	js     950de <future_backtest_sdk::context::StrategyContext::pending_orders+0x29e>
   9501e:	48 8b 74 24 70       	mov    rsi,QWORD PTR [rsp+0x70]
   95023:	74 38                	je     9505d <future_backtest_sdk::context::StrategyContext::pending_orders+0x21d>
   95025:	48 89 74 24 08       	mov    QWORD PTR [rsp+0x8],rsi
   9502a:	4d 89 ee             	mov    r14,r13
   9502d:	ff 15 b5 ed 04 00    	call   QWORD PTR [rip+0x4edb5]        # e3de8 <_DYNAMIC+0x228>
   95033:	41 bd 01 00 00 00    	mov    r13d,0x1
   95039:	be 01 00 00 00       	mov    esi,0x1
   9503e:	48 89 ef             	mov    rdi,rbp
   95041:	ff 15 79 ed 04 00    	call   QWORD PTR [rip+0x4ed79]        # e3dc0 <_DYNAMIC+0x200>
   95047:	48 85 c0             	test   rax,rax
   9504a:	0f 84 43 02 00 00    	je     95293 <future_backtest_sdk::context::StrategyContext::pending_orders+0x453>
   95050:	48 89 c7             	mov    rdi,rax
   95053:	4d 89 f5             	mov    r13,r14
   95056:	48 8b 74 24 08       	mov    rsi,QWORD PTR [rsp+0x8]
   9505b:	eb 05                	jmp    95062 <future_backtest_sdk::context::StrategyContext::pending_orders+0x222>
   9505d:	bf 01 00 00 00       	mov    edi,0x1
   95062:	48 89 7c 24 08       	mov    QWORD PTR [rsp+0x8],rdi
   95067:	48 89 ea             	mov    rdx,rbp
   9506a:	ff 15 b8 ed 04 00    	call   QWORD PTR [rip+0x4edb8]        # e3e28 <memcpy@GLIBC_2.14>
   95070:	4c 8b 74 24 20       	mov    r14,QWORD PTR [rsp+0x20]
   95075:	4c 3b 74 24 10       	cmp    r14,QWORD PTR [rsp+0x10]
   9507a:	75 12                	jne    9508e <future_backtest_sdk::context::StrategyContext::pending_orders+0x24e>
   9507c:	48 8d 7c 24 10       	lea    rdi,[rsp+0x10]
   95081:	48 8d 35 a0 b8 04 00 	lea    rsi,[rip+0x4b8a0]        # e0928 <anon.e69fa87c05f933b9fe1f9c21a2065ba3.7.llvm.603266175965479879+0x4e0>
   95088:	ff 15 82 f0 04 00    	call   QWORD PTR [rip+0x4f082]        # e4110 <_DYNAMIC+0x550>
   9508e:	48 8b 44 24 18       	mov    rax,QWORD PTR [rsp+0x18]
   95093:	4b 8d 0c 76          	lea    rcx,[r14+r14*2]
   95097:	48 89 2c c8          	mov    QWORD PTR [rax+rcx*8],rbp
   9509b:	48 8b 54 24 08       	mov    rdx,QWORD PTR [rsp+0x8]
   950a0:	48 89 54 c8 08       	mov    QWORD PTR [rax+rcx*8+0x8],rdx
   950a5:	48 89 6c c8 10       	mov    QWORD PTR [rax+rcx*8+0x10],rbp
   950aa:	49 ff c6             	inc    r14
   950ad:	4c 89 74 24 20       	mov    QWORD PTR [rsp+0x20],r14
   950b2:	45 84 e4             	test   r12b,r12b
   950b5:	75 18                	jne    950cf <future_backtest_sdk::context::StrategyContext::pending_orders+0x28f>
   950b7:	4d 39 ee             	cmp    r14,r13
   950ba:	73 13                	jae    950cf <future_backtest_sdk::context::StrategyContext::pending_orders+0x28f>
   950bc:	49 8d 04 1f          	lea    rax,[r15+rbx*1]
   950c0:	4c 89 fd             	mov    rbp,r15
   950c3:	49 89 de             	mov    r14,rbx
   950c6:	48 85 db             	test   rbx,rbx
   950c9:	0f 85 b1 fe ff ff    	jne    94f80 <future_backtest_sdk::context::StrategyContext::pending_orders+0x140>
   950cf:	4c 8b 74 24 60       	mov    r14,QWORD PTR [rsp+0x60]
   950d4:	4d 85 f6             	test   r14,r14
   950d7:	79 1f                	jns    950f8 <future_backtest_sdk::context::StrategyContext::pending_orders+0x2b8>
   950d9:	45 31 ed             	xor    r13d,r13d
   950dc:	eb 08                	jmp    950e6 <future_backtest_sdk::context::StrategyContext::pending_orders+0x2a6>
   950de:	45 31 ed             	xor    r13d,r13d
   950e1:	48 8b 74 24 08       	mov    rsi,QWORD PTR [rsp+0x8]
   950e6:	48 8d 15 d3 b6 04 00 	lea    rdx,[rip+0x4b6d3]        # e07c0 <anon.e69fa87c05f933b9fe1f9c21a2065ba3.7.llvm.603266175965479879+0x378>
   950ed:	4c 89 ef             	mov    rdi,r13
   950f0:	ff 15 8a ed 04 00    	call   QWORD PTR [rip+0x4ed8a]        # e3e80 <_DYNAMIC+0x2c0>
   950f6:	0f 0b                	ud2    
   950f8:	74 33                	je     9512d <future_backtest_sdk::context::StrategyContext::pending_orders+0x2ed>
   950fa:	4d 89 ef             	mov    r15,r13
   950fd:	ff 15 e5 ec 04 00    	call   QWORD PTR [rip+0x4ece5]        # e3de8 <_DYNAMIC+0x228>
   95103:	41 bd 01 00 00 00    	mov    r13d,0x1
   95109:	be 01 00 00 00       	mov    esi,0x1
   9510e:	4c 89 f7             	mov    rdi,r14
   95111:	ff 15 a9 ec 04 00    	call   QWORD PTR [rip+0x4eca9]        # e3dc0 <_DYNAMIC+0x200>
   95117:	48 85 c0             	test   rax,rax
   9511a:	4c 8b 64 24 28       	mov    r12,QWORD PTR [rsp+0x28]
   9511f:	0f 84 76 01 00 00    	je     9529b <future_backtest_sdk::context::StrategyContext::pending_orders+0x45b>
   95125:	48 89 c3             	mov    rbx,rax
   95128:	4d 89 fd             	mov    r13,r15
   9512b:	eb 0a                	jmp    95137 <future_backtest_sdk::context::StrategyContext::pending_orders+0x2f7>
   9512d:	bb 01 00 00 00       	mov    ebx,0x1
   95132:	4c 8b 64 24 28       	mov    r12,QWORD PTR [rsp+0x28]
   95137:	48 89 df             	mov    rdi,rbx
   9513a:	48 8b 74 24 58       	mov    rsi,QWORD PTR [rsp+0x58]
   9513f:	4c 89 f2             	mov    rdx,r14
   95142:	ff 15 e0 ec 04 00    	call   QWORD PTR [rip+0x4ece0]        # e3e28 <memcpy@GLIBC_2.14>
   95148:	4c 89 74 24 40       	mov    QWORD PTR [rsp+0x40],r14
   9514d:	48 89 5c 24 48       	mov    QWORD PTR [rsp+0x48],rbx
   95152:	4c 89 74 24 50       	mov    QWORD PTR [rsp+0x50],r14
   95157:	48 8d 44 24 10       	lea    rax,[rsp+0x10]
   9515c:	48 89 44 24 68       	mov    QWORD PTR [rsp+0x68],rax
   95161:	48 8d 44 24 40       	lea    rax,[rsp+0x40]
   95166:	48 89 44 24 70       	mov    QWORD PTR [rsp+0x70],rax
   9516b:	48 8d 84 24 b0 00 00 	lea    rax,[rsp+0xb0]
   95172:	00 
   95173:	48 89 44 24 78       	mov    QWORD PTR [rsp+0x78],rax
   95178:	48 8d 84 24 f8 00 00 	lea    rax,[rsp+0xf8]
   9517f:	00 
   95180:	48 89 84 24 80 00 00 	mov    QWORD PTR [rsp+0x80],rax
   95187:	00 
   95188:	48 8d 84 24 f8 02 00 	lea    rax,[rsp+0x2f8]
   9518f:	00 
   95190:	48 89 84 24 88 00 00 	mov    QWORD PTR [rsp+0x88],rax
   95197:	00 
   95198:	48 8d 84 24 f8 04 00 	lea    rax,[rsp+0x4f8]
   9519f:	00 
   951a0:	48 89 84 24 90 00 00 	mov    QWORD PTR [rsp+0x90],rax
   951a7:	00 
   951a8:	48 8d 84 24 f8 06 00 	lea    rax,[rsp+0x6f8]
   951af:	00 
   951b0:	48 89 84 24 98 00 00 	mov    QWORD PTR [rsp+0x98],rax
   951b7:	00 
   951b8:	48 c7 84 24 a0 00 00 	mov    QWORD PTR [rsp+0xa0],0x0
   951bf:	00 00 00 00 00 
   951c4:	4c 89 ac 24 a8 00 00 	mov    QWORD PTR [rsp+0xa8],r13
   951cb:	00 
   951cc:	48 8d 15 bd b5 04 00 	lea    rdx,[rip+0x4b5bd]        # e0790 <anon.e69fa87c05f933b9fe1f9c21a2065ba3.7.llvm.603266175965479879+0x348>
   951d3:	48 8d 74 24 68       	lea    rsi,[rsp+0x68]
   951d8:	4c 89 e7             	mov    rdi,r12
   951db:	e8 70 22 00 00       	call   97450 <<alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter>
   951e0:	48 8b 74 24 40       	mov    rsi,QWORD PTR [rsp+0x40]
   951e5:	48 85 f6             	test   rsi,rsi
   951e8:	74 10                	je     951fa <future_backtest_sdk::context::StrategyContext::pending_orders+0x3ba>
   951ea:	48 8b 7c 24 48       	mov    rdi,QWORD PTR [rsp+0x48]
   951ef:	ba 01 00 00 00       	mov    edx,0x1
   951f4:	ff 15 ce eb 04 00    	call   QWORD PTR [rip+0x4ebce]        # e3dc8 <_DYNAMIC+0x208>
   951fa:	48 8b 5c 24 20       	mov    rbx,QWORD PTR [rsp+0x20]
   951ff:	48 85 db             	test   rbx,rbx
   95202:	74 3b                	je     9523f <future_backtest_sdk::context::StrategyContext::pending_orders+0x3ff>
   95204:	4c 8b 74 24 18       	mov    r14,QWORD PTR [rsp+0x18]
   95209:	49 83 c6 08          	add    r14,0x8
   9520d:	4c 8b 3d b4 eb 04 00 	mov    r15,QWORD PTR [rip+0x4ebb4]        # e3dc8 <_DYNAMIC+0x208>
   95214:	eb 13                	jmp    95229 <future_backtest_sdk::context::StrategyContext::pending_orders+0x3e9>
   95216:	66 2e 0f 1f 84 00 00 	cs nop WORD PTR [rax+rax*1+0x0]
   9521d:	00 00 00 
   95220:	49 83 c6 18          	add    r14,0x18
   95224:	48 ff cb             	dec    rbx
   95227:	74 16                	je     9523f <future_backtest_sdk::context::StrategyContext::pending_orders+0x3ff>
   95229:	49 8b 76 f8          	mov    rsi,QWORD PTR [r14-0x8]
   9522d:	48 85 f6             	test   rsi,rsi
   95230:	74 ee                	je     95220 <future_backtest_sdk::context::StrategyContext::pending_orders+0x3e0>
   95232:	49 8b 3e             	mov    rdi,QWORD PTR [r14]
   95235:	ba 01 00 00 00       	mov    edx,0x1
   9523a:	41 ff d7             	call   r15
   9523d:	eb e1                	jmp    95220 <future_backtest_sdk::context::StrategyContext::pending_orders+0x3e0>
   9523f:	48 8b 44 24 10       	mov    rax,QWORD PTR [rsp+0x10]
   95244:	48 85 c0             	test   rax,rax
   95247:	74 18                	je     95261 <future_backtest_sdk::context::StrategyContext::pending_orders+0x421>
   95249:	48 8b 7c 24 18       	mov    rdi,QWORD PTR [rsp+0x18]
   9524e:	48 c1 e0 03          	shl    rax,0x3
   95252:	48 8d 34 40          	lea    rsi,[rax+rax*2]
   95256:	ba 08 00 00 00       	mov    edx,0x8
   9525b:	ff 15 67 eb 04 00    	call   QWORD PTR [rip+0x4eb67]        # e3dc8 <_DYNAMIC+0x208>
   95261:	48 8b 7c 24 30       	mov    rdi,QWORD PTR [rsp+0x30]
   95266:	c6 07 00             	mov    BYTE PTR [rdi],0x0
   95269:	48 8b 74 24 38       	mov    rsi,QWORD PTR [rsp+0x38]
   9526e:	48 85 f6             	test   rsi,rsi
   95271:	74 0b                	je     9527e <future_backtest_sdk::context::StrategyContext::pending_orders+0x43e>
   95273:	ba 01 00 00 00       	mov    edx,0x1
   95278:	ff 15 4a eb 04 00    	call   QWORD PTR [rip+0x4eb4a]        # e3dc8 <_DYNAMIC+0x208>
   9527e:	4c 89 e0             	mov    rax,r12
   95281:	48 81 c4 f8 10 00 00 	add    rsp,0x10f8
   95288:	5b                   	pop    rbx
   95289:	41 5c                	pop    r12
   9528b:	41 5d                	pop    r13
   9528d:	41 5e                	pop    r14
   9528f:	41 5f                	pop    r15
   95291:	5d                   	pop    rbp
   95292:	c3                   	ret    
   95293:	48 89 ee             	mov    rsi,rbp
   95296:	e9 4b fe ff ff       	jmp    950e6 <future_backtest_sdk::context::StrategyContext::pending_orders+0x2a6>
   9529b:	4c 89 f6             	mov    rsi,r14
   9529e:	e9 43 fe ff ff       	jmp    950e6 <future_backtest_sdk::context::StrategyContext::pending_orders+0x2a6>
   952a3:	48 89 c3             	mov    rbx,rax
   952a6:	48 8b 74 24 40       	mov    rsi,QWORD PTR [rsp+0x40]
   952ab:	48 85 f6             	test   rsi,rsi
   952ae:	74 34                	je     952e4 <future_backtest_sdk::context::StrategyContext::pending_orders+0x4a4>
   952b0:	48 8b 7c 24 48       	mov    rdi,QWORD PTR [rsp+0x48]
   952b5:	ba 01 00 00 00       	mov    edx,0x1
   952ba:	ff 15 08 eb 04 00    	call   QWORD PTR [rip+0x4eb08]        # e3dc8 <_DYNAMIC+0x208>
   952c0:	eb 22                	jmp    952e4 <future_backtest_sdk::context::StrategyContext::pending_orders+0x4a4>
   952c2:	48 89 c3             	mov    rbx,rax
   952c5:	48 85 ed             	test   rbp,rbp
   952c8:	74 1a                	je     952e4 <future_backtest_sdk::context::StrategyContext::pending_orders+0x4a4>
   952ca:	ba 01 00 00 00       	mov    edx,0x1
   952cf:	48 8b 7c 24 08       	mov    rdi,QWORD PTR [rsp+0x8]
   952d4:	48 89 ee             	mov    rsi,rbp
   952d7:	ff 15 eb ea 04 00    	call   QWORD PTR [rip+0x4eaeb]        # e3dc8 <_DYNAMIC+0x208>
   952dd:	eb 05                	jmp    952e4 <future_backtest_sdk::context::StrategyContext::pending_orders+0x4a4>
   952df:	eb 00                	jmp    952e1 <future_backtest_sdk::context::StrategyContext::pending_orders+0x4a1>
   952e1:	48 89 c3             	mov    rbx,rax
   952e4:	48 8d 7c 24 10       	lea    rdi,[rsp+0x10]
   952e9:	e8 12 e3 ff ff       	call   93600 <core::ptr::drop_in_place<alloc::vec::Vec<alloc::string::String>>>
   952ee:	48 8b 7c 24 30       	mov    rdi,QWORD PTR [rsp+0x30]
   952f3:	c6 07 00             	mov    BYTE PTR [rdi],0x0
   952f6:	48 8b 74 24 38       	mov    rsi,QWORD PTR [rsp+0x38]
   952fb:	48 85 f6             	test   rsi,rsi
   952fe:	74 0b                	je     9530b <future_backtest_sdk::context::StrategyContext::pending_orders+0x4cb>
   95300:	ba 01 00 00 00       	mov    edx,0x1
   95305:	ff 15 bd ea 04 00    	call   QWORD PTR [rip+0x4eabd]        # e3dc8 <_DYNAMIC+0x208>
   9530b:	48 89 df             	mov    rdi,rbx
   9530e:	e8 7d 76 04 00       	call   dc990 <_Unwind_Resume@plt>
   95313:	cc                   	int3   
   95314:	cc                   	int3   
   95315:	cc                   	int3   
   95316:	cc                   	int3   
   95317:	cc                   	int3   
   95318:	cc                   	int3   
   95319:	cc                   	int3   
   9531a:	cc                   	int3   
   9531b:	cc                   	int3   
   9531c:	cc                   	int3   
   9531d:	cc                   	int3   
   9531e:	cc                   	int3   
   9531f:	cc                   	int3   

0000000000094ac0 <future_backtest_sdk::context::StrategyContext::cancel_pending_ids>:
   94ac0:	55                   	push   rbp
   94ac1:	41 57                	push   r15
   94ac3:	41 56                	push   r14
   94ac5:	41 55                	push   r13
   94ac7:	41 54                	push   r12
   94ac9:	53                   	push   rbx
   94aca:	48 83 ec 58          	sub    rsp,0x58
   94ace:	48 89 f3             	mov    rbx,rsi
   94ad1:	48 89 7c 24 10       	mov    QWORD PTR [rsp+0x10],rdi
   94ad6:	48 89 d7             	mov    rdi,rdx
   94ad9:	48 89 ce             	mov    rsi,rcx
   94adc:	ff 15 2e f9 04 00    	call   QWORD PTR [rip+0x4f92e]        # e4410 <_DYNAMIC+0x850>
   94ae2:	49 89 c4             	mov    r12,rax
   94ae5:	49 89 d6             	mov    r14,rdx
   94ae8:	ff 15 fa f2 04 00    	call   QWORD PTR [rip+0x4f2fa]        # e3de8 <_DYNAMIC+0x228>
   94aee:	bf 00 40 00 00       	mov    edi,0x4000
   94af3:	be 01 00 00 00       	mov    esi,0x1
   94af8:	ff 15 da f2 04 00    	call   QWORD PTR [rip+0x4f2da]        # e3dd8 <_DYNAMIC+0x218>
   94afe:	48 85 c0             	test   rax,rax
   94b01:	0f 84 1f 02 00 00    	je     94d26 <future_backtest_sdk::context::StrategyContext::cancel_pending_ids+0x266>
   94b07:	49 89 c7             	mov    r15,rax
   94b0a:	48 8b 7b 30          	mov    rdi,QWORD PTR [rbx+0x30]
   94b0e:	4c 89 e6             	mov    rsi,r12
   94b11:	48 89 c2             	mov    rdx,rax
   94b14:	b9 00 40 00 00       	mov    ecx,0x4000
   94b19:	ff 15 99 f9 04 00    	call   QWORD PTR [rip+0x4f999]        # e44b8 <fb_ctx_cancel_pending_ids@Base>
   94b1f:	85 c0                	test   eax,eax
   94b21:	0f 8e 44 01 00 00    	jle    94c6b <future_backtest_sdk::context::StrategyContext::cancel_pending_ids+0x1ab>
   94b27:	4c 89 24 24          	mov    QWORD PTR [rsp],r12
   94b2b:	4c 89 74 24 08       	mov    QWORD PTR [rsp+0x8],r14
   94b30:	89 c5                	mov    ebp,eax
   94b32:	48 8d 04 ed 00 00 00 	lea    rax,[rbp*8+0x0]
   94b39:	00 
   94b3a:	48 8d 1c 40          	lea    rbx,[rax+rax*2]
   94b3e:	ff 15 a4 f2 04 00    	call   QWORD PTR [rip+0x4f2a4]        # e3de8 <_DYNAMIC+0x228>
   94b44:	be 08 00 00 00       	mov    esi,0x8
   94b49:	48 89 df             	mov    rdi,rbx
   94b4c:	ff 15 6e f2 04 00    	call   QWORD PTR [rip+0x4f26e]        # e3dc0 <_DYNAMIC+0x200>
   94b52:	48 85 c0             	test   rax,rax
   94b55:	0f 84 e4 01 00 00    	je     94d3f <future_backtest_sdk::context::StrategyContext::cancel_pending_ids+0x27f>
   94b5b:	48 89 6c 24 18       	mov    QWORD PTR [rsp+0x18],rbp
   94b60:	48 89 44 24 20       	mov    QWORD PTR [rsp+0x20],rax
   94b65:	48 c7 44 24 28 00 00 	mov    QWORD PTR [rsp+0x28],0x0
   94b6c:	00 00 
   94b6e:	45 31 f6             	xor    r14d,r14d
   94b71:	31 f6                	xor    esi,esi
   94b73:	31 d2                	xor    edx,edx
   94b75:	eb 40                	jmp    94bb7 <future_backtest_sdk::context::StrategyContext::cancel_pending_ids+0xf7>
   94b77:	48 8b 44 24 20       	mov    rax,QWORD PTR [rsp+0x20]
   94b7c:	4b 8d 0c 76          	lea    rcx,[r14+r14*2]
   94b80:	4c 89 2c c8          	mov    QWORD PTR [rax+rcx*8],r13
   94b84:	48 8b 54 24 38       	mov    rdx,QWORD PTR [rsp+0x38]
   94b89:	48 89 54 c8 08       	mov    QWORD PTR [rax+rcx*8+0x8],rdx
   94b8e:	48 89 5c c8 10       	mov    QWORD PTR [rax+rcx*8+0x10],rbx
   94b93:	49 ff c6             	inc    r14
   94b96:	4c 89 74 24 28       	mov    QWORD PTR [rsp+0x28],r14
   94b9b:	4c 89 e6             	mov    rsi,r12
   94b9e:	49 39 ee             	cmp    r14,rbp
   94ba1:	0f 83 41 01 00 00    	jae    94ce8 <future_backtest_sdk::context::StrategyContext::cancel_pending_ids+0x228>
   94ba7:	4c 89 e2             	mov    rdx,r12
   94baa:	49 81 fc 00 40 00 00 	cmp    r12,0x4000
   94bb1:	0f 84 31 01 00 00    	je     94ce8 <future_backtest_sdk::context::StrategyContext::cancel_pending_ids+0x228>
   94bb7:	4c 8d 62 01          	lea    r12,[rdx+0x1]
   94bbb:	41 80 3c 17 00       	cmp    BYTE PTR [r15+rdx*1],0x0
   94bc0:	75 e5                	jne    94ba7 <future_backtest_sdk::context::StrategyContext::cancel_pending_ids+0xe7>
   94bc2:	48 39 d6             	cmp    rsi,rdx
   94bc5:	73 d4                	jae    94b9b <future_backtest_sdk::context::StrategyContext::cancel_pending_ids+0xdb>
   94bc7:	48 29 f2             	sub    rdx,rsi
   94bca:	4c 01 fe             	add    rsi,r15
   94bcd:	48 8d 7c 24 40       	lea    rdi,[rsp+0x40]
   94bd2:	ff 15 f8 f7 04 00    	call   QWORD PTR [rip+0x4f7f8]        # e43d0 <_DYNAMIC+0x810>
   94bd8:	4c 8b 6c 24 40       	mov    r13,QWORD PTR [rsp+0x40]
   94bdd:	48 8b 74 24 48       	mov    rsi,QWORD PTR [rsp+0x48]
   94be2:	4c 89 e8             	mov    rax,r13
   94be5:	48 f7 d8             	neg    rax
   94be8:	48 8b 5c 24 50       	mov    rbx,QWORD PTR [rsp+0x50]
   94bed:	71 50                	jno    94c3f <future_backtest_sdk::context::StrategyContext::cancel_pending_ids+0x17f>
   94bef:	48 85 db             	test   rbx,rbx
   94bf2:	0f 88 d1 00 00 00    	js     94cc9 <future_backtest_sdk::context::StrategyContext::cancel_pending_ids+0x209>
   94bf8:	74 28                	je     94c22 <future_backtest_sdk::context::StrategyContext::cancel_pending_ids+0x162>
   94bfa:	49 89 f5             	mov    r13,rsi
   94bfd:	ff 15 e5 f1 04 00    	call   QWORD PTR [rip+0x4f1e5]        # e3de8 <_DYNAMIC+0x228>
   94c03:	be 01 00 00 00       	mov    esi,0x1
   94c08:	48 89 df             	mov    rdi,rbx
   94c0b:	ff 15 af f1 04 00    	call   QWORD PTR [rip+0x4f1af]        # e3dc0 <_DYNAMIC+0x200>
   94c11:	48 85 c0             	test   rax,rax
   94c14:	0f 84 3c 01 00 00    	je     94d56 <future_backtest_sdk::context::StrategyContext::cancel_pending_ids+0x296>
   94c1a:	49 89 c6             	mov    r14,rax
   94c1d:	4c 89 ee             	mov    rsi,r13
   94c20:	eb 06                	jmp    94c28 <future_backtest_sdk::context::StrategyContext::cancel_pending_ids+0x168>
   94c22:	41 be 01 00 00 00    	mov    r14d,0x1
   94c28:	4c 89 f7             	mov    rdi,r14
   94c2b:	48 89 da             	mov    rdx,rbx
   94c2e:	ff 15 f4 f1 04 00    	call   QWORD PTR [rip+0x4f1f4]        # e3e28 <memcpy@GLIBC_2.14>
   94c34:	4c 89 74 24 30       	mov    QWORD PTR [rsp+0x30],r14
   94c39:	4c 89 f6             	mov    rsi,r14
   94c3c:	49 89 dd             	mov    r13,rbx
   94c3f:	48 89 74 24 38       	mov    QWORD PTR [rsp+0x38],rsi
   94c44:	4c 8b 74 24 28       	mov    r14,QWORD PTR [rsp+0x28]
   94c49:	4c 3b 74 24 18       	cmp    r14,QWORD PTR [rsp+0x18]
   94c4e:	0f 85 23 ff ff ff    	jne    94b77 <future_backtest_sdk::context::StrategyContext::cancel_pending_ids+0xb7>
   94c54:	48 8d 7c 24 18       	lea    rdi,[rsp+0x18]
   94c59:	48 8d 35 a0 bc 04 00 	lea    rsi,[rip+0x4bca0]        # e0900 <anon.e69fa87c05f933b9fe1f9c21a2065ba3.7.llvm.603266175965479879+0x4b8>
   94c60:	ff 15 aa f4 04 00    	call   QWORD PTR [rip+0x4f4aa]        # e4110 <_DYNAMIC+0x550>
   94c66:	e9 0c ff ff ff       	jmp    94b77 <future_backtest_sdk::context::StrategyContext::cancel_pending_ids+0xb7>
   94c6b:	48 8b 44 24 10       	mov    rax,QWORD PTR [rsp+0x10]
   94c70:	48 c7 00 00 00 00 00 	mov    QWORD PTR [rax],0x0
   94c77:	48 c7 40 08 08 00 00 	mov    QWORD PTR [rax+0x8],0x8
   94c7e:	00 
   94c7f:	48 c7 40 10 00 00 00 	mov    QWORD PTR [rax+0x10],0x0
   94c86:	00 
   94c87:	be 00 40 00 00       	mov    esi,0x4000
   94c8c:	ba 01 00 00 00       	mov    edx,0x1
   94c91:	4c 89 ff             	mov    rdi,r15
   94c94:	ff 15 2e f1 04 00    	call   QWORD PTR [rip+0x4f12e]        # e3dc8 <_DYNAMIC+0x208>
   94c9a:	41 c6 04 24 00       	mov    BYTE PTR [r12],0x0
   94c9f:	4d 85 f6             	test   r14,r14
   94ca2:	74 11                	je     94cb5 <future_backtest_sdk::context::StrategyContext::cancel_pending_ids+0x1f5>
   94ca4:	ba 01 00 00 00       	mov    edx,0x1
   94ca9:	4c 89 e7             	mov    rdi,r12
   94cac:	4c 89 f6             	mov    rsi,r14
   94caf:	ff 15 13 f1 04 00    	call   QWORD PTR [rip+0x4f113]        # e3dc8 <_DYNAMIC+0x208>
   94cb5:	48 8b 44 24 10       	mov    rax,QWORD PTR [rsp+0x10]
   94cba:	48 83 c4 58          	add    rsp,0x58
   94cbe:	5b                   	pop    rbx
   94cbf:	41 5c                	pop    r12
   94cc1:	41 5d                	pop    r13
   94cc3:	41 5e                	pop    r14
   94cc5:	41 5f                	pop    r15
   94cc7:	5d                   	pop    rbp
   94cc8:	c3                   	ret    
   94cc9:	31 ff                	xor    edi,edi
   94ccb:	48 8d 15 ee ba 04 00 	lea    rdx,[rip+0x4baee]        # e07c0 <anon.e69fa87c05f933b9fe1f9c21a2065ba3.7.llvm.603266175965479879+0x378>
   94cd2:	48 8b 74 24 30       	mov    rsi,QWORD PTR [rsp+0x30]
   94cd7:	4c 8b 74 24 08       	mov    r14,QWORD PTR [rsp+0x8]
   94cdc:	4c 8b 24 24          	mov    r12,QWORD PTR [rsp]
   94ce0:	ff 15 9a f1 04 00    	call   QWORD PTR [rip+0x4f19a]        # e3e80 <_DYNAMIC+0x2c0>
   94ce6:	eb 6c                	jmp    94d54 <future_backtest_sdk::context::StrategyContext::cancel_pending_ids+0x294>
   94ce8:	48 8b 44 24 28       	mov    rax,QWORD PTR [rsp+0x28]
   94ced:	48 8b 4c 24 10       	mov    rcx,QWORD PTR [rsp+0x10]
   94cf2:	48 89 41 10          	mov    QWORD PTR [rcx+0x10],rax
   94cf6:	0f 10 44 24 18       	movups xmm0,XMMWORD PTR [rsp+0x18]
   94cfb:	0f 11 01             	movups XMMWORD PTR [rcx],xmm0
   94cfe:	be 00 40 00 00       	mov    esi,0x4000
   94d03:	ba 01 00 00 00       	mov    edx,0x1
   94d08:	4c 89 ff             	mov    rdi,r15
   94d0b:	ff 15 b7 f0 04 00    	call   QWORD PTR [rip+0x4f0b7]        # e3dc8 <_DYNAMIC+0x208>
   94d11:	4c 8b 24 24          	mov    r12,QWORD PTR [rsp]
   94d15:	41 c6 04 24 00       	mov    BYTE PTR [r12],0x0
   94d1a:	4c 8b 74 24 08       	mov    r14,QWORD PTR [rsp+0x8]
   94d1f:	4d 85 f6             	test   r14,r14
   94d22:	75 80                	jne    94ca4 <future_backtest_sdk::context::StrategyContext::cancel_pending_ids+0x1e4>
   94d24:	eb 8f                	jmp    94cb5 <future_backtest_sdk::context::StrategyContext::cancel_pending_ids+0x1f5>
   94d26:	48 8d 15 a3 bb 04 00 	lea    rdx,[rip+0x4bba3]        # e08d0 <anon.e69fa87c05f933b9fe1f9c21a2065ba3.7.llvm.603266175965479879+0x488>
   94d2d:	bf 01 00 00 00       	mov    edi,0x1
   94d32:	be 00 40 00 00       	mov    esi,0x4000
   94d37:	ff 15 43 f1 04 00    	call   QWORD PTR [rip+0x4f143]        # e3e80 <_DYNAMIC+0x2c0>
   94d3d:	eb 15                	jmp    94d54 <future_backtest_sdk::context::StrategyContext::cancel_pending_ids+0x294>
   94d3f:	48 8d 15 a2 bb 04 00 	lea    rdx,[rip+0x4bba2]        # e08e8 <anon.e69fa87c05f933b9fe1f9c21a2065ba3.7.llvm.603266175965479879+0x4a0>
   94d46:	bf 08 00 00 00       	mov    edi,0x8
   94d4b:	48 89 de             	mov    rsi,rbx
   94d4e:	ff 15 2c f1 04 00    	call   QWORD PTR [rip+0x4f12c]        # e3e80 <_DYNAMIC+0x2c0>
   94d54:	0f 0b                	ud2    
   94d56:	48 89 5c 24 30       	mov    QWORD PTR [rsp+0x30],rbx
   94d5b:	bf 01 00 00 00       	mov    edi,0x1
   94d60:	e9 66 ff ff ff       	jmp    94ccb <future_backtest_sdk::context::StrategyContext::cancel_pending_ids+0x20b>
   94d65:	48 89 c3             	mov    rbx,rax
   94d68:	4d 85 ed             	test   r13,r13
   94d6b:	74 2b                	je     94d98 <future_backtest_sdk::context::StrategyContext::cancel_pending_ids+0x2d8>
   94d6d:	ba 01 00 00 00       	mov    edx,0x1
   94d72:	48 8b 7c 24 38       	mov    rdi,QWORD PTR [rsp+0x38]
   94d77:	4c 89 ee             	mov    rsi,r13
   94d7a:	ff 15 48 f0 04 00    	call   QWORD PTR [rip+0x4f048]        # e3dc8 <_DYNAMIC+0x208>
   94d80:	eb 16                	jmp    94d98 <future_backtest_sdk::context::StrategyContext::cancel_pending_ids+0x2d8>
   94d82:	48 89 c3             	mov    rbx,rax
   94d85:	4c 8b 74 24 08       	mov    r14,QWORD PTR [rsp+0x8]
   94d8a:	4c 8b 24 24          	mov    r12,QWORD PTR [rsp]
   94d8e:	eb 20                	jmp    94db0 <future_backtest_sdk::context::StrategyContext::cancel_pending_ids+0x2f0>
   94d90:	48 89 c3             	mov    rbx,rax
   94d93:	eb 2e                	jmp    94dc3 <future_backtest_sdk::context::StrategyContext::cancel_pending_ids+0x303>
   94d95:	48 89 c3             	mov    rbx,rax
   94d98:	4c 8b 74 24 08       	mov    r14,QWORD PTR [rsp+0x8]
   94d9d:	4c 8b 24 24          	mov    r12,QWORD PTR [rsp]
   94da1:	eb 03                	jmp    94da6 <future_backtest_sdk::context::StrategyContext::cancel_pending_ids+0x2e6>
   94da3:	48 89 c3             	mov    rbx,rax
   94da6:	48 8d 7c 24 18       	lea    rdi,[rsp+0x18]
   94dab:	e8 50 e8 ff ff       	call   93600 <core::ptr::drop_in_place<alloc::vec::Vec<alloc::string::String>>>
   94db0:	be 00 40 00 00       	mov    esi,0x4000
   94db5:	ba 01 00 00 00       	mov    edx,0x1
   94dba:	4c 89 ff             	mov    rdi,r15
   94dbd:	ff 15 05 f0 04 00    	call   QWORD PTR [rip+0x4f005]        # e3dc8 <_DYNAMIC+0x208>
   94dc3:	41 c6 04 24 00       	mov    BYTE PTR [r12],0x0
   94dc8:	4d 85 f6             	test   r14,r14
   94dcb:	74 11                	je     94dde <future_backtest_sdk::context::StrategyContext::cancel_pending_ids+0x31e>
   94dcd:	ba 01 00 00 00       	mov    edx,0x1
   94dd2:	4c 89 e7             	mov    rdi,r12
   94dd5:	4c 89 f6             	mov    rsi,r14
   94dd8:	ff 15 ea ef 04 00    	call   QWORD PTR [rip+0x4efea]        # e3dc8 <_DYNAMIC+0x208>
   94dde:	48 89 df             	mov    rdi,rbx
   94de1:	e8 aa 7b 04 00       	call   dc990 <_Unwind_Resume@plt>
   94de6:	cc                   	int3   
   94de7:	cc                   	int3   
   94de8:	cc                   	int3   
   94de9:	cc                   	int3   
   94dea:	cc                   	int3   
   94deb:	cc                   	int3   
   94dec:	cc                   	int3   
   94ded:	cc                   	int3   
   94dee:	cc                   	int3   
   94def:	cc                   	int3   