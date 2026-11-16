0000000000065300 <strategy_sm4::signal_pairs_tree::SignalPairsTree::debug_string>:
   65300:	55                   	push   rbp
   65301:	41 57                	push   r15
   65303:	41 56                	push   r14
   65305:	41 55                	push   r13
   65307:	41 54                	push   r12
   65309:	53                   	push   rbx
   6530a:	48 81 ec 78 01 00 00 	sub    rsp,0x178
   65311:	48 c7 04 24 00 00 00 	mov    QWORD PTR [rsp],0x0
   65318:	00 
   65319:	48 c7 44 24 08 08 00 	mov    QWORD PTR [rsp+0x8],0x8
   65320:	00 00 
   65322:	48 c7 44 24 10 00 00 	mov    QWORD PTR [rsp+0x10],0x0
   65329:	00 00 
   6532b:	48 8b 46 20          	mov    rax,QWORD PTR [rsi+0x20]
   6532f:	48 8b 4e 28          	mov    rcx,QWORD PTR [rsi+0x28]
   65333:	31 d2                	xor    edx,edx
   65335:	49 89 c0             	mov    r8,rax
   65338:	48 85 c0             	test   rax,rax
   6533b:	0f 95 c2             	setne  dl
   6533e:	74 04                	je     65344 <strategy_sm4::signal_pairs_tree::SignalPairsTree::debug_string+0x44>
   65340:	4c 8b 46 30          	mov    r8,QWORD PTR [rsi+0x30]
   65344:	48 89 94 24 10 01 00 	mov    QWORD PTR [rsp+0x110],rdx
   6534b:	00 
   6534c:	48 c7 84 24 18 01 00 	mov    QWORD PTR [rsp+0x118],0x0
   65353:	00 00 00 00 00 
   65358:	48 89 84 24 20 01 00 	mov    QWORD PTR [rsp+0x120],rax
   6535f:	00 
   65360:	48 89 8c 24 28 01 00 	mov    QWORD PTR [rsp+0x128],rcx
   65367:	00 
   65368:	48 89 94 24 30 01 00 	mov    QWORD PTR [rsp+0x130],rdx
   6536f:	00 
   65370:	48 c7 84 24 38 01 00 	mov    QWORD PTR [rsp+0x138],0x0
   65377:	00 00 00 00 00 
   6537c:	48 89 84 24 40 01 00 	mov    QWORD PTR [rsp+0x140],rax
   65383:	00 
   65384:	48 89 8c 24 48 01 00 	mov    QWORD PTR [rsp+0x148],rcx
   6538b:	00 
   6538c:	4c 89 84 24 50 01 00 	mov    QWORD PTR [rsp+0x150],r8
   65393:	00 
   65394:	48 8b 46 38          	mov    rax,QWORD PTR [rsi+0x38]
   65398:	48 89 84 24 c8 00 00 	mov    QWORD PTR [rsp+0xc8],rax
   6539f:	00 
   653a0:	48 85 c0             	test   rax,rax
   653a3:	48 89 bc 24 b8 00 00 	mov    QWORD PTR [rsp+0xb8],rdi
   653aa:	00 
   653ab:	0f 84 ee 03 00 00    	je     6579f <strategy_sm4::signal_pairs_tree::SignalPairsTree::debug_string+0x49f>
   653b1:	48 8b 46 40          	mov    rax,QWORD PTR [rsi+0x40]
   653b5:	48 89 84 24 c0 00 00 	mov    QWORD PTR [rsp+0xc0],rax
   653bc:	00 
   653bd:	4c 8d bc 24 88 00 00 	lea    r15,[rsp+0x88]
   653c4:	00 
   653c5:	4c 8d 6c 24 18       	lea    r13,[rsp+0x18]
   653ca:	48 8b 2d f7 25 08 00 	mov    rbp,QWORD PTR [rip+0x825f7]        # e79c8 <_DYNAMIC+0x308>
   653d1:	4c 8d 25 78 e0 ff ff 	lea    r12,[rip+0xffffffffffffe078]        # 63450 <<alloc::string::String as core::fmt::Display>::fmt>
   653d8:	0f 1f 84 00 00 00 00 	nop    DWORD PTR [rax+rax*1+0x0]
   653df:	00 
   653e0:	48 8d bc 24 10 01 00 	lea    rdi,[rsp+0x110]
   653e7:	00 
   653e8:	e8 83 50 ff ff       	call   5a470 <<alloc::collections::btree::map::Iter<K,V> as core::iter::traits::iterator::Iterator>::next>
   653ed:	48 85 c0             	test   rax,rax
   653f0:	0f 84 bf 03 00 00    	je     657b5 <strategy_sm4::signal_pairs_tree::SignalPairsTree::debug_string+0x4b5>
   653f6:	48 89 d3             	mov    rbx,rdx
   653f9:	48 89 44 24 48       	mov    QWORD PTR [rsp+0x48],rax
   653fe:	48 8b 08             	mov    rcx,QWORD PTR [rax]
   65401:	48 8b 94 24 c0 00 00 	mov    rdx,QWORD PTR [rsp+0xc0]
   65408:	00 
   65409:	48 8b 84 24 c8 00 00 	mov    rax,QWORD PTR [rsp+0xc8]
   65410:	00 
   65411:	0f b7 b8 c2 01 00 00 	movzx  edi,WORD PTR [rax+0x1c2]
   65418:	41 89 f9             	mov    r9d,edi
   6541b:	41 c1 e1 05          	shl    r9d,0x5
   6541f:	48 c7 c6 ff ff ff ff 	mov    rsi,0xffffffffffffffff
   65426:	45 31 c0             	xor    r8d,r8d
   65429:	0f 1f 80 00 00 00 00 	nop    DWORD PTR [rax+0x0]
   65430:	4d 89 ca             	mov    r10,r9
   65433:	4d 01 c2             	add    r10,r8
   65436:	74 28                	je     65460 <strategy_sm4::signal_pairs_tree::SignalPairsTree::debug_string+0x160>
   65438:	48 3b 8c f0 70 01 00 	cmp    rcx,QWORD PTR [rax+rsi*8+0x170]
   6543f:	00 
   65440:	41 0f 97 c2          	seta   r10b
   65444:	41 80 da 00          	sbb    r10b,0x0
   65448:	48 ff c6             	inc    rsi
   6544b:	49 83 c0 e0          	add    r8,0xffffffffffffffe0
   6544f:	41 80 fa 01          	cmp    r10b,0x1
   65453:	74 db                	je     65430 <strategy_sm4::signal_pairs_tree::SignalPairsTree::debug_string+0x130>
   65455:	41 0f b6 fa          	movzx  edi,r10b
   65459:	85 ff                	test   edi,edi
   6545b:	74 23                	je     65480 <strategy_sm4::signal_pairs_tree::SignalPairsTree::debug_string+0x180>
   6545d:	eb 04                	jmp    65463 <strategy_sm4::signal_pairs_tree::SignalPairsTree::debug_string+0x163>
   6545f:	90                   	nop
   65460:	48 89 fe             	mov    rsi,rdi
   65463:	48 83 ea 01          	sub    rdx,0x1
   65467:	0f 82 0d 04 00 00    	jb     6587a <strategy_sm4::signal_pairs_tree::SignalPairsTree::debug_string+0x57a>
   6546d:	48 8b 84 f0 c8 01 00 	mov    rax,QWORD PTR [rax+rsi*8+0x1c8]
   65474:	00 
   65475:	eb 9a                	jmp    65411 <strategy_sm4::signal_pairs_tree::SignalPairsTree::debug_string+0x111>
   65477:	66 0f 1f 84 00 00 00 	nop    WORD PTR [rax+rax*1+0x0]
   6547e:	00 00 
   65480:	4c 29 c0             	sub    rax,r8
   65483:	48 83 c0 e0          	add    rax,0xffffffffffffffe0
   65487:	48 89 84 24 d0 00 00 	mov    QWORD PTR [rsp+0xd0],rax
   6548e:	00 
   6548f:	48 8d 44 24 48       	lea    rax,[rsp+0x48]
   65494:	48 89 84 24 88 00 00 	mov    QWORD PTR [rsp+0x88],rax
   6549b:	00 
   6549c:	48 8d 05 9d dd ff ff 	lea    rax,[rip+0xffffffffffffdd9d]        # 63240 <<&T as core::fmt::Display>::fmt>
   654a3:	48 89 84 24 90 00 00 	mov    QWORD PTR [rsp+0x90],rax
   654aa:	00 
   654ab:	48 8d 84 24 d0 00 00 	lea    rax,[rsp+0xd0]
   654b2:	00 
   654b3:	48 89 84 24 98 00 00 	mov    QWORD PTR [rsp+0x98],rax
   654ba:	00 
   654bb:	48 8d 05 de 3b 00 00 	lea    rax,[rip+0x3bde]        # 690a0 <<&T as core::fmt::Debug>::fmt>
   654c2:	48 89 84 24 a0 00 00 	mov    QWORD PTR [rsp+0xa0],rax
   654c9:	00 
   654ca:	48 8d 05 47 cd 07 00 	lea    rax,[rip+0x7cd47]        # e2218 <anon.cc0547108b5ad03ae23ec7d169cabb3c.33.llvm.4719369549894925764+0x30>
   654d1:	48 89 44 24 18       	mov    QWORD PTR [rsp+0x18],rax
   654d6:	48 c7 44 24 20 02 00 	mov    QWORD PTR [rsp+0x20],0x2
   654dd:	00 00 
   654df:	48 c7 44 24 38 00 00 	mov    QWORD PTR [rsp+0x38],0x0
   654e6:	00 00 
   654e8:	4c 89 7c 24 28       	mov    QWORD PTR [rsp+0x28],r15
   654ed:	48 c7 44 24 30 02 00 	mov    QWORD PTR [rsp+0x30],0x2
   654f4:	00 00 
   654f6:	48 8d bc 24 e0 00 00 	lea    rdi,[rsp+0xe0]
   654fd:	00 
   654fe:	4c 89 ee             	mov    rsi,r13
   65501:	ff d5                	call   rbp
   65503:	66 0f 10 84 24 e0 00 	movupd xmm0,XMMWORD PTR [rsp+0xe0]
   6550a:	00 00 
   6550c:	66 0f 29 44 24 50    	movapd XMMWORD PTR [rsp+0x50],xmm0
   65512:	48 8b 84 24 f0 00 00 	mov    rax,QWORD PTR [rsp+0xf0]
   65519:	00 
   6551a:	48 89 44 24 60       	mov    QWORD PTR [rsp+0x60],rax
   6551f:	48 89 df             	mov    rdi,rbx
   65522:	e8 39 e6 ff ff       	call   63b60 <_ZN12strategy_sm417signal_pairs_tree15SignalPairStats28get_pairs_time_sec_ms_median17hd03f3837d95f7339E.llvm.4719369549894925764>
   65527:	48 89 84 24 58 01 00 	mov    QWORD PTR [rsp+0x158],rax
   6552e:	00 
   6552f:	f2 0f 11 84 24 60 01 	movsd  QWORD PTR [rsp+0x160],xmm0
   65536:	00 00 
   65538:	4c 8b 73 18          	mov    r14,QWORD PTR [rbx+0x18]
   6553c:	4d 85 f6             	test   r14,r14
   6553f:	0f 84 ab 00 00 00    	je     655f0 <strategy_sm4::signal_pairs_tree::SignalPairsTree::debug_string+0x2f0>
   65545:	48 8b 43 10          	mov    rax,QWORD PTR [rbx+0x10]
   65549:	48 8b 0b             	mov    rcx,QWORD PTR [rbx]
   6554c:	48 8b 53 08          	mov    rdx,QWORD PTR [rbx+0x8]
   65550:	48 39 c8             	cmp    rax,rcx
   65553:	48 89 ce             	mov    rsi,rcx
   65556:	41 b8 00 00 00 00    	mov    r8d,0x0
   6555c:	49 0f 42 f0          	cmovb  rsi,r8
   65560:	48 29 f0             	sub    rax,rsi
   65563:	48 89 ce             	mov    rsi,rcx
   65566:	48 29 c6             	sub    rsi,rax
   65569:	4a 8d 3c 30          	lea    rdi,[rax+r14*1]
   6556d:	4c 39 f6             	cmp    rsi,r14
   65570:	48 0f 42 f9          	cmovb  rdi,rcx
   65574:	4c 89 f1             	mov    rcx,r14
   65577:	48 29 f1             	sub    rcx,rsi
   6557a:	49 0f 42 c8          	cmovb  rcx,r8
   6557e:	48 6b c0 68          	imul   rax,rax,0x68
   65582:	48 01 d0             	add    rax,rdx
   65585:	48 6b f7 68          	imul   rsi,rdi,0x68
   65589:	48 01 d6             	add    rsi,rdx
   6558c:	48 6b c9 68          	imul   rcx,rcx,0x68
   65590:	48 01 d1             	add    rcx,rdx
   65593:	48 89 44 24 18       	mov    QWORD PTR [rsp+0x18],rax
   65598:	48 89 74 24 20       	mov    QWORD PTR [rsp+0x20],rsi
   6559d:	48 89 54 24 28       	mov    QWORD PTR [rsp+0x28],rdx
   655a2:	48 89 4c 24 30       	mov    QWORD PTR [rsp+0x30],rcx
   655a7:	4c 89 ef             	mov    rdi,r13
   655aa:	f2 0f 10 05 a6 29 fb 	movsd  xmm0,QWORD PTR [rip+0xfffffffffffb29a6]        # 17f58 <anon.70b899b187d1e871bc88b3cd4c46b3b0.11.llvm.9000053735115140344+0x303>
   655b1:	ff 
   655b2:	e8 29 82 ff ff       	call   5d7e0 <<alloc::collections::vec_deque::iter::Iter<T> as core::iter::traits::iterator::Iterator>::fold>
   655b7:	66 49 0f 6e ce       	movq   xmm1,r14
   655bc:	66 0f 62 0d 7c 2b fb 	punpckldq xmm1,XMMWORD PTR [rip+0xfffffffffffb2b7c]        # 18140 <anon.1907589fa464e488346b0cbfb2429808.2.llvm.14402732174179579021+0x20>
   655c3:	ff 
   655c4:	66 0f 5c 0d 44 2a fb 	subpd  xmm1,XMMWORD PTR [rip+0xfffffffffffb2a44]        # 18010 <anon.70b899b187d1e871bc88b3cd4c46b3b0.11.llvm.9000053735115140344+0x3bb>
   655cb:	ff 
   655cc:	66 0f 28 d1          	movapd xmm2,xmm1
   655d0:	66 0f 15 d1          	unpckhpd xmm2,xmm1
   655d4:	f2 0f 58 d1          	addsd  xmm2,xmm1
   655d8:	f2 0f 5e c2          	divsd  xmm0,xmm2
   655dc:	b8 01 00 00 00       	mov    eax,0x1
   655e1:	eb 0f                	jmp    655f2 <strategy_sm4::signal_pairs_tree::SignalPairsTree::debug_string+0x2f2>
   655e3:	66 66 66 66 2e 0f 1f 	data16 data16 data16 cs nop WORD PTR [rax+rax*1+0x0]
   655ea:	84 00 00 00 00 00 
   655f0:	31 c0                	xor    eax,eax
   655f2:	48 89 84 24 68 01 00 	mov    QWORD PTR [rsp+0x168],rax
   655f9:	00 
   655fa:	f2 0f 11 84 24 70 01 	movsd  QWORD PTR [rsp+0x170],xmm0
   65601:	00 00 
   65603:	48 8b 43 18          	mov    rax,QWORD PTR [rbx+0x18]
   65607:	48 89 84 24 d8 00 00 	mov    QWORD PTR [rsp+0xd8],rax
   6560e:	00 
   6560f:	48 8d 84 24 58 01 00 	lea    rax,[rsp+0x158]
   65616:	00 
   65617:	48 89 44 24 18       	mov    QWORD PTR [rsp+0x18],rax
   6561c:	48 8d 05 4d de ff ff 	lea    rax,[rip+0xffffffffffffde4d]        # 63470 <<core::option::Option<T> as core::fmt::Debug>::fmt>
   65623:	48 89 44 24 20       	mov    QWORD PTR [rsp+0x20],rax
   65628:	48 8d 8c 24 68 01 00 	lea    rcx,[rsp+0x168]
   6562f:	00 
   65630:	48 89 4c 24 28       	mov    QWORD PTR [rsp+0x28],rcx
   65635:	48 89 44 24 30       	mov    QWORD PTR [rsp+0x30],rax
   6563a:	48 8d 84 24 d8 00 00 	lea    rax,[rsp+0xd8]
   65641:	00 
   65642:	48 89 44 24 38       	mov    QWORD PTR [rsp+0x38],rax
   65647:	48 8b 05 32 24 08 00 	mov    rax,QWORD PTR [rip+0x82432]        # e7a80 <_DYNAMIC+0x3c0>
   6564e:	48 89 44 24 40       	mov    QWORD PTR [rsp+0x40],rax
   65653:	48 8d 05 de cb 07 00 	lea    rax,[rip+0x7cbde]        # e2238 <anon.cc0547108b5ad03ae23ec7d169cabb3c.33.llvm.4719369549894925764+0x50>
   6565a:	48 89 84 24 88 00 00 	mov    QWORD PTR [rsp+0x88],rax
   65661:	00 
   65662:	48 c7 84 24 90 00 00 	mov    QWORD PTR [rsp+0x90],0x3
   65669:	00 03 00 00 00 
   6566e:	48 c7 84 24 a8 00 00 	mov    QWORD PTR [rsp+0xa8],0x0
   65675:	00 00 00 00 00 
   6567a:	4c 89 ac 24 98 00 00 	mov    QWORD PTR [rsp+0x98],r13
   65681:	00 
   65682:	48 c7 84 24 a0 00 00 	mov    QWORD PTR [rsp+0xa0],0x3
   65689:	00 03 00 00 00 
   6568e:	48 8d bc 24 e0 00 00 	lea    rdi,[rsp+0xe0]
   65695:	00 
   65696:	4c 89 fe             	mov    rsi,r15
   65699:	ff d5                	call   rbp
   6569b:	66 0f 10 84 24 e0 00 	movupd xmm0,XMMWORD PTR [rsp+0xe0]
   656a2:	00 00 
   656a4:	66 0f 29 44 24 70    	movapd XMMWORD PTR [rsp+0x70],xmm0
   656aa:	48 8b 84 24 f0 00 00 	mov    rax,QWORD PTR [rsp+0xf0]
   656b1:	00 
   656b2:	48 89 84 24 80 00 00 	mov    QWORD PTR [rsp+0x80],rax
   656b9:	00 
   656ba:	48 8d 44 24 50       	lea    rax,[rsp+0x50]
   656bf:	48 89 84 24 88 00 00 	mov    QWORD PTR [rsp+0x88],rax
   656c6:	00 
   656c7:	4c 89 a4 24 90 00 00 	mov    QWORD PTR [rsp+0x90],r12
   656ce:	00 
   656cf:	48 8d 44 24 70       	lea    rax,[rsp+0x70]
   656d4:	48 89 84 24 98 00 00 	mov    QWORD PTR [rsp+0x98],rax
   656db:	00 
   656dc:	4c 89 a4 24 a0 00 00 	mov    QWORD PTR [rsp+0xa0],r12
   656e3:	00 
   656e4:	48 8d 05 7d cb 07 00 	lea    rax,[rip+0x7cb7d]        # e2268 <anon.cc0547108b5ad03ae23ec7d169cabb3c.33.llvm.4719369549894925764+0x80>
   656eb:	48 89 44 24 18       	mov    QWORD PTR [rsp+0x18],rax
   656f0:	48 c7 44 24 20 02 00 	mov    QWORD PTR [rsp+0x20],0x2
   656f7:	00 00 
   656f9:	48 c7 44 24 38 00 00 	mov    QWORD PTR [rsp+0x38],0x0
   65700:	00 00 
   65702:	4c 89 7c 24 28       	mov    QWORD PTR [rsp+0x28],r15
   65707:	48 c7 44 24 30 02 00 	mov    QWORD PTR [rsp+0x30],0x2
   6570e:	00 00 
   65710:	48 8d bc 24 f8 00 00 	lea    rdi,[rsp+0xf8]
   65717:	00 
   65718:	4c 89 ee             	mov    rsi,r13
   6571b:	ff d5                	call   rbp
   6571d:	48 8b 5c 24 10       	mov    rbx,QWORD PTR [rsp+0x10]
   65722:	48 3b 1c 24          	cmp    rbx,QWORD PTR [rsp]
   65726:	75 10                	jne    65738 <strategy_sm4::signal_pairs_tree::SignalPairsTree::debug_string+0x438>
   65728:	48 89 e7             	mov    rdi,rsp
   6572b:	48 8d 35 56 cb 07 00 	lea    rsi,[rip+0x7cb56]        # e2288 <anon.cc0547108b5ad03ae23ec7d169cabb3c.33.llvm.4719369549894925764+0xa0>
   65732:	ff 15 68 22 08 00    	call   QWORD PTR [rip+0x82268]        # e79a0 <_DYNAMIC+0x2e0>
   65738:	48 8b 44 24 08       	mov    rax,QWORD PTR [rsp+0x8]
   6573d:	48 8d 0c 5b          	lea    rcx,[rbx+rbx*2]
   65741:	48 8b 94 24 08 01 00 	mov    rdx,QWORD PTR [rsp+0x108]
   65748:	00 
   65749:	48 89 54 c8 10       	mov    QWORD PTR [rax+rcx*8+0x10],rdx
   6574e:	0f 10 84 24 f8 00 00 	movups xmm0,XMMWORD PTR [rsp+0xf8]
   65755:	00 
   65756:	0f 11 04 c8          	movups XMMWORD PTR [rax+rcx*8],xmm0
   6575a:	48 ff c3             	inc    rbx
   6575d:	48 89 5c 24 10       	mov    QWORD PTR [rsp+0x10],rbx
   65762:	48 8b 74 24 70       	mov    rsi,QWORD PTR [rsp+0x70]
   65767:	48 85 f6             	test   rsi,rsi
   6576a:	74 10                	je     6577c <strategy_sm4::signal_pairs_tree::SignalPairsTree::debug_string+0x47c>
   6576c:	48 8b 7c 24 78       	mov    rdi,QWORD PTR [rsp+0x78]
   65771:	ba 01 00 00 00       	mov    edx,0x1
   65776:	ff 15 4c 21 08 00    	call   QWORD PTR [rip+0x8214c]        # e78c8 <_DYNAMIC+0x208>
   6577c:	48 8b 74 24 50       	mov    rsi,QWORD PTR [rsp+0x50]
   65781:	48 85 f6             	test   rsi,rsi
   65784:	0f 84 56 fc ff ff    	je     653e0 <strategy_sm4::signal_pairs_tree::SignalPairsTree::debug_string+0xe0>
   6578a:	48 8b 7c 24 58       	mov    rdi,QWORD PTR [rsp+0x58]
   6578f:	ba 01 00 00 00       	mov    edx,0x1
   65794:	ff 15 2e 21 08 00    	call   QWORD PTR [rip+0x8212e]        # e78c8 <_DYNAMIC+0x208>
   6579a:	e9 41 fc ff ff       	jmp    653e0 <strategy_sm4::signal_pairs_tree::SignalPairsTree::debug_string+0xe0>
   6579f:	48 8d bc 24 10 01 00 	lea    rdi,[rsp+0x110]
   657a6:	00 
   657a7:	e8 c4 4c ff ff       	call   5a470 <<alloc::collections::btree::map::Iter<K,V> as core::iter::traits::iterator::Iterator>::next>
   657ac:	48 85 c0             	test   rax,rax
   657af:	0f 85 c0 00 00 00    	jne    65875 <strategy_sm4::signal_pairs_tree::SignalPairsTree::debug_string+0x575>
   657b5:	48 8b 74 24 08       	mov    rsi,QWORD PTR [rsp+0x8]
   657ba:	48 8b 54 24 10       	mov    rdx,QWORD PTR [rsp+0x10]
   657bf:	48 8d 0d 02 42 fb ff 	lea    rcx,[rip+0xfffffffffffb4202]        # 199c8 <anon.cc0547108b5ad03ae23ec7d169cabb3c.10.llvm.4719369549894925764+0x3c>
   657c6:	48 8d bc 24 10 01 00 	lea    rdi,[rsp+0x110]
   657cd:	00 
   657ce:	41 b8 01 00 00 00    	mov    r8d,0x1
   657d4:	e8 57 3b 00 00       	call   69330 <alloc::str::join_generic_copy>
   657d9:	48 8b 84 24 20 01 00 	mov    rax,QWORD PTR [rsp+0x120]
   657e0:	00 
   657e1:	4c 8b a4 24 b8 00 00 	mov    r12,QWORD PTR [rsp+0xb8]
   657e8:	00 
   657e9:	49 89 44 24 10       	mov    QWORD PTR [r12+0x10],rax
   657ee:	0f 10 84 24 10 01 00 	movups xmm0,XMMWORD PTR [rsp+0x110]
   657f5:	00 
   657f6:	41 0f 11 04 24       	movups XMMWORD PTR [r12],xmm0
   657fb:	48 8b 5c 24 10       	mov    rbx,QWORD PTR [rsp+0x10]
   65800:	48 85 db             	test   rbx,rbx
   65803:	74 3a                	je     6583f <strategy_sm4::signal_pairs_tree::SignalPairsTree::debug_string+0x53f>
   65805:	4c 8b 74 24 08       	mov    r14,QWORD PTR [rsp+0x8]
   6580a:	49 83 c6 08          	add    r14,0x8
   6580e:	4c 8b 3d b3 20 08 00 	mov    r15,QWORD PTR [rip+0x820b3]        # e78c8 <_DYNAMIC+0x208>
   65815:	eb 12                	jmp    65829 <strategy_sm4::signal_pairs_tree::SignalPairsTree::debug_string+0x529>
   65817:	66 0f 1f 84 00 00 00 	nop    WORD PTR [rax+rax*1+0x0]
   6581e:	00 00 
   65820:	49 83 c6 18          	add    r14,0x18
   65824:	48 ff cb             	dec    rbx
   65827:	74 16                	je     6583f <strategy_sm4::signal_pairs_tree::SignalPairsTree::debug_string+0x53f>
   65829:	49 8b 76 f8          	mov    rsi,QWORD PTR [r14-0x8]
   6582d:	48 85 f6             	test   rsi,rsi
   65830:	74 ee                	je     65820 <strategy_sm4::signal_pairs_tree::SignalPairsTree::debug_string+0x520>
   65832:	49 8b 3e             	mov    rdi,QWORD PTR [r14]
   65835:	ba 01 00 00 00       	mov    edx,0x1
   6583a:	41 ff d7             	call   r15
   6583d:	eb e1                	jmp    65820 <strategy_sm4::signal_pairs_tree::SignalPairsTree::debug_string+0x520>
   6583f:	48 8b 04 24          	mov    rax,QWORD PTR [rsp]
   65843:	48 85 c0             	test   rax,rax
   65846:	74 18                	je     65860 <strategy_sm4::signal_pairs_tree::SignalPairsTree::debug_string+0x560>
   65848:	48 8b 7c 24 08       	mov    rdi,QWORD PTR [rsp+0x8]
   6584d:	48 c1 e0 03          	shl    rax,0x3
   65851:	48 8d 34 40          	lea    rsi,[rax+rax*2]
   65855:	ba 08 00 00 00       	mov    edx,0x8
   6585a:	ff 15 68 20 08 00    	call   QWORD PTR [rip+0x82068]        # e78c8 <_DYNAMIC+0x208>
   65860:	4c 89 e0             	mov    rax,r12
   65863:	48 81 c4 78 01 00 00 	add    rsp,0x178
   6586a:	5b                   	pop    rbx
   6586b:	41 5c                	pop    r12
   6586d:	41 5d                	pop    r13
   6586f:	41 5e                	pop    r14
   65871:	41 5f                	pop    r15
   65873:	5d                   	pop    rbp
   65874:	c3                   	ret    
   65875:	48 89 44 24 48       	mov    QWORD PTR [rsp+0x48],rax
   6587a:	48 8d 3d 7f c9 07 00 	lea    rdi,[rip+0x7c97f]        # e2200 <anon.cc0547108b5ad03ae23ec7d169cabb3c.33.llvm.4719369549894925764+0x18>
   65881:	ff 15 c1 20 08 00    	call   QWORD PTR [rip+0x820c1]        # e7948 <_DYNAMIC+0x288>
   65887:	0f 0b                	ud2    
   65889:	eb 46                	jmp    658d1 <strategy_sm4::signal_pairs_tree::SignalPairsTree::debug_string+0x5d1>
   6588b:	48 89 c3             	mov    rbx,rax
   6588e:	48 8b b4 24 f8 00 00 	mov    rsi,QWORD PTR [rsp+0xf8]
   65895:	00 
   65896:	48 85 f6             	test   rsi,rsi
   65899:	74 18                	je     658b3 <strategy_sm4::signal_pairs_tree::SignalPairsTree::debug_string+0x5b3>
   6589b:	48 8b bc 24 00 01 00 	mov    rdi,QWORD PTR [rsp+0x100]
   658a2:	00 
   658a3:	ba 01 00 00 00       	mov    edx,0x1
   658a8:	ff 15 1a 20 08 00    	call   QWORD PTR [rip+0x8201a]        # e78c8 <_DYNAMIC+0x208>
   658ae:	eb 03                	jmp    658b3 <strategy_sm4::signal_pairs_tree::SignalPairsTree::debug_string+0x5b3>
   658b0:	48 89 c3             	mov    rbx,rax
   658b3:	48 8b 74 24 70       	mov    rsi,QWORD PTR [rsp+0x70]
   658b8:	48 85 f6             	test   rsi,rsi
   658bb:	74 2a                	je     658e7 <strategy_sm4::signal_pairs_tree::SignalPairsTree::debug_string+0x5e7>
   658bd:	48 8b 7c 24 78       	mov    rdi,QWORD PTR [rsp+0x78]
   658c2:	ba 01 00 00 00       	mov    edx,0x1
   658c7:	ff 15 fb 1f 08 00    	call   QWORD PTR [rip+0x81ffb]        # e78c8 <_DYNAMIC+0x208>
   658cd:	eb 18                	jmp    658e7 <strategy_sm4::signal_pairs_tree::SignalPairsTree::debug_string+0x5e7>
   658cf:	eb 00                	jmp    658d1 <strategy_sm4::signal_pairs_tree::SignalPairsTree::debug_string+0x5d1>
   658d1:	48 89 c3             	mov    rbx,rax
   658d4:	48 89 e7             	mov    rdi,rsp
   658d7:	e8 c4 da ff ff       	call   633a0 <core::ptr::drop_in_place<alloc::vec::Vec<alloc::string::String>>>
   658dc:	48 89 df             	mov    rdi,rbx
   658df:	e8 dc a8 07 00       	call   e01c0 <_Unwind_Resume@plt>
   658e4:	48 89 c3             	mov    rbx,rax
   658e7:	48 8b 74 24 50       	mov    rsi,QWORD PTR [rsp+0x50]
   658ec:	48 85 f6             	test   rsi,rsi
   658ef:	74 10                	je     65901 <strategy_sm4::signal_pairs_tree::SignalPairsTree::debug_string+0x601>
   658f1:	48 8b 7c 24 58       	mov    rdi,QWORD PTR [rsp+0x58]
   658f6:	ba 01 00 00 00       	mov    edx,0x1
   658fb:	ff 15 c7 1f 08 00    	call   QWORD PTR [rip+0x81fc7]        # e78c8 <_DYNAMIC+0x208>
   65901:	48 89 e7             	mov    rdi,rsp
   65904:	e8 97 da ff ff       	call   633a0 <core::ptr::drop_in_place<alloc::vec::Vec<alloc::string::String>>>
   65909:	48 89 df             	mov    rdi,rbx
   6590c:	e8 af a8 07 00       	call   e01c0 <_Unwind_Resume@plt>
   65911:	cc                   	int3   
   65912:	cc                   	int3   
   65913:	cc                   	int3   
   65914:	cc                   	int3   
   65915:	cc                   	int3   
   65916:	cc                   	int3   
   65917:	cc                   	int3   
   65918:	cc                   	int3   
   65919:	cc                   	int3   
   6591a:	cc                   	int3   
   6591b:	cc                   	int3   
   6591c:	cc                   	int3   
   6591d:	cc                   	int3   
   6591e:	cc                   	int3   
   6591f:	cc                   	int3   

