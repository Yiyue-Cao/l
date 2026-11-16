00000000000827b0 <strategy_comm5::signal_trigger::SignalTrigger::new>:
   827b0:	55                   	push   %rbp
   827b1:	41 57                	push   %r15
   827b3:	41 56                	push   %r14
   827b5:	41 55                	push   %r13
   827b7:	41 54                	push   %r12
   827b9:	53                   	push   %rbx
   827ba:	48 83 ec 38          	sub    $0x38,%rsp
   827be:	49 89 d6             	mov    %rdx,%r14
   827c1:	49 89 f4             	mov    %rsi,%r12
   827c4:	49 89 ff             	mov    %rdi,%r15
   827c7:	48 8b 5a 08          	mov    0x8(%rdx),%rbx
   827cb:	48 8b 6a 10          	mov    0x10(%rdx),%rbp
   827cf:	66 48 8d 3d 19 15 08 	data16 lea 0x81519(%rip),%rdi        # 103cf0 <_DYNAMIC+0x290>
   827d6:	00 
   827d7:	66 66 48 e8 b1 9d 07 	data16 data16 rex.W call fc590 <__tls_get_addr@plt>
   827de:	00 
   827df:	49 89 c5             	mov    %rax,%r13
   827e2:	80 78 10 01          	cmpb   $0x1,0x10(%rax)
   827e6:	0f 85 ba 00 00 00    	jne    828a6 <strategy_comm5::signal_trigger::SignalTrigger::new+0xf6>
   827ec:	49 8b 45 00          	mov    0x0(%r13),%rax
   827f0:	49 8b 55 08          	mov    0x8(%r13),%rdx
   827f4:	48 8d 48 01          	lea    0x1(%rax),%rcx
   827f8:	49 89 4d 00          	mov    %rcx,0x0(%r13)
   827fc:	48 8d 0c eb          	lea    (%rbx,%rbp,8),%rcx
   82800:	0f 10 05 f9 c2 07 00 	movups 0x7c2f9(%rip),%xmm0        # feb00 <anon.50e25bb1355b8971fc58210c29d1b4b6.3.llvm.1301231569978033549+0x10>
   82807:	0f 29 44 24 10       	movaps %xmm0,0x10(%rsp)
   8280c:	0f 10 05 dd c2 07 00 	movups 0x7c2dd(%rip),%xmm0        # feaf0 <anon.50e25bb1355b8971fc58210c29d1b4b6.3.llvm.1301231569978033549>
   82813:	0f 29 04 24          	movaps %xmm0,(%rsp)
   82817:	48 89 44 24 20       	mov    %rax,0x20(%rsp)
   8281c:	48 89 54 24 28       	mov    %rdx,0x28(%rsp)
   82821:	48 89 e7             	mov    %rsp,%rdi
   82824:	48 89 de             	mov    %rbx,%rsi
   82827:	48 89 ca             	mov    %rcx,%rdx
   8282a:	e8 71 ef fe ff       	call   717a0 <<hashbrown::map::HashMap<K,V,S,A> as core::iter::traits::collect::Extend<(K,V)>>::extend>
   8282f:	0f 28 04 24          	movaps (%rsp),%xmm0
   82833:	0f 28 4c 24 10       	movaps 0x10(%rsp),%xmm1
   82838:	0f 28 54 24 20       	movaps 0x20(%rsp),%xmm2
   8283d:	41 0f 11 57 20       	movups %xmm2,0x20(%r15)
   82842:	41 0f 11 4f 10       	movups %xmm1,0x10(%r15)
   82847:	41 0f 11 07          	movups %xmm0,(%r15)
   8284b:	0f 57 c0             	xorps  %xmm0,%xmm0
   8284e:	41 0f 11 47 30       	movups %xmm0,0x30(%r15)
   82853:	41 0f 10 0c 24       	movups (%r12),%xmm1
   82858:	41 0f 10 54 24 10    	movups 0x10(%r12),%xmm2
   8285e:	41 0f 11 4f 40       	movups %xmm1,0x40(%r15)
   82863:	41 0f 11 57 50       	movups %xmm2,0x50(%r15)
   82868:	41 0f 11 47 60       	movups %xmm0,0x60(%r15)
   8286d:	41 0f 11 47 70       	movups %xmm0,0x70(%r15)
   82872:	41 0f 11 87 80 00 00 	movups %xmm0,0x80(%r15)
   82879:	00 
   8287a:	49 8b 36             	mov    (%r14),%rsi
   8287d:	48 85 f6             	test   %rsi,%rsi
   82880:	74 12                	je     82894 <strategy_comm5::signal_trigger::SignalTrigger::new+0xe4>
   82882:	48 c1 e6 03          	shl    $0x3,%rsi
   82886:	ba 08 00 00 00       	mov    $0x8,%edx
   8288b:	48 89 df             	mov    %rbx,%rdi
   8288e:	ff 15 e4 13 08 00    	call   *0x813e4(%rip)        # 103c78 <_DYNAMIC+0x218>
   82894:	4c 89 f8             	mov    %r15,%rax
   82897:	48 83 c4 38          	add    $0x38,%rsp
   8289b:	5b                   	pop    %rbx
   8289c:	41 5c                	pop    %r12
   8289e:	41 5d                	pop    %r13
   828a0:	41 5e                	pop    %r14
   828a2:	41 5f                	pop    %r15
   828a4:	5d                   	pop    %rbp
   828a5:	c3                   	ret    
   828a6:	ff 15 3c 15 08 00    	call   *0x8153c(%rip)        # 103de8 <_DYNAMIC+0x388>
   828ac:	49 89 45 00          	mov    %rax,0x0(%r13)
   828b0:	49 89 55 08          	mov    %rdx,0x8(%r13)
   828b4:	41 c6 45 10 01       	movb   $0x1,0x10(%r13)
   828b9:	e9 36 ff ff ff       	jmp    827f4 <strategy_comm5::signal_trigger::SignalTrigger::new+0x44>
   828be:	49 89 c7             	mov    %rax,%r15
   828c1:	eb 0b                	jmp    828ce <strategy_comm5::signal_trigger::SignalTrigger::new+0x11e>
   828c3:	49 89 c7             	mov    %rax,%r15
   828c6:	48 89 e7             	mov    %rsp,%rdi
   828c9:	e8 c2 eb fd ff       	call   61490 <<hashbrown::raw::RawTable<T,A> as core::ops::drop::Drop>::drop>
   828ce:	49 8b 36             	mov    (%r14),%rsi
   828d1:	48 85 f6             	test   %rsi,%rsi
   828d4:	74 12                	je     828e8 <strategy_comm5::signal_trigger::SignalTrigger::new+0x138>
   828d6:	48 c1 e6 03          	shl    $0x3,%rsi
   828da:	ba 08 00 00 00       	mov    $0x8,%edx
   828df:	48 89 df             	mov    %rbx,%rdi
   828e2:	ff 15 90 13 08 00    	call   *0x81390(%rip)        # 103c78 <_DYNAMIC+0x218>
   828e8:	4c 89 ff             	mov    %r15,%rdi
   828eb:	e8 90 9c 07 00       	call   fc580 <_Unwind_Resume@plt>
   828f0:	ff 15 5a 14 08 00    	call   *0x8145a(%rip)        # 103d50 <_DYNAMIC+0x2f0>
   828f6:	cc                   	int3   
   828f7:	cc                   	int3   
   828f8:	cc                   	int3   
   828f9:	cc                   	int3   
   828fa:	cc                   	int3   
   828fb:	cc                   	int3   
   828fc:	cc                   	int3   
   828fd:	cc                   	int3   
   828fe:	cc                   	int3   
   828ff:	cc                   	int3   
