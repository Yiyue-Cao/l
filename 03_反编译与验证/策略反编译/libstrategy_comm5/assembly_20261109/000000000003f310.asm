000000000003f310 <<strategy_comm5::StrategyComm5 as future_backtest_sdk::plugin::StrategyPlugin>::on_signal>:
   3f310:	55                   	push   %rbp
   3f311:	41 57                	push   %r15
   3f313:	41 56                	push   %r14
   3f315:	41 55                	push   %r13
   3f317:	41 54                	push   %r12
   3f319:	53                   	push   %rbx
   3f31a:	48 81 ec 00 10 00 00 	sub    $0x1000,%rsp
   3f321:	48 c7 04 24 00 00 00 	movq   $0x0,(%rsp)
   3f328:	00 
   3f329:	48 83 ec 78          	sub    $0x78,%rsp
   3f32d:	48 89 74 24 40       	mov    %rsi,0x40(%rsp)
   3f332:	49 89 fe             	mov    %rdi,%r14
   3f335:	48 89 54 24 18       	mov    %rdx,0x18(%rsp)
   3f33a:	48 89 d7             	mov    %rdx,%rdi
   3f33d:	ff 15 b5 4a 0c 00    	call   *0xc4ab5(%rip)        # 103df8 <_DYNAMIC+0x398>
   3f343:	0f b7 58 34          	movzwl 0x34(%rax),%ebx
   3f347:	f2 0f 10 40 28       	movsd  0x28(%rax),%xmm0
   3f34c:	f2 0f 11 44 24 20    	movsd  %xmm0,0x20(%rsp)
   3f352:	0f 10 40 18          	movups 0x18(%rax),%xmm0
   3f356:	0f 29 84 24 80 00 00 	movaps %xmm0,0x80(%rsp)
   3f35d:	00 
   3f35e:	8b 68 30             	mov    0x30(%rax),%ebp
   3f361:	48 8d 15 38 ea 0b 00 	lea    0xbea38(%rip),%rdx        # fdda0 <anon.8868ba55c3fc5525a110cabbb60004d5.152.llvm.6579149275953927878>
   3f368:	48 8d bc 24 a8 04 00 	lea    0x4a8(%rsp),%rdi
   3f36f:	00 
   3f370:	48 89 c6             	mov    %rax,%rsi
   3f373:	e8 a8 8e 04 00       	call   88220 <<alloc::vec::Vec<T,A> as core::clone::Clone>::clone>
   3f378:	89 ac 24 d8 04 00 00 	mov    %ebp,0x4d8(%rsp)
   3f37f:	66 89 9c 24 dc 04 00 	mov    %bx,0x4dc(%rsp)
   3f386:	00 
   3f387:	0f 28 84 24 80 00 00 	movaps 0x80(%rsp),%xmm0
   3f38e:	00 
   3f38f:	0f 11 84 24 c0 04 00 	movups %xmm0,0x4c0(%rsp)
   3f396:	00 
   3f397:	f2 0f 10 44 24 20    	movsd  0x20(%rsp),%xmm0
   3f39d:	f2 0f 11 84 24 d0 04 	movsd  %xmm0,0x4d0(%rsp)
   3f3a4:	00 00 
   3f3a6:	41 83 3e 02          	cmpl   $0x2,(%r14)
   3f3aa:	0f 84 4e 17 00 00    	je     40afe <<strategy_comm5::StrategyComm5 as future_backtest_sdk::plugin::StrategyPlugin>::on_signal+0x17ee>
   3f3b0:	4c 89 f3             	mov    %r14,%rbx
   3f3b3:	49 8d b6 10 03 00 00 	lea    0x310(%r14),%rsi
   3f3ba:	48 8d 15 77 ec 0b 00 	lea    0xbec77(%rip),%rdx        # fe038 <anon.8868ba55c3fc5525a110cabbb60004d5.152.llvm.6579149275953927878+0x298>
   3f3c1:	48 8d bc 24 b8 02 00 	lea    0x2b8(%rsp),%rdi
   3f3c8:	00 
   3f3c9:	ff 15 e9 49 0c 00    	call   *0xc49e9(%rip)        # 103db8 <_DYNAMIC+0x358>
   3f3cf:	0f 10 83 d0 03 00 00 	movups 0x3d0(%rbx),%xmm0
   3f3d6:	0f 29 44 24 20       	movaps %xmm0,0x20(%rsp)
   3f3db:	48 8d b3 28 03 00 00 	lea    0x328(%rbx),%rsi
   3f3e2:	48 8d 15 4f ec 0b 00 	lea    0xbec4f(%rip),%rdx        # fe038 <anon.8868ba55c3fc5525a110cabbb60004d5.152.llvm.6579149275953927878+0x298>
   3f3e9:	48 8d bc 24 40 03 00 	lea    0x340(%rsp),%rdi
   3f3f0:	00 
   3f3f1:	ff 15 c1 49 0c 00    	call   *0xc49c1(%rip)        # 103db8 <_DYNAMIC+0x358>
   3f3f7:	48 bd 00 00 00 00 00 	movabs $0x8000000000000000,%rbp
   3f3fe:	00 00 80 
   3f401:	4c 8b ab 50 03 00 00 	mov    0x350(%rbx),%r13
   3f408:	4e 8d 34 ed 00 00 00 	lea    0x0(,%r13,8),%r14
   3f40f:	00 
   3f410:	4c 89 e8             	mov    %r13,%rax
   3f413:	48 c1 e8 3d          	shr    $0x3d,%rax
   3f417:	0f 95 c0             	setne  %al
   3f41a:	48 8d 4d f8          	lea    -0x8(%rbp),%rcx
   3f41e:	49 39 ce             	cmp    %rcx,%r14
   3f421:	0f 97 c1             	seta   %cl
   3f424:	08 c1                	or     %al,%cl
   3f426:	74 1b                	je     3f443 <<strategy_comm5::StrategyComm5 as future_backtest_sdk::plugin::StrategyPlugin>::on_signal+0x133>
   3f428:	45 31 e4             	xor    %r12d,%r12d
   3f42b:	48 8d 15 5e fa 0b 00 	lea    0xbfa5e(%rip),%rdx        # fee90 <anon.cc43c968d9f5ea60f379101257a7fe81.20.llvm.6761866898376787025>
   3f432:	4c 89 e7             	mov    %r12,%rdi
   3f435:	4c 89 f6             	mov    %r14,%rsi
   3f438:	ff 15 9a 48 0c 00    	call   *0xc489a(%rip)        # 103cd8 <_DYNAMIC+0x278>
   3f43e:	e9 d4 16 00 00       	jmp    40b17 <<strategy_comm5::StrategyComm5 as future_backtest_sdk::plugin::StrategyPlugin>::on_signal+0x1807>
   3f443:	0f 10 83 e0 03 00 00 	movups 0x3e0(%rbx),%xmm0
   3f44a:	0f 29 84 24 b0 00 00 	movaps %xmm0,0xb0(%rsp)
   3f451:	00 
   3f452:	4c 8b bb 48 03 00 00 	mov    0x348(%rbx),%r15
   3f459:	4d 85 f6             	test   %r14,%r14
   3f45c:	74 29                	je     3f487 <<strategy_comm5::StrategyComm5 as future_backtest_sdk::plugin::StrategyPlugin>::on_signal+0x177>
   3f45e:	ff 15 34 48 0c 00    	call   *0xc4834(%rip)        # 103c98 <_DYNAMIC+0x238>
   3f464:	41 bc 08 00 00 00    	mov    $0x8,%r12d
   3f46a:	be 08 00 00 00       	mov    $0x8,%esi
   3f46f:	4c 89 f7             	mov    %r14,%rdi
   3f472:	ff 15 f8 47 0c 00    	call   *0xc47f8(%rip)        # 103c70 <_DYNAMIC+0x210>
   3f478:	48 85 c0             	test   %rax,%rax
   3f47b:	74 ae                	je     3f42b <<strategy_comm5::StrategyComm5 as future_backtest_sdk::plugin::StrategyPlugin>::on_signal+0x11b>
   3f47d:	4c 89 ac 24 80 00 00 	mov    %r13,0x80(%rsp)
   3f484:	00 
   3f485:	eb 11                	jmp    3f498 <<strategy_comm5::StrategyComm5 as future_backtest_sdk::plugin::StrategyPlugin>::on_signal+0x188>
   3f487:	b8 08 00 00 00       	mov    $0x8,%eax
   3f48c:	48 c7 84 24 80 00 00 	movq   $0x0,0x80(%rsp)
   3f493:	00 00 00 00 00 
   3f498:	48 89 84 24 a0 00 00 	mov    %rax,0xa0(%rsp)
   3f49f:	00 
   3f4a0:	48 89 c7             	mov    %rax,%rdi
   3f4a3:	4c 89 fe             	mov    %r15,%rsi
   3f4a6:	4c 89 f2             	mov    %r14,%rdx
   3f4a9:	ff 15 19 48 0c 00    	call   *0xc4819(%rip)        # 103cc8 <memcpy@GLIBC_2.14>
   3f4af:	0f 10 83 f0 03 00 00 	movups 0x3f0(%rbx),%xmm0
   3f4b6:	0f 29 44 24 70       	movaps %xmm0,0x70(%rsp)
   3f4bb:	44 0f b6 b3 60 05 00 	movzbl 0x560(%rbx),%r14d
   3f4c2:	00 
   3f4c3:	0f 10 83 00 04 00 00 	movups 0x400(%rbx),%xmm0
   3f4ca:	0f 29 84 24 d0 00 00 	movaps %xmm0,0xd0(%rsp)
   3f4d1:	00 
   3f4d2:	0f 10 83 10 04 00 00 	movups 0x410(%rbx),%xmm0
   3f4d9:	0f 29 84 24 20 01 00 	movaps %xmm0,0x120(%rsp)
   3f4e0:	00 
   3f4e1:	0f 10 83 20 04 00 00 	movups 0x420(%rbx),%xmm0
   3f4e8:	0f 29 84 24 d0 02 00 	movaps %xmm0,0x2d0(%rsp)
   3f4ef:	00 
   3f4f0:	44 0f b6 bb 61 05 00 	movzbl 0x561(%rbx),%r15d
   3f4f7:	00 
   3f4f8:	0f 10 83 30 04 00 00 	movups 0x430(%rbx),%xmm0
   3f4ff:	0f 29 84 24 80 01 00 	movaps %xmm0,0x180(%rsp)
   3f506:	00 
   3f507:	0f 10 83 40 04 00 00 	movups 0x440(%rbx),%xmm0
   3f50e:	0f 29 84 24 40 01 00 	movaps %xmm0,0x140(%rsp)
   3f515:	00 
   3f516:	0f 10 83 50 04 00 00 	movups 0x450(%rbx),%xmm0
   3f51d:	0f 29 84 24 00 04 00 	movaps %xmm0,0x400(%rsp)
   3f524:	00 
   3f525:	0f 10 83 60 04 00 00 	movups 0x460(%rbx),%xmm0
   3f52c:	0f 29 84 24 20 03 00 	movaps %xmm0,0x320(%rsp)
   3f533:	00 
   3f534:	0f 10 83 70 04 00 00 	movups 0x470(%rbx),%xmm0
   3f53b:	0f 29 84 24 e0 04 00 	movaps %xmm0,0x4e0(%rsp)
   3f542:	00 
   3f543:	4c 8b 23             	mov    (%rbx),%r12
   3f546:	f2 0f 10 43 08       	movsd  0x8(%rbx),%xmm0
   3f54b:	f2 0f 11 84 24 60 04 	movsd  %xmm0,0x460(%rsp)
   3f552:	00 00 
   3f554:	48 8b 43 10          	mov    0x10(%rbx),%rax
   3f558:	48 89 84 24 50 04 00 	mov    %rax,0x450(%rsp)
   3f55f:	00 
   3f560:	f2 0f 10 43 18       	movsd  0x18(%rbx),%xmm0
   3f565:	f2 0f 11 84 24 40 04 	movsd  %xmm0,0x440(%rsp)
   3f56c:	00 00 
   3f56e:	48 8b 43 20          	mov    0x20(%rbx),%rax
   3f572:	48 89 84 24 30 04 00 	mov    %rax,0x430(%rsp)
   3f579:	00 
   3f57a:	f2 0f 10 43 28       	movsd  0x28(%rbx),%xmm0
   3f57f:	f2 0f 11 84 24 f0 03 	movsd  %xmm0,0x3f0(%rsp)
   3f586:	00 00 
   3f588:	48 8b 43 30          	mov    0x30(%rbx),%rax
   3f58c:	48 89 84 24 70 03 00 	mov    %rax,0x370(%rsp)
   3f593:	00 
   3f594:	f2 0f 10 43 38       	movsd  0x38(%rbx),%xmm0
   3f599:	f2 0f 11 84 24 68 03 	movsd  %xmm0,0x368(%rsp)
   3f5a0:	00 00 
   3f5a2:	0f 10 83 80 04 00 00 	movups 0x480(%rbx),%xmm0
   3f5a9:	0f 29 84 24 f0 04 00 	movaps %xmm0,0x4f0(%rsp)
   3f5b0:	00 
   3f5b1:	0f 10 83 90 04 00 00 	movups 0x490(%rbx),%xmm0
   3f5b8:	0f 29 84 24 00 0f 00 	movaps %xmm0,0xf00(%rsp)
   3f5bf:	00 
   3f5c0:	0f b6 83 62 05 00 00 	movzbl 0x562(%rbx),%eax
   3f5c7:	88 84 24 9f 00 00 00 	mov    %al,0x9f(%rsp)
   3f5ce:	0f 10 83 a0 04 00 00 	movups 0x4a0(%rbx),%xmm0
   3f5d5:	0f 29 84 24 f0 0e 00 	movaps %xmm0,0xef0(%rsp)
   3f5dc:	00 
   3f5dd:	48 8d b3 58 03 00 00 	lea    0x358(%rbx),%rsi
   3f5e4:	f2 0f 10 83 b0 04 00 	movsd  0x4b0(%rbx),%xmm0
   3f5eb:	00 
   3f5ec:	f2 0f 11 84 24 a8 07 	movsd  %xmm0,0x7a8(%rsp)
   3f5f3:	00 00 
   3f5f5:	48 8d 15 3c ea 0b 00 	lea    0xbea3c(%rip),%rdx        # fe038 <anon.8868ba55c3fc5525a110cabbb60004d5.152.llvm.6579149275953927878+0x298>
   3f5fc:	48 8d bc 24 50 01 00 	lea    0x150(%rsp),%rdi
   3f603:	00 
   3f604:	ff 15 ae 47 0c 00    	call   *0xc47ae(%rip)        # 103db8 <_DYNAMIC+0x358>
   3f60a:	0f 10 83 b8 04 00 00 	movups 0x4b8(%rbx),%xmm0
   3f611:	0f 29 84 24 e0 0e 00 	movaps %xmm0,0xee0(%rsp)
   3f618:	00 
   3f619:	f2 0f 10 83 c8 04 00 	movsd  0x4c8(%rbx),%xmm0
   3f620:	00 
   3f621:	f2 0f 11 84 24 a0 07 	movsd  %xmm0,0x7a0(%rsp)
   3f628:	00 00 
   3f62a:	48 8b 83 d0 04 00 00 	mov    0x4d0(%rbx),%rax
   3f631:	48 89 84 24 98 07 00 	mov    %rax,0x798(%rsp)
   3f638:	00 
   3f639:	0f b6 83 63 05 00 00 	movzbl 0x563(%rbx),%eax
   3f640:	88 84 24 9e 00 00 00 	mov    %al,0x9e(%rsp)
   3f647:	0f b6 83 64 05 00 00 	movzbl 0x564(%rbx),%eax
   3f64e:	88 84 24 9d 00 00 00 	mov    %al,0x9d(%rsp)
   3f655:	48 8d b3 70 03 00 00 	lea    0x370(%rbx),%rsi
   3f65c:	48 8d 15 d5 e9 0b 00 	lea    0xbe9d5(%rip),%rdx        # fe038 <anon.8868ba55c3fc5525a110cabbb60004d5.152.llvm.6579149275953927878+0x298>
   3f663:	48 8d bc 24 e0 00 00 	lea    0xe0(%rsp),%rdi
   3f66a:	00 
   3f66b:	ff 15 47 47 0c 00    	call   *0xc4747(%rip)        # 103db8 <_DYNAMIC+0x358>
   3f671:	48 8d b3 88 03 00 00 	lea    0x388(%rbx),%rsi
   3f678:	48 8d 15 b9 e9 0b 00 	lea    0xbe9b9(%rip),%rdx        # fe038 <anon.8868ba55c3fc5525a110cabbb60004d5.152.llvm.6579149275953927878+0x298>
   3f67f:	48 8d bc 24 80 03 00 	lea    0x380(%rsp),%rdi
   3f686:	00 
   3f687:	ff 15 2b 47 0c 00    	call   *0xc472b(%rip)        # 103db8 <_DYNAMIC+0x358>
   3f68d:	0f 10 83 d8 04 00 00 	movups 0x4d8(%rbx),%xmm0
   3f694:	0f 29 84 24 d0 0e 00 	movaps %xmm0,0xed0(%rsp)
   3f69b:	00 
   3f69c:	0f 10 83 e8 04 00 00 	movups 0x4e8(%rbx),%xmm0
   3f6a3:	0f 29 84 24 c0 0e 00 	movaps %xmm0,0xec0(%rsp)
   3f6aa:	00 
   3f6ab:	f2 0f 10 83 f8 04 00 	movsd  0x4f8(%rbx),%xmm0
   3f6b2:	00 
   3f6b3:	f2 0f 11 84 24 90 07 	movsd  %xmm0,0x790(%rsp)
   3f6ba:	00 00 
   3f6bc:	48 8b 43 40          	mov    0x40(%rbx),%rax
   3f6c0:	48 89 84 24 88 07 00 	mov    %rax,0x788(%rsp)
   3f6c7:	00 
   3f6c8:	f2 0f 10 43 48       	movsd  0x48(%rbx),%xmm0
   3f6cd:	f2 0f 11 84 24 80 07 	movsd  %xmm0,0x780(%rsp)
   3f6d4:	00 00 
   3f6d6:	48 8b 43 50          	mov    0x50(%rbx),%rax
   3f6da:	48 89 84 24 78 07 00 	mov    %rax,0x778(%rsp)
   3f6e1:	00 
   3f6e2:	f2 0f 10 43 58       	movsd  0x58(%rbx),%xmm0
   3f6e7:	f2 0f 11 84 24 70 07 	movsd  %xmm0,0x770(%rsp)
   3f6ee:	00 00 
   3f6f0:	48 8b 43 60          	mov    0x60(%rbx),%rax
   3f6f4:	48 89 84 24 68 07 00 	mov    %rax,0x768(%rsp)
   3f6fb:	00 
   3f6fc:	f2 0f 10 43 68       	movsd  0x68(%rbx),%xmm0
   3f701:	f2 0f 11 84 24 60 07 	movsd  %xmm0,0x760(%rsp)
   3f708:	00 00 
   3f70a:	48 8b 43 70          	mov    0x70(%rbx),%rax
   3f70e:	48 89 84 24 58 07 00 	mov    %rax,0x758(%rsp)
   3f715:	00 
   3f716:	f2 0f 10 43 78       	movsd  0x78(%rbx),%xmm0
   3f71b:	f2 0f 11 84 24 50 07 	movsd  %xmm0,0x750(%rsp)
   3f722:	00 00 
   3f724:	48 8b 83 80 00 00 00 	mov    0x80(%rbx),%rax
   3f72b:	48 89 84 24 48 07 00 	mov    %rax,0x748(%rsp)
   3f732:	00 
   3f733:	f2 0f 10 83 88 00 00 	movsd  0x88(%rbx),%xmm0
   3f73a:	00 
   3f73b:	f2 0f 11 84 24 40 07 	movsd  %xmm0,0x740(%rsp)
   3f742:	00 00 
   3f744:	48 8b 83 90 00 00 00 	mov    0x90(%rbx),%rax
   3f74b:	48 89 84 24 38 07 00 	mov    %rax,0x738(%rsp)
   3f752:	00 
   3f753:	f2 0f 10 83 98 00 00 	movsd  0x98(%rbx),%xmm0
   3f75a:	00 
   3f75b:	f2 0f 11 84 24 30 07 	movsd  %xmm0,0x730(%rsp)
   3f762:	00 00 
   3f764:	48 8b 83 a0 00 00 00 	mov    0xa0(%rbx),%rax
   3f76b:	48 89 84 24 28 07 00 	mov    %rax,0x728(%rsp)
   3f772:	00 
   3f773:	f2 0f 10 83 a8 00 00 	movsd  0xa8(%rbx),%xmm0
   3f77a:	00 
   3f77b:	f2 0f 11 84 24 20 07 	movsd  %xmm0,0x720(%rsp)
   3f782:	00 00 
   3f784:	48 8b 83 b0 00 00 00 	mov    0xb0(%rbx),%rax
   3f78b:	48 89 84 24 18 07 00 	mov    %rax,0x718(%rsp)
   3f792:	00 
   3f793:	f2 0f 10 83 b8 00 00 	movsd  0xb8(%rbx),%xmm0
   3f79a:	00 
   3f79b:	f2 0f 11 84 24 10 07 	movsd  %xmm0,0x710(%rsp)
   3f7a2:	00 00 
   3f7a4:	0f b6 83 28 01 00 00 	movzbl 0x128(%rbx),%eax
   3f7ab:	88 84 24 9c 00 00 00 	mov    %al,0x9c(%rsp)
   3f7b2:	48 8b 83 c0 00 00 00 	mov    0xc0(%rbx),%rax
   3f7b9:	48 89 84 24 08 07 00 	mov    %rax,0x708(%rsp)
   3f7c0:	00 
   3f7c1:	f2 0f 10 83 c8 00 00 	movsd  0xc8(%rbx),%xmm0
   3f7c8:	00 
   3f7c9:	f2 0f 11 84 24 00 07 	movsd  %xmm0,0x700(%rsp)
   3f7d0:	00 00 
   3f7d2:	48 8b 83 d0 00 00 00 	mov    0xd0(%rbx),%rax
   3f7d9:	48 89 84 24 f8 06 00 	mov    %rax,0x6f8(%rsp)
   3f7e0:	00 
   3f7e1:	f2 0f 10 83 d8 00 00 	movsd  0xd8(%rbx),%xmm0
   3f7e8:	00 
   3f7e9:	f2 0f 11 84 24 f0 06 	movsd  %xmm0,0x6f0(%rsp)
   3f7f0:	00 00 
   3f7f2:	48 8b 83 e0 00 00 00 	mov    0xe0(%rbx),%rax
   3f7f9:	48 89 84 24 e8 06 00 	mov    %rax,0x6e8(%rsp)
   3f800:	00 
   3f801:	f2 0f 10 83 e8 00 00 	movsd  0xe8(%rbx),%xmm0
   3f808:	00 
   3f809:	f2 0f 11 84 24 e0 06 	movsd  %xmm0,0x6e0(%rsp)
   3f810:	00 00 
   3f812:	48 8b 83 f0 00 00 00 	mov    0xf0(%rbx),%rax
   3f819:	48 89 84 24 d8 06 00 	mov    %rax,0x6d8(%rsp)
   3f820:	00 
   3f821:	f2 0f 10 83 f8 00 00 	movsd  0xf8(%rbx),%xmm0
   3f828:	00 
   3f829:	f2 0f 11 84 24 d0 06 	movsd  %xmm0,0x6d0(%rsp)
   3f830:	00 00 
   3f832:	48 8b 83 00 01 00 00 	mov    0x100(%rbx),%rax
   3f839:	48 89 84 24 c8 06 00 	mov    %rax,0x6c8(%rsp)
   3f840:	00 
   3f841:	f2 0f 10 83 08 01 00 	movsd  0x108(%rbx),%xmm0
   3f848:	00 
   3f849:	f2 0f 11 84 24 c0 06 	movsd  %xmm0,0x6c0(%rsp)
   3f850:	00 00 
   3f852:	48 39 ab 10 01 00 00 	cmp    %rbp,0x110(%rbx)
   3f859:	75 0a                	jne    3f865 <<strategy_comm5::StrategyComm5 as future_backtest_sdk::plugin::StrategyPlugin>::on_signal+0x555>
   3f85b:	48 89 ac 24 90 00 00 	mov    %rbp,0x90(%rsp)
   3f862:	00 
   3f863:	eb 4c                	jmp    3f8b1 <<strategy_comm5::StrategyComm5 as future_backtest_sdk::plugin::StrategyPlugin>::on_signal+0x5a1>
   3f865:	48 8d b3 10 01 00 00 	lea    0x110(%rbx),%rsi
   3f86c:	48 8d 15 cd e8 0b 00 	lea    0xbe8cd(%rip),%rdx        # fe140 <anon.8868ba55c3fc5525a110cabbb60004d5.196.llvm.6579149275953927878+0xf0>
   3f873:	48 8d bc 24 90 01 00 	lea    0x190(%rsp),%rdi
   3f87a:	00 
   3f87b:	ff 15 37 45 0c 00    	call   *0xc4537(%rip)        # 103db8 <_DYNAMIC+0x358>
   3f881:	48 8b 84 24 90 01 00 	mov    0x190(%rsp),%rax
   3f888:	00 
   3f889:	48 89 84 24 90 00 00 	mov    %rax,0x90(%rsp)
   3f890:	00 
   3f891:	48 8b 84 24 98 01 00 	mov    0x198(%rsp),%rax
   3f898:	00 
   3f899:	48 89 84 24 80 04 00 	mov    %rax,0x480(%rsp)
   3f8a0:	00 
   3f8a1:	48 8b 84 24 a0 01 00 	mov    0x1a0(%rsp),%rax
   3f8a8:	00 
   3f8a9:	48 89 84 24 18 05 00 	mov    %rax,0x518(%rsp)
   3f8b0:	00 
   3f8b1:	48 8b 83 30 01 00 00 	mov    0x130(%rbx),%rax
   3f8b8:	48 89 84 24 b8 06 00 	mov    %rax,0x6b8(%rsp)
   3f8bf:	00 
   3f8c0:	f2 0f 10 83 38 01 00 	movsd  0x138(%rbx),%xmm0
   3f8c7:	00 
   3f8c8:	f2 0f 11 84 24 b0 06 	movsd  %xmm0,0x6b0(%rsp)
   3f8cf:	00 00 
   3f8d1:	48 8b 83 40 01 00 00 	mov    0x140(%rbx),%rax
   3f8d8:	48 89 84 24 a8 06 00 	mov    %rax,0x6a8(%rsp)
   3f8df:	00 
   3f8e0:	f2 0f 10 83 48 01 00 	movsd  0x148(%rbx),%xmm0
   3f8e7:	00 
   3f8e8:	f2 0f 11 84 24 a0 06 	movsd  %xmm0,0x6a0(%rsp)
   3f8ef:	00 00 
   3f8f1:	48 8b 83 50 01 00 00 	mov    0x150(%rbx),%rax
   3f8f8:	48 89 84 24 98 06 00 	mov    %rax,0x698(%rsp)
   3f8ff:	00 
   3f900:	f2 0f 10 83 58 01 00 	movsd  0x158(%rbx),%xmm0
   3f907:	00 
   3f908:	f2 0f 11 84 24 90 06 	movsd  %xmm0,0x690(%rsp)
   3f90f:	00 00 
   3f911:	48 8b 83 60 01 00 00 	mov    0x160(%rbx),%rax
   3f918:	48 89 84 24 88 06 00 	mov    %rax,0x688(%rsp)
   3f91f:	00 
   3f920:	f2 0f 10 83 68 01 00 	movsd  0x168(%rbx),%xmm0
   3f927:	00 
   3f928:	f2 0f 11 84 24 80 06 	movsd  %xmm0,0x680(%rsp)
   3f92f:	00 00 
   3f931:	48 8b 83 70 01 00 00 	mov    0x170(%rbx),%rax
   3f938:	48 89 84 24 78 06 00 	mov    %rax,0x678(%rsp)
   3f93f:	00 
   3f940:	f2 0f 10 83 78 01 00 	movsd  0x178(%rbx),%xmm0
   3f947:	00 
   3f948:	f2 0f 11 84 24 70 06 	movsd  %xmm0,0x670(%rsp)
   3f94f:	00 00 
   3f951:	48 8b 83 80 01 00 00 	mov    0x180(%rbx),%rax
   3f958:	48 89 84 24 68 06 00 	mov    %rax,0x668(%rsp)
   3f95f:	00 
   3f960:	f2 0f 10 83 88 01 00 	movsd  0x188(%rbx),%xmm0
   3f967:	00 
   3f968:	f2 0f 11 84 24 60 06 	movsd  %xmm0,0x660(%rsp)
   3f96f:	00 00 
   3f971:	48 8b 83 90 01 00 00 	mov    0x190(%rbx),%rax
   3f978:	48 89 84 24 58 06 00 	mov    %rax,0x658(%rsp)
   3f97f:	00 
   3f980:	f2 0f 10 83 98 01 00 	movsd  0x198(%rbx),%xmm0
   3f987:	00 
   3f988:	f2 0f 11 84 24 50 06 	movsd  %xmm0,0x650(%rsp)
   3f98f:	00 00 
   3f991:	48 8b 83 a0 01 00 00 	mov    0x1a0(%rbx),%rax
   3f998:	48 89 84 24 48 06 00 	mov    %rax,0x648(%rsp)
   3f99f:	00 
   3f9a0:	f2 0f 10 83 a8 01 00 	movsd  0x1a8(%rbx),%xmm0
   3f9a7:	00 
   3f9a8:	f2 0f 11 84 24 40 06 	movsd  %xmm0,0x640(%rsp)
   3f9af:	00 00 
   3f9b1:	0f b6 83 18 02 00 00 	movzbl 0x218(%rbx),%eax
   3f9b8:	88 84 24 9b 00 00 00 	mov    %al,0x9b(%rsp)
   3f9bf:	48 8b 83 b0 01 00 00 	mov    0x1b0(%rbx),%rax
   3f9c6:	48 89 84 24 38 06 00 	mov    %rax,0x638(%rsp)
   3f9cd:	00 
   3f9ce:	f2 0f 10 83 b8 01 00 	movsd  0x1b8(%rbx),%xmm0
   3f9d5:	00 
   3f9d6:	f2 0f 11 84 24 30 06 	movsd  %xmm0,0x630(%rsp)
   3f9dd:	00 00 
   3f9df:	48 8b 83 c0 01 00 00 	mov    0x1c0(%rbx),%rax
   3f9e6:	48 89 84 24 28 06 00 	mov    %rax,0x628(%rsp)
   3f9ed:	00 
   3f9ee:	f2 0f 10 83 c8 01 00 	movsd  0x1c8(%rbx),%xmm0
   3f9f5:	00 
   3f9f6:	f2 0f 11 84 24 20 06 	movsd  %xmm0,0x620(%rsp)
   3f9fd:	00 00 
   3f9ff:	48 8b 83 d0 01 00 00 	mov    0x1d0(%rbx),%rax
   3fa06:	48 89 84 24 18 06 00 	mov    %rax,0x618(%rsp)
   3fa0d:	00 
   3fa0e:	f2 0f 10 83 d8 01 00 	movsd  0x1d8(%rbx),%xmm0
   3fa15:	00 
   3fa16:	f2 0f 11 84 24 10 06 	movsd  %xmm0,0x610(%rsp)
   3fa1d:	00 00 
   3fa1f:	48 8b 83 e0 01 00 00 	mov    0x1e0(%rbx),%rax
   3fa26:	48 89 84 24 08 06 00 	mov    %rax,0x608(%rsp)
   3fa2d:	00 
   3fa2e:	f2 0f 10 83 e8 01 00 	movsd  0x1e8(%rbx),%xmm0
   3fa35:	00 
   3fa36:	f2 0f 11 84 24 00 06 	movsd  %xmm0,0x600(%rsp)
   3fa3d:	00 00 
   3fa3f:	48 8b 83 f0 01 00 00 	mov    0x1f0(%rbx),%rax
   3fa46:	48 89 84 24 f8 05 00 	mov    %rax,0x5f8(%rsp)
   3fa4d:	00 
   3fa4e:	f2 0f 10 83 f8 01 00 	movsd  0x1f8(%rbx),%xmm0
   3fa55:	00 
   3fa56:	f2 0f 11 84 24 f0 05 	movsd  %xmm0,0x5f0(%rsp)
   3fa5d:	00 00 
   3fa5f:	48 39 ab 00 02 00 00 	cmp    %rbp,0x200(%rbx)
   3fa66:	75 0a                	jne    3fa72 <<strategy_comm5::StrategyComm5 as future_backtest_sdk::plugin::StrategyPlugin>::on_signal+0x762>
   3fa68:	48 89 ac 24 38 03 00 	mov    %rbp,0x338(%rsp)
   3fa6f:	00 
   3fa70:	eb 4c                	jmp    3fabe <<strategy_comm5::StrategyComm5 as future_backtest_sdk::plugin::StrategyPlugin>::on_signal+0x7ae>
   3fa72:	48 8d b3 00 02 00 00 	lea    0x200(%rbx),%rsi
   3fa79:	48 8d 15 c0 e6 0b 00 	lea    0xbe6c0(%rip),%rdx        # fe140 <anon.8868ba55c3fc5525a110cabbb60004d5.196.llvm.6579149275953927878+0xf0>
   3fa80:	48 8d bc 24 90 01 00 	lea    0x190(%rsp),%rdi
   3fa87:	00 
   3fa88:	ff 15 2a 43 0c 00    	call   *0xc432a(%rip)        # 103db8 <_DYNAMIC+0x358>
   3fa8e:	48 8b 84 24 90 01 00 	mov    0x190(%rsp),%rax
   3fa95:	00 
   3fa96:	48 89 84 24 38 03 00 	mov    %rax,0x338(%rsp)
   3fa9d:	00 
   3fa9e:	48 8b 84 24 98 01 00 	mov    0x198(%rsp),%rax
   3faa5:	00 
   3faa6:	48 89 84 24 78 04 00 	mov    %rax,0x478(%rsp)
   3faad:	00 
   3faae:	48 8b 84 24 a0 01 00 	mov    0x1a0(%rsp),%rax
   3fab5:	00 
   3fab6:	48 89 84 24 10 05 00 	mov    %rax,0x510(%rsp)
   3fabd:	00 
   3fabe:	48 8b 83 20 02 00 00 	mov    0x220(%rbx),%rax
   3fac5:	48 89 84 24 e8 05 00 	mov    %rax,0x5e8(%rsp)
   3facc:	00 
   3facd:	f2 0f 10 83 28 02 00 	movsd  0x228(%rbx),%xmm0
   3fad4:	00 
   3fad5:	f2 0f 11 84 24 e0 05 	movsd  %xmm0,0x5e0(%rsp)
   3fadc:	00 00 
   3fade:	48 8b 83 30 02 00 00 	mov    0x230(%rbx),%rax
   3fae5:	48 89 84 24 d8 05 00 	mov    %rax,0x5d8(%rsp)
   3faec:	00 
   3faed:	f2 0f 10 83 38 02 00 	movsd  0x238(%rbx),%xmm0
   3faf4:	00 
   3faf5:	f2 0f 11 84 24 d0 05 	movsd  %xmm0,0x5d0(%rsp)
   3fafc:	00 00 
   3fafe:	48 8b 83 40 02 00 00 	mov    0x240(%rbx),%rax
   3fb05:	48 89 84 24 c8 05 00 	mov    %rax,0x5c8(%rsp)
   3fb0c:	00 
   3fb0d:	f2 0f 10 83 48 02 00 	movsd  0x248(%rbx),%xmm0
   3fb14:	00 
   3fb15:	f2 0f 11 84 24 c0 05 	movsd  %xmm0,0x5c0(%rsp)
   3fb1c:	00 00 
   3fb1e:	48 8b 83 50 02 00 00 	mov    0x250(%rbx),%rax
   3fb25:	48 89 84 24 b8 05 00 	mov    %rax,0x5b8(%rsp)
   3fb2c:	00 
   3fb2d:	f2 0f 10 83 58 02 00 	movsd  0x258(%rbx),%xmm0
   3fb34:	00 
   3fb35:	f2 0f 11 84 24 b0 05 	movsd  %xmm0,0x5b0(%rsp)
   3fb3c:	00 00 
   3fb3e:	48 8b 83 60 02 00 00 	mov    0x260(%rbx),%rax
   3fb45:	48 89 84 24 a8 05 00 	mov    %rax,0x5a8(%rsp)
   3fb4c:	00 
   3fb4d:	f2 0f 10 83 68 02 00 	movsd  0x268(%rbx),%xmm0
   3fb54:	00 
   3fb55:	f2 0f 11 84 24 a0 05 	movsd  %xmm0,0x5a0(%rsp)
   3fb5c:	00 00 
   3fb5e:	48 8b 83 70 02 00 00 	mov    0x270(%rbx),%rax
   3fb65:	48 89 84 24 98 05 00 	mov    %rax,0x598(%rsp)
   3fb6c:	00 
   3fb6d:	f2 0f 10 83 78 02 00 	movsd  0x278(%rbx),%xmm0
   3fb74:	00 
   3fb75:	f2 0f 11 84 24 90 05 	movsd  %xmm0,0x590(%rsp)
   3fb7c:	00 00 
   3fb7e:	48 8b 83 80 02 00 00 	mov    0x280(%rbx),%rax
   3fb85:	48 89 84 24 88 05 00 	mov    %rax,0x588(%rsp)
   3fb8c:	00 
   3fb8d:	f2 0f 10 83 88 02 00 	movsd  0x288(%rbx),%xmm0
   3fb94:	00 
   3fb95:	f2 0f 11 84 24 80 05 	movsd  %xmm0,0x580(%rsp)
   3fb9c:	00 00 
   3fb9e:	48 8b 83 90 02 00 00 	mov    0x290(%rbx),%rax
   3fba5:	48 89 84 24 78 05 00 	mov    %rax,0x578(%rsp)
   3fbac:	00 
   3fbad:	f2 0f 10 83 98 02 00 	movsd  0x298(%rbx),%xmm0
   3fbb4:	00 
   3fbb5:	f2 0f 11 84 24 70 05 	movsd  %xmm0,0x570(%rsp)
   3fbbc:	00 00 
   3fbbe:	0f b6 83 08 03 00 00 	movzbl 0x308(%rbx),%eax
   3fbc5:	88 84 24 9a 00 00 00 	mov    %al,0x9a(%rsp)
   3fbcc:	48 8b 83 a0 02 00 00 	mov    0x2a0(%rbx),%rax
   3fbd3:	48 89 84 24 68 05 00 	mov    %rax,0x568(%rsp)
   3fbda:	00 
   3fbdb:	f2 0f 10 83 a8 02 00 	movsd  0x2a8(%rbx),%xmm0
   3fbe2:	00 
   3fbe3:	f2 0f 11 84 24 60 05 	movsd  %xmm0,0x560(%rsp)
   3fbea:	00 00 
   3fbec:	48 8b 83 b0 02 00 00 	mov    0x2b0(%rbx),%rax
   3fbf3:	48 89 84 24 58 05 00 	mov    %rax,0x558(%rsp)
   3fbfa:	00 
   3fbfb:	f2 0f 10 83 b8 02 00 	movsd  0x2b8(%rbx),%xmm0
   3fc02:	00 
   3fc03:	f2 0f 11 84 24 50 05 	movsd  %xmm0,0x550(%rsp)
   3fc0a:	00 00 
   3fc0c:	48 8b 83 c0 02 00 00 	mov    0x2c0(%rbx),%rax
   3fc13:	48 89 84 24 48 05 00 	mov    %rax,0x548(%rsp)
   3fc1a:	00 
   3fc1b:	f2 0f 10 83 c8 02 00 	movsd  0x2c8(%rbx),%xmm0
   3fc22:	00 
   3fc23:	f2 0f 11 84 24 40 05 	movsd  %xmm0,0x540(%rsp)
   3fc2a:	00 00 
   3fc2c:	48 8b 83 d0 02 00 00 	mov    0x2d0(%rbx),%rax
   3fc33:	48 89 84 24 38 05 00 	mov    %rax,0x538(%rsp)
   3fc3a:	00 
   3fc3b:	f2 0f 10 83 d8 02 00 	movsd  0x2d8(%rbx),%xmm0
   3fc42:	00 
   3fc43:	f2 0f 11 84 24 30 05 	movsd  %xmm0,0x530(%rsp)
   3fc4a:	00 00 
   3fc4c:	48 8b 83 e0 02 00 00 	mov    0x2e0(%rbx),%rax
   3fc53:	48 89 84 24 28 05 00 	mov    %rax,0x528(%rsp)
   3fc5a:	00 
   3fc5b:	f2 0f 10 83 e8 02 00 	movsd  0x2e8(%rbx),%xmm0
   3fc62:	00 
   3fc63:	f2 0f 11 84 24 20 05 	movsd  %xmm0,0x520(%rsp)
   3fc6a:	00 00 
   3fc6c:	48 39 ab f0 02 00 00 	cmp    %rbp,0x2f0(%rbx)
   3fc73:	75 0a                	jne    3fc7f <<strategy_comm5::StrategyComm5 as future_backtest_sdk::plugin::StrategyPlugin>::on_signal+0x96f>
   3fc75:	48 89 ac 24 30 03 00 	mov    %rbp,0x330(%rsp)
   3fc7c:	00 
   3fc7d:	eb 4c                	jmp    3fccb <<strategy_comm5::StrategyComm5 as future_backtest_sdk::plugin::StrategyPlugin>::on_signal+0x9bb>
   3fc7f:	48 8d b3 f0 02 00 00 	lea    0x2f0(%rbx),%rsi
   3fc86:	48 8d 15 b3 e4 0b 00 	lea    0xbe4b3(%rip),%rdx        # fe140 <anon.8868ba55c3fc5525a110cabbb60004d5.196.llvm.6579149275953927878+0xf0>
   3fc8d:	48 8d bc 24 90 01 00 	lea    0x190(%rsp),%rdi
   3fc94:	00 
   3fc95:	ff 15 1d 41 0c 00    	call   *0xc411d(%rip)        # 103db8 <_DYNAMIC+0x358>
   3fc9b:	48 8b 84 24 90 01 00 	mov    0x190(%rsp),%rax
   3fca2:	00 
   3fca3:	48 89 84 24 30 03 00 	mov    %rax,0x330(%rsp)
   3fcaa:	00 
   3fcab:	48 8b 84 24 98 01 00 	mov    0x198(%rsp),%rax
   3fcb2:	00 
   3fcb3:	48 89 84 24 70 04 00 	mov    %rax,0x470(%rsp)
   3fcba:	00 
   3fcbb:	48 8b 84 24 a0 01 00 	mov    0x1a0(%rsp),%rax
   3fcc2:	00 
   3fcc3:	48 89 84 24 08 05 00 	mov    %rax,0x508(%rsp)
   3fcca:	00 
   3fccb:	0f b6 ab 65 05 00 00 	movzbl 0x565(%rbx),%ebp
   3fcd2:	48 8d b3 a0 03 00 00 	lea    0x3a0(%rbx),%rsi
   3fcd9:	48 8d 15 58 e3 0b 00 	lea    0xbe358(%rip),%rdx        # fe038 <anon.8868ba55c3fc5525a110cabbb60004d5.152.llvm.6579149275953927878+0x298>
   3fce0:	48 8d bc 24 b0 07 00 	lea    0x7b0(%rsp),%rdi
   3fce7:	00 
   3fce8:	ff 15 ca 40 0c 00    	call   *0xc40ca(%rip)        # 103db8 <_DYNAMIC+0x358>
   3fcee:	48 8d b3 b8 03 00 00 	lea    0x3b8(%rbx),%rsi
   3fcf5:	48 8d 15 3c e3 0b 00 	lea    0xbe33c(%rip),%rdx        # fe038 <anon.8868ba55c3fc5525a110cabbb60004d5.152.llvm.6579149275953927878+0x298>
   3fcfc:	48 8d bc 24 90 01 00 	lea    0x190(%rsp),%rdi
   3fd03:	00 
   3fd04:	ff 15 ae 40 0c 00    	call   *0xc40ae(%rip)        # 103db8 <_DYNAMIC+0x358>
   3fd0a:	0f 10 84 24 b8 02 00 	movups 0x2b8(%rsp),%xmm0
   3fd11:	00 
   3fd12:	0f 11 84 24 c8 0b 00 	movups %xmm0,0xbc8(%rsp)
   3fd19:	00 
   3fd1a:	48 8b 84 24 c8 02 00 	mov    0x2c8(%rsp),%rax
   3fd21:	00 
   3fd22:	48 89 84 24 d8 0b 00 	mov    %rax,0xbd8(%rsp)
   3fd29:	00 
   3fd2a:	0f 28 44 24 20       	movaps 0x20(%rsp),%xmm0
   3fd2f:	0f 11 84 24 88 0c 00 	movups %xmm0,0xc88(%rsp)
   3fd36:	00 
   3fd37:	0f 10 84 24 40 03 00 	movups 0x340(%rsp),%xmm0
   3fd3e:	00 
   3fd3f:	0f 11 84 24 e0 0b 00 	movups %xmm0,0xbe0(%rsp)
   3fd46:	00 
   3fd47:	48 8b 84 24 50 03 00 	mov    0x350(%rsp),%rax
   3fd4e:	00 
   3fd4f:	48 89 84 24 f0 0b 00 	mov    %rax,0xbf0(%rsp)
   3fd56:	00 
   3fd57:	0f 28 84 24 b0 00 00 	movaps 0xb0(%rsp),%xmm0
   3fd5e:	00 
   3fd5f:	0f 11 84 24 98 0c 00 	movups %xmm0,0xc98(%rsp)
   3fd66:	00 
   3fd67:	48 8b 84 24 80 00 00 	mov    0x80(%rsp),%rax
   3fd6e:	00 
   3fd6f:	48 89 84 24 f8 0b 00 	mov    %rax,0xbf8(%rsp)
   3fd76:	00 
   3fd77:	48 8b 84 24 a0 00 00 	mov    0xa0(%rsp),%rax
   3fd7e:	00 
   3fd7f:	48 89 84 24 00 0c 00 	mov    %rax,0xc00(%rsp)
   3fd86:	00 
   3fd87:	4c 89 ac 24 08 0c 00 	mov    %r13,0xc08(%rsp)
   3fd8e:	00 
   3fd8f:	0f 28 44 24 70       	movaps 0x70(%rsp),%xmm0
   3fd94:	0f 11 84 24 a8 0c 00 	movups %xmm0,0xca8(%rsp)
   3fd9b:	00 
   3fd9c:	44 88 b4 24 18 0e 00 	mov    %r14b,0xe18(%rsp)
   3fda3:	00 
   3fda4:	0f 28 84 24 d0 00 00 	movaps 0xd0(%rsp),%xmm0
   3fdab:	00 
   3fdac:	0f 11 84 24 b8 0c 00 	movups %xmm0,0xcb8(%rsp)
   3fdb3:	00 
   3fdb4:	0f 28 84 24 20 01 00 	movaps 0x120(%rsp),%xmm0
   3fdbb:	00 
   3fdbc:	0f 11 84 24 c8 0c 00 	movups %xmm0,0xcc8(%rsp)
   3fdc3:	00 
   3fdc4:	0f 28 84 24 d0 02 00 	movaps 0x2d0(%rsp),%xmm0
   3fdcb:	00 
   3fdcc:	0f 11 84 24 d8 0c 00 	movups %xmm0,0xcd8(%rsp)
   3fdd3:	00 
   3fdd4:	44 88 bc 24 19 0e 00 	mov    %r15b,0xe19(%rsp)
   3fddb:	00 
   3fddc:	0f 28 84 24 80 01 00 	movaps 0x180(%rsp),%xmm0
   3fde3:	00 
   3fde4:	0f 11 84 24 e8 0c 00 	movups %xmm0,0xce8(%rsp)
   3fdeb:	00 
   3fdec:	0f 28 84 24 40 01 00 	movaps 0x140(%rsp),%xmm0
   3fdf3:	00 
   3fdf4:	0f 11 84 24 f8 0c 00 	movups %xmm0,0xcf8(%rsp)
   3fdfb:	00 
   3fdfc:	0f 28 84 24 00 04 00 	movaps 0x400(%rsp),%xmm0
   3fe03:	00 
   3fe04:	0f 11 84 24 08 0d 00 	movups %xmm0,0xd08(%rsp)
   3fe0b:	00 
   3fe0c:	0f 28 84 24 20 03 00 	movaps 0x320(%rsp),%xmm0
   3fe13:	00 
   3fe14:	0f 11 84 24 18 0d 00 	movups %xmm0,0xd18(%rsp)
   3fe1b:	00 
   3fe1c:	0f 28 84 24 e0 04 00 	movaps 0x4e0(%rsp),%xmm0
   3fe23:	00 
   3fe24:	0f 11 84 24 28 0d 00 	movups %xmm0,0xd28(%rsp)
   3fe2b:	00 
   3fe2c:	4c 89 a4 24 b8 08 00 	mov    %r12,0x8b8(%rsp)
   3fe33:	00 
   3fe34:	f2 0f 10 84 24 60 04 	movsd  0x460(%rsp),%xmm0
   3fe3b:	00 00 
   3fe3d:	f2 0f 11 84 24 c0 08 	movsd  %xmm0,0x8c0(%rsp)
   3fe44:	00 00 
   3fe46:	48 8b 84 24 50 04 00 	mov    0x450(%rsp),%rax
   3fe4d:	00 
   3fe4e:	48 89 84 24 c8 08 00 	mov    %rax,0x8c8(%rsp)
   3fe55:	00 
   3fe56:	f2 0f 10 84 24 40 04 	movsd  0x440(%rsp),%xmm0
   3fe5d:	00 00 
   3fe5f:	f2 0f 11 84 24 d0 08 	movsd  %xmm0,0x8d0(%rsp)
   3fe66:	00 00 
   3fe68:	48 8b 84 24 30 04 00 	mov    0x430(%rsp),%rax
   3fe6f:	00 
   3fe70:	48 89 84 24 d8 08 00 	mov    %rax,0x8d8(%rsp)
   3fe77:	00 
   3fe78:	f2 0f 10 84 24 f0 03 	movsd  0x3f0(%rsp),%xmm0
   3fe7f:	00 00 
   3fe81:	f2 0f 11 84 24 e0 08 	movsd  %xmm0,0x8e0(%rsp)
   3fe88:	00 00 
   3fe8a:	48 8b 84 24 70 03 00 	mov    0x370(%rsp),%rax
   3fe91:	00 
   3fe92:	48 89 84 24 e8 08 00 	mov    %rax,0x8e8(%rsp)
   3fe99:	00 
   3fe9a:	f2 0f 10 84 24 68 03 	movsd  0x368(%rsp),%xmm0
   3fea1:	00 00 
   3fea3:	f2 0f 11 84 24 f0 08 	movsd  %xmm0,0x8f0(%rsp)
   3feaa:	00 00 
   3feac:	0f 28 84 24 f0 04 00 	movaps 0x4f0(%rsp),%xmm0
   3feb3:	00 
   3feb4:	0f 11 84 24 38 0d 00 	movups %xmm0,0xd38(%rsp)
   3febb:	00 
   3febc:	0f 28 84 24 00 0f 00 	movaps 0xf00(%rsp),%xmm0
   3fec3:	00 
   3fec4:	0f 11 84 24 48 0d 00 	movups %xmm0,0xd48(%rsp)
   3fecb:	00 
   3fecc:	0f b6 84 24 9f 00 00 	movzbl 0x9f(%rsp),%eax
   3fed3:	00 
   3fed4:	88 84 24 1a 0e 00 00 	mov    %al,0xe1a(%rsp)
   3fedb:	0f 28 84 24 f0 0e 00 	movaps 0xef0(%rsp),%xmm0
   3fee2:	00 
   3fee3:	0f 11 84 24 58 0d 00 	movups %xmm0,0xd58(%rsp)
   3feea:	00 
   3feeb:	f2 0f 10 84 24 a8 07 	movsd  0x7a8(%rsp),%xmm0
   3fef2:	00 00 
   3fef4:	f2 0f 11 84 24 68 0d 	movsd  %xmm0,0xd68(%rsp)
   3fefb:	00 00 
   3fefd:	0f 10 84 24 50 01 00 	movups 0x150(%rsp),%xmm0
   3ff04:	00 
   3ff05:	0f 11 84 24 10 0c 00 	movups %xmm0,0xc10(%rsp)
   3ff0c:	00 
   3ff0d:	48 8b 84 24 60 01 00 	mov    0x160(%rsp),%rax
   3ff14:	00 
   3ff15:	48 89 84 24 20 0c 00 	mov    %rax,0xc20(%rsp)
   3ff1c:	00 
   3ff1d:	0f 28 84 24 e0 0e 00 	movaps 0xee0(%rsp),%xmm0
   3ff24:	00 
   3ff25:	0f 11 84 24 70 0d 00 	movups %xmm0,0xd70(%rsp)
   3ff2c:	00 
   3ff2d:	f2 0f 10 84 24 a0 07 	movsd  0x7a0(%rsp),%xmm0
   3ff34:	00 00 
   3ff36:	f2 0f 11 84 24 80 0d 	movsd  %xmm0,0xd80(%rsp)
   3ff3d:	00 00 
   3ff3f:	48 8b 84 24 98 07 00 	mov    0x798(%rsp),%rax
   3ff46:	00 
   3ff47:	48 89 84 24 88 0d 00 	mov    %rax,0xd88(%rsp)
   3ff4e:	00 
   3ff4f:	0f b6 84 24 9e 00 00 	movzbl 0x9e(%rsp),%eax
   3ff56:	00 
   3ff57:	88 84 24 1b 0e 00 00 	mov    %al,0xe1b(%rsp)
   3ff5e:	0f b6 84 24 9d 00 00 	movzbl 0x9d(%rsp),%eax
   3ff65:	00 
   3ff66:	88 84 24 1c 0e 00 00 	mov    %al,0xe1c(%rsp)
   3ff6d:	0f 10 84 24 e0 00 00 	movups 0xe0(%rsp),%xmm0
   3ff74:	00 
   3ff75:	0f 11 84 24 28 0c 00 	movups %xmm0,0xc28(%rsp)
   3ff7c:	00 
   3ff7d:	48 8b 84 24 f0 00 00 	mov    0xf0(%rsp),%rax
   3ff84:	00 
   3ff85:	48 89 84 24 38 0c 00 	mov    %rax,0xc38(%rsp)
   3ff8c:	00 
   3ff8d:	0f 10 84 24 80 03 00 	movups 0x380(%rsp),%xmm0
   3ff94:	00 
   3ff95:	0f 11 84 24 40 0c 00 	movups %xmm0,0xc40(%rsp)
   3ff9c:	00 
   3ff9d:	48 8b 84 24 90 03 00 	mov    0x390(%rsp),%rax
   3ffa4:	00 
   3ffa5:	48 89 84 24 50 0c 00 	mov    %rax,0xc50(%rsp)
   3ffac:	00 
   3ffad:	0f 28 84 24 d0 0e 00 	movaps 0xed0(%rsp),%xmm0
   3ffb4:	00 
   3ffb5:	0f 11 84 24 90 0d 00 	movups %xmm0,0xd90(%rsp)
   3ffbc:	00 
   3ffbd:	0f 28 84 24 c0 0e 00 	movaps 0xec0(%rsp),%xmm0
   3ffc4:	00 
   3ffc5:	0f 11 84 24 a0 0d 00 	movups %xmm0,0xda0(%rsp)
   3ffcc:	00 
   3ffcd:	f2 0f 10 84 24 90 07 	movsd  0x790(%rsp),%xmm0
   3ffd4:	00 00 
   3ffd6:	f2 0f 11 84 24 b0 0d 	movsd  %xmm0,0xdb0(%rsp)
   3ffdd:	00 00 
   3ffdf:	48 8b 84 24 88 07 00 	mov    0x788(%rsp),%rax
   3ffe6:	00 
   3ffe7:	48 89 84 24 f8 08 00 	mov    %rax,0x8f8(%rsp)
   3ffee:	00 
   3ffef:	f2 0f 10 84 24 80 07 	movsd  0x780(%rsp),%xmm0
   3fff6:	00 00 
   3fff8:	f2 0f 11 84 24 00 09 	movsd  %xmm0,0x900(%rsp)
   3ffff:	00 00 
   40001:	48 8b 84 24 78 07 00 	mov    0x778(%rsp),%rax
   40008:	00 
   40009:	48 89 84 24 08 09 00 	mov    %rax,0x908(%rsp)
   40010:	00 
   40011:	f2 0f 10 84 24 70 07 	movsd  0x770(%rsp),%xmm0
   40018:	00 00 
   4001a:	f2 0f 11 84 24 10 09 	movsd  %xmm0,0x910(%rsp)
   40021:	00 00 
   40023:	48 8b 84 24 68 07 00 	mov    0x768(%rsp),%rax
   4002a:	00 
   4002b:	48 89 84 24 18 09 00 	mov    %rax,0x918(%rsp)
   40032:	00 
   40033:	f2 0f 10 84 24 60 07 	movsd  0x760(%rsp),%xmm0
   4003a:	00 00 
   4003c:	f2 0f 11 84 24 20 09 	movsd  %xmm0,0x920(%rsp)
   40043:	00 00 
   40045:	48 8b 84 24 58 07 00 	mov    0x758(%rsp),%rax
   4004c:	00 
   4004d:	48 89 84 24 28 09 00 	mov    %rax,0x928(%rsp)
   40054:	00 
   40055:	f2 0f 10 84 24 50 07 	movsd  0x750(%rsp),%xmm0
   4005c:	00 00 
   4005e:	f2 0f 11 84 24 30 09 	movsd  %xmm0,0x930(%rsp)
   40065:	00 00 
   40067:	48 8b 84 24 48 07 00 	mov    0x748(%rsp),%rax
   4006e:	00 
   4006f:	48 89 84 24 38 09 00 	mov    %rax,0x938(%rsp)
   40076:	00 
   40077:	f2 0f 10 84 24 40 07 	movsd  0x740(%rsp),%xmm0
   4007e:	00 00 
   40080:	f2 0f 11 84 24 40 09 	movsd  %xmm0,0x940(%rsp)
   40087:	00 00 
   40089:	48 8b 84 24 38 07 00 	mov    0x738(%rsp),%rax
   40090:	00 
   40091:	48 89 84 24 48 09 00 	mov    %rax,0x948(%rsp)
   40098:	00 
   40099:	f2 0f 10 84 24 30 07 	movsd  0x730(%rsp),%xmm0
   400a0:	00 00 
   400a2:	f2 0f 11 84 24 50 09 	movsd  %xmm0,0x950(%rsp)
   400a9:	00 00 
   400ab:	48 8b 84 24 28 07 00 	mov    0x728(%rsp),%rax
   400b2:	00 
   400b3:	48 89 84 24 58 09 00 	mov    %rax,0x958(%rsp)
   400ba:	00 
   400bb:	f2 0f 10 84 24 20 07 	movsd  0x720(%rsp),%xmm0
   400c2:	00 00 
   400c4:	f2 0f 11 84 24 60 09 	movsd  %xmm0,0x960(%rsp)
   400cb:	00 00 
   400cd:	48 8b 84 24 18 07 00 	mov    0x718(%rsp),%rax
   400d4:	00 
   400d5:	48 89 84 24 68 09 00 	mov    %rax,0x968(%rsp)
   400dc:	00 
   400dd:	f2 0f 10 84 24 10 07 	movsd  0x710(%rsp),%xmm0
   400e4:	00 00 
   400e6:	f2 0f 11 84 24 70 09 	movsd  %xmm0,0x970(%rsp)
   400ed:	00 00 
   400ef:	48 8b 84 24 08 07 00 	mov    0x708(%rsp),%rax
   400f6:	00 
   400f7:	48 89 84 24 78 09 00 	mov    %rax,0x978(%rsp)
   400fe:	00 
   400ff:	f2 0f 10 84 24 00 07 	movsd  0x700(%rsp),%xmm0
   40106:	00 00 
   40108:	f2 0f 11 84 24 80 09 	movsd  %xmm0,0x980(%rsp)
   4010f:	00 00 
   40111:	48 8b 84 24 f8 06 00 	mov    0x6f8(%rsp),%rax
   40118:	00 
   40119:	48 89 84 24 88 09 00 	mov    %rax,0x988(%rsp)
   40120:	00 
   40121:	f2 0f 10 84 24 f0 06 	movsd  0x6f0(%rsp),%xmm0
   40128:	00 00 
   4012a:	f2 0f 11 84 24 90 09 	movsd  %xmm0,0x990(%rsp)
   40131:	00 00 
   40133:	48 8b 84 24 e8 06 00 	mov    0x6e8(%rsp),%rax
   4013a:	00 
   4013b:	48 89 84 24 98 09 00 	mov    %rax,0x998(%rsp)
   40142:	00 
   40143:	f2 0f 10 84 24 e0 06 	movsd  0x6e0(%rsp),%xmm0
   4014a:	00 00 
   4014c:	f2 0f 11 84 24 a0 09 	movsd  %xmm0,0x9a0(%rsp)
   40153:	00 00 
   40155:	48 8b 84 24 d8 06 00 	mov    0x6d8(%rsp),%rax
   4015c:	00 
   4015d:	48 89 84 24 a8 09 00 	mov    %rax,0x9a8(%rsp)
   40164:	00 
   40165:	f2 0f 10 84 24 d0 06 	movsd  0x6d0(%rsp),%xmm0
   4016c:	00 00 
   4016e:	f2 0f 11 84 24 b0 09 	movsd  %xmm0,0x9b0(%rsp)
   40175:	00 00 
   40177:	48 8b 84 24 c8 06 00 	mov    0x6c8(%rsp),%rax
   4017e:	00 
   4017f:	48 89 84 24 b8 09 00 	mov    %rax,0x9b8(%rsp)
   40186:	00 
   40187:	f2 0f 10 84 24 c0 06 	movsd  0x6c0(%rsp),%xmm0
   4018e:	00 00 
   40190:	f2 0f 11 84 24 c0 09 	movsd  %xmm0,0x9c0(%rsp)
   40197:	00 00 
   40199:	48 8b 84 24 90 00 00 	mov    0x90(%rsp),%rax
   401a0:	00 
   401a1:	48 89 84 24 c8 09 00 	mov    %rax,0x9c8(%rsp)
   401a8:	00 
   401a9:	48 8b 84 24 80 04 00 	mov    0x480(%rsp),%rax
   401b0:	00 
   401b1:	48 89 84 24 d0 09 00 	mov    %rax,0x9d0(%rsp)
   401b8:	00 
   401b9:	48 8b 84 24 18 05 00 	mov    0x518(%rsp),%rax
   401c0:	00 
   401c1:	48 89 84 24 d8 09 00 	mov    %rax,0x9d8(%rsp)
   401c8:	00 
   401c9:	0f b6 84 24 9c 00 00 	movzbl 0x9c(%rsp),%eax
   401d0:	00 
   401d1:	88 84 24 e0 09 00 00 	mov    %al,0x9e0(%rsp)
   401d8:	8b 84 24 1b 04 00 00 	mov    0x41b(%rsp),%eax
   401df:	89 84 24 e4 09 00 00 	mov    %eax,0x9e4(%rsp)
   401e6:	8b 84 24 18 04 00 00 	mov    0x418(%rsp),%eax
   401ed:	89 84 24 e1 09 00 00 	mov    %eax,0x9e1(%rsp)
   401f4:	48 8b 84 24 b8 06 00 	mov    0x6b8(%rsp),%rax
   401fb:	00 
   401fc:	48 89 84 24 e8 09 00 	mov    %rax,0x9e8(%rsp)
   40203:	00 
   40204:	f2 0f 10 84 24 b0 06 	movsd  0x6b0(%rsp),%xmm0
   4020b:	00 00 
   4020d:	f2 0f 11 84 24 f0 09 	movsd  %xmm0,0x9f0(%rsp)
   40214:	00 00 
   40216:	48 8b 84 24 a8 06 00 	mov    0x6a8(%rsp),%rax
   4021d:	00 
   4021e:	48 89 84 24 f8 09 00 	mov    %rax,0x9f8(%rsp)
   40225:	00 
   40226:	f2 0f 10 84 24 a0 06 	movsd  0x6a0(%rsp),%xmm0
   4022d:	00 00 
   4022f:	f2 0f 11 84 24 00 0a 	movsd  %xmm0,0xa00(%rsp)
   40236:	00 00 
   40238:	48 8b 84 24 98 06 00 	mov    0x698(%rsp),%rax
   4023f:	00 
   40240:	48 89 84 24 08 0a 00 	mov    %rax,0xa08(%rsp)
   40247:	00 
   40248:	f2 0f 10 84 24 90 06 	movsd  0x690(%rsp),%xmm0
   4024f:	00 00 
   40251:	f2 0f 11 84 24 10 0a 	movsd  %xmm0,0xa10(%rsp)
   40258:	00 00 
   4025a:	48 8b 84 24 88 06 00 	mov    0x688(%rsp),%rax
   40261:	00 
   40262:	48 89 84 24 18 0a 00 	mov    %rax,0xa18(%rsp)
   40269:	00 
   4026a:	f2 0f 10 84 24 80 06 	movsd  0x680(%rsp),%xmm0
   40271:	00 00 
   40273:	f2 0f 11 84 24 20 0a 	movsd  %xmm0,0xa20(%rsp)
   4027a:	00 00 
   4027c:	48 8b 84 24 78 06 00 	mov    0x678(%rsp),%rax
   40283:	00 
   40284:	48 89 84 24 28 0a 00 	mov    %rax,0xa28(%rsp)
   4028b:	00 
   4028c:	f2 0f 10 84 24 70 06 	movsd  0x670(%rsp),%xmm0
   40293:	00 00 
   40295:	f2 0f 11 84 24 30 0a 	movsd  %xmm0,0xa30(%rsp)
   4029c:	00 00 
   4029e:	48 8b 84 24 68 06 00 	mov    0x668(%rsp),%rax
   402a5:	00 
   402a6:	48 89 84 24 38 0a 00 	mov    %rax,0xa38(%rsp)
   402ad:	00 
   402ae:	f2 0f 10 84 24 60 06 	movsd  0x660(%rsp),%xmm0
   402b5:	00 00 
   402b7:	f2 0f 11 84 24 40 0a 	movsd  %xmm0,0xa40(%rsp)
   402be:	00 00 
   402c0:	48 8b 84 24 58 06 00 	mov    0x658(%rsp),%rax
   402c7:	00 
   402c8:	48 89 84 24 48 0a 00 	mov    %rax,0xa48(%rsp)
   402cf:	00 
   402d0:	f2 0f 10 84 24 50 06 	movsd  0x650(%rsp),%xmm0
   402d7:	00 00 
   402d9:	f2 0f 11 84 24 50 0a 	movsd  %xmm0,0xa50(%rsp)
   402e0:	00 00 
   402e2:	48 8b 84 24 48 06 00 	mov    0x648(%rsp),%rax
   402e9:	00 
   402ea:	48 89 84 24 58 0a 00 	mov    %rax,0xa58(%rsp)
   402f1:	00 
   402f2:	f2 0f 10 84 24 40 06 	movsd  0x640(%rsp),%xmm0
   402f9:	00 00 
   402fb:	f2 0f 11 84 24 60 0a 	movsd  %xmm0,0xa60(%rsp)
   40302:	00 00 
   40304:	48 8b 84 24 38 06 00 	mov    0x638(%rsp),%rax
   4030b:	00 
   4030c:	48 89 84 24 68 0a 00 	mov    %rax,0xa68(%rsp)
   40313:	00 
   40314:	f2 0f 10 84 24 30 06 	movsd  0x630(%rsp),%xmm0
   4031b:	00 00 
   4031d:	f2 0f 11 84 24 70 0a 	movsd  %xmm0,0xa70(%rsp)
   40324:	00 00 
   40326:	48 8b 84 24 28 06 00 	mov    0x628(%rsp),%rax
   4032d:	00 
   4032e:	48 89 84 24 78 0a 00 	mov    %rax,0xa78(%rsp)
   40335:	00 
   40336:	f2 0f 10 84 24 20 06 	movsd  0x620(%rsp),%xmm0
   4033d:	00 00 
   4033f:	f2 0f 11 84 24 80 0a 	movsd  %xmm0,0xa80(%rsp)
   40346:	00 00 
   40348:	48 8b 84 24 18 06 00 	mov    0x618(%rsp),%rax
   4034f:	00 
   40350:	48 89 84 24 88 0a 00 	mov    %rax,0xa88(%rsp)
   40357:	00 
   40358:	f2 0f 10 84 24 10 06 	movsd  0x610(%rsp),%xmm0
   4035f:	00 00 
   40361:	f2 0f 11 84 24 90 0a 	movsd  %xmm0,0xa90(%rsp)
   40368:	00 00 
   4036a:	48 8b 84 24 08 06 00 	mov    0x608(%rsp),%rax
   40371:	00 
   40372:	48 89 84 24 98 0a 00 	mov    %rax,0xa98(%rsp)
   40379:	00 
   4037a:	f2 0f 10 84 24 00 06 	movsd  0x600(%rsp),%xmm0
   40381:	00 00 
   40383:	f2 0f 11 84 24 a0 0a 	movsd  %xmm0,0xaa0(%rsp)
   4038a:	00 00 
   4038c:	48 8b 84 24 f8 05 00 	mov    0x5f8(%rsp),%rax
   40393:	00 
   40394:	48 89 84 24 a8 0a 00 	mov    %rax,0xaa8(%rsp)
   4039b:	00 
   4039c:	f2 0f 10 84 24 f0 05 	movsd  0x5f0(%rsp),%xmm0
   403a3:	00 00 
   403a5:	f2 0f 11 84 24 b0 0a 	movsd  %xmm0,0xab0(%rsp)
   403ac:	00 00 
   403ae:	48 8b 84 24 38 03 00 	mov    0x338(%rsp),%rax
   403b5:	00 
   403b6:	48 89 84 24 b8 0a 00 	mov    %rax,0xab8(%rsp)
   403bd:	00 
   403be:	48 8b 84 24 78 04 00 	mov    0x478(%rsp),%rax
   403c5:	00 
   403c6:	48 89 84 24 c0 0a 00 	mov    %rax,0xac0(%rsp)
   403cd:	00 
   403ce:	48 8b 84 24 10 05 00 	mov    0x510(%rsp),%rax
   403d5:	00 
   403d6:	48 89 84 24 c8 0a 00 	mov    %rax,0xac8(%rsp)
   403dd:	00 
   403de:	0f b6 84 24 9b 00 00 	movzbl 0x9b(%rsp),%eax
   403e5:	00 
   403e6:	88 84 24 d0 0a 00 00 	mov    %al,0xad0(%rsp)
   403ed:	8b 84 24 03 03 00 00 	mov    0x303(%rsp),%eax
   403f4:	89 84 24 d4 0a 00 00 	mov    %eax,0xad4(%rsp)
   403fb:	8b 84 24 00 03 00 00 	mov    0x300(%rsp),%eax
   40402:	89 84 24 d1 0a 00 00 	mov    %eax,0xad1(%rsp)
   40409:	48 8b 84 24 e8 05 00 	mov    0x5e8(%rsp),%rax
   40410:	00 
   40411:	48 89 84 24 d8 0a 00 	mov    %rax,0xad8(%rsp)
   40418:	00 
   40419:	f2 0f 10 84 24 e0 05 	movsd  0x5e0(%rsp),%xmm0
   40420:	00 00 
   40422:	f2 0f 11 84 24 e0 0a 	movsd  %xmm0,0xae0(%rsp)
   40429:	00 00 
   4042b:	48 8b 84 24 d8 05 00 	mov    0x5d8(%rsp),%rax
   40432:	00 
   40433:	48 89 84 24 e8 0a 00 	mov    %rax,0xae8(%rsp)
   4043a:	00 
   4043b:	f2 0f 10 84 24 d0 05 	movsd  0x5d0(%rsp),%xmm0
   40442:	00 00 
   40444:	f2 0f 11 84 24 f0 0a 	movsd  %xmm0,0xaf0(%rsp)
   4044b:	00 00 
   4044d:	48 8b 84 24 c8 05 00 	mov    0x5c8(%rsp),%rax
   40454:	00 
   40455:	48 89 84 24 f8 0a 00 	mov    %rax,0xaf8(%rsp)
   4045c:	00 
   4045d:	f2 0f 10 84 24 c0 05 	movsd  0x5c0(%rsp),%xmm0
   40464:	00 00 
   40466:	f2 0f 11 84 24 00 0b 	movsd  %xmm0,0xb00(%rsp)
   4046d:	00 00 
   4046f:	48 8b 84 24 b8 05 00 	mov    0x5b8(%rsp),%rax
   40476:	00 
   40477:	48 89 84 24 08 0b 00 	mov    %rax,0xb08(%rsp)
   4047e:	00 
   4047f:	f2 0f 10 84 24 b0 05 	movsd  0x5b0(%rsp),%xmm0
   40486:	00 00 
   40488:	f2 0f 11 84 24 10 0b 	movsd  %xmm0,0xb10(%rsp)
   4048f:	00 00 
   40491:	48 8b 84 24 a8 05 00 	mov    0x5a8(%rsp),%rax
   40498:	00 
   40499:	48 89 84 24 18 0b 00 	mov    %rax,0xb18(%rsp)
   404a0:	00 
   404a1:	f2 0f 10 84 24 a0 05 	movsd  0x5a0(%rsp),%xmm0
   404a8:	00 00 
   404aa:	f2 0f 11 84 24 20 0b 	movsd  %xmm0,0xb20(%rsp)
   404b1:	00 00 
   404b3:	48 8b 84 24 98 05 00 	mov    0x598(%rsp),%rax
   404ba:	00 
   404bb:	48 89 84 24 28 0b 00 	mov    %rax,0xb28(%rsp)
   404c2:	00 
   404c3:	f2 0f 10 84 24 90 05 	movsd  0x590(%rsp),%xmm0
   404ca:	00 00 
   404cc:	f2 0f 11 84 24 30 0b 	movsd  %xmm0,0xb30(%rsp)
   404d3:	00 00 
   404d5:	48 8b 84 24 88 05 00 	mov    0x588(%rsp),%rax
   404dc:	00 
   404dd:	48 89 84 24 38 0b 00 	mov    %rax,0xb38(%rsp)
   404e4:	00 
   404e5:	f2 0f 10 84 24 80 05 	movsd  0x580(%rsp),%xmm0
   404ec:	00 00 
   404ee:	f2 0f 11 84 24 40 0b 	movsd  %xmm0,0xb40(%rsp)
   404f5:	00 00 
   404f7:	48 8b 84 24 78 05 00 	mov    0x578(%rsp),%rax
   404fe:	00 
   404ff:	48 89 84 24 48 0b 00 	mov    %rax,0xb48(%rsp)
   40506:	00 
   40507:	f2 0f 10 84 24 70 05 	movsd  0x570(%rsp),%xmm0
   4050e:	00 00 
   40510:	f2 0f 11 84 24 50 0b 	movsd  %xmm0,0xb50(%rsp)
   40517:	00 00 
   40519:	48 8b 84 24 68 05 00 	mov    0x568(%rsp),%rax
   40520:	00 
   40521:	48 89 84 24 58 0b 00 	mov    %rax,0xb58(%rsp)
   40528:	00 
   40529:	f2 0f 10 84 24 60 05 	movsd  0x560(%rsp),%xmm0
   40530:	00 00 
   40532:	f2 0f 11 84 24 60 0b 	movsd  %xmm0,0xb60(%rsp)
   40539:	00 00 
   4053b:	48 8b 84 24 58 05 00 	mov    0x558(%rsp),%rax
   40542:	00 
   40543:	48 89 84 24 68 0b 00 	mov    %rax,0xb68(%rsp)
   4054a:	00 
   4054b:	f2 0f 10 84 24 50 05 	movsd  0x550(%rsp),%xmm0
   40552:	00 00 
   40554:	f2 0f 11 84 24 70 0b 	movsd  %xmm0,0xb70(%rsp)
   4055b:	00 00 
   4055d:	48 8b 84 24 48 05 00 	mov    0x548(%rsp),%rax
   40564:	00 
   40565:	48 89 84 24 78 0b 00 	mov    %rax,0xb78(%rsp)
   4056c:	00 
   4056d:	f2 0f 10 84 24 40 05 	movsd  0x540(%rsp),%xmm0
   40574:	00 00 
   40576:	f2 0f 11 84 24 80 0b 	movsd  %xmm0,0xb80(%rsp)
   4057d:	00 00 
   4057f:	48 8b 84 24 38 05 00 	mov    0x538(%rsp),%rax
   40586:	00 
   40587:	48 89 84 24 88 0b 00 	mov    %rax,0xb88(%rsp)
   4058e:	00 
   4058f:	f2 0f 10 84 24 30 05 	movsd  0x530(%rsp),%xmm0
   40596:	00 00 
   40598:	f2 0f 11 84 24 90 0b 	movsd  %xmm0,0xb90(%rsp)
   4059f:	00 00 
   405a1:	48 8b 84 24 28 05 00 	mov    0x528(%rsp),%rax
   405a8:	00 
   405a9:	48 89 84 24 98 0b 00 	mov    %rax,0xb98(%rsp)
   405b0:	00 
   405b1:	f2 0f 10 84 24 20 05 	movsd  0x520(%rsp),%xmm0
   405b8:	00 00 
   405ba:	f2 0f 11 84 24 a0 0b 	movsd  %xmm0,0xba0(%rsp)
   405c1:	00 00 
   405c3:	48 8b 84 24 30 03 00 	mov    0x330(%rsp),%rax
   405ca:	00 
   405cb:	48 89 84 24 a8 0b 00 	mov    %rax,0xba8(%rsp)
   405d2:	00 
   405d3:	48 8b 84 24 70 04 00 	mov    0x470(%rsp),%rax
   405da:	00 
   405db:	48 89 84 24 b0 0b 00 	mov    %rax,0xbb0(%rsp)
   405e2:	00 
   405e3:	48 8b 84 24 08 05 00 	mov    0x508(%rsp),%rax
   405ea:	00 
   405eb:	48 89 84 24 b8 0b 00 	mov    %rax,0xbb8(%rsp)
   405f2:	00 
   405f3:	0f b6 84 24 9a 00 00 	movzbl 0x9a(%rsp),%eax
   405fa:	00 
   405fb:	88 84 24 c0 0b 00 00 	mov    %al,0xbc0(%rsp)
   40602:	8b 84 24 a3 02 00 00 	mov    0x2a3(%rsp),%eax
   40609:	89 84 24 c4 0b 00 00 	mov    %eax,0xbc4(%rsp)
   40610:	8b 84 24 a0 02 00 00 	mov    0x2a0(%rsp),%eax
   40617:	89 84 24 c1 0b 00 00 	mov    %eax,0xbc1(%rsp)
   4061e:	40 88 ac 24 1d 0e 00 	mov    %bpl,0xe1d(%rsp)
   40625:	00 
   40626:	48 8b 84 24 c0 07 00 	mov    0x7c0(%rsp),%rax
   4062d:	00 
   4062e:	48 89 84 24 68 0c 00 	mov    %rax,0xc68(%rsp)
   40635:	00 
   40636:	0f 10 84 24 b0 07 00 	movups 0x7b0(%rsp),%xmm0
   4063d:	00 
   4063e:	0f 11 84 24 58 0c 00 	movups %xmm0,0xc58(%rsp)
   40645:	00 
   40646:	0f 10 84 24 90 01 00 	movups 0x190(%rsp),%xmm0
   4064d:	00 
   4064e:	0f 11 84 24 70 0c 00 	movups %xmm0,0xc70(%rsp)
   40655:	00 
   40656:	48 8b 84 24 a0 01 00 	mov    0x1a0(%rsp),%rax
   4065d:	00 
   4065e:	48 89 84 24 80 0c 00 	mov    %rax,0xc80(%rsp)
   40665:	00 
   40666:	0f 10 83 00 05 00 00 	movups 0x500(%rbx),%xmm0
   4066d:	0f 11 84 24 b8 0d 00 	movups %xmm0,0xdb8(%rsp)
   40674:	00 
   40675:	0f 10 83 10 05 00 00 	movups 0x510(%rbx),%xmm0
   4067c:	0f 11 84 24 c8 0d 00 	movups %xmm0,0xdc8(%rsp)
   40683:	00 
   40684:	0f 10 83 20 05 00 00 	movups 0x520(%rbx),%xmm0
   4068b:	0f 11 84 24 d8 0d 00 	movups %xmm0,0xdd8(%rsp)
   40692:	00 
   40693:	0f 10 83 30 05 00 00 	movups 0x530(%rbx),%xmm0
   4069a:	0f 11 84 24 e8 0d 00 	movups %xmm0,0xde8(%rsp)
   406a1:	00 
   406a2:	0f 10 83 40 05 00 00 	movups 0x540(%rbx),%xmm0
   406a9:	0f 11 84 24 f8 0d 00 	movups %xmm0,0xdf8(%rsp)
   406b0:	00 
   406b1:	66 0f 10 83 50 05 00 	movupd 0x550(%rbx),%xmm0
   406b8:	00 
   406b9:	66 0f 11 84 24 08 0e 	movupd %xmm0,0xe08(%rsp)
   406c0:	00 00 
   406c2:	48 8b 84 24 b8 04 00 	mov    0x4b8(%rsp),%rax
   406c9:	00 
   406ca:	48 85 c0             	test   %rax,%rax
   406cd:	0f 84 dc 01 00 00    	je     408af <<strategy_comm5::StrategyComm5 as future_backtest_sdk::plugin::StrategyPlugin>::on_signal+0x159f>
   406d3:	48 89 9c 24 90 00 00 	mov    %rbx,0x90(%rsp)
   406da:	00 
   406db:	4c 8b a4 24 b0 04 00 	mov    0x4b0(%rsp),%r12
   406e2:	00 
   406e3:	4c 8b 74 24 40       	mov    0x40(%rsp),%r14
   406e8:	49 8d 4e 48          	lea    0x48(%r14),%rcx
   406ec:	48 89 8c 24 b0 00 00 	mov    %rcx,0xb0(%rsp)
   406f3:	00 
   406f4:	49 8b 4e 50          	mov    0x50(%r14),%rcx
   406f8:	48 89 4c 24 20       	mov    %rcx,0x20(%rsp)
   406fd:	4d 8b 7e 58          	mov    0x58(%r14),%r15
   40701:	48 c1 e0 03          	shl    $0x3,%rax
   40705:	48 8d 2c 40          	lea    (%rax,%rax,2),%rbp
   40709:	4c 8b 2d 18 36 0c 00 	mov    0xc3618(%rip),%r13        # 103d28 <bcmp@GLIBC_2.2.5>
   40710:	31 db                	xor    %ebx,%ebx
   40712:	eb 19                	jmp    4072d <<strategy_comm5::StrategyComm5 as future_backtest_sdk::plugin::StrategyPlugin>::on_signal+0x141d>
   40714:	66 66 66 2e 0f 1f 84 	data16 data16 cs nopw 0x0(%rax,%rax,1)
   4071b:	00 00 00 00 00 
   40720:	48 83 c3 18          	add    $0x18,%rbx
   40724:	48 39 dd             	cmp    %rbx,%rbp
   40727:	0f 84 82 01 00 00    	je     408af <<strategy_comm5::StrategyComm5 as future_backtest_sdk::plugin::StrategyPlugin>::on_signal+0x159f>
   4072d:	4d 39 7c 1c 10       	cmp    %r15,0x10(%r12,%rbx,1)
   40732:	75 ec                	jne    40720 <<strategy_comm5::StrategyComm5 as future_backtest_sdk::plugin::StrategyPlugin>::on_signal+0x1410>
   40734:	49 8b 7c 1c 08       	mov    0x8(%r12,%rbx,1),%rdi
   40739:	48 8b 74 24 20       	mov    0x20(%rsp),%rsi
   4073e:	4c 89 fa             	mov    %r15,%rdx
   40741:	41 ff d5             	call   *%r13
   40744:	85 c0                	test   %eax,%eax
   40746:	75 d8                	jne    40720 <<strategy_comm5::StrategyComm5 as future_backtest_sdk::plugin::StrategyPlugin>::on_signal+0x1410>
   40748:	48 8d bc 24 90 04 00 	lea    0x490(%rsp),%rdi
   4074f:	00 
   40750:	48 8b 74 24 18       	mov    0x18(%rsp),%rsi
   40755:	ff 15 2d 36 0c 00    	call   *0xc362d(%rip)        # 103d88 <_DYNAMIC+0x328>
   4075b:	48 8b 84 24 98 04 00 	mov    0x498(%rsp),%rax
   40762:	00 
   40763:	48 89 84 24 80 00 00 	mov    %rax,0x80(%rsp)
   4076a:	00 
   4076b:	4c 8b a4 24 a0 04 00 	mov    0x4a0(%rsp),%r12
   40772:	00 
   40773:	4d 85 e4             	test   %r12,%r12
   40776:	0f 84 03 02 00 00    	je     4097f <<strategy_comm5::StrategyComm5 as future_backtest_sdk::plugin::StrategyPlugin>::on_signal+0x166f>
   4077c:	49 8b 46 08          	mov    0x8(%r14),%rax
   40780:	48 89 84 24 a0 00 00 	mov    %rax,0xa0(%rsp)
   40787:	00 
   40788:	49 8b 6e 10          	mov    0x10(%r14),%rbp
   4078c:	4a 8d 04 e5 00 00 00 	lea    0x0(,%r12,8),%rax
   40793:	00 
   40794:	48 8d 1c 40          	lea    (%rax,%rax,2),%rbx
   40798:	45 31 f6             	xor    %r14d,%r14d
   4079b:	eb 10                	jmp    407ad <<strategy_comm5::StrategyComm5 as future_backtest_sdk::plugin::StrategyPlugin>::on_signal+0x149d>
   4079d:	0f 1f 00             	nopl   (%rax)
   407a0:	49 83 c6 18          	add    $0x18,%r14
   407a4:	4c 39 f3             	cmp    %r14,%rbx
   407a7:	0f 84 8a 01 00 00    	je     40937 <<strategy_comm5::StrategyComm5 as future_backtest_sdk::plugin::StrategyPlugin>::on_signal+0x1627>
   407ad:	48 8b 84 24 80 00 00 	mov    0x80(%rsp),%rax
   407b4:	00 
   407b5:	4a 39 6c 30 10       	cmp    %rbp,0x10(%rax,%r14,1)
   407ba:	75 e4                	jne    407a0 <<strategy_comm5::StrategyComm5 as future_backtest_sdk::plugin::StrategyPlugin>::on_signal+0x1490>
   407bc:	48 8b 84 24 80 00 00 	mov    0x80(%rsp),%rax
   407c3:	00 
   407c4:	4a 8b 7c 30 08       	mov    0x8(%rax,%r14,1),%rdi
   407c9:	48 8b b4 24 a0 00 00 	mov    0xa0(%rsp),%rsi
   407d0:	00 
   407d1:	48 89 ea             	mov    %rbp,%rdx
   407d4:	41 ff d5             	call   *%r13
   407d7:	85 c0                	test   %eax,%eax
   407d9:	75 c5                	jne    407a0 <<strategy_comm5::StrategyComm5 as future_backtest_sdk::plugin::StrategyPlugin>::on_signal+0x1490>
   407db:	4c 8b 74 24 40       	mov    0x40(%rsp),%r14
   407e0:	45 0f b6 ae 94 00 00 	movzbl 0x94(%r14),%r13d
   407e7:	00 
   407e8:	0f b6 84 24 d8 04 00 	movzbl 0x4d8(%rsp),%eax
   407ef:	00 
   407f0:	88 84 24 a0 00 00 00 	mov    %al,0xa0(%rsp)
   407f7:	48 8b 7c 24 18       	mov    0x18(%rsp),%rdi
   407fc:	ff 15 fe 35 0c 00    	call   *0xc35fe(%rip)        # 103e00 <_DYNAMIC+0x3a0>
   40802:	48 8b 9c 24 90 00 00 	mov    0x90(%rsp),%rbx
   40809:	00 
   4080a:	41 0f b6 ed          	movzbl %r13b,%ebp
   4080e:	48 8b 7c 24 18       	mov    0x18(%rsp),%rdi
   40813:	89 ee                	mov    %ebp,%esi
   40815:	ff 15 ed 35 0c 00    	call   *0xc35ed(%rip)        # 103e08 <_DYNAMIC+0x3a8>
   4081b:	84 c0                	test   %al,%al
   4081d:	0f 84 14 01 00 00    	je     40937 <<strategy_comm5::StrategyComm5 as future_backtest_sdk::plugin::StrategyPlugin>::on_signal+0x1627>
   40823:	48 8b 7c 24 18       	mov    0x18(%rsp),%rdi
   40828:	89 ee                	mov    %ebp,%esi
   4082a:	ff 15 e0 35 0c 00    	call   *0xc35e0(%rip)        # 103e10 <_DYNAMIC+0x3b0>
   40830:	84 c0                	test   %al,%al
   40832:	74 17                	je     4084b <<strategy_comm5::StrategyComm5 as future_backtest_sdk::plugin::StrategyPlugin>::on_signal+0x153b>
   40834:	45 84 ed             	test   %r13b,%r13b
   40837:	0f 84 08 02 00 00    	je     40a45 <<strategy_comm5::StrategyComm5 as future_backtest_sdk::plugin::StrategyPlugin>::on_signal+0x1735>
   4083d:	80 bc 24 db 04 00 00 	cmpb   $0x1,0x4db(%rsp)
   40844:	01 
   40845:	0f 84 08 02 00 00    	je     40a53 <<strategy_comm5::StrategyComm5 as future_backtest_sdk::plugin::StrategyPlugin>::on_signal+0x1743>
   4084b:	48 8d 15 7e d5 0b 00 	lea    0xbd57e(%rip),%rdx        # fddd0 <anon.8868ba55c3fc5525a110cabbb60004d5.152.llvm.6579149275953927878+0x30>
   40852:	48 8d 7c 24 58       	lea    0x58(%rsp),%rdi
   40857:	4c 89 f6             	mov    %r14,%rsi
   4085a:	ff 15 58 35 0c 00    	call   *0xc3558(%rip)        # 103db8 <_DYNAMIC+0x358>
   40860:	48 8d 15 81 d5 0b 00 	lea    0xbd581(%rip),%rdx        # fdde8 <anon.8868ba55c3fc5525a110cabbb60004d5.152.llvm.6579149275953927878+0x48>
   40867:	48 8d bc 24 18 04 00 	lea    0x418(%rsp),%rdi
   4086e:	00 
   4086f:	48 8b b4 24 b0 00 00 	mov    0xb0(%rsp),%rsi
   40876:	00 
   40877:	ff 15 3b 35 0c 00    	call   *0xc353b(%rip)        # 103db8 <_DYNAMIC+0x358>
   4087d:	48 8b 54 24 60       	mov    0x60(%rsp),%rdx
   40882:	48 8b 4c 24 68       	mov    0x68(%rsp),%rcx
   40887:	48 8d bc 24 90 01 00 	lea    0x190(%rsp),%rdi
   4088e:	00 
   4088f:	48 8b 74 24 18       	mov    0x18(%rsp),%rsi
   40894:	ff 15 7e 35 0c 00    	call   *0xc357e(%rip)        # 103e18 <_DYNAMIC+0x3b8>
   4089a:	83 bc 24 90 01 00 00 	cmpl   $0x2,0x190(%rsp)
   408a1:	02 
   408a2:	0f 85 0a 01 00 00    	jne    409b2 <<strategy_comm5::StrategyComm5 as future_backtest_sdk::plugin::StrategyPlugin>::on_signal+0x16a2>
   408a8:	31 ed                	xor    %ebp,%ebp
   408aa:	e9 ae 13 00 00       	jmp    41c5d <<strategy_comm5::StrategyComm5 as future_backtest_sdk::plugin::StrategyPlugin>::on_signal+0x294d>
   408af:	31 ed                	xor    %ebp,%ebp
   408b1:	48 8d bc 24 b8 08 00 	lea    0x8b8(%rsp),%rdi
   408b8:	00 
   408b9:	e8 42 9b ff ff       	call   3a400 <core::ptr::drop_in_place<strategy_comm5::Comm5Params>>
   408be:	48 8b 9c 24 b0 04 00 	mov    0x4b0(%rsp),%rbx
   408c5:	00 
   408c6:	4c 8b b4 24 b8 04 00 	mov    0x4b8(%rsp),%r14
   408cd:	00 
   408ce:	4d 85 f6             	test   %r14,%r14
   408d1:	74 2c                	je     408ff <<strategy_comm5::StrategyComm5 as future_backtest_sdk::plugin::StrategyPlugin>::on_signal+0x15ef>
   408d3:	4c 8d 7b 08          	lea    0x8(%rbx),%r15
   408d7:	4c 8b 25 9a 33 0c 00 	mov    0xc339a(%rip),%r12        # 103c78 <_DYNAMIC+0x218>
   408de:	eb 09                	jmp    408e9 <<strategy_comm5::StrategyComm5 as future_backtest_sdk::plugin::StrategyPlugin>::on_signal+0x15d9>
   408e0:	49 83 c7 18          	add    $0x18,%r15
   408e4:	49 ff ce             	dec    %r14
   408e7:	74 16                	je     408ff <<strategy_comm5::StrategyComm5 as future_backtest_sdk::plugin::StrategyPlugin>::on_signal+0x15ef>
   408e9:	49 8b 77 f8          	mov    -0x8(%r15),%rsi
   408ed:	48 85 f6             	test   %rsi,%rsi
   408f0:	74 ee                	je     408e0 <<strategy_comm5::StrategyComm5 as future_backtest_sdk::plugin::StrategyPlugin>::on_signal+0x15d0>
   408f2:	49 8b 3f             	mov    (%r15),%rdi
   408f5:	ba 01 00 00 00       	mov    $0x1,%edx
   408fa:	41 ff d4             	call   *%r12
   408fd:	eb e1                	jmp    408e0 <<strategy_comm5::StrategyComm5 as future_backtest_sdk::plugin::StrategyPlugin>::on_signal+0x15d0>
   408ff:	48 8b 84 24 a8 04 00 	mov    0x4a8(%rsp),%rax
   40906:	00 
   40907:	48 85 c0             	test   %rax,%rax
   4090a:	74 16                	je     40922 <<strategy_comm5::StrategyComm5 as future_backtest_sdk::plugin::StrategyPlugin>::on_signal+0x1612>
   4090c:	48 c1 e0 03          	shl    $0x3,%rax
   40910:	48 8d 34 40          	lea    (%rax,%rax,2),%rsi
   40914:	ba 08 00 00 00       	mov    $0x8,%edx
   40919:	48 89 df             	mov    %rbx,%rdi
   4091c:	ff 15 56 33 0c 00    	call   *0xc3356(%rip)        # 103c78 <_DYNAMIC+0x218>
   40922:	48 89 e8             	mov    %rbp,%rax
   40925:	48 81 c4 78 10 00 00 	add    $0x1078,%rsp
   4092c:	5b                   	pop    %rbx
   4092d:	41 5c                	pop    %r12
   4092f:	41 5d                	pop    %r13
   40931:	41 5e                	pop    %r14
   40933:	41 5f                	pop    %r15
   40935:	5d                   	pop    %rbp
   40936:	c3                   	ret    
   40937:	31 ed                	xor    %ebp,%ebp
   40939:	4d 85 e4             	test   %r12,%r12
   4093c:	74 43                	je     40981 <<strategy_comm5::StrategyComm5 as future_backtest_sdk::plugin::StrategyPlugin>::on_signal+0x1671>
   4093e:	48 8b 84 24 80 00 00 	mov    0x80(%rsp),%rax
   40945:	00 
   40946:	48 8d 58 08          	lea    0x8(%rax),%rbx
   4094a:	4c 8b 35 27 33 0c 00 	mov    0xc3327(%rip),%r14        # 103c78 <_DYNAMIC+0x218>
   40951:	eb 16                	jmp    40969 <<strategy_comm5::StrategyComm5 as future_backtest_sdk::plugin::StrategyPlugin>::on_signal+0x1659>
   40953:	66 66 66 66 2e 0f 1f 	data16 data16 data16 cs nopw 0x0(%rax,%rax,1)
   4095a:	84 00 00 00 00 00 
   40960:	48 83 c3 18          	add    $0x18,%rbx
   40964:	49 ff cc             	dec    %r12
   40967:	74 18                	je     40981 <<strategy_comm5::StrategyComm5 as future_backtest_sdk::plugin::StrategyPlugin>::on_signal+0x1671>
   40969:	48 8b 73 f8          	mov    -0x8(%rbx),%rsi
   4096d:	48 85 f6             	test   %rsi,%rsi
   40970:	74 ee                	je     40960 <<strategy_comm5::StrategyComm5 as future_backtest_sdk::plugin::StrategyPlugin>::on_signal+0x1650>
   40972:	48 8b 3b             	mov    (%rbx),%rdi
   40975:	ba 01 00 00 00       	mov    $0x1,%edx
   4097a:	41 ff d6             	call   *%r14
   4097d:	eb e1                	jmp    40960 <<strategy_comm5::StrategyComm5 as future_backtest_sdk::plugin::StrategyPlugin>::on_signal+0x1650>
   4097f:	31 ed                	xor    %ebp,%ebp
   40981:	48 8b 84 24 90 04 00 	mov    0x490(%rsp),%rax
   40988:	00 
   40989:	48 85 c0             	test   %rax,%rax
   4098c:	0f 84 1f ff ff ff    	je     408b1 <<strategy_comm5::StrategyComm5 as future_backtest_sdk::plugin::StrategyPlugin>::on_signal+0x15a1>
   40992:	48 c1 e0 03          	shl    $0x3,%rax
   40996:	48 8d 34 40          	lea    (%rax,%rax,2),%rsi
   4099a:	ba 08 00 00 00       	mov    $0x8,%edx
   4099f:	48 8b bc 24 80 00 00 	mov    0x80(%rsp),%rdi
   409a6:	00 
   409a7:	ff 15 cb 32 0c 00    	call   *0xc32cb(%rip)        # 103c78 <_DYNAMIC+0x218>
   409ad:	e9 ff fe ff ff       	jmp    408b1 <<strategy_comm5::StrategyComm5 as future_backtest_sdk::plugin::StrategyPlugin>::on_signal+0x15a1>
   409b2:	48 8d bc 24 b0 07 00 	lea    0x7b0(%rsp),%rdi
   409b9:	00 
   409ba:	4c 8d ac 24 90 01 00 	lea    0x190(%rsp),%r13
   409c1:	00 
   409c2:	ba 08 01 00 00       	mov    $0x108,%edx
   409c7:	4c 89 ee             	mov    %r13,%rsi
   409ca:	ff 15 f8 32 0c 00    	call   *0xc32f8(%rip)        # 103cc8 <memcpy@GLIBC_2.14>
   409d0:	f2 0f 10 8c 24 f8 07 	movsd  0x7f8(%rsp),%xmm1
   409d7:	00 00 
   409d9:	31 ed                	xor    %ebp,%ebp
   409db:	66 0f 57 c0          	xorpd  %xmm0,%xmm0
   409df:	f2 0f 11 8c 24 80 00 	movsd  %xmm1,0x80(%rsp)
   409e6:	00 00 
   409e8:	66 0f 2e c1          	ucomisd %xmm1,%xmm0
   409ec:	0f 83 4b 12 00 00    	jae    41c3d <<strategy_comm5::StrategyComm5 as future_backtest_sdk::plugin::StrategyPlugin>::on_signal+0x292d>
   409f2:	f2 0f 10 8c 24 48 08 	movsd  0x848(%rsp),%xmm1
   409f9:	00 00 
   409fb:	f2 0f 11 8c 24 b0 00 	movsd  %xmm1,0xb0(%rsp)
   40a02:	00 00 
   40a04:	66 0f 2e c1          	ucomisd %xmm1,%xmm0
   40a08:	0f 83 2f 12 00 00    	jae    41c3d <<strategy_comm5::StrategyComm5 as future_backtest_sdk::plugin::StrategyPlugin>::on_signal+0x292d>
   40a0e:	48 8b 7c 24 18       	mov    0x18(%rsp),%rdi
   40a13:	ff 15 07 34 0c 00    	call   *0xc3407(%rip)        # 103e20 <_DYNAMIC+0x3c0>
   40a19:	f2 0f 11 84 24 a0 00 	movsd  %xmm0,0xa0(%rsp)
   40a20:	00 00 
   40a22:	f2 0f 10 84 24 a0 00 	movsd  0xa0(%rsp),%xmm0
   40a29:	00 00 
   40a2b:	f2 0f 5c 84 24 f0 07 	subsd  0x7f0(%rsp),%xmm0
   40a32:	00 00 
   40a34:	66 0f 2e 05 2c 59 fd 	ucomisd -0x2a6d4(%rip),%xmm0        # 16368 <GCC_except_table128+0xe4>
   40a3b:	ff 
   40a3c:	76 32                	jbe    40a70 <<strategy_comm5::StrategyComm5 as future_backtest_sdk::plugin::StrategyPlugin>::on_signal+0x1760>
   40a3e:	31 ed                	xor    %ebp,%ebp
   40a40:	e9 f8 11 00 00       	jmp    41c3d <<strategy_comm5::StrategyComm5 as future_backtest_sdk::plugin::StrategyPlugin>::on_signal+0x292d>
   40a45:	80 bc 24 dc 04 00 00 	cmpb   $0x0,0x4dc(%rsp)
   40a4c:	00 
   40a4d:	0f 84 f8 fd ff ff    	je     4084b <<strategy_comm5::StrategyComm5 as future_backtest_sdk::plugin::StrategyPlugin>::on_signal+0x153b>
   40a53:	0f b6 94 24 a0 00 00 	movzbl 0xa0(%rsp),%edx
   40a5a:	00 
   40a5b:	48 8b 7c 24 18       	mov    0x18(%rsp),%rdi
   40a60:	89 ee                	mov    %ebp,%esi
   40a62:	ff 15 c0 33 0c 00    	call   *0xc33c0(%rip)        # 103e28 <_DYNAMIC+0x3c8>
   40a68:	48 89 c5             	mov    %rax,%rbp
   40a6b:	e9 c9 fe ff ff       	jmp    40939 <<strategy_comm5::StrategyComm5 as future_backtest_sdk::plugin::StrategyPlugin>::on_signal+0x1629>
   40a70:	48 8b 7c 24 20       	mov    0x20(%rsp),%rdi
   40a75:	4c 89 fe             	mov    %r15,%rsi
   40a78:	ff 15 b2 33 0c 00    	call   *0xc33b2(%rip)        # 103e30 <_DYNAMIC+0x3d0>
   40a7e:	31 c9                	xor    %ecx,%ecx
   40a80:	a8 01                	test   $0x1,%al
   40a82:	0f 45 ca             	cmovne %edx,%ecx
   40a85:	89 8c 24 7c 03 00 00 	mov    %ecx,0x37c(%rsp)
   40a8c:	80 bc 24 1a 0e 00 00 	cmpb   $0x1,0xe1a(%rsp)
   40a93:	01 
   40a94:	0f 85 3a 01 00 00    	jne    40bd4 <<strategy_comm5::StrategyComm5 as future_backtest_sdk::plugin::StrategyPlugin>::on_signal+0x18c4>
   40a9a:	48 8d 15 5f d3 0b 00 	lea    0xbd35f(%rip),%rdx        # fde00 <anon.8868ba55c3fc5525a110cabbb60004d5.152.llvm.6579149275953927878+0x60>
   40aa1:	48 8d bc 24 e0 00 00 	lea    0xe0(%rsp),%rdi
   40aa8:	00 
   40aa9:	48 8d 74 24 58       	lea    0x58(%rsp),%rsi
   40aae:	ff 15 04 33 0c 00    	call   *0xc3304(%rip)        # 103db8 <_DYNAMIC+0x358>
   40ab4:	48 8d b3 c8 05 00 00 	lea    0x5c8(%rbx),%rsi
   40abb:	48 8d bc 24 90 01 00 	lea    0x190(%rsp),%rdi
   40ac2:	00 
   40ac3:	48 8d 94 24 e0 00 00 	lea    0xe0(%rsp),%rdx
   40aca:	00 
   40acb:	e8 90 1c 03 00       	call   72760 <hashbrown::rustc_entry::<impl hashbrown::map::HashMap<K,V,S,A>>::rustc_entry>
   40ad0:	48 b8 00 00 00 00 00 	movabs $0x8000000000000000,%rax
   40ad7:	00 00 80 
   40ada:	48 39 84 24 90 01 00 	cmp    %rax,0x190(%rsp)
   40ae1:	00 
   40ae2:	75 35                	jne    40b19 <<strategy_comm5::StrategyComm5 as future_backtest_sdk::plugin::StrategyPlugin>::on_signal+0x1809>
   40ae4:	0f 10 84 24 98 01 00 	movups 0x198(%rsp),%xmm0
   40aeb:	00 
   40aec:	0f 11 84 24 88 03 00 	movups %xmm0,0x388(%rsp)
   40af3:	00 
   40af4:	48 89 84 24 80 03 00 	mov    %rax,0x380(%rsp)
   40afb:	00 
   40afc:	eb 4d                	jmp    40b4b <<strategy_comm5::StrategyComm5 as future_backtest_sdk::plugin::StrategyPlugin>::on_signal+0x183b>
   40afe:	48 8d 3d 0f 8c fd ff 	lea    -0x273f1(%rip),%rdi        # 19714 <anon.8868ba55c3fc5525a110cabbb60004d5.109.llvm.6579149275953927878+0x310>
   40b05:	48 8d 15 ac d2 0b 00 	lea    0xbd2ac(%rip),%rdx        # fddb8 <anon.8868ba55c3fc5525a110cabbb60004d5.152.llvm.6579149275953927878+0x18>
   40b0c:	be 1d 00 00 00       	mov    $0x1d,%esi
   40b11:	ff 15 21 33 0c 00    	call   *0xc3321(%rip)        # 103e38 <_DYNAMIC+0x3d8>
   40b17:	0f 0b                	ud2    
   40b19:	48 8b 84 24 b0 01 00 	mov    0x1b0(%rsp),%rax
   40b20:	00 
   40b21:	48 89 84 24 a0 03 00 	mov    %rax,0x3a0(%rsp)
   40b28:	00 
   40b29:	0f 10 84 24 90 01 00 	movups 0x190(%rsp),%xmm0
   40b30:	00 
   40b31:	66 0f 10 8c 24 a0 01 	movupd 0x1a0(%rsp),%xmm1
   40b38:	00 00 
   40b3a:	66 0f 29 8c 24 90 03 	movapd %xmm1,0x390(%rsp)
   40b41:	00 00 
   40b43:	0f 29 84 24 80 03 00 	movaps %xmm0,0x380(%rsp)
   40b4a:	00 
   40b4b:	f2 0f 10 84 24 58 0d 	movsd  0xd58(%rsp),%xmm0
   40b52:	00 00 
   40b54:	f2 0f 10 8c 24 60 0d 	movsd  0xd60(%rsp),%xmm1
   40b5b:	00 00 
   40b5d:	48 8d bc 24 80 03 00 	lea    0x380(%rsp),%rdi
   40b64:	00 
   40b65:	e8 96 94 ff ff       	call   3a000 <std::collections::hash::map::Entry<K,V>::or_insert_with>
   40b6a:	f2 0f 10 84 24 a0 00 	movsd  0xa0(%rsp),%xmm0
   40b71:	00 00 
   40b73:	f2 0f 59 05 f5 58 fd 	mulsd  -0x2a70b(%rip),%xmm0        # 16470 <GCC_except_table128+0x1ec>
   40b7a:	ff 
   40b7b:	48 89 c7             	mov    %rax,%rdi
   40b7e:	f2 0f 10 8c 24 b0 00 	movsd  0xb0(%rsp),%xmm1
   40b85:	00 00 
   40b87:	f2 0f 10 94 24 80 00 	movsd  0x80(%rsp),%xmm2
   40b8e:	00 00 
   40b90:	e8 db 0b 04 00       	call   81770 <strategy_comm5::vol_spread_ratio::VolSpreadRatio::update>
   40b95:	a8 01                	test   $0x1,%al
   40b97:	74 3b                	je     40bd4 <<strategy_comm5::StrategyComm5 as future_backtest_sdk::plugin::StrategyPlugin>::on_signal+0x18c4>
   40b99:	66 0f 2e 84 24 68 0d 	ucomisd 0xd68(%rsp),%xmm0
   40ba0:	00 00 
   40ba2:	77 30                	ja     40bd4 <<strategy_comm5::StrategyComm5 as future_backtest_sdk::plugin::StrategyPlugin>::on_signal+0x18c4>
   40ba4:	48 8b 3d 95 32 0c 00 	mov    0xc3295(%rip),%rdi        # 103e40 <_DYNAMIC+0x3e0>
   40bab:	48 8b 47 30          	mov    0x30(%rdi),%rax
   40baf:	40 b5 01             	mov    $0x1,%bpl
   40bb2:	48 83 f8 02          	cmp    $0x2,%rax
   40bb6:	74 33                	je     40beb <<strategy_comm5::StrategyComm5 as future_backtest_sdk::plugin::StrategyPlugin>::on_signal+0x18db>
   40bb8:	4c 8b 35 81 32 0c 00 	mov    0xc3281(%rip),%r14        # 103e40 <_DYNAMIC+0x3e0>
   40bbf:	4c 89 f7             	mov    %r14,%rdi
   40bc2:	4c 89 f6             	mov    %r14,%rsi
   40bc5:	e8 46 a9 03 00       	call   7b510 <once_cell::imp::OnceCell<T>::initialize>
   40bca:	4c 89 f7             	mov    %r14,%rdi
   40bcd:	4c 8b 74 24 40       	mov    0x40(%rsp),%r14
   40bd2:	eb 17                	jmp    40beb <<strategy_comm5::StrategyComm5 as future_backtest_sdk::plugin::StrategyPlugin>::on_signal+0x18db>
   40bd4:	48 8b 3d 6d 32 0c 00 	mov    0xc326d(%rip),%rdi        # 103e48 <_DYNAMIC+0x3e8>
   40bdb:	48 8b 47 30          	mov    0x30(%rdi),%rax
   40bdf:	48 83 f8 02          	cmp    $0x2,%rax
   40be3:	0f 85 81 38 00 00    	jne    4446a <<strategy_comm5::StrategyComm5 as future_backtest_sdk::plugin::StrategyPlugin>::on_signal+0x515a>
   40be9:	31 ed                	xor    %ebp,%ebp
   40beb:	48 8d b4 24 7c 03 00 	lea    0x37c(%rsp),%rsi
   40bf2:	00 
   40bf3:	e8 78 a0 ff ff       	call   3ac70 <hashbrown::map::HashMap<K,V,S,A>::get_inner>
   40bf8:	48 8d 48 08          	lea    0x8(%rax),%rcx
   40bfc:	48 85 c0             	test   %rax,%rax
   40bff:	48 8d 05 62 57 fd ff 	lea    -0x2a89e(%rip),%rax        # 16368 <GCC_except_table128+0xe4>
   40c06:	48 0f 45 c1          	cmovne %rcx,%rax
   40c0a:	f2 0f 10 00          	movsd  (%rax),%xmm0
   40c0e:	f2 0f 11 84 24 98 02 	movsd  %xmm0,0x298(%rsp)
   40c15:	00 00 
   40c17:	40 88 6c 24 17       	mov    %bpl,0x17(%rsp)
   40c1c:	0f b6 ac 24 1b 0e 00 	movzbl 0xe1b(%rsp),%ebp
   40c23:	00 
   40c24:	40 84 ed             	test   %bpl,%bpl
   40c27:	0f 84 c0 03 00 00    	je     40fed <<strategy_comm5::StrategyComm5 as future_backtest_sdk::plugin::StrategyPlugin>::on_signal+0x1cdd>
   40c2d:	48 8b 7c 24 60       	mov    0x60(%rsp),%rdi
   40c32:	48 8b 74 24 68       	mov    0x68(%rsp),%rsi
   40c37:	e8 f4 03 04 00       	call   81030 <core::str::<impl str>::trim_end_matches>
   40c3c:	48 8d bc 24 90 01 00 	lea    0x190(%rsp),%rdi
   40c43:	00 
   40c44:	48 89 c6             	mov    %rax,%rsi
   40c47:	e8 a4 9f ff ff       	call   3abf0 <<T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec>
   40c4c:	48 8b 84 24 a0 01 00 	mov    0x1a0(%rsp),%rax
   40c53:	00 
   40c54:	48 89 84 24 f0 00 00 	mov    %rax,0xf0(%rsp)
   40c5b:	00 
   40c5c:	66 0f 10 84 24 90 01 	movupd 0x190(%rsp),%xmm0
   40c63:	00 00 
   40c65:	66 0f 29 84 24 e0 00 	movapd %xmm0,0xe0(%rsp)
   40c6c:	00 00 
   40c6e:	48 8d bb f8 05 00 00 	lea    0x5f8(%rbx),%rdi
   40c75:	4c 8d bc 24 e0 00 00 	lea    0xe0(%rsp),%r15
   40c7c:	00 
   40c7d:	48 89 bc 24 d0 02 00 	mov    %rdi,0x2d0(%rsp)
   40c84:	00 
   40c85:	4c 89 fe             	mov    %r15,%rsi
   40c88:	e8 13 a2 ff ff       	call   3aea0 <hashbrown::map::HashMap<K,V,S,A>::get_inner>
   40c8d:	48 8d 9c 24 50 01 00 	lea    0x150(%rsp),%rbx
   40c94:	00 
   40c95:	48 8d 48 18          	lea    0x18(%rax),%rcx
   40c99:	48 85 c0             	test   %rax,%rax
   40c9c:	48 8d 05 fe 66 fd ff 	lea    -0x29902(%rip),%rax        # 173a1 <anon.2bc08f40ad58cb635718c2f09dbb11ab.66.llvm.4096812584824358744+0x1de>
   40ca3:	48 0f 45 c1          	cmovne %rcx,%rax
   40ca7:	0f b6 00             	movzbl (%rax),%eax
   40caa:	89 44 24 70          	mov    %eax,0x70(%rsp)
   40cae:	4c 8b b4 24 30 0c 00 	mov    0xc30(%rsp),%r14
   40cb5:	00 
   40cb6:	4c 8b a4 24 38 0c 00 	mov    0xc38(%rsp),%r12
   40cbd:	00 
   40cbe:	4c 8b ac 24 48 0c 00 	mov    0xc48(%rsp),%r13
   40cc5:	00 
   40cc6:	48 8b 84 24 50 0c 00 	mov    0xc50(%rsp),%rax
   40ccd:	00 
   40cce:	48 89 44 24 20       	mov    %rax,0x20(%rsp)
   40cd3:	4c 89 bc 24 50 01 00 	mov    %r15,0x150(%rsp)
   40cda:	00 
   40cdb:	48 8d 05 5e 9c ff ff 	lea    -0x63a2(%rip),%rax        # 3a940 <<alloc::string::String as core::fmt::Display>::fmt>
   40ce2:	48 89 84 24 58 01 00 	mov    %rax,0x158(%rsp)
   40ce9:	00 
   40cea:	48 8d 05 27 d1 0b 00 	lea    0xbd127(%rip),%rax        # fde18 <anon.8868ba55c3fc5525a110cabbb60004d5.152.llvm.6579149275953927878+0x78>
   40cf1:	48 89 84 24 90 01 00 	mov    %rax,0x190(%rsp)
   40cf8:	00 
   40cf9:	48 c7 84 24 98 01 00 	movq   $0x1,0x198(%rsp)
   40d00:	00 01 00 00 00 
   40d05:	48 c7 84 24 b0 01 00 	movq   $0x0,0x1b0(%rsp)
   40d0c:	00 00 00 00 00 
   40d11:	48 89 9c 24 a0 01 00 	mov    %rbx,0x1a0(%rsp)
   40d18:	00 
   40d19:	48 c7 84 24 a8 01 00 	movq   $0x1,0x1a8(%rsp)
   40d20:	00 01 00 00 00 
   40d25:	48 8d bc 24 80 03 00 	lea    0x380(%rsp),%rdi
   40d2c:	00 
   40d2d:	48 8d b4 24 90 01 00 	lea    0x190(%rsp),%rsi
   40d34:	00 
   40d35:	ff 15 dd 2f 0c 00    	call   *0xc2fdd(%rip)        # 103d18 <_DYNAMIC+0x2b8>
   40d3b:	4c 8b bc 24 80 03 00 	mov    0x380(%rsp),%r15
   40d42:	00 
   40d43:	48 8b ac 24 88 03 00 	mov    0x388(%rsp),%rbp
   40d4a:	00 
   40d4b:	48 8b 84 24 90 03 00 	mov    0x390(%rsp),%rax
   40d52:	00 
   40d53:	48 89 04 24          	mov    %rax,(%rsp)
   40d57:	48 8b 7c 24 18       	mov    0x18(%rsp),%rdi
   40d5c:	4c 89 f6             	mov    %r14,%rsi
   40d5f:	4c 89 e2             	mov    %r12,%rdx
   40d62:	4c 89 e9             	mov    %r13,%rcx
   40d65:	4c 8b 44 24 20       	mov    0x20(%rsp),%r8
   40d6a:	49 89 e9             	mov    %rbp,%r9
   40d6d:	ff 15 dd 30 0c 00    	call   *0xc30dd(%rip)        # 103e50 <_DYNAMIC+0x3f0>
   40d73:	48 89 44 24 20       	mov    %rax,0x20(%rsp)
   40d78:	f2 0f 11 84 24 20 01 	movsd  %xmm0,0x120(%rsp)
   40d7f:	00 00 
   40d81:	4d 85 ff             	test   %r15,%r15
   40d84:	74 11                	je     40d97 <<strategy_comm5::StrategyComm5 as future_backtest_sdk::plugin::StrategyPlugin>::on_signal+0x1a87>
   40d86:	ba 01 00 00 00       	mov    $0x1,%edx
   40d8b:	48 89 ef             	mov    %rbp,%rdi
   40d8e:	4c 89 fe             	mov    %r15,%rsi
   40d91:	ff 15 e1 2e 0c 00    	call   *0xc2ee1(%rip)        # 103c78 <_DYNAMIC+0x218>
   40d97:	4c 8b bc 24 30 0c 00 	mov    0xc30(%rsp),%r15
   40d9e:	00 
   40d9f:	4c 8b ac 24 38 0c 00 	mov    0xc38(%rsp),%r13
   40da6:	00 
   40da7:	4c 8b b4 24 48 0c 00 	mov    0xc48(%rsp),%r14
   40dae:	00 
   40daf:	48 8b 84 24 50 0c 00 	mov    0xc50(%rsp),%rax
   40db6:	00 
   40db7:	48 89 84 24 d0 00 00 	mov    %rax,0xd0(%rsp)
   40dbe:	00 
   40dbf:	48 8d 84 24 e0 00 00 	lea    0xe0(%rsp),%rax
   40dc6:	00 
   40dc7:	48 89 84 24 50 01 00 	mov    %rax,0x150(%rsp)
   40dce:	00 
   40dcf:	48 8d 05 6a 9b ff ff 	lea    -0x6496(%rip),%rax        # 3a940 <<alloc::string::String as core::fmt::Display>::fmt>
   40dd6:	48 89 84 24 58 01 00 	mov    %rax,0x158(%rsp)
   40ddd:	00 
   40dde:	48 8d 05 43 d0 0b 00 	lea    0xbd043(%rip),%rax        # fde28 <anon.8868ba55c3fc5525a110cabbb60004d5.152.llvm.6579149275953927878+0x88>
   40de5:	48 89 84 24 90 01 00 	mov    %rax,0x190(%rsp)
   40dec:	00 
   40ded:	48 c7 84 24 98 01 00 	movq   $0x1,0x198(%rsp)
   40df4:	00 01 00 00 00 
   40df9:	48 c7 84 24 b0 01 00 	movq   $0x0,0x1b0(%rsp)
   40e00:	00 00 00 00 00 
   40e05:	48 89 9c 24 a0 01 00 	mov    %rbx,0x1a0(%rsp)
   40e0c:	00 
   40e0d:	48 c7 84 24 a8 01 00 	movq   $0x1,0x1a8(%rsp)
   40e14:	00 01 00 00 00 
   40e19:	48 8d bc 24 80 03 00 	lea    0x380(%rsp),%rdi
   40e20:	00 
   40e21:	48 8d b4 24 90 01 00 	lea    0x190(%rsp),%rsi
   40e28:	00 
   40e29:	ff 15 e9 2e 0c 00    	call   *0xc2ee9(%rip)        # 103d18 <_DYNAMIC+0x2b8>
   40e2f:	48 8b ac 24 80 03 00 	mov    0x380(%rsp),%rbp
   40e36:	00 
   40e37:	4c 8b a4 24 88 03 00 	mov    0x388(%rsp),%r12
   40e3e:	00 
   40e3f:	48 8b 84 24 90 03 00 	mov    0x390(%rsp),%rax
   40e46:	00 
   40e47:	48 89 04 24          	mov    %rax,(%rsp)
   40e4b:	48 8b 7c 24 18       	mov    0x18(%rsp),%rdi
   40e50:	4c 89 fe             	mov    %r15,%rsi
   40e53:	4c 89 ea             	mov    %r13,%rdx
   40e56:	4c 89 f1             	mov    %r14,%rcx
   40e59:	4c 8b 84 24 d0 00 00 	mov    0xd0(%rsp),%r8
   40e60:	00 
   40e61:	4d 89 e1             	mov    %r12,%r9
   40e64:	ff 15 e6 2f 0c 00    	call   *0xc2fe6(%rip)        # 103e50 <_DYNAMIC+0x3f0>
   40e6a:	f2 0f 11 84 24 80 01 	movsd  %xmm0,0x180(%rsp)
   40e71:	00 00 
   40e73:	48 89 84 24 d0 00 00 	mov    %rax,0xd0(%rsp)
   40e7a:	00 
   40e7b:	48 85 ed             	test   %rbp,%rbp
   40e7e:	74 11                	je     40e91 <<strategy_comm5::StrategyComm5 as future_backtest_sdk::plugin::StrategyPlugin>::on_signal+0x1b81>
   40e80:	ba 01 00 00 00       	mov    $0x1,%edx
   40e85:	4c 89 e7             	mov    %r12,%rdi
   40e88:	48 89 ee             	mov    %rbp,%rsi
   40e8b:	ff 15 e7 2d 0c 00    	call   *0xc2de7(%rip)        # 103c78 <_DYNAMIC+0x218>
   40e91:	4c 8b b4 24 30 0c 00 	mov    0xc30(%rsp),%r14
   40e98:	00 
   40e99:	4c 8b a4 24 38 0c 00 	mov    0xc38(%rsp),%r12
   40ea0:	00 
   40ea1:	4c 8b bc 24 48 0c 00 	mov    0xc48(%rsp),%r15
   40ea8:	00 
   40ea9:	4c 8b ac 24 50 0c 00 	mov    0xc50(%rsp),%r13
   40eb0:	00 
   40eb1:	48 8d 84 24 e0 00 00 	lea    0xe0(%rsp),%rax
   40eb8:	00 
   40eb9:	48 89 84 24 50 01 00 	mov    %rax,0x150(%rsp)
   40ec0:	00 
   40ec1:	48 8d 05 78 9a ff ff 	lea    -0x6588(%rip),%rax        # 3a940 <<alloc::string::String as core::fmt::Display>::fmt>
   40ec8:	48 89 84 24 58 01 00 	mov    %rax,0x158(%rsp)
   40ecf:	00 
   40ed0:	48 8d 05 61 cf 0b 00 	lea    0xbcf61(%rip),%rax        # fde38 <anon.8868ba55c3fc5525a110cabbb60004d5.152.llvm.6579149275953927878+0x98>
   40ed7:	48 89 84 24 90 01 00 	mov    %rax,0x190(%rsp)
   40ede:	00 
   40edf:	48 c7 84 24 98 01 00 	movq   $0x1,0x198(%rsp)
   40ee6:	00 01 00 00 00 
   40eeb:	48 c7 84 24 b0 01 00 	movq   $0x0,0x1b0(%rsp)
   40ef2:	00 00 00 00 00 
   40ef7:	48 89 9c 24 a0 01 00 	mov    %rbx,0x1a0(%rsp)
   40efe:	00 
   40eff:	48 c7 84 24 a8 01 00 	movq   $0x1,0x1a8(%rsp)
   40f06:	00 01 00 00 00 
   40f0b:	48 8d bc 24 80 03 00 	lea    0x380(%rsp),%rdi
   40f12:	00 
   40f13:	48 8d b4 24 90 01 00 	lea    0x190(%rsp),%rsi
   40f1a:	00 
   40f1b:	ff 15 f7 2d 0c 00    	call   *0xc2df7(%rip)        # 103d18 <_DYNAMIC+0x2b8>
   40f21:	48 8b 9c 24 80 03 00 	mov    0x380(%rsp),%rbx
   40f28:	00 
   40f29:	48 8b ac 24 88 03 00 	mov    0x388(%rsp),%rbp
   40f30:	00 
   40f31:	48 8b 84 24 90 03 00 	mov    0x390(%rsp),%rax
   40f38:	00 
   40f39:	48 89 04 24          	mov    %rax,(%rsp)
   40f3d:	48 8b 7c 24 18       	mov    0x18(%rsp),%rdi
   40f42:	4c 89 f6             	mov    %r14,%rsi
   40f45:	4c 89 e2             	mov    %r12,%rdx
   40f48:	4c 89 f9             	mov    %r15,%rcx
   40f4b:	4d 89 e8             	mov    %r13,%r8
   40f4e:	49 89 e9             	mov    %rbp,%r9
   40f51:	ff 15 f9 2e 0c 00    	call   *0xc2ef9(%rip)        # 103e50 <_DYNAMIC+0x3f0>
   40f57:	66 0f 28 c8          	movapd %xmm0,%xmm1
   40f5b:	a8 01                	test   $0x1,%al
   40f5d:	44 8b 7c 24 70       	mov    0x70(%rsp),%r15d
   40f62:	75 04                	jne    40f68 <<strategy_comm5::StrategyComm5 as future_backtest_sdk::plugin::StrategyPlugin>::on_signal+0x1c58>
   40f64:	66 0f 57 c9          	xorpd  %xmm1,%xmm1
   40f68:	48 85 db             	test   %rbx,%rbx
   40f6b:	4c 8b 74 24 40       	mov    0x40(%rsp),%r14
   40f70:	4c 8d ac 24 90 01 00 	lea    0x190(%rsp),%r13
   40f77:	00 
   40f78:	74 23                	je     40f9d <<strategy_comm5::StrategyComm5 as future_backtest_sdk::plugin::StrategyPlugin>::on_signal+0x1c8d>
   40f7a:	ba 01 00 00 00       	mov    $0x1,%edx
   40f7f:	48 89 ef             	mov    %rbp,%rdi
   40f82:	48 89 de             	mov    %rbx,%rsi
   40f85:	f2 0f 11 8c 24 40 01 	movsd  %xmm1,0x140(%rsp)
   40f8c:	00 00 
   40f8e:	ff 15 e4 2c 0c 00    	call   *0xc2ce4(%rip)        # 103c78 <_DYNAMIC+0x218>
   40f94:	f2 0f 10 8c 24 40 01 	movsd  0x140(%rsp),%xmm1
   40f9b:	00 00 
   40f9d:	f6 44 24 20 01       	testb  $0x1,0x20(%rsp)
   40fa2:	74 27                	je     40fcb <<strategy_comm5::StrategyComm5 as future_backtest_sdk::plugin::StrategyPlugin>::on_signal+0x1cbb>
   40fa4:	45 0f b6 f7          	movzbl %r15b,%r14d
   40fa8:	48 8d b4 24 b8 08 00 	lea    0x8b8(%rsp),%rsi
   40faf:	00 
   40fb0:	44 89 f7             	mov    %r14d,%edi
   40fb3:	f2 0f 10 84 24 20 01 	movsd  0x120(%rsp),%xmm0
   40fba:	00 00 
   40fbc:	e8 5f a5 ff ff       	call   3b520 <strategy_comm5::next_phase>
   40fc1:	44 38 f0             	cmp    %r14b,%al
   40fc4:	4c 8b 74 24 40       	mov    0x40(%rsp),%r14
   40fc9:	75 3c                	jne    41007 <<strategy_comm5::StrategyComm5 as future_backtest_sdk::plugin::StrategyPlugin>::on_signal+0x1cf7>
   40fcb:	48 8b b4 24 e0 00 00 	mov    0xe0(%rsp),%rsi
   40fd2:	00 
   40fd3:	48 85 f6             	test   %rsi,%rsi
   40fd6:	74 6f                	je     41047 <<strategy_comm5::StrategyComm5 as future_backtest_sdk::plugin::StrategyPlugin>::on_signal+0x1d37>
   40fd8:	48 8b bc 24 e8 00 00 	mov    0xe8(%rsp),%rdi
   40fdf:	00 
   40fe0:	ba 01 00 00 00       	mov    $0x1,%edx
   40fe5:	ff 15 8d 2c 0c 00    	call   *0xc2c8d(%rip)        # 103c78 <_DYNAMIC+0x218>
   40feb:	eb 5a                	jmp    41047 <<strategy_comm5::StrategyComm5 as future_backtest_sdk::plugin::StrategyPlugin>::on_signal+0x1d37>
   40fed:	45 31 ff             	xor    %r15d,%r15d
   40ff0:	48 c7 44 24 20 00 00 	movq   $0x0,0x20(%rsp)
   40ff7:	00 00 
   40ff9:	48 c7 84 24 d0 00 00 	movq   $0x0,0xd0(%rsp)
   41000:	00 00 00 00 00 
   41005:	eb 48                	jmp    4104f <<strategy_comm5::StrategyComm5 as future_backtest_sdk::plugin::StrategyPlugin>::on_signal+0x1d3f>
   41007:	89 c5                	mov    %eax,%ebp
   41009:	48 8b 84 24 f0 00 00 	mov    0xf0(%rsp),%rax
   41010:	00 
   41011:	48 89 84 24 a0 01 00 	mov    %rax,0x1a0(%rsp)
   41018:	00 
   41019:	66 0f 28 84 24 e0 00 	movapd 0xe0(%rsp),%xmm0
   41020:	00 00 
   41022:	66 0f 29 84 24 90 01 	movapd %xmm0,0x190(%rsp)
   41029:	00 00 
   4102b:	40 0f b6 d5          	movzbl %bpl,%edx
   4102f:	48 8d b4 24 90 01 00 	lea    0x190(%rsp),%rsi
   41036:	00 
   41037:	48 8b bc 24 d0 02 00 	mov    0x2d0(%rsp),%rdi
   4103e:	00 
   4103f:	e8 0c 19 03 00       	call   72950 <hashbrown::map::HashMap<K,V,S,A>::insert>
   41044:	41 89 ef             	mov    %ebp,%r15d
   41047:	0f b6 ac 24 1b 0e 00 	movzbl 0xe1b(%rsp),%ebp
   4104e:	00 
   4104f:	45 0f b6 e7          	movzbl %r15b,%r12d
   41053:	48 8d bc 24 80 03 00 	lea    0x380(%rsp),%rdi
   4105a:	00 
   4105b:	48 8d b4 24 b8 08 00 	lea    0x8b8(%rsp),%rsi
   41062:	00 
   41063:	44 89 e2             	mov    %r12d,%edx
   41066:	e8 e5 a0 ff ff       	call   3b150 <strategy_comm5::Comm5Params::effective>
   4106b:	48 8b 54 24 60       	mov    0x60(%rsp),%rdx
   41070:	48 8b 4c 24 68       	mov    0x68(%rsp),%rcx
   41075:	0f b6 9c 24 1d 0e 00 	movzbl 0xe1d(%rsp),%ebx
   4107c:	00 
   4107d:	0f b6 f3             	movzbl %bl,%esi
   41080:	48 8b bc 24 90 00 00 	mov    0x90(%rsp),%rdi
   41087:	00 
   41088:	e8 73 b5 ff ff       	call   3c600 <strategy_comm5::StrategyComm5::xs_mult>
   4108d:	f2 0f 11 84 24 88 04 	movsd  %xmm0,0x488(%rsp)
   41094:	00 00 
   41096:	40 f6 c5 01          	test   $0x1,%bpl
   4109a:	74 68                	je     41104 <<strategy_comm5::StrategyComm5 as future_backtest_sdk::plugin::StrategyPlugin>::on_signal+0x1df4>
   4109c:	41 8d 44 24 31       	lea    0x31(%r12),%eax
   410a1:	89 84 24 a0 02 00 00 	mov    %eax,0x2a0(%rsp)
   410a8:	f6 44 24 20 01       	testb  $0x1,0x20(%rsp)
   410ad:	74 7e                	je     4112d <<strategy_comm5::StrategyComm5 as future_backtest_sdk::plugin::StrategyPlugin>::on_signal+0x1e1d>
   410af:	f2 0f 10 84 24 20 01 	movsd  0x120(%rsp),%xmm0
   410b6:	00 00 
   410b8:	f2 48 0f 2c c0       	cvttsd2si %xmm0,%rax
   410bd:	66 0f 2e 05 23 52 fd 	ucomisd -0x2addd(%rip),%xmm0        # 162e8 <GCC_except_table128+0x64>
   410c4:	ff 
   410c5:	48 b9 ff ff ff ff ff 	movabs $0x7fffffffffffffff,%rcx
   410cc:	ff ff 7f 
   410cf:	48 0f 46 c8          	cmovbe %rax,%rcx
   410d3:	31 f6                	xor    %esi,%esi
   410d5:	66 0f 2e c0          	ucomisd %xmm0,%xmm0
   410d9:	48 0f 4b f1          	cmovnp %rcx,%rsi
   410dd:	48 8d bc 24 10 10 00 	lea    0x1010(%rsp),%rdi
   410e4:	00 
   410e5:	e8 d6 96 ff ff       	call   3a7c0 <<i64 as alloc::string::SpecToString>::spec_to_string>
   410ea:	48 8b 84 24 20 10 00 	mov    0x1020(%rsp),%rax
   410f1:	00 
   410f2:	48 89 84 24 50 03 00 	mov    %rax,0x350(%rsp)
   410f9:	00 
   410fa:	0f 10 84 24 10 10 00 	movups 0x1010(%rsp),%xmm0
   41101:	00 
   41102:	eb 5a                	jmp    4115e <<strategy_comm5::StrategyComm5 as future_backtest_sdk::plugin::StrategyPlugin>::on_signal+0x1e4e>
   41104:	48 c7 84 24 00 03 00 	movq   $0x0,0x300(%rsp)
   4110b:	00 00 00 00 00 
   41110:	48 c7 84 24 08 03 00 	movq   $0x1,0x308(%rsp)
   41117:	00 01 00 00 00 
   4111c:	48 c7 84 24 10 03 00 	movq   $0x0,0x310(%rsp)
   41123:	00 00 00 00 00 
   41128:	e9 e5 01 00 00       	jmp    41312 <<strategy_comm5::StrategyComm5 as future_backtest_sdk::plugin::StrategyPlugin>::on_signal+0x2002>
   4112d:	48 8d 35 07 86 fd ff 	lea    -0x279f9(%rip),%rsi        # 1973b <anon.8868ba55c3fc5525a110cabbb60004d5.109.llvm.6579149275953927878+0x337>
   41134:	48 8d bc 24 90 01 00 	lea    0x190(%rsp),%rdi
   4113b:	00 
   4113c:	ba 02 00 00 00       	mov    $0x2,%edx
   41141:	e8 aa 9a ff ff       	call   3abf0 <<T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec>
   41146:	48 8b 84 24 a0 01 00 	mov    0x1a0(%rsp),%rax
   4114d:	00 
   4114e:	48 89 84 24 50 03 00 	mov    %rax,0x350(%rsp)
   41155:	00 
   41156:	0f 10 84 24 90 01 00 	movups 0x190(%rsp),%xmm0
   4115d:	00 
   4115e:	0f 29 84 24 40 03 00 	movaps %xmm0,0x340(%rsp)
   41165:	00 
   41166:	f6 84 24 d0 00 00 00 	testb  $0x1,0xd0(%rsp)
   4116d:	01 
   4116e:	48 8d 9c 24 50 01 00 	lea    0x150(%rsp),%rbx
   41175:	00 
   41176:	f2 0f 10 84 24 80 01 	movsd  0x180(%rsp),%xmm0
   4117d:	00 00 
   4117f:	74 4d                	je     411ce <<strategy_comm5::StrategyComm5 as future_backtest_sdk::plugin::StrategyPlugin>::on_signal+0x1ebe>
   41181:	f2 48 0f 2c c0       	cvttsd2si %xmm0,%rax
   41186:	66 0f 2e 05 5a 51 fd 	ucomisd -0x2aea6(%rip),%xmm0        # 162e8 <GCC_except_table128+0x64>
   4118d:	ff 
   4118e:	48 b9 ff ff ff ff ff 	movabs $0x7fffffffffffffff,%rcx
   41195:	ff ff 7f 
   41198:	48 0f 46 c8          	cmovbe %rax,%rcx
   4119c:	31 f6                	xor    %esi,%esi
   4119e:	66 0f 2e c0          	ucomisd %xmm0,%xmm0
   411a2:	48 0f 4b f1          	cmovnp %rcx,%rsi
   411a6:	48 8d bc 24 28 10 00 	lea    0x1028(%rsp),%rdi
   411ad:	00 
   411ae:	e8 0d 96 ff ff       	call   3a7c0 <<i64 as alloc::string::SpecToString>::spec_to_string>
   411b3:	48 8b 84 24 38 10 00 	mov    0x1038(%rsp),%rax
   411ba:	00 
   411bb:	48 89 84 24 60 01 00 	mov    %rax,0x160(%rsp)
   411c2:	00 
   411c3:	66 0f 10 84 24 28 10 	movupd 0x1028(%rsp),%xmm0
   411ca:	00 00 
   411cc:	eb 32                	jmp    41200 <<strategy_comm5::StrategyComm5 as future_backtest_sdk::plugin::StrategyPlugin>::on_signal+0x1ef0>
   411ce:	48 8d 35 66 85 fd ff 	lea    -0x27a9a(%rip),%rsi        # 1973b <anon.8868ba55c3fc5525a110cabbb60004d5.109.llvm.6579149275953927878+0x337>
   411d5:	48 8d bc 24 90 01 00 	lea    0x190(%rsp),%rdi
   411dc:	00 
   411dd:	ba 02 00 00 00       	mov    $0x2,%edx
   411e2:	e8 09 9a ff ff       	call   3abf0 <<T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec>
   411e7:	48 8b 84 24 a0 01 00 	mov    0x1a0(%rsp),%rax
   411ee:	00 
   411ef:	48 89 84 24 60 01 00 	mov    %rax,0x160(%rsp)
   411f6:	00 
   411f7:	66 0f 10 84 24 90 01 	movupd 0x190(%rsp),%xmm0
   411fe:	00 00 
   41200:	66 0f 29 84 24 50 01 	movapd %xmm0,0x150(%rsp)
   41207:	00 00 
   41209:	48 8d 84 24 a0 02 00 	lea    0x2a0(%rsp),%rax
   41210:	00 
   41211:	48 89 84 24 90 01 00 	mov    %rax,0x190(%rsp)
   41218:	00 
   41219:	48 8b 05 38 2c 0c 00 	mov    0xc2c38(%rip),%rax        # 103e58 <_DYNAMIC+0x3f8>
   41220:	48 89 84 24 98 01 00 	mov    %rax,0x198(%rsp)
   41227:	00 
   41228:	48 8d 84 24 40 03 00 	lea    0x340(%rsp),%rax
   4122f:	00 
   41230:	48 89 84 24 a0 01 00 	mov    %rax,0x1a0(%rsp)
   41237:	00 
   41238:	48 8d 05 01 97 ff ff 	lea    -0x68ff(%rip),%rax        # 3a940 <<alloc::string::String as core::fmt::Display>::fmt>
   4123f:	48 89 84 24 a8 01 00 	mov    %rax,0x1a8(%rsp)
   41246:	00 
   41247:	48 89 9c 24 b0 01 00 	mov    %rbx,0x1b0(%rsp)
   4124e:	00 
   4124f:	48 89 84 24 b8 01 00 	mov    %rax,0x1b8(%rsp)
   41256:	00 
   41257:	48 8d 05 ea cb 0b 00 	lea    0xbcbea(%rip),%rax        # fde48 <anon.8868ba55c3fc5525a110cabbb60004d5.152.llvm.6579149275953927878+0xa8>
   4125e:	48 89 84 24 e0 00 00 	mov    %rax,0xe0(%rsp)
   41265:	00 
   41266:	48 c7 84 24 e8 00 00 	movq   $0x3,0xe8(%rsp)
   4126d:	00 03 00 00 00 
   41272:	48 c7 84 24 00 01 00 	movq   $0x0,0x100(%rsp)
   41279:	00 00 00 00 00 
   4127e:	4c 89 ac 24 f0 00 00 	mov    %r13,0xf0(%rsp)
   41285:	00 
   41286:	48 c7 84 24 f8 00 00 	movq   $0x3,0xf8(%rsp)
   4128d:	00 03 00 00 00 
   41292:	48 8d bc 24 b8 02 00 	lea    0x2b8(%rsp),%rdi
   41299:	00 
   4129a:	48 8d b4 24 e0 00 00 	lea    0xe0(%rsp),%rsi
   412a1:	00 
   412a2:	ff 15 70 2a 0c 00    	call   *0xc2a70(%rip)        # 103d18 <_DYNAMIC+0x2b8>
   412a8:	48 8b b4 24 50 01 00 	mov    0x150(%rsp),%rsi
   412af:	00 
   412b0:	48 85 f6             	test   %rsi,%rsi
   412b3:	74 13                	je     412c8 <<strategy_comm5::StrategyComm5 as future_backtest_sdk::plugin::StrategyPlugin>::on_signal+0x1fb8>
   412b5:	48 8b bc 24 58 01 00 	mov    0x158(%rsp),%rdi
   412bc:	00 
   412bd:	ba 01 00 00 00       	mov    $0x1,%edx
   412c2:	ff 15 b0 29 0c 00    	call   *0xc29b0(%rip)        # 103c78 <_DYNAMIC+0x218>
   412c8:	48 8b b4 24 40 03 00 	mov    0x340(%rsp),%rsi
   412cf:	00 
   412d0:	48 85 f6             	test   %rsi,%rsi
   412d3:	74 13                	je     412e8 <<strategy_comm5::StrategyComm5 as future_backtest_sdk::plugin::StrategyPlugin>::on_signal+0x1fd8>
   412d5:	48 8b bc 24 48 03 00 	mov    0x348(%rsp),%rdi
   412dc:	00 
   412dd:	ba 01 00 00 00       	mov    $0x1,%edx
   412e2:	ff 15 90 29 0c 00    	call   *0xc2990(%rip)        # 103c78 <_DYNAMIC+0x218>
   412e8:	66 0f 10 84 24 b8 02 	movupd 0x2b8(%rsp),%xmm0
   412ef:	00 00 
   412f1:	66 0f 29 84 24 00 03 	movapd %xmm0,0x300(%rsp)
   412f8:	00 00 
   412fa:	48 8b 84 24 c8 02 00 	mov    0x2c8(%rsp),%rax
   41301:	00 
   41302:	48 89 84 24 10 03 00 	mov    %rax,0x310(%rsp)
   41309:	00 
   4130a:	0f b6 9c 24 1d 0e 00 	movzbl 0xe1d(%rsp),%ebx
   41311:	00 
   41312:	f6 c3 01             	test   $0x1,%bl
   41315:	44 89 7c 24 70       	mov    %r15d,0x70(%rsp)
   4131a:	4c 89 a4 24 d0 02 00 	mov    %r12,0x2d0(%rsp)
   41321:	00 
   41322:	0f 84 a4 00 00 00    	je     413cc <<strategy_comm5::StrategyComm5 as future_backtest_sdk::plugin::StrategyPlugin>::on_signal+0x20bc>
   41328:	48 8d 84 24 88 04 00 	lea    0x488(%rsp),%rax
   4132f:	00 
   41330:	48 89 84 24 50 01 00 	mov    %rax,0x150(%rsp)
   41337:	00 
   41338:	48 8b 05 41 2a 0c 00 	mov    0xc2a41(%rip),%rax        # 103d80 <_DYNAMIC+0x320>
   4133f:	48 89 84 24 58 01 00 	mov    %rax,0x158(%rsp)
   41346:	00 
   41347:	48 8d 05 2a cb 0b 00 	lea    0xbcb2a(%rip),%rax        # fde78 <anon.8868ba55c3fc5525a110cabbb60004d5.152.llvm.6579149275953927878+0xd8>
   4134e:	48 89 84 24 90 01 00 	mov    %rax,0x190(%rsp)
   41355:	00 
   41356:	48 c7 84 24 98 01 00 	movq   $0x1,0x198(%rsp)
   4135d:	00 01 00 00 00 
   41362:	48 c7 84 24 b0 01 00 	movq   $0x0,0x1b0(%rsp)
   41369:	00 00 00 00 00 
   4136e:	48 8d 84 24 50 01 00 	lea    0x150(%rsp),%rax
   41375:	00 
   41376:	48 89 84 24 a0 01 00 	mov    %rax,0x1a0(%rsp)
   4137d:	00 
   4137e:	48 c7 84 24 a8 01 00 	movq   $0x1,0x1a8(%rsp)
   41385:	00 01 00 00 00 
   4138a:	48 8d bc 24 e0 00 00 	lea    0xe0(%rsp),%rdi
   41391:	00 
   41392:	48 8d b4 24 90 01 00 	lea    0x190(%rsp),%rsi
   41399:	00 
   4139a:	ff 15 78 29 0c 00    	call   *0xc2978(%rip)        # 103d18 <_DYNAMIC+0x2b8>
   413a0:	48 8b 9c 24 90 00 00 	mov    0x90(%rsp),%rbx
   413a7:	00 
   413a8:	66 0f 10 84 24 e0 00 	movupd 0xe0(%rsp),%xmm0
   413af:	00 00 
   413b1:	66 0f 29 84 24 a0 02 	movapd %xmm0,0x2a0(%rsp)
   413b8:	00 00 
   413ba:	48 8b 84 24 f0 00 00 	mov    0xf0(%rsp),%rax
   413c1:	00 
   413c2:	48 89 84 24 b0 02 00 	mov    %rax,0x2b0(%rsp)
   413c9:	00 
   413ca:	eb 2c                	jmp    413f8 <<strategy_comm5::StrategyComm5 as future_backtest_sdk::plugin::StrategyPlugin>::on_signal+0x20e8>
   413cc:	48 c7 84 24 a0 02 00 	movq   $0x0,0x2a0(%rsp)
   413d3:	00 00 00 00 00 
   413d8:	48 c7 84 24 a8 02 00 	movq   $0x1,0x2a8(%rsp)
   413df:	00 01 00 00 00 
   413e4:	48 c7 84 24 b0 02 00 	movq   $0x0,0x2b0(%rsp)
   413eb:	00 00 00 00 00 
   413f0:	48 8b 9c 24 90 00 00 	mov    0x90(%rsp),%rbx
   413f7:	00 
   413f8:	0f b6 84 24 e8 03 00 	movzbl 0x3e8(%rsp),%eax
   413ff:	00 
   41400:	88 84 24 d0 00 00 00 	mov    %al,0xd0(%rsp)
   41407:	0f b6 44 24 17       	movzbl 0x17(%rsp),%eax
   4140c:	88 84 24 20 01 00 00 	mov    %al,0x120(%rsp)
   41413:	48 8b bc 24 d0 0b 00 	mov    0xbd0(%rsp),%rdi
   4141a:	00 
   4141b:	48 8b b4 24 d8 0b 00 	mov    0xbd8(%rsp),%rsi
   41422:	00 
   41423:	e8 d8 9b ff ff       	call   3b000 <strategy_comm5::Comm5Params::signal_mode>
   41428:	89 c5                	mov    %eax,%ebp
   4142a:	44 0f b6 e8          	movzbl %al,%r13d
   4142e:	48 8d 05 83 58 fd ff 	lea    -0x2a77d(%rip),%rax        # 16cb8 <anon.8d7226ba1ba94417efa9e0a1e98803de.1.llvm.16032588982719308145+0x108>
   41435:	4a 63 0c a8          	movslq (%rax,%r13,4),%rcx
   41439:	48 01 c1             	add    %rax,%rcx
   4143c:	ff e1                	jmp    *%rcx
   4143e:	f2 41 0f 10 46 70    	movsd  0x70(%r14),%xmm0
   41444:	f2 0f 59 84 24 88 0c 	mulsd  0xc88(%rsp),%xmm0
   4144b:	00 00 
   4144d:	eb 72                	jmp    414c1 <<strategy_comm5::StrategyComm5 as future_backtest_sdk::plugin::StrategyPlugin>::on_signal+0x21b1>
   4144f:	f2 41 0f 10 46 70    	movsd  0x70(%r14),%xmm0
   41455:	eb 6a                	jmp    414c1 <<strategy_comm5::StrategyComm5 as future_backtest_sdk::plugin::StrategyPlugin>::on_signal+0x21b1>
   41457:	f2 41 0f 10 46 70    	movsd  0x70(%r14),%xmm0
   4145d:	66 0f 28 0d 1b 57 fd 	movapd -0x2a8e5(%rip),%xmm1        # 16b80 <anon.2bc08f40ad58cb635718c2f09dbb11ab.6.llvm.4096812584824358744+0x2a0>
   41464:	ff 
   41465:	66 0f 54 c8          	andpd  %xmm0,%xmm1
   41469:	66 0f 56 0d ff 55 fd 	orpd   -0x2aa01(%rip),%xmm1        # 16a70 <anon.2bc08f40ad58cb635718c2f09dbb11ab.6.llvm.4096812584824358744+0x190>
   41470:	ff 
   41471:	66 0f 28 d8          	movapd %xmm0,%xmm3
   41475:	f2 0f c2 d8 03       	cmpunordsd %xmm0,%xmm3
   4147a:	f2 0f 10 15 9e 4f fd 	movsd  -0x2b062(%rip),%xmm2        # 16420 <GCC_except_table128+0x19c>
   41481:	ff 
   41482:	66 0f 54 d3          	andpd  %xmm3,%xmm2
   41486:	66 0f 55 d9          	andnpd %xmm1,%xmm3
   4148a:	66 0f 54 05 2e 50 fd 	andpd  -0x2afd2(%rip),%xmm0        # 164c0 <GCC_except_table128+0x23c>
   41491:	ff 
   41492:	66 0f 56 da          	orpd   %xmm2,%xmm3
   41496:	66 0f 29 5c 24 20    	movapd %xmm3,0x20(%rsp)
   4149c:	f2 0f 10 0d c4 4e fd 	movsd  -0x2b13c(%rip),%xmm1        # 16368 <GCC_except_table128+0xe4>
   414a3:	ff 
   414a4:	f2 0f 5e 8c 24 98 02 	divsd  0x298(%rsp),%xmm1
   414ab:	00 00 
   414ad:	ff 15 ad 29 0c 00    	call   *0xc29ad(%rip)        # 103e60 <pow@GLIBC_2.29>
   414b3:	f2 0f 59 44 24 20    	mulsd  0x20(%rsp),%xmm0
   414b9:	eb 06                	jmp    414c1 <<strategy_comm5::StrategyComm5 as future_backtest_sdk::plugin::StrategyPlugin>::on_signal+0x21b1>
   414bb:	f2 41 0f 10 46 78    	movsd  0x78(%r14),%xmm0
   414c1:	f2 0f 11 84 24 a8 00 	movsd  %xmm0,0xa8(%rsp)
   414c8:	00 00 
   414ca:	83 bc 24 b0 07 00 00 	cmpl   $0x1,0x7b0(%rsp)
   414d1:	01 
   414d2:	75 56                	jne    4152a <<strategy_comm5::StrategyComm5 as future_backtest_sdk::plugin::StrategyPlugin>::on_signal+0x221a>
   414d4:	f6 84 24 c0 07 00 00 	testb  $0x1,0x7c0(%rsp)
   414db:	01 
   414dc:	74 4c                	je     4152a <<strategy_comm5::StrategyComm5 as future_backtest_sdk::plugin::StrategyPlugin>::on_signal+0x221a>
   414de:	f2 0f 10 84 24 b8 07 	movsd  0x7b8(%rsp),%xmm0
   414e5:	00 00 
   414e7:	f2 0f 10 8c 24 c8 07 	movsd  0x7c8(%rsp),%xmm1
   414ee:	00 00 
   414f0:	66 0f 28 d0          	movapd %xmm0,%xmm2
   414f4:	f2 0f 5c d1          	subsd  %xmm1,%xmm2
   414f8:	f2 0f 58 c1          	addsd  %xmm1,%xmm0
   414fc:	f2 0f 5e d0          	divsd  %xmm0,%xmm2
   41500:	66 0f 54 15 b8 4f fd 	andpd  -0x2b048(%rip),%xmm2        # 164c0 <GCC_except_table128+0x23c>
   41507:	ff 
   41508:	66 0f 2e 15 90 4e fd 	ucomisd -0x2b170(%rip),%xmm2        # 163a0 <GCC_except_table128+0x11c>
   4150f:	ff 
   41510:	76 18                	jbe    4152a <<strategy_comm5::StrategyComm5 as future_backtest_sdk::plugin::StrategyPlugin>::on_signal+0x221a>
   41512:	31 ed                	xor    %ebp,%ebp
   41514:	48 8b b4 24 a0 02 00 	mov    0x2a0(%rsp),%rsi
   4151b:	00 
   4151c:	48 85 f6             	test   %rsi,%rsi
   4151f:	0f 85 e5 06 00 00    	jne    41c0a <<strategy_comm5::StrategyComm5 as future_backtest_sdk::plugin::StrategyPlugin>::on_signal+0x28fa>
   41525:	e9 f3 06 00 00       	jmp    41c1d <<strategy_comm5::StrategyComm5 as future_backtest_sdk::plugin::StrategyPlugin>::on_signal+0x290d>
   4152a:	48 8b 7c 24 18       	mov    0x18(%rsp),%rdi
   4152f:	ff 15 eb 28 0c 00    	call   *0xc28eb(%rip)        # 103e20 <_DYNAMIC+0x3c0>
   41535:	f2 0f 11 44 24 40    	movsd  %xmm0,0x40(%rsp)
   4153b:	f2 0f 10 84 24 c0 04 	movsd  0x4c0(%rsp),%xmm0
   41542:	00 00 
   41544:	f2 0f 11 44 24 20    	movsd  %xmm0,0x20(%rsp)
   4154a:	48 8b 74 24 60       	mov    0x60(%rsp),%rsi
   4154f:	48 8b 54 24 68       	mov    0x68(%rsp),%rdx
   41554:	48 8b 7c 24 18       	mov    0x18(%rsp),%rdi
   41559:	ff 15 09 29 0c 00    	call   *0xc2909(%rip)        # 103e68 <_DYNAMIC+0x408>
   4155f:	f2 0f 11 84 24 c8 00 	movsd  %xmm0,0xc8(%rsp)
   41566:	00 00 
   41568:	48 8b 74 24 60       	mov    0x60(%rsp),%rsi
   4156d:	48 8b 54 24 68       	mov    0x68(%rsp),%rdx
   41572:	48 8b 7c 24 18       	mov    0x18(%rsp),%rdi
   41577:	ff 15 f3 28 0c 00    	call   *0xc28f3(%rip)        # 103e70 <_DYNAMIC+0x410>
   4157d:	f2 0f 11 84 24 e8 02 	movsd  %xmm0,0x2e8(%rsp)
   41584:	00 00 
   41586:	48 8b 74 24 60       	mov    0x60(%rsp),%rsi
   4158b:	48 8b 54 24 68       	mov    0x68(%rsp),%rdx
   41590:	48 8b 7c 24 18       	mov    0x18(%rsp),%rdi
   41595:	ff 15 dd 28 0c 00    	call   *0xc28dd(%rip)        # 103e78 <_DYNAMIC+0x418>
   4159b:	f2 0f 11 84 24 00 04 	movsd  %xmm0,0x400(%rsp)
   415a2:	00 00 
   415a4:	48 8b 74 24 60       	mov    0x60(%rsp),%rsi
   415a9:	48 8b 54 24 68       	mov    0x68(%rsp),%rdx
   415ae:	48 8b 7c 24 18       	mov    0x18(%rsp),%rdi
   415b3:	ff 15 c7 28 0c 00    	call   *0xc28c7(%rip)        # 103e80 <_DYNAMIC+0x420>
   415b9:	f2 0f 11 84 24 20 03 	movsd  %xmm0,0x320(%rsp)
   415c0:	00 00 
   415c2:	48 8b 74 24 60       	mov    0x60(%rsp),%rsi
   415c7:	48 8b 54 24 68       	mov    0x68(%rsp),%rdx
   415cc:	48 8b 7c 24 18       	mov    0x18(%rsp),%rdi
   415d1:	ff 15 b1 28 0c 00    	call   *0xc28b1(%rip)        # 103e88 <_DYNAMIC+0x428>
   415d7:	f2 0f 11 84 24 40 01 	movsd  %xmm0,0x140(%rsp)
   415de:	00 00 
   415e0:	48 8b 74 24 60       	mov    0x60(%rsp),%rsi
   415e5:	48 8b 54 24 68       	mov    0x68(%rsp),%rdx
   415ea:	48 8b 7c 24 18       	mov    0x18(%rsp),%rdi
   415ef:	ff 15 9b 28 0c 00    	call   *0xc289b(%rip)        # 103e90 <_DYNAMIC+0x430>
   415f5:	66 0f 29 8c 24 80 01 	movapd %xmm1,0x180(%rsp)
   415fc:	00 00 
   415fe:	48 8b 74 24 60       	mov    0x60(%rsp),%rsi
   41603:	48 8b 54 24 68       	mov    0x68(%rsp),%rdx
   41608:	48 8b 7c 24 18       	mov    0x18(%rsp),%rdi
   4160d:	ff 15 85 28 0c 00    	call   *0xc2885(%rip)        # 103e98 <_DYNAMIC+0x438>
   41613:	f2 0f 10 4c 24 20    	movsd  0x20(%rsp),%xmm1
   41619:	f2 0f 5e 0d 4f 4e fd 	divsd  -0x2b1b1(%rip),%xmm1        # 16470 <GCC_except_table128+0x1ec>
   41620:	ff 
   41621:	f2 0f 11 4c 24 20    	movsd  %xmm1,0x20(%rsp)
   41627:	f2 0f 58 c1          	addsd  %xmm1,%xmm0
   4162b:	f2 0f 11 84 24 38 01 	movsd  %xmm0,0x138(%rsp)
   41632:	00 00 
   41634:	48 8b 74 24 60       	mov    0x60(%rsp),%rsi
   41639:	48 8b 54 24 68       	mov    0x68(%rsp),%rdx
   4163e:	48 8b 7c 24 18       	mov    0x18(%rsp),%rdi
   41643:	ff 15 57 28 0c 00    	call   *0xc2857(%rip)        # 103ea0 <_DYNAMIC+0x440>
   41649:	88 84 24 e0 04 00 00 	mov    %al,0x4e0(%rsp)
   41650:	80 7c 24 17 00       	cmpb   $0x0,0x17(%rsp)
   41655:	0f 84 82 00 00 00    	je     416dd <<strategy_comm5::StrategyComm5 as future_backtest_sdk::plugin::StrategyPlugin>::on_signal+0x23cd>
   4165b:	48 8d 84 24 c0 08 00 	lea    0x8c0(%rsp),%rax
   41662:	00 
   41663:	48 8d 8c 24 20 0d 00 	lea    0xd20(%rsp),%rcx
   4166a:	00 
   4166b:	80 bc 24 b8 08 00 00 	cmpb   $0x0,0x8b8(%rsp)
   41672:	00 
   41673:	48 0f 45 c8          	cmovne %rax,%rcx
   41677:	48 8d 84 24 d0 08 00 	lea    0x8d0(%rsp),%rax
   4167e:	00 
   4167f:	48 8d 94 24 28 0d 00 	lea    0xd28(%rsp),%rdx
   41686:	00 
   41687:	80 bc 24 c8 08 00 00 	cmpb   $0x0,0x8c8(%rsp)
   4168e:	00 
   4168f:	48 0f 45 d0          	cmovne %rax,%rdx
   41693:	f2 0f 10 01          	movsd  (%rcx),%xmm0
   41697:	f2 0f 10 12          	movsd  (%rdx),%xmm2
   4169b:	48 8d 84 24 e0 08 00 	lea    0x8e0(%rsp),%rax
   416a2:	00 
   416a3:	48 8d 8c 24 30 0d 00 	lea    0xd30(%rsp),%rcx
   416aa:	00 
   416ab:	80 bc 24 d8 08 00 00 	cmpb   $0x0,0x8d8(%rsp)
   416b2:	00 
   416b3:	48 0f 45 c8          	cmovne %rax,%rcx
   416b7:	f2 0f 10 09          	movsd  (%rcx),%xmm1
   416bb:	48 8d 84 24 f0 08 00 	lea    0x8f0(%rsp),%rax
   416c2:	00 
   416c3:	80 bc 24 e8 08 00 00 	cmpb   $0x0,0x8e8(%rsp)
   416ca:	00 
   416cb:	48 8d 8c 24 38 0d 00 	lea    0xd38(%rsp),%rcx
   416d2:	00 
   416d3:	48 0f 45 c8          	cmovne %rax,%rcx
   416d7:	f2 0f 10 19          	movsd  (%rcx),%xmm3
   416db:	eb 24                	jmp    41701 <<strategy_comm5::StrategyComm5 as future_backtest_sdk::plugin::StrategyPlugin>::on_signal+0x23f1>
   416dd:	f2 0f 10 84 24 80 03 	movsd  0x380(%rsp),%xmm0
   416e4:	00 00 
   416e6:	f2 0f 10 94 24 88 03 	movsd  0x388(%rsp),%xmm2
   416ed:	00 00 
   416ef:	f2 0f 10 8c 24 90 03 	movsd  0x390(%rsp),%xmm1
   416f6:	00 00 
   416f8:	f2 0f 10 9c 24 98 03 	movsd  0x398(%rsp),%xmm3
   416ff:	00 00 
   41701:	0f 29 84 24 60 04 00 	movaps %xmm0,0x460(%rsp)
   41708:	00 
   41709:	f2 0f 11 84 24 40 03 	movsd  %xmm0,0x340(%rsp)
   41710:	00 00 
   41712:	0f 29 94 24 40 04 00 	movaps %xmm2,0x440(%rsp)
   41719:	00 
   4171a:	f2 0f 11 94 24 48 03 	movsd  %xmm2,0x348(%rsp)
   41721:	00 00 
   41723:	0f 29 8c 24 50 04 00 	movaps %xmm1,0x450(%rsp)
   4172a:	00 
   4172b:	f2 0f 11 8c 24 50 03 	movsd  %xmm1,0x350(%rsp)
   41732:	00 00 
   41734:	0f 29 9c 24 30 04 00 	movaps %xmm3,0x430(%rsp)
   4173b:	00 
   4173c:	f2 0f 11 9c 24 58 03 	movsd  %xmm3,0x358(%rsp)
   41743:	00 00 
   41745:	f2 0f 10 8c 24 40 0d 	movsd  0xd40(%rsp),%xmm1
   4174c:	00 00 
   4174e:	f2 0f 10 94 24 48 0d 	movsd  0xd48(%rsp),%xmm2
   41755:	00 00 
   41757:	f2 0f 10 9c 24 50 0d 	movsd  0xd50(%rsp),%xmm3
   4175e:	00 00 
   41760:	f2 0f 10 84 24 38 01 	movsd  0x138(%rsp),%xmm0
   41767:	00 00 
   41769:	4c 8d bc 24 40 10 00 	lea    0x1040(%rsp),%r15
   41770:	00 
   41771:	48 8d b4 24 40 03 00 	lea    0x340(%rsp),%rsi
   41778:	00 
   41779:	4c 89 ff             	mov    %r15,%rdi
   4177c:	e8 7f 27 04 00       	call   83f00 <strategy_comm5::signal_trigger::dynamic_threshold>
   41781:	48 8b bc 24 e8 0b 00 	mov    0xbe8(%rsp),%rdi
   41788:	00 
   41789:	48 8b b4 24 f0 0b 00 	mov    0xbf0(%rsp),%rsi
   41790:	00 
   41791:	e8 aa 98 ff ff       	call   3b040 <strategy_comm5::Comm5Params::signal_trigger_mode>
   41796:	88 44 24 3e          	mov    %al,0x3e(%rsp)
   4179a:	48 8d 15 e7 c6 0b 00 	lea    0xbc6e7(%rip),%rdx        # fde88 <anon.8868ba55c3fc5525a110cabbb60004d5.152.llvm.6579149275953927878+0xe8>
   417a1:	48 8d bc 24 e0 00 00 	lea    0xe0(%rsp),%rdi
   417a8:	00 
   417a9:	4c 8d 74 24 58       	lea    0x58(%rsp),%r14
   417ae:	4c 89 f6             	mov    %r14,%rsi
   417b1:	ff 15 01 26 0c 00    	call   *0xc2601(%rip)        # 103db8 <_DYNAMIC+0x358>
   417b7:	48 8d 15 e2 c6 0b 00 	lea    0xbc6e2(%rip),%rdx        # fdea0 <anon.8868ba55c3fc5525a110cabbb60004d5.152.llvm.6579149275953927878+0x100>
   417be:	48 8d bc 24 90 01 00 	lea    0x190(%rsp),%rdi
   417c5:	00 
   417c6:	4c 8d a4 24 18 04 00 	lea    0x418(%rsp),%r12
   417cd:	00 
   417ce:	4c 89 e6             	mov    %r12,%rsi
   417d1:	ff 15 e1 25 0c 00    	call   *0xc25e1(%rip)        # 103db8 <_DYNAMIC+0x358>
   417d7:	48 8b 84 24 f0 00 00 	mov    0xf0(%rsp),%rax
   417de:	00 
   417df:	48 89 84 24 60 01 00 	mov    %rax,0x160(%rsp)
   417e6:	00 
   417e7:	0f 10 84 24 e0 00 00 	movups 0xe0(%rsp),%xmm0
   417ee:	00 
   417ef:	0f 29 84 24 50 01 00 	movaps %xmm0,0x150(%rsp)
   417f6:	00 
   417f7:	66 0f 10 84 24 90 01 	movupd 0x190(%rsp),%xmm0
   417fe:	00 00 
   41800:	66 0f 11 84 24 68 01 	movupd %xmm0,0x168(%rsp)
   41807:	00 00 
   41809:	48 8b 84 24 a0 01 00 	mov    0x1a0(%rsp),%rax
   41810:	00 
   41811:	48 89 84 24 78 01 00 	mov    %rax,0x178(%rsp)
   41818:	00 
   41819:	48 8d b3 68 05 00 00 	lea    0x568(%rbx),%rsi
   41820:	48 8d bc 24 90 01 00 	lea    0x190(%rsp),%rdi
   41827:	00 
   41828:	48 8d 94 24 50 01 00 	lea    0x150(%rsp),%rdx
   4182f:	00 
   41830:	e8 0b 0b 03 00       	call   72340 <hashbrown::rustc_entry::<impl hashbrown::map::HashMap<K,V,S,A>>::rustc_entry>
   41835:	48 b8 00 00 00 00 00 	movabs $0x8000000000000000,%rax
   4183c:	00 00 80 
   4183f:	48 39 84 24 90 01 00 	cmp    %rax,0x190(%rsp)
   41846:	00 
   41847:	75 1c                	jne    41865 <<strategy_comm5::StrategyComm5 as future_backtest_sdk::plugin::StrategyPlugin>::on_signal+0x2555>
   41849:	66 0f 10 84 24 98 01 	movupd 0x198(%rsp),%xmm0
   41850:	00 00 
   41852:	66 0f 11 84 24 e8 00 	movupd %xmm0,0xe8(%rsp)
   41859:	00 00 
   4185b:	48 89 84 24 e0 00 00 	mov    %rax,0xe0(%rsp)
   41862:	00 
   41863:	eb 48                	jmp    418ad <<strategy_comm5::StrategyComm5 as future_backtest_sdk::plugin::StrategyPlugin>::on_signal+0x259d>
   41865:	66 0f 10 84 24 90 01 	movupd 0x190(%rsp),%xmm0
   4186c:	00 00 
   4186e:	66 0f 10 8c 24 a0 01 	movupd 0x1a0(%rsp),%xmm1
   41875:	00 00 
   41877:	66 0f 10 94 24 b0 01 	movupd 0x1b0(%rsp),%xmm2
   4187e:	00 00 
   41880:	66 0f 10 9c 24 c0 01 	movupd 0x1c0(%rsp),%xmm3
   41887:	00 00 
   41889:	66 0f 29 9c 24 10 01 	movapd %xmm3,0x110(%rsp)
   41890:	00 00 
   41892:	66 0f 29 94 24 00 01 	movapd %xmm2,0x100(%rsp)
   41899:	00 00 
   4189b:	66 0f 29 8c 24 f0 00 	movapd %xmm1,0xf0(%rsp)
   418a2:	00 00 
   418a4:	66 0f 29 84 24 e0 00 	movapd %xmm0,0xe0(%rsp)
   418ab:	00 00 
   418ad:	48 8d 44 24 3e       	lea    0x3e(%rsp),%rax
   418b2:	48 89 84 24 90 01 00 	mov    %rax,0x190(%rsp)
   418b9:	00 
   418ba:	48 8d 84 24 f8 0b 00 	lea    0xbf8(%rsp),%rax
   418c1:	00 
   418c2:	48 89 84 24 98 01 00 	mov    %rax,0x198(%rsp)
   418c9:	00 
   418ca:	4c 89 bc 24 a0 01 00 	mov    %r15,0x1a0(%rsp)
   418d1:	00 
   418d2:	48 8d bc 24 e0 00 00 	lea    0xe0(%rsp),%rdi
   418d9:	00 
   418da:	48 8d b4 24 90 01 00 	lea    0x190(%rsp),%rsi
   418e1:	00 
   418e2:	e8 c9 83 ff ff       	call   39cb0 <std::collections::hash::map::Entry<K,V>::or_insert_with>
   418e7:	49 89 c7             	mov    %rax,%r15
   418ea:	f2 0f 10 44 24 40    	movsd  0x40(%rsp),%xmm0
   418f0:	f2 0f 58 44 24 20    	addsd  0x20(%rsp),%xmm0
   418f6:	f2 0f 10 8c 24 a8 00 	movsd  0xa8(%rsp),%xmm1
   418fd:	00 00 
   418ff:	66 0f 57 d2          	xorpd  %xmm2,%xmm2
   41903:	66 0f 57 db          	xorpd  %xmm3,%xmm3
   41907:	48 89 c7             	mov    %rax,%rdi
   4190a:	f2 0f 11 44 24 40    	movsd  %xmm0,0x40(%rsp)
   41910:	31 f6                	xor    %esi,%esi
   41912:	e8 e9 0f 04 00       	call   82900 <strategy_comm5::signal_trigger::SignalTrigger::update_score>
   41917:	0f 10 84 24 40 10 00 	movups 0x1040(%rsp),%xmm0
   4191e:	00 
   4191f:	66 0f 10 8c 24 50 10 	movupd 0x1050(%rsp),%xmm1
   41926:	00 00 
   41928:	66 41 0f 11 4f 50    	movupd %xmm1,0x50(%r15)
   4192e:	41 0f 11 47 40       	movups %xmm0,0x40(%r15)
   41933:	0f b6 44 24 3e       	movzbl 0x3e(%rsp),%eax
   41938:	48 8d 0d 89 53 fd ff 	lea    -0x2ac77(%rip),%rcx        # 16cc8 <anon.8d7226ba1ba94417efa9e0a1e98803de.1.llvm.16032588982719308145+0x118>
   4193f:	48 63 04 81          	movslq (%rcx,%rax,4),%rax
   41943:	48 01 c8             	add    %rcx,%rax
   41946:	ff e0                	jmp    *%rax
   41948:	40 84 ed             	test   %bpl,%bpl
   4194b:	0f 84 cd 00 00 00    	je     41a1e <<strategy_comm5::StrategyComm5 as future_backtest_sdk::plugin::StrategyPlugin>::on_signal+0x270e>
   41951:	41 83 fd 03          	cmp    $0x3,%r13d
   41955:	0f 85 fe 00 00 00    	jne    41a59 <<strategy_comm5::StrategyComm5 as future_backtest_sdk::plugin::StrategyPlugin>::on_signal+0x2749>
   4195b:	f2 0f 10 84 24 90 0c 	movsd  0xc90(%rsp),%xmm0
   41962:	00 00 
   41964:	f2 0f 10 8c 24 e8 02 	movsd  0x2e8(%rsp),%xmm1
   4196b:	00 00 
   4196d:	f2 0f 10 94 24 c8 00 	movsd  0xc8(%rsp),%xmm2
   41974:	00 00 
   41976:	48 8d bc 24 90 01 00 	lea    0x190(%rsp),%rdi
   4197d:	00 
   4197e:	4c 89 fe             	mov    %r15,%rsi
   41981:	e8 4a 12 04 00       	call   82bd0 <strategy_comm5::signal_trigger::SignalTrigger::point_signal_trigger_pv4>
   41986:	e9 b5 00 00 00       	jmp    41a40 <<strategy_comm5::StrategyComm5 as future_backtest_sdk::plugin::StrategyPlugin>::on_signal+0x2730>
   4198b:	f2 0f 10 84 24 98 0c 	movsd  0xc98(%rsp),%xmm0
   41992:	00 00 
   41994:	48 8d bc 24 90 01 00 	lea    0x190(%rsp),%rdi
   4199b:	00 
   4199c:	4c 89 fe             	mov    %r15,%rsi
   4199f:	e8 ac 1b 04 00       	call   83550 <strategy_comm5::signal_trigger::SignalTrigger::windows_sharpe_trigger>
   419a4:	e9 97 00 00 00       	jmp    41a40 <<strategy_comm5::StrategyComm5 as future_backtest_sdk::plugin::StrategyPlugin>::on_signal+0x2730>
   419a9:	f2 0f 10 84 24 98 0c 	movsd  0xc98(%rsp),%xmm0
   419b0:	00 00 
   419b2:	48 8d bc 24 90 01 00 	lea    0x190(%rsp),%rdi
   419b9:	00 
   419ba:	4c 89 fe             	mov    %r15,%rsi
   419bd:	e8 ae 13 04 00       	call   82d70 <strategy_comm5::signal_trigger::SignalTrigger::windows_std_trigger>
   419c2:	eb 7c                	jmp    41a40 <<strategy_comm5::StrategyComm5 as future_backtest_sdk::plugin::StrategyPlugin>::on_signal+0x2730>
   419c4:	f2 0f 10 8c 24 98 0c 	movsd  0xc98(%rsp),%xmm1
   419cb:	00 00 
   419cd:	f2 0f 10 84 24 a0 0c 	movsd  0xca0(%rsp),%xmm0
   419d4:	00 00 
   419d6:	48 8d bc 24 90 01 00 	lea    0x190(%rsp),%rdi
   419dd:	00 
   419de:	4c 89 fe             	mov    %r15,%rsi
   419e1:	e8 9a 14 04 00       	call   82e80 <strategy_comm5::signal_trigger::SignalTrigger::windows_quantile_trigger>
   419e6:	eb 58                	jmp    41a40 <<strategy_comm5::StrategyComm5 as future_backtest_sdk::plugin::StrategyPlugin>::on_signal+0x2730>
   419e8:	f2 0f 10 84 24 98 0c 	movsd  0xc98(%rsp),%xmm0
   419ef:	00 00 
   419f1:	48 8d bc 24 90 01 00 	lea    0x190(%rsp),%rdi
   419f8:	00 
   419f9:	4c 89 fe             	mov    %r15,%rsi
   419fc:	e8 5f 12 04 00       	call   82c60 <strategy_comm5::signal_trigger::SignalTrigger::windows_mean_trigger>
   41a01:	eb 3d                	jmp    41a40 <<strategy_comm5::StrategyComm5 as future_backtest_sdk::plugin::StrategyPlugin>::on_signal+0x2730>
   41a03:	f2 0f 10 84 24 98 0c 	movsd  0xc98(%rsp),%xmm0
   41a0a:	00 00 
   41a0c:	48 8d bc 24 90 01 00 	lea    0x190(%rsp),%rdi
   41a13:	00 
   41a14:	4c 89 fe             	mov    %r15,%rsi
   41a17:	e8 74 1d 04 00       	call   83790 <strategy_comm5::signal_trigger::SignalTrigger::windows_rsi_trigger>
   41a1c:	eb 22                	jmp    41a40 <<strategy_comm5::StrategyComm5 as future_backtest_sdk::plugin::StrategyPlugin>::on_signal+0x2730>
   41a1e:	f2 0f 10 84 24 90 0c 	movsd  0xc90(%rsp),%xmm0
   41a25:	00 00 
   41a27:	f2 0f 10 8c 24 c8 00 	movsd  0xc8(%rsp),%xmm1
   41a2e:	00 00 
   41a30:	48 8d bc 24 90 01 00 	lea    0x190(%rsp),%rdi
   41a37:	00 
   41a38:	4c 89 fe             	mov    %r15,%rsi
   41a3b:	e8 00 11 04 00       	call   82b40 <strategy_comm5::signal_trigger::SignalTrigger::point_signal_trigger_pv1_spread>
   41a40:	0f b6 84 24 90 01 00 	movzbl 0x190(%rsp),%eax
   41a47:	00 
   41a48:	3c 05                	cmp    $0x5,%al
   41a4a:	75 5b                	jne    41aa7 <<strategy_comm5::StrategyComm5 as future_backtest_sdk::plugin::StrategyPlugin>::on_signal+0x2797>
   41a4c:	4c 8b ac 24 98 01 00 	mov    0x198(%rsp),%r13
   41a53:	00 
   41a54:	e9 a1 01 00 00       	jmp    41bfa <<strategy_comm5::StrategyComm5 as future_backtest_sdk::plugin::StrategyPlugin>::on_signal+0x28ea>
   41a59:	f2 41 0f 10 47 38    	movsd  0x38(%r15),%xmm0
   41a5f:	66 41 0f 2e 47 40    	ucomisd 0x40(%r15),%xmm0
   41a65:	73 36                	jae    41a9d <<strategy_comm5::StrategyComm5 as future_backtest_sdk::plugin::StrategyPlugin>::on_signal+0x278d>
   41a67:	b0 03                	mov    $0x3,%al
   41a69:	66 41 0f 2e 47 58    	ucomisd 0x58(%r15),%xmm0
   41a6f:	48 8b 9c 24 90 00 00 	mov    0x90(%rsp),%rbx
   41a76:	00 
   41a77:	73 2e                	jae    41aa7 <<strategy_comm5::StrategyComm5 as future_backtest_sdk::plugin::StrategyPlugin>::on_signal+0x2797>
   41a79:	f2 41 0f 10 4f 50    	movsd  0x50(%r15),%xmm1
   41a7f:	b0 02                	mov    $0x2,%al
   41a81:	66 0f 2e c8          	ucomisd %xmm0,%xmm1
   41a85:	73 20                	jae    41aa7 <<strategy_comm5::StrategyComm5 as future_backtest_sdk::plugin::StrategyPlugin>::on_signal+0x2797>
   41a87:	f2 41 0f 10 4f 48    	movsd  0x48(%r15),%xmm1
   41a8d:	31 c0                	xor    %eax,%eax
   41a8f:	66 0f 2e c8          	ucomisd %xmm0,%xmm1
   41a93:	0f 92 c0             	setb   %al
   41a96:	8d 04 40             	lea    (%rax,%rax,2),%eax
   41a99:	ff c0                	inc    %eax
   41a9b:	eb 0a                	jmp    41aa7 <<strategy_comm5::StrategyComm5 as future_backtest_sdk::plugin::StrategyPlugin>::on_signal+0x2797>
   41a9d:	31 c0                	xor    %eax,%eax
   41a9f:	48 8b 9c 24 90 00 00 	mov    0x90(%rsp),%rbx
   41aa6:	00 
   41aa7:	88 44 24 3f          	mov    %al,0x3f(%rsp)
   41aab:	4c 89 b4 24 90 01 00 	mov    %r14,0x190(%rsp)
   41ab2:	00 
   41ab3:	48 8d 05 86 8e ff ff 	lea    -0x717a(%rip),%rax        # 3a940 <<alloc::string::String as core::fmt::Display>::fmt>
   41aba:	48 89 84 24 98 01 00 	mov    %rax,0x198(%rsp)
   41ac1:	00 
   41ac2:	48 8d 84 24 a8 00 00 	lea    0xa8(%rsp),%rax
   41ac9:	00 
   41aca:	48 89 84 24 a0 01 00 	mov    %rax,0x1a0(%rsp)
   41ad1:	00 
   41ad2:	4c 8b 35 a7 22 0c 00 	mov    0xc22a7(%rip),%r14        # 103d80 <_DYNAMIC+0x320>
   41ad9:	4c 89 b4 24 a8 01 00 	mov    %r14,0x1a8(%rsp)
   41ae0:	00 
   41ae1:	48 8d 84 24 c8 00 00 	lea    0xc8(%rsp),%rax
   41ae8:	00 
   41ae9:	48 89 84 24 b0 01 00 	mov    %rax,0x1b0(%rsp)
   41af0:	00 
   41af1:	4c 89 b4 24 b8 01 00 	mov    %r14,0x1b8(%rsp)
   41af8:	00 
   41af9:	48 8d 84 24 98 02 00 	lea    0x298(%rsp),%rax
   41b00:	00 
   41b01:	48 89 84 24 c0 01 00 	mov    %rax,0x1c0(%rsp)
   41b08:	00 
   41b09:	4c 89 b4 24 c8 01 00 	mov    %r14,0x1c8(%rsp)
   41b10:	00 
   41b11:	48 8d 44 24 17       	lea    0x17(%rsp),%rax
   41b16:	48 89 84 24 d0 01 00 	mov    %rax,0x1d0(%rsp)
   41b1d:	00 
   41b1e:	48 8b 05 83 23 0c 00 	mov    0xc2383(%rip),%rax        # 103ea8 <_DYNAMIC+0x448>
   41b25:	48 89 84 24 d8 01 00 	mov    %rax,0x1d8(%rsp)
   41b2c:	00 
   41b2d:	48 8d 44 24 3f       	lea    0x3f(%rsp),%rax
   41b32:	48 89 84 24 e0 01 00 	mov    %rax,0x1e0(%rsp)
   41b39:	00 
   41b3a:	48 8d 05 1f 8e ff ff 	lea    -0x71e1(%rip),%rax        # 3a960 <<core::option::Option<T> as core::fmt::Debug>::fmt>
   41b41:	48 89 84 24 e8 01 00 	mov    %rax,0x1e8(%rsp)
   41b48:	00 
   41b49:	48 8d 05 68 c3 0b 00 	lea    0xbc368(%rip),%rax        # fdeb8 <anon.8868ba55c3fc5525a110cabbb60004d5.152.llvm.6579149275953927878+0x118>
   41b50:	48 89 84 24 e0 00 00 	mov    %rax,0xe0(%rsp)
   41b57:	00 
   41b58:	48 c7 84 24 e8 00 00 	movq   $0x6,0xe8(%rsp)
   41b5f:	00 06 00 00 00 
   41b64:	48 8d 05 fd 7b fd ff 	lea    -0x28403(%rip),%rax        # 19768 <anon.8868ba55c3fc5525a110cabbb60004d5.109.llvm.6579149275953927878+0x364>
   41b6b:	48 89 84 24 00 01 00 	mov    %rax,0x100(%rsp)
   41b72:	00 
   41b73:	48 c7 84 24 08 01 00 	movq   $0x6,0x108(%rsp)
   41b7a:	00 06 00 00 00 
   41b7f:	48 8d 84 24 90 01 00 	lea    0x190(%rsp),%rax
   41b86:	00 
   41b87:	48 89 84 24 f0 00 00 	mov    %rax,0xf0(%rsp)
   41b8e:	00 
   41b8f:	48 c7 84 24 f8 00 00 	movq   $0x6,0xf8(%rsp)
   41b96:	00 06 00 00 00 
   41b9b:	48 8d bc 24 60 10 00 	lea    0x1060(%rsp),%rdi
   41ba2:	00 
   41ba3:	48 8d b4 24 e0 00 00 	lea    0xe0(%rsp),%rsi
   41baa:	00 
   41bab:	ff 15 67 21 0c 00    	call   *0xc2167(%rip)        # 103d18 <_DYNAMIC+0x2b8>
   41bb1:	48 8d b4 24 60 10 00 	lea    0x1060(%rsp),%rsi
   41bb8:	00 
   41bb9:	48 8b 7c 24 18       	mov    0x18(%rsp),%rdi
   41bbe:	e8 6d 85 03 00       	call   7a130 <future_backtest_sdk::context::StrategyContext::log_debug>
   41bc3:	0f b6 74 24 3f       	movzbl 0x3f(%rsp),%esi
   41bc8:	48 8b 7c 24 18       	mov    0x18(%rsp),%rdi
   41bcd:	ff 15 dd 22 0c 00    	call   *0xc22dd(%rip)        # 103eb0 <_DYNAMIC+0x450>
   41bd3:	89 c5                	mov    %eax,%ebp
   41bd5:	f2 0f 10 84 24 70 0d 	movsd  0xd70(%rsp),%xmm0
   41bdc:	00 00 
   41bde:	be 01 00 00 00       	mov    $0x1,%esi
   41be3:	48 8b 7c 24 18       	mov    0x18(%rsp),%rdi
   41be8:	ff 15 ca 22 0c 00    	call   *0xc22ca(%rip)        # 103eb8 <_DYNAMIC+0x458>
   41bee:	49 89 c5             	mov    %rax,%r13
   41bf1:	48 85 c0             	test   %rax,%rax
   41bf4:	0f 84 ba 00 00 00    	je     41cb4 <<strategy_comm5::StrategyComm5 as future_backtest_sdk::plugin::StrategyPlugin>::on_signal+0x29a4>
   41bfa:	4c 89 ed             	mov    %r13,%rbp
   41bfd:	48 8b b4 24 a0 02 00 	mov    0x2a0(%rsp),%rsi
   41c04:	00 
   41c05:	48 85 f6             	test   %rsi,%rsi
   41c08:	74 13                	je     41c1d <<strategy_comm5::StrategyComm5 as future_backtest_sdk::plugin::StrategyPlugin>::on_signal+0x290d>
   41c0a:	48 8b bc 24 a8 02 00 	mov    0x2a8(%rsp),%rdi
   41c11:	00 
   41c12:	ba 01 00 00 00       	mov    $0x1,%edx
   41c17:	ff 15 5b 20 0c 00    	call   *0xc205b(%rip)        # 103c78 <_DYNAMIC+0x218>
   41c1d:	48 8b b4 24 00 03 00 	mov    0x300(%rsp),%rsi
   41c24:	00 
   41c25:	48 85 f6             	test   %rsi,%rsi
   41c28:	74 13                	je     41c3d <<strategy_comm5::StrategyComm5 as future_backtest_sdk::plugin::StrategyPlugin>::on_signal+0x292d>
   41c2a:	48 8b bc 24 08 03 00 	mov    0x308(%rsp),%rdi
   41c31:	00 
   41c32:	ba 01 00 00 00       	mov    $0x1,%edx
   41c37:	ff 15 3b 20 0c 00    	call   *0xc203b(%rip)        # 103c78 <_DYNAMIC+0x218>
   41c3d:	48 8b b4 24 d0 07 00 	mov    0x7d0(%rsp),%rsi
   41c44:	00 
   41c45:	48 85 f6             	test   %rsi,%rsi
   41c48:	74 13                	je     41c5d <<strategy_comm5::StrategyComm5 as future_backtest_sdk::plugin::StrategyPlugin>::on_signal+0x294d>
   41c4a:	48 8b bc 24 d8 07 00 	mov    0x7d8(%rsp),%rdi
   41c51:	00 
   41c52:	ba 01 00 00 00       	mov    $0x1,%edx
   41c57:	ff 15 1b 20 0c 00    	call   *0xc201b(%rip)        # 103c78 <_DYNAMIC+0x218>
   41c5d:	48 8b b4 24 18 04 00 	mov    0x418(%rsp),%rsi
   41c64:	00 
   41c65:	48 85 f6             	test   %rsi,%rsi
   41c68:	74 13                	je     41c7d <<strategy_comm5::StrategyComm5 as future_backtest_sdk::plugin::StrategyPlugin>::on_signal+0x296d>
   41c6a:	48 8b bc 24 20 04 00 	mov    0x420(%rsp),%rdi
   41c71:	00 
   41c72:	ba 01 00 00 00       	mov    $0x1,%edx
   41c77:	ff 15 fb 1f 0c 00    	call   *0xc1ffb(%rip)        # 103c78 <_DYNAMIC+0x218>
   41c7d:	48 8b 74 24 58       	mov    0x58(%rsp),%rsi
   41c82:	48 85 f6             	test   %rsi,%rsi
   41c85:	74 10                	je     41c97 <<strategy_comm5::StrategyComm5 as future_backtest_sdk::plugin::StrategyPlugin>::on_signal+0x2987>
   41c87:	48 8b 7c 24 60       	mov    0x60(%rsp),%rdi
   41c8c:	ba 01 00 00 00       	mov    $0x1,%edx
   41c91:	ff 15 e1 1f 0c 00    	call   *0xc1fe1(%rip)        # 103c78 <_DYNAMIC+0x218>
   41c97:	48 8b 84 24 98 04 00 	mov    0x498(%rsp),%rax
   41c9e:	00 
   41c9f:	48 89 84 24 80 00 00 	mov    %rax,0x80(%rsp)
   41ca6:	00 
   41ca7:	4c 8b a4 24 a0 04 00 	mov    0x4a0(%rsp),%r12
   41cae:	00 
   41caf:	e9 85 ec ff ff       	jmp    40939 <<strategy_comm5::StrategyComm5 as future_backtest_sdk::plugin::StrategyPlugin>::on_signal+0x1629>
   41cb4:	40 0f b6 f5          	movzbl %bpl,%esi
   41cb8:	48 8b 7c 24 18       	mov    0x18(%rsp),%rdi
   41cbd:	f2 0f 10 44 24 40    	movsd  0x40(%rsp),%xmm0
   41cc3:	f2 0f 10 8c 24 b0 00 	movsd  0xb0(%rsp),%xmm1
   41cca:	00 00 
   41ccc:	f2 0f 10 94 24 80 00 	movsd  0x80(%rsp),%xmm2
   41cd3:	00 00 
   41cd5:	ff 15 e5 21 0c 00    	call   *0xc21e5(%rip)        # 103ec0 <_DYNAMIC+0x460>
   41cdb:	89 c5                	mov    %eax,%ebp
   41cdd:	0f b6 84 24 20 01 00 	movzbl 0x120(%rsp),%eax
   41ce4:	00 
   41ce5:	34 01                	xor    $0x1,%al
   41ce7:	80 bc 24 d0 00 00 00 	cmpb   $0x1,0xd0(%rsp)
   41cee:	01 
   41cef:	0f 95 c1             	setne  %cl
   41cf2:	08 c1                	or     %al,%cl
   41cf4:	75 09                	jne    41cff <<strategy_comm5::StrategyComm5 as future_backtest_sdk::plugin::StrategyPlugin>::on_signal+0x29ef>
   41cf6:	40 f6 c5 05          	test   $0x5,%bpl
   41cfa:	75 03                	jne    41cff <<strategy_comm5::StrategyComm5 as future_backtest_sdk::plugin::StrategyPlugin>::on_signal+0x29ef>
   41cfc:	40 b5 04             	mov    $0x4,%bpl
   41cff:	48 83 bc 24 b8 04 00 	cmpq   $0x0,0x4b8(%rsp)
   41d06:	00 00 
   41d08:	4c 0f 45 a4 24 b0 04 	cmovne 0x4b0(%rsp),%r12
   41d0f:	00 00 
   41d11:	48 8d 05 00 c2 0b 00 	lea    0xbc200(%rip),%rax        # fdf18 <anon.8868ba55c3fc5525a110cabbb60004d5.152.llvm.6579149275953927878+0x178>
   41d18:	48 8d 15 11 c2 0b 00 	lea    0xbc211(%rip),%rdx        # fdf30 <anon.8868ba55c3fc5525a110cabbb60004d5.152.llvm.6579149275953927878+0x190>
   41d1f:	48 0f 44 d0          	cmove  %rax,%rdx
   41d23:	48 8d bc 24 b8 02 00 	lea    0x2b8(%rsp),%rdi
   41d2a:	00 
   41d2b:	4c 89 e6             	mov    %r12,%rsi
   41d2e:	ff 15 84 20 0c 00    	call   *0xc2084(%rip)        # 103db8 <_DYNAMIC+0x358>
   41d34:	f2 0f 10 84 24 a8 0c 	movsd  0xca8(%rsp),%xmm0
   41d3b:	00 00 
   41d3d:	0f 29 44 24 40       	movaps %xmm0,0x40(%rsp)
   41d42:	f2 0f 10 84 24 d8 03 	movsd  0x3d8(%rsp),%xmm0
   41d49:	00 00 
   41d4b:	0f 29 44 24 20       	movaps %xmm0,0x20(%rsp)
   41d50:	f2 0f 10 84 24 e0 03 	movsd  0x3e0(%rsp),%xmm0
   41d57:	00 00 
   41d59:	0f 29 84 24 f0 03 00 	movaps %xmm0,0x3f0(%rsp)
   41d60:	00 
   41d61:	80 bc 24 d0 00 00 00 	cmpb   $0x2,0xd0(%rsp)
   41d68:	02 
   41d69:	41 0f 94 c4          	sete   %r12b
   41d6d:	f2 41 0f 10 47 40    	movsd  0x40(%r15),%xmm0
   41d73:	f2 0f 11 84 24 70 03 	movsd  %xmm0,0x370(%rsp)
   41d7a:	00 00 
   41d7c:	f2 41 0f 10 47 48    	movsd  0x48(%r15),%xmm0
   41d82:	f2 0f 11 84 24 68 03 	movsd  %xmm0,0x368(%rsp)
   41d89:	00 00 
   41d8b:	f2 41 0f 10 47 50    	movsd  0x50(%r15),%xmm0
   41d91:	f2 0f 11 84 24 d0 00 	movsd  %xmm0,0xd0(%rsp)
   41d98:	00 00 
   41d9a:	f2 41 0f 10 47 58    	movsd  0x58(%r15),%xmm0
   41da0:	f2 0f 11 84 24 f0 04 	movsd  %xmm0,0x4f0(%rsp)
   41da7:	00 00 
   41da9:	4d 89 f7             	mov    %r14,%r15
   41dac:	40 80 fd 04          	cmp    $0x4,%bpl
   41db0:	74 69                	je     41e1b <<strategy_comm5::StrategyComm5 as future_backtest_sdk::plugin::StrategyPlugin>::on_signal+0x2b0b>
   41db2:	80 bc 24 19 0e 00 00 	cmpb   $0x0,0xe19(%rsp)
   41db9:	00 
   41dba:	74 5f                	je     41e1b <<strategy_comm5::StrategyComm5 as future_backtest_sdk::plugin::StrategyPlugin>::on_signal+0x2b0b>
   41dbc:	4c 8d b3 98 05 00 00 	lea    0x598(%rbx),%r14
   41dc3:	48 8d 74 24 58       	lea    0x58(%rsp),%rsi
   41dc8:	4c 89 f7             	mov    %r14,%rdi
   41dcb:	e8 80 8f ff ff       	call   3ad50 <hashbrown::map::HashMap<K,V,S,A>::get_inner>
   41dd0:	48 85 c0             	test   %rax,%rax
   41dd3:	74 46                	je     41e1b <<strategy_comm5::StrategyComm5 as future_backtest_sdk::plugin::StrategyPlugin>::on_signal+0x2b0b>
   41dd5:	f2 0f 10 84 24 e8 0c 	movsd  0xce8(%rsp),%xmm0
   41ddc:	00 00 
   41dde:	b1 04                	mov    $0x4,%cl
   41de0:	66 0f 57 c9          	xorpd  %xmm1,%xmm1
   41de4:	66 0f 2e c1          	ucomisd %xmm1,%xmm0
   41de8:	76 33                	jbe    41e1d <<strategy_comm5::StrategyComm5 as future_backtest_sdk::plugin::StrategyPlugin>::on_signal+0x2b0d>
   41dea:	f2 0f 10 8c 24 a0 00 	movsd  0xa0(%rsp),%xmm1
   41df1:	00 00 
   41df3:	f2 0f 5c 48 28       	subsd  0x28(%rax),%xmm1
   41df8:	f2 0f 59 0d 70 46 fd 	mulsd  -0x2b990(%rip),%xmm1        # 16470 <GCC_except_table128+0x1ec>
   41dff:	ff 
   41e00:	66 0f 2e c8          	ucomisd %xmm0,%xmm1
   41e04:	72 17                	jb     41e1d <<strategy_comm5::StrategyComm5 as future_backtest_sdk::plugin::StrategyPlugin>::on_signal+0x2b0d>
   41e06:	48 8d bc 24 90 01 00 	lea    0x190(%rsp),%rdi
   41e0d:	00 
   41e0e:	48 8d 54 24 58       	lea    0x58(%rsp),%rdx
   41e13:	4c 89 f6             	mov    %r14,%rsi
   41e16:	e8 15 18 03 00       	call   73630 <hashbrown::map::HashMap<K,V,S,A>::remove>
   41e1b:	89 e9                	mov    %ebp,%ecx
   41e1d:	f2 0f 10 94 24 88 04 	movsd  0x488(%rsp),%xmm2
   41e24:	00 00 
   41e26:	80 7c 24 70 02       	cmpb   $0x2,0x70(%rsp)
   41e2b:	74 15                	je     41e42 <<strategy_comm5::StrategyComm5 as future_backtest_sdk::plugin::StrategyPlugin>::on_signal+0x2b32>
   41e2d:	83 bc 24 d0 02 00 00 	cmpl   $0x1,0x2d0(%rsp)
   41e34:	01 
   41e35:	75 1e                	jne    41e55 <<strategy_comm5::StrategyComm5 as future_backtest_sdk::plugin::StrategyPlugin>::on_signal+0x2b45>
   41e37:	f2 0f 10 8c 24 08 0e 	movsd  0xe08(%rsp),%xmm1
   41e3e:	00 00 
   41e40:	eb 09                	jmp    41e4b <<strategy_comm5::StrategyComm5 as future_backtest_sdk::plugin::StrategyPlugin>::on_signal+0x2b3b>
   41e42:	f2 0f 10 8c 24 10 0e 	movsd  0xe10(%rsp),%xmm1
   41e49:	00 00 
   41e4b:	66 0f 57 c0          	xorpd  %xmm0,%xmm0
   41e4f:	66 0f 2e c8          	ucomisd %xmm0,%xmm1
   41e53:	77 08                	ja     41e5d <<strategy_comm5::StrategyComm5 as future_backtest_sdk::plugin::StrategyPlugin>::on_signal+0x2b4d>
   41e55:	f2 0f 10 0d 0b 45 fd 	movsd  -0x2baf5(%rip),%xmm1        # 16368 <GCC_except_table128+0xe4>
   41e5c:	ff 
   41e5d:	4c 8d b4 24 f8 07 00 	lea    0x7f8(%rsp),%r14
   41e64:	00 
   41e65:	44 22 a4 24 20 01 00 	and    0x120(%rsp),%r12b
   41e6c:	00 
   41e6d:	f2 0f 10 05 6b 45 fd 	movsd  -0x2ba95(%rip),%xmm0        # 163e0 <GCC_except_table128+0x15c>
   41e74:	ff 
   41e75:	66 0f 28 d8          	movapd %xmm0,%xmm3
   41e79:	f2 0f c2 da 01       	cmpltsd %xmm2,%xmm3
   41e7e:	66 0f 28 e3          	movapd %xmm3,%xmm4
   41e82:	66 0f 54 e2          	andpd  %xmm2,%xmm4
   41e86:	f2 0f 10 2d da 44 fd 	movsd  -0x2bb26(%rip),%xmm5        # 16368 <GCC_except_table128+0xe4>
   41e8d:	ff 
   41e8e:	66 0f 55 dd          	andnpd %xmm5,%xmm3
   41e92:	66 0f 56 dc          	orpd   %xmm4,%xmm3
   41e96:	f2 0f 10 a4 24 18 0d 	movsd  0xd18(%rsp),%xmm4
   41e9d:	00 00 
   41e9f:	f2 0f 59 d9          	mulsd  %xmm1,%xmm3
   41ea3:	f2 0f 59 dc          	mulsd  %xmm4,%xmm3
   41ea7:	66 0f 57 c9          	xorpd  %xmm1,%xmm1
   41eab:	66 0f 28 ec          	movapd %xmm4,%xmm5
   41eaf:	f2 0f c2 e9 01       	cmpltsd %xmm1,%xmm5
   41eb4:	66 0f 28 cd          	movapd %xmm5,%xmm1
   41eb8:	66 0f 55 cb          	andnpd %xmm3,%xmm1
   41ebc:	66 0f 54 ec          	andpd  %xmm4,%xmm5
   41ec0:	66 0f 56 e9          	orpd   %xmm1,%xmm5
   41ec4:	0f b6 c1             	movzbl %cl,%eax
   41ec7:	48 8d 0d 12 4e fd ff 	lea    -0x2b1ee(%rip),%rcx        # 16ce0 <anon.8d7226ba1ba94417efa9e0a1e98803de.1.llvm.16032588982719308145+0x130>
   41ece:	48 63 04 81          	movslq (%rcx,%rax,4),%rax
   41ed2:	48 01 c8             	add    %rcx,%rax
   41ed5:	ff e0                	jmp    *%rax
   41ed7:	66 0f 29 6c 24 70    	movapd %xmm5,0x70(%rsp)
   41edd:	66 0f 2e c2          	ucomisd %xmm2,%xmm0
   41ee1:	72 0e                	jb     41ef1 <<strategy_comm5::StrategyComm5 as future_backtest_sdk::plugin::StrategyPlugin>::on_signal+0x2be1>
   41ee3:	80 bc 24 1d 0e 00 00 	cmpb   $0x0,0xe1d(%rsp)
   41eea:	00 
   41eeb:	0f 85 0f 08 00 00    	jne    42700 <<strategy_comm5::StrategyComm5 as future_backtest_sdk::plugin::StrategyPlugin>::on_signal+0x33f0>
   41ef1:	f2 0f 10 05 7f 45 fd 	movsd  -0x2ba81(%rip),%xmm0        # 16478 <GCC_except_table128+0x1f4>
   41ef8:	ff 
   41ef9:	66 0f 2e 84 24 80 01 	ucomisd 0x180(%rsp),%xmm0
   41f00:	00 00 
   41f02:	76 20                	jbe    41f24 <<strategy_comm5::StrategyComm5 as future_backtest_sdk::plugin::StrategyPlugin>::on_signal+0x2c14>
   41f04:	f2 0f 10 84 24 e0 0c 	movsd  0xce0(%rsp),%xmm0
   41f0b:	00 00 
   41f0d:	f2 0f 5e 05 5b 45 fd 	divsd  -0x2baa5(%rip),%xmm0        # 16470 <GCC_except_table128+0x1ec>
   41f14:	ff 
   41f15:	66 0f 2e 84 24 38 01 	ucomisd 0x138(%rsp),%xmm0
   41f1c:	00 00 
   41f1e:	0f 87 dc 07 00 00    	ja     42700 <<strategy_comm5::StrategyComm5 as future_backtest_sdk::plugin::StrategyPlugin>::on_signal+0x33f0>
   41f24:	f2 0f 10 84 24 a8 03 	movsd  0x3a8(%rsp),%xmm0
   41f2b:	00 00 
   41f2d:	f2 0f 10 8c 24 b8 03 	movsd  0x3b8(%rsp),%xmm1
   41f34:	00 00 
   41f36:	48 8d bc 24 b8 08 00 	lea    0x8b8(%rsp),%rdi
   41f3d:	00 
   41f3e:	48 8b b4 24 d0 02 00 	mov    0x2d0(%rsp),%rsi
   41f45:	00 
   41f46:	e8 55 95 ff ff       	call   3b4a0 <strategy_comm5::eff_amts>
   41f4b:	f2 0f 10 a4 24 a0 03 	movsd  0x3a0(%rsp),%xmm4
   41f52:	00 00 
   41f54:	f2 0f 10 b4 24 b0 03 	movsd  0x3b0(%rsp),%xmm6
   41f5b:	00 00 
   41f5d:	66 0f 57 d2          	xorpd  %xmm2,%xmm2
   41f61:	66 0f 28 ec          	movapd %xmm4,%xmm5
   41f65:	f2 0f c2 ea 01       	cmpltsd %xmm2,%xmm5
   41f6a:	f2 0f 10 1d 8e 43 fd 	movsd  -0x2bc72(%rip),%xmm3        # 16300 <GCC_except_table128+0x7c>
   41f71:	ff 
   41f72:	66 0f 28 fd          	movapd %xmm5,%xmm7
   41f76:	66 0f 54 fb          	andpd  %xmm3,%xmm7
   41f7a:	66 0f 55 ec          	andnpd %xmm4,%xmm5
   41f7e:	66 0f 56 ef          	orpd   %xmm7,%xmm5
   41f82:	66 44 0f 28 8c 24 80 	movapd 0x180(%rsp),%xmm9
   41f89:	01 00 00 
   41f8c:	66 41 0f 28 e1       	movapd %xmm9,%xmm4
   41f91:	f2 0f 5f e2          	maxsd  %xmm2,%xmm4
   41f95:	f2 0f 5c ec          	subsd  %xmm4,%xmm5
   41f99:	66 0f 28 f8          	movapd %xmm0,%xmm7
   41f9d:	f2 0f c2 fa 01       	cmpltsd %xmm2,%xmm7
   41fa2:	66 44 0f 28 c7       	movapd %xmm7,%xmm8
   41fa7:	66 44 0f 55 c0       	andnpd %xmm0,%xmm8
   41fac:	66 0f 54 fb          	andpd  %xmm3,%xmm7
   41fb0:	66 41 0f 56 f8       	orpd   %xmm8,%xmm7
   41fb5:	f2 44 0f 10 94 24 00 	movsd  0x400(%rsp),%xmm10
   41fbc:	04 00 00 
   41fbf:	f2 41 0f 5e fa       	divsd  %xmm10,%xmm7
   41fc4:	f2 44 0f 10 84 24 80 	movsd  0x80(%rsp),%xmm8
   41fcb:	00 00 00 
   41fce:	f2 41 0f 5e f8       	divsd  %xmm8,%xmm7
   41fd3:	f2 0f 5c fc          	subsd  %xmm4,%xmm7
   41fd7:	66 0f 28 e5          	movapd %xmm5,%xmm4
   41fdb:	f2 0f c2 e5 03       	cmpunordsd %xmm5,%xmm4
   41fe0:	66 0f 28 c4          	movapd %xmm4,%xmm0
   41fe4:	66 0f 54 c7          	andpd  %xmm7,%xmm0
   41fe8:	f2 0f 5d fd          	minsd  %xmm5,%xmm7
   41fec:	66 0f 55 e7          	andnpd %xmm7,%xmm4
   41ff0:	66 0f 56 e0          	orpd   %xmm0,%xmm4
   41ff4:	66 0f 28 ee          	movapd %xmm6,%xmm5
   41ff8:	f2 0f c2 ea 01       	cmpltsd %xmm2,%xmm5
   41ffd:	66 0f 28 c5          	movapd %xmm5,%xmm0
   42001:	66 0f 54 c3          	andpd  %xmm3,%xmm0
   42005:	66 0f 55 ee          	andnpd %xmm6,%xmm5
   42009:	66 0f 56 e8          	orpd   %xmm0,%xmm5
   4200d:	66 0f 28 c1          	movapd %xmm1,%xmm0
   42011:	f2 0f c2 c2 01       	cmpltsd %xmm2,%xmm0
   42016:	66 0f 28 f0          	movapd %xmm0,%xmm6
   4201a:	66 0f 55 f1          	andnpd %xmm1,%xmm6
   4201e:	66 0f 54 c3          	andpd  %xmm3,%xmm0
   42022:	66 0f 56 c6          	orpd   %xmm6,%xmm0
   42026:	f2 41 0f 5e c2       	divsd  %xmm10,%xmm0
   4202b:	f2 41 0f 5e c0       	divsd  %xmm8,%xmm0
   42030:	f2 0f 10 3d 30 43 fd 	movsd  -0x2bcd0(%rip),%xmm7        # 16368 <GCC_except_table128+0xe4>
   42037:	ff 
   42038:	f2 0f 5f c7          	maxsd  %xmm7,%xmm0
   4203c:	f2 0f 5d e8          	minsd  %xmm0,%xmm5
   42040:	f2 0f 10 8c 24 10 0d 	movsd  0xd10(%rsp),%xmm1
   42047:	00 00 
   42049:	66 0f 28 c1          	movapd %xmm1,%xmm0
   4204d:	f2 0f c2 c2 01       	cmpltsd %xmm2,%xmm0
   42052:	66 0f 28 f0          	movapd %xmm0,%xmm6
   42056:	66 0f 54 f3          	andpd  %xmm3,%xmm6
   4205a:	66 0f 55 c1          	andnpd %xmm1,%xmm0
   4205e:	66 0f 56 c6          	orpd   %xmm6,%xmm0
   42062:	66 0f 28 74 24 70    	movapd 0x70(%rsp),%xmm6
   42068:	66 0f 28 ce          	movapd %xmm6,%xmm1
   4206c:	f2 0f c2 ca 01       	cmpltsd %xmm2,%xmm1
   42071:	66 0f 54 d9          	andpd  %xmm1,%xmm3
   42075:	66 0f 55 ce          	andnpd %xmm6,%xmm1
   42079:	66 0f 56 cb          	orpd   %xmm3,%xmm1
   4207d:	f2 41 0f 5e ca       	divsd  %xmm10,%xmm1
   42082:	f2 41 0f 5e c8       	divsd  %xmm8,%xmm1
   42087:	f2 0f 5f cf          	maxsd  %xmm7,%xmm1
   4208b:	f2 0f 5d c1          	minsd  %xmm1,%xmm0
   4208f:	f2 44 0f 5d ca       	minsd  %xmm2,%xmm9
   42094:	66 44 0f 57 0d e3 4a 	xorpd  -0x2b51d(%rip),%xmm9        # 16b80 <anon.2bc08f40ad58cb635718c2f09dbb11ab.6.llvm.4096812584824358744+0x2a0>
   4209b:	fd ff 
   4209d:	f2 0f 5d e5          	minsd  %xmm5,%xmm4
   420a1:	f2 41 0f 5d c1       	minsd  %xmm9,%xmm0
   420a6:	f2 0f 58 c4          	addsd  %xmm4,%xmm0
   420aa:	f2 0f 5f c2          	maxsd  %xmm2,%xmm0
   420ae:	f2 0f 10 8c 24 40 01 	movsd  0x140(%rsp),%xmm1
   420b5:	00 00 
   420b7:	bf 01 00 00 00       	mov    $0x1,%edi
   420bc:	ff 15 06 1e 0c 00    	call   *0xc1e06(%rip)        # 103ec8 <_DYNAMIC+0x468>
   420c2:	f2 0f 11 44 24 70    	movsd  %xmm0,0x70(%rsp)
   420c8:	45 84 e4             	test   %r12b,%r12b
   420cb:	0f 84 a0 0b 00 00    	je     42c71 <<strategy_comm5::StrategyComm5 as future_backtest_sdk::plugin::StrategyPlugin>::on_signal+0x3961>
   420d1:	f2 0f 10 a4 24 80 0d 	movsd  0xd80(%rsp),%xmm4
   420d8:	00 00 
   420da:	f2 0f 10 8c 24 20 03 	movsd  0x320(%rsp),%xmm1
   420e1:	00 00 
   420e3:	f2 0f 59 e1          	mulsd  %xmm1,%xmm4
   420e7:	f2 0f 58 a4 24 b0 00 	addsd  0xb0(%rsp),%xmm4
   420ee:	00 00 
   420f0:	f2 0f 10 94 24 80 00 	movsd  0x80(%rsp),%xmm2
   420f7:	00 00 
   420f9:	f2 0f 5c d1          	subsd  %xmm1,%xmm2
   420fd:	66 0f 28 c4          	movapd %xmm4,%xmm0
   42101:	f2 0f c2 c4 03       	cmpunordsd %xmm4,%xmm0
   42106:	66 0f 28 d8          	movapd %xmm0,%xmm3
   4210a:	66 0f 54 da          	andpd  %xmm2,%xmm3
   4210e:	f2 0f 5d d4          	minsd  %xmm4,%xmm2
   42112:	66 0f 55 c2          	andnpd %xmm2,%xmm0
   42116:	66 0f 56 c3          	orpd   %xmm3,%xmm0
   4211a:	bb 01 00 00 00       	mov    $0x1,%ebx
   4211f:	bf 01 00 00 00       	mov    $0x1,%edi
   42124:	ff 15 9e 1d 0c 00    	call   *0xc1d9e(%rip)        # 103ec8 <_DYNAMIC+0x468>
   4212a:	f2 0f 11 44 24 20    	movsd  %xmm0,0x20(%rsp)
   42130:	48 8b 84 24 88 0d 00 	mov    0xd88(%rsp),%rax
   42137:	00 
   42138:	48 83 f8 04          	cmp    $0x4,%rax
   4213c:	b9 04 00 00 00       	mov    $0x4,%ecx
   42141:	48 0f 42 c8          	cmovb  %rax,%rcx
   42145:	48 85 c0             	test   %rax,%rax
   42148:	f2 0f 10 8c 24 48 08 	movsd  0x848(%rsp),%xmm1
   4214f:	00 00 
   42151:	0f 4e cb             	cmovle %ebx,%ecx
   42154:	c1 e1 04             	shl    $0x4,%ecx
   42157:	f2 0f 11 8c 24 d0 00 	movsd  %xmm1,0xd0(%rsp)
   4215e:	00 00 
   42160:	f2 41 0f 5c 4c 0e 50 	subsd  0x50(%r14,%rcx,1),%xmm1
   42167:	48 c7 84 24 90 01 00 	movq   $0x0,0x190(%rsp)
   4216e:	00 00 00 00 00 
   42173:	48 c7 84 24 98 01 00 	movq   $0x8,0x198(%rsp)
   4217a:	00 08 00 00 00 
   4217f:	48 c7 84 24 a0 01 00 	movq   $0x0,0x1a0(%rsp)
   42186:	00 00 00 00 00 
   4218b:	48 8b 74 24 60       	mov    0x60(%rsp),%rsi
   42190:	48 8b 54 24 68       	mov    0x68(%rsp),%rdx
   42195:	4c 8d 84 24 90 01 00 	lea    0x190(%rsp),%r8
   4219c:	00 
   4219d:	48 8b 7c 24 18       	mov    0x18(%rsp),%rdi
   421a2:	b9 01 00 00 00       	mov    $0x1,%ecx
   421a7:	f2 0f 10 44 24 20    	movsd  0x20(%rsp),%xmm0
   421ad:	e8 3e 94 ff ff       	call   3b5f0 <strategy_comm5::cancel_order_use_range>
   421b2:	49 89 c5             	mov    %rax,%r13
   421b5:	48 85 c0             	test   %rax,%rax
   421b8:	0f 85 2b 08 00 00    	jne    429e9 <<strategy_comm5::StrategyComm5 as future_backtest_sdk::plugin::StrategyPlugin>::on_signal+0x36d9>
   421be:	48 8b 74 24 60       	mov    0x60(%rsp),%rsi
   421c3:	48 8b 54 24 68       	mov    0x68(%rsp),%rdx
   421c8:	48 8b 8c 24 98 01 00 	mov    0x198(%rsp),%rcx
   421cf:	00 
   421d0:	4c 8b 84 24 a0 01 00 	mov    0x1a0(%rsp),%r8
   421d7:	00 
   421d8:	48 8b 7c 24 18       	mov    0x18(%rsp),%rdi
   421dd:	e8 6e 9c ff ff       	call   3be50 <strategy_comm5::live_pending_counts>
   421e2:	66 0f 57 c0          	xorpd  %xmm0,%xmm0
   421e6:	66 0f 29 44 24 40    	movapd %xmm0,0x40(%rsp)
   421ec:	48 85 c0             	test   %rax,%rax
   421ef:	0f 85 2c 1e 00 00    	jne    44021 <<strategy_comm5::StrategyComm5 as future_backtest_sdk::plugin::StrategyPlugin>::on_signal+0x4d11>
   421f5:	66 0f 57 c9          	xorpd  %xmm1,%xmm1
   421f9:	f2 0f 10 84 24 d0 00 	movsd  0xd0(%rsp),%xmm0
   42200:	00 00 
   42202:	66 0f 2e c1          	ucomisd %xmm1,%xmm0
   42206:	66 0f 57 e4          	xorpd  %xmm4,%xmm4
   4220a:	f2 0f c2 e0 01       	cmpltsd %xmm0,%xmm4
   4220f:	f2 0f 10 05 51 41 fd 	movsd  -0x2beaf(%rip),%xmm0        # 16368 <GCC_except_table128+0xe4>
   42216:	ff 
   42217:	66 0f 54 e0          	andpd  %xmm0,%xmm4
   4221b:	0f 87 d7 1c 00 00    	ja     43ef8 <<strategy_comm5::StrategyComm5 as future_backtest_sdk::plugin::StrategyPlugin>::on_signal+0x4be8>
   42221:	66 0f 57 c0          	xorpd  %xmm0,%xmm0
   42225:	e9 db 1c 00 00       	jmp    43f05 <<strategy_comm5::StrategyComm5 as future_backtest_sdk::plugin::StrategyPlugin>::on_signal+0x4bf5>
   4222a:	f2 0f 10 05 46 42 fd 	movsd  -0x2bdba(%rip),%xmm0        # 16478 <GCC_except_table128+0x1f4>
   42231:	ff 
   42232:	66 0f 2e 84 24 80 01 	ucomisd 0x180(%rsp),%xmm0
   42239:	00 00 
   4223b:	76 20                	jbe    4225d <<strategy_comm5::StrategyComm5 as future_backtest_sdk::plugin::StrategyPlugin>::on_signal+0x2f4d>
   4223d:	f2 0f 10 84 24 e0 0c 	movsd  0xce0(%rsp),%xmm0
   42244:	00 00 
   42246:	f2 0f 5e 05 22 42 fd 	divsd  -0x2bdde(%rip),%xmm0        # 16470 <GCC_except_table128+0x1ec>
   4224d:	ff 
   4224e:	66 0f 2e 84 24 38 01 	ucomisd 0x138(%rsp),%xmm0
   42255:	00 00 
   42257:	0f 87 a3 04 00 00    	ja     42700 <<strategy_comm5::StrategyComm5 as future_backtest_sdk::plugin::StrategyPlugin>::on_signal+0x33f0>
   4225d:	66 0f 57 c9          	xorpd  %xmm1,%xmm1
   42261:	66 0f 2e 8c 24 80 01 	ucomisd 0x180(%rsp),%xmm1
   42268:	00 00 
   4226a:	0f 86 12 21 00 00    	jbe    44382 <<strategy_comm5::StrategyComm5 as future_backtest_sdk::plugin::StrategyPlugin>::on_signal+0x5072>
   42270:	f2 0f 10 84 24 10 0d 	movsd  0xd10(%rsp),%xmm0
   42277:	00 00 
   42279:	66 0f 28 d0          	movapd %xmm0,%xmm2
   4227d:	f2 0f c2 d1 01       	cmpltsd %xmm1,%xmm2
   42282:	f2 0f 10 1d 76 40 fd 	movsd  -0x2bf8a(%rip),%xmm3        # 16300 <GCC_except_table128+0x7c>
   42289:	ff 
   4228a:	66 0f 28 e2          	movapd %xmm2,%xmm4
   4228e:	66 0f 54 e3          	andpd  %xmm3,%xmm4
   42292:	66 0f 55 d0          	andnpd %xmm0,%xmm2
   42296:	66 0f 56 d4          	orpd   %xmm4,%xmm2
   4229a:	66 0f 28 e5          	movapd %xmm5,%xmm4
   4229e:	f2 0f c2 e1 01       	cmpltsd %xmm1,%xmm4
   422a3:	66 0f 54 dc          	andpd  %xmm4,%xmm3
   422a7:	66 0f 55 e5          	andnpd %xmm5,%xmm4
   422ab:	66 0f 56 e3          	orpd   %xmm3,%xmm4
   422af:	f2 0f 5e a4 24 00 04 	divsd  0x400(%rsp),%xmm4
   422b6:	00 00 
   422b8:	f2 0f 5e a4 24 80 00 	divsd  0x80(%rsp),%xmm4
   422bf:	00 00 
   422c1:	66 0f 28 c2          	movapd %xmm2,%xmm0
   422c5:	f2 0f c2 c2 03       	cmpunordsd %xmm2,%xmm0
   422ca:	66 0f 28 d8          	movapd %xmm0,%xmm3
   422ce:	66 0f 54 dc          	andpd  %xmm4,%xmm3
   422d2:	f2 0f 5d e2          	minsd  %xmm2,%xmm4
   422d6:	66 0f 55 c4          	andnpd %xmm4,%xmm0
   422da:	66 0f 56 c3          	orpd   %xmm3,%xmm0
   422de:	66 0f 28 94 24 80 01 	movapd 0x180(%rsp),%xmm2
   422e5:	00 00 
   422e7:	f2 0f 5d d1          	minsd  %xmm1,%xmm2
   422eb:	66 0f 57 15 8d 48 fd 	xorpd  -0x2b773(%rip),%xmm2        # 16b80 <anon.2bc08f40ad58cb635718c2f09dbb11ab.6.llvm.4096812584824358744+0x2a0>
   422f2:	ff 
   422f3:	f2 0f 5d c2          	minsd  %xmm2,%xmm0
   422f7:	f2 0f 10 8c 24 40 01 	movsd  0x140(%rsp),%xmm1
   422fe:	00 00 
   42300:	bf 01 00 00 00       	mov    $0x1,%edi
   42305:	ff 15 bd 1b 0c 00    	call   *0xc1bbd(%rip)        # 103ec8 <_DYNAMIC+0x468>
   4230b:	f2 0f 11 44 24 70    	movsd  %xmm0,0x70(%rsp)
   42311:	45 84 e4             	test   %r12b,%r12b
   42314:	0f 84 e1 06 00 00    	je     429fb <<strategy_comm5::StrategyComm5 as future_backtest_sdk::plugin::StrategyPlugin>::on_signal+0x36eb>
   4231a:	f2 0f 10 a4 24 80 0d 	movsd  0xd80(%rsp),%xmm4
   42321:	00 00 
   42323:	f2 0f 10 8c 24 20 03 	movsd  0x320(%rsp),%xmm1
   4232a:	00 00 
   4232c:	f2 0f 59 e1          	mulsd  %xmm1,%xmm4
   42330:	f2 0f 58 a4 24 b0 00 	addsd  0xb0(%rsp),%xmm4
   42337:	00 00 
   42339:	f2 0f 10 94 24 80 00 	movsd  0x80(%rsp),%xmm2
   42340:	00 00 
   42342:	f2 0f 5c d1          	subsd  %xmm1,%xmm2
   42346:	66 0f 28 c4          	movapd %xmm4,%xmm0
   4234a:	f2 0f c2 c4 03       	cmpunordsd %xmm4,%xmm0
   4234f:	66 0f 28 d8          	movapd %xmm0,%xmm3
   42353:	66 0f 54 da          	andpd  %xmm2,%xmm3
   42357:	f2 0f 5d d4          	minsd  %xmm4,%xmm2
   4235b:	66 0f 55 c2          	andnpd %xmm2,%xmm0
   4235f:	66 0f 56 c3          	orpd   %xmm3,%xmm0
   42363:	bb 01 00 00 00       	mov    $0x1,%ebx
   42368:	bf 01 00 00 00       	mov    $0x1,%edi
   4236d:	ff 15 55 1b 0c 00    	call   *0xc1b55(%rip)        # 103ec8 <_DYNAMIC+0x468>
   42373:	f2 0f 11 44 24 20    	movsd  %xmm0,0x20(%rsp)
   42379:	48 8b 84 24 88 0d 00 	mov    0xd88(%rsp),%rax
   42380:	00 
   42381:	48 83 f8 04          	cmp    $0x4,%rax
   42385:	b9 04 00 00 00       	mov    $0x4,%ecx
   4238a:	48 0f 42 c8          	cmovb  %rax,%rcx
   4238e:	48 85 c0             	test   %rax,%rax
   42391:	f2 0f 10 8c 24 48 08 	movsd  0x848(%rsp),%xmm1
   42398:	00 00 
   4239a:	0f 4e cb             	cmovle %ebx,%ecx
   4239d:	c1 e1 04             	shl    $0x4,%ecx
   423a0:	f2 0f 11 8c 24 d0 00 	movsd  %xmm1,0xd0(%rsp)
   423a7:	00 00 
   423a9:	f2 41 0f 5c 4c 0e 50 	subsd  0x50(%r14,%rcx,1),%xmm1
   423b0:	48 c7 84 24 90 01 00 	movq   $0x0,0x190(%rsp)
   423b7:	00 00 00 00 00 
   423bc:	48 c7 84 24 98 01 00 	movq   $0x8,0x198(%rsp)
   423c3:	00 08 00 00 00 
   423c8:	48 c7 84 24 a0 01 00 	movq   $0x0,0x1a0(%rsp)
   423cf:	00 00 00 00 00 
   423d4:	48 8b 74 24 60       	mov    0x60(%rsp),%rsi
   423d9:	48 8b 54 24 68       	mov    0x68(%rsp),%rdx
   423de:	4c 8d 84 24 90 01 00 	lea    0x190(%rsp),%r8
   423e5:	00 
   423e6:	48 8b 7c 24 18       	mov    0x18(%rsp),%rdi
   423eb:	b9 01 00 00 00       	mov    $0x1,%ecx
   423f0:	f2 0f 10 44 24 20    	movsd  0x20(%rsp),%xmm0
   423f6:	e8 f5 91 ff ff       	call   3b5f0 <strategy_comm5::cancel_order_use_range>
   423fb:	49 89 c5             	mov    %rax,%r13
   423fe:	48 85 c0             	test   %rax,%rax
   42401:	0f 85 e2 05 00 00    	jne    429e9 <<strategy_comm5::StrategyComm5 as future_backtest_sdk::plugin::StrategyPlugin>::on_signal+0x36d9>
   42407:	48 8b 74 24 60       	mov    0x60(%rsp),%rsi
   4240c:	48 8b 54 24 68       	mov    0x68(%rsp),%rdx
   42411:	48 8b 8c 24 98 01 00 	mov    0x198(%rsp),%rcx
   42418:	00 
   42419:	4c 8b 84 24 a0 01 00 	mov    0x1a0(%rsp),%r8
   42420:	00 
   42421:	48 8b 7c 24 18       	mov    0x18(%rsp),%rdi
   42426:	e8 25 9a ff ff       	call   3be50 <strategy_comm5::live_pending_counts>
   4242b:	66 0f 57 c0          	xorpd  %xmm0,%xmm0
   4242f:	66 0f 29 44 24 40    	movapd %xmm0,0x40(%rsp)
   42435:	48 85 c0             	test   %rax,%rax
   42438:	0f 85 ef 0f 00 00    	jne    4342d <<strategy_comm5::StrategyComm5 as future_backtest_sdk::plugin::StrategyPlugin>::on_signal+0x411d>
   4243e:	66 0f 57 c9          	xorpd  %xmm1,%xmm1
   42442:	f2 0f 10 84 24 d0 00 	movsd  0xd0(%rsp),%xmm0
   42449:	00 00 
   4244b:	66 0f 2e c1          	ucomisd %xmm1,%xmm0
   4244f:	66 0f 57 e4          	xorpd  %xmm4,%xmm4
   42453:	f2 0f c2 e0 01       	cmpltsd %xmm0,%xmm4
   42458:	f2 0f 10 15 08 3f fd 	movsd  -0x2c0f8(%rip),%xmm2        # 16368 <GCC_except_table128+0xe4>
   4245f:	ff 
   42460:	66 0f 54 e2          	andpd  %xmm2,%xmm4
   42464:	0f 87 37 0d 00 00    	ja     431a1 <<strategy_comm5::StrategyComm5 as future_backtest_sdk::plugin::StrategyPlugin>::on_signal+0x3e91>
   4246a:	66 0f 57 c0          	xorpd  %xmm0,%xmm0
   4246e:	e9 3b 0d 00 00       	jmp    431ae <<strategy_comm5::StrategyComm5 as future_backtest_sdk::plugin::StrategyPlugin>::on_signal+0x3e9e>
   42473:	66 0f 28 84 24 80 01 	movapd 0x180(%rsp),%xmm0
   4247a:	00 00 
   4247c:	66 0f 2e 05 c4 3e fd 	ucomisd -0x2c13c(%rip),%xmm0        # 16348 <GCC_except_table128+0xc4>
   42483:	ff 
   42484:	76 20                	jbe    424a6 <<strategy_comm5::StrategyComm5 as future_backtest_sdk::plugin::StrategyPlugin>::on_signal+0x3196>
   42486:	f2 0f 10 84 24 e0 0c 	movsd  0xce0(%rsp),%xmm0
   4248d:	00 00 
   4248f:	f2 0f 5e 05 d9 3f fd 	divsd  -0x2c027(%rip),%xmm0        # 16470 <GCC_except_table128+0x1ec>
   42496:	ff 
   42497:	66 0f 2e 84 24 38 01 	ucomisd 0x138(%rsp),%xmm0
   4249e:	00 00 
   424a0:	0f 87 5a 02 00 00    	ja     42700 <<strategy_comm5::StrategyComm5 as future_backtest_sdk::plugin::StrategyPlugin>::on_signal+0x33f0>
   424a6:	66 0f 57 c9          	xorpd  %xmm1,%xmm1
   424aa:	66 0f 28 84 24 80 01 	movapd 0x180(%rsp),%xmm0
   424b1:	00 00 
   424b3:	66 0f 2e c1          	ucomisd %xmm1,%xmm0
   424b7:	0f 86 c5 1e 00 00    	jbe    44382 <<strategy_comm5::StrategyComm5 as future_backtest_sdk::plugin::StrategyPlugin>::on_signal+0x5072>
   424bd:	66 0f 28 f5          	movapd %xmm5,%xmm6
   424c1:	f2 0f 10 9c 24 10 0d 	movsd  0xd10(%rsp),%xmm3
   424c8:	00 00 
   424ca:	66 0f 28 15 ae 46 fd 	movapd -0x2b952(%rip),%xmm2        # 16b80 <anon.2bc08f40ad58cb635718c2f09dbb11ab.6.llvm.4096812584824358744+0x2a0>
   424d1:	ff 
   424d2:	66 0f 28 c3          	movapd %xmm3,%xmm0
   424d6:	66 0f 57 c2          	xorpd  %xmm2,%xmm0
   424da:	f2 0f c2 d8 01       	cmpltsd %xmm0,%xmm3
   424df:	66 0f 28 e3          	movapd %xmm3,%xmm4
   424e3:	66 0f 55 e0          	andnpd %xmm0,%xmm4
   424e7:	f2 0f 10 05 21 3e fd 	movsd  -0x2c1df(%rip),%xmm0        # 16310 <GCC_except_table128+0x8c>
   424ee:	ff 
   424ef:	66 0f 54 d8          	andpd  %xmm0,%xmm3
   424f3:	66 0f 56 dc          	orpd   %xmm4,%xmm3
   424f7:	66 0f 28 e5          	movapd %xmm5,%xmm4
   424fb:	66 0f 57 e2          	xorpd  %xmm2,%xmm4
   424ff:	f2 0f c2 f4 01       	cmpltsd %xmm4,%xmm6
   42504:	66 0f 28 ee          	movapd %xmm6,%xmm5
   42508:	66 0f 55 ec          	andnpd %xmm4,%xmm5
   4250c:	66 0f 54 f0          	andpd  %xmm0,%xmm6
   42510:	66 0f 56 f5          	orpd   %xmm5,%xmm6
   42514:	f2 0f 5e b4 24 00 04 	divsd  0x400(%rsp),%xmm6
   4251b:	00 00 
   4251d:	f2 0f 5e b4 24 b0 00 	divsd  0xb0(%rsp),%xmm6
   42524:	00 00 
   42526:	66 0f 28 c3          	movapd %xmm3,%xmm0
   4252a:	f2 0f c2 c3 03       	cmpunordsd %xmm3,%xmm0
   4252f:	66 0f 28 e0          	movapd %xmm0,%xmm4
   42533:	66 0f 54 e6          	andpd  %xmm6,%xmm4
   42537:	f2 0f 5f f3          	maxsd  %xmm3,%xmm6
   4253b:	66 0f 55 c6          	andnpd %xmm6,%xmm0
   4253f:	66 0f 56 c4          	orpd   %xmm4,%xmm0
   42543:	66 0f 28 9c 24 80 01 	movapd 0x180(%rsp),%xmm3
   4254a:	00 00 
   4254c:	f2 0f 5f d9          	maxsd  %xmm1,%xmm3
   42550:	66 0f 57 da          	xorpd  %xmm2,%xmm3
   42554:	f2 0f 5f c3          	maxsd  %xmm3,%xmm0
   42558:	f2 0f 10 8c 24 40 01 	movsd  0x140(%rsp),%xmm1
   4255f:	00 00 
   42561:	bf 01 00 00 00       	mov    $0x1,%edi
   42566:	ff 15 5c 19 0c 00    	call   *0xc195c(%rip)        # 103ec8 <_DYNAMIC+0x468>
   4256c:	f2 0f 11 44 24 70    	movsd  %xmm0,0x70(%rsp)
   42572:	31 ed                	xor    %ebp,%ebp
   42574:	80 bc 24 e0 04 00 00 	cmpb   $0x0,0x4e0(%rsp)
   4257b:	00 
   4257c:	0f 95 84 24 d0 00 00 	setne  0xd0(%rsp)
   42583:	00 
   42584:	45 84 e4             	test   %r12b,%r12b
   42587:	0f 84 40 05 00 00    	je     42acd <<strategy_comm5::StrategyComm5 as future_backtest_sdk::plugin::StrategyPlugin>::on_signal+0x37bd>
   4258d:	f2 0f 10 84 24 80 0d 	movsd  0xd80(%rsp),%xmm0
   42594:	00 00 
   42596:	f2 0f 10 8c 24 20 03 	movsd  0x320(%rsp),%xmm1
   4259d:	00 00 
   4259f:	f2 0f 59 c1          	mulsd  %xmm1,%xmm0
   425a3:	f2 0f 10 a4 24 80 00 	movsd  0x80(%rsp),%xmm4
   425aa:	00 00 
   425ac:	f2 0f 5c e0          	subsd  %xmm0,%xmm4
   425b0:	66 0f 28 d1          	movapd %xmm1,%xmm2
   425b4:	f2 0f 58 94 24 b0 00 	addsd  0xb0(%rsp),%xmm2
   425bb:	00 00 
   425bd:	66 0f 28 c4          	movapd %xmm4,%xmm0
   425c1:	f2 0f c2 c4 03       	cmpunordsd %xmm4,%xmm0
   425c6:	66 0f 28 d8          	movapd %xmm0,%xmm3
   425ca:	66 0f 54 da          	andpd  %xmm2,%xmm3
   425ce:	f2 0f 5f d4          	maxsd  %xmm4,%xmm2
   425d2:	66 0f 55 c2          	andnpd %xmm2,%xmm0
   425d6:	66 0f 56 c3          	orpd   %xmm3,%xmm0
   425da:	bb 01 00 00 00       	mov    $0x1,%ebx
   425df:	bf 01 00 00 00       	mov    $0x1,%edi
   425e4:	ff 15 de 18 0c 00    	call   *0xc18de(%rip)        # 103ec8 <_DYNAMIC+0x468>
   425ea:	f2 0f 11 44 24 20    	movsd  %xmm0,0x20(%rsp)
   425f0:	48 8b 84 24 88 0d 00 	mov    0xd88(%rsp),%rax
   425f7:	00 
   425f8:	48 83 f8 04          	cmp    $0x4,%rax
   425fc:	b9 04 00 00 00       	mov    $0x4,%ecx
   42601:	48 0f 42 c8          	cmovb  %rax,%rcx
   42605:	48 85 c0             	test   %rax,%rax
   42608:	0f 4e cb             	cmovle %ebx,%ecx
   4260b:	c1 e1 04             	shl    $0x4,%ecx
   4260e:	f2 41 0f 10 0c 0e    	movsd  (%r14,%rcx,1),%xmm1
   42614:	f2 0f 10 84 24 f8 07 	movsd  0x7f8(%rsp),%xmm0
   4261b:	00 00 
   4261d:	f2 0f 11 84 24 20 01 	movsd  %xmm0,0x120(%rsp)
   42624:	00 00 
   42626:	f2 0f 5c c8          	subsd  %xmm0,%xmm1
   4262a:	48 c7 84 24 90 01 00 	movq   $0x0,0x190(%rsp)
   42631:	00 00 00 00 00 
   42636:	48 c7 84 24 98 01 00 	movq   $0x8,0x198(%rsp)
   4263d:	00 08 00 00 00 
   42642:	48 c7 84 24 a0 01 00 	movq   $0x0,0x1a0(%rsp)
   42649:	00 00 00 00 00 
   4264e:	48 8b 74 24 60       	mov    0x60(%rsp),%rsi
   42653:	48 8b 54 24 68       	mov    0x68(%rsp),%rdx
   42658:	4c 8d 84 24 90 01 00 	lea    0x190(%rsp),%r8
   4265f:	00 
   42660:	48 8b 7c 24 18       	mov    0x18(%rsp),%rdi
   42665:	31 c9                	xor    %ecx,%ecx
   42667:	f2 0f 10 44 24 20    	movsd  0x20(%rsp),%xmm0
   4266d:	e8 7e 8f ff ff       	call   3b5f0 <strategy_comm5::cancel_order_use_range>
   42672:	49 89 c5             	mov    %rax,%r13
   42675:	48 85 c0             	test   %rax,%rax
   42678:	0f 85 6b 03 00 00    	jne    429e9 <<strategy_comm5::StrategyComm5 as future_backtest_sdk::plugin::StrategyPlugin>::on_signal+0x36d9>
   4267e:	48 8b 74 24 60       	mov    0x60(%rsp),%rsi
   42683:	48 8b 54 24 68       	mov    0x68(%rsp),%rdx
   42688:	48 8b 8c 24 98 01 00 	mov    0x198(%rsp),%rcx
   4268f:	00 
   42690:	4c 8b 84 24 a0 01 00 	mov    0x1a0(%rsp),%r8
   42697:	00 
   42698:	48 8b 7c 24 18       	mov    0x18(%rsp),%rdi
   4269d:	e8 ae 97 ff ff       	call   3be50 <strategy_comm5::live_pending_counts>
   426a2:	66 0f 57 c0          	xorpd  %xmm0,%xmm0
   426a6:	66 0f 29 44 24 40    	movapd %xmm0,0x40(%rsp)
   426ac:	48 85 d2             	test   %rdx,%rdx
   426af:	0f 85 44 11 00 00    	jne    437f9 <<strategy_comm5::StrategyComm5 as future_backtest_sdk::plugin::StrategyPlugin>::on_signal+0x44e9>
   426b5:	66 0f 57 c9          	xorpd  %xmm1,%xmm1
   426b9:	f2 0f 10 84 24 20 01 	movsd  0x120(%rsp),%xmm0
   426c0:	00 00 
   426c2:	66 0f 2e c1          	ucomisd %xmm1,%xmm0
   426c6:	66 0f 57 e4          	xorpd  %xmm4,%xmm4
   426ca:	f2 0f c2 e0 01       	cmpltsd %xmm0,%xmm4
   426cf:	f2 0f 10 15 91 3c fd 	movsd  -0x2c36f(%rip),%xmm2        # 16368 <GCC_except_table128+0xe4>
   426d6:	ff 
   426d7:	66 0f 54 e2          	andpd  %xmm2,%xmm4
   426db:	0f 87 68 0b 00 00    	ja     43249 <<strategy_comm5::StrategyComm5 as future_backtest_sdk::plugin::StrategyPlugin>::on_signal+0x3f39>
   426e1:	66 0f 57 c0          	xorpd  %xmm0,%xmm0
   426e5:	e9 6c 0b 00 00       	jmp    43256 <<strategy_comm5::StrategyComm5 as future_backtest_sdk::plugin::StrategyPlugin>::on_signal+0x3f46>
   426ea:	66 0f 29 6c 24 70    	movapd %xmm5,0x70(%rsp)
   426f0:	66 0f 2e c2          	ucomisd %xmm2,%xmm0
   426f4:	72 12                	jb     42708 <<strategy_comm5::StrategyComm5 as future_backtest_sdk::plugin::StrategyPlugin>::on_signal+0x33f8>
   426f6:	80 bc 24 1d 0e 00 00 	cmpb   $0x0,0xe1d(%rsp)
   426fd:	00 
   426fe:	74 08                	je     42708 <<strategy_comm5::StrategyComm5 as future_backtest_sdk::plugin::StrategyPlugin>::on_signal+0x33f8>
   42700:	45 31 ed             	xor    %r13d,%r13d
   42703:	e9 b7 1b 00 00       	jmp    442bf <<strategy_comm5::StrategyComm5 as future_backtest_sdk::plugin::StrategyPlugin>::on_signal+0x4faf>
   42708:	66 0f 28 84 24 80 01 	movapd 0x180(%rsp),%xmm0
   4270f:	00 00 
   42711:	66 0f 2e 05 2f 3c fd 	ucomisd -0x2c3d1(%rip),%xmm0        # 16348 <GCC_except_table128+0xc4>
   42718:	ff 
   42719:	76 1c                	jbe    42737 <<strategy_comm5::StrategyComm5 as future_backtest_sdk::plugin::StrategyPlugin>::on_signal+0x3427>
   4271b:	f2 0f 10 84 24 e0 0c 	movsd  0xce0(%rsp),%xmm0
   42722:	00 00 
   42724:	f2 0f 5e 05 44 3d fd 	divsd  -0x2c2bc(%rip),%xmm0        # 16470 <GCC_except_table128+0x1ec>
   4272b:	ff 
   4272c:	66 0f 2e 84 24 38 01 	ucomisd 0x138(%rsp),%xmm0
   42733:	00 00 
   42735:	77 c9                	ja     42700 <<strategy_comm5::StrategyComm5 as future_backtest_sdk::plugin::StrategyPlugin>::on_signal+0x33f0>
   42737:	f2 0f 10 84 24 a8 03 	movsd  0x3a8(%rsp),%xmm0
   4273e:	00 00 
   42740:	f2 0f 10 8c 24 b8 03 	movsd  0x3b8(%rsp),%xmm1
   42747:	00 00 
   42749:	48 8d bc 24 b8 08 00 	lea    0x8b8(%rsp),%rdi
   42750:	00 
   42751:	48 8b b4 24 d0 02 00 	mov    0x2d0(%rsp),%rsi
   42758:	00 
   42759:	e8 42 8d ff ff       	call   3b4a0 <strategy_comm5::eff_amts>
   4275e:	66 0f 28 d0          	movapd %xmm0,%xmm2
   42762:	f2 0f 10 b4 24 a0 03 	movsd  0x3a0(%rsp),%xmm6
   42769:	00 00 
   4276b:	f2 0f 10 ac 24 b0 03 	movsd  0x3b0(%rsp),%xmm5
   42772:	00 00 
   42774:	66 0f 28 25 04 44 fd 	movapd -0x2bbfc(%rip),%xmm4        # 16b80 <anon.2bc08f40ad58cb635718c2f09dbb11ab.6.llvm.4096812584824358744+0x2a0>
   4277b:	ff 
   4277c:	66 0f 28 c6          	movapd %xmm6,%xmm0
   42780:	66 0f 57 c4          	xorpd  %xmm4,%xmm0
   42784:	f2 0f c2 f0 01       	cmpltsd %xmm0,%xmm6
   42789:	66 0f 28 de          	movapd %xmm6,%xmm3
   4278d:	66 0f 55 d8          	andnpd %xmm0,%xmm3
   42791:	f2 0f 10 05 77 3b fd 	movsd  -0x2c489(%rip),%xmm0        # 16310 <GCC_except_table128+0x8c>
   42798:	ff 
   42799:	66 0f 54 f0          	andpd  %xmm0,%xmm6
   4279d:	66 0f 56 f3          	orpd   %xmm3,%xmm6
   427a1:	66 0f 57 db          	xorpd  %xmm3,%xmm3
   427a5:	66 44 0f 28 8c 24 80 	movapd 0x180(%rsp),%xmm9
   427ac:	01 00 00 
   427af:	66 41 0f 28 f9       	movapd %xmm9,%xmm7
   427b4:	f2 0f 5d fb          	minsd  %xmm3,%xmm7
   427b8:	f2 0f 5c f7          	subsd  %xmm7,%xmm6
   427bc:	66 44 0f 28 c2       	movapd %xmm2,%xmm8
   427c1:	66 44 0f 57 c4       	xorpd  %xmm4,%xmm8
   427c6:	f2 41 0f c2 d0 01    	cmpltsd %xmm8,%xmm2
   427cc:	66 0f 54 c2          	andpd  %xmm2,%xmm0
   427d0:	66 41 0f 55 d0       	andnpd %xmm8,%xmm2
   427d5:	66 0f 56 d0          	orpd   %xmm0,%xmm2
   427d9:	f2 44 0f 10 94 24 00 	movsd  0x400(%rsp),%xmm10
   427e0:	04 00 00 
   427e3:	f2 41 0f 5e d2       	divsd  %xmm10,%xmm2
   427e8:	f2 44 0f 10 84 24 b0 	movsd  0xb0(%rsp),%xmm8
   427ef:	00 00 00 
   427f2:	f2 41 0f 5e d0       	divsd  %xmm8,%xmm2
   427f7:	f2 0f 5c d7          	subsd  %xmm7,%xmm2
   427fb:	66 0f 28 c6          	movapd %xmm6,%xmm0
   427ff:	f2 0f c2 c6 03       	cmpunordsd %xmm6,%xmm0
   42804:	66 0f 28 f8          	movapd %xmm0,%xmm7
   42808:	66 0f 54 fa          	andpd  %xmm2,%xmm7
   4280c:	f2 0f 5f d6          	maxsd  %xmm6,%xmm2
   42810:	66 0f 55 c2          	andnpd %xmm2,%xmm0
   42814:	66 0f 56 c7          	orpd   %xmm7,%xmm0
   42818:	66 0f 28 d5          	movapd %xmm5,%xmm2
   4281c:	f2 0f c2 d3 01       	cmpltsd %xmm3,%xmm2
   42821:	f2 0f 10 35 d7 3a fd 	movsd  -0x2c529(%rip),%xmm6        # 16300 <GCC_except_table128+0x7c>
   42828:	ff 
   42829:	66 0f 28 fa          	movapd %xmm2,%xmm7
   4282d:	66 0f 54 fe          	andpd  %xmm6,%xmm7
   42831:	66 0f 55 d5          	andnpd %xmm5,%xmm2
   42835:	66 0f 56 d7          	orpd   %xmm7,%xmm2
   42839:	66 0f 28 e9          	movapd %xmm1,%xmm5
   4283d:	f2 0f c2 eb 01       	cmpltsd %xmm3,%xmm5
   42842:	66 0f 28 fd          	movapd %xmm5,%xmm7
   42846:	66 0f 55 f9          	andnpd %xmm1,%xmm7
   4284a:	66 0f 54 ee          	andpd  %xmm6,%xmm5
   4284e:	66 0f 56 ef          	orpd   %xmm7,%xmm5
   42852:	f2 41 0f 5e ea       	divsd  %xmm10,%xmm5
   42857:	f2 41 0f 5e e8       	divsd  %xmm8,%xmm5
   4285c:	f2 0f 10 3d 04 3b fd 	movsd  -0x2c4fc(%rip),%xmm7        # 16368 <GCC_except_table128+0xe4>
   42863:	ff 
   42864:	f2 0f 5f ef          	maxsd  %xmm7,%xmm5
   42868:	f2 0f 5d d5          	minsd  %xmm5,%xmm2
   4286c:	66 0f 57 d4          	xorpd  %xmm4,%xmm2
   42870:	f2 0f 10 8c 24 10 0d 	movsd  0xd10(%rsp),%xmm1
   42877:	00 00 
   42879:	66 0f 28 e1          	movapd %xmm1,%xmm4
   4287d:	f2 0f c2 e3 01       	cmpltsd %xmm3,%xmm4
   42882:	66 0f 28 ec          	movapd %xmm4,%xmm5
   42886:	66 0f 54 ee          	andpd  %xmm6,%xmm5
   4288a:	66 0f 55 e1          	andnpd %xmm1,%xmm4
   4288e:	66 0f 56 e5          	orpd   %xmm5,%xmm4
   42892:	66 0f 28 6c 24 70    	movapd 0x70(%rsp),%xmm5
   42898:	66 0f 28 cd          	movapd %xmm5,%xmm1
   4289c:	f2 0f c2 cb 01       	cmpltsd %xmm3,%xmm1
   428a1:	66 0f 54 f1          	andpd  %xmm1,%xmm6
   428a5:	66 0f 55 cd          	andnpd %xmm5,%xmm1
   428a9:	66 0f 56 ce          	orpd   %xmm6,%xmm1
   428ad:	f2 41 0f 5e ca       	divsd  %xmm10,%xmm1
   428b2:	f2 41 0f 5e c8       	divsd  %xmm8,%xmm1
   428b7:	f2 0f 5f cf          	maxsd  %xmm7,%xmm1
   428bb:	f2 0f 5d e1          	minsd  %xmm1,%xmm4
   428bf:	f2 0f 5f c2          	maxsd  %xmm2,%xmm0
   428c3:	f2 44 0f 5f cb       	maxsd  %xmm3,%xmm9
   428c8:	f2 41 0f 5d e1       	minsd  %xmm9,%xmm4
   428cd:	f2 0f 5c c4          	subsd  %xmm4,%xmm0
   428d1:	f2 0f 5d c3          	minsd  %xmm3,%xmm0
   428d5:	f2 0f 10 8c 24 40 01 	movsd  0x140(%rsp),%xmm1
   428dc:	00 00 
   428de:	bf 01 00 00 00       	mov    $0x1,%edi
   428e3:	ff 15 df 15 0c 00    	call   *0xc15df(%rip)        # 103ec8 <_DYNAMIC+0x468>
   428e9:	f2 0f 11 44 24 70    	movsd  %xmm0,0x70(%rsp)
   428ef:	45 84 e4             	test   %r12b,%r12b
   428f2:	0f 84 a7 02 00 00    	je     42b9f <<strategy_comm5::StrategyComm5 as future_backtest_sdk::plugin::StrategyPlugin>::on_signal+0x388f>
   428f8:	f2 0f 10 84 24 80 0d 	movsd  0xd80(%rsp),%xmm0
   428ff:	00 00 
   42901:	f2 0f 10 8c 24 20 03 	movsd  0x320(%rsp),%xmm1
   42908:	00 00 
   4290a:	f2 0f 59 c1          	mulsd  %xmm1,%xmm0
   4290e:	f2 0f 10 a4 24 80 00 	movsd  0x80(%rsp),%xmm4
   42915:	00 00 
   42917:	f2 0f 5c e0          	subsd  %xmm0,%xmm4
   4291b:	66 0f 28 d1          	movapd %xmm1,%xmm2
   4291f:	f2 0f 58 94 24 b0 00 	addsd  0xb0(%rsp),%xmm2
   42926:	00 00 
   42928:	66 0f 28 c4          	movapd %xmm4,%xmm0
   4292c:	f2 0f c2 c4 03       	cmpunordsd %xmm4,%xmm0
   42931:	66 0f 28 d8          	movapd %xmm0,%xmm3
   42935:	66 0f 54 da          	andpd  %xmm2,%xmm3
   42939:	f2 0f 5f d4          	maxsd  %xmm4,%xmm2
   4293d:	66 0f 55 c2          	andnpd %xmm2,%xmm0
   42941:	66 0f 56 c3          	orpd   %xmm3,%xmm0
   42945:	bb 01 00 00 00       	mov    $0x1,%ebx
   4294a:	bf 01 00 00 00       	mov    $0x1,%edi
   4294f:	ff 15 73 15 0c 00    	call   *0xc1573(%rip)        # 103ec8 <_DYNAMIC+0x468>
   42955:	f2 0f 11 44 24 20    	movsd  %xmm0,0x20(%rsp)
   4295b:	48 8b 84 24 88 0d 00 	mov    0xd88(%rsp),%rax
   42962:	00 
   42963:	48 83 f8 04          	cmp    $0x4,%rax
   42967:	b9 04 00 00 00       	mov    $0x4,%ecx
   4296c:	48 0f 42 c8          	cmovb  %rax,%rcx
   42970:	48 85 c0             	test   %rax,%rax
   42973:	0f 4e cb             	cmovle %ebx,%ecx
   42976:	c1 e1 04             	shl    $0x4,%ecx
   42979:	f2 41 0f 10 0c 0e    	movsd  (%r14,%rcx,1),%xmm1
   4297f:	f2 0f 10 84 24 f8 07 	movsd  0x7f8(%rsp),%xmm0
   42986:	00 00 
   42988:	f2 0f 11 84 24 20 01 	movsd  %xmm0,0x120(%rsp)
   4298f:	00 00 
   42991:	f2 0f 5c c8          	subsd  %xmm0,%xmm1
   42995:	48 c7 84 24 90 01 00 	movq   $0x0,0x190(%rsp)
   4299c:	00 00 00 00 00 
   429a1:	48 c7 84 24 98 01 00 	movq   $0x8,0x198(%rsp)
   429a8:	00 08 00 00 00 
   429ad:	48 c7 84 24 a0 01 00 	movq   $0x0,0x1a0(%rsp)
   429b4:	00 00 00 00 00 
   429b9:	48 8b 74 24 60       	mov    0x60(%rsp),%rsi
   429be:	48 8b 54 24 68       	mov    0x68(%rsp),%rdx
   429c3:	4c 8d 84 24 90 01 00 	lea    0x190(%rsp),%r8
   429ca:	00 
   429cb:	48 8b 7c 24 18       	mov    0x18(%rsp),%rdi
   429d0:	31 c9                	xor    %ecx,%ecx
   429d2:	f2 0f 10 44 24 20    	movsd  0x20(%rsp),%xmm0
   429d8:	e8 13 8c ff ff       	call   3b5f0 <strategy_comm5::cancel_order_use_range>
   429dd:	49 89 c5             	mov    %rax,%r13
   429e0:	48 85 c0             	test   %rax,%rax
   429e3:	0f 84 5a 03 00 00    	je     42d43 <<strategy_comm5::StrategyComm5 as future_backtest_sdk::plugin::StrategyPlugin>::on_signal+0x3a33>
   429e9:	48 8d bc 24 90 01 00 	lea    0x190(%rsp),%rdi
   429f0:	00 
   429f1:	e8 1a 7c ff ff       	call   3a610 <core::ptr::drop_in_place<alloc::vec::Vec<alloc::string::String>>>
   429f6:	e9 c4 18 00 00       	jmp    442bf <<strategy_comm5::StrategyComm5 as future_backtest_sdk::plugin::StrategyPlugin>::on_signal+0x4faf>
   429fb:	48 8b 7c 24 18       	mov    0x18(%rsp),%rdi
   42a00:	ff 15 ca 14 0c 00    	call   *0xc14ca(%rip)        # 103ed0 <_DYNAMIC+0x470>
   42a06:	49 89 c5             	mov    %rax,%r13
   42a09:	48 85 c0             	test   %rax,%rax
   42a0c:	0f 85 ad 18 00 00    	jne    442bf <<strategy_comm5::StrategyComm5 as future_backtest_sdk::plugin::StrategyPlugin>::on_signal+0x4faf>
   42a12:	80 bc 24 e9 03 00 00 	cmpb   $0x0,0x3e9(%rsp)
   42a19:	00 
   42a1a:	74 0b                	je     42a27 <<strategy_comm5::StrategyComm5 as future_backtest_sdk::plugin::StrategyPlugin>::on_signal+0x3717>
   42a1c:	80 7c 24 17 00       	cmpb   $0x0,0x17(%rsp)
   42a21:	0f 84 88 03 00 00    	je     42daf <<strategy_comm5::StrategyComm5 as future_backtest_sdk::plugin::StrategyPlugin>::on_signal+0x3a9f>
   42a27:	66 0f 28 05 91 3a fd 	movapd -0x2c56f(%rip),%xmm0        # 164c0 <GCC_except_table128+0x23c>
   42a2e:	ff 
   42a2f:	66 0f 28 54 24 40    	movapd 0x40(%rsp),%xmm2
   42a35:	66 0f 54 d0          	andpd  %xmm0,%xmm2
   42a39:	f2 0f 10 0d 07 39 fd 	movsd  -0x2c6f9(%rip),%xmm1        # 16348 <GCC_except_table128+0xc4>
   42a40:	ff 
   42a41:	66 0f 2e ca          	ucomisd %xmm2,%xmm1
   42a45:	0f 83 c1 03 00 00    	jae    42e0c <<strategy_comm5::StrategyComm5 as future_backtest_sdk::plugin::StrategyPlugin>::on_signal+0x3afc>
   42a4b:	66 0f 54 84 24 30 04 	andpd  0x430(%rsp),%xmm0
   42a52:	00 00 
   42a54:	66 0f 2e c8          	ucomisd %xmm0,%xmm1
   42a58:	0f 83 ae 03 00 00    	jae    42e0c <<strategy_comm5::StrategyComm5 as future_backtest_sdk::plugin::StrategyPlugin>::on_signal+0x3afc>
   42a5e:	f2 0f 10 84 24 a8 00 	movsd  0xa8(%rsp),%xmm0
   42a65:	00 00 
   42a67:	f2 0f 5e 84 24 30 04 	divsd  0x430(%rsp),%xmm0
   42a6e:	00 00 
   42a70:	66 0f 54 05 48 3a fd 	andpd  -0x2c5b8(%rip),%xmm0        # 164c0 <GCC_except_table128+0x23c>
   42a77:	ff 
   42a78:	f2 0f 58 05 58 38 fd 	addsd  -0x2c7a8(%rip),%xmm0        # 162d8 <GCC_except_table128+0x54>
   42a7f:	ff 
   42a80:	66 0f 57 c9          	xorpd  %xmm1,%xmm1
   42a84:	f2 0f 5f c1          	maxsd  %xmm1,%xmm0
   42a88:	66 0f 28 4c 24 40    	movapd 0x40(%rsp),%xmm1
   42a8e:	f2 0f 59 c8          	mulsd  %xmm0,%xmm1
   42a92:	66 0f 28 54 24 20    	movapd 0x20(%rsp),%xmm2
   42a98:	f2 0f 58 d1          	addsd  %xmm1,%xmm2
   42a9c:	66 0f 28 9c 24 f0 03 	movapd 0x3f0(%rsp),%xmm3
   42aa3:	00 00 
   42aa5:	66 0f 28 c3          	movapd %xmm3,%xmm0
   42aa9:	f2 0f 5d c2          	minsd  %xmm2,%xmm0
   42aad:	f2 0f c2 d2 03       	cmpunordsd %xmm2,%xmm2
   42ab2:	66 0f 28 ca          	movapd %xmm2,%xmm1
   42ab6:	66 0f 55 c8          	andnpd %xmm0,%xmm1
   42aba:	66 0f 54 d3          	andpd  %xmm3,%xmm2
   42abe:	66 0f 56 d1          	orpd   %xmm1,%xmm2
   42ac2:	66 0f 29 54 24 20    	movapd %xmm2,0x20(%rsp)
   42ac8:	e9 3f 03 00 00       	jmp    42e0c <<strategy_comm5::StrategyComm5 as future_backtest_sdk::plugin::StrategyPlugin>::on_signal+0x3afc>
   42acd:	48 8b 7c 24 18       	mov    0x18(%rsp),%rdi
   42ad2:	ff 15 f8 13 0c 00    	call   *0xc13f8(%rip)        # 103ed0 <_DYNAMIC+0x470>
   42ad8:	49 89 c5             	mov    %rax,%r13
   42adb:	48 85 c0             	test   %rax,%rax
   42ade:	0f 85 db 17 00 00    	jne    442bf <<strategy_comm5::StrategyComm5 as future_backtest_sdk::plugin::StrategyPlugin>::on_signal+0x4faf>
   42ae4:	80 bc 24 e9 03 00 00 	cmpb   $0x0,0x3e9(%rsp)
   42aeb:	00 
   42aec:	74 0b                	je     42af9 <<strategy_comm5::StrategyComm5 as future_backtest_sdk::plugin::StrategyPlugin>::on_signal+0x37e9>
   42aee:	80 7c 24 17 00       	cmpb   $0x0,0x17(%rsp)
   42af3:	0f 84 b0 03 00 00    	je     42ea9 <<strategy_comm5::StrategyComm5 as future_backtest_sdk::plugin::StrategyPlugin>::on_signal+0x3b99>
   42af9:	66 0f 28 05 bf 39 fd 	movapd -0x2c641(%rip),%xmm0        # 164c0 <GCC_except_table128+0x23c>
   42b00:	ff 
   42b01:	66 0f 28 54 24 40    	movapd 0x40(%rsp),%xmm2
   42b07:	66 0f 54 d0          	andpd  %xmm0,%xmm2
   42b0b:	f2 0f 10 0d 35 38 fd 	movsd  -0x2c7cb(%rip),%xmm1        # 16348 <GCC_except_table128+0xc4>
   42b12:	ff 
   42b13:	66 0f 2e ca          	ucomisd %xmm2,%xmm1
   42b17:	0f 83 e9 03 00 00    	jae    42f06 <<strategy_comm5::StrategyComm5 as future_backtest_sdk::plugin::StrategyPlugin>::on_signal+0x3bf6>
   42b1d:	66 0f 54 84 24 40 04 	andpd  0x440(%rsp),%xmm0
   42b24:	00 00 
   42b26:	66 0f 2e c8          	ucomisd %xmm0,%xmm1
   42b2a:	0f 83 d6 03 00 00    	jae    42f06 <<strategy_comm5::StrategyComm5 as future_backtest_sdk::plugin::StrategyPlugin>::on_signal+0x3bf6>
   42b30:	f2 0f 10 84 24 a8 00 	movsd  0xa8(%rsp),%xmm0
   42b37:	00 00 
   42b39:	f2 0f 5e 84 24 40 04 	divsd  0x440(%rsp),%xmm0
   42b40:	00 00 
   42b42:	66 0f 54 05 76 39 fd 	andpd  -0x2c68a(%rip),%xmm0        # 164c0 <GCC_except_table128+0x23c>
   42b49:	ff 
   42b4a:	f2 0f 58 05 86 37 fd 	addsd  -0x2c87a(%rip),%xmm0        # 162d8 <GCC_except_table128+0x54>
   42b51:	ff 
   42b52:	66 0f 57 c9          	xorpd  %xmm1,%xmm1
   42b56:	f2 0f 5f c1          	maxsd  %xmm1,%xmm0
   42b5a:	66 0f 28 4c 24 40    	movapd 0x40(%rsp),%xmm1
   42b60:	f2 0f 59 c8          	mulsd  %xmm0,%xmm1
   42b64:	66 0f 28 54 24 20    	movapd 0x20(%rsp),%xmm2
   42b6a:	f2 0f 58 d1          	addsd  %xmm1,%xmm2
   42b6e:	66 0f 28 9c 24 f0 03 	movapd 0x3f0(%rsp),%xmm3
   42b75:	00 00 
   42b77:	66 0f 28 c3          	movapd %xmm3,%xmm0
   42b7b:	f2 0f 5d c2          	minsd  %xmm2,%xmm0
   42b7f:	f2 0f c2 d2 03       	cmpunordsd %xmm2,%xmm2
   42b84:	66 0f 28 ca          	movapd %xmm2,%xmm1
   42b88:	66 0f 55 c8          	andnpd %xmm0,%xmm1
   42b8c:	66 0f 54 d3          	andpd  %xmm3,%xmm2
   42b90:	66 0f 56 d1          	orpd   %xmm1,%xmm2
   42b94:	66 0f 29 54 24 20    	movapd %xmm2,0x20(%rsp)
   42b9a:	e9 67 03 00 00       	jmp    42f06 <<strategy_comm5::StrategyComm5 as future_backtest_sdk::plugin::StrategyPlugin>::on_signal+0x3bf6>
   42b9f:	48 8b 7c 24 18       	mov    0x18(%rsp),%rdi
   42ba4:	ff 15 26 13 0c 00    	call   *0xc1326(%rip)        # 103ed0 <_DYNAMIC+0x470>
   42baa:	49 89 c5             	mov    %rax,%r13
   42bad:	48 85 c0             	test   %rax,%rax
   42bb0:	0f 85 09 17 00 00    	jne    442bf <<strategy_comm5::StrategyComm5 as future_backtest_sdk::plugin::StrategyPlugin>::on_signal+0x4faf>
   42bb6:	80 bc 24 e9 03 00 00 	cmpb   $0x0,0x3e9(%rsp)
   42bbd:	00 
   42bbe:	74 0b                	je     42bcb <<strategy_comm5::StrategyComm5 as future_backtest_sdk::plugin::StrategyPlugin>::on_signal+0x38bb>
   42bc0:	80 7c 24 17 00       	cmpb   $0x0,0x17(%rsp)
   42bc5:	0f 84 dd 03 00 00    	je     42fa8 <<strategy_comm5::StrategyComm5 as future_backtest_sdk::plugin::StrategyPlugin>::on_signal+0x3c98>
   42bcb:	66 0f 28 05 ed 38 fd 	movapd -0x2c713(%rip),%xmm0        # 164c0 <GCC_except_table128+0x23c>
   42bd2:	ff 
   42bd3:	66 0f 28 54 24 40    	movapd 0x40(%rsp),%xmm2
   42bd9:	66 0f 54 d0          	andpd  %xmm0,%xmm2
   42bdd:	f2 0f 10 0d 63 37 fd 	movsd  -0x2c89d(%rip),%xmm1        # 16348 <GCC_except_table128+0xc4>
   42be4:	ff 
   42be5:	66 0f 2e ca          	ucomisd %xmm2,%xmm1
   42be9:	0f 83 16 04 00 00    	jae    43005 <<strategy_comm5::StrategyComm5 as future_backtest_sdk::plugin::StrategyPlugin>::on_signal+0x3cf5>
   42bef:	66 0f 54 84 24 50 04 	andpd  0x450(%rsp),%xmm0
   42bf6:	00 00 
   42bf8:	66 0f 2e c8          	ucomisd %xmm0,%xmm1
   42bfc:	0f 83 03 04 00 00    	jae    43005 <<strategy_comm5::StrategyComm5 as future_backtest_sdk::plugin::StrategyPlugin>::on_signal+0x3cf5>
   42c02:	f2 0f 10 84 24 a8 00 	movsd  0xa8(%rsp),%xmm0
   42c09:	00 00 
   42c0b:	f2 0f 5e 84 24 50 04 	divsd  0x450(%rsp),%xmm0
   42c12:	00 00 
   42c14:	66 0f 54 05 a4 38 fd 	andpd  -0x2c75c(%rip),%xmm0        # 164c0 <GCC_except_table128+0x23c>
   42c1b:	ff 
   42c1c:	f2 0f 58 05 b4 36 fd 	addsd  -0x2c94c(%rip),%xmm0        # 162d8 <GCC_except_table128+0x54>
   42c23:	ff 
   42c24:	66 0f 57 c9          	xorpd  %xmm1,%xmm1
   42c28:	f2 0f 5f c1          	maxsd  %xmm1,%xmm0
   42c2c:	66 0f 28 4c 24 40    	movapd 0x40(%rsp),%xmm1
   42c32:	f2 0f 59 c8          	mulsd  %xmm0,%xmm1
   42c36:	66 0f 28 54 24 20    	movapd 0x20(%rsp),%xmm2
   42c3c:	f2 0f 58 d1          	addsd  %xmm1,%xmm2
   42c40:	66 0f 28 9c 24 f0 03 	movapd 0x3f0(%rsp),%xmm3
   42c47:	00 00 
   42c49:	66 0f 28 c3          	movapd %xmm3,%xmm0
   42c4d:	f2 0f 5d c2          	minsd  %xmm2,%xmm0
   42c51:	f2 0f c2 d2 03       	cmpunordsd %xmm2,%xmm2
   42c56:	66 0f 28 ca          	movapd %xmm2,%xmm1
   42c5a:	66 0f 55 c8          	andnpd %xmm0,%xmm1
   42c5e:	66 0f 54 d3          	andpd  %xmm3,%xmm2
   42c62:	66 0f 56 d1          	orpd   %xmm1,%xmm2
   42c66:	66 0f 29 54 24 20    	movapd %xmm2,0x20(%rsp)
   42c6c:	e9 94 03 00 00       	jmp    43005 <<strategy_comm5::StrategyComm5 as future_backtest_sdk::plugin::StrategyPlugin>::on_signal+0x3cf5>
   42c71:	48 8b 7c 24 18       	mov    0x18(%rsp),%rdi
   42c76:	ff 15 54 12 0c 00    	call   *0xc1254(%rip)        # 103ed0 <_DYNAMIC+0x470>
   42c7c:	49 89 c5             	mov    %rax,%r13
   42c7f:	48 85 c0             	test   %rax,%rax
   42c82:	0f 85 37 16 00 00    	jne    442bf <<strategy_comm5::StrategyComm5 as future_backtest_sdk::plugin::StrategyPlugin>::on_signal+0x4faf>
   42c88:	80 bc 24 e9 03 00 00 	cmpb   $0x0,0x3e9(%rsp)
   42c8f:	00 
   42c90:	74 0b                	je     42c9d <<strategy_comm5::StrategyComm5 as future_backtest_sdk::plugin::StrategyPlugin>::on_signal+0x398d>
   42c92:	80 7c 24 17 00       	cmpb   $0x0,0x17(%rsp)
   42c97:	0f 84 0a 04 00 00    	je     430a7 <<strategy_comm5::StrategyComm5 as future_backtest_sdk::plugin::StrategyPlugin>::on_signal+0x3d97>
   42c9d:	66 0f 28 05 1b 38 fd 	movapd -0x2c7e5(%rip),%xmm0        # 164c0 <GCC_except_table128+0x23c>
   42ca4:	ff 
   42ca5:	66 0f 28 54 24 40    	movapd 0x40(%rsp),%xmm2
   42cab:	66 0f 54 d0          	andpd  %xmm0,%xmm2
   42caf:	f2 0f 10 0d 91 36 fd 	movsd  -0x2c96f(%rip),%xmm1        # 16348 <GCC_except_table128+0xc4>
   42cb6:	ff 
   42cb7:	66 0f 2e ca          	ucomisd %xmm2,%xmm1
   42cbb:	0f 83 43 04 00 00    	jae    43104 <<strategy_comm5::StrategyComm5 as future_backtest_sdk::plugin::StrategyPlugin>::on_signal+0x3df4>
   42cc1:	66 0f 54 84 24 60 04 	andpd  0x460(%rsp),%xmm0
   42cc8:	00 00 
   42cca:	66 0f 2e c8          	ucomisd %xmm0,%xmm1
   42cce:	0f 83 30 04 00 00    	jae    43104 <<strategy_comm5::StrategyComm5 as future_backtest_sdk::plugin::StrategyPlugin>::on_signal+0x3df4>
   42cd4:	f2 0f 10 84 24 a8 00 	movsd  0xa8(%rsp),%xmm0
   42cdb:	00 00 
   42cdd:	f2 0f 5e 84 24 60 04 	divsd  0x460(%rsp),%xmm0
   42ce4:	00 00 
   42ce6:	66 0f 54 05 d2 37 fd 	andpd  -0x2c82e(%rip),%xmm0        # 164c0 <GCC_except_table128+0x23c>
   42ced:	ff 
   42cee:	f2 0f 58 05 e2 35 fd 	addsd  -0x2ca1e(%rip),%xmm0        # 162d8 <GCC_except_table128+0x54>
   42cf5:	ff 
   42cf6:	66 0f 57 c9          	xorpd  %xmm1,%xmm1
   42cfa:	f2 0f 5f c1          	maxsd  %xmm1,%xmm0
   42cfe:	66 0f 28 4c 24 40    	movapd 0x40(%rsp),%xmm1
   42d04:	f2 0f 59 c8          	mulsd  %xmm0,%xmm1
   42d08:	66 0f 28 54 24 20    	movapd 0x20(%rsp),%xmm2
   42d0e:	f2 0f 58 d1          	addsd  %xmm1,%xmm2
   42d12:	66 0f 28 9c 24 f0 03 	movapd 0x3f0(%rsp),%xmm3
   42d19:	00 00 
   42d1b:	66 0f 28 c3          	movapd %xmm3,%xmm0
   42d1f:	f2 0f 5d c2          	minsd  %xmm2,%xmm0
   42d23:	f2 0f c2 d2 03       	cmpunordsd %xmm2,%xmm2
   42d28:	66 0f 28 ca          	movapd %xmm2,%xmm1
   42d2c:	66 0f 55 c8          	andnpd %xmm0,%xmm1
   42d30:	66 0f 54 d3          	andpd  %xmm3,%xmm2
   42d34:	66 0f 56 d1          	orpd   %xmm1,%xmm2
   42d38:	66 0f 29 54 24 20    	movapd %xmm2,0x20(%rsp)
   42d3e:	e9 c1 03 00 00       	jmp    43104 <<strategy_comm5::StrategyComm5 as future_backtest_sdk::plugin::StrategyPlugin>::on_signal+0x3df4>
   42d43:	48 8b 74 24 60       	mov    0x60(%rsp),%rsi
   42d48:	48 8b 54 24 68       	mov    0x68(%rsp),%rdx
   42d4d:	48 8b 8c 24 98 01 00 	mov    0x198(%rsp),%rcx
   42d54:	00 
   42d55:	4c 8b 84 24 a0 01 00 	mov    0x1a0(%rsp),%r8
   42d5c:	00 
   42d5d:	48 8b 7c 24 18       	mov    0x18(%rsp),%rdi
   42d62:	e8 e9 90 ff ff       	call   3be50 <strategy_comm5::live_pending_counts>
   42d67:	66 0f 57 c0          	xorpd  %xmm0,%xmm0
   42d6b:	66 0f 29 44 24 40    	movapd %xmm0,0x40(%rsp)
   42d71:	48 85 d2             	test   %rdx,%rdx
   42d74:	0f 85 4d 0e 00 00    	jne    43bc7 <<strategy_comm5::StrategyComm5 as future_backtest_sdk::plugin::StrategyPlugin>::on_signal+0x48b7>
   42d7a:	66 0f 57 c9          	xorpd  %xmm1,%xmm1
   42d7e:	f2 0f 10 84 24 20 01 	movsd  0x120(%rsp),%xmm0
   42d85:	00 00 
   42d87:	66 0f 2e c1          	ucomisd %xmm1,%xmm0
   42d8b:	66 0f 57 e4          	xorpd  %xmm4,%xmm4
   42d8f:	f2 0f c2 e0 01       	cmpltsd %xmm0,%xmm4
   42d94:	f2 0f 10 05 cc 35 fd 	movsd  -0x2ca34(%rip),%xmm0        # 16368 <GCC_except_table128+0xe4>
   42d9b:	ff 
   42d9c:	66 0f 54 e0          	andpd  %xmm0,%xmm4
   42da0:	0f 87 4b 05 00 00    	ja     432f1 <<strategy_comm5::StrategyComm5 as future_backtest_sdk::plugin::StrategyPlugin>::on_signal+0x3fe1>
   42da6:	66 0f 57 c0          	xorpd  %xmm0,%xmm0
   42daa:	e9 4f 05 00 00       	jmp    432fe <<strategy_comm5::StrategyComm5 as future_backtest_sdk::plugin::StrategyPlugin>::on_signal+0x3fee>
   42daf:	f2 0f 10 84 24 a8 00 	movsd  0xa8(%rsp),%xmm0
   42db6:	00 00 
   42db8:	f2 0f 10 ac 24 c0 03 	movsd  0x3c0(%rsp),%xmm5
   42dbf:	00 00 
   42dc1:	f2 0f 10 b4 24 c8 03 	movsd  0x3c8(%rsp),%xmm6
   42dc8:	00 00 
   42dca:	f2 0f 10 bc 24 d0 03 	movsd  0x3d0(%rsp),%xmm7
   42dd1:	00 00 
   42dd3:	f2 0f 10 94 24 c8 00 	movsd  0xc8(%rsp),%xmm2
   42dda:	00 00 
   42ddc:	0f 28 4c 24 20       	movaps 0x20(%rsp),%xmm1
   42de1:	f2 0f 11 0c 24       	movsd  %xmm1,(%rsp)
   42de6:	66 0f 28 8c 24 30 04 	movapd 0x430(%rsp),%xmm1
   42ded:	00 00 
   42def:	f2 0f 10 9c 24 80 00 	movsd  0x80(%rsp),%xmm3
   42df6:	00 00 
   42df8:	f2 0f 10 a4 24 b0 00 	movsd  0xb0(%rsp),%xmm4
   42dff:	00 00 
   42e01:	e8 ba 95 ff ff       	call   3c3c0 <strategy_comm5::high_taker_rate>
   42e06:	66 0f 29 44 24 20    	movapd %xmm0,0x20(%rsp)
   42e0c:	66 0f 28 44 24 20    	movapd 0x20(%rsp),%xmm0
   42e12:	f2 0f 58 05 4e 35 fd 	addsd  -0x2cab2(%rip),%xmm0        # 16368 <GCC_except_table128+0xe4>
   42e19:	ff 
   42e1a:	f2 0f 59 84 24 80 00 	mulsd  0x80(%rsp),%xmm0
   42e21:	00 00 
   42e23:	f2 0f 10 8c 24 20 03 	movsd  0x320(%rsp),%xmm1
   42e2a:	00 00 
   42e2c:	bf 01 00 00 00       	mov    $0x1,%edi
   42e31:	ff 15 91 10 0c 00    	call   *0xc1091(%rip)        # 103ec8 <_DYNAMIC+0x468>
   42e37:	f2 0f 11 44 24 20    	movsd  %xmm0,0x20(%rsp)
   42e3d:	48 8d bc 24 b0 07 00 	lea    0x7b0(%rsp),%rdi
   42e44:	00 
   42e45:	be 01 00 00 00       	mov    $0x1,%esi
   42e4a:	f2 0f 10 44 24 20    	movsd  0x20(%rsp),%xmm0
   42e50:	e8 ab 96 ff ff       	call   3c500 <strategy_comm5::taker_fillable_cum>
   42e55:	f2 0f 10 5c 24 70    	movsd  0x70(%rsp),%xmm3
   42e5b:	66 0f 28 cb          	movapd %xmm3,%xmm1
   42e5f:	f2 0f c2 cb 03       	cmpunordsd %xmm3,%xmm1
   42e64:	66 0f 28 d1          	movapd %xmm1,%xmm2
   42e68:	66 0f 54 d0          	andpd  %xmm0,%xmm2
   42e6c:	f2 0f 5d c3          	minsd  %xmm3,%xmm0
   42e70:	66 0f 55 c8          	andnpd %xmm0,%xmm1
   42e74:	66 0f 56 ca          	orpd   %xmm2,%xmm1
   42e78:	66 0f 28 c1          	movapd %xmm1,%xmm0
   42e7c:	f2 0f 10 8c 24 40 01 	movsd  0x140(%rsp),%xmm1
   42e83:	00 00 
   42e85:	bf 01 00 00 00       	mov    $0x1,%edi
   42e8a:	ff 15 38 10 0c 00    	call   *0xc1038(%rip)        # 103ec8 <_DYNAMIC+0x468>
   42e90:	66 0f 29 44 24 40    	movapd %xmm0,0x40(%rsp)
   42e96:	f2 0f 10 05 72 35 fd 	movsd  -0x2ca8e(%rip),%xmm0        # 16410 <GCC_except_table128+0x18c>
   42e9d:	ff 
   42e9e:	f2 0f 11 44 24 70    	movsd  %xmm0,0x70(%rsp)
   42ea4:	e9 a0 05 00 00       	jmp    43449 <<strategy_comm5::StrategyComm5 as future_backtest_sdk::plugin::StrategyPlugin>::on_signal+0x4139>
   42ea9:	f2 0f 10 84 24 a8 00 	movsd  0xa8(%rsp),%xmm0
   42eb0:	00 00 
   42eb2:	f2 0f 10 ac 24 c0 03 	movsd  0x3c0(%rsp),%xmm5
   42eb9:	00 00 
   42ebb:	f2 0f 10 b4 24 c8 03 	movsd  0x3c8(%rsp),%xmm6
   42ec2:	00 00 
   42ec4:	f2 0f 10 bc 24 d0 03 	movsd  0x3d0(%rsp),%xmm7
   42ecb:	00 00 
   42ecd:	f2 0f 10 94 24 c8 00 	movsd  0xc8(%rsp),%xmm2
   42ed4:	00 00 
   42ed6:	0f 28 4c 24 20       	movaps 0x20(%rsp),%xmm1
   42edb:	f2 0f 11 0c 24       	movsd  %xmm1,(%rsp)
   42ee0:	66 0f 28 8c 24 40 04 	movapd 0x440(%rsp),%xmm1
   42ee7:	00 00 
   42ee9:	f2 0f 10 9c 24 80 00 	movsd  0x80(%rsp),%xmm3
   42ef0:	00 00 
   42ef2:	f2 0f 10 a4 24 b0 00 	movsd  0xb0(%rsp),%xmm4
   42ef9:	00 00 
   42efb:	e8 c0 94 ff ff       	call   3c3c0 <strategy_comm5::high_taker_rate>
   42f00:	66 0f 29 44 24 20    	movapd %xmm0,0x20(%rsp)
   42f06:	f2 0f 10 05 5a 34 fd 	movsd  -0x2cba6(%rip),%xmm0        # 16368 <GCC_except_table128+0xe4>
   42f0d:	ff 
   42f0e:	f2 0f 5c 44 24 20    	subsd  0x20(%rsp),%xmm0
   42f14:	f2 0f 59 84 24 b0 00 	mulsd  0xb0(%rsp),%xmm0
   42f1b:	00 00 
   42f1d:	f2 0f 10 8c 24 20 03 	movsd  0x320(%rsp),%xmm1
   42f24:	00 00 
   42f26:	bf 01 00 00 00       	mov    $0x1,%edi
   42f2b:	ff 15 97 0f 0c 00    	call   *0xc0f97(%rip)        # 103ec8 <_DYNAMIC+0x468>
   42f31:	f2 0f 11 44 24 20    	movsd  %xmm0,0x20(%rsp)
   42f37:	48 8d bc 24 b0 07 00 	lea    0x7b0(%rsp),%rdi
   42f3e:	00 
   42f3f:	31 f6                	xor    %esi,%esi
   42f41:	f2 0f 10 44 24 20    	movsd  0x20(%rsp),%xmm0
   42f47:	e8 b4 95 ff ff       	call   3c500 <strategy_comm5::taker_fillable_cum>
   42f4c:	66 0f 57 05 2c 3c fd 	xorpd  -0x2c3d4(%rip),%xmm0        # 16b80 <anon.2bc08f40ad58cb635718c2f09dbb11ab.6.llvm.4096812584824358744+0x2a0>
   42f53:	ff 
   42f54:	f2 0f 10 5c 24 70    	movsd  0x70(%rsp),%xmm3
   42f5a:	66 0f 28 cb          	movapd %xmm3,%xmm1
   42f5e:	f2 0f c2 cb 03       	cmpunordsd %xmm3,%xmm1
   42f63:	66 0f 28 d1          	movapd %xmm1,%xmm2
   42f67:	66 0f 54 d0          	andpd  %xmm0,%xmm2
   42f6b:	f2 0f 5f c3          	maxsd  %xmm3,%xmm0
   42f6f:	66 0f 55 c8          	andnpd %xmm0,%xmm1
   42f73:	66 0f 56 ca          	orpd   %xmm2,%xmm1
   42f77:	66 0f 28 c1          	movapd %xmm1,%xmm0
   42f7b:	f2 0f 10 8c 24 40 01 	movsd  0x140(%rsp),%xmm1
   42f82:	00 00 
   42f84:	bf 01 00 00 00       	mov    $0x1,%edi
   42f89:	ff 15 39 0f 0c 00    	call   *0xc0f39(%rip)        # 103ec8 <_DYNAMIC+0x468>
   42f8f:	66 0f 29 44 24 40    	movapd %xmm0,0x40(%rsp)
   42f95:	f2 0f 10 05 73 34 fd 	movsd  -0x2cb8d(%rip),%xmm0        # 16410 <GCC_except_table128+0x18c>
   42f9c:	ff 
   42f9d:	f2 0f 11 44 24 70    	movsd  %xmm0,0x70(%rsp)
   42fa3:	e9 6d 08 00 00       	jmp    43815 <<strategy_comm5::StrategyComm5 as future_backtest_sdk::plugin::StrategyPlugin>::on_signal+0x4505>
   42fa8:	f2 0f 10 84 24 a8 00 	movsd  0xa8(%rsp),%xmm0
   42faf:	00 00 
   42fb1:	f2 0f 10 ac 24 c0 03 	movsd  0x3c0(%rsp),%xmm5
   42fb8:	00 00 
   42fba:	f2 0f 10 b4 24 c8 03 	movsd  0x3c8(%rsp),%xmm6
   42fc1:	00 00 
   42fc3:	f2 0f 10 bc 24 d0 03 	movsd  0x3d0(%rsp),%xmm7
   42fca:	00 00 
   42fcc:	f2 0f 10 94 24 c8 00 	movsd  0xc8(%rsp),%xmm2
   42fd3:	00 00 
   42fd5:	0f 28 4c 24 20       	movaps 0x20(%rsp),%xmm1
   42fda:	f2 0f 11 0c 24       	movsd  %xmm1,(%rsp)
   42fdf:	66 0f 28 8c 24 50 04 	movapd 0x450(%rsp),%xmm1
   42fe6:	00 00 
   42fe8:	f2 0f 10 9c 24 80 00 	movsd  0x80(%rsp),%xmm3
   42fef:	00 00 
   42ff1:	f2 0f 10 a4 24 b0 00 	movsd  0xb0(%rsp),%xmm4
   42ff8:	00 00 
   42ffa:	e8 c1 93 ff ff       	call   3c3c0 <strategy_comm5::high_taker_rate>
   42fff:	66 0f 29 44 24 20    	movapd %xmm0,0x20(%rsp)
   43005:	f2 0f 10 05 5b 33 fd 	movsd  -0x2cca5(%rip),%xmm0        # 16368 <GCC_except_table128+0xe4>
   4300c:	ff 
   4300d:	f2 0f 5c 44 24 20    	subsd  0x20(%rsp),%xmm0
   43013:	f2 0f 59 84 24 b0 00 	mulsd  0xb0(%rsp),%xmm0
   4301a:	00 00 
   4301c:	f2 0f 10 8c 24 20 03 	movsd  0x320(%rsp),%xmm1
   43023:	00 00 
   43025:	bf 01 00 00 00       	mov    $0x1,%edi
   4302a:	ff 15 98 0e 0c 00    	call   *0xc0e98(%rip)        # 103ec8 <_DYNAMIC+0x468>
   43030:	f2 0f 11 44 24 20    	movsd  %xmm0,0x20(%rsp)
   43036:	48 8d bc 24 b0 07 00 	lea    0x7b0(%rsp),%rdi
   4303d:	00 
   4303e:	31 f6                	xor    %esi,%esi
   43040:	f2 0f 10 44 24 20    	movsd  0x20(%rsp),%xmm0
   43046:	e8 b5 94 ff ff       	call   3c500 <strategy_comm5::taker_fillable_cum>
   4304b:	66 0f 57 05 2d 3b fd 	xorpd  -0x2c4d3(%rip),%xmm0        # 16b80 <anon.2bc08f40ad58cb635718c2f09dbb11ab.6.llvm.4096812584824358744+0x2a0>
   43052:	ff 
   43053:	f2 0f 10 5c 24 70    	movsd  0x70(%rsp),%xmm3
   43059:	66 0f 28 cb          	movapd %xmm3,%xmm1
   4305d:	f2 0f c2 cb 03       	cmpunordsd %xmm3,%xmm1
   43062:	66 0f 28 d1          	movapd %xmm1,%xmm2
   43066:	66 0f 54 d0          	andpd  %xmm0,%xmm2
   4306a:	f2 0f 5f c3          	maxsd  %xmm3,%xmm0
   4306e:	66 0f 55 c8          	andnpd %xmm0,%xmm1
   43072:	66 0f 56 ca          	orpd   %xmm2,%xmm1
   43076:	66 0f 28 c1          	movapd %xmm1,%xmm0
   4307a:	f2 0f 10 8c 24 40 01 	movsd  0x140(%rsp),%xmm1
   43081:	00 00 
   43083:	bf 01 00 00 00       	mov    $0x1,%edi
   43088:	ff 15 3a 0e 0c 00    	call   *0xc0e3a(%rip)        # 103ec8 <_DYNAMIC+0x468>
   4308e:	66 0f 29 44 24 40    	movapd %xmm0,0x40(%rsp)
   43094:	f2 0f 10 05 74 33 fd 	movsd  -0x2cc8c(%rip),%xmm0        # 16410 <GCC_except_table128+0x18c>
   4309b:	ff 
   4309c:	f2 0f 11 44 24 70    	movsd  %xmm0,0x70(%rsp)
   430a2:	e9 3c 0b 00 00       	jmp    43be3 <<strategy_comm5::StrategyComm5 as future_backtest_sdk::plugin::StrategyPlugin>::on_signal+0x48d3>
   430a7:	f2 0f 10 84 24 a8 00 	movsd  0xa8(%rsp),%xmm0
   430ae:	00 00 
   430b0:	f2 0f 10 ac 24 c0 03 	movsd  0x3c0(%rsp),%xmm5
   430b7:	00 00 
   430b9:	f2 0f 10 b4 24 c8 03 	movsd  0x3c8(%rsp),%xmm6
   430c0:	00 00 
   430c2:	f2 0f 10 bc 24 d0 03 	movsd  0x3d0(%rsp),%xmm7
   430c9:	00 00 
   430cb:	f2 0f 10 94 24 c8 00 	movsd  0xc8(%rsp),%xmm2
   430d2:	00 00 
   430d4:	0f 28 4c 24 20       	movaps 0x20(%rsp),%xmm1
   430d9:	f2 0f 11 0c 24       	movsd  %xmm1,(%rsp)
   430de:	66 0f 28 8c 24 60 04 	movapd 0x460(%rsp),%xmm1
   430e5:	00 00 
   430e7:	f2 0f 10 9c 24 80 00 	movsd  0x80(%rsp),%xmm3
   430ee:	00 00 
   430f0:	f2 0f 10 a4 24 b0 00 	movsd  0xb0(%rsp),%xmm4
   430f7:	00 00 
   430f9:	e8 c2 92 ff ff       	call   3c3c0 <strategy_comm5::high_taker_rate>
   430fe:	66 0f 29 44 24 20    	movapd %xmm0,0x20(%rsp)
   43104:	66 0f 28 44 24 20    	movapd 0x20(%rsp),%xmm0
   4310a:	f2 0f 58 05 56 32 fd 	addsd  -0x2cdaa(%rip),%xmm0        # 16368 <GCC_except_table128+0xe4>
   43111:	ff 
   43112:	f2 0f 59 84 24 80 00 	mulsd  0x80(%rsp),%xmm0
   43119:	00 00 
   4311b:	f2 0f 10 8c 24 20 03 	movsd  0x320(%rsp),%xmm1
   43122:	00 00 
   43124:	bf 01 00 00 00       	mov    $0x1,%edi
   43129:	ff 15 99 0d 0c 00    	call   *0xc0d99(%rip)        # 103ec8 <_DYNAMIC+0x468>
   4312f:	f2 0f 11 44 24 20    	movsd  %xmm0,0x20(%rsp)
   43135:	48 8d bc 24 b0 07 00 	lea    0x7b0(%rsp),%rdi
   4313c:	00 
   4313d:	be 01 00 00 00       	mov    $0x1,%esi
   43142:	f2 0f 10 44 24 20    	movsd  0x20(%rsp),%xmm0
   43148:	e8 b3 93 ff ff       	call   3c500 <strategy_comm5::taker_fillable_cum>
   4314d:	f2 0f 10 5c 24 70    	movsd  0x70(%rsp),%xmm3
   43153:	66 0f 28 cb          	movapd %xmm3,%xmm1
   43157:	f2 0f c2 cb 03       	cmpunordsd %xmm3,%xmm1
   4315c:	66 0f 28 d1          	movapd %xmm1,%xmm2
   43160:	66 0f 54 d0          	andpd  %xmm0,%xmm2
   43164:	f2 0f 5d c3          	minsd  %xmm3,%xmm0
   43168:	66 0f 55 c8          	andnpd %xmm0,%xmm1
   4316c:	66 0f 56 ca          	orpd   %xmm2,%xmm1
   43170:	66 0f 28 c1          	movapd %xmm1,%xmm0
   43174:	f2 0f 10 8c 24 40 01 	movsd  0x140(%rsp),%xmm1
   4317b:	00 00 
   4317d:	bf 01 00 00 00       	mov    $0x1,%edi
   43182:	ff 15 40 0d 0c 00    	call   *0xc0d40(%rip)        # 103ec8 <_DYNAMIC+0x468>
   43188:	66 0f 29 44 24 40    	movapd %xmm0,0x40(%rsp)
   4318e:	f2 0f 10 05 7a 32 fd 	movsd  -0x2cd86(%rip),%xmm0        # 16410 <GCC_except_table128+0x18c>
   43195:	ff 
   43196:	f2 0f 11 44 24 70    	movsd  %xmm0,0x70(%rsp)
   4319c:	e9 9c 0e 00 00       	jmp    4403d <<strategy_comm5::StrategyComm5 as future_backtest_sdk::plugin::StrategyPlugin>::on_signal+0x4d2d>
   431a1:	f2 0f 10 84 24 50 08 	movsd  0x850(%rsp),%xmm0
   431a8:	00 00 
   431aa:	f2 0f 58 c1          	addsd  %xmm1,%xmm0
   431ae:	f2 0f 10 b4 24 58 08 	movsd  0x858(%rsp),%xmm6
   431b5:	00 00 
   431b7:	f2 0f 10 9c 24 68 08 	movsd  0x868(%rsp),%xmm3
   431be:	00 00 
   431c0:	66 0f 2e f1          	ucomisd %xmm1,%xmm6
   431c4:	66 0f 28 fc          	movapd %xmm4,%xmm7
   431c8:	f2 0f 58 fa          	addsd  %xmm2,%xmm7
   431cc:	66 0f 57 ed          	xorpd  %xmm5,%xmm5
   431d0:	f2 0f c2 ee 01       	cmpltsd %xmm6,%xmm5
   431d5:	66 0f 28 f5          	movapd %xmm5,%xmm6
   431d9:	66 0f 55 f4          	andnpd %xmm4,%xmm6
   431dd:	66 0f 54 ef          	andpd  %xmm7,%xmm5
   431e1:	66 0f 56 ee          	orpd   %xmm6,%xmm5
   431e5:	76 09                	jbe    431f0 <<strategy_comm5::StrategyComm5 as future_backtest_sdk::plugin::StrategyPlugin>::on_signal+0x3ee0>
   431e7:	f2 0f 58 84 24 60 08 	addsd  0x860(%rsp),%xmm0
   431ee:	00 00 
   431f0:	66 0f 2e d9          	ucomisd %xmm1,%xmm3
   431f4:	66 0f 28 e5          	movapd %xmm5,%xmm4
   431f8:	f2 0f 58 e2          	addsd  %xmm2,%xmm4
   431fc:	66 0f 57 d2          	xorpd  %xmm2,%xmm2
   43200:	f2 0f c2 d3 01       	cmpltsd %xmm3,%xmm2
   43205:	66 0f 28 da          	movapd %xmm2,%xmm3
   43209:	66 0f 55 dd          	andnpd %xmm5,%xmm3
   4320d:	66 0f 54 d4          	andpd  %xmm4,%xmm2
   43211:	66 0f 56 d3          	orpd   %xmm3,%xmm2
   43215:	0f 87 8e 01 00 00    	ja     433a9 <<strategy_comm5::StrategyComm5 as future_backtest_sdk::plugin::StrategyPlugin>::on_signal+0x4099>
   4321b:	66 0f 2e d1          	ucomisd %xmm1,%xmm2
   4321f:	0f 86 97 01 00 00    	jbe    433bc <<strategy_comm5::StrategyComm5 as future_backtest_sdk::plugin::StrategyPlugin>::on_signal+0x40ac>
   43225:	f2 0f 5e c2          	divsd  %xmm2,%xmm0
   43229:	66 0f 28 c8          	movapd %xmm0,%xmm1
   4322d:	f2 0f 10 84 24 78 0d 	movsd  0xd78(%rsp),%xmm0
   43234:	00 00 
   43236:	66 0f 57 d2          	xorpd  %xmm2,%xmm2
   4323a:	66 0f 2e c2          	ucomisd %xmm2,%xmm0
   4323e:	0f 87 8b 01 00 00    	ja     433cf <<strategy_comm5::StrategyComm5 as future_backtest_sdk::plugin::StrategyPlugin>::on_signal+0x40bf>
   43244:	e9 a7 01 00 00       	jmp    433f0 <<strategy_comm5::StrategyComm5 as future_backtest_sdk::plugin::StrategyPlugin>::on_signal+0x40e0>
   43249:	f2 0f 10 84 24 00 08 	movsd  0x800(%rsp),%xmm0
   43250:	00 00 
   43252:	f2 0f 58 c1          	addsd  %xmm1,%xmm0
   43256:	f2 0f 10 b4 24 08 08 	movsd  0x808(%rsp),%xmm6
   4325d:	00 00 
   4325f:	f2 0f 10 9c 24 18 08 	movsd  0x818(%rsp),%xmm3
   43266:	00 00 
   43268:	66 0f 2e f1          	ucomisd %xmm1,%xmm6
   4326c:	66 0f 28 fc          	movapd %xmm4,%xmm7
   43270:	f2 0f 58 fa          	addsd  %xmm2,%xmm7
   43274:	66 0f 57 ed          	xorpd  %xmm5,%xmm5
   43278:	f2 0f c2 ee 01       	cmpltsd %xmm6,%xmm5
   4327d:	66 0f 28 f5          	movapd %xmm5,%xmm6
   43281:	66 0f 55 f4          	andnpd %xmm4,%xmm6
   43285:	66 0f 54 ef          	andpd  %xmm7,%xmm5
   43289:	66 0f 56 ee          	orpd   %xmm6,%xmm5
   4328d:	76 09                	jbe    43298 <<strategy_comm5::StrategyComm5 as future_backtest_sdk::plugin::StrategyPlugin>::on_signal+0x3f88>
   4328f:	f2 0f 58 84 24 10 08 	addsd  0x810(%rsp),%xmm0
   43296:	00 00 
   43298:	66 0f 2e d9          	ucomisd %xmm1,%xmm3
   4329c:	66 0f 28 e5          	movapd %xmm5,%xmm4
   432a0:	f2 0f 58 e2          	addsd  %xmm2,%xmm4
   432a4:	66 0f 57 d2          	xorpd  %xmm2,%xmm2
   432a8:	f2 0f c2 d3 01       	cmpltsd %xmm3,%xmm2
   432ad:	66 0f 28 da          	movapd %xmm2,%xmm3
   432b1:	66 0f 55 dd          	andnpd %xmm5,%xmm3
   432b5:	66 0f 54 d4          	andpd  %xmm4,%xmm2
   432b9:	66 0f 56 d3          	orpd   %xmm3,%xmm2
   432bd:	0f 87 aa 04 00 00    	ja     4376d <<strategy_comm5::StrategyComm5 as future_backtest_sdk::plugin::StrategyPlugin>::on_signal+0x445d>
   432c3:	66 0f 2e d1          	ucomisd %xmm1,%xmm2
   432c7:	0f 86 b3 04 00 00    	jbe    43780 <<strategy_comm5::StrategyComm5 as future_backtest_sdk::plugin::StrategyPlugin>::on_signal+0x4470>
   432cd:	f2 0f 5e c2          	divsd  %xmm2,%xmm0
   432d1:	66 0f 28 c8          	movapd %xmm0,%xmm1
   432d5:	f2 0f 10 84 24 78 0d 	movsd  0xd78(%rsp),%xmm0
   432dc:	00 00 
   432de:	66 0f 57 d2          	xorpd  %xmm2,%xmm2
   432e2:	66 0f 2e c2          	ucomisd %xmm2,%xmm0
   432e6:	0f 87 a7 04 00 00    	ja     43793 <<strategy_comm5::StrategyComm5 as future_backtest_sdk::plugin::StrategyPlugin>::on_signal+0x4483>
   432ec:	e9 c3 04 00 00       	jmp    437b4 <<strategy_comm5::StrategyComm5 as future_backtest_sdk::plugin::StrategyPlugin>::on_signal+0x44a4>
   432f1:	f2 0f 10 84 24 00 08 	movsd  0x800(%rsp),%xmm0
   432f8:	00 00 
   432fa:	f2 0f 58 c1          	addsd  %xmm1,%xmm0
   432fe:	f2 0f 10 ac 24 08 08 	movsd  0x808(%rsp),%xmm5
   43305:	00 00 
   43307:	f2 0f 10 94 24 18 08 	movsd  0x818(%rsp),%xmm2
   4330e:	00 00 
   43310:	66 0f 2e e9          	ucomisd %xmm1,%xmm5
   43314:	66 0f 28 f4          	movapd %xmm4,%xmm6
   43318:	f2 0f 10 1d 48 30 fd 	movsd  -0x2cfb8(%rip),%xmm3        # 16368 <GCC_except_table128+0xe4>
   4331f:	ff 
   43320:	f2 0f 58 f3          	addsd  %xmm3,%xmm6
   43324:	66 0f 57 db          	xorpd  %xmm3,%xmm3
   43328:	f2 0f c2 dd 01       	cmpltsd %xmm5,%xmm3
   4332d:	66 0f 28 eb          	movapd %xmm3,%xmm5
   43331:	66 0f 55 ec          	andnpd %xmm4,%xmm5
   43335:	66 0f 54 de          	andpd  %xmm6,%xmm3
   43339:	66 0f 56 dd          	orpd   %xmm5,%xmm3
   4333d:	76 09                	jbe    43348 <<strategy_comm5::StrategyComm5 as future_backtest_sdk::plugin::StrategyPlugin>::on_signal+0x4038>
   4333f:	f2 0f 58 84 24 10 08 	addsd  0x810(%rsp),%xmm0
   43346:	00 00 
   43348:	66 0f 2e d1          	ucomisd %xmm1,%xmm2
   4334c:	66 0f 28 eb          	movapd %xmm3,%xmm5
   43350:	f2 0f 10 25 10 30 fd 	movsd  -0x2cff0(%rip),%xmm4        # 16368 <GCC_except_table128+0xe4>
   43357:	ff 
   43358:	f2 0f 58 ec          	addsd  %xmm4,%xmm5
   4335c:	66 0f 57 e4          	xorpd  %xmm4,%xmm4
   43360:	f2 0f c2 e2 01       	cmpltsd %xmm2,%xmm4
   43365:	66 0f 28 d4          	movapd %xmm4,%xmm2
   43369:	66 0f 55 d3          	andnpd %xmm3,%xmm2
   4336d:	66 0f 54 e5          	andpd  %xmm5,%xmm4
   43371:	66 0f 56 e2          	orpd   %xmm2,%xmm4
   43375:	0f 87 c0 07 00 00    	ja     43b3b <<strategy_comm5::StrategyComm5 as future_backtest_sdk::plugin::StrategyPlugin>::on_signal+0x482b>
   4337b:	66 0f 2e e1          	ucomisd %xmm1,%xmm4
   4337f:	0f 86 c9 07 00 00    	jbe    43b4e <<strategy_comm5::StrategyComm5 as future_backtest_sdk::plugin::StrategyPlugin>::on_signal+0x483e>
   43385:	f2 0f 5e c4          	divsd  %xmm4,%xmm0
   43389:	66 0f 28 c8          	movapd %xmm0,%xmm1
   4338d:	f2 0f 10 84 24 78 0d 	movsd  0xd78(%rsp),%xmm0
   43394:	00 00 
   43396:	66 0f 57 d2          	xorpd  %xmm2,%xmm2
   4339a:	66 0f 2e c2          	ucomisd %xmm2,%xmm0
   4339e:	0f 87 bd 07 00 00    	ja     43b61 <<strategy_comm5::StrategyComm5 as future_backtest_sdk::plugin::StrategyPlugin>::on_signal+0x4851>
   433a4:	e9 d9 07 00 00       	jmp    43b82 <<strategy_comm5::StrategyComm5 as future_backtest_sdk::plugin::StrategyPlugin>::on_signal+0x4872>
   433a9:	f2 0f 58 84 24 70 08 	addsd  0x870(%rsp),%xmm0
   433b0:	00 00 
   433b2:	66 0f 2e d1          	ucomisd %xmm1,%xmm2
   433b6:	0f 87 69 fe ff ff    	ja     43225 <<strategy_comm5::StrategyComm5 as future_backtest_sdk::plugin::StrategyPlugin>::on_signal+0x3f15>
   433bc:	f2 0f 10 84 24 78 0d 	movsd  0xd78(%rsp),%xmm0
   433c3:	00 00 
   433c5:	66 0f 57 d2          	xorpd  %xmm2,%xmm2
   433c9:	66 0f 2e c2          	ucomisd %xmm2,%xmm0
   433cd:	76 21                	jbe    433f0 <<strategy_comm5::StrategyComm5 as future_backtest_sdk::plugin::StrategyPlugin>::on_signal+0x40e0>
   433cf:	66 0f 28 d1          	movapd %xmm1,%xmm2
   433d3:	f2 0f c2 d1 03       	cmpunordsd %xmm1,%xmm2
   433d8:	66 0f 28 da          	movapd %xmm2,%xmm3
   433dc:	66 0f 54 d8          	andpd  %xmm0,%xmm3
   433e0:	f2 0f 5d c1          	minsd  %xmm1,%xmm0
   433e4:	66 0f 55 d0          	andnpd %xmm0,%xmm2
   433e8:	66 0f 56 d3          	orpd   %xmm3,%xmm2
   433ec:	66 0f 28 ca          	movapd %xmm2,%xmm1
   433f0:	f2 0f 10 5c 24 70    	movsd  0x70(%rsp),%xmm3
   433f6:	66 0f 28 c3          	movapd %xmm3,%xmm0
   433fa:	f2 0f c2 c3 03       	cmpunordsd %xmm3,%xmm0
   433ff:	66 0f 28 d0          	movapd %xmm0,%xmm2
   43403:	66 0f 54 d1          	andpd  %xmm1,%xmm2
   43407:	f2 0f 5d cb          	minsd  %xmm3,%xmm1
   4340b:	66 0f 55 c1          	andnpd %xmm1,%xmm0
   4340f:	66 0f 56 c2          	orpd   %xmm2,%xmm0
   43413:	f2 0f 10 8c 24 40 01 	movsd  0x140(%rsp),%xmm1
   4341a:	00 00 
   4341c:	bf 01 00 00 00       	mov    $0x1,%edi
   43421:	ff 15 a1 0a 0c 00    	call   *0xc0aa1(%rip)        # 103ec8 <_DYNAMIC+0x468>
   43427:	66 0f 29 44 24 40    	movapd %xmm0,0x40(%rsp)
   4342d:	f2 0f 10 84 24 70 0d 	movsd  0xd70(%rsp),%xmm0
   43434:	00 00 
   43436:	f2 0f 11 44 24 70    	movsd  %xmm0,0x70(%rsp)
   4343c:	48 8d bc 24 90 01 00 	lea    0x190(%rsp),%rdi
   43443:	00 
   43444:	e8 c7 71 ff ff       	call   3a610 <core::ptr::drop_in_place<alloc::vec::Vec<alloc::string::String>>>
   43449:	66 0f 28 05 6f 30 fd 	movapd -0x2cf91(%rip),%xmm0        # 164c0 <GCC_except_table128+0x23c>
   43450:	ff 
   43451:	66 0f 54 44 24 40    	andpd  0x40(%rsp),%xmm0
   43457:	66 0f 2e 05 e9 2e fd 	ucomisd -0x2d117(%rip),%xmm0        # 16348 <GCC_except_table128+0xc4>
   4345e:	ff 
   4345f:	0f 86 1d 0f 00 00    	jbe    44382 <<strategy_comm5::StrategyComm5 as future_backtest_sdk::plugin::StrategyPlugin>::on_signal+0x5072>
   43465:	f2 0f 10 84 24 a8 00 	movsd  0xa8(%rsp),%xmm0
   4346c:	00 00 
   4346e:	f2 0f 11 84 24 d0 00 	movsd  %xmm0,0xd0(%rsp)
   43475:	00 00 
   43477:	48 8d 05 0b 64 fd ff 	lea    -0x29bf5(%rip),%rax        # 19889 <anon.8868ba55c3fc5525a110cabbb60004d5.109.llvm.6579149275953927878+0x485>
   4347e:	48 8d 0d 03 64 fd ff 	lea    -0x29bfd(%rip),%rcx        # 19888 <anon.8868ba55c3fc5525a110cabbb60004d5.109.llvm.6579149275953927878+0x484>
   43485:	80 7c 24 17 00       	cmpb   $0x0,0x17(%rsp)
   4348a:	48 0f 45 c8          	cmovne %rax,%rcx
   4348e:	f2 0f 10 84 24 d8 0c 	movsd  0xcd8(%rsp),%xmm0
   43495:	00 00 
   43497:	f2 0f 11 84 24 20 01 	movsd  %xmm0,0x120(%rsp)
   4349e:	00 00 
   434a0:	48 89 8c 24 f0 02 00 	mov    %rcx,0x2f0(%rsp)
   434a7:	00 
   434a8:	48 c7 84 24 f8 02 00 	movq   $0x1,0x2f8(%rsp)
   434af:	00 01 00 00 00 
   434b4:	48 8d 05 d0 63 fd ff 	lea    -0x29c30(%rip),%rax        # 1988b <anon.8868ba55c3fc5525a110cabbb60004d5.109.llvm.6579149275953927878+0x487>
   434bb:	48 8d 0d c8 63 fd ff 	lea    -0x29c38(%rip),%rcx        # 1988a <anon.8868ba55c3fc5525a110cabbb60004d5.109.llvm.6579149275953927878+0x486>
   434c2:	45 84 e4             	test   %r12b,%r12b
   434c5:	48 0f 45 c8          	cmovne %rax,%rcx
   434c9:	48 89 8c 24 50 01 00 	mov    %rcx,0x150(%rsp)
   434d0:	00 
   434d1:	48 c7 84 24 58 01 00 	movq   $0x1,0x158(%rsp)
   434d8:	00 01 00 00 00 
   434dd:	48 8d 84 24 c8 00 00 	lea    0xc8(%rsp),%rax
   434e4:	00 
   434e5:	48 89 84 24 90 01 00 	mov    %rax,0x190(%rsp)
   434ec:	00 
   434ed:	4c 89 bc 24 98 01 00 	mov    %r15,0x198(%rsp)
   434f4:	00 
   434f5:	48 8d 84 24 e8 02 00 	lea    0x2e8(%rsp),%rax
   434fc:	00 
   434fd:	48 89 84 24 a0 01 00 	mov    %rax,0x1a0(%rsp)
   43504:	00 
   43505:	4c 89 bc 24 a8 01 00 	mov    %r15,0x1a8(%rsp)
   4350c:	00 
   4350d:	48 8d 84 24 98 02 00 	lea    0x298(%rsp),%rax
   43514:	00 
   43515:	48 89 84 24 b0 01 00 	mov    %rax,0x1b0(%rsp)
   4351c:	00 
   4351d:	4c 89 bc 24 b8 01 00 	mov    %r15,0x1b8(%rsp)
   43524:	00 
   43525:	48 8d 84 24 b8 02 00 	lea    0x2b8(%rsp),%rax
   4352c:	00 
   4352d:	48 89 84 24 c0 01 00 	mov    %rax,0x1c0(%rsp)
   43534:	00 
   43535:	48 8d 15 04 74 ff ff 	lea    -0x8bfc(%rip),%rdx        # 3a940 <<alloc::string::String as core::fmt::Display>::fmt>
   4353c:	48 89 94 24 c8 01 00 	mov    %rdx,0x1c8(%rsp)
   43543:	00 
   43544:	48 8d 84 24 38 01 00 	lea    0x138(%rsp),%rax
   4354b:	00 
   4354c:	48 89 84 24 d0 01 00 	mov    %rax,0x1d0(%rsp)
   43553:	00 
   43554:	4c 89 bc 24 d8 01 00 	mov    %r15,0x1d8(%rsp)
   4355b:	00 
   4355c:	48 8d 84 24 f0 02 00 	lea    0x2f0(%rsp),%rax
   43563:	00 
   43564:	48 89 84 24 e0 01 00 	mov    %rax,0x1e0(%rsp)
   4356b:	00 
   4356c:	48 8d 05 9d 6c 03 00 	lea    0x36c9d(%rip),%rax        # 7a210 <<&T as core::fmt::Display>::fmt>
   43573:	48 89 84 24 e8 01 00 	mov    %rax,0x1e8(%rsp)
   4357a:	00 
   4357b:	48 8d 8c 24 50 01 00 	lea    0x150(%rsp),%rcx
   43582:	00 
   43583:	48 89 8c 24 f0 01 00 	mov    %rcx,0x1f0(%rsp)
   4358a:	00 
   4358b:	48 89 84 24 f8 01 00 	mov    %rax,0x1f8(%rsp)
   43592:	00 
   43593:	48 8d 84 24 00 03 00 	lea    0x300(%rsp),%rax
   4359a:	00 
   4359b:	48 89 84 24 00 02 00 	mov    %rax,0x200(%rsp)
   435a2:	00 
   435a3:	48 89 94 24 08 02 00 	mov    %rdx,0x208(%rsp)
   435aa:	00 
   435ab:	48 8d 84 24 a0 02 00 	lea    0x2a0(%rsp),%rax
   435b2:	00 
   435b3:	48 89 84 24 10 02 00 	mov    %rax,0x210(%rsp)
   435ba:	00 
   435bb:	48 89 94 24 18 02 00 	mov    %rdx,0x218(%rsp)
   435c2:	00 
   435c3:	48 8d 05 7e a9 0b 00 	lea    0xba97e(%rip),%rax        # fdf48 <anon.8868ba55c3fc5525a110cabbb60004d5.152.llvm.6579149275953927878+0x1a8>
   435ca:	48 89 84 24 e0 00 00 	mov    %rax,0xe0(%rsp)
   435d1:	00 
   435d2:	48 c7 84 24 e8 00 00 	movq   $0x9,0xe8(%rsp)
   435d9:	00 09 00 00 00 
   435de:	48 c7 84 24 00 01 00 	movq   $0x0,0x100(%rsp)
   435e5:	00 00 00 00 00 
   435ea:	48 8d 84 24 90 01 00 	lea    0x190(%rsp),%rax
   435f1:	00 
   435f2:	48 89 84 24 f0 00 00 	mov    %rax,0xf0(%rsp)
   435f9:	00 
   435fa:	48 c7 84 24 f8 00 00 	movq   $0x9,0xf8(%rsp)
   43601:	00 09 00 00 00 
   43606:	48 8d bc 24 f8 0f 00 	lea    0xff8(%rsp),%rdi
   4360d:	00 
   4360e:	48 8d b4 24 e0 00 00 	lea    0xe0(%rsp),%rsi
   43615:	00 
   43616:	ff 15 fc 06 0c 00    	call   *0xc06fc(%rip)        # 103d18 <_DYNAMIC+0x2b8>
   4361c:	0f b6 84 24 e0 04 00 	movzbl 0x4e0(%rsp),%eax
   43623:	00 
   43624:	0c 06                	or     $0x6,%al
   43626:	c6 84 24 b8 0e 00 00 	movb   $0x3,0xeb8(%rsp)
   4362d:	03 
   4362e:	88 84 24 b9 0e 00 00 	mov    %al,0xeb9(%rsp)
   43635:	f2 0f 10 44 24 20    	movsd  0x20(%rsp),%xmm0
   4363b:	f2 0f 11 84 24 88 0e 	movsd  %xmm0,0xe88(%rsp)
   43642:	00 00 
   43644:	0f 28 44 24 40       	movaps 0x40(%rsp),%xmm0
   43649:	f2 0f 11 84 24 90 0e 	movsd  %xmm0,0xe90(%rsp)
   43650:	00 00 
   43652:	f2 0f 10 84 24 80 00 	movsd  0x80(%rsp),%xmm0
   43659:	00 00 
   4365b:	f2 0f 11 84 24 98 0e 	movsd  %xmm0,0xe98(%rsp)
   43662:	00 00 
   43664:	f2 0f 10 84 24 d0 00 	movsd  0xd0(%rsp),%xmm0
   4366b:	00 00 
   4366d:	f2 0f 11 84 24 a0 0e 	movsd  %xmm0,0xea0(%rsp)
   43674:	00 00 
   43676:	f2 0f 10 84 24 f0 04 	movsd  0x4f0(%rsp),%xmm0
   4367d:	00 00 
   4367f:	f2 0f 11 84 24 a8 0e 	movsd  %xmm0,0xea8(%rsp)
   43686:	00 00 
   43688:	f2 0f 10 84 24 20 01 	movsd  0x120(%rsp),%xmm0
   4368f:	00 00 
   43691:	f2 0f 11 84 24 b0 0e 	movsd  %xmm0,0xeb0(%rsp)
   43698:	00 00 
   4369a:	0f 10 84 24 f8 0f 00 	movups 0xff8(%rsp),%xmm0
   436a1:	00 
   436a2:	0f 29 84 24 70 0e 00 	movaps %xmm0,0xe70(%rsp)
   436a9:	00 
   436aa:	48 8b 84 24 08 10 00 	mov    0x1008(%rsp),%rax
   436b1:	00 
   436b2:	48 89 84 24 80 0e 00 	mov    %rax,0xe80(%rsp)
   436b9:	00 
   436ba:	48 8d b4 24 70 0e 00 	lea    0xe70(%rsp),%rsi
   436c1:	00 
   436c2:	48 8b 7c 24 18       	mov    0x18(%rsp),%rdi
   436c7:	f2 0f 10 44 24 70    	movsd  0x70(%rsp),%xmm0
   436cd:	e8 ae 14 00 00       	call   44b80 <strategy_comm5::place>
   436d2:	49 89 c5             	mov    %rax,%r13
   436d5:	48 85 c0             	test   %rax,%rax
   436d8:	0f 85 e1 0b 00 00    	jne    442bf <<strategy_comm5::StrategyComm5 as future_backtest_sdk::plugin::StrategyPlugin>::on_signal+0x4faf>
   436de:	80 bc 24 19 0e 00 00 	cmpb   $0x1,0xe19(%rsp)
   436e5:	01 
   436e6:	0f 85 96 0c 00 00    	jne    44382 <<strategy_comm5::StrategyComm5 as future_backtest_sdk::plugin::StrategyPlugin>::on_signal+0x5072>
   436ec:	48 8d 15 2d a9 0b 00 	lea    0xba92d(%rip),%rdx        # fe020 <anon.8868ba55c3fc5525a110cabbb60004d5.152.llvm.6579149275953927878+0x280>
   436f3:	48 8d bc 24 50 01 00 	lea    0x150(%rsp),%rdi
   436fa:	00 
   436fb:	48 8d 74 24 58       	lea    0x58(%rsp),%rsi
   43700:	ff 15 b2 06 0c 00    	call   *0xc06b2(%rip)        # 103db8 <_DYNAMIC+0x358>
   43706:	f2 0f 10 84 24 b0 00 	movsd  0xb0(%rsp),%xmm0
   4370d:	00 00 
   4370f:	f2 0f 11 84 24 e0 00 	movsd  %xmm0,0xe0(%rsp)
   43716:	00 00 
   43718:	f2 0f 10 84 24 80 00 	movsd  0x80(%rsp),%xmm0
   4371f:	00 00 
   43721:	f2 0f 11 84 24 e8 00 	movsd  %xmm0,0xe8(%rsp)
   43728:	00 00 
   4372a:	f2 0f 10 84 24 a0 00 	movsd  0xa0(%rsp),%xmm0
   43731:	00 00 
   43733:	f2 0f 11 84 24 f0 00 	movsd  %xmm0,0xf0(%rsp)
   4373a:	00 00 
   4373c:	48 8b b4 24 90 00 00 	mov    0x90(%rsp),%rsi
   43743:	00 
   43744:	48 81 c6 98 05 00 00 	add    $0x598,%rsi
   4374b:	48 8d bc 24 90 01 00 	lea    0x190(%rsp),%rdi
   43752:	00 
   43753:	48 8d 94 24 50 01 00 	lea    0x150(%rsp),%rdx
   4375a:	00 
   4375b:	48 8d 8c 24 e0 00 00 	lea    0xe0(%rsp),%rcx
   43762:	00 
   43763:	e8 58 f7 02 00       	call   72ec0 <hashbrown::map::HashMap<K,V,S,A>::insert>
   43768:	e9 15 0c 00 00       	jmp    44382 <<strategy_comm5::StrategyComm5 as future_backtest_sdk::plugin::StrategyPlugin>::on_signal+0x5072>
   4376d:	f2 0f 58 84 24 20 08 	addsd  0x820(%rsp),%xmm0
   43774:	00 00 
   43776:	66 0f 2e d1          	ucomisd %xmm1,%xmm2
   4377a:	0f 87 4d fb ff ff    	ja     432cd <<strategy_comm5::StrategyComm5 as future_backtest_sdk::plugin::StrategyPlugin>::on_signal+0x3fbd>
   43780:	f2 0f 10 84 24 78 0d 	movsd  0xd78(%rsp),%xmm0
   43787:	00 00 
   43789:	66 0f 57 d2          	xorpd  %xmm2,%xmm2
   4378d:	66 0f 2e c2          	ucomisd %xmm2,%xmm0
   43791:	76 21                	jbe    437b4 <<strategy_comm5::StrategyComm5 as future_backtest_sdk::plugin::StrategyPlugin>::on_signal+0x44a4>
   43793:	66 0f 28 d1          	movapd %xmm1,%xmm2
   43797:	f2 0f c2 d1 03       	cmpunordsd %xmm1,%xmm2
   4379c:	66 0f 28 da          	movapd %xmm2,%xmm3
   437a0:	66 0f 54 d8          	andpd  %xmm0,%xmm3
   437a4:	f2 0f 5d c1          	minsd  %xmm1,%xmm0
   437a8:	66 0f 55 d0          	andnpd %xmm0,%xmm2
   437ac:	66 0f 56 d3          	orpd   %xmm3,%xmm2
   437b0:	66 0f 28 ca          	movapd %xmm2,%xmm1
   437b4:	66 0f 57 0d c4 33 fd 	xorpd  -0x2cc3c(%rip),%xmm1        # 16b80 <anon.2bc08f40ad58cb635718c2f09dbb11ab.6.llvm.4096812584824358744+0x2a0>
   437bb:	ff 
   437bc:	f2 0f 10 5c 24 70    	movsd  0x70(%rsp),%xmm3
   437c2:	66 0f 28 c3          	movapd %xmm3,%xmm0
   437c6:	f2 0f c2 c3 03       	cmpunordsd %xmm3,%xmm0
   437cb:	66 0f 28 d0          	movapd %xmm0,%xmm2
   437cf:	66 0f 54 d1          	andpd  %xmm1,%xmm2
   437d3:	f2 0f 5f cb          	maxsd  %xmm3,%xmm1
   437d7:	66 0f 55 c1          	andnpd %xmm1,%xmm0
   437db:	66 0f 56 c2          	orpd   %xmm2,%xmm0
   437df:	f2 0f 10 8c 24 40 01 	movsd  0x140(%rsp),%xmm1
   437e6:	00 00 
   437e8:	bf 01 00 00 00       	mov    $0x1,%edi
   437ed:	ff 15 d5 06 0c 00    	call   *0xc06d5(%rip)        # 103ec8 <_DYNAMIC+0x468>
   437f3:	66 0f 29 44 24 40    	movapd %xmm0,0x40(%rsp)
   437f9:	f2 0f 10 84 24 70 0d 	movsd  0xd70(%rsp),%xmm0
   43800:	00 00 
   43802:	f2 0f 11 44 24 70    	movsd  %xmm0,0x70(%rsp)
   43808:	48 8d bc 24 90 01 00 	lea    0x190(%rsp),%rdi
   4380f:	00 
   43810:	e8 fb 6d ff ff       	call   3a610 <core::ptr::drop_in_place<alloc::vec::Vec<alloc::string::String>>>
   43815:	66 0f 28 05 a3 2c fd 	movapd -0x2d35d(%rip),%xmm0        # 164c0 <GCC_except_table128+0x23c>
   4381c:	ff 
   4381d:	66 0f 54 44 24 40    	andpd  0x40(%rsp),%xmm0
   43823:	66 0f 2e 05 1d 2b fd 	ucomisd -0x2d4e3(%rip),%xmm0        # 16348 <GCC_except_table128+0xc4>
   4382a:	ff 
   4382b:	0f 86 51 0b 00 00    	jbe    44382 <<strategy_comm5::StrategyComm5 as future_backtest_sdk::plugin::StrategyPlugin>::on_signal+0x5072>
   43831:	f2 0f 10 84 24 a8 00 	movsd  0xa8(%rsp),%xmm0
   43838:	00 00 
   4383a:	f2 0f 11 84 24 20 01 	movsd  %xmm0,0x120(%rsp)
   43841:	00 00 
   43843:	48 8d 05 3f 60 fd ff 	lea    -0x29fc1(%rip),%rax        # 19889 <anon.8868ba55c3fc5525a110cabbb60004d5.109.llvm.6579149275953927878+0x485>
   4384a:	48 8d 0d 37 60 fd ff 	lea    -0x29fc9(%rip),%rcx        # 19888 <anon.8868ba55c3fc5525a110cabbb60004d5.109.llvm.6579149275953927878+0x484>
   43851:	80 7c 24 17 00       	cmpb   $0x0,0x17(%rsp)
   43856:	48 0f 45 c8          	cmovne %rax,%rcx
   4385a:	f2 0f 10 84 24 d8 0c 	movsd  0xcd8(%rsp),%xmm0
   43861:	00 00 
   43863:	f2 0f 11 84 24 d0 02 	movsd  %xmm0,0x2d0(%rsp)
   4386a:	00 00 
   4386c:	48 89 8c 24 f0 02 00 	mov    %rcx,0x2f0(%rsp)
   43873:	00 
   43874:	48 c7 84 24 f8 02 00 	movq   $0x1,0x2f8(%rsp)
   4387b:	00 01 00 00 00 
   43880:	48 8d 05 04 60 fd ff 	lea    -0x29ffc(%rip),%rax        # 1988b <anon.8868ba55c3fc5525a110cabbb60004d5.109.llvm.6579149275953927878+0x487>
   43887:	48 8d 0d fc 5f fd ff 	lea    -0x2a004(%rip),%rcx        # 1988a <anon.8868ba55c3fc5525a110cabbb60004d5.109.llvm.6579149275953927878+0x486>
   4388e:	45 84 e4             	test   %r12b,%r12b
   43891:	48 0f 45 c8          	cmovne %rax,%rcx
   43895:	48 89 8c 24 50 01 00 	mov    %rcx,0x150(%rsp)
   4389c:	00 
   4389d:	48 c7 84 24 58 01 00 	movq   $0x1,0x158(%rsp)
   438a4:	00 01 00 00 00 
   438a9:	48 8d 84 24 c8 00 00 	lea    0xc8(%rsp),%rax
   438b0:	00 
   438b1:	48 89 84 24 90 01 00 	mov    %rax,0x190(%rsp)
   438b8:	00 
   438b9:	4c 89 bc 24 98 01 00 	mov    %r15,0x198(%rsp)
   438c0:	00 
   438c1:	48 8d 84 24 e8 02 00 	lea    0x2e8(%rsp),%rax
   438c8:	00 
   438c9:	48 89 84 24 a0 01 00 	mov    %rax,0x1a0(%rsp)
   438d0:	00 
   438d1:	4c 89 bc 24 a8 01 00 	mov    %r15,0x1a8(%rsp)
   438d8:	00 
   438d9:	48 8d 84 24 98 02 00 	lea    0x298(%rsp),%rax
   438e0:	00 
   438e1:	48 89 84 24 b0 01 00 	mov    %rax,0x1b0(%rsp)
   438e8:	00 
   438e9:	4c 89 bc 24 b8 01 00 	mov    %r15,0x1b8(%rsp)
   438f0:	00 
   438f1:	48 8d 84 24 b8 02 00 	lea    0x2b8(%rsp),%rax
   438f8:	00 
   438f9:	48 89 84 24 c0 01 00 	mov    %rax,0x1c0(%rsp)
   43900:	00 
   43901:	48 8d 15 38 70 ff ff 	lea    -0x8fc8(%rip),%rdx        # 3a940 <<alloc::string::String as core::fmt::Display>::fmt>
   43908:	48 89 94 24 c8 01 00 	mov    %rdx,0x1c8(%rsp)
   4390f:	00 
   43910:	48 8d 84 24 38 01 00 	lea    0x138(%rsp),%rax
   43917:	00 
   43918:	48 89 84 24 d0 01 00 	mov    %rax,0x1d0(%rsp)
   4391f:	00 
   43920:	4c 89 bc 24 d8 01 00 	mov    %r15,0x1d8(%rsp)
   43927:	00 
   43928:	48 8d 84 24 f0 02 00 	lea    0x2f0(%rsp),%rax
   4392f:	00 
   43930:	48 89 84 24 e0 01 00 	mov    %rax,0x1e0(%rsp)
   43937:	00 
   43938:	48 8d 05 d1 68 03 00 	lea    0x368d1(%rip),%rax        # 7a210 <<&T as core::fmt::Display>::fmt>
   4393f:	48 89 84 24 e8 01 00 	mov    %rax,0x1e8(%rsp)
   43946:	00 
   43947:	48 8d 8c 24 50 01 00 	lea    0x150(%rsp),%rcx
   4394e:	00 
   4394f:	48 89 8c 24 f0 01 00 	mov    %rcx,0x1f0(%rsp)
   43956:	00 
   43957:	48 89 84 24 f8 01 00 	mov    %rax,0x1f8(%rsp)
   4395e:	00 
   4395f:	48 8d 84 24 00 03 00 	lea    0x300(%rsp),%rax
   43966:	00 
   43967:	48 89 84 24 00 02 00 	mov    %rax,0x200(%rsp)
   4396e:	00 
   4396f:	48 89 94 24 08 02 00 	mov    %rdx,0x208(%rsp)
   43976:	00 
   43977:	48 8d 84 24 a0 02 00 	lea    0x2a0(%rsp),%rax
   4397e:	00 
   4397f:	48 89 84 24 10 02 00 	mov    %rax,0x210(%rsp)
   43986:	00 
   43987:	48 89 94 24 18 02 00 	mov    %rdx,0x218(%rsp)
   4398e:	00 
   4398f:	48 8d 05 b2 a5 0b 00 	lea    0xba5b2(%rip),%rax        # fdf48 <anon.8868ba55c3fc5525a110cabbb60004d5.152.llvm.6579149275953927878+0x1a8>
   43996:	48 89 84 24 e0 00 00 	mov    %rax,0xe0(%rsp)
   4399d:	00 
   4399e:	48 c7 84 24 e8 00 00 	movq   $0x9,0xe8(%rsp)
   439a5:	00 09 00 00 00 
   439aa:	48 c7 84 24 00 01 00 	movq   $0x0,0x100(%rsp)
   439b1:	00 00 00 00 00 
   439b6:	48 8d 84 24 90 01 00 	lea    0x190(%rsp),%rax
   439bd:	00 
   439be:	48 89 84 24 f0 00 00 	mov    %rax,0xf0(%rsp)
   439c5:	00 
   439c6:	48 c7 84 24 f8 00 00 	movq   $0x9,0xf8(%rsp)
   439cd:	00 09 00 00 00 
   439d2:	48 8d bc 24 e0 0f 00 	lea    0xfe0(%rsp),%rdi
   439d9:	00 
   439da:	48 8d b4 24 e0 00 00 	lea    0xe0(%rsp),%rsi
   439e1:	00 
   439e2:	ff 15 30 03 0c 00    	call   *0xc0330(%rip)        # 103d18 <_DYNAMIC+0x2b8>
   439e8:	40 8a ac 24 d0 00 00 	mov    0xd0(%rsp),%bpl
   439ef:	00 
   439f0:	8d 44 6d 05          	lea    0x5(%rbp,%rbp,2),%eax
   439f4:	c6 84 24 68 0e 00 00 	movb   $0x1,0xe68(%rsp)
   439fb:	01 
   439fc:	88 84 24 69 0e 00 00 	mov    %al,0xe69(%rsp)
   43a03:	f2 0f 10 44 24 20    	movsd  0x20(%rsp),%xmm0
   43a09:	f2 0f 11 84 24 38 0e 	movsd  %xmm0,0xe38(%rsp)
   43a10:	00 00 
   43a12:	0f 28 44 24 40       	movaps 0x40(%rsp),%xmm0
   43a17:	f2 0f 11 84 24 40 0e 	movsd  %xmm0,0xe40(%rsp)
   43a1e:	00 00 
   43a20:	f2 0f 10 84 24 b0 00 	movsd  0xb0(%rsp),%xmm0
   43a27:	00 00 
   43a29:	f2 0f 11 84 24 48 0e 	movsd  %xmm0,0xe48(%rsp)
   43a30:	00 00 
   43a32:	f2 0f 10 84 24 20 01 	movsd  0x120(%rsp),%xmm0
   43a39:	00 00 
   43a3b:	f2 0f 11 84 24 50 0e 	movsd  %xmm0,0xe50(%rsp)
   43a42:	00 00 
   43a44:	f2 0f 10 84 24 68 03 	movsd  0x368(%rsp),%xmm0
   43a4b:	00 00 
   43a4d:	f2 0f 11 84 24 58 0e 	movsd  %xmm0,0xe58(%rsp)
   43a54:	00 00 
   43a56:	f2 0f 10 84 24 d0 02 	movsd  0x2d0(%rsp),%xmm0
   43a5d:	00 00 
   43a5f:	f2 0f 11 84 24 60 0e 	movsd  %xmm0,0xe60(%rsp)
   43a66:	00 00 
   43a68:	0f 10 84 24 e0 0f 00 	movups 0xfe0(%rsp),%xmm0
   43a6f:	00 
   43a70:	0f 29 84 24 20 0e 00 	movaps %xmm0,0xe20(%rsp)
   43a77:	00 
   43a78:	48 8b 84 24 f0 0f 00 	mov    0xff0(%rsp),%rax
   43a7f:	00 
   43a80:	48 89 84 24 30 0e 00 	mov    %rax,0xe30(%rsp)
   43a87:	00 
   43a88:	48 8d b4 24 20 0e 00 	lea    0xe20(%rsp),%rsi
   43a8f:	00 
   43a90:	48 8b 7c 24 18       	mov    0x18(%rsp),%rdi
   43a95:	f2 0f 10 44 24 70    	movsd  0x70(%rsp),%xmm0
   43a9b:	e8 e0 10 00 00       	call   44b80 <strategy_comm5::place>
   43aa0:	49 89 c5             	mov    %rax,%r13
   43aa3:	48 85 c0             	test   %rax,%rax
   43aa6:	0f 85 13 08 00 00    	jne    442bf <<strategy_comm5::StrategyComm5 as future_backtest_sdk::plugin::StrategyPlugin>::on_signal+0x4faf>
   43aac:	80 bc 24 19 0e 00 00 	cmpb   $0x1,0xe19(%rsp)
   43ab3:	01 
   43ab4:	0f 85 c8 08 00 00    	jne    44382 <<strategy_comm5::StrategyComm5 as future_backtest_sdk::plugin::StrategyPlugin>::on_signal+0x5072>
   43aba:	48 8d 15 2f a5 0b 00 	lea    0xba52f(%rip),%rdx        # fdff0 <anon.8868ba55c3fc5525a110cabbb60004d5.152.llvm.6579149275953927878+0x250>
   43ac1:	48 8d bc 24 50 01 00 	lea    0x150(%rsp),%rdi
   43ac8:	00 
   43ac9:	48 8d 74 24 58       	lea    0x58(%rsp),%rsi
   43ace:	ff 15 e4 02 0c 00    	call   *0xc02e4(%rip)        # 103db8 <_DYNAMIC+0x358>
   43ad4:	f2 0f 10 84 24 b0 00 	movsd  0xb0(%rsp),%xmm0
   43adb:	00 00 
   43add:	f2 0f 11 84 24 e0 00 	movsd  %xmm0,0xe0(%rsp)
   43ae4:	00 00 
   43ae6:	f2 0f 10 84 24 80 00 	movsd  0x80(%rsp),%xmm0
   43aed:	00 00 
   43aef:	f2 0f 11 84 24 e8 00 	movsd  %xmm0,0xe8(%rsp)
   43af6:	00 00 
   43af8:	f2 0f 10 84 24 a0 00 	movsd  0xa0(%rsp),%xmm0
   43aff:	00 00 
   43b01:	f2 0f 11 84 24 f0 00 	movsd  %xmm0,0xf0(%rsp)
   43b08:	00 00 
   43b0a:	48 8b b4 24 90 00 00 	mov    0x90(%rsp),%rsi
   43b11:	00 
   43b12:	48 81 c6 98 05 00 00 	add    $0x598,%rsi
   43b19:	48 8d bc 24 90 01 00 	lea    0x190(%rsp),%rdi
   43b20:	00 
   43b21:	48 8d 94 24 50 01 00 	lea    0x150(%rsp),%rdx
   43b28:	00 
   43b29:	48 8d 8c 24 e0 00 00 	lea    0xe0(%rsp),%rcx
   43b30:	00 
   43b31:	e8 8a f3 02 00       	call   72ec0 <hashbrown::map::HashMap<K,V,S,A>::insert>
   43b36:	e9 47 08 00 00       	jmp    44382 <<strategy_comm5::StrategyComm5 as future_backtest_sdk::plugin::StrategyPlugin>::on_signal+0x5072>
   43b3b:	f2 0f 58 84 24 20 08 	addsd  0x820(%rsp),%xmm0
   43b42:	00 00 
   43b44:	66 0f 2e e1          	ucomisd %xmm1,%xmm4
   43b48:	0f 87 37 f8 ff ff    	ja     43385 <<strategy_comm5::StrategyComm5 as future_backtest_sdk::plugin::StrategyPlugin>::on_signal+0x4075>
   43b4e:	f2 0f 10 84 24 78 0d 	movsd  0xd78(%rsp),%xmm0
   43b55:	00 00 
   43b57:	66 0f 57 d2          	xorpd  %xmm2,%xmm2
   43b5b:	66 0f 2e c2          	ucomisd %xmm2,%xmm0
   43b5f:	76 21                	jbe    43b82 <<strategy_comm5::StrategyComm5 as future_backtest_sdk::plugin::StrategyPlugin>::on_signal+0x4872>
   43b61:	66 0f 28 d1          	movapd %xmm1,%xmm2
   43b65:	f2 0f c2 d1 03       	cmpunordsd %xmm1,%xmm2
   43b6a:	66 0f 28 da          	movapd %xmm2,%xmm3
   43b6e:	66 0f 54 d8          	andpd  %xmm0,%xmm3
   43b72:	f2 0f 5d c1          	minsd  %xmm1,%xmm0
   43b76:	66 0f 55 d0          	andnpd %xmm0,%xmm2
   43b7a:	66 0f 56 d3          	orpd   %xmm3,%xmm2
   43b7e:	66 0f 28 ca          	movapd %xmm2,%xmm1
   43b82:	66 0f 57 0d f6 2f fd 	xorpd  -0x2d00a(%rip),%xmm1        # 16b80 <anon.2bc08f40ad58cb635718c2f09dbb11ab.6.llvm.4096812584824358744+0x2a0>
   43b89:	ff 
   43b8a:	f2 0f 10 5c 24 70    	movsd  0x70(%rsp),%xmm3
   43b90:	66 0f 28 c3          	movapd %xmm3,%xmm0
   43b94:	f2 0f c2 c3 03       	cmpunordsd %xmm3,%xmm0
   43b99:	66 0f 28 d0          	movapd %xmm0,%xmm2
   43b9d:	66 0f 54 d1          	andpd  %xmm1,%xmm2
   43ba1:	f2 0f 5f cb          	maxsd  %xmm3,%xmm1
   43ba5:	66 0f 55 c1          	andnpd %xmm1,%xmm0
   43ba9:	66 0f 56 c2          	orpd   %xmm2,%xmm0
   43bad:	f2 0f 10 8c 24 40 01 	movsd  0x140(%rsp),%xmm1
   43bb4:	00 00 
   43bb6:	bf 01 00 00 00       	mov    $0x1,%edi
   43bbb:	ff 15 07 03 0c 00    	call   *0xc0307(%rip)        # 103ec8 <_DYNAMIC+0x468>
   43bc1:	66 0f 29 44 24 40    	movapd %xmm0,0x40(%rsp)
   43bc7:	f2 0f 10 84 24 70 0d 	movsd  0xd70(%rsp),%xmm0
   43bce:	00 00 
   43bd0:	f2 0f 11 44 24 70    	movsd  %xmm0,0x70(%rsp)
   43bd6:	48 8d bc 24 90 01 00 	lea    0x190(%rsp),%rdi
   43bdd:	00 
   43bde:	e8 2d 6a ff ff       	call   3a610 <core::ptr::drop_in_place<alloc::vec::Vec<alloc::string::String>>>
   43be3:	66 0f 28 05 d5 28 fd 	movapd -0x2d72b(%rip),%xmm0        # 164c0 <GCC_except_table128+0x23c>
   43bea:	ff 
   43beb:	66 0f 54 44 24 40    	andpd  0x40(%rsp),%xmm0
   43bf1:	66 0f 2e 05 4f 27 fd 	ucomisd -0x2d8b1(%rip),%xmm0        # 16348 <GCC_except_table128+0xc4>
   43bf8:	ff 
   43bf9:	0f 86 83 07 00 00    	jbe    44382 <<strategy_comm5::StrategyComm5 as future_backtest_sdk::plugin::StrategyPlugin>::on_signal+0x5072>
   43bff:	f2 0f 10 84 24 a8 00 	movsd  0xa8(%rsp),%xmm0
   43c06:	00 00 
   43c08:	f2 0f 11 84 24 20 01 	movsd  %xmm0,0x120(%rsp)
   43c0f:	00 00 
   43c11:	48 8d 05 71 5c fd ff 	lea    -0x2a38f(%rip),%rax        # 19889 <anon.8868ba55c3fc5525a110cabbb60004d5.109.llvm.6579149275953927878+0x485>
   43c18:	48 8d 0d 69 5c fd ff 	lea    -0x2a397(%rip),%rcx        # 19888 <anon.8868ba55c3fc5525a110cabbb60004d5.109.llvm.6579149275953927878+0x484>
   43c1f:	80 7c 24 17 00       	cmpb   $0x0,0x17(%rsp)
   43c24:	48 0f 45 c8          	cmovne %rax,%rcx
   43c28:	f2 0f 10 84 24 d8 0c 	movsd  0xcd8(%rsp),%xmm0
   43c2f:	00 00 
   43c31:	f2 0f 11 84 24 d0 02 	movsd  %xmm0,0x2d0(%rsp)
   43c38:	00 00 
   43c3a:	48 89 8c 24 f0 02 00 	mov    %rcx,0x2f0(%rsp)
   43c41:	00 
   43c42:	48 c7 84 24 f8 02 00 	movq   $0x1,0x2f8(%rsp)
   43c49:	00 01 00 00 00 
   43c4e:	48 8d 05 36 5c fd ff 	lea    -0x2a3ca(%rip),%rax        # 1988b <anon.8868ba55c3fc5525a110cabbb60004d5.109.llvm.6579149275953927878+0x487>
   43c55:	48 8d 0d 2e 5c fd ff 	lea    -0x2a3d2(%rip),%rcx        # 1988a <anon.8868ba55c3fc5525a110cabbb60004d5.109.llvm.6579149275953927878+0x486>
   43c5c:	45 84 e4             	test   %r12b,%r12b
   43c5f:	48 0f 45 c8          	cmovne %rax,%rcx
   43c63:	48 89 8c 24 50 01 00 	mov    %rcx,0x150(%rsp)
   43c6a:	00 
   43c6b:	48 c7 84 24 58 01 00 	movq   $0x1,0x158(%rsp)
   43c72:	00 01 00 00 00 
   43c77:	48 8d 84 24 c8 00 00 	lea    0xc8(%rsp),%rax
   43c7e:	00 
   43c7f:	48 89 84 24 90 01 00 	mov    %rax,0x190(%rsp)
   43c86:	00 
   43c87:	4c 89 bc 24 98 01 00 	mov    %r15,0x198(%rsp)
   43c8e:	00 
   43c8f:	48 8d 84 24 e8 02 00 	lea    0x2e8(%rsp),%rax
   43c96:	00 
   43c97:	48 89 84 24 a0 01 00 	mov    %rax,0x1a0(%rsp)
   43c9e:	00 
   43c9f:	4c 89 bc 24 a8 01 00 	mov    %r15,0x1a8(%rsp)
   43ca6:	00 
   43ca7:	48 8d 84 24 98 02 00 	lea    0x298(%rsp),%rax
   43cae:	00 
   43caf:	48 89 84 24 b0 01 00 	mov    %rax,0x1b0(%rsp)
   43cb6:	00 
   43cb7:	4c 89 bc 24 b8 01 00 	mov    %r15,0x1b8(%rsp)
   43cbe:	00 
   43cbf:	48 8d 84 24 b8 02 00 	lea    0x2b8(%rsp),%rax
   43cc6:	00 
   43cc7:	48 89 84 24 c0 01 00 	mov    %rax,0x1c0(%rsp)
   43cce:	00 
   43ccf:	48 8d 15 6a 6c ff ff 	lea    -0x9396(%rip),%rdx        # 3a940 <<alloc::string::String as core::fmt::Display>::fmt>
   43cd6:	48 89 94 24 c8 01 00 	mov    %rdx,0x1c8(%rsp)
   43cdd:	00 
   43cde:	48 8d 84 24 38 01 00 	lea    0x138(%rsp),%rax
   43ce5:	00 
   43ce6:	48 89 84 24 d0 01 00 	mov    %rax,0x1d0(%rsp)
   43ced:	00 
   43cee:	4c 89 bc 24 d8 01 00 	mov    %r15,0x1d8(%rsp)
   43cf5:	00 
   43cf6:	48 8d 84 24 f0 02 00 	lea    0x2f0(%rsp),%rax
   43cfd:	00 
   43cfe:	48 89 84 24 e0 01 00 	mov    %rax,0x1e0(%rsp)
   43d05:	00 
   43d06:	48 8d 05 03 65 03 00 	lea    0x36503(%rip),%rax        # 7a210 <<&T as core::fmt::Display>::fmt>
   43d0d:	48 89 84 24 e8 01 00 	mov    %rax,0x1e8(%rsp)
   43d14:	00 
   43d15:	48 8d 8c 24 50 01 00 	lea    0x150(%rsp),%rcx
   43d1c:	00 
   43d1d:	48 89 8c 24 f0 01 00 	mov    %rcx,0x1f0(%rsp)
   43d24:	00 
   43d25:	48 89 84 24 f8 01 00 	mov    %rax,0x1f8(%rsp)
   43d2c:	00 
   43d2d:	48 8d 84 24 00 03 00 	lea    0x300(%rsp),%rax
   43d34:	00 
   43d35:	48 89 84 24 00 02 00 	mov    %rax,0x200(%rsp)
   43d3c:	00 
   43d3d:	48 89 94 24 08 02 00 	mov    %rdx,0x208(%rsp)
   43d44:	00 
   43d45:	48 8d 84 24 a0 02 00 	lea    0x2a0(%rsp),%rax
   43d4c:	00 
   43d4d:	48 89 84 24 10 02 00 	mov    %rax,0x210(%rsp)
   43d54:	00 
   43d55:	48 89 94 24 18 02 00 	mov    %rdx,0x218(%rsp)
   43d5c:	00 
   43d5d:	48 8d 05 e4 a1 0b 00 	lea    0xba1e4(%rip),%rax        # fdf48 <anon.8868ba55c3fc5525a110cabbb60004d5.152.llvm.6579149275953927878+0x1a8>
   43d64:	48 89 84 24 e0 00 00 	mov    %rax,0xe0(%rsp)
   43d6b:	00 
   43d6c:	48 c7 84 24 e8 00 00 	movq   $0x9,0xe8(%rsp)
   43d73:	00 09 00 00 00 
   43d78:	48 c7 84 24 00 01 00 	movq   $0x0,0x100(%rsp)
   43d7f:	00 00 00 00 00 
   43d84:	48 8d 84 24 90 01 00 	lea    0x190(%rsp),%rax
   43d8b:	00 
   43d8c:	48 89 84 24 f0 00 00 	mov    %rax,0xf0(%rsp)
   43d93:	00 
   43d94:	48 c7 84 24 f8 00 00 	movq   $0x9,0xf8(%rsp)
   43d9b:	00 09 00 00 00 
   43da0:	48 8d bc 24 c8 0f 00 	lea    0xfc8(%rsp),%rdi
   43da7:	00 
   43da8:	48 8d b4 24 e0 00 00 	lea    0xe0(%rsp),%rsi
   43daf:	00 
   43db0:	ff 15 62 ff 0b 00    	call   *0xbff62(%rip)        # 103d18 <_DYNAMIC+0x2b8>
   43db6:	66 c7 84 24 a8 0f 00 	movw   $0x802,0xfa8(%rsp)
   43dbd:	00 02 08 
   43dc0:	f2 0f 10 44 24 20    	movsd  0x20(%rsp),%xmm0
   43dc6:	f2 0f 11 84 24 78 0f 	movsd  %xmm0,0xf78(%rsp)
   43dcd:	00 00 
   43dcf:	0f 28 44 24 40       	movaps 0x40(%rsp),%xmm0
   43dd4:	f2 0f 11 84 24 80 0f 	movsd  %xmm0,0xf80(%rsp)
   43ddb:	00 00 
   43ddd:	f2 0f 10 84 24 b0 00 	movsd  0xb0(%rsp),%xmm0
   43de4:	00 00 
   43de6:	f2 0f 11 84 24 88 0f 	movsd  %xmm0,0xf88(%rsp)
   43ded:	00 00 
   43def:	f2 0f 10 84 24 20 01 	movsd  0x120(%rsp),%xmm0
   43df6:	00 00 
   43df8:	f2 0f 11 84 24 90 0f 	movsd  %xmm0,0xf90(%rsp)
   43dff:	00 00 
   43e01:	f2 0f 10 84 24 d0 00 	movsd  0xd0(%rsp),%xmm0
   43e08:	00 00 
   43e0a:	f2 0f 11 84 24 98 0f 	movsd  %xmm0,0xf98(%rsp)
   43e11:	00 00 
   43e13:	f2 0f 10 84 24 d0 02 	movsd  0x2d0(%rsp),%xmm0
   43e1a:	00 00 
   43e1c:	f2 0f 11 84 24 a0 0f 	movsd  %xmm0,0xfa0(%rsp)
   43e23:	00 00 
   43e25:	0f 10 84 24 c8 0f 00 	movups 0xfc8(%rsp),%xmm0
   43e2c:	00 
   43e2d:	0f 29 84 24 60 0f 00 	movaps %xmm0,0xf60(%rsp)
   43e34:	00 
   43e35:	48 8b 84 24 d8 0f 00 	mov    0xfd8(%rsp),%rax
   43e3c:	00 
   43e3d:	48 89 84 24 70 0f 00 	mov    %rax,0xf70(%rsp)
   43e44:	00 
   43e45:	48 8d b4 24 60 0f 00 	lea    0xf60(%rsp),%rsi
   43e4c:	00 
   43e4d:	48 8b 7c 24 18       	mov    0x18(%rsp),%rdi
   43e52:	f2 0f 10 44 24 70    	movsd  0x70(%rsp),%xmm0
   43e58:	e8 23 0d 00 00       	call   44b80 <strategy_comm5::place>
   43e5d:	49 89 c5             	mov    %rax,%r13
   43e60:	48 85 c0             	test   %rax,%rax
   43e63:	0f 85 56 04 00 00    	jne    442bf <<strategy_comm5::StrategyComm5 as future_backtest_sdk::plugin::StrategyPlugin>::on_signal+0x4faf>
   43e69:	80 bc 24 19 0e 00 00 	cmpb   $0x1,0xe19(%rsp)
   43e70:	01 
   43e71:	0f 85 0b 05 00 00    	jne    44382 <<strategy_comm5::StrategyComm5 as future_backtest_sdk::plugin::StrategyPlugin>::on_signal+0x5072>
   43e77:	48 8d 15 8a a1 0b 00 	lea    0xba18a(%rip),%rdx        # fe008 <anon.8868ba55c3fc5525a110cabbb60004d5.152.llvm.6579149275953927878+0x268>
   43e7e:	48 8d bc 24 50 01 00 	lea    0x150(%rsp),%rdi
   43e85:	00 
   43e86:	48 8d 74 24 58       	lea    0x58(%rsp),%rsi
   43e8b:	ff 15 27 ff 0b 00    	call   *0xbff27(%rip)        # 103db8 <_DYNAMIC+0x358>
   43e91:	f2 0f 10 84 24 b0 00 	movsd  0xb0(%rsp),%xmm0
   43e98:	00 00 
   43e9a:	f2 0f 11 84 24 e0 00 	movsd  %xmm0,0xe0(%rsp)
   43ea1:	00 00 
   43ea3:	f2 0f 10 84 24 80 00 	movsd  0x80(%rsp),%xmm0
   43eaa:	00 00 
   43eac:	f2 0f 11 84 24 e8 00 	movsd  %xmm0,0xe8(%rsp)
   43eb3:	00 00 
   43eb5:	f2 0f 10 84 24 a0 00 	movsd  0xa0(%rsp),%xmm0
   43ebc:	00 00 
   43ebe:	f2 0f 11 84 24 f0 00 	movsd  %xmm0,0xf0(%rsp)
   43ec5:	00 00 
   43ec7:	48 8b b4 24 90 00 00 	mov    0x90(%rsp),%rsi
   43ece:	00 
   43ecf:	48 81 c6 98 05 00 00 	add    $0x598,%rsi
   43ed6:	48 8d bc 24 90 01 00 	lea    0x190(%rsp),%rdi
   43edd:	00 
   43ede:	48 8d 94 24 50 01 00 	lea    0x150(%rsp),%rdx
   43ee5:	00 
   43ee6:	48 8d 8c 24 e0 00 00 	lea    0xe0(%rsp),%rcx
   43eed:	00 
   43eee:	e8 cd ef 02 00       	call   72ec0 <hashbrown::map::HashMap<K,V,S,A>::insert>
   43ef3:	e9 8a 04 00 00       	jmp    44382 <<strategy_comm5::StrategyComm5 as future_backtest_sdk::plugin::StrategyPlugin>::on_signal+0x5072>
   43ef8:	f2 0f 10 84 24 50 08 	movsd  0x850(%rsp),%xmm0
   43eff:	00 00 
   43f01:	f2 0f 58 c1          	addsd  %xmm1,%xmm0
   43f05:	f2 0f 10 ac 24 58 08 	movsd  0x858(%rsp),%xmm5
   43f0c:	00 00 
   43f0e:	f2 0f 10 94 24 68 08 	movsd  0x868(%rsp),%xmm2
   43f15:	00 00 
   43f17:	66 0f 2e e9          	ucomisd %xmm1,%xmm5
   43f1b:	66 0f 28 f4          	movapd %xmm4,%xmm6
   43f1f:	f2 0f 10 1d 41 24 fd 	movsd  -0x2dbbf(%rip),%xmm3        # 16368 <GCC_except_table128+0xe4>
   43f26:	ff 
   43f27:	f2 0f 58 f3          	addsd  %xmm3,%xmm6
   43f2b:	66 0f 57 db          	xorpd  %xmm3,%xmm3
   43f2f:	f2 0f c2 dd 01       	cmpltsd %xmm5,%xmm3
   43f34:	66 0f 28 eb          	movapd %xmm3,%xmm5
   43f38:	66 0f 55 ec          	andnpd %xmm4,%xmm5
   43f3c:	66 0f 54 de          	andpd  %xmm6,%xmm3
   43f40:	66 0f 56 dd          	orpd   %xmm5,%xmm3
   43f44:	76 09                	jbe    43f4f <<strategy_comm5::StrategyComm5 as future_backtest_sdk::plugin::StrategyPlugin>::on_signal+0x4c3f>
   43f46:	f2 0f 58 84 24 60 08 	addsd  0x860(%rsp),%xmm0
   43f4d:	00 00 
   43f4f:	66 0f 2e d1          	ucomisd %xmm1,%xmm2
   43f53:	66 0f 28 eb          	movapd %xmm3,%xmm5
   43f57:	f2 0f 10 25 09 24 fd 	movsd  -0x2dbf7(%rip),%xmm4        # 16368 <GCC_except_table128+0xe4>
   43f5e:	ff 
   43f5f:	f2 0f 58 ec          	addsd  %xmm4,%xmm5
   43f63:	66 0f 57 e4          	xorpd  %xmm4,%xmm4
   43f67:	f2 0f c2 e2 01       	cmpltsd %xmm2,%xmm4
   43f6c:	66 0f 28 d4          	movapd %xmm4,%xmm2
   43f70:	66 0f 55 d3          	andnpd %xmm3,%xmm2
   43f74:	66 0f 54 e5          	andpd  %xmm5,%xmm4
   43f78:	66 0f 56 e2          	orpd   %xmm2,%xmm4
   43f7c:	77 23                	ja     43fa1 <<strategy_comm5::StrategyComm5 as future_backtest_sdk::plugin::StrategyPlugin>::on_signal+0x4c91>
   43f7e:	66 0f 2e e1          	ucomisd %xmm1,%xmm4
   43f82:	76 2c                	jbe    43fb0 <<strategy_comm5::StrategyComm5 as future_backtest_sdk::plugin::StrategyPlugin>::on_signal+0x4ca0>
   43f84:	f2 0f 5e c4          	divsd  %xmm4,%xmm0
   43f88:	66 0f 28 c8          	movapd %xmm0,%xmm1
   43f8c:	f2 0f 10 84 24 78 0d 	movsd  0xd78(%rsp),%xmm0
   43f93:	00 00 
   43f95:	66 0f 57 d2          	xorpd  %xmm2,%xmm2
   43f99:	66 0f 2e c2          	ucomisd %xmm2,%xmm0
   43f9d:	77 24                	ja     43fc3 <<strategy_comm5::StrategyComm5 as future_backtest_sdk::plugin::StrategyPlugin>::on_signal+0x4cb3>
   43f9f:	eb 43                	jmp    43fe4 <<strategy_comm5::StrategyComm5 as future_backtest_sdk::plugin::StrategyPlugin>::on_signal+0x4cd4>
   43fa1:	f2 0f 58 84 24 70 08 	addsd  0x870(%rsp),%xmm0
   43fa8:	00 00 
   43faa:	66 0f 2e e1          	ucomisd %xmm1,%xmm4
   43fae:	77 d4                	ja     43f84 <<strategy_comm5::StrategyComm5 as future_backtest_sdk::plugin::StrategyPlugin>::on_signal+0x4c74>
   43fb0:	f2 0f 10 84 24 78 0d 	movsd  0xd78(%rsp),%xmm0
   43fb7:	00 00 
   43fb9:	66 0f 57 d2          	xorpd  %xmm2,%xmm2
   43fbd:	66 0f 2e c2          	ucomisd %xmm2,%xmm0
   43fc1:	76 21                	jbe    43fe4 <<strategy_comm5::StrategyComm5 as future_backtest_sdk::plugin::StrategyPlugin>::on_signal+0x4cd4>
   43fc3:	66 0f 28 d1          	movapd %xmm1,%xmm2
   43fc7:	f2 0f c2 d1 03       	cmpunordsd %xmm1,%xmm2
   43fcc:	66 0f 28 da          	movapd %xmm2,%xmm3
   43fd0:	66 0f 54 d8          	andpd  %xmm0,%xmm3
   43fd4:	f2 0f 5d c1          	minsd  %xmm1,%xmm0
   43fd8:	66 0f 55 d0          	andnpd %xmm0,%xmm2
   43fdc:	66 0f 56 d3          	orpd   %xmm3,%xmm2
   43fe0:	66 0f 28 ca          	movapd %xmm2,%xmm1
   43fe4:	f2 0f 10 5c 24 70    	movsd  0x70(%rsp),%xmm3
   43fea:	66 0f 28 c3          	movapd %xmm3,%xmm0
   43fee:	f2 0f c2 c3 03       	cmpunordsd %xmm3,%xmm0
   43ff3:	66 0f 28 d0          	movapd %xmm0,%xmm2
   43ff7:	66 0f 54 d1          	andpd  %xmm1,%xmm2
   43ffb:	f2 0f 5d cb          	minsd  %xmm3,%xmm1
   43fff:	66 0f 55 c1          	andnpd %xmm1,%xmm0
   44003:	66 0f 56 c2          	orpd   %xmm2,%xmm0
   44007:	f2 0f 10 8c 24 40 01 	movsd  0x140(%rsp),%xmm1
   4400e:	00 00 
   44010:	bf 01 00 00 00       	mov    $0x1,%edi
   44015:	ff 15 ad fe 0b 00    	call   *0xbfead(%rip)        # 103ec8 <_DYNAMIC+0x468>
   4401b:	66 0f 29 44 24 40    	movapd %xmm0,0x40(%rsp)
   44021:	f2 0f 10 84 24 70 0d 	movsd  0xd70(%rsp),%xmm0
   44028:	00 00 
   4402a:	f2 0f 11 44 24 70    	movsd  %xmm0,0x70(%rsp)
   44030:	48 8d bc 24 90 01 00 	lea    0x190(%rsp),%rdi
   44037:	00 
   44038:	e8 d3 65 ff ff       	call   3a610 <core::ptr::drop_in_place<alloc::vec::Vec<alloc::string::String>>>
   4403d:	66 0f 28 05 7b 24 fd 	movapd -0x2db85(%rip),%xmm0        # 164c0 <GCC_except_table128+0x23c>
   44044:	ff 
   44045:	66 0f 54 44 24 40    	andpd  0x40(%rsp),%xmm0
   4404b:	66 0f 2e 05 f5 22 fd 	ucomisd -0x2dd0b(%rip),%xmm0        # 16348 <GCC_except_table128+0xc4>
   44052:	ff 
   44053:	0f 86 29 03 00 00    	jbe    44382 <<strategy_comm5::StrategyComm5 as future_backtest_sdk::plugin::StrategyPlugin>::on_signal+0x5072>
   44059:	f2 0f 10 84 24 a8 00 	movsd  0xa8(%rsp),%xmm0
   44060:	00 00 
   44062:	f2 0f 11 84 24 d0 00 	movsd  %xmm0,0xd0(%rsp)
   44069:	00 00 
   4406b:	48 8d 05 17 58 fd ff 	lea    -0x2a7e9(%rip),%rax        # 19889 <anon.8868ba55c3fc5525a110cabbb60004d5.109.llvm.6579149275953927878+0x485>
   44072:	48 8d 0d 0f 58 fd ff 	lea    -0x2a7f1(%rip),%rcx        # 19888 <anon.8868ba55c3fc5525a110cabbb60004d5.109.llvm.6579149275953927878+0x484>
   44079:	80 7c 24 17 00       	cmpb   $0x0,0x17(%rsp)
   4407e:	48 0f 45 c8          	cmovne %rax,%rcx
   44082:	f2 0f 10 84 24 d8 0c 	movsd  0xcd8(%rsp),%xmm0
   44089:	00 00 
   4408b:	f2 0f 11 84 24 20 01 	movsd  %xmm0,0x120(%rsp)
   44092:	00 00 
   44094:	48 89 8c 24 f0 02 00 	mov    %rcx,0x2f0(%rsp)
   4409b:	00 
   4409c:	48 c7 84 24 f8 02 00 	movq   $0x1,0x2f8(%rsp)
   440a3:	00 01 00 00 00 
   440a8:	48 8d 05 dc 57 fd ff 	lea    -0x2a824(%rip),%rax        # 1988b <anon.8868ba55c3fc5525a110cabbb60004d5.109.llvm.6579149275953927878+0x487>
   440af:	48 8d 0d d4 57 fd ff 	lea    -0x2a82c(%rip),%rcx        # 1988a <anon.8868ba55c3fc5525a110cabbb60004d5.109.llvm.6579149275953927878+0x486>
   440b6:	45 84 e4             	test   %r12b,%r12b
   440b9:	48 0f 45 c8          	cmovne %rax,%rcx
   440bd:	48 89 8c 24 50 01 00 	mov    %rcx,0x150(%rsp)
   440c4:	00 
   440c5:	48 c7 84 24 58 01 00 	movq   $0x1,0x158(%rsp)
   440cc:	00 01 00 00 00 
   440d1:	48 8d 84 24 c8 00 00 	lea    0xc8(%rsp),%rax
   440d8:	00 
   440d9:	48 89 84 24 90 01 00 	mov    %rax,0x190(%rsp)
   440e0:	00 
   440e1:	4c 89 bc 24 98 01 00 	mov    %r15,0x198(%rsp)
   440e8:	00 
   440e9:	48 8d 84 24 e8 02 00 	lea    0x2e8(%rsp),%rax
   440f0:	00 
   440f1:	48 89 84 24 a0 01 00 	mov    %rax,0x1a0(%rsp)
   440f8:	00 
   440f9:	4c 89 bc 24 a8 01 00 	mov    %r15,0x1a8(%rsp)
   44100:	00 
   44101:	48 8d 84 24 98 02 00 	lea    0x298(%rsp),%rax
   44108:	00 
   44109:	48 89 84 24 b0 01 00 	mov    %rax,0x1b0(%rsp)
   44110:	00 
   44111:	4c 89 bc 24 b8 01 00 	mov    %r15,0x1b8(%rsp)
   44118:	00 
   44119:	48 8d 84 24 b8 02 00 	lea    0x2b8(%rsp),%rax
   44120:	00 
   44121:	48 89 84 24 c0 01 00 	mov    %rax,0x1c0(%rsp)
   44128:	00 
   44129:	48 8d 15 10 68 ff ff 	lea    -0x97f0(%rip),%rdx        # 3a940 <<alloc::string::String as core::fmt::Display>::fmt>
   44130:	48 89 94 24 c8 01 00 	mov    %rdx,0x1c8(%rsp)
   44137:	00 
   44138:	48 8d 84 24 38 01 00 	lea    0x138(%rsp),%rax
   4413f:	00 
   44140:	48 89 84 24 d0 01 00 	mov    %rax,0x1d0(%rsp)
   44147:	00 
   44148:	4c 89 bc 24 d8 01 00 	mov    %r15,0x1d8(%rsp)
   4414f:	00 
   44150:	48 8d 84 24 f0 02 00 	lea    0x2f0(%rsp),%rax
   44157:	00 
   44158:	48 89 84 24 e0 01 00 	mov    %rax,0x1e0(%rsp)
   4415f:	00 
   44160:	48 8d 05 a9 60 03 00 	lea    0x360a9(%rip),%rax        # 7a210 <<&T as core::fmt::Display>::fmt>
   44167:	48 89 84 24 e8 01 00 	mov    %rax,0x1e8(%rsp)
   4416e:	00 
   4416f:	48 8d 8c 24 50 01 00 	lea    0x150(%rsp),%rcx
   44176:	00 
   44177:	48 89 8c 24 f0 01 00 	mov    %rcx,0x1f0(%rsp)
   4417e:	00 
   4417f:	48 89 84 24 f8 01 00 	mov    %rax,0x1f8(%rsp)
   44186:	00 
   44187:	48 8d 84 24 00 03 00 	lea    0x300(%rsp),%rax
   4418e:	00 
   4418f:	48 89 84 24 00 02 00 	mov    %rax,0x200(%rsp)
   44196:	00 
   44197:	48 89 94 24 08 02 00 	mov    %rdx,0x208(%rsp)
   4419e:	00 
   4419f:	48 8d 84 24 a0 02 00 	lea    0x2a0(%rsp),%rax
   441a6:	00 
   441a7:	48 89 84 24 10 02 00 	mov    %rax,0x210(%rsp)
   441ae:	00 
   441af:	48 89 94 24 18 02 00 	mov    %rdx,0x218(%rsp)
   441b6:	00 
   441b7:	48 8d 05 8a 9d 0b 00 	lea    0xb9d8a(%rip),%rax        # fdf48 <anon.8868ba55c3fc5525a110cabbb60004d5.152.llvm.6579149275953927878+0x1a8>
   441be:	48 89 84 24 e0 00 00 	mov    %rax,0xe0(%rsp)
   441c5:	00 
   441c6:	48 c7 84 24 e8 00 00 	movq   $0x9,0xe8(%rsp)
   441cd:	00 09 00 00 00 
   441d2:	48 c7 84 24 00 01 00 	movq   $0x0,0x100(%rsp)
   441d9:	00 00 00 00 00 
   441de:	48 8d 84 24 90 01 00 	lea    0x190(%rsp),%rax
   441e5:	00 
   441e6:	48 89 84 24 f0 00 00 	mov    %rax,0xf0(%rsp)
   441ed:	00 
   441ee:	48 c7 84 24 f8 00 00 	movq   $0x9,0xf8(%rsp)
   441f5:	00 09 00 00 00 
   441fa:	48 8d bc 24 b0 0f 00 	lea    0xfb0(%rsp),%rdi
   44201:	00 
   44202:	48 8d b4 24 e0 00 00 	lea    0xe0(%rsp),%rsi
   44209:	00 
   4420a:	ff 15 08 fb 0b 00    	call   *0xbfb08(%rip)        # 103d18 <_DYNAMIC+0x2b8>
   44210:	66 c7 84 24 58 0f 00 	movw   $0x700,0xf58(%rsp)
   44217:	00 00 07 
   4421a:	f2 0f 10 44 24 20    	movsd  0x20(%rsp),%xmm0
   44220:	f2 0f 11 84 24 28 0f 	movsd  %xmm0,0xf28(%rsp)
   44227:	00 00 
   44229:	0f 28 44 24 40       	movaps 0x40(%rsp),%xmm0
   4422e:	f2 0f 11 84 24 30 0f 	movsd  %xmm0,0xf30(%rsp)
   44235:	00 00 
   44237:	f2 0f 10 84 24 80 00 	movsd  0x80(%rsp),%xmm0
   4423e:	00 00 
   44240:	f2 0f 11 84 24 38 0f 	movsd  %xmm0,0xf38(%rsp)
   44247:	00 00 
   44249:	f2 0f 10 84 24 d0 00 	movsd  0xd0(%rsp),%xmm0
   44250:	00 00 
   44252:	f2 0f 11 84 24 40 0f 	movsd  %xmm0,0xf40(%rsp)
   44259:	00 00 
   4425b:	f2 0f 10 84 24 70 03 	movsd  0x370(%rsp),%xmm0
   44262:	00 00 
   44264:	f2 0f 11 84 24 48 0f 	movsd  %xmm0,0xf48(%rsp)
   4426b:	00 00 
   4426d:	f2 0f 10 84 24 20 01 	movsd  0x120(%rsp),%xmm0
   44274:	00 00 
   44276:	f2 0f 11 84 24 50 0f 	movsd  %xmm0,0xf50(%rsp)
   4427d:	00 00 
   4427f:	0f 10 84 24 b0 0f 00 	movups 0xfb0(%rsp),%xmm0
   44286:	00 
   44287:	0f 29 84 24 10 0f 00 	movaps %xmm0,0xf10(%rsp)
   4428e:	00 
   4428f:	48 8b 84 24 c0 0f 00 	mov    0xfc0(%rsp),%rax
   44296:	00 
   44297:	48 89 84 24 20 0f 00 	mov    %rax,0xf20(%rsp)
   4429e:	00 
   4429f:	48 8d b4 24 10 0f 00 	lea    0xf10(%rsp),%rsi
   442a6:	00 
   442a7:	48 8b 7c 24 18       	mov    0x18(%rsp),%rdi
   442ac:	f2 0f 10 44 24 70    	movsd  0x70(%rsp),%xmm0
   442b2:	e8 c9 08 00 00       	call   44b80 <strategy_comm5::place>
   442b7:	49 89 c5             	mov    %rax,%r13
   442ba:	48 85 c0             	test   %rax,%rax
   442bd:	74 3d                	je     442fc <<strategy_comm5::StrategyComm5 as future_backtest_sdk::plugin::StrategyPlugin>::on_signal+0x4fec>
   442bf:	48 8b b4 24 b8 02 00 	mov    0x2b8(%rsp),%rsi
   442c6:	00 
   442c7:	48 85 f6             	test   %rsi,%rsi
   442ca:	0f 84 2a d9 ff ff    	je     41bfa <<strategy_comm5::StrategyComm5 as future_backtest_sdk::plugin::StrategyPlugin>::on_signal+0x28ea>
   442d0:	48 8b bc 24 c0 02 00 	mov    0x2c0(%rsp),%rdi
   442d7:	00 
   442d8:	ba 01 00 00 00       	mov    $0x1,%edx
   442dd:	ff 15 95 f9 0b 00    	call   *0xbf995(%rip)        # 103c78 <_DYNAMIC+0x218>
   442e3:	4c 89 ed             	mov    %r13,%rbp
   442e6:	48 8b b4 24 a0 02 00 	mov    0x2a0(%rsp),%rsi
   442ed:	00 
   442ee:	48 85 f6             	test   %rsi,%rsi
   442f1:	0f 85 13 d9 ff ff    	jne    41c0a <<strategy_comm5::StrategyComm5 as future_backtest_sdk::plugin::StrategyPlugin>::on_signal+0x28fa>
   442f7:	e9 21 d9 ff ff       	jmp    41c1d <<strategy_comm5::StrategyComm5 as future_backtest_sdk::plugin::StrategyPlugin>::on_signal+0x290d>
   442fc:	80 bc 24 19 0e 00 00 	cmpb   $0x1,0xe19(%rsp)
   44303:	01 
   44304:	75 7c                	jne    44382 <<strategy_comm5::StrategyComm5 as future_backtest_sdk::plugin::StrategyPlugin>::on_signal+0x5072>
   44306:	48 8d 15 cb 9c 0b 00 	lea    0xb9ccb(%rip),%rdx        # fdfd8 <anon.8868ba55c3fc5525a110cabbb60004d5.152.llvm.6579149275953927878+0x238>
   4430d:	48 8d bc 24 50 01 00 	lea    0x150(%rsp),%rdi
   44314:	00 
   44315:	48 8d 74 24 58       	lea    0x58(%rsp),%rsi
   4431a:	ff 15 98 fa 0b 00    	call   *0xbfa98(%rip)        # 103db8 <_DYNAMIC+0x358>
   44320:	f2 0f 10 84 24 b0 00 	movsd  0xb0(%rsp),%xmm0
   44327:	00 00 
   44329:	f2 0f 11 84 24 e0 00 	movsd  %xmm0,0xe0(%rsp)
   44330:	00 00 
   44332:	f2 0f 10 84 24 80 00 	movsd  0x80(%rsp),%xmm0
   44339:	00 00 
   4433b:	f2 0f 11 84 24 e8 00 	movsd  %xmm0,0xe8(%rsp)
   44342:	00 00 
   44344:	f2 0f 10 84 24 a0 00 	movsd  0xa0(%rsp),%xmm0
   4434b:	00 00 
   4434d:	f2 0f 11 84 24 f0 00 	movsd  %xmm0,0xf0(%rsp)
   44354:	00 00 
   44356:	48 8b b4 24 90 00 00 	mov    0x90(%rsp),%rsi
   4435d:	00 
   4435e:	48 81 c6 98 05 00 00 	add    $0x598,%rsi
   44365:	48 8d bc 24 90 01 00 	lea    0x190(%rsp),%rdi
   4436c:	00 
   4436d:	48 8d 94 24 50 01 00 	lea    0x150(%rsp),%rdx
   44374:	00 
   44375:	48 8d 8c 24 e0 00 00 	lea    0xe0(%rsp),%rcx
   4437c:	00 
   4437d:	e8 3e eb 02 00       	call   72ec0 <hashbrown::map::HashMap<K,V,S,A>::insert>
   44382:	48 8b b4 24 b8 02 00 	mov    0x2b8(%rsp),%rsi
   44389:	00 
   4438a:	48 85 f6             	test   %rsi,%rsi
   4438d:	74 13                	je     443a2 <<strategy_comm5::StrategyComm5 as future_backtest_sdk::plugin::StrategyPlugin>::on_signal+0x5092>
   4438f:	48 8b bc 24 c0 02 00 	mov    0x2c0(%rsp),%rdi
   44396:	00 
   44397:	ba 01 00 00 00       	mov    $0x1,%edx
   4439c:	ff 15 d6 f8 0b 00    	call   *0xbf8d6(%rip)        # 103c78 <_DYNAMIC+0x218>
   443a2:	48 8b b4 24 a0 02 00 	mov    0x2a0(%rsp),%rsi
   443a9:	00 
   443aa:	48 85 f6             	test   %rsi,%rsi
   443ad:	74 13                	je     443c2 <<strategy_comm5::StrategyComm5 as future_backtest_sdk::plugin::StrategyPlugin>::on_signal+0x50b2>
   443af:	48 8b bc 24 a8 02 00 	mov    0x2a8(%rsp),%rdi
   443b6:	00 
   443b7:	ba 01 00 00 00       	mov    $0x1,%edx
   443bc:	ff 15 b6 f8 0b 00    	call   *0xbf8b6(%rip)        # 103c78 <_DYNAMIC+0x218>
   443c2:	48 8b b4 24 00 03 00 	mov    0x300(%rsp),%rsi
   443c9:	00 
   443ca:	48 85 f6             	test   %rsi,%rsi
   443cd:	74 13                	je     443e2 <<strategy_comm5::StrategyComm5 as future_backtest_sdk::plugin::StrategyPlugin>::on_signal+0x50d2>
   443cf:	48 8b bc 24 08 03 00 	mov    0x308(%rsp),%rdi
   443d6:	00 
   443d7:	ba 01 00 00 00       	mov    $0x1,%edx
   443dc:	ff 15 96 f8 0b 00    	call   *0xbf896(%rip)        # 103c78 <_DYNAMIC+0x218>
   443e2:	48 8b b4 24 d0 07 00 	mov    0x7d0(%rsp),%rsi
   443e9:	00 
   443ea:	48 85 f6             	test   %rsi,%rsi
   443ed:	74 13                	je     44402 <<strategy_comm5::StrategyComm5 as future_backtest_sdk::plugin::StrategyPlugin>::on_signal+0x50f2>
   443ef:	48 8b bc 24 d8 07 00 	mov    0x7d8(%rsp),%rdi
   443f6:	00 
   443f7:	ba 01 00 00 00       	mov    $0x1,%edx
   443fc:	ff 15 76 f8 0b 00    	call   *0xbf876(%rip)        # 103c78 <_DYNAMIC+0x218>
   44402:	48 8b b4 24 18 04 00 	mov    0x418(%rsp),%rsi
   44409:	00 
   4440a:	48 85 f6             	test   %rsi,%rsi
   4440d:	74 13                	je     44422 <<strategy_comm5::StrategyComm5 as future_backtest_sdk::plugin::StrategyPlugin>::on_signal+0x5112>
   4440f:	48 8b bc 24 20 04 00 	mov    0x420(%rsp),%rdi
   44416:	00 
   44417:	ba 01 00 00 00       	mov    $0x1,%edx
   4441c:	ff 15 56 f8 0b 00    	call   *0xbf856(%rip)        # 103c78 <_DYNAMIC+0x218>
   44422:	48 8b 74 24 58       	mov    0x58(%rsp),%rsi
   44427:	48 85 f6             	test   %rsi,%rsi
   4442a:	74 10                	je     4443c <<strategy_comm5::StrategyComm5 as future_backtest_sdk::plugin::StrategyPlugin>::on_signal+0x512c>
   4442c:	48 8b 7c 24 60       	mov    0x60(%rsp),%rdi
   44431:	ba 01 00 00 00       	mov    $0x1,%edx
   44436:	ff 15 3c f8 0b 00    	call   *0xbf83c(%rip)        # 103c78 <_DYNAMIC+0x218>
   4443c:	48 8d bc 24 90 04 00 	lea    0x490(%rsp),%rdi
   44443:	00 
   44444:	e8 c7 61 ff ff       	call   3a610 <core::ptr::drop_in_place<alloc::vec::Vec<alloc::string::String>>>
   44449:	48 8d bc 24 b8 08 00 	lea    0x8b8(%rsp),%rdi
   44450:	00 
   44451:	e8 aa 5f ff ff       	call   3a400 <core::ptr::drop_in_place<strategy_comm5::Comm5Params>>
   44456:	48 8d bc 24 a8 04 00 	lea    0x4a8(%rsp),%rdi
   4445d:	00 
   4445e:	e8 1d 61 ff ff       	call   3a580 <_ZN4core3ptr61drop_in_place$LT$future_backtest_sdk..types..StrategyPara$GT$17h0fce56cb6df95831E.llvm.6579149275953927878>
   44463:	31 ed                	xor    %ebp,%ebp
   44465:	e9 b8 c4 ff ff       	jmp    40922 <<strategy_comm5::StrategyComm5 as future_backtest_sdk::plugin::StrategyPlugin>::on_signal+0x1612>
   4446a:	4c 8b 35 d7 f9 0b 00 	mov    0xbf9d7(%rip),%r14        # 103e48 <_DYNAMIC+0x3e8>
   44471:	4c 89 f7             	mov    %r14,%rdi
   44474:	4c 89 f6             	mov    %r14,%rsi
   44477:	e8 94 70 03 00       	call   7b510 <once_cell::imp::OnceCell<T>::initialize>
   4447c:	4c 89 f7             	mov    %r14,%rdi
   4447f:	4c 8b 74 24 40       	mov    0x40(%rsp),%r14
   44484:	e9 60 c7 ff ff       	jmp    40be9 <<strategy_comm5::StrategyComm5 as future_backtest_sdk::plugin::StrategyPlugin>::on_signal+0x18d9>
   44489:	eb 04                	jmp    4448f <<strategy_comm5::StrategyComm5 as future_backtest_sdk::plugin::StrategyPlugin>::on_signal+0x517f>
   4448b:	eb 02                	jmp    4448f <<strategy_comm5::StrategyComm5 as future_backtest_sdk::plugin::StrategyPlugin>::on_signal+0x517f>
   4448d:	eb 00                	jmp    4448f <<strategy_comm5::StrategyComm5 as future_backtest_sdk::plugin::StrategyPlugin>::on_signal+0x517f>
   4448f:	48 89 c3             	mov    %rax,%rbx
   44492:	48 8d bc 24 90 01 00 	lea    0x190(%rsp),%rdi
   44499:	00 
   4449a:	e8 71 61 ff ff       	call   3a610 <core::ptr::drop_in_place<alloc::vec::Vec<alloc::string::String>>>
   4449f:	eb 08                	jmp    444a9 <<strategy_comm5::StrategyComm5 as future_backtest_sdk::plugin::StrategyPlugin>::on_signal+0x5199>
   444a1:	e9 09 01 00 00       	jmp    445af <<strategy_comm5::StrategyComm5 as future_backtest_sdk::plugin::StrategyPlugin>::on_signal+0x529f>
   444a6:	48 89 c3             	mov    %rax,%rbx
   444a9:	48 8b b4 24 b8 02 00 	mov    0x2b8(%rsp),%rsi
   444b0:	00 
   444b1:	48 85 f6             	test   %rsi,%rsi
   444b4:	0f 84 0a 01 00 00    	je     445c4 <<strategy_comm5::StrategyComm5 as future_backtest_sdk::plugin::StrategyPlugin>::on_signal+0x52b4>
   444ba:	48 8b bc 24 c0 02 00 	mov    0x2c0(%rsp),%rdi
   444c1:	00 
   444c2:	e9 c1 00 00 00       	jmp    44588 <<strategy_comm5::StrategyComm5 as future_backtest_sdk::plugin::StrategyPlugin>::on_signal+0x5278>
   444c7:	48 89 d9             	mov    %rbx,%rcx
   444ca:	48 89 c3             	mov    %rax,%rbx
   444cd:	48 85 c9             	test   %rcx,%rcx
   444d0:	0f 84 c2 00 00 00    	je     44598 <<strategy_comm5::StrategyComm5 as future_backtest_sdk::plugin::StrategyPlugin>::on_signal+0x5288>
   444d6:	48 89 ce             	mov    %rcx,%rsi
   444d9:	ba 01 00 00 00       	mov    $0x1,%edx
   444de:	48 89 ef             	mov    %rbp,%rdi
   444e1:	ff 15 91 f7 0b 00    	call   *0xbf791(%rip)        # 103c78 <_DYNAMIC+0x218>
   444e7:	e9 ac 00 00 00       	jmp    44598 <<strategy_comm5::StrategyComm5 as future_backtest_sdk::plugin::StrategyPlugin>::on_signal+0x5288>
   444ec:	48 89 c3             	mov    %rax,%rbx
   444ef:	48 8b b4 24 50 01 00 	mov    0x150(%rsp),%rsi
   444f6:	00 
   444f7:	48 85 f6             	test   %rsi,%rsi
   444fa:	74 20                	je     4451c <<strategy_comm5::StrategyComm5 as future_backtest_sdk::plugin::StrategyPlugin>::on_signal+0x520c>
   444fc:	48 8b bc 24 58 01 00 	mov    0x158(%rsp),%rdi
   44503:	00 
   44504:	ba 01 00 00 00       	mov    $0x1,%edx
   44509:	ff 15 69 f7 0b 00    	call   *0xbf769(%rip)        # 103c78 <_DYNAMIC+0x218>
   4450f:	eb 0b                	jmp    4451c <<strategy_comm5::StrategyComm5 as future_backtest_sdk::plugin::StrategyPlugin>::on_signal+0x520c>
   44511:	48 89 c3             	mov    %rax,%rbx
   44514:	e9 cb 00 00 00       	jmp    445e4 <<strategy_comm5::StrategyComm5 as future_backtest_sdk::plugin::StrategyPlugin>::on_signal+0x52d4>
   44519:	48 89 c3             	mov    %rax,%rbx
   4451c:	48 8b b4 24 40 03 00 	mov    0x340(%rsp),%rsi
   44523:	00 
   44524:	48 85 f6             	test   %rsi,%rsi
   44527:	0f 84 d7 00 00 00    	je     44604 <<strategy_comm5::StrategyComm5 as future_backtest_sdk::plugin::StrategyPlugin>::on_signal+0x52f4>
   4452d:	48 8b bc 24 48 03 00 	mov    0x348(%rsp),%rdi
   44534:	00 
   44535:	e9 bf 00 00 00       	jmp    445f9 <<strategy_comm5::StrategyComm5 as future_backtest_sdk::plugin::StrategyPlugin>::on_signal+0x52e9>
   4453a:	48 89 c3             	mov    %rax,%rbx
   4453d:	48 85 ed             	test   %rbp,%rbp
   44540:	74 56                	je     44598 <<strategy_comm5::StrategyComm5 as future_backtest_sdk::plugin::StrategyPlugin>::on_signal+0x5288>
   44542:	ba 01 00 00 00       	mov    $0x1,%edx
   44547:	4c 89 e7             	mov    %r12,%rdi
   4454a:	48 89 ee             	mov    %rbp,%rsi
   4454d:	ff 15 25 f7 0b 00    	call   *0xbf725(%rip)        # 103c78 <_DYNAMIC+0x218>
   44553:	eb 43                	jmp    44598 <<strategy_comm5::StrategyComm5 as future_backtest_sdk::plugin::StrategyPlugin>::on_signal+0x5288>
   44555:	48 89 c3             	mov    %rax,%rbx
   44558:	4d 85 ff             	test   %r15,%r15
   4455b:	74 3b                	je     44598 <<strategy_comm5::StrategyComm5 as future_backtest_sdk::plugin::StrategyPlugin>::on_signal+0x5288>
   4455d:	ba 01 00 00 00       	mov    $0x1,%edx
   44562:	48 89 ef             	mov    %rbp,%rdi
   44565:	4c 89 fe             	mov    %r15,%rsi
   44568:	ff 15 0a f7 0b 00    	call   *0xbf70a(%rip)        # 103c78 <_DYNAMIC+0x218>
   4456e:	eb 28                	jmp    44598 <<strategy_comm5::StrategyComm5 as future_backtest_sdk::plugin::StrategyPlugin>::on_signal+0x5288>
   44570:	48 89 c3             	mov    %rax,%rbx
   44573:	48 8b b4 24 e0 00 00 	mov    0xe0(%rsp),%rsi
   4457a:	00 
   4457b:	48 85 f6             	test   %rsi,%rsi
   4457e:	74 44                	je     445c4 <<strategy_comm5::StrategyComm5 as future_backtest_sdk::plugin::StrategyPlugin>::on_signal+0x52b4>
   44580:	48 8b bc 24 e8 00 00 	mov    0xe8(%rsp),%rdi
   44587:	00 
   44588:	ba 01 00 00 00       	mov    $0x1,%edx
   4458d:	ff 15 e5 f6 0b 00    	call   *0xbf6e5(%rip)        # 103c78 <_DYNAMIC+0x218>
   44593:	eb 2f                	jmp    445c4 <<strategy_comm5::StrategyComm5 as future_backtest_sdk::plugin::StrategyPlugin>::on_signal+0x52b4>
   44595:	48 89 c3             	mov    %rax,%rbx
   44598:	48 8b b4 24 e0 00 00 	mov    0xe0(%rsp),%rsi
   4459f:	00 
   445a0:	48 85 f6             	test   %rsi,%rsi
   445a3:	74 5f                	je     44604 <<strategy_comm5::StrategyComm5 as future_backtest_sdk::plugin::StrategyPlugin>::on_signal+0x52f4>
   445a5:	48 8b bc 24 e8 00 00 	mov    0xe8(%rsp),%rdi
   445ac:	00 
   445ad:	eb 4a                	jmp    445f9 <<strategy_comm5::StrategyComm5 as future_backtest_sdk::plugin::StrategyPlugin>::on_signal+0x52e9>
   445af:	48 89 c3             	mov    %rax,%rbx
   445b2:	eb 50                	jmp    44604 <<strategy_comm5::StrategyComm5 as future_backtest_sdk::plugin::StrategyPlugin>::on_signal+0x52f4>
   445b4:	48 89 c3             	mov    %rax,%rbx
   445b7:	eb 6b                	jmp    44624 <<strategy_comm5::StrategyComm5 as future_backtest_sdk::plugin::StrategyPlugin>::on_signal+0x5314>
   445b9:	48 89 c3             	mov    %rax,%rbx
   445bc:	e9 83 00 00 00       	jmp    44644 <<strategy_comm5::StrategyComm5 as future_backtest_sdk::plugin::StrategyPlugin>::on_signal+0x5334>
   445c1:	48 89 c3             	mov    %rax,%rbx
   445c4:	48 8b b4 24 a0 02 00 	mov    0x2a0(%rsp),%rsi
   445cb:	00 
   445cc:	48 85 f6             	test   %rsi,%rsi
   445cf:	74 13                	je     445e4 <<strategy_comm5::StrategyComm5 as future_backtest_sdk::plugin::StrategyPlugin>::on_signal+0x52d4>
   445d1:	48 8b bc 24 a8 02 00 	mov    0x2a8(%rsp),%rdi
   445d8:	00 
   445d9:	ba 01 00 00 00       	mov    $0x1,%edx
   445de:	ff 15 94 f6 0b 00    	call   *0xbf694(%rip)        # 103c78 <_DYNAMIC+0x218>
   445e4:	48 8b b4 24 00 03 00 	mov    0x300(%rsp),%rsi
   445eb:	00 
   445ec:	48 85 f6             	test   %rsi,%rsi
   445ef:	74 13                	je     44604 <<strategy_comm5::StrategyComm5 as future_backtest_sdk::plugin::StrategyPlugin>::on_signal+0x52f4>
   445f1:	48 8b bc 24 08 03 00 	mov    0x308(%rsp),%rdi
   445f8:	00 
   445f9:	ba 01 00 00 00       	mov    $0x1,%edx
   445fe:	ff 15 74 f6 0b 00    	call   *0xbf674(%rip)        # 103c78 <_DYNAMIC+0x218>
   44604:	48 8b b4 24 d0 07 00 	mov    0x7d0(%rsp),%rsi
   4460b:	00 
   4460c:	48 85 f6             	test   %rsi,%rsi
   4460f:	74 13                	je     44624 <<strategy_comm5::StrategyComm5 as future_backtest_sdk::plugin::StrategyPlugin>::on_signal+0x5314>
   44611:	48 8b bc 24 d8 07 00 	mov    0x7d8(%rsp),%rdi
   44618:	00 
   44619:	ba 01 00 00 00       	mov    $0x1,%edx
   4461e:	ff 15 54 f6 0b 00    	call   *0xbf654(%rip)        # 103c78 <_DYNAMIC+0x218>
   44624:	48 8b b4 24 18 04 00 	mov    0x418(%rsp),%rsi
   4462b:	00 
   4462c:	48 85 f6             	test   %rsi,%rsi
   4462f:	74 13                	je     44644 <<strategy_comm5::StrategyComm5 as future_backtest_sdk::plugin::StrategyPlugin>::on_signal+0x5334>
   44631:	48 8b bc 24 20 04 00 	mov    0x420(%rsp),%rdi
   44638:	00 
   44639:	ba 01 00 00 00       	mov    $0x1,%edx
   4463e:	ff 15 34 f6 0b 00    	call   *0xbf634(%rip)        # 103c78 <_DYNAMIC+0x218>
   44644:	48 8b 74 24 58       	mov    0x58(%rsp),%rsi
   44649:	48 85 f6             	test   %rsi,%rsi
   4464c:	74 15                	je     44663 <<strategy_comm5::StrategyComm5 as future_backtest_sdk::plugin::StrategyPlugin>::on_signal+0x5353>
   4464e:	48 8b 7c 24 60       	mov    0x60(%rsp),%rdi
   44653:	ba 01 00 00 00       	mov    $0x1,%edx
   44658:	ff 15 1a f6 0b 00    	call   *0xbf61a(%rip)        # 103c78 <_DYNAMIC+0x218>
   4465e:	eb 03                	jmp    44663 <<strategy_comm5::StrategyComm5 as future_backtest_sdk::plugin::StrategyPlugin>::on_signal+0x5353>
   44660:	48 89 c3             	mov    %rax,%rbx
   44663:	48 8d bc 24 90 04 00 	lea    0x490(%rsp),%rdi
   4466a:	00 
   4466b:	e8 a0 5f ff ff       	call   3a610 <core::ptr::drop_in_place<alloc::vec::Vec<alloc::string::String>>>
   44670:	eb 03                	jmp    44675 <<strategy_comm5::StrategyComm5 as future_backtest_sdk::plugin::StrategyPlugin>::on_signal+0x5365>
   44672:	48 89 c3             	mov    %rax,%rbx
   44675:	48 8d bc 24 b8 08 00 	lea    0x8b8(%rsp),%rdi
   4467c:	00 
   4467d:	e8 7e 5d ff ff       	call   3a400 <core::ptr::drop_in_place<strategy_comm5::Comm5Params>>
   44682:	48 8d bc 24 a8 04 00 	lea    0x4a8(%rsp),%rdi
   44689:	00 
   4468a:	e8 f1 5e ff ff       	call   3a580 <_ZN4core3ptr61drop_in_place$LT$future_backtest_sdk..types..StrategyPara$GT$17h0fce56cb6df95831E.llvm.6579149275953927878>
   4468f:	48 89 df             	mov    %rbx,%rdi
   44692:	e8 e9 7e 0b 00       	call   fc580 <_Unwind_Resume@plt>
   44697:	48 89 c3             	mov    %rax,%rbx
   4469a:	eb 68                	jmp    44704 <<strategy_comm5::StrategyComm5 as future_backtest_sdk::plugin::StrategyPlugin>::on_signal+0x53f4>
   4469c:	48 89 c3             	mov    %rax,%rbx
   4469f:	e9 90 00 00 00       	jmp    44734 <<strategy_comm5::StrategyComm5 as future_backtest_sdk::plugin::StrategyPlugin>::on_signal+0x5424>
   446a4:	48 89 c3             	mov    %rax,%rbx
   446a7:	e9 b8 00 00 00       	jmp    44764 <<strategy_comm5::StrategyComm5 as future_backtest_sdk::plugin::StrategyPlugin>::on_signal+0x5454>
   446ac:	48 89 c3             	mov    %rax,%rbx
   446af:	48 8b b4 24 b0 07 00 	mov    0x7b0(%rsp),%rsi
   446b6:	00 
   446b7:	48 85 f6             	test   %rsi,%rsi
   446ba:	74 18                	je     446d4 <<strategy_comm5::StrategyComm5 as future_backtest_sdk::plugin::StrategyPlugin>::on_signal+0x53c4>
   446bc:	48 8b bc 24 b8 07 00 	mov    0x7b8(%rsp),%rdi
   446c3:	00 
   446c4:	ba 01 00 00 00       	mov    $0x1,%edx
   446c9:	ff 15 a9 f5 0b 00    	call   *0xbf5a9(%rip)        # 103c78 <_DYNAMIC+0x218>
   446cf:	eb 03                	jmp    446d4 <<strategy_comm5::StrategyComm5 as future_backtest_sdk::plugin::StrategyPlugin>::on_signal+0x53c4>
   446d1:	48 89 c3             	mov    %rax,%rbx
   446d4:	48 8b 84 24 30 03 00 	mov    0x330(%rsp),%rax
   446db:	00 
   446dc:	48 8d 04 45 00 00 00 	lea    0x0(,%rax,2),%rax
   446e3:	00 
   446e4:	48 85 c0             	test   %rax,%rax
   446e7:	74 1b                	je     44704 <<strategy_comm5::StrategyComm5 as future_backtest_sdk::plugin::StrategyPlugin>::on_signal+0x53f4>
   446e9:	ba 01 00 00 00       	mov    $0x1,%edx
   446ee:	48 8b bc 24 70 04 00 	mov    0x470(%rsp),%rdi
   446f5:	00 
   446f6:	48 8b b4 24 30 03 00 	mov    0x330(%rsp),%rsi
   446fd:	00 
   446fe:	ff 15 74 f5 0b 00    	call   *0xbf574(%rip)        # 103c78 <_DYNAMIC+0x218>
   44704:	48 8b 84 24 38 03 00 	mov    0x338(%rsp),%rax
   4470b:	00 
   4470c:	48 8d 04 45 00 00 00 	lea    0x0(,%rax,2),%rax
   44713:	00 
   44714:	48 85 c0             	test   %rax,%rax
   44717:	74 1b                	je     44734 <<strategy_comm5::StrategyComm5 as future_backtest_sdk::plugin::StrategyPlugin>::on_signal+0x5424>
   44719:	ba 01 00 00 00       	mov    $0x1,%edx
   4471e:	48 8b bc 24 78 04 00 	mov    0x478(%rsp),%rdi
   44725:	00 
   44726:	48 8b b4 24 38 03 00 	mov    0x338(%rsp),%rsi
   4472d:	00 
   4472e:	ff 15 44 f5 0b 00    	call   *0xbf544(%rip)        # 103c78 <_DYNAMIC+0x218>
   44734:	48 8b 84 24 90 00 00 	mov    0x90(%rsp),%rax
   4473b:	00 
   4473c:	48 8d 04 45 00 00 00 	lea    0x0(,%rax,2),%rax
   44743:	00 
   44744:	48 85 c0             	test   %rax,%rax
   44747:	74 1b                	je     44764 <<strategy_comm5::StrategyComm5 as future_backtest_sdk::plugin::StrategyPlugin>::on_signal+0x5454>
   44749:	ba 01 00 00 00       	mov    $0x1,%edx
   4474e:	48 8b bc 24 80 04 00 	mov    0x480(%rsp),%rdi
   44755:	00 
   44756:	48 8b b4 24 90 00 00 	mov    0x90(%rsp),%rsi
   4475d:	00 
   4475e:	ff 15 14 f5 0b 00    	call   *0xbf514(%rip)        # 103c78 <_DYNAMIC+0x218>
   44764:	48 8b b4 24 80 03 00 	mov    0x380(%rsp),%rsi
   4476b:	00 
   4476c:	48 85 f6             	test   %rsi,%rsi
   4476f:	74 18                	je     44789 <<strategy_comm5::StrategyComm5 as future_backtest_sdk::plugin::StrategyPlugin>::on_signal+0x5479>
   44771:	48 8b bc 24 88 03 00 	mov    0x388(%rsp),%rdi
   44778:	00 
   44779:	ba 01 00 00 00       	mov    $0x1,%edx
   4477e:	ff 15 f4 f4 0b 00    	call   *0xbf4f4(%rip)        # 103c78 <_DYNAMIC+0x218>
   44784:	eb 03                	jmp    44789 <<strategy_comm5::StrategyComm5 as future_backtest_sdk::plugin::StrategyPlugin>::on_signal+0x5479>
   44786:	48 89 c3             	mov    %rax,%rbx
   44789:	48 8b b4 24 e0 00 00 	mov    0xe0(%rsp),%rsi
   44790:	00 
   44791:	48 85 f6             	test   %rsi,%rsi
   44794:	74 18                	je     447ae <<strategy_comm5::StrategyComm5 as future_backtest_sdk::plugin::StrategyPlugin>::on_signal+0x549e>
   44796:	48 8b bc 24 e8 00 00 	mov    0xe8(%rsp),%rdi
   4479d:	00 
   4479e:	ba 01 00 00 00       	mov    $0x1,%edx
   447a3:	ff 15 cf f4 0b 00    	call   *0xbf4cf(%rip)        # 103c78 <_DYNAMIC+0x218>
   447a9:	eb 03                	jmp    447ae <<strategy_comm5::StrategyComm5 as future_backtest_sdk::plugin::StrategyPlugin>::on_signal+0x549e>
   447ab:	48 89 c3             	mov    %rax,%rbx
   447ae:	48 8b b4 24 50 01 00 	mov    0x150(%rsp),%rsi
   447b5:	00 
   447b6:	48 85 f6             	test   %rsi,%rsi
   447b9:	74 18                	je     447d3 <<strategy_comm5::StrategyComm5 as future_backtest_sdk::plugin::StrategyPlugin>::on_signal+0x54c3>
   447bb:	48 8b bc 24 58 01 00 	mov    0x158(%rsp),%rdi
   447c2:	00 
   447c3:	ba 01 00 00 00       	mov    $0x1,%edx
   447c8:	ff 15 aa f4 0b 00    	call   *0xbf4aa(%rip)        # 103c78 <_DYNAMIC+0x218>
   447ce:	eb 03                	jmp    447d3 <<strategy_comm5::StrategyComm5 as future_backtest_sdk::plugin::StrategyPlugin>::on_signal+0x54c3>
   447d0:	48 89 c3             	mov    %rax,%rbx
   447d3:	48 83 bc 24 80 00 00 	cmpq   $0x0,0x80(%rsp)
   447da:	00 00 
   447dc:	74 41                	je     4481f <<strategy_comm5::StrategyComm5 as future_backtest_sdk::plugin::StrategyPlugin>::on_signal+0x550f>
   447de:	48 8b b4 24 80 00 00 	mov    0x80(%rsp),%rsi
   447e5:	00 
   447e6:	48 c1 e6 03          	shl    $0x3,%rsi
   447ea:	ba 08 00 00 00       	mov    $0x8,%edx
   447ef:	48 8b bc 24 a0 00 00 	mov    0xa0(%rsp),%rdi
   447f6:	00 
   447f7:	ff 15 7b f4 0b 00    	call   *0xbf47b(%rip)        # 103c78 <_DYNAMIC+0x218>
   447fd:	eb 20                	jmp    4481f <<strategy_comm5::StrategyComm5 as future_backtest_sdk::plugin::StrategyPlugin>::on_signal+0x550f>
   447ff:	48 89 c3             	mov    %rax,%rbx
   44802:	eb 3b                	jmp    4483f <<strategy_comm5::StrategyComm5 as future_backtest_sdk::plugin::StrategyPlugin>::on_signal+0x552f>
   44804:	48 89 c3             	mov    %rax,%rbx
   44807:	48 8d bc 24 a8 04 00 	lea    0x4a8(%rsp),%rdi
   4480e:	00 
   4480f:	e8 6c 5d ff ff       	call   3a580 <_ZN4core3ptr61drop_in_place$LT$future_backtest_sdk..types..StrategyPara$GT$17h0fce56cb6df95831E.llvm.6579149275953927878>
   44814:	48 89 df             	mov    %rbx,%rdi
   44817:	e8 64 7d 0b 00       	call   fc580 <_Unwind_Resume@plt>
   4481c:	48 89 c3             	mov    %rax,%rbx
   4481f:	48 8b b4 24 40 03 00 	mov    0x340(%rsp),%rsi
   44826:	00 
   44827:	48 85 f6             	test   %rsi,%rsi
   4482a:	74 13                	je     4483f <<strategy_comm5::StrategyComm5 as future_backtest_sdk::plugin::StrategyPlugin>::on_signal+0x552f>
   4482c:	48 8b bc 24 48 03 00 	mov    0x348(%rsp),%rdi
   44833:	00 
   44834:	ba 01 00 00 00       	mov    $0x1,%edx
   44839:	ff 15 39 f4 0b 00    	call   *0xbf439(%rip)        # 103c78 <_DYNAMIC+0x218>
   4483f:	48 8b b4 24 b8 02 00 	mov    0x2b8(%rsp),%rsi
   44846:	00 
   44847:	48 85 f6             	test   %rsi,%rsi
   4484a:	74 13                	je     4485f <<strategy_comm5::StrategyComm5 as future_backtest_sdk::plugin::StrategyPlugin>::on_signal+0x554f>
   4484c:	48 8b bc 24 c0 02 00 	mov    0x2c0(%rsp),%rdi
   44853:	00 
   44854:	ba 01 00 00 00       	mov    $0x1,%edx
   44859:	ff 15 19 f4 0b 00    	call   *0xbf419(%rip)        # 103c78 <_DYNAMIC+0x218>
   4485f:	48 8d bc 24 a8 04 00 	lea    0x4a8(%rsp),%rdi
   44866:	00 
   44867:	e8 14 5d ff ff       	call   3a580 <_ZN4core3ptr61drop_in_place$LT$future_backtest_sdk..types..StrategyPara$GT$17h0fce56cb6df95831E.llvm.6579149275953927878>
   4486c:	48 89 df             	mov    %rbx,%rdi
   4486f:	e8 0c 7d 0b 00       	call   fc580 <_Unwind_Resume@plt>
   44874:	cc                   	int3   
   44875:	cc                   	int3   
   44876:	cc                   	int3   
   44877:	cc                   	int3   
   44878:	cc                   	int3   
   44879:	cc                   	int3   
   4487a:	cc                   	int3   
   4487b:	cc                   	int3   
   4487c:	cc                   	int3   
   4487d:	cc                   	int3   
   4487e:	cc                   	int3   
   4487f:	cc                   	int3   