00000000000650a0 <strategy_sm4::signal_pairs_tree::SignalPairsTree::find_nearest_pair_median_threshold>:
   650a0:	55                   	push   rbp
   650a1:	41 57                	push   r15
   650a3:	41 56                	push   r14
   650a5:	41 54                	push   r12
   650a7:	53                   	push   rbx
   650a8:	48 83 ec 60          	sub    rsp,0x60
   650ac:	f2 0f 11 44 24 08    	movsd  QWORD PTR [rsp+0x8],xmm0
   650b2:	4c 8b 7e 20          	mov    r15,QWORD PTR [rsi+0x20]
   650b6:	4d 85 ff             	test   r15,r15
   650b9:	0f 84 27 02 00 00    	je     652e6 <strategy_sm4::signal_pairs_tree::SignalPairsTree::find_nearest_pair_median_threshold+0x246>
   650bf:	49 89 f6             	mov    r14,rsi
   650c2:	48 89 fb             	mov    rbx,rdi
   650c5:	4c 8b 66 28          	mov    r12,QWORD PTR [rsi+0x28]
   650c9:	31 c0                	xor    eax,eax
   650cb:	4c 89 e1             	mov    rcx,r12
   650ce:	4c 89 ff             	mov    rdi,r15
   650d1:	44 0f b7 87 8a 05 00 	movzx  r8d,WORD PTR [rdi+0x58a]
   650d8:	00 
   650d9:	4d 6b c8 78          	imul   r9,r8,0x78
   650dd:	48 c7 c2 ff ff ff ff 	mov    rdx,0xffffffffffffffff
   650e4:	31 f6                	xor    esi,esi
   650e6:	66 2e 0f 1f 84 00 00 	cs nop WORD PTR [rax+rax*1+0x0]
   650ed:	00 00 00 
   650f0:	4d 89 ca             	mov    r10,r9
   650f3:	49 01 f2             	add    r10,rsi
   650f6:	74 28                	je     65120 <strategy_sm4::signal_pairs_tree::SignalPairsTree::find_nearest_pair_median_threshold+0x80>
   650f8:	48 3b 44 d7 10       	cmp    rax,QWORD PTR [rdi+rdx*8+0x10]
   650fd:	41 0f 97 c2          	seta   r10b
   65101:	41 80 da 00          	sbb    r10b,0x0
   65105:	48 ff c2             	inc    rdx
   65108:	48 83 c6 88          	add    rsi,0xffffffffffffff88
   6510c:	41 80 fa 01          	cmp    r10b,0x1
   65110:	74 de                	je     650f0 <strategy_sm4::signal_pairs_tree::SignalPairsTree::find_nearest_pair_median_threshold+0x50>
   65112:	45 0f b6 c2          	movzx  r8d,r10b
   65116:	45 85 c0             	test   r8d,r8d
   65119:	74 1c                	je     65137 <strategy_sm4::signal_pairs_tree::SignalPairsTree::find_nearest_pair_median_threshold+0x97>
   6511b:	eb 06                	jmp    65123 <strategy_sm4::signal_pairs_tree::SignalPairsTree::find_nearest_pair_median_threshold+0x83>
   6511d:	0f 1f 00             	nop    DWORD PTR [rax]
   65120:	4c 89 c2             	mov    rdx,r8
   65123:	48 83 e9 01          	sub    rcx,0x1
   65127:	0f 82 b9 01 00 00    	jb     652e6 <strategy_sm4::signal_pairs_tree::SignalPairsTree::find_nearest_pair_median_threshold+0x246>
   6512d:	48 8b bc d7 90 05 00 	mov    rdi,QWORD PTR [rdi+rdx*8+0x590]
   65134:	00 
   65135:	eb 9a                	jmp    650d1 <strategy_sm4::signal_pairs_tree::SignalPairsTree::find_nearest_pair_median_threshold+0x31>
   65137:	48 29 f7             	sub    rdi,rsi
   6513a:	48 83 c7 e8          	add    rdi,0xffffffffffffffe8
   6513e:	e8 1d ea ff ff       	call   63b60 <_ZN12strategy_sm417signal_pairs_tree15SignalPairStats28get_pairs_time_sec_ms_median17hd03f3837d95f7339E.llvm.4719369549894925764>
   65143:	48 83 f8 01          	cmp    rax,0x1
   65147:	0f 85 33 01 00 00    	jne    65280 <strategy_sm4::signal_pairs_tree::SignalPairsTree::find_nearest_pair_median_threshold+0x1e0>
   6514d:	49 8b 46 30          	mov    rax,QWORD PTR [r14+0x30]
   65151:	48 c7 44 24 10 01 00 	mov    QWORD PTR [rsp+0x10],0x1
   65158:	00 00 
   6515a:	48 c7 44 24 18 00 00 	mov    QWORD PTR [rsp+0x18],0x0
   65161:	00 00 
   65163:	4c 89 7c 24 20       	mov    QWORD PTR [rsp+0x20],r15
   65168:	4c 89 64 24 28       	mov    QWORD PTR [rsp+0x28],r12
   6516d:	48 c7 44 24 30 01 00 	mov    QWORD PTR [rsp+0x30],0x1
   65174:	00 00 
   65176:	48 c7 44 24 38 00 00 	mov    QWORD PTR [rsp+0x38],0x0
   6517d:	00 00 
   6517f:	4c 89 7c 24 40       	mov    QWORD PTR [rsp+0x40],r15
   65184:	4c 89 64 24 48       	mov    QWORD PTR [rsp+0x48],r12
   65189:	48 89 44 24 50       	mov    QWORD PTR [rsp+0x50],rax
   6518e:	48 8d 7c 24 10       	lea    rdi,[rsp+0x10]
   65193:	e8 d8 52 ff ff       	call   5a470 <<alloc::collections::btree::map::Iter<K,V> as core::iter::traits::iterator::Iterator>::next>
   65198:	48 85 c0             	test   rax,rax
   6519b:	0f 84 df 00 00 00    	je     65280 <strategy_sm4::signal_pairs_tree::SignalPairsTree::find_nearest_pair_median_threshold+0x1e0>
   651a1:	49 89 c4             	mov    r12,rax
   651a4:	f2 0f 10 05 0c 2d fb 	movsd  xmm0,QWORD PTR [rip+0xfffffffffffb2d0c]        # 17eb8 <anon.70b899b187d1e871bc88b3cd4c46b3b0.11.llvm.9000053735115140344+0x263>
   651ab:	ff 
   651ac:	f2 0f 11 04 24       	movsd  QWORD PTR [rsp],xmm0
   651b1:	bd ff ff ff ff       	mov    ebp,0xffffffff
   651b6:	4c 8d 7c 24 10       	lea    r15,[rsp+0x10]
   651bb:	eb 13                	jmp    651d0 <strategy_sm4::signal_pairs_tree::SignalPairsTree::find_nearest_pair_median_threshold+0x130>
   651bd:	0f 1f 00             	nop    DWORD PTR [rax]
   651c0:	4c 89 ff             	mov    rdi,r15
   651c3:	e8 a8 52 ff ff       	call   5a470 <<alloc::collections::btree::map::Iter<K,V> as core::iter::traits::iterator::Iterator>::next>
   651c8:	49 89 c4             	mov    r12,rax
   651cb:	48 85 c0             	test   rax,rax
   651ce:	74 30                	je     65200 <strategy_sm4::signal_pairs_tree::SignalPairsTree::find_nearest_pair_median_threshold+0x160>
   651d0:	48 89 d7             	mov    rdi,rdx
   651d3:	e8 88 e9 ff ff       	call   63b60 <_ZN12strategy_sm417signal_pairs_tree15SignalPairStats28get_pairs_time_sec_ms_median17hd03f3837d95f7339E.llvm.4719369549894925764>
   651d8:	a8 01                	test   al,0x1
   651da:	74 e4                	je     651c0 <strategy_sm4::signal_pairs_tree::SignalPairsTree::find_nearest_pair_median_threshold+0x120>
   651dc:	f2 0f 5c 44 24 08    	subsd  xmm0,QWORD PTR [rsp+0x8]
   651e2:	66 0f 54 05 e6 2d fb 	andpd  xmm0,XMMWORD PTR [rip+0xfffffffffffb2de6]        # 17fd0 <anon.70b899b187d1e871bc88b3cd4c46b3b0.11.llvm.9000053735115140344+0x37b>
   651e9:	ff 
   651ea:	f2 0f 10 0c 24       	movsd  xmm1,QWORD PTR [rsp]
   651ef:	66 0f 2e c8          	ucomisd xmm1,xmm0
   651f3:	76 cb                	jbe    651c0 <strategy_sm4::signal_pairs_tree::SignalPairsTree::find_nearest_pair_median_threshold+0x120>
   651f5:	41 8b 2c 24          	mov    ebp,DWORD PTR [r12]
   651f9:	f2 0f 11 04 24       	movsd  QWORD PTR [rsp],xmm0
   651fe:	eb c0                	jmp    651c0 <strategy_sm4::signal_pairs_tree::SignalPairsTree::find_nearest_pair_median_threshold+0x120>
   65200:	83 fd ff             	cmp    ebp,0xffffffff
   65203:	74 7b                	je     65280 <strategy_sm4::signal_pairs_tree::SignalPairsTree::find_nearest_pair_median_threshold+0x1e0>
   65205:	48 63 c5             	movsxd rax,ebp
   65208:	49 8b 56 38          	mov    rdx,QWORD PTR [r14+0x38]
   6520c:	48 85 d2             	test   rdx,rdx
   6520f:	0f 84 bc 00 00 00    	je     652d1 <strategy_sm4::signal_pairs_tree::SignalPairsTree::find_nearest_pair_median_threshold+0x231>
   65215:	49 8b 76 40          	mov    rsi,QWORD PTR [r14+0x40]
   65219:	31 c9                	xor    ecx,ecx
   6521b:	44 0f b7 82 c2 01 00 	movzx  r8d,WORD PTR [rdx+0x1c2]
   65222:	00 
   65223:	45 89 c2             	mov    r10d,r8d
   65226:	41 c1 e2 03          	shl    r10d,0x3
   6522a:	48 c7 c7 ff ff ff ff 	mov    rdi,0xffffffffffffffff
   65231:	45 31 c9             	xor    r9d,r9d
   65234:	66 66 66 2e 0f 1f 84 	data16 data16 cs nop WORD PTR [rax+rax*1+0x0]
   6523b:	00 00 00 00 00 
   65240:	4d 39 ca             	cmp    r10,r9
   65243:	74 28                	je     6526d <strategy_sm4::signal_pairs_tree::SignalPairsTree::find_nearest_pair_median_threshold+0x1cd>
   65245:	4a 3b 84 0a 68 01 00 	cmp    rax,QWORD PTR [rdx+r9*1+0x168]
   6524c:	00 
   6524d:	41 0f 97 c3          	seta   r11b
   65251:	41 80 db 00          	sbb    r11b,0x0
   65255:	49 83 c1 08          	add    r9,0x8
   65259:	48 ff c7             	inc    rdi
   6525c:	41 80 fb 01          	cmp    r11b,0x1
   65260:	74 de                	je     65240 <strategy_sm4::signal_pairs_tree::SignalPairsTree::find_nearest_pair_median_threshold+0x1a0>
   65262:	45 0f b6 c3          	movzx  r8d,r11b
   65266:	45 85 c0             	test   r8d,r8d
   65269:	74 45                	je     652b0 <strategy_sm4::signal_pairs_tree::SignalPairsTree::find_nearest_pair_median_threshold+0x210>
   6526b:	eb 03                	jmp    65270 <strategy_sm4::signal_pairs_tree::SignalPairsTree::find_nearest_pair_median_threshold+0x1d0>
   6526d:	4c 89 c7             	mov    rdi,r8
   65270:	48 83 ee 01          	sub    rsi,0x1
   65274:	72 5d                	jb     652d3 <strategy_sm4::signal_pairs_tree::SignalPairsTree::find_nearest_pair_median_threshold+0x233>
   65276:	48 8b 94 fa c8 01 00 	mov    rdx,QWORD PTR [rdx+rdi*8+0x1c8]
   6527d:	00 
   6527e:	eb 9b                	jmp    6521b <strategy_sm4::signal_pairs_tree::SignalPairsTree::find_nearest_pair_median_threshold+0x17b>
   65280:	48 c7 03 00 00 00 00 	mov    QWORD PTR [rbx],0x0
   65287:	48 c7 43 08 01 00 00 	mov    QWORD PTR [rbx+0x8],0x1
   6528e:	00 
   6528f:	41 0f 10 06          	movups xmm0,XMMWORD PTR [r14]
   65293:	41 0f 10 4e 10       	movups xmm1,XMMWORD PTR [r14+0x10]
   65298:	0f 11 43 10          	movups XMMWORD PTR [rbx+0x10],xmm0
   6529c:	0f 11 4b 20          	movups XMMWORD PTR [rbx+0x20],xmm1
   652a0:	48 89 d8             	mov    rax,rbx
   652a3:	48 83 c4 60          	add    rsp,0x60
   652a7:	5b                   	pop    rbx
   652a8:	41 5c                	pop    r12
   652aa:	41 5e                	pop    r14
   652ac:	41 5f                	pop    r15
   652ae:	5d                   	pop    rbp
   652af:	c3                   	ret    
   652b0:	66 42 0f 10 44 8a e0 	movupd xmm0,XMMWORD PTR [rdx+r9*4-0x20]
   652b7:	66 42 0f 10 4c 8a f0 	movupd xmm1,XMMWORD PTR [rdx+r9*4-0x10]
   652be:	66 0f 29 4c 24 20    	movapd XMMWORD PTR [rsp+0x20],xmm1
   652c4:	66 0f 29 44 24 10    	movapd XMMWORD PTR [rsp+0x10],xmm0
   652ca:	b9 01 00 00 00       	mov    ecx,0x1
   652cf:	eb 02                	jmp    652d3 <strategy_sm4::signal_pairs_tree::SignalPairsTree::find_nearest_pair_median_threshold+0x233>
   652d1:	31 c9                	xor    ecx,ecx
   652d3:	48 89 03             	mov    QWORD PTR [rbx],rax
   652d6:	48 89 4b 08          	mov    QWORD PTR [rbx+0x8],rcx
   652da:	0f 28 44 24 10       	movaps xmm0,XMMWORD PTR [rsp+0x10]
   652df:	0f 28 4c 24 20       	movaps xmm1,XMMWORD PTR [rsp+0x20]
   652e4:	eb b2                	jmp    65298 <strategy_sm4::signal_pairs_tree::SignalPairsTree::find_nearest_pair_median_threshold+0x1f8>
   652e6:	48 8d 3d fb ce 07 00 	lea    rdi,[rip+0x7cefb]        # e21e8 <anon.cc0547108b5ad03ae23ec7d169cabb3c.33.llvm.4719369549894925764>
   652ed:	ff 15 55 26 08 00    	call   QWORD PTR [rip+0x82655]        # e7948 <_DYNAMIC+0x288>
   652f3:	cc                   	int3   
   652f4:	cc                   	int3   
   652f5:	cc                   	int3   
   652f6:	cc                   	int3   
   652f7:	cc                   	int3   
   652f8:	cc                   	int3   
   652f9:	cc                   	int3   
   652fa:	cc                   	int3   
   652fb:	cc                   	int3   
   652fc:	cc                   	int3   
   652fd:	cc                   	int3   
   652fe:	cc                   	int3   
   652ff:	cc                   	int3   

