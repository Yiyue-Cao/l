0000000000049dc0 <<strategy_comm_maker1::StrategyCommMaker1 as future_backtest_sdk::plugin::StrategyPlugin>::on_depth>:
   49dc0:	83 3f 02             	cmp    DWORD PTR [rdi],0x2
   49dc3:	0f 84 0c 02 00 00    	je     49fd5 <<strategy_comm_maker1::StrategyCommMaker1 as future_backtest_sdk::plugin::StrategyPlugin>::on_depth+0x215>
   49dc9:	41 57                	push   r15
   49dcb:	41 56                	push   r14
   49dcd:	53                   	push   rbx
   49dce:	48 83 ec 60          	sub    rsp,0x60
   49dd2:	48 89 f3             	mov    rbx,rsi
   49dd5:	f2 0f 10 87 80 01 00 	movsd  xmm0,QWORD PTR [rdi+0x180]
   49ddc:	00 
   49ddd:	0f 29 04 24          	movaps XMMWORD PTR [rsp],xmm0
   49de1:	48 83 c6 20          	add    rsi,0x20
   49de5:	48 8d 15 5c db 08 00 	lea    rdx,[rip+0x8db5c]        # d7948 <anon.0ab731c97b03f09d8447c1a9a198517a.91.llvm.10408552336170730617>
   49dec:	4c 8d 74 24 48       	lea    r14,[rsp+0x48]
   49df1:	49 89 ff             	mov    r15,rdi
   49df4:	4c 89 f7             	mov    rdi,r14
   49df7:	ff 15 db 36 09 00    	call   QWORD PTR [rip+0x936db]        # dd4d8 <_DYNAMIC+0x368>
   49dfd:	49 81 c7 00 02 00 00 	add    r15,0x200
   49e04:	48 8d 7c 24 20       	lea    rdi,[rsp+0x20]
   49e09:	4c 89 fe             	mov    rsi,r15
   49e0c:	4c 89 f2             	mov    rdx,r14
   49e0f:	e8 5c 2c 01 00       	call   5ca70 <hashbrown::rustc_entry::<impl hashbrown::map::HashMap<K,V,S,A>>::rustc_entry>
   49e14:	48 8b 4c 24 20       	mov    rcx,QWORD PTR [rsp+0x20]
   49e19:	4c 8b 74 24 28       	mov    r14,QWORD PTR [rsp+0x28]
   49e1e:	48 89 c8             	mov    rax,rcx
   49e21:	48 f7 d8             	neg    rax
   49e24:	0f 80 ad 00 00 00    	jo     49ed7 <<strategy_comm_maker1::StrategyCommMaker1 as future_backtest_sdk::plugin::StrategyPlugin>::on_depth+0x117>
   49e2a:	48 8b 44 24 38       	mov    rax,QWORD PTR [rsp+0x38]
   49e2f:	48 8b 74 24 40       	mov    rsi,QWORD PTR [rsp+0x40]
   49e34:	48 8b 10             	mov    rdx,QWORD PTR [rax]
   49e37:	48 8b 78 08          	mov    rdi,QWORD PTR [rax+0x8]
   49e3b:	49 89 f9             	mov    r9,rdi
   49e3e:	49 21 f1             	and    r9,rsi
   49e41:	f3 42 0f 6f 04 0a    	movdqu xmm0,XMMWORD PTR [rdx+r9*1]
   49e47:	66 44 0f d7 d0       	pmovmskb r10d,xmm0
   49e4c:	45 85 d2             	test   r10d,r10d
   49e4f:	0f 84 83 01 00 00    	je     49fd8 <<strategy_comm_maker1::StrategyCommMaker1 as future_backtest_sdk::plugin::StrategyPlugin>::on_depth+0x218>
   49e55:	4c 8b 44 24 30       	mov    r8,QWORD PTR [rsp+0x30]
   49e5a:	f3 45 0f bc d2       	tzcnt  r10d,r10d
   49e5f:	4d 01 ca             	add    r10,r9
   49e62:	49 21 fa             	and    r10,rdi
   49e65:	46 0f b6 0c 12       	movzx  r9d,BYTE PTR [rdx+r10*1]
   49e6a:	45 84 c9             	test   r9b,r9b
   49e6d:	0f 89 8b 01 00 00    	jns    49ffe <<strategy_comm_maker1::StrategyCommMaker1 as future_backtest_sdk::plugin::StrategyPlugin>::on_depth+0x23e>
   49e73:	48 c1 ee 39          	shr    rsi,0x39
   49e77:	4d 8d 5a f0          	lea    r11,[r10-0x10]
   49e7b:	49 21 fb             	and    r11,rdi
   49e7e:	42 88 34 12          	mov    BYTE PTR [rdx+r10*1],sil
   49e82:	42 88 74 1a 10       	mov    BYTE PTR [rdx+r11*1+0x10],sil
   49e87:	41 80 e1 01          	and    r9b,0x1
   49e8b:	41 0f b6 f1          	movzx  esi,r9b
   49e8f:	48 29 70 10          	sub    QWORD PTR [rax+0x10],rsi
   49e93:	49 f7 da             	neg    r10
   49e96:	4b 8d 34 d2          	lea    rsi,[r10+r10*8]
   49e9a:	48 89 4c f2 b8       	mov    QWORD PTR [rdx+rsi*8-0x48],rcx
   49e9f:	4c 89 74 f2 c0       	mov    QWORD PTR [rdx+rsi*8-0x40],r14
   49ea4:	4c 8d 34 f2          	lea    r14,[rdx+rsi*8]
   49ea8:	4c 89 44 f2 c8       	mov    QWORD PTR [rdx+rsi*8-0x38],r8
   49ead:	48 c7 44 f2 d0 00 00 	mov    QWORD PTR [rdx+rsi*8-0x30],0x0
   49eb4:	00 00 
   49eb6:	48 c7 44 f2 d8 08 00 	mov    QWORD PTR [rdx+rsi*8-0x28],0x8
   49ebd:	00 00 
   49ebf:	66 0f ef c0          	pxor   xmm0,xmm0
   49ec3:	f3 0f 7f 44 f2 e0    	movdqu XMMWORD PTR [rdx+rsi*8-0x20],xmm0
   49ec9:	f2 0f 10 04 24       	movsd  xmm0,QWORD PTR [rsp]
   49ece:	0f 11 44 f2 f0       	movups XMMWORD PTR [rdx+rsi*8-0x10],xmm0
   49ed3:	48 ff 40 18          	inc    QWORD PTR [rax+0x18]
   49ed7:	f2 0f 10 83 a0 00 00 	movsd  xmm0,QWORD PTR [rbx+0xa0]
   49ede:	00 
   49edf:	f2 0f 58 43 50       	addsd  xmm0,QWORD PTR [rbx+0x50]
   49ee4:	f2 0f 59 05 a4 dc fc 	mulsd  xmm0,QWORD PTR [rip+0xfffffffffffcdca4]        # 17b90 <anon.8d7226ba1ba94417efa9e0a1e98803de.1.llvm.16032588982719308145+0x1a0>
   49eeb:	ff 
   49eec:	f2 0f 10 4b 38       	movsd  xmm1,QWORD PTR [rbx+0x38]
   49ef1:	49 8b 4e d0          	mov    rcx,QWORD PTR [r14-0x30]
   49ef5:	49 8b 46 e8          	mov    rax,QWORD PTR [r14-0x18]
   49ef9:	48 39 c8             	cmp    rax,rcx
   49efc:	75 2e                	jne    49f2c <<strategy_comm_maker1::StrategyCommMaker1 as future_backtest_sdk::plugin::StrategyPlugin>::on_depth+0x16c>
   49efe:	49 8d 7e d0          	lea    rdi,[r14-0x30]
   49f02:	48 8d 35 8f d5 08 00 	lea    rsi,[rip+0x8d58f]        # d7498 <anon.0ab731c97b03f09d8447c1a9a198517a.18.llvm.10408552336170730617>
   49f09:	f2 0f 11 04 24       	movsd  QWORD PTR [rsp],xmm0
   49f0e:	f2 0f 11 4c 24 18    	movsd  QWORD PTR [rsp+0x18],xmm1
   49f14:	e8 97 fc 00 00       	call   59bb0 <_ZN5alloc11collections9vec_deque21VecDeque$LT$T$C$A$GT$4grow17hf0a39d3161fac647E.llvm.13652691897008795588>
   49f19:	f2 0f 10 4c 24 18    	movsd  xmm1,QWORD PTR [rsp+0x18]
   49f1f:	f2 0f 10 04 24       	movsd  xmm0,QWORD PTR [rsp]
   49f24:	49 8b 4e d0          	mov    rcx,QWORD PTR [r14-0x30]
   49f28:	49 8b 46 e8          	mov    rax,QWORD PTR [r14-0x18]
   49f2c:	49 03 46 e0          	add    rax,QWORD PTR [r14-0x20]
   49f30:	31 d2                	xor    edx,edx
   49f32:	48 39 c8             	cmp    rax,rcx
   49f35:	48 0f 43 d1          	cmovae rdx,rcx
   49f39:	48 29 d0             	sub    rax,rdx
   49f3c:	49 8b 4e d8          	mov    rcx,QWORD PTR [r14-0x28]
   49f40:	48 c1 e0 04          	shl    rax,0x4
   49f44:	f2 0f 11 0c 01       	movsd  QWORD PTR [rcx+rax*1],xmm1
   49f49:	f2 0f 11 44 01 08    	movsd  QWORD PTR [rcx+rax*1+0x8],xmm0
   49f4f:	49 8b 46 e8          	mov    rax,QWORD PTR [r14-0x18]
   49f53:	48 89 c1             	mov    rcx,rax
   49f56:	48 ff c1             	inc    rcx
   49f59:	49 89 4e e8          	mov    QWORD PTR [r14-0x18],rcx
   49f5d:	f2 41 0f 58 46 f8    	addsd  xmm0,QWORD PTR [r14-0x8]
   49f63:	f2 41 0f 11 46 f8    	movsd  QWORD PTR [r14-0x8],xmm0
   49f69:	74 61                	je     49fcc <<strategy_comm_maker1::StrategyCommMaker1 as future_backtest_sdk::plugin::StrategyPlugin>::on_depth+0x20c>
   49f6b:	f2 41 0f 5c 4e f0    	subsd  xmm1,QWORD PTR [r14-0x10]
   49f71:	49 8b 4e e0          	mov    rcx,QWORD PTR [r14-0x20]
   49f75:	49 8b 56 d0          	mov    rdx,QWORD PTR [r14-0x30]
   49f79:	49 8b 76 d8          	mov    rsi,QWORD PTR [r14-0x28]
   49f7d:	31 ff                	xor    edi,edi
   49f7f:	90                   	nop
   49f80:	48 39 d1             	cmp    rcx,rdx
   49f83:	49 89 d1             	mov    r9,rdx
   49f86:	4c 0f 42 cf          	cmovb  r9,rdi
   49f8a:	49 89 c8             	mov    r8,rcx
   49f8d:	4d 29 c8             	sub    r8,r9
   49f90:	49 c1 e0 04          	shl    r8,0x4
   49f94:	66 42 0f 2e 0c 06    	ucomisd xmm1,QWORD PTR [rsi+r8*1]
   49f9a:	76 30                	jbe    49fcc <<strategy_comm_maker1::StrategyCommMaker1 as future_backtest_sdk::plugin::StrategyPlugin>::on_depth+0x20c>
   49f9c:	49 01 f0             	add    r8,rsi
   49f9f:	f2 41 0f 5c 40 08    	subsd  xmm0,QWORD PTR [r8+0x8]
   49fa5:	f2 41 0f 11 46 f8    	movsd  QWORD PTR [r14-0x8],xmm0
   49fab:	48 ff c1             	inc    rcx
   49fae:	48 39 d1             	cmp    rcx,rdx
   49fb1:	41 b8 00 00 00 00    	mov    r8d,0x0
   49fb7:	4c 0f 43 c2          	cmovae r8,rdx
   49fbb:	4c 29 c1             	sub    rcx,r8
   49fbe:	49 89 4e e0          	mov    QWORD PTR [r14-0x20],rcx
   49fc2:	49 89 46 e8          	mov    QWORD PTR [r14-0x18],rax
   49fc6:	48 83 c0 ff          	add    rax,0xffffffffffffffff
   49fca:	72 b4                	jb     49f80 <<strategy_comm_maker1::StrategyCommMaker1 as future_backtest_sdk::plugin::StrategyPlugin>::on_depth+0x1c0>
   49fcc:	48 83 c4 60          	add    rsp,0x60
   49fd0:	5b                   	pop    rbx
   49fd1:	41 5e                	pop    r14
   49fd3:	41 5f                	pop    r15
   49fd5:	31 c0                	xor    eax,eax
   49fd7:	c3                   	ret    
   49fd8:	41 b8 10 00 00 00    	mov    r8d,0x10
   49fde:	4d 01 c1             	add    r9,r8
   49fe1:	49 21 f9             	and    r9,rdi
   49fe4:	f3 42 0f 6f 04 0a    	movdqu xmm0,XMMWORD PTR [rdx+r9*1]
   49fea:	66 44 0f d7 d0       	pmovmskb r10d,xmm0
   49fef:	49 83 c0 10          	add    r8,0x10
   49ff3:	45 85 d2             	test   r10d,r10d
   49ff6:	0f 85 59 fe ff ff    	jne    49e55 <<strategy_comm_maker1::StrategyCommMaker1 as future_backtest_sdk::plugin::StrategyPlugin>::on_depth+0x95>
   49ffc:	eb e0                	jmp    49fde <<strategy_comm_maker1::StrategyCommMaker1 as future_backtest_sdk::plugin::StrategyPlugin>::on_depth+0x21e>
   49ffe:	66 0f 6f 02          	movdqa xmm0,XMMWORD PTR [rdx]
   4a002:	66 44 0f d7 c8       	pmovmskb r9d,xmm0
   4a007:	f3 45 0f bc d1       	tzcnt  r10d,r9d
   4a00c:	46 0f b6 0c 12       	movzx  r9d,BYTE PTR [rdx+r10*1]
   4a011:	e9 5d fe ff ff       	jmp    49e73 <<strategy_comm_maker1::StrategyCommMaker1 as future_backtest_sdk::plugin::StrategyPlugin>::on_depth+0xb3>
   4a016:	cc                   	int3   
   4a017:	cc                   	int3   
   4a018:	cc                   	int3   
   4a019:	cc                   	int3   
   4a01a:	cc                   	int3   
   4a01b:	cc                   	int3   
   4a01c:	cc                   	int3   
   4a01d:	cc                   	int3   
   4a01e:	cc                   	int3   
   4a01f:	cc                   	int3   