0000000000063d00 <strategy_sm4::signal_pairs_tree::SignalPairsTree::new>:
   63d00:	55                   	push   rbp
   63d01:	41 57                	push   r15
   63d03:	41 56                	push   r14
   63d05:	41 55                	push   r13
   63d07:	41 54                	push   r12
   63d09:	53                   	push   rbx
   63d0a:	48 81 ec c8 01 00 00 	sub    rsp,0x1c8
   63d11:	f2 0f 11 44 24 28    	movsd  QWORD PTR [rsp+0x28],xmm0
   63d17:	49 89 d5             	mov    r13,rdx
   63d1a:	49 89 f6             	mov    r14,rsi
   63d1d:	48 89 fd             	mov    rbp,rdi
   63d20:	48 c7 44 24 30 00 00 	mov    QWORD PTR [rsp+0x30],0x0
   63d27:	00 00 
   63d29:	48 c7 44 24 40 00 00 	mov    QWORD PTR [rsp+0x40],0x0
   63d30:	00 00 
   63d32:	48 c7 44 24 48 00 00 	mov    QWORD PTR [rsp+0x48],0x0
   63d39:	00 00 
   63d3b:	48 c7 44 24 58 00 00 	mov    QWORD PTR [rsp+0x58],0x0
   63d42:	00 00 
   63d44:	0f 10 06             	movups xmm0,XMMWORD PTR [rsi]
   63d47:	0f 10 4e 10          	movups xmm1,XMMWORD PTR [rsi+0x10]
   63d4b:	0f 29 8c 24 90 00 00 	movaps XMMWORD PTR [rsp+0x90],xmm1
   63d52:	00 
   63d53:	0f 29 84 24 80 00 00 	movaps XMMWORD PTR [rsp+0x80],xmm0
   63d5a:	00 
   63d5b:	48 8d bc 24 20 01 00 	lea    rdi,[rsp+0x120]
   63d62:	00 
   63d63:	48 8d 74 24 48       	lea    rsi,[rsp+0x48]
   63d68:	48 8d 8c 24 80 00 00 	lea    rcx,[rsp+0x80]
   63d6f:	00 
   63d70:	31 d2                	xor    edx,edx
   63d72:	4c 89 2c 24          	mov    QWORD PTR [rsp],r13
   63d76:	e8 a5 77 ff ff       	call   5b520 <alloc::collections::btree::map::BTreeMap<K,V,A>::insert>
   63d7b:	48 c7 84 24 80 00 00 	mov    QWORD PTR [rsp+0x80],0x0
   63d82:	00 00 00 00 00 
   63d87:	48 c7 84 24 88 00 00 	mov    QWORD PTR [rsp+0x88],0x8
   63d8e:	00 08 00 00 00 
   63d93:	0f 57 c0             	xorps  xmm0,xmm0
   63d96:	0f 11 84 24 90 00 00 	movups XMMWORD PTR [rsp+0x90],xmm0
   63d9d:	00 
   63d9e:	f2 0f 10 44 24 28    	movsd  xmm0,QWORD PTR [rsp+0x28]
   63da4:	f2 0f 11 84 24 a0 00 	movsd  QWORD PTR [rsp+0xa0],xmm0
   63dab:	00 00 
   63dad:	66 48 8d 3d fb 3e 08 	data16 lea rdi,[rip+0x83efb]        # e7cb0 <_DYNAMIC+0x5f0>
   63db4:	00 
   63db5:	66 66 48 e8 13 c4 07 	data16 data16 rex.W call e01d0 <__tls_get_addr@plt>
   63dbc:	00 
   63dbd:	48 89 c3             	mov    rbx,rax
   63dc0:	80 78 10 01          	cmp    BYTE PTR [rax+0x10],0x1
   63dc4:	0f 85 2a 05 00 00    	jne    642f4 <strategy_sm4::signal_pairs_tree::SignalPairsTree::new+0x5f4>
   63dca:	48 8b 03             	mov    rax,QWORD PTR [rbx]
   63dcd:	48 8b 53 08          	mov    rdx,QWORD PTR [rbx+0x8]
   63dd1:	48 8d 48 01          	lea    rcx,[rax+0x1]
   63dd5:	48 89 5c 24 20       	mov    QWORD PTR [rsp+0x20],rbx
   63dda:	48 89 0b             	mov    QWORD PTR [rbx],rcx
   63ddd:	41 0f 10 06          	movups xmm0,XMMWORD PTR [r14]
   63de1:	41 0f 10 4e 10       	movups xmm1,XMMWORD PTR [r14+0x10]
   63de6:	0f 11 8c 24 88 01 00 	movups XMMWORD PTR [rsp+0x188],xmm1
   63ded:	00 
   63dee:	0f 11 84 24 78 01 00 	movups XMMWORD PTR [rsp+0x178],xmm0
   63df5:	00 
   63df6:	0f 10 84 24 80 00 00 	movups xmm0,XMMWORD PTR [rsp+0x80]
   63dfd:	00 
   63dfe:	0f 10 8c 24 90 00 00 	movups xmm1,XMMWORD PTR [rsp+0x90]
   63e05:	00 
   63e06:	0f 29 84 24 20 01 00 	movaps XMMWORD PTR [rsp+0x120],xmm0
   63e0d:	00 
   63e0e:	0f 29 8c 24 30 01 00 	movaps XMMWORD PTR [rsp+0x130],xmm1
   63e15:	00 
   63e16:	48 8b 8c 24 a0 00 00 	mov    rcx,QWORD PTR [rsp+0xa0]
   63e1d:	00 
   63e1e:	48 89 8c 24 40 01 00 	mov    QWORD PTR [rsp+0x140],rcx
   63e25:	00 
   63e26:	0f 10 05 93 e2 07 00 	movups xmm0,XMMWORD PTR [rip+0x7e293]        # e20c0 <anon.cc0547108b5ad03ae23ec7d169cabb3c.13.llvm.4719369549894925764+0x30>
   63e2d:	0f 11 84 24 48 01 00 	movups XMMWORD PTR [rsp+0x148],xmm0
   63e34:	00 
   63e35:	0f 10 05 94 e2 07 00 	movups xmm0,XMMWORD PTR [rip+0x7e294]        # e20d0 <anon.cc0547108b5ad03ae23ec7d169cabb3c.13.llvm.4719369549894925764+0x40>
   63e3c:	0f 11 84 24 58 01 00 	movups XMMWORD PTR [rsp+0x158],xmm0
   63e43:	00 
   63e44:	48 89 84 24 68 01 00 	mov    QWORD PTR [rsp+0x168],rax
   63e4b:	00 
   63e4c:	48 89 94 24 70 01 00 	mov    QWORD PTR [rsp+0x170],rdx
   63e53:	00 
   63e54:	48 8d bc 24 80 00 00 	lea    rdi,[rsp+0x80]
   63e5b:	00 
   63e5c:	48 8d 74 24 30       	lea    rsi,[rsp+0x30]
   63e61:	48 8d 8c 24 20 01 00 	lea    rcx,[rsp+0x120]
   63e68:	00 
   63e69:	31 d2                	xor    edx,edx
   63e6b:	e8 b0 70 ff ff       	call   5af20 <alloc::collections::btree::map::BTreeMap<K,V,A>::insert>
   63e70:	48 8b 9c 24 80 00 00 	mov    rbx,QWORD PTR [rsp+0x80]
   63e77:	00 
   63e78:	48 89 d8             	mov    rax,rbx
   63e7b:	48 f7 d8             	neg    rax
   63e7e:	48 89 6c 24 68       	mov    QWORD PTR [rsp+0x68],rbp
   63e83:	4c 89 74 24 60       	mov    QWORD PTR [rsp+0x60],r14
   63e88:	0f 80 ca 00 00 00    	jo     63f58 <strategy_sm4::signal_pairs_tree::SignalPairsTree::new+0x258>
   63e8e:	4c 8b bc 24 98 00 00 	mov    r15,QWORD PTR [rsp+0x98]
   63e95:	00 
   63e96:	4d 85 ff             	test   r15,r15
   63e99:	0f 84 90 00 00 00    	je     63f2f <strategy_sm4::signal_pairs_tree::SignalPairsTree::new+0x22f>
   63e9f:	4c 8b b4 24 88 00 00 	mov    r14,QWORD PTR [rsp+0x88]
   63ea6:	00 
   63ea7:	48 8b 84 24 90 00 00 	mov    rax,QWORD PTR [rsp+0x90]
   63eae:	00 
   63eaf:	31 d2                	xor    edx,edx
   63eb1:	48 39 d8             	cmp    rax,rbx
   63eb4:	48 89 d9             	mov    rcx,rbx
   63eb7:	48 0f 42 ca          	cmovb  rcx,rdx
   63ebb:	48 89 c6             	mov    rsi,rax
   63ebe:	48 29 ce             	sub    rsi,rcx
   63ec1:	48 89 df             	mov    rdi,rbx
   63ec4:	48 29 f7             	sub    rdi,rsi
   63ec7:	4a 8d 2c 3e          	lea    rbp,[rsi+r15*1]
   63ecb:	4c 89 7c 24 08       	mov    QWORD PTR [rsp+0x8],r15
   63ed0:	48 89 7c 24 10       	mov    QWORD PTR [rsp+0x10],rdi
   63ed5:	49 29 ff             	sub    r15,rdi
   63ed8:	4c 0f 42 fa          	cmovb  r15,rdx
   63edc:	48 0f 47 eb          	cmova  rbp,rbx
   63ee0:	48 29 f5             	sub    rbp,rsi
   63ee3:	0f 85 c5 03 00 00    	jne    642ae <strategy_sm4::signal_pairs_tree::SignalPairsTree::new+0x5ae>
   63ee9:	48 8b 44 24 10       	mov    rax,QWORD PTR [rsp+0x10]
   63eee:	48 3b 44 24 08       	cmp    rax,QWORD PTR [rsp+0x8]
   63ef3:	4c 8b 2c 24          	mov    r13,QWORD PTR [rsp]
   63ef7:	73 36                	jae    63f2f <strategy_sm4::signal_pairs_tree::SignalPairsTree::new+0x22f>
   63ef9:	49 83 c6 50          	add    r14,0x50
   63efd:	4c 8b 25 c4 39 08 00 	mov    r12,QWORD PTR [rip+0x839c4]        # e78c8 <_DYNAMIC+0x208>
   63f04:	eb 13                	jmp    63f19 <strategy_sm4::signal_pairs_tree::SignalPairsTree::new+0x219>
   63f06:	66 2e 0f 1f 84 00 00 	cs nop WORD PTR [rax+rax*1+0x0]
   63f0d:	00 00 00 
   63f10:	49 83 c6 68          	add    r14,0x68
   63f14:	49 ff cf             	dec    r15
   63f17:	74 16                	je     63f2f <strategy_sm4::signal_pairs_tree::SignalPairsTree::new+0x22f>
   63f19:	49 8b 76 f8          	mov    rsi,QWORD PTR [r14-0x8]
   63f1d:	48 85 f6             	test   rsi,rsi
   63f20:	74 ee                	je     63f10 <strategy_sm4::signal_pairs_tree::SignalPairsTree::new+0x210>
   63f22:	49 8b 3e             	mov    rdi,QWORD PTR [r14]
   63f25:	ba 01 00 00 00       	mov    edx,0x1
   63f2a:	41 ff d4             	call   r12
   63f2d:	eb e1                	jmp    63f10 <strategy_sm4::signal_pairs_tree::SignalPairsTree::new+0x210>
   63f2f:	48 85 db             	test   rbx,rbx
   63f32:	74 17                	je     63f4b <strategy_sm4::signal_pairs_tree::SignalPairsTree::new+0x24b>
   63f34:	48 8b bc 24 88 00 00 	mov    rdi,QWORD PTR [rsp+0x88]
   63f3b:	00 
   63f3c:	48 6b f3 68          	imul   rsi,rbx,0x68
   63f40:	ba 08 00 00 00       	mov    edx,0x8
   63f45:	ff 15 7d 39 08 00    	call   QWORD PTR [rip+0x8397d]        # e78c8 <_DYNAMIC+0x208>
   63f4b:	48 8d bc 24 a8 00 00 	lea    rdi,[rsp+0xa8]
   63f52:	00 
   63f53:	e8 18 1f ff ff       	call   55e70 <<hashbrown::raw::RawTable<T,A> as core::ops::drop::Drop>::drop>
   63f58:	49 8b 45 08          	mov    rax,QWORD PTR [r13+0x8]
   63f5c:	48 89 44 24 18       	mov    QWORD PTR [rsp+0x18],rax
   63f61:	4d 8b 6d 10          	mov    r13,QWORD PTR [r13+0x10]
   63f65:	4d 85 ed             	test   r13,r13
   63f68:	48 8b 5c 24 20       	mov    rbx,QWORD PTR [rsp+0x20]
   63f6d:	0f 84 ca 02 00 00    	je     6423d <strategy_sm4::signal_pairs_tree::SignalPairsTree::new+0x53d>
   63f73:	49 be 00 00 00 00 00 	movabs r14,0x8000000000000000
   63f7a:	00 00 80 
   63f7d:	49 c1 e5 05          	shl    r13,0x5
   63f81:	4c 8b 7c 24 18       	mov    r15,QWORD PTR [rsp+0x18]
   63f86:	4d 01 fd             	add    r13,r15
   63f89:	4c 8d a4 24 08 01 00 	lea    r12,[rsp+0x108]
   63f90:	00 
   63f91:	31 ed                	xor    ebp,ebp
   63f93:	4c 89 6c 24 70       	mov    QWORD PTR [rsp+0x70],r13
   63f98:	eb 32                	jmp    63fcc <strategy_sm4::signal_pairs_tree::SignalPairsTree::new+0x2cc>
   63f9a:	66 0f 1f 44 00 00    	nop    WORD PTR [rax+rax*1+0x0]
   63fa0:	48 8d bc 24 a8 00 00 	lea    rdi,[rsp+0xa8]
   63fa7:	00 
   63fa8:	e8 c3 1e ff ff       	call   55e70 <<hashbrown::raw::RawTable<T,A> as core::ops::drop::Drop>::drop>
   63fad:	49 be 00 00 00 00 00 	movabs r14,0x8000000000000000
   63fb4:	00 00 80 
   63fb7:	4c 8d a4 24 08 01 00 	lea    r12,[rsp+0x108]
   63fbe:	00 
   63fbf:	49 83 c7 20          	add    r15,0x20
   63fc3:	4d 39 ef             	cmp    r15,r13
   63fc6:	0f 84 71 02 00 00    	je     6423d <strategy_sm4::signal_pairs_tree::SignalPairsTree::new+0x53d>
   63fcc:	48 ff c5             	inc    rbp
   63fcf:	41 0f 10 07          	movups xmm0,XMMWORD PTR [r15]
   63fd3:	41 0f 10 4f 10       	movups xmm1,XMMWORD PTR [r15+0x10]
   63fd8:	0f 29 8c 24 90 00 00 	movaps XMMWORD PTR [rsp+0x90],xmm1
   63fdf:	00 
   63fe0:	0f 29 84 24 80 00 00 	movaps XMMWORD PTR [rsp+0x80],xmm0
   63fe7:	00 
   63fe8:	48 8d bc 24 20 01 00 	lea    rdi,[rsp+0x120]
   63fef:	00 
   63ff0:	48 8d 74 24 48       	lea    rsi,[rsp+0x48]
   63ff5:	48 89 ea             	mov    rdx,rbp
   63ff8:	48 8d 8c 24 80 00 00 	lea    rcx,[rsp+0x80]
   63fff:	00 
   64000:	e8 1b 75 ff ff       	call   5b520 <alloc::collections::btree::map::BTreeMap<K,V,A>::insert>
   64005:	41 0f 10 07          	movups xmm0,XMMWORD PTR [r15]
   64009:	41 0f 10 4f 10       	movups xmm1,XMMWORD PTR [r15+0x10]
   6400e:	0f 29 8c 24 b0 01 00 	movaps XMMWORD PTR [rsp+0x1b0],xmm1
   64015:	00 
   64016:	0f 29 84 24 a0 01 00 	movaps XMMWORD PTR [rsp+0x1a0],xmm0
   6401d:	00 
   6401e:	48 c7 84 24 f8 00 00 	mov    QWORD PTR [rsp+0xf8],0x0
   64025:	00 00 00 00 00 
   6402a:	48 c7 84 24 00 01 00 	mov    QWORD PTR [rsp+0x100],0x8
   64031:	00 08 00 00 00 
   64036:	0f 57 c0             	xorps  xmm0,xmm0
   64039:	41 0f 11 04 24       	movups XMMWORD PTR [r12],xmm0
   6403e:	f2 0f 10 44 24 28    	movsd  xmm0,QWORD PTR [rsp+0x28]
   64044:	f2 0f 11 84 24 18 01 	movsd  QWORD PTR [rsp+0x118],xmm0
   6404b:	00 00 
   6404d:	80 7b 10 01          	cmp    BYTE PTR [rbx+0x10],0x1
   64051:	0f 85 d0 01 00 00    	jne    64227 <strategy_sm4::signal_pairs_tree::SignalPairsTree::new+0x527>
   64057:	48 8b 03             	mov    rax,QWORD PTR [rbx]
   6405a:	48 8b 53 08          	mov    rdx,QWORD PTR [rbx+0x8]
   6405e:	48 8d 48 01          	lea    rcx,[rax+0x1]
   64062:	48 89 0b             	mov    QWORD PTR [rbx],rcx
   64065:	0f 28 84 24 a0 01 00 	movaps xmm0,XMMWORD PTR [rsp+0x1a0]
   6406c:	00 
   6406d:	0f 28 8c 24 b0 01 00 	movaps xmm1,XMMWORD PTR [rsp+0x1b0]
   64074:	00 
   64075:	48 8d b4 24 78 01 00 	lea    rsi,[rsp+0x178]
   6407c:	00 
   6407d:	0f 11 4e 10          	movups XMMWORD PTR [rsi+0x10],xmm1
   64081:	0f 11 06             	movups XMMWORD PTR [rsi],xmm0
   64084:	0f 10 84 24 f8 00 00 	movups xmm0,XMMWORD PTR [rsp+0xf8]
   6408b:	00 
   6408c:	0f 10 8c 24 08 01 00 	movups xmm1,XMMWORD PTR [rsp+0x108]
   64093:	00 
   64094:	0f 29 84 24 20 01 00 	movaps XMMWORD PTR [rsp+0x120],xmm0
   6409b:	00 
   6409c:	0f 29 8c 24 30 01 00 	movaps XMMWORD PTR [rsp+0x130],xmm1
   640a3:	00 
   640a4:	48 8b 8c 24 18 01 00 	mov    rcx,QWORD PTR [rsp+0x118]
   640ab:	00 
   640ac:	48 89 8c 24 40 01 00 	mov    QWORD PTR [rsp+0x140],rcx
   640b3:	00 
   640b4:	0f 10 05 15 e0 07 00 	movups xmm0,XMMWORD PTR [rip+0x7e015]        # e20d0 <anon.cc0547108b5ad03ae23ec7d169cabb3c.13.llvm.4719369549894925764+0x40>
   640bb:	0f 11 46 e0          	movups XMMWORD PTR [rsi-0x20],xmm0
   640bf:	0f 10 05 fa df 07 00 	movups xmm0,XMMWORD PTR [rip+0x7dffa]        # e20c0 <anon.cc0547108b5ad03ae23ec7d169cabb3c.13.llvm.4719369549894925764+0x30>
   640c6:	0f 11 46 d0          	movups XMMWORD PTR [rsi-0x30],xmm0
   640ca:	48 89 84 24 68 01 00 	mov    QWORD PTR [rsp+0x168],rax
   640d1:	00 
   640d2:	48 89 94 24 70 01 00 	mov    QWORD PTR [rsp+0x170],rdx
   640d9:	00 
   640da:	48 8d bc 24 80 00 00 	lea    rdi,[rsp+0x80]
   640e1:	00 
   640e2:	48 8d 74 24 30       	lea    rsi,[rsp+0x30]
   640e7:	48 89 ea             	mov    rdx,rbp
   640ea:	48 8d 8c 24 20 01 00 	lea    rcx,[rsp+0x120]
   640f1:	00 
   640f2:	e8 29 6e ff ff       	call   5af20 <alloc::collections::btree::map::BTreeMap<K,V,A>::insert>
   640f7:	48 8b 84 24 80 00 00 	mov    rax,QWORD PTR [rsp+0x80]
   640fe:	00 
   640ff:	48 89 44 24 08       	mov    QWORD PTR [rsp+0x8],rax
   64104:	4c 39 f0             	cmp    rax,r14
   64107:	0f 84 b2 fe ff ff    	je     63fbf <strategy_sm4::signal_pairs_tree::SignalPairsTree::new+0x2bf>
   6410d:	4c 8b a4 24 98 00 00 	mov    r12,QWORD PTR [rsp+0x98]
   64114:	00 
   64115:	4d 85 e4             	test   r12,r12
   64118:	0f 84 a2 00 00 00    	je     641c0 <strategy_sm4::signal_pairs_tree::SignalPairsTree::new+0x4c0>
   6411e:	4c 8b b4 24 88 00 00 	mov    r14,QWORD PTR [rsp+0x88]
   64125:	00 
   64126:	48 8b 84 24 90 00 00 	mov    rax,QWORD PTR [rsp+0x90]
   6412d:	00 
   6412e:	48 8b 7c 24 08       	mov    rdi,QWORD PTR [rsp+0x8]
   64133:	48 39 f8             	cmp    rax,rdi
   64136:	48 89 f9             	mov    rcx,rdi
   64139:	be 00 00 00 00       	mov    esi,0x0
   6413e:	48 0f 42 ce          	cmovb  rcx,rsi
   64142:	48 89 c2             	mov    rdx,rax
   64145:	48 29 ca             	sub    rdx,rcx
   64148:	49 89 f8             	mov    r8,rdi
   6414b:	49 29 d0             	sub    r8,rdx
   6414e:	4a 8d 1c 22          	lea    rbx,[rdx+r12*1]
   64152:	4c 89 64 24 10       	mov    QWORD PTR [rsp+0x10],r12
   64157:	4c 89 44 24 78       	mov    QWORD PTR [rsp+0x78],r8
   6415c:	4d 29 c4             	sub    r12,r8
   6415f:	4c 0f 42 e6          	cmovb  r12,rsi
   64163:	48 0f 47 df          	cmova  rbx,rdi
   64167:	48 29 d3             	sub    rbx,rdx
   6416a:	75 7e                	jne    641ea <strategy_sm4::signal_pairs_tree::SignalPairsTree::new+0x4ea>
   6416c:	48 8b 44 24 78       	mov    rax,QWORD PTR [rsp+0x78]
   64171:	48 3b 44 24 10       	cmp    rax,QWORD PTR [rsp+0x10]
   64176:	48 8b 5c 24 20       	mov    rbx,QWORD PTR [rsp+0x20]
   6417b:	4c 8b 6c 24 70       	mov    r13,QWORD PTR [rsp+0x70]
   64180:	73 3e                	jae    641c0 <strategy_sm4::signal_pairs_tree::SignalPairsTree::new+0x4c0>
   64182:	49 83 c6 50          	add    r14,0x50
   64186:	eb 11                	jmp    64199 <strategy_sm4::signal_pairs_tree::SignalPairsTree::new+0x499>
   64188:	0f 1f 84 00 00 00 00 	nop    DWORD PTR [rax+rax*1+0x0]
   6418f:	00 
   64190:	49 83 c6 68          	add    r14,0x68
   64194:	49 ff cc             	dec    r12
   64197:	74 27                	je     641c0 <strategy_sm4::signal_pairs_tree::SignalPairsTree::new+0x4c0>
   64199:	49 8b 76 f8          	mov    rsi,QWORD PTR [r14-0x8]
   6419d:	48 85 f6             	test   rsi,rsi
   641a0:	74 ee                	je     64190 <strategy_sm4::signal_pairs_tree::SignalPairsTree::new+0x490>
   641a2:	49 8b 3e             	mov    rdi,QWORD PTR [r14]
   641a5:	ba 01 00 00 00       	mov    edx,0x1
   641aa:	ff 15 18 37 08 00    	call   QWORD PTR [rip+0x83718]        # e78c8 <_DYNAMIC+0x208>
   641b0:	eb de                	jmp    64190 <strategy_sm4::signal_pairs_tree::SignalPairsTree::new+0x490>
   641b2:	66 66 66 66 66 2e 0f 	data16 data16 data16 data16 cs nop WORD PTR [rax+rax*1+0x0]
   641b9:	1f 84 00 00 00 00 00 
   641c0:	48 8b 44 24 08       	mov    rax,QWORD PTR [rsp+0x8]
   641c5:	48 85 c0             	test   rax,rax
   641c8:	0f 84 d2 fd ff ff    	je     63fa0 <strategy_sm4::signal_pairs_tree::SignalPairsTree::new+0x2a0>
   641ce:	48 8b bc 24 88 00 00 	mov    rdi,QWORD PTR [rsp+0x88]
   641d5:	00 
   641d6:	48 6b f0 68          	imul   rsi,rax,0x68
   641da:	ba 08 00 00 00       	mov    edx,0x8
   641df:	ff 15 e3 36 08 00    	call   QWORD PTR [rip+0x836e3]        # e78c8 <_DYNAMIC+0x208>
   641e5:	e9 b6 fd ff ff       	jmp    63fa0 <strategy_sm4::signal_pairs_tree::SignalPairsTree::new+0x2a0>
   641ea:	48 6b c0 68          	imul   rax,rax,0x68
   641ee:	48 6b c9 68          	imul   rcx,rcx,0x68
   641f2:	48 29 c8             	sub    rax,rcx
   641f5:	4d 8d 2c 06          	lea    r13,[r14+rax*1]
   641f9:	49 83 c5 50          	add    r13,0x50
   641fd:	eb 0e                	jmp    6420d <strategy_sm4::signal_pairs_tree::SignalPairsTree::new+0x50d>
   641ff:	90                   	nop
   64200:	49 83 c5 68          	add    r13,0x68
   64204:	48 ff cb             	dec    rbx
   64207:	0f 84 5f ff ff ff    	je     6416c <strategy_sm4::signal_pairs_tree::SignalPairsTree::new+0x46c>
   6420d:	49 8b 75 f8          	mov    rsi,QWORD PTR [r13-0x8]
   64211:	48 85 f6             	test   rsi,rsi
   64214:	74 ea                	je     64200 <strategy_sm4::signal_pairs_tree::SignalPairsTree::new+0x500>
   64216:	49 8b 7d 00          	mov    rdi,QWORD PTR [r13+0x0]
   6421a:	ba 01 00 00 00       	mov    edx,0x1
   6421f:	ff 15 a3 36 08 00    	call   QWORD PTR [rip+0x836a3]        # e78c8 <_DYNAMIC+0x208>
   64225:	eb d9                	jmp    64200 <strategy_sm4::signal_pairs_tree::SignalPairsTree::new+0x500>
   64227:	ff 15 93 3a 08 00    	call   QWORD PTR [rip+0x83a93]        # e7cc0 <_DYNAMIC+0x600>
   6422d:	48 89 03             	mov    QWORD PTR [rbx],rax
   64230:	48 89 53 08          	mov    QWORD PTR [rbx+0x8],rdx
   64234:	c6 43 10 01          	mov    BYTE PTR [rbx+0x10],0x1
   64238:	e9 21 fe ff ff       	jmp    6405e <strategy_sm4::signal_pairs_tree::SignalPairsTree::new+0x35e>
   6423d:	48 8b 44 24 40       	mov    rax,QWORD PTR [rsp+0x40]
   64242:	48 8b 5c 24 68       	mov    rbx,QWORD PTR [rsp+0x68]
   64247:	48 89 43 30          	mov    QWORD PTR [rbx+0x30],rax
   6424b:	0f 10 44 24 30       	movups xmm0,XMMWORD PTR [rsp+0x30]
   64250:	0f 11 43 20          	movups XMMWORD PTR [rbx+0x20],xmm0
   64254:	0f 10 44 24 48       	movups xmm0,XMMWORD PTR [rsp+0x48]
   64259:	0f 11 43 38          	movups XMMWORD PTR [rbx+0x38],xmm0
   6425d:	48 8b 44 24 58       	mov    rax,QWORD PTR [rsp+0x58]
   64262:	48 89 43 48          	mov    QWORD PTR [rbx+0x48],rax
   64266:	48 8b 44 24 60       	mov    rax,QWORD PTR [rsp+0x60]
   6426b:	0f 10 00             	movups xmm0,XMMWORD PTR [rax]
   6426e:	0f 10 48 10          	movups xmm1,XMMWORD PTR [rax+0x10]
   64272:	0f 11 03             	movups XMMWORD PTR [rbx],xmm0
   64275:	0f 11 4b 10          	movups XMMWORD PTR [rbx+0x10],xmm1
   64279:	48 8b 04 24          	mov    rax,QWORD PTR [rsp]
   6427d:	48 8b 30             	mov    rsi,QWORD PTR [rax]
   64280:	48 85 f6             	test   rsi,rsi
   64283:	74 14                	je     64299 <strategy_sm4::signal_pairs_tree::SignalPairsTree::new+0x599>
   64285:	48 c1 e6 05          	shl    rsi,0x5
   64289:	ba 08 00 00 00       	mov    edx,0x8
   6428e:	48 8b 7c 24 18       	mov    rdi,QWORD PTR [rsp+0x18]
   64293:	ff 15 2f 36 08 00    	call   QWORD PTR [rip+0x8362f]        # e78c8 <_DYNAMIC+0x208>
   64299:	48 89 d8             	mov    rax,rbx
   6429c:	48 81 c4 c8 01 00 00 	add    rsp,0x1c8
   642a3:	5b                   	pop    rbx
   642a4:	41 5c                	pop    r12
   642a6:	41 5d                	pop    r13
   642a8:	41 5e                	pop    r14
   642aa:	41 5f                	pop    r15
   642ac:	5d                   	pop    rbp
   642ad:	c3                   	ret    
   642ae:	48 6b c0 68          	imul   rax,rax,0x68
   642b2:	48 6b c9 68          	imul   rcx,rcx,0x68
   642b6:	48 29 c8             	sub    rax,rcx
   642b9:	4e 8d 2c 30          	lea    r13,[rax+r14*1]
   642bd:	49 83 c5 50          	add    r13,0x50
   642c1:	4c 8b 25 00 36 08 00 	mov    r12,QWORD PTR [rip+0x83600]        # e78c8 <_DYNAMIC+0x208>
   642c8:	eb 13                	jmp    642dd <strategy_sm4::signal_pairs_tree::SignalPairsTree::new+0x5dd>
   642ca:	66 0f 1f 44 00 00    	nop    WORD PTR [rax+rax*1+0x0]
   642d0:	49 83 c5 68          	add    r13,0x68
   642d4:	48 ff cd             	dec    rbp
   642d7:	0f 84 0c fc ff ff    	je     63ee9 <strategy_sm4::signal_pairs_tree::SignalPairsTree::new+0x1e9>
   642dd:	49 8b 75 f8          	mov    rsi,QWORD PTR [r13-0x8]
   642e1:	48 85 f6             	test   rsi,rsi
   642e4:	74 ea                	je     642d0 <strategy_sm4::signal_pairs_tree::SignalPairsTree::new+0x5d0>
   642e6:	49 8b 7d 00          	mov    rdi,QWORD PTR [r13+0x0]
   642ea:	ba 01 00 00 00       	mov    edx,0x1
   642ef:	41 ff d4             	call   r12
   642f2:	eb dc                	jmp    642d0 <strategy_sm4::signal_pairs_tree::SignalPairsTree::new+0x5d0>
   642f4:	ff 15 c6 39 08 00    	call   QWORD PTR [rip+0x839c6]        # e7cc0 <_DYNAMIC+0x600>
   642fa:	48 89 03             	mov    QWORD PTR [rbx],rax
   642fd:	48 89 53 08          	mov    QWORD PTR [rbx+0x8],rdx
   64301:	c6 43 10 01          	mov    BYTE PTR [rbx+0x10],0x1
   64305:	e9 c7 fa ff ff       	jmp    63dd1 <strategy_sm4::signal_pairs_tree::SignalPairsTree::new+0xd1>
   6430a:	48 89 c3             	mov    rbx,rax
   6430d:	48 8d bc 24 80 00 00 	lea    rdi,[rsp+0x80]
   64314:	00 
   64315:	e8 56 ef ff ff       	call   63270 <core::ptr::drop_in_place<strategy_sm4::signal_pairs_tree::RollingmsQueue<strategy_sm4::signal_pairs_tree::SignalPair>>>
   6431a:	eb 17                	jmp    64333 <strategy_sm4::signal_pairs_tree::SignalPairsTree::new+0x633>
   6431c:	48 89 c3             	mov    rbx,rax
   6431f:	48 8d bc 24 f8 00 00 	lea    rdi,[rsp+0xf8]
   64326:	00 
   64327:	e8 44 ef ff ff       	call   63270 <core::ptr::drop_in_place<strategy_sm4::signal_pairs_tree::RollingmsQueue<strategy_sm4::signal_pairs_tree::SignalPair>>>
   6432c:	eb 05                	jmp    64333 <strategy_sm4::signal_pairs_tree::SignalPairsTree::new+0x633>
   6432e:	eb 00                	jmp    64330 <strategy_sm4::signal_pairs_tree::SignalPairsTree::new+0x630>
   64330:	48 89 c3             	mov    rbx,rax
   64333:	48 8d 7c 24 48       	lea    rdi,[rsp+0x48]
   64338:	e8 a3 89 ff ff       	call   5cce0 <<alloc::collections::btree::map::BTreeMap<K,V,A> as core::ops::drop::Drop>::drop>
   6433d:	48 8d 7c 24 30       	lea    rdi,[rsp+0x30]
   64342:	e8 29 8d ff ff       	call   5d070 <<alloc::collections::btree::map::BTreeMap<K,V,A> as core::ops::drop::Drop>::drop>
   64347:	48 8b 04 24          	mov    rax,QWORD PTR [rsp]
   6434b:	48 8b 30             	mov    rsi,QWORD PTR [rax]
   6434e:	48 85 f6             	test   rsi,rsi
   64351:	74 17                	je     6436a <strategy_sm4::signal_pairs_tree::SignalPairsTree::new+0x66a>
   64353:	48 8b 04 24          	mov    rax,QWORD PTR [rsp]
   64357:	48 8b 78 08          	mov    rdi,QWORD PTR [rax+0x8]
   6435b:	48 c1 e6 05          	shl    rsi,0x5
   6435f:	ba 08 00 00 00       	mov    edx,0x8
   64364:	ff 15 5e 35 08 00    	call   QWORD PTR [rip+0x8355e]        # e78c8 <_DYNAMIC+0x208>
   6436a:	48 89 df             	mov    rdi,rbx
   6436d:	e8 4e be 07 00       	call   e01c0 <_Unwind_Resume@plt>
   64372:	ff 15 a8 35 08 00    	call   QWORD PTR [rip+0x835a8]        # e7920 <_DYNAMIC+0x260>
   64378:	cc                   	int3   
   64379:	cc                   	int3   
   6437a:	cc                   	int3   
   6437b:	cc                   	int3   
   6437c:	cc                   	int3   
   6437d:	cc                   	int3   
   6437e:	cc                   	int3   
   6437f:	cc                   	int3   

0000000000064380 <strategy_sm4::signal_pairs_tree::SignalPairsTree::update>:
   64380:	55                   	push   rbp
   64381:	41 57                	push   r15
   64383:	41 56                	push   r14
   64385:	41 55                	push   r13
   64387:	41 54                	push   r12
   64389:	53                   	push   rbx
   6438a:	48 81 ec a8 01 00 00 	sub    rsp,0x1a8
   64391:	66 0f d6 4c 24 08    	movq   QWORD PTR [rsp+0x8],xmm1
   64397:	66 0f d6 44 24 10    	movq   QWORD PTR [rsp+0x10],xmm0
   6439d:	49 89 f4             	mov    r12,rsi
   643a0:	48 8b 47 20          	mov    rax,QWORD PTR [rdi+0x20]
   643a4:	48 8b 57 30          	mov    rdx,QWORD PTR [rdi+0x30]
   643a8:	48 85 c0             	test   rax,rax
   643ab:	0f 95 c1             	setne  cl
   643ae:	48 89 94 24 18 01 00 	mov    QWORD PTR [rsp+0x118],rdx
   643b5:	00 
   643b6:	48 85 d2             	test   rdx,rdx
   643b9:	0f 95 c2             	setne  dl
   643bc:	20 ca                	and    dl,cl
   643be:	80 fa 01             	cmp    dl,0x1
   643c1:	0f 85 ee 0b 00 00    	jne    64fb5 <strategy_sm4::signal_pairs_tree::SignalPairsTree::update+0xc35>
   643c7:	45 31 ed             	xor    r13d,r13d
   643ca:	48 85 c0             	test   rax,rax
   643cd:	41 0f 95 c5          	setne  r13b
   643d1:	4c 8b 7f 28          	mov    r15,QWORD PTR [rdi+0x28]
   643d5:	45 31 f6             	xor    r14d,r14d
   643d8:	4c 89 24 24          	mov    QWORD PTR [rsp],r12
   643dc:	4d 85 f6             	test   r14,r14
   643df:	75 3f                	jne    64420 <strategy_sm4::signal_pairs_tree::SignalPairsTree::update+0xa0>
   643e1:	41 f6 c5 01          	test   r13b,0x1
   643e5:	74 39                	je     64420 <strategy_sm4::signal_pairs_tree::SignalPairsTree::update+0xa0>
   643e7:	41 bd 01 00 00 00    	mov    r13d,0x1
   643ed:	4d 85 ff             	test   r15,r15
   643f0:	74 4d                	je     6443f <strategy_sm4::signal_pairs_tree::SignalPairsTree::update+0xbf>
   643f2:	4c 89 f9             	mov    rcx,r15
   643f5:	49 89 c6             	mov    r14,rax
   643f8:	48 83 e1 07          	and    rcx,0x7
   643fc:	74 46                	je     64444 <strategy_sm4::signal_pairs_tree::SignalPairsTree::update+0xc4>
   643fe:	31 d2                	xor    edx,edx
   64400:	4d 8b b6 90 05 00 00 	mov    r14,QWORD PTR [r14+0x590]
   64407:	48 ff c2             	inc    rdx
   6440a:	48 39 d1             	cmp    rcx,rdx
   6440d:	75 f1                	jne    64400 <strategy_sm4::signal_pairs_tree::SignalPairsTree::update+0x80>
   6440f:	4c 89 f8             	mov    rax,r15
   64412:	48 29 d0             	sub    rax,rdx
   64415:	49 83 ff 08          	cmp    r15,0x8
   64419:	73 35                	jae    64450 <strategy_sm4::signal_pairs_tree::SignalPairsTree::update+0xd0>
   6441b:	eb 71                	jmp    6448e <strategy_sm4::signal_pairs_tree::SignalPairsTree::update+0x10e>
   6441d:	0f 1f 00             	nop    DWORD PTR [rax]
   64420:	41 f6 c5 01          	test   r13b,0x1
   64424:	0f 84 c5 0b 00 00    	je     64fef <strategy_sm4::signal_pairs_tree::SignalPairsTree::update+0xc6f>
   6442a:	41 0f b7 8e 8a 05 00 	movzx  ecx,WORD PTR [r14+0x58a]
   64431:	00 
   64432:	49 39 cf             	cmp    r15,rcx
   64435:	73 69                	jae    644a0 <strategy_sm4::signal_pairs_tree::SignalPairsTree::update+0x120>
   64437:	4c 89 f3             	mov    rbx,r14
   6443a:	e9 85 00 00 00       	jmp    644c4 <strategy_sm4::signal_pairs_tree::SignalPairsTree::update+0x144>
   6443f:	49 89 c6             	mov    r14,rax
   64442:	eb 4a                	jmp    6448e <strategy_sm4::signal_pairs_tree::SignalPairsTree::update+0x10e>
   64444:	4c 89 f8             	mov    rax,r15
   64447:	49 83 ff 08          	cmp    r15,0x8
   6444b:	72 41                	jb     6448e <strategy_sm4::signal_pairs_tree::SignalPairsTree::update+0x10e>
   6444d:	0f 1f 00             	nop    DWORD PTR [rax]
   64450:	49 8b 8e 90 05 00 00 	mov    rcx,QWORD PTR [r14+0x590]
   64457:	48 8b 89 90 05 00 00 	mov    rcx,QWORD PTR [rcx+0x590]
   6445e:	48 8b 89 90 05 00 00 	mov    rcx,QWORD PTR [rcx+0x590]
   64465:	48 8b 89 90 05 00 00 	mov    rcx,QWORD PTR [rcx+0x590]
   6446c:	48 8b 89 90 05 00 00 	mov    rcx,QWORD PTR [rcx+0x590]
   64473:	48 8b 89 90 05 00 00 	mov    rcx,QWORD PTR [rcx+0x590]
   6447a:	48 8b 89 90 05 00 00 	mov    rcx,QWORD PTR [rcx+0x590]
   64481:	4c 8b b1 90 05 00 00 	mov    r14,QWORD PTR [rcx+0x590]
   64488:	48 83 c0 f8          	add    rax,0xfffffffffffffff8
   6448c:	75 c2                	jne    64450 <strategy_sm4::signal_pairs_tree::SignalPairsTree::update+0xd0>
   6448e:	31 c0                	xor    eax,eax
   64490:	45 31 ff             	xor    r15d,r15d
   64493:	41 0f b7 8e 8a 05 00 	movzx  ecx,WORD PTR [r14+0x58a]
   6449a:	00 
   6449b:	49 39 cf             	cmp    r15,rcx
   6449e:	72 97                	jb     64437 <strategy_sm4::signal_pairs_tree::SignalPairsTree::update+0xb7>
   644a0:	49 8b 1e             	mov    rbx,QWORD PTR [r14]
   644a3:	48 85 db             	test   rbx,rbx
   644a6:	0f 84 52 0b 00 00    	je     64ffe <strategy_sm4::signal_pairs_tree::SignalPairsTree::update+0xc7e>
   644ac:	48 ff c0             	inc    rax
   644af:	45 0f b7 be 88 05 00 	movzx  r15d,WORD PTR [r14+0x588]
   644b6:	00 
   644b7:	49 89 de             	mov    r14,rbx
   644ba:	66 44 3b bb 8a 05 00 	cmp    r15w,WORD PTR [rbx+0x58a]
   644c1:	00 
   644c2:	73 dc                	jae    644a0 <strategy_sm4::signal_pairs_tree::SignalPairsTree::update+0x120>
   644c4:	49 8d 4f 01          	lea    rcx,[r15+0x1]
   644c8:	48 85 c0             	test   rax,rax
   644cb:	0f 84 8f 00 00 00    	je     64560 <strategy_sm4::signal_pairs_tree::SignalPairsTree::update+0x1e0>
   644d1:	48 8d 0c cb          	lea    rcx,[rbx+rcx*8]
   644d5:	48 81 c1 90 05 00 00 	add    rcx,0x590
   644dc:	48 89 c2             	mov    rdx,rax
   644df:	48 83 e2 07          	and    rdx,0x7
   644e3:	0f 84 b7 06 00 00    	je     64ba0 <strategy_sm4::signal_pairs_tree::SignalPairsTree::update+0x820>
   644e9:	31 f6                	xor    esi,esi
   644eb:	0f 1f 44 00 00       	nop    DWORD PTR [rax+rax*1+0x0]
   644f0:	4c 8b 31             	mov    r14,QWORD PTR [rcx]
   644f3:	49 8d 8e 90 05 00 00 	lea    rcx,[r14+0x590]
   644fa:	48 ff c6             	inc    rsi
   644fd:	48 39 f2             	cmp    rdx,rsi
   64500:	75 ee                	jne    644f0 <strategy_sm4::signal_pairs_tree::SignalPairsTree::update+0x170>
   64502:	48 89 c2             	mov    rdx,rax
   64505:	48 29 f2             	sub    rdx,rsi
   64508:	48 83 f8 08          	cmp    rax,0x8
   6450c:	72 43                	jb     64551 <strategy_sm4::signal_pairs_tree::SignalPairsTree::update+0x1d1>
   6450e:	66 90                	xchg   ax,ax
   64510:	48 8b 01             	mov    rax,QWORD PTR [rcx]
   64513:	48 8b 80 90 05 00 00 	mov    rax,QWORD PTR [rax+0x590]
   6451a:	48 8b 80 90 05 00 00 	mov    rax,QWORD PTR [rax+0x590]
   64521:	48 8b 80 90 05 00 00 	mov    rax,QWORD PTR [rax+0x590]
   64528:	48 8b 80 90 05 00 00 	mov    rax,QWORD PTR [rax+0x590]
   6452f:	48 8b 80 90 05 00 00 	mov    rax,QWORD PTR [rax+0x590]
   64536:	48 8b 80 90 05 00 00 	mov    rax,QWORD PTR [rax+0x590]
   6453d:	4c 8b b0 90 05 00 00 	mov    r14,QWORD PTR [rax+0x590]
   64544:	49 8d 8e 90 05 00 00 	lea    rcx,[r14+0x590]
   6454b:	48 83 c2 f8          	add    rdx,0xfffffffffffffff8
   6454f:	75 bf                	jne    64510 <strategy_sm4::signal_pairs_tree::SignalPairsTree::update+0x190>
   64551:	31 c9                	xor    ecx,ecx
   64553:	eb 0e                	jmp    64563 <strategy_sm4::signal_pairs_tree::SignalPairsTree::update+0x1e3>
   64555:	66 66 2e 0f 1f 84 00 	data16 cs nop WORD PTR [rax+rax*1+0x0]
   6455c:	00 00 00 00 
   64560:	49 89 de             	mov    r14,rbx
   64563:	48 89 8c 24 c8 00 00 	mov    QWORD PTR [rsp+0xc8],rcx
   6456a:	00 
   6456b:	4c 89 ac 24 c0 00 00 	mov    QWORD PTR [rsp+0xc0],r13
   64572:	00 
   64573:	48 8d 7c 24 18       	lea    rdi,[rsp+0x18]
   64578:	4c 89 e6             	mov    rsi,r12
   6457b:	48 8d 15 4e dc 07 00 	lea    rdx,[rip+0x7dc4e]        # e21d0 <anon.cc0547108b5ad03ae23ec7d169cabb3c.13.llvm.4719369549894925764+0x140>
   64582:	ff 15 68 34 08 00    	call   QWORD PTR [rip+0x83468]        # e79f0 <_DYNAMIC+0x330>
   64588:	49 6b c7 78          	imul   rax,r15,0x78
   6458c:	4c 8d 3c 03          	lea    r15,[rbx+rax*1]
   64590:	49 83 c7 60          	add    r15,0x60
   64594:	49 8d 47 28          	lea    rax,[r15+0x28]
   64598:	48 89 44 24 38       	mov    QWORD PTR [rsp+0x38],rax
   6459d:	49 83 7f 40 00       	cmp    QWORD PTR [r15+0x40],0x0
   645a2:	4c 89 7c 24 40       	mov    QWORD PTR [rsp+0x40],r15
   645a7:	0f 84 13 01 00 00    	je     646c0 <strategy_sm4::signal_pairs_tree::SignalPairsTree::update+0x340>
   645ad:	49 8d 7f 48          	lea    rdi,[r15+0x48]
   645b1:	48 8d 74 24 18       	lea    rsi,[rsp+0x18]
   645b6:	e8 25 54 ff ff       	call   599e0 <core::hash::BuildHasher::hash_one>
   645bb:	48 89 c1             	mov    rcx,rax
   645be:	48 c1 e9 39          	shr    rcx,0x39
   645c2:	49 8b 5f 28          	mov    rbx,QWORD PTR [r15+0x28]
   645c6:	49 8b 77 30          	mov    rsi,QWORD PTR [r15+0x30]
   645ca:	66 0f 6e c1          	movd   xmm0,ecx
   645ce:	66 0f 60 c0          	punpcklbw xmm0,xmm0
   645d2:	f2 0f 70 c0 00       	pshuflw xmm0,xmm0,0x0
   645d7:	66 0f 70 c8 00       	pshufd xmm1,xmm0,0x0
   645dc:	48 8d 6b 88          	lea    rbp,[rbx-0x78]
   645e0:	4c 8b 6c 24 20       	mov    r13,QWORD PTR [rsp+0x20]
   645e5:	4c 8b 7c 24 28       	mov    r15,QWORD PTR [rsp+0x28]
   645ea:	31 ff                	xor    edi,edi
   645ec:	48 21 f0             	and    rax,rsi
   645ef:	f3 0f 6f 14 03       	movdqu xmm2,XMMWORD PTR [rbx+rax*1]
   645f4:	66 0f 6f c2          	movdqa xmm0,xmm2
   645f8:	66 0f 74 c1          	pcmpeqb xmm0,xmm1
   645fc:	66 44 0f d7 e0       	pmovmskb r12d,xmm0
   64601:	45 85 e4             	test   r12d,r12d
   64604:	0f 84 96 00 00 00    	je     646a0 <strategy_sm4::signal_pairs_tree::SignalPairsTree::update+0x320>
   6460a:	48 89 44 24 30       	mov    QWORD PTR [rsp+0x30],rax
   6460f:	66 0f 7f 8c 24 00 01 	movdqa XMMWORD PTR [rsp+0x100],xmm1
   64616:	00 00 
   64618:	48 89 b4 24 f0 00 00 	mov    QWORD PTR [rsp+0xf0],rsi
   6461f:	00 
   64620:	48 89 bc 24 e0 00 00 	mov    QWORD PTR [rsp+0xe0],rdi
   64627:	00 
   64628:	66 0f 7f 94 24 d0 00 	movdqa XMMWORD PTR [rsp+0xd0],xmm2
   6462f:	00 00 
   64631:	f3 41 0f bc cc       	tzcnt  ecx,r12d
   64636:	48 01 c1             	add    rcx,rax
   64639:	48 21 f1             	and    rcx,rsi
   6463c:	48 f7 d9             	neg    rcx
   6463f:	48 6b c1 78          	imul   rax,rcx,0x78
   64643:	4c 3b 7c 05 10       	cmp    r15,QWORD PTR [rbp+rax*1+0x10]
   64648:	75 1b                	jne    64665 <strategy_sm4::signal_pairs_tree::SignalPairsTree::update+0x2e5>
   6464a:	48 01 e8             	add    rax,rbp
   6464d:	48 8b 70 08          	mov    rsi,QWORD PTR [rax+0x8]
   64651:	4c 89 ef             	mov    rdi,r13
   64654:	4c 89 fa             	mov    rdx,r15
   64657:	ff 15 33 33 08 00    	call   QWORD PTR [rip+0x83333]        # e7990 <bcmp@GLIBC_2.2.5>
   6465d:	85 c0                	test   eax,eax
   6465f:	0f 84 cb 00 00 00    	je     64730 <strategy_sm4::signal_pairs_tree::SignalPairsTree::update+0x3b0>
   64665:	41 8d 44 24 ff       	lea    eax,[r12-0x1]
   6466a:	66 44 21 e0          	and    ax,r12w
   6466e:	41 89 c4             	mov    r12d,eax
   64671:	48 8b 44 24 30       	mov    rax,QWORD PTR [rsp+0x30]
   64676:	66 0f 6f 8c 24 00 01 	movdqa xmm1,XMMWORD PTR [rsp+0x100]
   6467d:	00 00 
   6467f:	48 8b b4 24 f0 00 00 	mov    rsi,QWORD PTR [rsp+0xf0]
   64686:	00 
   64687:	48 8b bc 24 e0 00 00 	mov    rdi,QWORD PTR [rsp+0xe0]
   6468e:	00 
   6468f:	66 0f 6f 94 24 d0 00 	movdqa xmm2,XMMWORD PTR [rsp+0xd0]
   64696:	00 00 
   64698:	75 97                	jne    64631 <strategy_sm4::signal_pairs_tree::SignalPairsTree::update+0x2b1>
   6469a:	66 0f 1f 44 00 00    	nop    WORD PTR [rax+rax*1+0x0]
   646a0:	66 0f 74 15 78 39 fb 	pcmpeqb xmm2,XMMWORD PTR [rip+0xfffffffffffb3978]        # 18020 <anon.6dca787fc37e48e710a1dbd955c10c13.0.llvm.6582718418885566971>
   646a7:	ff 
   646a8:	66 0f d7 ca          	pmovmskb ecx,xmm2
   646ac:	85 c9                	test   ecx,ecx
   646ae:	75 10                	jne    646c0 <strategy_sm4::signal_pairs_tree::SignalPairsTree::update+0x340>
   646b0:	48 01 f8             	add    rax,rdi
   646b3:	48 83 c0 10          	add    rax,0x10
   646b7:	48 83 c7 10          	add    rdi,0x10
   646bb:	e9 2c ff ff ff       	jmp    645ec <strategy_sm4::signal_pairs_tree::SignalPairsTree::update+0x26c>
   646c0:	48 8d 7c 24 48       	lea    rdi,[rsp+0x48]
   646c5:	48 8d 74 24 18       	lea    rsi,[rsp+0x18]
   646ca:	48 8d 15 0f da 07 00 	lea    rdx,[rip+0x7da0f]        # e20e0 <anon.cc0547108b5ad03ae23ec7d169cabb3c.13.llvm.4719369549894925764+0x50>
   646d1:	ff 15 19 33 08 00    	call   QWORD PTR [rip+0x83319]        # e79f0 <_DYNAMIC+0x330>
   646d7:	48 c7 44 24 60 02 00 	mov    QWORD PTR [rsp+0x60],0x2
   646de:	00 00 
   646e0:	48 8d bc 24 20 01 00 	lea    rdi,[rsp+0x120]
   646e7:	00 
   646e8:	48 8b 74 24 38       	mov    rsi,QWORD PTR [rsp+0x38]
   646ed:	48 8d 54 24 48       	lea    rdx,[rsp+0x48]
   646f2:	48 8d 4c 24 60       	lea    rcx,[rsp+0x60]
   646f7:	e8 24 ef ff ff       	call   63620 <hashbrown::map::HashMap<K,V,S,A>::insert>
   646fc:	83 bc 24 20 01 00 00 	cmp    DWORD PTR [rsp+0x120],0x1
   64703:	01 
   64704:	77 2a                	ja     64730 <strategy_sm4::signal_pairs_tree::SignalPairsTree::update+0x3b0>
   64706:	48 8b b4 24 60 01 00 	mov    rsi,QWORD PTR [rsp+0x160]
   6470d:	00 
   6470e:	48 85 f6             	test   rsi,rsi
   64711:	74 1d                	je     64730 <strategy_sm4::signal_pairs_tree::SignalPairsTree::update+0x3b0>
   64713:	48 8b bc 24 68 01 00 	mov    rdi,QWORD PTR [rsp+0x168]
   6471a:	00 
   6471b:	ba 01 00 00 00       	mov    edx,0x1
   64720:	ff 15 a2 31 08 00    	call   QWORD PTR [rip+0x831a2]        # e78c8 <_DYNAMIC+0x208>
   64726:	66 2e 0f 1f 84 00 00 	cs nop WORD PTR [rax+rax*1+0x0]
   6472d:	00 00 00 
   64730:	48 8b 5c 24 40       	mov    rbx,QWORD PTR [rsp+0x40]
   64735:	48 83 7b 40 00       	cmp    QWORD PTR [rbx+0x40],0x0
   6473a:	0f 84 a0 08 00 00    	je     64fe0 <strategy_sm4::signal_pairs_tree::SignalPairsTree::update+0xc60>
   64740:	48 8d 7b 48          	lea    rdi,[rbx+0x48]
   64744:	48 89 7c 24 30       	mov    QWORD PTR [rsp+0x30],rdi
   64749:	48 8d 74 24 18       	lea    rsi,[rsp+0x18]
   6474e:	e8 8d 52 ff ff       	call   599e0 <core::hash::BuildHasher::hash_one>
   64753:	49 89 c5             	mov    r13,rax
   64756:	48 ff 8c 24 18 01 00 	dec    QWORD PTR [rsp+0x118]
   6475d:	00 
   6475e:	48 c1 e8 39          	shr    rax,0x39
   64762:	48 8b 6b 28          	mov    rbp,QWORD PTR [rbx+0x28]
   64766:	48 8b 73 30          	mov    rsi,QWORD PTR [rbx+0x30]
   6476a:	66 0f 6e c0          	movd   xmm0,eax
   6476e:	66 0f 60 c0          	punpcklbw xmm0,xmm0
   64772:	f2 0f 70 c0 00       	pshuflw xmm0,xmm0,0x0
   64777:	66 0f 70 c8 00       	pshufd xmm1,xmm0,0x0
   6477c:	48 8d 4d 88          	lea    rcx,[rbp-0x78]
   64780:	48 8b 7c 24 20       	mov    rdi,QWORD PTR [rsp+0x20]
   64785:	48 8b 5c 24 28       	mov    rbx,QWORD PTR [rsp+0x28]
   6478a:	45 31 c0             	xor    r8d,r8d
   6478d:	49 21 f5             	and    r13,rsi
   64790:	f3 42 0f 6f 54 2d 00 	movdqu xmm2,XMMWORD PTR [rbp+r13*1+0x0]
   64797:	66 0f 6f c2          	movdqa xmm0,xmm2
   6479b:	66 0f 74 c1          	pcmpeqb xmm0,xmm1
   6479f:	66 0f d7 c0          	pmovmskb eax,xmm0
   647a3:	85 c0                	test   eax,eax
   647a5:	0f 84 b5 00 00 00    	je     64860 <strategy_sm4::signal_pairs_tree::SignalPairsTree::update+0x4e0>
   647ab:	66 0f 7f 8c 24 e0 00 	movdqa XMMWORD PTR [rsp+0xe0],xmm1
   647b2:	00 00 
   647b4:	48 89 b4 24 d0 00 00 	mov    QWORD PTR [rsp+0xd0],rsi
   647bb:	00 
   647bc:	4c 89 84 24 80 01 00 	mov    QWORD PTR [rsp+0x180],r8
   647c3:	00 
   647c4:	66 0f 7f 94 24 90 01 	movdqa XMMWORD PTR [rsp+0x190],xmm2
   647cb:	00 00 
   647cd:	48 89 84 24 f0 00 00 	mov    QWORD PTR [rsp+0xf0],rax
   647d4:	00 
   647d5:	f3 0f bc c0          	tzcnt  eax,eax
   647d9:	4c 01 e8             	add    rax,r13
   647dc:	48 21 f0             	and    rax,rsi
   647df:	48 f7 d8             	neg    rax
   647e2:	4c 6b f8 78          	imul   r15,rax,0x78
   647e6:	4a 3b 5c 39 10       	cmp    rbx,QWORD PTR [rcx+r15*1+0x10]
   647eb:	75 31                	jne    6481e <strategy_sm4::signal_pairs_tree::SignalPairsTree::update+0x49e>
   647ed:	4a 8d 04 39          	lea    rax,[rcx+r15*1]
   647f1:	48 8b 70 08          	mov    rsi,QWORD PTR [rax+0x8]
   647f5:	49 89 fc             	mov    r12,rdi
   647f8:	48 89 da             	mov    rdx,rbx
   647fb:	48 89 ac 24 00 01 00 	mov    QWORD PTR [rsp+0x100],rbp
   64802:	00 
   64803:	48 89 cd             	mov    rbp,rcx
   64806:	ff 15 84 31 08 00    	call   QWORD PTR [rip+0x83184]        # e7990 <bcmp@GLIBC_2.2.5>
   6480c:	4c 89 e7             	mov    rdi,r12
   6480f:	48 89 e9             	mov    rcx,rbp
   64812:	48 8b ac 24 00 01 00 	mov    rbp,QWORD PTR [rsp+0x100]
   64819:	00 
   6481a:	85 c0                	test   eax,eax
   6481c:	74 72                	je     64890 <strategy_sm4::signal_pairs_tree::SignalPairsTree::update+0x510>
   6481e:	48 8b b4 24 f0 00 00 	mov    rsi,QWORD PTR [rsp+0xf0]
   64825:	00 
   64826:	8d 46 ff             	lea    eax,[rsi-0x1]
   64829:	66 21 f0             	and    ax,si
   6482c:	66 0f 6f 8c 24 e0 00 	movdqa xmm1,XMMWORD PTR [rsp+0xe0]
   64833:	00 00 
   64835:	48 8b b4 24 d0 00 00 	mov    rsi,QWORD PTR [rsp+0xd0]
   6483c:	00 
   6483d:	4c 8b 84 24 80 01 00 	mov    r8,QWORD PTR [rsp+0x180]
   64844:	00 
   64845:	66 0f 6f 94 24 90 01 	movdqa xmm2,XMMWORD PTR [rsp+0x190]
   6484c:	00 00 
   6484e:	0f 85 79 ff ff ff    	jne    647cd <strategy_sm4::signal_pairs_tree::SignalPairsTree::update+0x44d>
   64854:	66 66 66 2e 0f 1f 84 	data16 data16 cs nop WORD PTR [rax+rax*1+0x0]
   6485b:	00 00 00 00 00 
   64860:	66 0f 74 15 b8 37 fb 	pcmpeqb xmm2,XMMWORD PTR [rip+0xfffffffffffb37b8]        # 18020 <anon.6dca787fc37e48e710a1dbd955c10c13.0.llvm.6582718418885566971>
   64867:	ff 
   64868:	66 0f d7 c2          	pmovmskb eax,xmm2
   6486c:	85 c0                	test   eax,eax
   6486e:	4c 8b 64 24 40       	mov    r12,QWORD PTR [rsp+0x40]
   64873:	75 2c                	jne    648a1 <strategy_sm4::signal_pairs_tree::SignalPairsTree::update+0x521>
   64875:	4d 01 c5             	add    r13,r8
   64878:	49 83 c5 10          	add    r13,0x10
   6487c:	49 83 c0 10          	add    r8,0x10
   64880:	e9 08 ff ff ff       	jmp    6478d <strategy_sm4::signal_pairs_tree::SignalPairsTree::update+0x40d>
   64885:	66 66 2e 0f 1f 84 00 	data16 cs nop WORD PTR [rax+rax*1+0x0]
   6488c:	00 00 00 00 
   64890:	42 83 7c 3d a0 02    	cmp    DWORD PTR [rbp+r15*1-0x60],0x2
   64896:	4c 8b 64 24 40       	mov    r12,QWORD PTR [rsp+0x40]
   6489b:	0f 85 4f 02 00 00    	jne    64af0 <strategy_sm4::signal_pairs_tree::SignalPairsTree::update+0x770>
   648a1:	49 83 7c 24 40 00    	cmp    QWORD PTR [r12+0x40],0x0
   648a7:	0f 84 33 07 00 00    	je     64fe0 <strategy_sm4::signal_pairs_tree::SignalPairsTree::update+0xc60>
   648ad:	48 8b 7c 24 30       	mov    rdi,QWORD PTR [rsp+0x30]
   648b2:	48 8d 74 24 18       	lea    rsi,[rsp+0x18]
   648b7:	e8 24 51 ff ff       	call   599e0 <core::hash::BuildHasher::hash_one>
   648bc:	48 89 c1             	mov    rcx,rax
   648bf:	48 c1 e9 39          	shr    rcx,0x39
   648c3:	49 8b 5c 24 28       	mov    rbx,QWORD PTR [r12+0x28]
   648c8:	49 8b 74 24 30       	mov    rsi,QWORD PTR [r12+0x30]
   648cd:	66 0f 6e c1          	movd   xmm0,ecx
   648d1:	66 0f 60 c0          	punpcklbw xmm0,xmm0
   648d5:	f2 0f 70 c0 00       	pshuflw xmm0,xmm0,0x0
   648da:	66 0f 70 c8 00       	pshufd xmm1,xmm0,0x0
   648df:	4c 8d 7b 88          	lea    r15,[rbx-0x78]
   648e3:	48 8b 6c 24 20       	mov    rbp,QWORD PTR [rsp+0x20]
   648e8:	4c 8b 6c 24 28       	mov    r13,QWORD PTR [rsp+0x28]
   648ed:	45 31 c0             	xor    r8d,r8d
   648f0:	48 21 f0             	and    rax,rsi
   648f3:	f3 0f 6f 14 03       	movdqu xmm2,XMMWORD PTR [rbx+rax*1]
   648f8:	66 0f 6f c2          	movdqa xmm0,xmm2
   648fc:	66 0f 74 c1          	pcmpeqb xmm0,xmm1
   64900:	66 0f d7 c8          	pmovmskb ecx,xmm0
   64904:	85 c9                	test   ecx,ecx
   64906:	0f 84 a4 00 00 00    	je     649b0 <strategy_sm4::signal_pairs_tree::SignalPairsTree::update+0x630>
   6490c:	48 89 84 24 00 01 00 	mov    QWORD PTR [rsp+0x100],rax
   64913:	00 
   64914:	66 0f 7f 8c 24 f0 00 	movdqa XMMWORD PTR [rsp+0xf0],xmm1
   6491b:	00 00 
   6491d:	48 89 b4 24 e0 00 00 	mov    QWORD PTR [rsp+0xe0],rsi
   64924:	00 
   64925:	4c 89 84 24 d0 00 00 	mov    QWORD PTR [rsp+0xd0],r8
   6492c:	00 
   6492d:	66 0f 7f 94 24 80 01 	movdqa XMMWORD PTR [rsp+0x180],xmm2
   64934:	00 00 
   64936:	48 89 4c 24 30       	mov    QWORD PTR [rsp+0x30],rcx
   6493b:	f3 0f bc c9          	tzcnt  ecx,ecx
   6493f:	48 01 c1             	add    rcx,rax
   64942:	48 21 f1             	and    rcx,rsi
   64945:	48 f7 d9             	neg    rcx
   64948:	4c 6b e1 78          	imul   r12,rcx,0x78
   6494c:	4f 3b 6c 27 10       	cmp    r13,QWORD PTR [r15+r12*1+0x10]
   64951:	75 18                	jne    6496b <strategy_sm4::signal_pairs_tree::SignalPairsTree::update+0x5eb>
   64953:	4b 8d 04 27          	lea    rax,[r15+r12*1]
   64957:	48 8b 70 08          	mov    rsi,QWORD PTR [rax+0x8]
   6495b:	48 89 ef             	mov    rdi,rbp
   6495e:	4c 89 ea             	mov    rdx,r13
   64961:	ff 15 29 30 08 00    	call   QWORD PTR [rip+0x83029]        # e7990 <bcmp@GLIBC_2.2.5>
   64967:	85 c0                	test   eax,eax
   64969:	74 75                	je     649e0 <strategy_sm4::signal_pairs_tree::SignalPairsTree::update+0x660>
   6496b:	48 8b 4c 24 30       	mov    rcx,QWORD PTR [rsp+0x30]
   64970:	8d 41 ff             	lea    eax,[rcx-0x1]
   64973:	66 21 c8             	and    ax,cx
   64976:	89 c1                	mov    ecx,eax
   64978:	48 8b 84 24 00 01 00 	mov    rax,QWORD PTR [rsp+0x100]
   6497f:	00 
   64980:	66 0f 6f 8c 24 f0 00 	movdqa xmm1,XMMWORD PTR [rsp+0xf0]
   64987:	00 00 
   64989:	48 8b b4 24 e0 00 00 	mov    rsi,QWORD PTR [rsp+0xe0]
   64990:	00 
   64991:	4c 8b 84 24 d0 00 00 	mov    r8,QWORD PTR [rsp+0xd0]
   64998:	00 
   64999:	66 0f 6f 94 24 80 01 	movdqa xmm2,XMMWORD PTR [rsp+0x180]
   649a0:	00 00 
   649a2:	75 92                	jne    64936 <strategy_sm4::signal_pairs_tree::SignalPairsTree::update+0x5b6>
   649a4:	66 66 66 2e 0f 1f 84 	data16 data16 cs nop WORD PTR [rax+rax*1+0x0]
   649ab:	00 00 00 00 00 
   649b0:	66 0f 74 15 68 36 fb 	pcmpeqb xmm2,XMMWORD PTR [rip+0xfffffffffffb3668]        # 18020 <anon.6dca787fc37e48e710a1dbd955c10c13.0.llvm.6582718418885566971>
   649b7:	ff 
   649b8:	66 0f d7 ca          	pmovmskb ecx,xmm2
   649bc:	85 c9                	test   ecx,ecx
   649be:	0f 85 1c 06 00 00    	jne    64fe0 <strategy_sm4::signal_pairs_tree::SignalPairsTree::update+0xc60>
   649c4:	4c 01 c0             	add    rax,r8
   649c7:	48 83 c0 10          	add    rax,0x10
   649cb:	49 83 c0 10          	add    r8,0x10
   649cf:	e9 1c ff ff ff       	jmp    648f0 <strategy_sm4::signal_pairs_tree::SignalPairsTree::update+0x570>
   649d4:	66 66 66 2e 0f 1f 84 	data16 data16 cs nop WORD PTR [rax+rax*1+0x0]
   649db:	00 00 00 00 00 
   649e0:	42 83 7c 23 a0 02    	cmp    DWORD PTR [rbx+r12*1-0x60],0x2
   649e6:	4c 8b 24 24          	mov    r12,QWORD PTR [rsp]
   649ea:	4c 8b ac 24 c0 00 00 	mov    r13,QWORD PTR [rsp+0xc0]
   649f1:	00 
   649f2:	4c 8b bc 24 c8 00 00 	mov    r15,QWORD PTR [rsp+0xc8]
   649f9:	00 
   649fa:	0f 85 50 03 00 00    	jne    64d50 <strategy_sm4::signal_pairs_tree::SignalPairsTree::update+0x9d0>
   64a00:	f2 0f 10 4c 24 08    	movsd  xmm1,QWORD PTR [rsp+0x8]
   64a06:	48 8b 44 24 40       	mov    rax,QWORD PTR [rsp+0x40]
   64a0b:	66 0f 2e 48 58       	ucomisd xmm1,QWORD PTR [rax+0x58]
   64a10:	0f 83 3a 02 00 00    	jae    64c50 <strategy_sm4::signal_pairs_tree::SignalPairsTree::update+0x8d0>
   64a16:	f2 0f 10 40 68       	movsd  xmm0,QWORD PTR [rax+0x68]
   64a1b:	66 0f 2e c1          	ucomisd xmm0,xmm1
   64a1f:	0f 82 2b 03 00 00    	jb     64d50 <strategy_sm4::signal_pairs_tree::SignalPairsTree::update+0x9d0>
   64a25:	48 8d 7c 24 48       	lea    rdi,[rsp+0x48]
   64a2a:	48 8d 74 24 18       	lea    rsi,[rsp+0x18]
   64a2f:	48 8d 15 22 d7 07 00 	lea    rdx,[rip+0x7d722]        # e2158 <anon.cc0547108b5ad03ae23ec7d169cabb3c.13.llvm.4719369549894925764+0xc8>
   64a36:	ff 15 b4 2f 08 00    	call   QWORD PTR [rip+0x82fb4]        # e79f0 <_DYNAMIC+0x330>
   64a3c:	48 8d 9c 24 20 01 00 	lea    rbx,[rsp+0x120]
   64a43:	00 
   64a44:	48 89 df             	mov    rdi,rbx
   64a47:	48 8d 74 24 18       	lea    rsi,[rsp+0x18]
   64a4c:	48 8d 15 1d d7 07 00 	lea    rdx,[rip+0x7d71d]        # e2170 <anon.cc0547108b5ad03ae23ec7d169cabb3c.13.llvm.4719369549894925764+0xe0>
   64a53:	ff 15 97 2f 08 00    	call   QWORD PTR [rip+0x82f97]        # e79f0 <_DYNAMIC+0x330>
   64a59:	48 8b 84 24 30 01 00 	mov    rax,QWORD PTR [rsp+0x130]
   64a60:	00 
   64a61:	48 8d 8c 24 a0 00 00 	lea    rcx,[rsp+0xa0]
   64a68:	00 
   64a69:	48 89 41 10          	mov    QWORD PTR [rcx+0x10],rax
   64a6d:	0f 10 84 24 20 01 00 	movups xmm0,XMMWORD PTR [rsp+0x120]
   64a74:	00 
   64a75:	0f 11 01             	movups XMMWORD PTR [rcx],xmm0
   64a78:	48 c7 44 24 60 01 00 	mov    QWORD PTR [rsp+0x60],0x1
   64a7f:	00 00 
   64a81:	f2 0f 10 44 24 10    	movsd  xmm0,QWORD PTR [rsp+0x10]
   64a87:	f2 0f 11 44 24 68    	movsd  QWORD PTR [rsp+0x68],xmm0
   64a8d:	48 c7 44 24 70 00 00 	mov    QWORD PTR [rsp+0x70],0x0
   64a94:	00 00 
   64a96:	48 c7 84 24 80 00 00 	mov    QWORD PTR [rsp+0x80],0x1
   64a9d:	00 01 00 00 00 
   64aa2:	f3 0f 7e 44 24 08    	movq   xmm0,QWORD PTR [rsp+0x8]
   64aa8:	66 0f d6 84 24 88 00 	movq   QWORD PTR [rsp+0x88],xmm0
   64aaf:	00 00 
   64ab1:	48 c7 84 24 90 00 00 	mov    QWORD PTR [rsp+0x90],0x0
   64ab8:	00 00 00 00 00 
   64abd:	66 c7 84 24 b8 00 00 	mov    WORD PTR [rsp+0xb8],0x1
   64ac4:	00 01 00 
   64ac7:	48 89 df             	mov    rdi,rbx
   64aca:	48 8b 74 24 38       	mov    rsi,QWORD PTR [rsp+0x38]
   64acf:	48 8d 54 24 48       	lea    rdx,[rsp+0x48]
   64ad4:	48 8d 4c 24 60       	lea    rcx,[rsp+0x60]
   64ad9:	e8 42 eb ff ff       	call   63620 <hashbrown::map::HashMap<K,V,S,A>::insert>
   64ade:	4c 8b bc 24 c8 00 00 	mov    r15,QWORD PTR [rsp+0xc8]
   64ae5:	00 
   64ae6:	e9 26 02 00 00       	jmp    64d11 <strategy_sm4::signal_pairs_tree::SignalPairsTree::update+0x991>
   64aeb:	0f 1f 44 00 00       	nop    DWORD PTR [rax+rax*1+0x0]
   64af0:	4c 01 fd             	add    rbp,r15
   64af3:	80 7d f8 01          	cmp    BYTE PTR [rbp-0x8],0x1
   64af7:	0f 85 b5 00 00 00    	jne    64bb2 <strategy_sm4::signal_pairs_tree::SignalPairsTree::update+0x832>
   64afd:	f2 0f 10 44 24 08    	movsd  xmm0,QWORD PTR [rsp+0x8]
   64b03:	66 41 0f 2e 44 24 70 	ucomisd xmm0,QWORD PTR [r12+0x70]
   64b0a:	0f 82 91 fd ff ff    	jb     648a1 <strategy_sm4::signal_pairs_tree::SignalPairsTree::update+0x521>
   64b10:	48 c7 45 b0 01 00 00 	mov    QWORD PTR [rbp-0x50],0x1
   64b17:	00 
   64b18:	f2 0f 10 44 24 10    	movsd  xmm0,QWORD PTR [rsp+0x10]
   64b1e:	f2 0f 11 45 b8       	movsd  QWORD PTR [rbp-0x48],xmm0
   64b23:	48 c7 45 d0 01 00 00 	mov    QWORD PTR [rbp-0x30],0x1
   64b2a:	00 
   64b2b:	f3 0f 7e 44 24 08    	movq   xmm0,QWORD PTR [rsp+0x8]
   64b31:	66 0f d6 45 d8       	movq   QWORD PTR [rbp-0x28],xmm0
   64b36:	c6 45 f9 01          	mov    BYTE PTR [rbp-0x7],0x1
   64b3a:	48 8d 75 e0          	lea    rsi,[rbp-0x20]
   64b3e:	48 8d bc 24 20 01 00 	lea    rdi,[rsp+0x120]
   64b45:	00 
   64b46:	48 8d 15 ab d5 07 00 	lea    rdx,[rip+0x7d5ab]        # e20f8 <anon.cc0547108b5ad03ae23ec7d169cabb3c.13.llvm.4719369549894925764+0x68>
   64b4d:	ff 15 9d 2e 08 00    	call   QWORD PTR [rip+0x82e9d]        # e79f0 <_DYNAMIC+0x330>
   64b53:	48 8b 45 a0          	mov    rax,QWORD PTR [rbp-0x60]
   64b57:	48 83 f8 01          	cmp    rax,0x1
   64b5b:	0f 85 22 02 00 00    	jne    64d83 <strategy_sm4::signal_pairs_tree::SignalPairsTree::update+0xa03>
   64b61:	f2 0f 10 45 a8       	movsd  xmm0,QWORD PTR [rbp-0x58]
   64b66:	48 8b 4d b0          	mov    rcx,QWORD PTR [rbp-0x50]
   64b6a:	48 83 f9 01          	cmp    rcx,0x1
   64b6e:	0f 84 1f 02 00 00    	je     64d93 <strategy_sm4::signal_pairs_tree::SignalPairsTree::update+0xa13>
   64b74:	31 c9                	xor    ecx,ecx
   64b76:	48 8b 55 c0          	mov    rdx,QWORD PTR [rbp-0x40]
   64b7a:	48 83 fa 01          	cmp    rdx,0x1
   64b7e:	0f 84 22 02 00 00    	je     64da6 <strategy_sm4::signal_pairs_tree::SignalPairsTree::update+0xa26>
   64b84:	31 d2                	xor    edx,edx
   64b86:	48 8b 75 d0          	mov    rsi,QWORD PTR [rbp-0x30]
   64b8a:	48 83 fe 01          	cmp    rsi,0x1
   64b8e:	0f 84 25 02 00 00    	je     64db9 <strategy_sm4::signal_pairs_tree::SignalPairsTree::update+0xa39>
   64b94:	31 f6                	xor    esi,esi
   64b96:	e9 23 02 00 00       	jmp    64dbe <strategy_sm4::signal_pairs_tree::SignalPairsTree::update+0xa3e>
   64b9b:	0f 1f 44 00 00       	nop    DWORD PTR [rax+rax*1+0x0]
   64ba0:	48 89 c2             	mov    rdx,rax
   64ba3:	48 83 f8 08          	cmp    rax,0x8
   64ba7:	0f 83 63 f9 ff ff    	jae    64510 <strategy_sm4::signal_pairs_tree::SignalPairsTree::update+0x190>
   64bad:	e9 9f f9 ff ff       	jmp    64551 <strategy_sm4::signal_pairs_tree::SignalPairsTree::update+0x1d1>
   64bb2:	f2 41 0f 10 44 24 60 	movsd  xmm0,QWORD PTR [r12+0x60]
   64bb9:	66 0f 2e 44 24 08    	ucomisd xmm0,QWORD PTR [rsp+0x8]
   64bbf:	0f 82 dc fc ff ff    	jb     648a1 <strategy_sm4::signal_pairs_tree::SignalPairsTree::update+0x521>
   64bc5:	48 c7 45 b0 01 00 00 	mov    QWORD PTR [rbp-0x50],0x1
   64bcc:	00 
   64bcd:	f2 0f 10 44 24 10    	movsd  xmm0,QWORD PTR [rsp+0x10]
   64bd3:	f2 0f 11 45 b8       	movsd  QWORD PTR [rbp-0x48],xmm0
   64bd8:	48 c7 45 d0 01 00 00 	mov    QWORD PTR [rbp-0x30],0x1
   64bdf:	00 
   64be0:	f3 0f 7e 44 24 08    	movq   xmm0,QWORD PTR [rsp+0x8]
   64be6:	66 0f d6 45 d8       	movq   QWORD PTR [rbp-0x28],xmm0
   64beb:	c6 45 f9 01          	mov    BYTE PTR [rbp-0x7],0x1
   64bef:	48 8d 75 e0          	lea    rsi,[rbp-0x20]
   64bf3:	48 8d bc 24 20 01 00 	lea    rdi,[rsp+0x120]
   64bfa:	00 
   64bfb:	48 8d 15 f6 d4 07 00 	lea    rdx,[rip+0x7d4f6]        # e20f8 <anon.cc0547108b5ad03ae23ec7d169cabb3c.13.llvm.4719369549894925764+0x68>
   64c02:	ff 15 e8 2d 08 00    	call   QWORD PTR [rip+0x82de8]        # e79f0 <_DYNAMIC+0x330>
   64c08:	48 8b 45 a0          	mov    rax,QWORD PTR [rbp-0x60]
   64c0c:	48 83 f8 01          	cmp    rax,0x1
   64c10:	0f 85 6d 02 00 00    	jne    64e83 <strategy_sm4::signal_pairs_tree::SignalPairsTree::update+0xb03>
   64c16:	f2 0f 10 45 a8       	movsd  xmm0,QWORD PTR [rbp-0x58]
   64c1b:	48 8b 4d b0          	mov    rcx,QWORD PTR [rbp-0x50]
   64c1f:	48 83 f9 01          	cmp    rcx,0x1
   64c23:	0f 84 6a 02 00 00    	je     64e93 <strategy_sm4::signal_pairs_tree::SignalPairsTree::update+0xb13>
   64c29:	31 c9                	xor    ecx,ecx
   64c2b:	48 8b 55 c0          	mov    rdx,QWORD PTR [rbp-0x40]
   64c2f:	48 83 fa 01          	cmp    rdx,0x1
   64c33:	0f 84 6d 02 00 00    	je     64ea6 <strategy_sm4::signal_pairs_tree::SignalPairsTree::update+0xb26>
   64c39:	31 d2                	xor    edx,edx
   64c3b:	48 8b 75 d0          	mov    rsi,QWORD PTR [rbp-0x30]
   64c3f:	48 83 fe 01          	cmp    rsi,0x1
   64c43:	0f 84 70 02 00 00    	je     64eb9 <strategy_sm4::signal_pairs_tree::SignalPairsTree::update+0xb39>
   64c49:	31 f6                	xor    esi,esi
   64c4b:	e9 6e 02 00 00       	jmp    64ebe <strategy_sm4::signal_pairs_tree::SignalPairsTree::update+0xb3e>
   64c50:	48 8d 7c 24 48       	lea    rdi,[rsp+0x48]
   64c55:	48 8d 74 24 18       	lea    rsi,[rsp+0x18]
   64c5a:	48 8d 15 27 d5 07 00 	lea    rdx,[rip+0x7d527]        # e2188 <anon.cc0547108b5ad03ae23ec7d169cabb3c.13.llvm.4719369549894925764+0xf8>
   64c61:	ff 15 89 2d 08 00    	call   QWORD PTR [rip+0x82d89]        # e79f0 <_DYNAMIC+0x330>
   64c67:	48 8d 9c 24 20 01 00 	lea    rbx,[rsp+0x120]
   64c6e:	00 
   64c6f:	48 89 df             	mov    rdi,rbx
   64c72:	48 8d 74 24 18       	lea    rsi,[rsp+0x18]
   64c77:	48 8d 15 22 d5 07 00 	lea    rdx,[rip+0x7d522]        # e21a0 <anon.cc0547108b5ad03ae23ec7d169cabb3c.13.llvm.4719369549894925764+0x110>
   64c7e:	ff 15 6c 2d 08 00    	call   QWORD PTR [rip+0x82d6c]        # e79f0 <_DYNAMIC+0x330>
   64c84:	48 8b 84 24 30 01 00 	mov    rax,QWORD PTR [rsp+0x130]
   64c8b:	00 
   64c8c:	48 8d 8c 24 a0 00 00 	lea    rcx,[rsp+0xa0]
   64c93:	00 
   64c94:	48 89 41 10          	mov    QWORD PTR [rcx+0x10],rax
   64c98:	0f 10 84 24 20 01 00 	movups xmm0,XMMWORD PTR [rsp+0x120]
   64c9f:	00 
   64ca0:	0f 11 01             	movups XMMWORD PTR [rcx],xmm0
   64ca3:	48 c7 44 24 60 01 00 	mov    QWORD PTR [rsp+0x60],0x1
   64caa:	00 00 
   64cac:	f2 0f 10 44 24 10    	movsd  xmm0,QWORD PTR [rsp+0x10]
   64cb2:	f2 0f 11 44 24 68    	movsd  QWORD PTR [rsp+0x68],xmm0
   64cb8:	48 c7 44 24 70 00 00 	mov    QWORD PTR [rsp+0x70],0x0
   64cbf:	00 00 
   64cc1:	48 c7 84 24 80 00 00 	mov    QWORD PTR [rsp+0x80],0x1
   64cc8:	00 01 00 00 00 
   64ccd:	f3 0f 7e 44 24 08    	movq   xmm0,QWORD PTR [rsp+0x8]
   64cd3:	66 0f d6 84 24 88 00 	movq   QWORD PTR [rsp+0x88],xmm0
   64cda:	00 00 
   64cdc:	48 c7 84 24 90 00 00 	mov    QWORD PTR [rsp+0x90],0x0
   64ce3:	00 00 00 00 00 
   64ce8:	66 c7 84 24 b8 00 00 	mov    WORD PTR [rsp+0xb8],0x0
   64cef:	00 00 00 
   64cf2:	48 89 df             	mov    rdi,rbx
   64cf5:	48 8b 74 24 38       	mov    rsi,QWORD PTR [rsp+0x38]
   64cfa:	48 8d 54 24 48       	lea    rdx,[rsp+0x48]
   64cff:	48 8d 4c 24 60       	lea    rcx,[rsp+0x60]
   64d04:	e8 17 e9 ff ff       	call   63620 <hashbrown::map::HashMap<K,V,S,A>::insert>
   64d09:	4c 8b bc 24 c8 00 00 	mov    r15,QWORD PTR [rsp+0xc8]
   64d10:	00 
   64d11:	83 bc 24 20 01 00 00 	cmp    DWORD PTR [rsp+0x120],0x1
   64d18:	01 
   64d19:	4c 8b 24 24          	mov    r12,QWORD PTR [rsp]
   64d1d:	4c 8b ac 24 c0 00 00 	mov    r13,QWORD PTR [rsp+0xc0]
   64d24:	00 
   64d25:	77 29                	ja     64d50 <strategy_sm4::signal_pairs_tree::SignalPairsTree::update+0x9d0>
   64d27:	48 8b b4 24 60 01 00 	mov    rsi,QWORD PTR [rsp+0x160]
   64d2e:	00 
   64d2f:	48 85 f6             	test   rsi,rsi
   64d32:	74 1c                	je     64d50 <strategy_sm4::signal_pairs_tree::SignalPairsTree::update+0x9d0>
   64d34:	48 8b bc 24 68 01 00 	mov    rdi,QWORD PTR [rsp+0x168]
   64d3b:	00 
   64d3c:	ba 01 00 00 00       	mov    edx,0x1
   64d41:	ff 15 81 2b 08 00    	call   QWORD PTR [rip+0x82b81]        # e78c8 <_DYNAMIC+0x208>
   64d47:	66 0f 1f 84 00 00 00 	nop    WORD PTR [rax+rax*1+0x0]
   64d4e:	00 00 
   64d50:	48 8b 74 24 18       	mov    rsi,QWORD PTR [rsp+0x18]
   64d55:	48 85 f6             	test   rsi,rsi
   64d58:	74 10                	je     64d6a <strategy_sm4::signal_pairs_tree::SignalPairsTree::update+0x9ea>
   64d5a:	48 8b 7c 24 20       	mov    rdi,QWORD PTR [rsp+0x20]
   64d5f:	ba 01 00 00 00       	mov    edx,0x1
   64d64:	ff 15 5e 2b 08 00    	call   QWORD PTR [rip+0x82b5e]        # e78c8 <_DYNAMIC+0x208>
   64d6a:	b8 00 00 00 00       	mov    eax,0x0
   64d6f:	48 83 bc 24 18 01 00 	cmp    QWORD PTR [rsp+0x118],0x0
   64d76:	00 00 
   64d78:	0f 85 5e f6 ff ff    	jne    643dc <strategy_sm4::signal_pairs_tree::SignalPairsTree::update+0x5c>
   64d7e:	e9 32 02 00 00       	jmp    64fb5 <strategy_sm4::signal_pairs_tree::SignalPairsTree::update+0xc35>
   64d83:	31 c0                	xor    eax,eax
   64d85:	48 8b 4d b0          	mov    rcx,QWORD PTR [rbp-0x50]
   64d89:	48 83 f9 01          	cmp    rcx,0x1
   64d8d:	0f 85 e1 fd ff ff    	jne    64b74 <strategy_sm4::signal_pairs_tree::SignalPairsTree::update+0x7f4>
   64d93:	f3 0f 7e 4d b8       	movq   xmm1,QWORD PTR [rbp-0x48]
   64d98:	48 8b 55 c0          	mov    rdx,QWORD PTR [rbp-0x40]
   64d9c:	48 83 fa 01          	cmp    rdx,0x1
   64da0:	0f 85 de fd ff ff    	jne    64b84 <strategy_sm4::signal_pairs_tree::SignalPairsTree::update+0x804>
   64da6:	f3 0f 7e 55 c8       	movq   xmm2,QWORD PTR [rbp-0x38]
   64dab:	48 8b 75 d0          	mov    rsi,QWORD PTR [rbp-0x30]
   64daf:	48 83 fe 01          	cmp    rsi,0x1
   64db3:	0f 85 db fd ff ff    	jne    64b94 <strategy_sm4::signal_pairs_tree::SignalPairsTree::update+0x814>
   64db9:	f2 0f 10 5d d8       	movsd  xmm3,QWORD PTR [rbp-0x28]
   64dbe:	0f b6 7d f8          	movzx  edi,BYTE PTR [rbp-0x8]
   64dc2:	44 0f b6 45 f9       	movzx  r8d,BYTE PTR [rbp-0x7]
   64dc7:	4c 8b 8c 24 30 01 00 	mov    r9,QWORD PTR [rsp+0x130]
   64dce:	00 
   64dcf:	4c 8d 94 24 a0 00 00 	lea    r10,[rsp+0xa0]
   64dd6:	00 
   64dd7:	4d 89 4a 10          	mov    QWORD PTR [r10+0x10],r9
   64ddb:	0f 10 a4 24 20 01 00 	movups xmm4,XMMWORD PTR [rsp+0x120]
   64de2:	00 
   64de3:	41 0f 11 22          	movups XMMWORD PTR [r10],xmm4
   64de7:	40 88 bc 24 b8 00 00 	mov    BYTE PTR [rsp+0xb8],dil
   64dee:	00 
   64def:	48 89 44 24 60       	mov    QWORD PTR [rsp+0x60],rax
   64df4:	f2 0f 11 44 24 68    	movsd  QWORD PTR [rsp+0x68],xmm0
   64dfa:	48 89 4c 24 70       	mov    QWORD PTR [rsp+0x70],rcx
   64dff:	66 0f d6 4c 24 78    	movq   QWORD PTR [rsp+0x78],xmm1
   64e05:	48 89 94 24 80 00 00 	mov    QWORD PTR [rsp+0x80],rdx
   64e0c:	00 
   64e0d:	66 0f d6 94 24 88 00 	movq   QWORD PTR [rsp+0x88],xmm2
   64e14:	00 00 
   64e16:	48 89 b4 24 90 00 00 	mov    QWORD PTR [rsp+0x90],rsi
   64e1d:	00 
   64e1e:	f2 0f 11 9c 24 98 00 	movsd  QWORD PTR [rsp+0x98],xmm3
   64e25:	00 00 
   64e27:	44 88 84 24 b9 00 00 	mov    BYTE PTR [rsp+0xb9],r8b
   64e2e:	00 
   64e2f:	4c 89 e7             	mov    rdi,r12
   64e32:	f3 0f 7e 44 24 10    	movq   xmm0,QWORD PTR [rsp+0x10]
   64e38:	48 8d 74 24 60       	lea    rsi,[rsp+0x60]
   64e3d:	e8 8e eb ff ff       	call   639d0 <strategy_sm4::signal_pairs_tree::RollingmsQueue<T>::update>
   64e42:	48 8d 7c 24 48       	lea    rdi,[rsp+0x48]
   64e47:	48 8d 74 24 18       	lea    rsi,[rsp+0x18]
   64e4c:	48 8d 15 d5 d2 07 00 	lea    rdx,[rip+0x7d2d5]        # e2128 <anon.cc0547108b5ad03ae23ec7d169cabb3c.13.llvm.4719369549894925764+0x98>
   64e53:	ff 15 97 2b 08 00    	call   QWORD PTR [rip+0x82b97]        # e79f0 <_DYNAMIC+0x330>
   64e59:	48 c7 44 24 60 02 00 	mov    QWORD PTR [rsp+0x60],0x2
   64e60:	00 00 
   64e62:	48 8d bc 24 20 01 00 	lea    rdi,[rsp+0x120]
   64e69:	00 
   64e6a:	48 8b 74 24 38       	mov    rsi,QWORD PTR [rsp+0x38]
   64e6f:	48 8d 54 24 48       	lea    rdx,[rsp+0x48]
   64e74:	48 8d 4c 24 60       	lea    rcx,[rsp+0x60]
   64e79:	e8 a2 e7 ff ff       	call   63620 <hashbrown::map::HashMap<K,V,S,A>::insert>
   64e7e:	e9 fb 00 00 00       	jmp    64f7e <strategy_sm4::signal_pairs_tree::SignalPairsTree::update+0xbfe>
   64e83:	31 c0                	xor    eax,eax
   64e85:	48 8b 4d b0          	mov    rcx,QWORD PTR [rbp-0x50]
   64e89:	48 83 f9 01          	cmp    rcx,0x1
   64e8d:	0f 85 96 fd ff ff    	jne    64c29 <strategy_sm4::signal_pairs_tree::SignalPairsTree::update+0x8a9>
   64e93:	f3 0f 7e 4d b8       	movq   xmm1,QWORD PTR [rbp-0x48]
   64e98:	48 8b 55 c0          	mov    rdx,QWORD PTR [rbp-0x40]
   64e9c:	48 83 fa 01          	cmp    rdx,0x1
   64ea0:	0f 85 93 fd ff ff    	jne    64c39 <strategy_sm4::signal_pairs_tree::SignalPairsTree::update+0x8b9>
   64ea6:	f3 0f 7e 55 c8       	movq   xmm2,QWORD PTR [rbp-0x38]
   64eab:	48 8b 75 d0          	mov    rsi,QWORD PTR [rbp-0x30]
   64eaf:	48 83 fe 01          	cmp    rsi,0x1
   64eb3:	0f 85 90 fd ff ff    	jne    64c49 <strategy_sm4::signal_pairs_tree::SignalPairsTree::update+0x8c9>
   64eb9:	f2 0f 10 5d d8       	movsd  xmm3,QWORD PTR [rbp-0x28]
   64ebe:	0f b6 7d f8          	movzx  edi,BYTE PTR [rbp-0x8]
   64ec2:	44 0f b6 45 f9       	movzx  r8d,BYTE PTR [rbp-0x7]
   64ec7:	4c 8b 8c 24 30 01 00 	mov    r9,QWORD PTR [rsp+0x130]
   64ece:	00 
   64ecf:	4c 8d 94 24 a0 00 00 	lea    r10,[rsp+0xa0]
   64ed6:	00 
   64ed7:	4d 89 4a 10          	mov    QWORD PTR [r10+0x10],r9
   64edb:	0f 10 a4 24 20 01 00 	movups xmm4,XMMWORD PTR [rsp+0x120]
   64ee2:	00 
   64ee3:	41 0f 11 22          	movups XMMWORD PTR [r10],xmm4
   64ee7:	40 88 bc 24 b8 00 00 	mov    BYTE PTR [rsp+0xb8],dil
   64eee:	00 
   64eef:	48 89 44 24 60       	mov    QWORD PTR [rsp+0x60],rax
   64ef4:	f2 0f 11 44 24 68    	movsd  QWORD PTR [rsp+0x68],xmm0
   64efa:	48 89 4c 24 70       	mov    QWORD PTR [rsp+0x70],rcx
   64eff:	66 0f d6 4c 24 78    	movq   QWORD PTR [rsp+0x78],xmm1
   64f05:	48 89 94 24 80 00 00 	mov    QWORD PTR [rsp+0x80],rdx
   64f0c:	00 
   64f0d:	66 0f d6 94 24 88 00 	movq   QWORD PTR [rsp+0x88],xmm2
   64f14:	00 00 
   64f16:	48 89 b4 24 90 00 00 	mov    QWORD PTR [rsp+0x90],rsi
   64f1d:	00 
   64f1e:	f2 0f 11 9c 24 98 00 	movsd  QWORD PTR [rsp+0x98],xmm3
   64f25:	00 00 
   64f27:	44 88 84 24 b9 00 00 	mov    BYTE PTR [rsp+0xb9],r8b
   64f2e:	00 
   64f2f:	4c 89 e7             	mov    rdi,r12
   64f32:	f3 0f 7e 44 24 10    	movq   xmm0,QWORD PTR [rsp+0x10]
   64f38:	48 8d 74 24 60       	lea    rsi,[rsp+0x60]
   64f3d:	e8 8e ea ff ff       	call   639d0 <strategy_sm4::signal_pairs_tree::RollingmsQueue<T>::update>
   64f42:	48 8d 7c 24 48       	lea    rdi,[rsp+0x48]
   64f47:	48 8d 74 24 18       	lea    rsi,[rsp+0x18]
   64f4c:	48 8d 15 bd d1 07 00 	lea    rdx,[rip+0x7d1bd]        # e2110 <anon.cc0547108b5ad03ae23ec7d169cabb3c.13.llvm.4719369549894925764+0x80>
   64f53:	ff 15 97 2a 08 00    	call   QWORD PTR [rip+0x82a97]        # e79f0 <_DYNAMIC+0x330>
   64f59:	48 c7 44 24 60 02 00 	mov    QWORD PTR [rsp+0x60],0x2
   64f60:	00 00 
   64f62:	48 8d bc 24 20 01 00 	lea    rdi,[rsp+0x120]
   64f69:	00 
   64f6a:	48 8b 74 24 38       	mov    rsi,QWORD PTR [rsp+0x38]
   64f6f:	48 8d 54 24 48       	lea    rdx,[rsp+0x48]
   64f74:	48 8d 4c 24 60       	lea    rcx,[rsp+0x60]
   64f79:	e8 a2 e6 ff ff       	call   63620 <hashbrown::map::HashMap<K,V,S,A>::insert>
   64f7e:	83 bc 24 20 01 00 00 	cmp    DWORD PTR [rsp+0x120],0x1
   64f85:	01 
   64f86:	0f 87 15 f9 ff ff    	ja     648a1 <strategy_sm4::signal_pairs_tree::SignalPairsTree::update+0x521>
   64f8c:	48 8b b4 24 60 01 00 	mov    rsi,QWORD PTR [rsp+0x160]
   64f93:	00 
   64f94:	48 85 f6             	test   rsi,rsi
   64f97:	0f 84 04 f9 ff ff    	je     648a1 <strategy_sm4::signal_pairs_tree::SignalPairsTree::update+0x521>
   64f9d:	48 8b bc 24 68 01 00 	mov    rdi,QWORD PTR [rsp+0x168]
   64fa4:	00 
   64fa5:	ba 01 00 00 00       	mov    edx,0x1
   64faa:	ff 15 18 29 08 00    	call   QWORD PTR [rip+0x82918]        # e78c8 <_DYNAMIC+0x208>
   64fb0:	e9 ec f8 ff ff       	jmp    648a1 <strategy_sm4::signal_pairs_tree::SignalPairsTree::update+0x521>
   64fb5:	49 8b 34 24          	mov    rsi,QWORD PTR [r12]
   64fb9:	48 85 f6             	test   rsi,rsi
   64fbc:	74 10                	je     64fce <strategy_sm4::signal_pairs_tree::SignalPairsTree::update+0xc4e>
   64fbe:	49 8b 7c 24 08       	mov    rdi,QWORD PTR [r12+0x8]
   64fc3:	ba 01 00 00 00       	mov    edx,0x1
   64fc8:	ff 15 fa 28 08 00    	call   QWORD PTR [rip+0x828fa]        # e78c8 <_DYNAMIC+0x208>
   64fce:	48 81 c4 a8 01 00 00 	add    rsp,0x1a8
   64fd5:	5b                   	pop    rbx
   64fd6:	41 5c                	pop    r12
   64fd8:	41 5d                	pop    r13
   64fda:	41 5e                	pop    r14
   64fdc:	41 5f                	pop    r15
   64fde:	5d                   	pop    rbp
   64fdf:	c3                   	ret    
   64fe0:	48 8d 3d 59 d1 07 00 	lea    rdi,[rip+0x7d159]        # e2140 <anon.cc0547108b5ad03ae23ec7d169cabb3c.13.llvm.4719369549894925764+0xb0>
   64fe7:	ff 15 5b 29 08 00    	call   QWORD PTR [rip+0x8295b]        # e7948 <_DYNAMIC+0x288>
   64fed:	eb 1c                	jmp    6500b <strategy_sm4::signal_pairs_tree::SignalPairsTree::update+0xc8b>
   64fef:	48 8d 3d 52 d0 07 00 	lea    rdi,[rip+0x7d052]        # e2048 <anon.cc0547108b5ad03ae23ec7d169cabb3c.1.llvm.4719369549894925764+0x50>
   64ff6:	ff 15 4c 29 08 00    	call   QWORD PTR [rip+0x8294c]        # e7948 <_DYNAMIC+0x288>
   64ffc:	eb 0d                	jmp    6500b <strategy_sm4::signal_pairs_tree::SignalPairsTree::update+0xc8b>
   64ffe:	48 8d 3d 2b d0 07 00 	lea    rdi,[rip+0x7d02b]        # e2030 <anon.cc0547108b5ad03ae23ec7d169cabb3c.1.llvm.4719369549894925764+0x38>
   65005:	ff 15 3d 29 08 00    	call   QWORD PTR [rip+0x8293d]        # e7948 <_DYNAMIC+0x288>
   6500b:	0f 0b                	ud2    
   6500d:	eb 49                	jmp    65058 <strategy_sm4::signal_pairs_tree::SignalPairsTree::update+0xcd8>
   6500f:	eb 02                	jmp    65013 <strategy_sm4::signal_pairs_tree::SignalPairsTree::update+0xc93>
   65011:	eb 45                	jmp    65058 <strategy_sm4::signal_pairs_tree::SignalPairsTree::update+0xcd8>
   65013:	49 89 c6             	mov    r14,rax
   65016:	48 8b 74 24 48       	mov    rsi,QWORD PTR [rsp+0x48]
   6501b:	48 85 f6             	test   rsi,rsi
   6501e:	74 3b                	je     6505b <strategy_sm4::signal_pairs_tree::SignalPairsTree::update+0xcdb>
   65020:	48 8b 7c 24 50       	mov    rdi,QWORD PTR [rsp+0x50]
   65025:	ba 01 00 00 00       	mov    edx,0x1
   6502a:	ff 15 98 28 08 00    	call   QWORD PTR [rip+0x82898]        # e78c8 <_DYNAMIC+0x208>
   65030:	eb 29                	jmp    6505b <strategy_sm4::signal_pairs_tree::SignalPairsTree::update+0xcdb>
   65032:	49 89 c6             	mov    r14,rax
   65035:	4c 8b 24 24          	mov    r12,QWORD PTR [rsp]
   65039:	eb 3e                	jmp    65079 <strategy_sm4::signal_pairs_tree::SignalPairsTree::update+0xcf9>
   6503b:	eb 1b                	jmp    65058 <strategy_sm4::signal_pairs_tree::SignalPairsTree::update+0xcd8>
   6503d:	49 89 c6             	mov    r14,rax
   65040:	48 8d 7c 24 60       	lea    rdi,[rsp+0x60]
   65045:	ff 15 05 29 08 00    	call   QWORD PTR [rip+0x82905]        # e7950 <_DYNAMIC+0x290>
   6504b:	eb 2c                	jmp    65079 <strategy_sm4::signal_pairs_tree::SignalPairsTree::update+0xcf9>
   6504d:	ff 15 cd 28 08 00    	call   QWORD PTR [rip+0x828cd]        # e7920 <_DYNAMIC+0x260>
   65053:	49 89 c6             	mov    r14,rax
   65056:	eb 21                	jmp    65079 <strategy_sm4::signal_pairs_tree::SignalPairsTree::update+0xcf9>
   65058:	49 89 c6             	mov    r14,rax
   6505b:	4c 8b 24 24          	mov    r12,QWORD PTR [rsp]
   6505f:	48 8b 74 24 18       	mov    rsi,QWORD PTR [rsp+0x18]
   65064:	48 85 f6             	test   rsi,rsi
   65067:	74 10                	je     65079 <strategy_sm4::signal_pairs_tree::SignalPairsTree::update+0xcf9>
   65069:	48 8b 7c 24 20       	mov    rdi,QWORD PTR [rsp+0x20]
   6506e:	ba 01 00 00 00       	mov    edx,0x1
   65073:	ff 15 4f 28 08 00    	call   QWORD PTR [rip+0x8284f]        # e78c8 <_DYNAMIC+0x208>
   65079:	49 8b 34 24          	mov    rsi,QWORD PTR [r12]
   6507d:	48 85 f6             	test   rsi,rsi
   65080:	74 10                	je     65092 <strategy_sm4::signal_pairs_tree::SignalPairsTree::update+0xd12>
   65082:	49 8b 7c 24 08       	mov    rdi,QWORD PTR [r12+0x8]
   65087:	ba 01 00 00 00       	mov    edx,0x1
   6508c:	ff 15 36 28 08 00    	call   QWORD PTR [rip+0x82836]        # e78c8 <_DYNAMIC+0x208>
   65092:	4c 89 f7             	mov    rdi,r14
   65095:	e8 26 b1 07 00       	call   e01c0 <_Unwind_Resume@plt>
   6509a:	cc                   	int3   
   6509b:	cc                   	int3   
   6509c:	cc                   	int3   
   6509d:	cc                   	int3   
   6509e:	cc                   	int3   
   6509f:	cc                   	int3   

0000000000098400 <future_backtest_sdk::context::StrategyContext::cancel_order>:
   98400:	55                   	push   rbp
   98401:	41 57                	push   r15
   98403:	41 56                	push   r14
   98405:	41 55                	push   r13
   98407:	41 54                	push   r12
   98409:	53                   	push   rbx
   9840a:	48 81 ec 88 00 00 00 	sub    rsp,0x88
   98411:	4d 89 c7             	mov    r15,r8
   98414:	49 89 cc             	mov    r12,rcx
   98417:	49 89 fd             	mov    r13,rdi
   9841a:	48 89 34 24          	mov    QWORD PTR [rsp],rsi
   9841e:	48 89 54 24 08       	mov    QWORD PTR [rsp+0x8],rdx
   98423:	48 89 4c 24 10       	mov    QWORD PTR [rsp+0x10],rcx
   98428:	4c 89 44 24 18       	mov    QWORD PTR [rsp+0x18],r8
   9842d:	48 8b 2d 3c fb 04 00 	mov    rbp,QWORD PTR [rip+0x4fb3c]        # e7f70 <_DYNAMIC+0x8b0>
   98434:	48 89 f7             	mov    rdi,rsi
   98437:	48 89 d6             	mov    rsi,rdx
   9843a:	ff d5                	call   rbp
   9843c:	49 89 c6             	mov    r14,rax
   9843f:	48 89 d3             	mov    rbx,rdx
   98442:	4c 89 e7             	mov    rdi,r12
   98445:	4c 89 fe             	mov    rsi,r15
   98448:	ff d5                	call   rbp
   9844a:	49 89 c4             	mov    r12,rax
   9844d:	49 89 d7             	mov    r15,rdx
   98450:	49 8b 7d 30          	mov    rdi,QWORD PTR [r13+0x30]
   98454:	4c 89 f6             	mov    rsi,r14
   98457:	48 89 c2             	mov    rdx,rax
   9845a:	ff 15 d0 fb 04 00    	call   QWORD PTR [rip+0x4fbd0]        # e8030 <fb_ctx_cancel_order@Base>
   98460:	85 c0                	test   eax,eax
   98462:	78 4d                	js     984b1 <future_backtest_sdk::context::StrategyContext::cancel_order+0xb1>
   98464:	45 31 ed             	xor    r13d,r13d
   98467:	41 c6 04 24 00       	mov    BYTE PTR [r12],0x0
   9846c:	4d 85 ff             	test   r15,r15
   9846f:	74 11                	je     98482 <future_backtest_sdk::context::StrategyContext::cancel_order+0x82>
   98471:	ba 01 00 00 00       	mov    edx,0x1
   98476:	4c 89 e7             	mov    rdi,r12
   98479:	4c 89 fe             	mov    rsi,r15
   9847c:	ff 15 46 f4 04 00    	call   QWORD PTR [rip+0x4f446]        # e78c8 <_DYNAMIC+0x208>
   98482:	41 c6 06 00          	mov    BYTE PTR [r14],0x0
   98486:	48 85 db             	test   rbx,rbx
   98489:	74 11                	je     9849c <future_backtest_sdk::context::StrategyContext::cancel_order+0x9c>
   9848b:	ba 01 00 00 00       	mov    edx,0x1
   98490:	4c 89 f7             	mov    rdi,r14
   98493:	48 89 de             	mov    rsi,rbx
   98496:	ff 15 2c f4 04 00    	call   QWORD PTR [rip+0x4f42c]        # e78c8 <_DYNAMIC+0x208>
   9849c:	4c 89 e8             	mov    rax,r13
   9849f:	48 81 c4 88 00 00 00 	add    rsp,0x88
   984a6:	5b                   	pop    rbx
   984a7:	41 5c                	pop    r12
   984a9:	41 5d                	pop    r13
   984ab:	41 5e                	pop    r14
   984ad:	41 5f                	pop    r15
   984af:	5d                   	pop    rbp
   984b0:	c3                   	ret    
   984b1:	48 89 e0             	mov    rax,rsp
   984b4:	48 89 44 24 20       	mov    QWORD PTR [rsp+0x20],rax
   984b9:	48 8d 05 90 17 00 00 	lea    rax,[rip+0x1790]        # 99c50 <<&T as core::fmt::Display>::fmt>
   984c0:	48 89 44 24 28       	mov    QWORD PTR [rsp+0x28],rax
   984c5:	48 8d 4c 24 10       	lea    rcx,[rsp+0x10]
   984ca:	48 89 4c 24 30       	mov    QWORD PTR [rsp+0x30],rcx
   984cf:	48 89 44 24 38       	mov    QWORD PTR [rsp+0x38],rax
   984d4:	48 8d 05 a5 be 04 00 	lea    rax,[rip+0x4bea5]        # e4380 <anon.6dca787fc37e48e710a1dbd955c10c13.17.llvm.6582718418885566971+0x1b0>
   984db:	48 89 44 24 40       	mov    QWORD PTR [rsp+0x40],rax
   984e0:	48 c7 44 24 48 02 00 	mov    QWORD PTR [rsp+0x48],0x2
   984e7:	00 00 
   984e9:	48 c7 44 24 60 00 00 	mov    QWORD PTR [rsp+0x60],0x0
   984f0:	00 00 
   984f2:	48 8d 44 24 20       	lea    rax,[rsp+0x20]
   984f7:	48 89 44 24 50       	mov    QWORD PTR [rsp+0x50],rax
   984fc:	48 c7 44 24 58 02 00 	mov    QWORD PTR [rsp+0x58],0x2
   98503:	00 00 
   98505:	48 8d 7c 24 70       	lea    rdi,[rsp+0x70]
   9850a:	48 8d 74 24 40       	lea    rsi,[rsp+0x40]
   9850f:	ff 15 b3 f4 04 00    	call   QWORD PTR [rip+0x4f4b3]        # e79c8 <_DYNAMIC+0x308>
   98515:	48 8d 7c 24 70       	lea    rdi,[rsp+0x70]
   9851a:	e8 a1 09 00 00       	call   98ec0 <anyhow::error::<impl anyhow::Error>::msg>
   9851f:	49 89 c5             	mov    r13,rax
   98522:	41 c6 04 24 00       	mov    BYTE PTR [r12],0x0
   98527:	4d 85 ff             	test   r15,r15
   9852a:	0f 85 41 ff ff ff    	jne    98471 <future_backtest_sdk::context::StrategyContext::cancel_order+0x71>
   98530:	e9 4d ff ff ff       	jmp    98482 <future_backtest_sdk::context::StrategyContext::cancel_order+0x82>
   98535:	49 89 c5             	mov    r13,rax
   98538:	41 c6 04 24 00       	mov    BYTE PTR [r12],0x0
   9853d:	4d 85 ff             	test   r15,r15
   98540:	74 16                	je     98558 <future_backtest_sdk::context::StrategyContext::cancel_order+0x158>
   98542:	ba 01 00 00 00       	mov    edx,0x1
   98547:	4c 89 e7             	mov    rdi,r12
   9854a:	4c 89 fe             	mov    rsi,r15
   9854d:	ff 15 75 f3 04 00    	call   QWORD PTR [rip+0x4f375]        # e78c8 <_DYNAMIC+0x208>
   98553:	eb 03                	jmp    98558 <future_backtest_sdk::context::StrategyContext::cancel_order+0x158>
   98555:	49 89 c5             	mov    r13,rax
   98558:	41 c6 06 00          	mov    BYTE PTR [r14],0x0
   9855c:	48 85 db             	test   rbx,rbx
   9855f:	74 11                	je     98572 <future_backtest_sdk::context::StrategyContext::cancel_order+0x172>
   98561:	ba 01 00 00 00       	mov    edx,0x1
   98566:	4c 89 f7             	mov    rdi,r14
   98569:	48 89 de             	mov    rsi,rbx
   9856c:	ff 15 56 f3 04 00    	call   QWORD PTR [rip+0x4f356]        # e78c8 <_DYNAMIC+0x208>
   98572:	4c 89 ef             	mov    rdi,r13
   98575:	e8 46 7c 04 00       	call   e01c0 <_Unwind_Resume@plt>
   9857a:	cc                   	int3   
   9857b:	cc                   	int3   
   9857c:	cc                   	int3   
   9857d:	cc                   	int3   
   9857e:	cc                   	int3   
   9857f:	cc                   	int3   

0000000000097f20 <future_backtest_sdk::context::StrategyContext::pending_orders>:
   97f20:	55                   	push   rbp
   97f21:	41 57                	push   r15
   97f23:	41 56                	push   r14
   97f25:	41 55                	push   r13
   97f27:	41 54                	push   r12
   97f29:	53                   	push   rbx
   97f2a:	48 81 ec 00 10 00 00 	sub    rsp,0x1000
   97f31:	48 c7 04 24 00 00 00 	mov    QWORD PTR [rsp],0x0
   97f38:	00 
   97f39:	48 81 ec f8 00 00 00 	sub    rsp,0xf8
   97f40:	48 89 74 24 08       	mov    QWORD PTR [rsp+0x8],rsi
   97f45:	48 89 7c 24 28       	mov    QWORD PTR [rsp+0x28],rdi
   97f4a:	48 89 54 24 58       	mov    QWORD PTR [rsp+0x58],rdx
   97f4f:	48 89 d7             	mov    rdi,rdx
   97f52:	48 89 4c 24 60       	mov    QWORD PTR [rsp+0x60],rcx
   97f57:	48 89 ce             	mov    rsi,rcx
   97f5a:	ff 15 10 00 05 00    	call   QWORD PTR [rip+0x50010]        # e7f70 <_DYNAMIC+0x8b0>
   97f60:	49 89 c4             	mov    r12,rax
   97f63:	48 89 54 24 38       	mov    QWORD PTR [rsp+0x38],rdx
   97f68:	0f 57 c0             	xorps  xmm0,xmm0
   97f6b:	0f 29 84 24 e0 00 00 	movaps XMMWORD PTR [rsp+0xe0],xmm0
   97f72:	00 
   97f73:	0f 29 84 24 d0 00 00 	movaps XMMWORD PTR [rsp+0xd0],xmm0
   97f7a:	00 
   97f7b:	0f 29 84 24 c0 00 00 	movaps XMMWORD PTR [rsp+0xc0],xmm0
   97f82:	00 
   97f83:	0f 29 84 24 b0 00 00 	movaps XMMWORD PTR [rsp+0xb0],xmm0
   97f8a:	00 
   97f8b:	48 8d bc 24 f8 00 00 	lea    rdi,[rsp+0xf8]
   97f92:	00 
   97f93:	4c 8b 3d de fb 04 00 	mov    r15,QWORD PTR [rip+0x4fbde]        # e7b78 <memset@GLIBC_2.2.5>
   97f9a:	ba 00 02 00 00       	mov    edx,0x200
   97f9f:	31 f6                	xor    esi,esi
   97fa1:	41 ff d7             	call   r15
   97fa4:	48 8d bc 24 f8 02 00 	lea    rdi,[rsp+0x2f8]
   97fab:	00 
   97fac:	ba 00 02 00 00       	mov    edx,0x200
   97fb1:	31 f6                	xor    esi,esi
   97fb3:	41 ff d7             	call   r15
   97fb6:	4c 8d ac 24 f8 04 00 	lea    r13,[rsp+0x4f8]
   97fbd:	00 
   97fbe:	ba 00 02 00 00       	mov    edx,0x200
   97fc3:	4c 89 ef             	mov    rdi,r13
   97fc6:	31 f6                	xor    esi,esi
   97fc8:	41 ff d7             	call   r15
   97fcb:	48 8d 9c 24 f8 06 00 	lea    rbx,[rsp+0x6f8]
   97fd2:	00 
   97fd3:	ba 00 02 00 00       	mov    edx,0x200
   97fd8:	48 89 df             	mov    rdi,rbx
   97fdb:	31 f6                	xor    esi,esi
   97fdd:	41 ff d7             	call   r15
   97fe0:	48 8d ac 24 f8 08 00 	lea    rbp,[rsp+0x8f8]
   97fe7:	00 
   97fe8:	41 be 00 08 00 00    	mov    r14d,0x800
   97fee:	ba 00 08 00 00       	mov    edx,0x800
   97ff3:	48 89 ef             	mov    rdi,rbp
   97ff6:	31 f6                	xor    esi,esi
   97ff8:	41 ff d7             	call   r15
   97ffb:	48 8b 44 24 08       	mov    rax,QWORD PTR [rsp+0x8]
   98000:	48 8b 78 30          	mov    rdi,QWORD PTR [rax+0x30]
   98004:	48 8d 94 24 b0 00 00 	lea    rdx,[rsp+0xb0]
   9800b:	00 
   9800c:	4c 89 64 24 30       	mov    QWORD PTR [rsp+0x30],r12
   98011:	4c 89 e6             	mov    rsi,r12
   98014:	48 8d 8c 24 f8 00 00 	lea    rcx,[rsp+0xf8]
   9801b:	00 
   9801c:	4c 8d 84 24 f8 02 00 	lea    r8,[rsp+0x2f8]
   98023:	00 
   98024:	4d 89 e9             	mov    r9,r13
   98027:	6a 40                	push   0x40
   98029:	68 00 08 00 00       	push   0x800
   9802e:	55                   	push   rbp
   9802f:	53                   	push   rbx
   98030:	ff 15 f2 ff 04 00    	call   QWORD PTR [rip+0x4fff2]        # e8028 <fb_ctx_pending_orders@Base>
   98036:	48 83 c4 20          	add    rsp,0x20
   9803a:	48 c7 44 24 10 00 00 	mov    QWORD PTR [rsp+0x10],0x0
   98041:	00 00 
   98043:	48 c7 44 24 18 08 00 	mov    QWORD PTR [rsp+0x18],0x8
   9804a:	00 00 
   9804c:	48 c7 44 24 20 00 00 	mov    QWORD PTR [rsp+0x20],0x0
   98053:	00 00 
   98055:	4c 63 e8             	movsxd r13,eax
   98058:	48 8d 84 24 f8 10 00 	lea    rax,[rsp+0x10f8]
   9805f:	00 
   98060:	31 d2                	xor    edx,edx
   98062:	66 66 66 66 66 2e 0f 	data16 data16 data16 data16 cs nop WORD PTR [rax+rax*1+0x0]
   98069:	1f 84 00 00 00 00 00 
   98070:	44 0f b6 64 15 00    	movzx  r12d,BYTE PTR [rbp+rdx*1+0x0]
   98076:	45 84 e4             	test   r12b,r12b
   98079:	74 25                	je     980a0 <future_backtest_sdk::context::StrategyContext::pending_orders+0x180>
   9807b:	48 8d 0c 2a          	lea    rcx,[rdx+rbp*1]
   9807f:	48 ff c1             	inc    rcx
   98082:	48 ff c2             	inc    rdx
   98085:	48 39 c1             	cmp    rcx,rax
   98088:	75 e6                	jne    98070 <future_backtest_sdk::context::StrategyContext::pending_orders+0x150>
   9808a:	49 89 ef             	mov    r15,rbp
   9808d:	4c 89 f3             	mov    rbx,r14
   98090:	4c 89 f2             	mov    rdx,r14
   98093:	eb 24                	jmp    980b9 <future_backtest_sdk::context::StrategyContext::pending_orders+0x199>
   98095:	66 66 2e 0f 1f 84 00 	data16 cs nop WORD PTR [rax+rax*1+0x0]
   9809c:	00 00 00 00 
   980a0:	48 89 d3             	mov    rbx,rdx
   980a3:	48 f7 d3             	not    rbx
   980a6:	4c 01 f3             	add    rbx,r14
   980a9:	4c 8d 3c 2a          	lea    r15,[rdx+rbp*1]
   980ad:	49 ff c7             	inc    r15
   980b0:	48 85 d2             	test   rdx,rdx
   980b3:	0f 84 e3 00 00 00    	je     9819c <future_backtest_sdk::context::StrategyContext::pending_orders+0x27c>
   980b9:	48 8d 7c 24 68       	lea    rdi,[rsp+0x68]
   980be:	48 89 ee             	mov    rsi,rbp
   980c1:	ff 15 41 fd 04 00    	call   QWORD PTR [rip+0x4fd41]        # e7e08 <_DYNAMIC+0x748>
   980c7:	83 7c 24 68 01       	cmp    DWORD PTR [rsp+0x68],0x1
   980cc:	75 22                	jne    980f0 <future_backtest_sdk::context::StrategyContext::pending_orders+0x1d0>
   980ce:	4c 8b 74 24 20       	mov    r14,QWORD PTR [rsp+0x20]
   980d3:	45 84 e4             	test   r12b,r12b
   980d6:	0f 84 bb 00 00 00    	je     98197 <future_backtest_sdk::context::StrategyContext::pending_orders+0x277>
   980dc:	e9 ce 00 00 00       	jmp    981af <future_backtest_sdk::context::StrategyContext::pending_orders+0x28f>
   980e1:	66 66 66 66 66 66 2e 	data16 data16 data16 data16 data16 cs nop WORD PTR [rax+rax*1+0x0]
   980e8:	0f 1f 84 00 00 00 00 
   980ef:	00 
   980f0:	48 8b 6c 24 78       	mov    rbp,QWORD PTR [rsp+0x78]
   980f5:	48 85 ed             	test   rbp,rbp
   980f8:	0f 88 c0 00 00 00    	js     981be <future_backtest_sdk::context::StrategyContext::pending_orders+0x29e>
   980fe:	48 8b 74 24 70       	mov    rsi,QWORD PTR [rsp+0x70]
   98103:	74 38                	je     9813d <future_backtest_sdk::context::StrategyContext::pending_orders+0x21d>
   98105:	48 89 74 24 08       	mov    QWORD PTR [rsp+0x8],rsi
   9810a:	4d 89 ee             	mov    r14,r13
   9810d:	ff 15 d5 f7 04 00    	call   QWORD PTR [rip+0x4f7d5]        # e78e8 <_DYNAMIC+0x228>
   98113:	41 bd 01 00 00 00    	mov    r13d,0x1
   98119:	be 01 00 00 00       	mov    esi,0x1
   9811e:	48 89 ef             	mov    rdi,rbp
   98121:	ff 15 99 f7 04 00    	call   QWORD PTR [rip+0x4f799]        # e78c0 <_DYNAMIC+0x200>
   98127:	48 85 c0             	test   rax,rax
   9812a:	0f 84 43 02 00 00    	je     98373 <future_backtest_sdk::context::StrategyContext::pending_orders+0x453>
   98130:	48 89 c7             	mov    rdi,rax
   98133:	4d 89 f5             	mov    r13,r14
   98136:	48 8b 74 24 08       	mov    rsi,QWORD PTR [rsp+0x8]
   9813b:	eb 05                	jmp    98142 <future_backtest_sdk::context::StrategyContext::pending_orders+0x222>
   9813d:	bf 01 00 00 00       	mov    edi,0x1
   98142:	48 89 7c 24 08       	mov    QWORD PTR [rsp+0x8],rdi
   98147:	48 89 ea             	mov    rdx,rbp
   9814a:	ff 15 d8 f7 04 00    	call   QWORD PTR [rip+0x4f7d8]        # e7928 <memcpy@GLIBC_2.14>
   98150:	4c 8b 74 24 20       	mov    r14,QWORD PTR [rsp+0x20]
   98155:	4c 3b 74 24 10       	cmp    r14,QWORD PTR [rsp+0x10]
   9815a:	75 12                	jne    9816e <future_backtest_sdk::context::StrategyContext::pending_orders+0x24e>
   9815c:	48 8d 7c 24 10       	lea    rdi,[rsp+0x10]
   98161:	48 8d 35 00 c2 04 00 	lea    rsi,[rip+0x4c200]        # e4368 <anon.6dca787fc37e48e710a1dbd955c10c13.17.llvm.6582718418885566971+0x198>
   98168:	ff 15 32 f8 04 00    	call   QWORD PTR [rip+0x4f832]        # e79a0 <_DYNAMIC+0x2e0>
   9816e:	48 8b 44 24 18       	mov    rax,QWORD PTR [rsp+0x18]
   98173:	4b 8d 0c 76          	lea    rcx,[r14+r14*2]
   98177:	48 89 2c c8          	mov    QWORD PTR [rax+rcx*8],rbp
   9817b:	48 8b 54 24 08       	mov    rdx,QWORD PTR [rsp+0x8]
   98180:	48 89 54 c8 08       	mov    QWORD PTR [rax+rcx*8+0x8],rdx
   98185:	48 89 6c c8 10       	mov    QWORD PTR [rax+rcx*8+0x10],rbp
   9818a:	49 ff c6             	inc    r14
   9818d:	4c 89 74 24 20       	mov    QWORD PTR [rsp+0x20],r14
   98192:	45 84 e4             	test   r12b,r12b
   98195:	75 18                	jne    981af <future_backtest_sdk::context::StrategyContext::pending_orders+0x28f>
   98197:	4d 39 ee             	cmp    r14,r13
   9819a:	73 13                	jae    981af <future_backtest_sdk::context::StrategyContext::pending_orders+0x28f>
   9819c:	49 8d 04 1f          	lea    rax,[r15+rbx*1]
   981a0:	4c 89 fd             	mov    rbp,r15
   981a3:	49 89 de             	mov    r14,rbx
   981a6:	48 85 db             	test   rbx,rbx
   981a9:	0f 85 b1 fe ff ff    	jne    98060 <future_backtest_sdk::context::StrategyContext::pending_orders+0x140>
   981af:	4c 8b 74 24 60       	mov    r14,QWORD PTR [rsp+0x60]
   981b4:	4d 85 f6             	test   r14,r14
   981b7:	79 1f                	jns    981d8 <future_backtest_sdk::context::StrategyContext::pending_orders+0x2b8>
   981b9:	45 31 ed             	xor    r13d,r13d
   981bc:	eb 08                	jmp    981c6 <future_backtest_sdk::context::StrategyContext::pending_orders+0x2a6>
   981be:	45 31 ed             	xor    r13d,r13d
   981c1:	48 8b 74 24 08       	mov    rsi,QWORD PTR [rsp+0x8]
   981c6:	48 8d 15 63 c0 04 00 	lea    rdx,[rip+0x4c063]        # e4230 <anon.6dca787fc37e48e710a1dbd955c10c13.17.llvm.6582718418885566971+0x60>
   981cd:	4c 89 ef             	mov    rdi,r13
   981d0:	ff 15 9a f7 04 00    	call   QWORD PTR [rip+0x4f79a]        # e7970 <_DYNAMIC+0x2b0>
   981d6:	0f 0b                	ud2    
   981d8:	74 33                	je     9820d <future_backtest_sdk::context::StrategyContext::pending_orders+0x2ed>
   981da:	4d 89 ef             	mov    r15,r13
   981dd:	ff 15 05 f7 04 00    	call   QWORD PTR [rip+0x4f705]        # e78e8 <_DYNAMIC+0x228>
   981e3:	41 bd 01 00 00 00    	mov    r13d,0x1
   981e9:	be 01 00 00 00       	mov    esi,0x1
   981ee:	4c 89 f7             	mov    rdi,r14
   981f1:	ff 15 c9 f6 04 00    	call   QWORD PTR [rip+0x4f6c9]        # e78c0 <_DYNAMIC+0x200>
   981f7:	48 85 c0             	test   rax,rax
   981fa:	4c 8b 64 24 28       	mov    r12,QWORD PTR [rsp+0x28]
   981ff:	0f 84 76 01 00 00    	je     9837b <future_backtest_sdk::context::StrategyContext::pending_orders+0x45b>
   98205:	48 89 c3             	mov    rbx,rax
   98208:	4d 89 fd             	mov    r13,r15
   9820b:	eb 0a                	jmp    98217 <future_backtest_sdk::context::StrategyContext::pending_orders+0x2f7>
   9820d:	bb 01 00 00 00       	mov    ebx,0x1
   98212:	4c 8b 64 24 28       	mov    r12,QWORD PTR [rsp+0x28]
   98217:	48 89 df             	mov    rdi,rbx
   9821a:	48 8b 74 24 58       	mov    rsi,QWORD PTR [rsp+0x58]
   9821f:	4c 89 f2             	mov    rdx,r14
   98222:	ff 15 00 f7 04 00    	call   QWORD PTR [rip+0x4f700]        # e7928 <memcpy@GLIBC_2.14>
   98228:	4c 89 74 24 40       	mov    QWORD PTR [rsp+0x40],r14
   9822d:	48 89 5c 24 48       	mov    QWORD PTR [rsp+0x48],rbx
   98232:	4c 89 74 24 50       	mov    QWORD PTR [rsp+0x50],r14
   98237:	48 8d 44 24 10       	lea    rax,[rsp+0x10]
   9823c:	48 89 44 24 68       	mov    QWORD PTR [rsp+0x68],rax
   98241:	48 8d 44 24 40       	lea    rax,[rsp+0x40]
   98246:	48 89 44 24 70       	mov    QWORD PTR [rsp+0x70],rax
   9824b:	48 8d 84 24 b0 00 00 	lea    rax,[rsp+0xb0]
   98252:	00 
   98253:	48 89 44 24 78       	mov    QWORD PTR [rsp+0x78],rax
   98258:	48 8d 84 24 f8 00 00 	lea    rax,[rsp+0xf8]
   9825f:	00 
   98260:	48 89 84 24 80 00 00 	mov    QWORD PTR [rsp+0x80],rax
   98267:	00 
   98268:	48 8d 84 24 f8 02 00 	lea    rax,[rsp+0x2f8]
   9826f:	00 
   98270:	48 89 84 24 88 00 00 	mov    QWORD PTR [rsp+0x88],rax
   98277:	00 
   98278:	48 8d 84 24 f8 04 00 	lea    rax,[rsp+0x4f8]
   9827f:	00 
   98280:	48 89 84 24 90 00 00 	mov    QWORD PTR [rsp+0x90],rax
   98287:	00 
   98288:	48 8d 84 24 f8 06 00 	lea    rax,[rsp+0x6f8]
   9828f:	00 
   98290:	48 89 84 24 98 00 00 	mov    QWORD PTR [rsp+0x98],rax
   98297:	00 
   98298:	48 c7 84 24 a0 00 00 	mov    QWORD PTR [rsp+0xa0],0x0
   9829f:	00 00 00 00 00 
   982a4:	4c 89 ac 24 a8 00 00 	mov    QWORD PTR [rsp+0xa8],r13
   982ab:	00 
   982ac:	48 8d 15 4d bf 04 00 	lea    rdx,[rip+0x4bf4d]        # e4200 <anon.6dca787fc37e48e710a1dbd955c10c13.17.llvm.6582718418885566971+0x30>
   982b3:	48 8d 74 24 68       	lea    rsi,[rsp+0x68]
   982b8:	4c 89 e7             	mov    rdi,r12
   982bb:	e8 c0 20 00 00       	call   9a380 <<alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter>
   982c0:	48 8b 74 24 40       	mov    rsi,QWORD PTR [rsp+0x40]
   982c5:	48 85 f6             	test   rsi,rsi
   982c8:	74 10                	je     982da <future_backtest_sdk::context::StrategyContext::pending_orders+0x3ba>
   982ca:	48 8b 7c 24 48       	mov    rdi,QWORD PTR [rsp+0x48]
   982cf:	ba 01 00 00 00       	mov    edx,0x1
   982d4:	ff 15 ee f5 04 00    	call   QWORD PTR [rip+0x4f5ee]        # e78c8 <_DYNAMIC+0x208>
   982da:	48 8b 5c 24 20       	mov    rbx,QWORD PTR [rsp+0x20]
   982df:	48 85 db             	test   rbx,rbx
   982e2:	74 3b                	je     9831f <future_backtest_sdk::context::StrategyContext::pending_orders+0x3ff>
   982e4:	4c 8b 74 24 18       	mov    r14,QWORD PTR [rsp+0x18]
   982e9:	49 83 c6 08          	add    r14,0x8
   982ed:	4c 8b 3d d4 f5 04 00 	mov    r15,QWORD PTR [rip+0x4f5d4]        # e78c8 <_DYNAMIC+0x208>
   982f4:	eb 13                	jmp    98309 <future_backtest_sdk::context::StrategyContext::pending_orders+0x3e9>
   982f6:	66 2e 0f 1f 84 00 00 	cs nop WORD PTR [rax+rax*1+0x0]
   982fd:	00 00 00 
   98300:	49 83 c6 18          	add    r14,0x18
   98304:	48 ff cb             	dec    rbx
   98307:	74 16                	je     9831f <future_backtest_sdk::context::StrategyContext::pending_orders+0x3ff>
   98309:	49 8b 76 f8          	mov    rsi,QWORD PTR [r14-0x8]
   9830d:	48 85 f6             	test   rsi,rsi
   98310:	74 ee                	je     98300 <future_backtest_sdk::context::StrategyContext::pending_orders+0x3e0>
   98312:	49 8b 3e             	mov    rdi,QWORD PTR [r14]
   98315:	ba 01 00 00 00       	mov    edx,0x1
   9831a:	41 ff d7             	call   r15
   9831d:	eb e1                	jmp    98300 <future_backtest_sdk::context::StrategyContext::pending_orders+0x3e0>
   9831f:	48 8b 44 24 10       	mov    rax,QWORD PTR [rsp+0x10]
   98324:	48 85 c0             	test   rax,rax
   98327:	74 18                	je     98341 <future_backtest_sdk::context::StrategyContext::pending_orders+0x421>
   98329:	48 8b 7c 24 18       	mov    rdi,QWORD PTR [rsp+0x18]
   9832e:	48 c1 e0 03          	shl    rax,0x3
   98332:	48 8d 34 40          	lea    rsi,[rax+rax*2]
   98336:	ba 08 00 00 00       	mov    edx,0x8
   9833b:	ff 15 87 f5 04 00    	call   QWORD PTR [rip+0x4f587]        # e78c8 <_DYNAMIC+0x208>
   98341:	48 8b 7c 24 30       	mov    rdi,QWORD PTR [rsp+0x30]
   98346:	c6 07 00             	mov    BYTE PTR [rdi],0x0
   98349:	48 8b 74 24 38       	mov    rsi,QWORD PTR [rsp+0x38]
   9834e:	48 85 f6             	test   rsi,rsi
   98351:	74 0b                	je     9835e <future_backtest_sdk::context::StrategyContext::pending_orders+0x43e>
   98353:	ba 01 00 00 00       	mov    edx,0x1
   98358:	ff 15 6a f5 04 00    	call   QWORD PTR [rip+0x4f56a]        # e78c8 <_DYNAMIC+0x208>
   9835e:	4c 89 e0             	mov    rax,r12
   98361:	48 81 c4 f8 10 00 00 	add    rsp,0x10f8
   98368:	5b                   	pop    rbx
   98369:	41 5c                	pop    r12
   9836b:	41 5d                	pop    r13
   9836d:	41 5e                	pop    r14
   9836f:	41 5f                	pop    r15
   98371:	5d                   	pop    rbp
   98372:	c3                   	ret    
   98373:	48 89 ee             	mov    rsi,rbp
   98376:	e9 4b fe ff ff       	jmp    981c6 <future_backtest_sdk::context::StrategyContext::pending_orders+0x2a6>
   9837b:	4c 89 f6             	mov    rsi,r14
   9837e:	e9 43 fe ff ff       	jmp    981c6 <future_backtest_sdk::context::StrategyContext::pending_orders+0x2a6>
   98383:	48 89 c3             	mov    rbx,rax
   98386:	48 8b 74 24 40       	mov    rsi,QWORD PTR [rsp+0x40]
   9838b:	48 85 f6             	test   rsi,rsi
   9838e:	74 34                	je     983c4 <future_backtest_sdk::context::StrategyContext::pending_orders+0x4a4>
   98390:	48 8b 7c 24 48       	mov    rdi,QWORD PTR [rsp+0x48]
   98395:	ba 01 00 00 00       	mov    edx,0x1
   9839a:	ff 15 28 f5 04 00    	call   QWORD PTR [rip+0x4f528]        # e78c8 <_DYNAMIC+0x208>
   983a0:	eb 22                	jmp    983c4 <future_backtest_sdk::context::StrategyContext::pending_orders+0x4a4>
   983a2:	48 89 c3             	mov    rbx,rax
   983a5:	48 85 ed             	test   rbp,rbp
   983a8:	74 1a                	je     983c4 <future_backtest_sdk::context::StrategyContext::pending_orders+0x4a4>
   983aa:	ba 01 00 00 00       	mov    edx,0x1
   983af:	48 8b 7c 24 08       	mov    rdi,QWORD PTR [rsp+0x8]
   983b4:	48 89 ee             	mov    rsi,rbp
   983b7:	ff 15 0b f5 04 00    	call   QWORD PTR [rip+0x4f50b]        # e78c8 <_DYNAMIC+0x208>
   983bd:	eb 05                	jmp    983c4 <future_backtest_sdk::context::StrategyContext::pending_orders+0x4a4>
   983bf:	eb 00                	jmp    983c1 <future_backtest_sdk::context::StrategyContext::pending_orders+0x4a1>
   983c1:	48 89 c3             	mov    rbx,rax
   983c4:	48 8d 7c 24 10       	lea    rdi,[rsp+0x10]
   983c9:	e8 42 e8 ff ff       	call   96c10 <core::ptr::drop_in_place<alloc::vec::Vec<alloc::string::String>>>
   983ce:	48 8b 7c 24 30       	mov    rdi,QWORD PTR [rsp+0x30]
   983d3:	c6 07 00             	mov    BYTE PTR [rdi],0x0
   983d6:	48 8b 74 24 38       	mov    rsi,QWORD PTR [rsp+0x38]
   983db:	48 85 f6             	test   rsi,rsi
   983de:	74 0b                	je     983eb <future_backtest_sdk::context::StrategyContext::pending_orders+0x4cb>
   983e0:	ba 01 00 00 00       	mov    edx,0x1
   983e5:	ff 15 dd f4 04 00    	call   QWORD PTR [rip+0x4f4dd]        # e78c8 <_DYNAMIC+0x208>
   983eb:	48 89 df             	mov    rdi,rbx
   983ee:	e8 cd 7d 04 00       	call   e01c0 <_Unwind_Resume@plt>
   983f3:	cc                   	int3   
   983f4:	cc                   	int3   
   983f5:	cc                   	int3   
   983f6:	cc                   	int3   
   983f7:	cc                   	int3   
   983f8:	cc                   	int3   
   983f9:	cc                   	int3   
   983fa:	cc                   	int3   
   983fb:	cc                   	int3   
   983fc:	cc                   	int3   
   983fd:	cc                   	int3   
   983fe:	cc                   	int3   
   983ff:	cc                   	int3   

0000000000097ba0 <future_backtest_sdk::context::StrategyContext::cancel_pending_ids>:
   97ba0:	55                   	push   rbp
   97ba1:	41 57                	push   r15
   97ba3:	41 56                	push   r14
   97ba5:	41 55                	push   r13
   97ba7:	41 54                	push   r12
   97ba9:	53                   	push   rbx
   97baa:	48 83 ec 58          	sub    rsp,0x58
   97bae:	48 89 f3             	mov    rbx,rsi
   97bb1:	48 89 7c 24 10       	mov    QWORD PTR [rsp+0x10],rdi
   97bb6:	48 89 d7             	mov    rdi,rdx
   97bb9:	48 89 ce             	mov    rsi,rcx
   97bbc:	ff 15 ae 03 05 00    	call   QWORD PTR [rip+0x503ae]        # e7f70 <_DYNAMIC+0x8b0>
   97bc2:	49 89 c4             	mov    r12,rax
   97bc5:	49 89 d6             	mov    r14,rdx
   97bc8:	ff 15 1a fd 04 00    	call   QWORD PTR [rip+0x4fd1a]        # e78e8 <_DYNAMIC+0x228>
   97bce:	bf 00 40 00 00       	mov    edi,0x4000
   97bd3:	be 01 00 00 00       	mov    esi,0x1
   97bd8:	ff 15 fa fc 04 00    	call   QWORD PTR [rip+0x4fcfa]        # e78d8 <_DYNAMIC+0x218>
   97bde:	48 85 c0             	test   rax,rax
   97be1:	0f 84 1f 02 00 00    	je     97e06 <future_backtest_sdk::context::StrategyContext::cancel_pending_ids+0x266>
   97be7:	49 89 c7             	mov    r15,rax
   97bea:	48 8b 7b 30          	mov    rdi,QWORD PTR [rbx+0x30]
   97bee:	4c 89 e6             	mov    rsi,r12
   97bf1:	48 89 c2             	mov    rdx,rax
   97bf4:	b9 00 40 00 00       	mov    ecx,0x4000
   97bf9:	ff 15 19 04 05 00    	call   QWORD PTR [rip+0x50419]        # e8018 <fb_ctx_cancel_pending_ids@Base>
   97bff:	85 c0                	test   eax,eax
   97c01:	0f 8e 44 01 00 00    	jle    97d4b <future_backtest_sdk::context::StrategyContext::cancel_pending_ids+0x1ab>
   97c07:	4c 89 24 24          	mov    QWORD PTR [rsp],r12
   97c0b:	4c 89 74 24 08       	mov    QWORD PTR [rsp+0x8],r14
   97c10:	89 c5                	mov    ebp,eax
   97c12:	48 8d 04 ed 00 00 00 	lea    rax,[rbp*8+0x0]
   97c19:	00 
   97c1a:	48 8d 1c 40          	lea    rbx,[rax+rax*2]
   97c1e:	ff 15 c4 fc 04 00    	call   QWORD PTR [rip+0x4fcc4]        # e78e8 <_DYNAMIC+0x228>
   97c24:	be 08 00 00 00       	mov    esi,0x8
   97c29:	48 89 df             	mov    rdi,rbx
   97c2c:	ff 15 8e fc 04 00    	call   QWORD PTR [rip+0x4fc8e]        # e78c0 <_DYNAMIC+0x200>
   97c32:	48 85 c0             	test   rax,rax
   97c35:	0f 84 e4 01 00 00    	je     97e1f <future_backtest_sdk::context::StrategyContext::cancel_pending_ids+0x27f>
   97c3b:	48 89 6c 24 18       	mov    QWORD PTR [rsp+0x18],rbp
   97c40:	48 89 44 24 20       	mov    QWORD PTR [rsp+0x20],rax
   97c45:	48 c7 44 24 28 00 00 	mov    QWORD PTR [rsp+0x28],0x0
   97c4c:	00 00 
   97c4e:	45 31 f6             	xor    r14d,r14d
   97c51:	31 f6                	xor    esi,esi
   97c53:	31 d2                	xor    edx,edx
   97c55:	eb 40                	jmp    97c97 <future_backtest_sdk::context::StrategyContext::cancel_pending_ids+0xf7>
   97c57:	48 8b 44 24 20       	mov    rax,QWORD PTR [rsp+0x20]
   97c5c:	4b 8d 0c 76          	lea    rcx,[r14+r14*2]
   97c60:	4c 89 2c c8          	mov    QWORD PTR [rax+rcx*8],r13
   97c64:	48 8b 54 24 38       	mov    rdx,QWORD PTR [rsp+0x38]
   97c69:	48 89 54 c8 08       	mov    QWORD PTR [rax+rcx*8+0x8],rdx
   97c6e:	48 89 5c c8 10       	mov    QWORD PTR [rax+rcx*8+0x10],rbx
   97c73:	49 ff c6             	inc    r14
   97c76:	4c 89 74 24 28       	mov    QWORD PTR [rsp+0x28],r14
   97c7b:	4c 89 e6             	mov    rsi,r12
   97c7e:	49 39 ee             	cmp    r14,rbp
   97c81:	0f 83 41 01 00 00    	jae    97dc8 <future_backtest_sdk::context::StrategyContext::cancel_pending_ids+0x228>
   97c87:	4c 89 e2             	mov    rdx,r12
   97c8a:	49 81 fc 00 40 00 00 	cmp    r12,0x4000
   97c91:	0f 84 31 01 00 00    	je     97dc8 <future_backtest_sdk::context::StrategyContext::cancel_pending_ids+0x228>
   97c97:	4c 8d 62 01          	lea    r12,[rdx+0x1]
   97c9b:	41 80 3c 17 00       	cmp    BYTE PTR [r15+rdx*1],0x0
   97ca0:	75 e5                	jne    97c87 <future_backtest_sdk::context::StrategyContext::cancel_pending_ids+0xe7>
   97ca2:	48 39 d6             	cmp    rsi,rdx
   97ca5:	73 d4                	jae    97c7b <future_backtest_sdk::context::StrategyContext::cancel_pending_ids+0xdb>
   97ca7:	48 29 f2             	sub    rdx,rsi
   97caa:	4c 01 fe             	add    rsi,r15
   97cad:	48 8d 7c 24 40       	lea    rdi,[rsp+0x40]
   97cb2:	ff 15 b0 02 05 00    	call   QWORD PTR [rip+0x502b0]        # e7f68 <_DYNAMIC+0x8a8>
   97cb8:	4c 8b 6c 24 40       	mov    r13,QWORD PTR [rsp+0x40]
   97cbd:	48 8b 74 24 48       	mov    rsi,QWORD PTR [rsp+0x48]
   97cc2:	4c 89 e8             	mov    rax,r13
   97cc5:	48 f7 d8             	neg    rax
   97cc8:	48 8b 5c 24 50       	mov    rbx,QWORD PTR [rsp+0x50]
   97ccd:	71 50                	jno    97d1f <future_backtest_sdk::context::StrategyContext::cancel_pending_ids+0x17f>
   97ccf:	48 85 db             	test   rbx,rbx
   97cd2:	0f 88 d1 00 00 00    	js     97da9 <future_backtest_sdk::context::StrategyContext::cancel_pending_ids+0x209>
   97cd8:	74 28                	je     97d02 <future_backtest_sdk::context::StrategyContext::cancel_pending_ids+0x162>
   97cda:	49 89 f5             	mov    r13,rsi
   97cdd:	ff 15 05 fc 04 00    	call   QWORD PTR [rip+0x4fc05]        # e78e8 <_DYNAMIC+0x228>
   97ce3:	be 01 00 00 00       	mov    esi,0x1
   97ce8:	48 89 df             	mov    rdi,rbx
   97ceb:	ff 15 cf fb 04 00    	call   QWORD PTR [rip+0x4fbcf]        # e78c0 <_DYNAMIC+0x200>
   97cf1:	48 85 c0             	test   rax,rax
   97cf4:	0f 84 3c 01 00 00    	je     97e36 <future_backtest_sdk::context::StrategyContext::cancel_pending_ids+0x296>
   97cfa:	49 89 c6             	mov    r14,rax
   97cfd:	4c 89 ee             	mov    rsi,r13
   97d00:	eb 06                	jmp    97d08 <future_backtest_sdk::context::StrategyContext::cancel_pending_ids+0x168>
   97d02:	41 be 01 00 00 00    	mov    r14d,0x1
   97d08:	4c 89 f7             	mov    rdi,r14
   97d0b:	48 89 da             	mov    rdx,rbx
   97d0e:	ff 15 14 fc 04 00    	call   QWORD PTR [rip+0x4fc14]        # e7928 <memcpy@GLIBC_2.14>
   97d14:	4c 89 74 24 30       	mov    QWORD PTR [rsp+0x30],r14
   97d19:	4c 89 f6             	mov    rsi,r14
   97d1c:	49 89 dd             	mov    r13,rbx
   97d1f:	48 89 74 24 38       	mov    QWORD PTR [rsp+0x38],rsi
   97d24:	4c 8b 74 24 28       	mov    r14,QWORD PTR [rsp+0x28]
   97d29:	4c 3b 74 24 18       	cmp    r14,QWORD PTR [rsp+0x18]
   97d2e:	0f 85 23 ff ff ff    	jne    97c57 <future_backtest_sdk::context::StrategyContext::cancel_pending_ids+0xb7>
   97d34:	48 8d 7c 24 18       	lea    rdi,[rsp+0x18]
   97d39:	48 8d 35 00 c6 04 00 	lea    rsi,[rip+0x4c600]        # e4340 <anon.6dca787fc37e48e710a1dbd955c10c13.17.llvm.6582718418885566971+0x170>
   97d40:	ff 15 5a fc 04 00    	call   QWORD PTR [rip+0x4fc5a]        # e79a0 <_DYNAMIC+0x2e0>
   97d46:	e9 0c ff ff ff       	jmp    97c57 <future_backtest_sdk::context::StrategyContext::cancel_pending_ids+0xb7>
   97d4b:	48 8b 44 24 10       	mov    rax,QWORD PTR [rsp+0x10]
   97d50:	48 c7 00 00 00 00 00 	mov    QWORD PTR [rax],0x0
   97d57:	48 c7 40 08 08 00 00 	mov    QWORD PTR [rax+0x8],0x8
   97d5e:	00 
   97d5f:	48 c7 40 10 00 00 00 	mov    QWORD PTR [rax+0x10],0x0
   97d66:	00 
   97d67:	be 00 40 00 00       	mov    esi,0x4000
   97d6c:	ba 01 00 00 00       	mov    edx,0x1
   97d71:	4c 89 ff             	mov    rdi,r15
   97d74:	ff 15 4e fb 04 00    	call   QWORD PTR [rip+0x4fb4e]        # e78c8 <_DYNAMIC+0x208>
   97d7a:	41 c6 04 24 00       	mov    BYTE PTR [r12],0x0
   97d7f:	4d 85 f6             	test   r14,r14
   97d82:	74 11                	je     97d95 <future_backtest_sdk::context::StrategyContext::cancel_pending_ids+0x1f5>
   97d84:	ba 01 00 00 00       	mov    edx,0x1
   97d89:	4c 89 e7             	mov    rdi,r12
   97d8c:	4c 89 f6             	mov    rsi,r14
   97d8f:	ff 15 33 fb 04 00    	call   QWORD PTR [rip+0x4fb33]        # e78c8 <_DYNAMIC+0x208>
   97d95:	48 8b 44 24 10       	mov    rax,QWORD PTR [rsp+0x10]
   97d9a:	48 83 c4 58          	add    rsp,0x58
   97d9e:	5b                   	pop    rbx
   97d9f:	41 5c                	pop    r12
   97da1:	41 5d                	pop    r13
   97da3:	41 5e                	pop    r14
   97da5:	41 5f                	pop    r15
   97da7:	5d                   	pop    rbp
   97da8:	c3                   	ret    
   97da9:	31 ff                	xor    edi,edi
   97dab:	48 8d 15 7e c4 04 00 	lea    rdx,[rip+0x4c47e]        # e4230 <anon.6dca787fc37e48e710a1dbd955c10c13.17.llvm.6582718418885566971+0x60>
   97db2:	48 8b 74 24 30       	mov    rsi,QWORD PTR [rsp+0x30]
   97db7:	4c 8b 74 24 08       	mov    r14,QWORD PTR [rsp+0x8]
   97dbc:	4c 8b 24 24          	mov    r12,QWORD PTR [rsp]
   97dc0:	ff 15 aa fb 04 00    	call   QWORD PTR [rip+0x4fbaa]        # e7970 <_DYNAMIC+0x2b0>
   97dc6:	eb 6c                	jmp    97e34 <future_backtest_sdk::context::StrategyContext::cancel_pending_ids+0x294>
   97dc8:	48 8b 44 24 28       	mov    rax,QWORD PTR [rsp+0x28]
   97dcd:	48 8b 4c 24 10       	mov    rcx,QWORD PTR [rsp+0x10]
   97dd2:	48 89 41 10          	mov    QWORD PTR [rcx+0x10],rax
   97dd6:	0f 10 44 24 18       	movups xmm0,XMMWORD PTR [rsp+0x18]
   97ddb:	0f 11 01             	movups XMMWORD PTR [rcx],xmm0
   97dde:	be 00 40 00 00       	mov    esi,0x4000
   97de3:	ba 01 00 00 00       	mov    edx,0x1
   97de8:	4c 89 ff             	mov    rdi,r15
   97deb:	ff 15 d7 fa 04 00    	call   QWORD PTR [rip+0x4fad7]        # e78c8 <_DYNAMIC+0x208>
   97df1:	4c 8b 24 24          	mov    r12,QWORD PTR [rsp]
   97df5:	41 c6 04 24 00       	mov    BYTE PTR [r12],0x0
   97dfa:	4c 8b 74 24 08       	mov    r14,QWORD PTR [rsp+0x8]
   97dff:	4d 85 f6             	test   r14,r14
   97e02:	75 80                	jne    97d84 <future_backtest_sdk::context::StrategyContext::cancel_pending_ids+0x1e4>
   97e04:	eb 8f                	jmp    97d95 <future_backtest_sdk::context::StrategyContext::cancel_pending_ids+0x1f5>
   97e06:	48 8d 15 03 c5 04 00 	lea    rdx,[rip+0x4c503]        # e4310 <anon.6dca787fc37e48e710a1dbd955c10c13.17.llvm.6582718418885566971+0x140>
   97e0d:	bf 01 00 00 00       	mov    edi,0x1
   97e12:	be 00 40 00 00       	mov    esi,0x4000
   97e17:	ff 15 53 fb 04 00    	call   QWORD PTR [rip+0x4fb53]        # e7970 <_DYNAMIC+0x2b0>
   97e1d:	eb 15                	jmp    97e34 <future_backtest_sdk::context::StrategyContext::cancel_pending_ids+0x294>
   97e1f:	48 8d 15 02 c5 04 00 	lea    rdx,[rip+0x4c502]        # e4328 <anon.6dca787fc37e48e710a1dbd955c10c13.17.llvm.6582718418885566971+0x158>
   97e26:	bf 08 00 00 00       	mov    edi,0x8
   97e2b:	48 89 de             	mov    rsi,rbx
   97e2e:	ff 15 3c fb 04 00    	call   QWORD PTR [rip+0x4fb3c]        # e7970 <_DYNAMIC+0x2b0>
   97e34:	0f 0b                	ud2    
   97e36:	48 89 5c 24 30       	mov    QWORD PTR [rsp+0x30],rbx
   97e3b:	bf 01 00 00 00       	mov    edi,0x1
   97e40:	e9 66 ff ff ff       	jmp    97dab <future_backtest_sdk::context::StrategyContext::cancel_pending_ids+0x20b>
   97e45:	48 89 c3             	mov    rbx,rax
   97e48:	4d 85 ed             	test   r13,r13
   97e4b:	74 2b                	je     97e78 <future_backtest_sdk::context::StrategyContext::cancel_pending_ids+0x2d8>
   97e4d:	ba 01 00 00 00       	mov    edx,0x1
   97e52:	48 8b 7c 24 38       	mov    rdi,QWORD PTR [rsp+0x38]
   97e57:	4c 89 ee             	mov    rsi,r13
   97e5a:	ff 15 68 fa 04 00    	call   QWORD PTR [rip+0x4fa68]        # e78c8 <_DYNAMIC+0x208>
   97e60:	eb 16                	jmp    97e78 <future_backtest_sdk::context::StrategyContext::cancel_pending_ids+0x2d8>
   97e62:	48 89 c3             	mov    rbx,rax
   97e65:	4c 8b 74 24 08       	mov    r14,QWORD PTR [rsp+0x8]
   97e6a:	4c 8b 24 24          	mov    r12,QWORD PTR [rsp]
   97e6e:	eb 20                	jmp    97e90 <future_backtest_sdk::context::StrategyContext::cancel_pending_ids+0x2f0>
   97e70:	48 89 c3             	mov    rbx,rax
   97e73:	eb 2e                	jmp    97ea3 <future_backtest_sdk::context::StrategyContext::cancel_pending_ids+0x303>
   97e75:	48 89 c3             	mov    rbx,rax
   97e78:	4c 8b 74 24 08       	mov    r14,QWORD PTR [rsp+0x8]
   97e7d:	4c 8b 24 24          	mov    r12,QWORD PTR [rsp]
   97e81:	eb 03                	jmp    97e86 <future_backtest_sdk::context::StrategyContext::cancel_pending_ids+0x2e6>
   97e83:	48 89 c3             	mov    rbx,rax
   97e86:	48 8d 7c 24 18       	lea    rdi,[rsp+0x18]
   97e8b:	e8 80 ed ff ff       	call   96c10 <core::ptr::drop_in_place<alloc::vec::Vec<alloc::string::String>>>
   97e90:	be 00 40 00 00       	mov    esi,0x4000
   97e95:	ba 01 00 00 00       	mov    edx,0x1
   97e9a:	4c 89 ff             	mov    rdi,r15
   97e9d:	ff 15 25 fa 04 00    	call   QWORD PTR [rip+0x4fa25]        # e78c8 <_DYNAMIC+0x208>
   97ea3:	41 c6 04 24 00       	mov    BYTE PTR [r12],0x0
   97ea8:	4d 85 f6             	test   r14,r14
   97eab:	74 11                	je     97ebe <future_backtest_sdk::context::StrategyContext::cancel_pending_ids+0x31e>
   97ead:	ba 01 00 00 00       	mov    edx,0x1
   97eb2:	4c 89 e7             	mov    rdi,r12
   97eb5:	4c 89 f6             	mov    rsi,r14
   97eb8:	ff 15 0a fa 04 00    	call   QWORD PTR [rip+0x4fa0a]        # e78c8 <_DYNAMIC+0x208>
   97ebe:	48 89 df             	mov    rdi,rbx
   97ec1:	e8 fa 82 04 00       	call   e01c0 <_Unwind_Resume@plt>
   97ec6:	cc                   	int3   
   97ec7:	cc                   	int3   
   97ec8:	cc                   	int3   
   97ec9:	cc                   	int3   
   97eca:	cc                   	int3   
   97ecb:	cc                   	int3   
   97ecc:	cc                   	int3   
   97ecd:	cc                   	int3   
   97ece:	cc                   	int3   
   97ecf:	cc                   	int3   