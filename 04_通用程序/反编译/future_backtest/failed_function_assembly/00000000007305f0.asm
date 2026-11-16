# future_backtest::Customer::customer::Account::real_position_update
# ELF 00000000007305f0 bytes 4367
  7305f0:	55                   	push   rbp
  7305f1:	41 57                	push   r15
  7305f3:	41 56                	push   r14
  7305f5:	41 55                	push   r13
  7305f7:	41 54                	push   r12
  7305f9:	53                   	push   rbx
  7305fa:	48 81 ec 88 04 00 00 	sub    rsp,0x488
  730601:	66 0f 7f 9c 24 f0 01 	movdqa XMMWORD PTR [rsp+0x1f0],xmm3
  730608:	00 00 
  73060a:	66 0f 7f 94 24 00 01 	movdqa XMMWORD PTR [rsp+0x100],xmm2
  730611:	00 00 
  730613:	66 0f 7f 8c 24 a0 00 	movdqa XMMWORD PTR [rsp+0xa0],xmm1
  73061a:	00 00 
  73061c:	49 89 cc             	mov    r12,rcx
  73061f:	66 0f d6 44 24 58    	movq   QWORD PTR [rsp+0x58],xmm0
  730625:	48 89 94 24 80 01 00 	mov    QWORD PTR [rsp+0x180],rdx
  73062c:	00 
  73062d:	49 89 f7             	mov    r15,rsi
  730630:	48 89 fb             	mov    rbx,rdi
  730633:	48 8d bc 24 18 01 00 	lea    rdi,[rsp+0x118]
  73063a:	00 
  73063b:	48 89 ce             	mov    rsi,rcx
  73063e:	ff 15 44 6f 27 01    	call   QWORD PTR [rip+0x1276f44]        # 19a7588 <_DYNAMIC+0xd88>
  730644:	48 89 9c 24 c8 00 00 	mov    QWORD PTR [rsp+0xc8],rbx
  73064b:	00 
  73064c:	49 83 bf 80 07 00 00 	cmp    QWORD PTR [r15+0x780],0x0
  730653:	00 
  730654:	0f 84 7e 03 00 00    	je     7309d8 <future_backtest::Customer::customer::Account::real_position_update+0x3e8>
  73065a:	49 8d bf 88 07 00 00 	lea    rdi,[r15+0x788]
  730661:	4c 89 e6             	mov    rsi,r12
  730664:	e8 57 37 0d 00       	call   803dc0 <core::hash::BuildHasher::hash_one>
  730669:	49 8d bf 68 07 00 00 	lea    rdi,[r15+0x768]
  730670:	48 89 c1             	mov    rcx,rax
  730673:	48 c1 e9 39          	shr    rcx,0x39
  730677:	4d 8b b7 68 07 00 00 	mov    r14,QWORD PTR [r15+0x768]
  73067e:	4c 89 7c 24 38       	mov    QWORD PTR [rsp+0x38],r15
  730683:	4d 8b 87 70 07 00 00 	mov    r8,QWORD PTR [r15+0x770]
  73068a:	66 0f 6e c1          	movd   xmm0,ecx
  73068e:	66 0f 60 c0          	punpcklbw xmm0,xmm0
  730692:	f2 0f 70 c0 00       	pshuflw xmm0,xmm0,0x0
  730697:	66 0f 70 c8 00       	pshufd xmm1,xmm0,0x0
  73069c:	4d 8d ae 70 fd ff ff 	lea    r13,[r14-0x290]
  7306a3:	49 8b 5c 24 08       	mov    rbx,QWORD PTR [r12+0x8]
  7306a8:	49 8b 6c 24 10       	mov    rbp,QWORD PTR [r12+0x10]
  7306ad:	45 31 c9             	xor    r9d,r9d
  7306b0:	66 0f 76 d2          	pcmpeqd xmm2,xmm2
  7306b4:	4c 21 c0             	and    rax,r8
  7306b7:	f3 41 0f 6f 1c 06    	movdqu xmm3,XMMWORD PTR [r14+rax*1]
  7306bd:	66 0f 6f c3          	movdqa xmm0,xmm3
  7306c1:	66 0f 74 c1          	pcmpeqb xmm0,xmm1
  7306c5:	66 44 0f d7 f8       	pmovmskb r15d,xmm0
  7306ca:	45 85 ff             	test   r15d,r15d
  7306cd:	0f 84 ad 00 00 00    	je     730780 <future_backtest::Customer::customer::Account::real_position_update+0x190>
  7306d3:	48 89 44 24 20       	mov    QWORD PTR [rsp+0x20],rax
  7306d8:	4c 89 64 24 08       	mov    QWORD PTR [rsp+0x8],r12
  7306dd:	48 89 bc 24 f8 00 00 	mov    QWORD PTR [rsp+0xf8],rdi
  7306e4:	00 
  7306e5:	66 0f 7f 8c 24 e0 00 	movdqa XMMWORD PTR [rsp+0xe0],xmm1
  7306ec:	00 00 
  7306ee:	4c 89 44 24 10       	mov    QWORD PTR [rsp+0x10],r8
  7306f3:	4c 89 4c 24 40       	mov    QWORD PTR [rsp+0x40],r9
  7306f8:	66 0f 7f 9c 24 90 00 	movdqa XMMWORD PTR [rsp+0x90],xmm3
  7306ff:	00 00 
  730701:	f3 41 0f bc cf       	tzcnt  ecx,r15d
  730706:	48 01 c1             	add    rcx,rax
  730709:	4c 21 c1             	and    rcx,r8
  73070c:	48 f7 d9             	neg    rcx
  73070f:	4c 69 e1 90 02 00 00 	imul   r12,rcx,0x290
  730716:	4b 3b 6c 25 10       	cmp    rbp,QWORD PTR [r13+r12*1+0x10]
  73071b:	75 18                	jne    730735 <future_backtest::Customer::customer::Account::real_position_update+0x145>
  73071d:	4b 8d 04 2c          	lea    rax,[r12+r13*1]
  730721:	48 8b 70 08          	mov    rsi,QWORD PTR [rax+0x8]
  730725:	48 89 df             	mov    rdi,rbx
  730728:	48 89 ea             	mov    rdx,rbp
  73072b:	ff 15 87 67 27 01    	call   QWORD PTR [rip+0x1276787]        # 19a6eb8 <bcmp@GLIBC_2.2.5>
  730731:	85 c0                	test   eax,eax
  730733:	74 6b                	je     7307a0 <future_backtest::Customer::customer::Account::real_position_update+0x1b0>
  730735:	41 8d 47 ff          	lea    eax,[r15-0x1]
  730739:	66 44 21 f8          	and    ax,r15w
  73073d:	41 89 c7             	mov    r15d,eax
  730740:	48 8b 44 24 20       	mov    rax,QWORD PTR [rsp+0x20]
  730745:	4c 8b 64 24 08       	mov    r12,QWORD PTR [rsp+0x8]
  73074a:	48 8b bc 24 f8 00 00 	mov    rdi,QWORD PTR [rsp+0xf8]
  730751:	00 
  730752:	66 0f 6f 8c 24 e0 00 	movdqa xmm1,XMMWORD PTR [rsp+0xe0]
  730759:	00 00 
  73075b:	4c 8b 44 24 10       	mov    r8,QWORD PTR [rsp+0x10]
  730760:	4c 8b 4c 24 40       	mov    r9,QWORD PTR [rsp+0x40]
  730765:	66 0f 76 d2          	pcmpeqd xmm2,xmm2
  730769:	66 0f 6f 9c 24 90 00 	movdqa xmm3,XMMWORD PTR [rsp+0x90]
  730770:	00 00 
  730772:	75 8d                	jne    730701 <future_backtest::Customer::customer::Account::real_position_update+0x111>
  730774:	66 66 66 2e 0f 1f 84 	data16 data16 cs nop WORD PTR [rax+rax*1+0x0]
  73077b:	00 00 00 00 00 
  730780:	66 0f 74 da          	pcmpeqb xmm3,xmm2
  730784:	66 0f d7 cb          	pmovmskb ecx,xmm3
  730788:	85 c9                	test   ecx,ecx
  73078a:	0f 85 48 02 00 00    	jne    7309d8 <future_backtest::Customer::customer::Account::real_position_update+0x3e8>
  730790:	4c 01 c8             	add    rax,r9
  730793:	48 83 c0 10          	add    rax,0x10
  730797:	49 83 c1 10          	add    r9,0x10
  73079b:	e9 14 ff ff ff       	jmp    7306b4 <future_backtest::Customer::customer::Account::real_position_update+0xc4>
  7307a0:	48 8b 5c 24 38       	mov    rbx,QWORD PTR [rsp+0x38]
  7307a5:	48 83 bb 98 09 00 00 	cmp    QWORD PTR [rbx+0x998],0x0
  7307ac:	00 
  7307ad:	0f 84 31 02 00 00    	je     7309e4 <future_backtest::Customer::customer::Account::real_position_update+0x3f4>
  7307b3:	f2 43 0f 10 44 26 d8 	movsd  xmm0,QWORD PTR [r14+r12*1-0x28]
  7307ba:	0f 29 84 24 e0 00 00 	movaps XMMWORD PTR [rsp+0xe0],xmm0
  7307c1:	00 
  7307c2:	48 8d bb a0 09 00 00 	lea    rdi,[rbx+0x9a0]
  7307c9:	4c 8b 64 24 08       	mov    r12,QWORD PTR [rsp+0x8]
  7307ce:	4c 89 e6             	mov    rsi,r12
  7307d1:	e8 ea 35 0d 00       	call   803dc0 <core::hash::BuildHasher::hash_one>
  7307d6:	49 89 c5             	mov    r13,rax
  7307d9:	48 8d 8b 80 09 00 00 	lea    rcx,[rbx+0x980]
  7307e0:	48 c1 e8 39          	shr    rax,0x39
  7307e4:	4c 8b bb 80 09 00 00 	mov    r15,QWORD PTR [rbx+0x980]
  7307eb:	48 8b b3 88 09 00 00 	mov    rsi,QWORD PTR [rbx+0x988]
  7307f2:	66 0f 6e c0          	movd   xmm0,eax
  7307f6:	66 0f 60 c0          	punpcklbw xmm0,xmm0
  7307fa:	f2 0f 70 c0 00       	pshuflw xmm0,xmm0,0x0
  7307ff:	66 0f 70 c8 00       	pshufd xmm1,xmm0,0x0
  730804:	4d 8d 47 d8          	lea    r8,[r15-0x28]
  730808:	49 8b 5c 24 08       	mov    rbx,QWORD PTR [r12+0x8]
  73080d:	49 8b 6c 24 10       	mov    rbp,QWORD PTR [r12+0x10]
  730812:	45 31 c9             	xor    r9d,r9d
  730815:	66 0f 76 d2          	pcmpeqd xmm2,xmm2
  730819:	49 21 f5             	and    r13,rsi
  73081c:	f3 43 0f 6f 1c 2f    	movdqu xmm3,XMMWORD PTR [r15+r13*1]
  730822:	66 0f 6f c3          	movdqa xmm0,xmm3
  730826:	66 0f 74 c1          	pcmpeqb xmm0,xmm1
  73082a:	66 0f d7 c0          	pmovmskb eax,xmm0
  73082e:	85 c0                	test   eax,eax
  730830:	0f 84 9a 00 00 00    	je     7308d0 <future_backtest::Customer::customer::Account::real_position_update+0x2e0>
  730836:	48 89 8c 24 90 00 00 	mov    QWORD PTR [rsp+0x90],rcx
  73083d:	00 
  73083e:	66 0f 7f 4c 24 10    	movdqa XMMWORD PTR [rsp+0x10],xmm1
  730844:	48 89 74 24 40       	mov    QWORD PTR [rsp+0x40],rsi
  730849:	4c 89 8c 24 d0 00 00 	mov    QWORD PTR [rsp+0xd0],r9
  730850:	00 
  730851:	66 0f 7f 9c 24 b0 00 	movdqa XMMWORD PTR [rsp+0xb0],xmm3
  730858:	00 00 
  73085a:	48 89 44 24 20       	mov    QWORD PTR [rsp+0x20],rax
  73085f:	f3 0f bc c0          	tzcnt  eax,eax
  730863:	4c 01 e8             	add    rax,r13
  730866:	48 21 f0             	and    rax,rsi
  730869:	48 f7 d8             	neg    rax
  73086c:	4c 8d 34 80          	lea    r14,[rax+rax*4]
  730870:	4b 3b 6c f0 10       	cmp    rbp,QWORD PTR [r8+r14*8+0x10]
  730875:	75 1e                	jne    730895 <future_backtest::Customer::customer::Account::real_position_update+0x2a5>
  730877:	4b 8d 04 f0          	lea    rax,[r8+r14*8]
  73087b:	48 8b 70 08          	mov    rsi,QWORD PTR [rax+0x8]
  73087f:	48 89 df             	mov    rdi,rbx
  730882:	4d 89 c4             	mov    r12,r8
  730885:	48 89 ea             	mov    rdx,rbp
  730888:	ff 15 2a 66 27 01    	call   QWORD PTR [rip+0x127662a]        # 19a6eb8 <bcmp@GLIBC_2.2.5>
  73088e:	4d 89 e0             	mov    r8,r12
  730891:	85 c0                	test   eax,eax
  730893:	74 5b                	je     7308f0 <future_backtest::Customer::customer::Account::real_position_update+0x300>
  730895:	48 8b 4c 24 20       	mov    rcx,QWORD PTR [rsp+0x20]
  73089a:	8d 41 ff             	lea    eax,[rcx-0x1]
  73089d:	66 21 c8             	and    ax,cx
  7308a0:	48 8b 8c 24 90 00 00 	mov    rcx,QWORD PTR [rsp+0x90]
  7308a7:	00 
  7308a8:	66 0f 6f 4c 24 10    	movdqa xmm1,XMMWORD PTR [rsp+0x10]
  7308ae:	48 8b 74 24 40       	mov    rsi,QWORD PTR [rsp+0x40]
  7308b3:	4c 8b 8c 24 d0 00 00 	mov    r9,QWORD PTR [rsp+0xd0]
  7308ba:	00 
  7308bb:	66 0f 76 d2          	pcmpeqd xmm2,xmm2
  7308bf:	66 0f 6f 9c 24 b0 00 	movdqa xmm3,XMMWORD PTR [rsp+0xb0]
  7308c6:	00 00 
  7308c8:	75 90                	jne    73085a <future_backtest::Customer::customer::Account::real_position_update+0x26a>
  7308ca:	66 0f 1f 44 00 00    	nop    WORD PTR [rax+rax*1+0x0]
  7308d0:	66 0f 74 da          	pcmpeqb xmm3,xmm2
  7308d4:	66 0f d7 c3          	pmovmskb eax,xmm3
  7308d8:	85 c0                	test   eax,eax
  7308da:	0f 85 04 01 00 00    	jne    7309e4 <future_backtest::Customer::customer::Account::real_position_update+0x3f4>
  7308e0:	4d 01 cd             	add    r13,r9
  7308e3:	49 83 c5 10          	add    r13,0x10
  7308e7:	49 83 c1 10          	add    r9,0x10
  7308eb:	e9 29 ff ff ff       	jmp    730819 <future_backtest::Customer::customer::Account::real_position_update+0x229>
  7308f0:	66 43 0f 10 7c f7 f0 	movupd xmm7,XMMWORD PTR [r15+r14*8-0x10]
  7308f7:	66 0f 28 c7          	movapd xmm0,xmm7
  7308fb:	66 0f 28 9c 24 00 01 	movapd xmm3,XMMWORD PTR [rsp+0x100]
  730902:	00 00 
  730904:	f2 0f 10 c3          	movsd  xmm0,xmm3
  730908:	66 0f ef c9          	pxor   xmm1,xmm1
  73090c:	66 0f c2 c8 03       	cmpunordpd xmm1,xmm0
  730911:	66 0f 54 05 97 85 b2 	andpd  xmm0,XMMWORD PTR [rip+0xffffffffffb28597]        # 258eb0 <anon.9c839d8261a2d9b6655a6b7286b1e655.179.llvm.5528135186037708526+0x10>
  730918:	ff 
  730919:	66 0f 56 05 3f 7a b2 	orpd   xmm0,XMMWORD PTR [rip+0xffffffffffb27a3f]        # 258360 <anon.9e9e544ad4926f811181c12baef12ac8.35.llvm.4094939851438509727+0x230>
  730920:	ff 
  730921:	66 0f 28 d1          	movapd xmm2,xmm1
  730925:	66 0f 55 d0          	andnpd xmm2,xmm0
  730929:	66 0f 54 0d 8f 61 b2 	andpd  xmm1,XMMWORD PTR [rip+0xffffffffffb2618f]        # 256ac0 <anon.609a31ba814f1e4156e50677fc366a7f.902.llvm.5215769359700358943+0x250>
  730930:	ff 
  730931:	66 0f 56 ca          	orpd   xmm1,xmm2
  730935:	66 0f 70 c1 ee       	pshufd xmm0,xmm1,0xee
  73093a:	f2 0f 59 c8          	mulsd  xmm1,xmm0
  73093e:	66 0f 2e 0d da 1d b2 	ucomisd xmm1,QWORD PTR [rip+0xffffffffffb21dda]        # 252720 <anon.baa4d3160c6db26b1acb0467a3a6e91d.552.llvm.14045134056871974489+0x40>
  730945:	ff 
  730946:	66 0f 28 d7          	movapd xmm2,xmm7
  73094a:	66 0f 15 d7          	unpckhpd xmm2,xmm7
  73094e:	66 0f 28 a4 24 a0 00 	movapd xmm4,XMMWORD PTR [rsp+0xa0]
  730955:	00 00 
  730957:	66 0f 28 cc          	movapd xmm1,xmm4
  73095b:	f2 0f 59 cb          	mulsd  xmm1,xmm3
  73095f:	66 0f 29 4c 24 20    	movapd XMMWORD PTR [rsp+0x20],xmm1
  730965:	66 0f 29 94 24 d0 00 	movapd XMMWORD PTR [rsp+0xd0],xmm2
  73096c:	00 00 
  73096e:	66 0f 29 bc 24 a0 01 	movapd XMMWORD PTR [rsp+0x1a0],xmm7
  730975:	00 00 
  730977:	75 02                	jne    73097b <future_backtest::Customer::customer::Account::real_position_update+0x38b>
  730979:	7b 7a                	jnp    7309f5 <future_backtest::Customer::customer::Account::real_position_update+0x405>
  73097b:	f2 0f 58 da          	addsd  xmm3,xmm2
  73097f:	66 0f 57 c9          	xorpd  xmm1,xmm1
  730983:	66 0f 57 c0          	xorpd  xmm0,xmm0
  730987:	66 0f 29 84 24 b0 00 	movapd XMMWORD PTR [rsp+0xb0],xmm0
  73098e:	00 00 
  730990:	66 0f 2e d9          	ucomisd xmm3,xmm1
  730994:	66 0f 29 44 24 40    	movapd XMMWORD PTR [rsp+0x40],xmm0
  73099a:	4c 8b 64 24 08       	mov    r12,QWORD PTR [rsp+0x8]
  73099f:	4c 8b 7c 24 38       	mov    r15,QWORD PTR [rsp+0x38]
  7309a4:	48 8b 9c 24 90 00 00 	mov    rbx,QWORD PTR [rsp+0x90]
  7309ab:	00 
  7309ac:	75 02                	jne    7309b0 <future_backtest::Customer::customer::Account::real_position_update+0x3c0>
  7309ae:	7b 1d                	jnp    7309cd <future_backtest::Customer::customer::Account::real_position_update+0x3dd>
  7309b0:	66 0f 28 84 24 a0 01 	movapd xmm0,XMMWORD PTR [rsp+0x1a0]
  7309b7:	00 00 
  7309b9:	f2 0f 59 c2          	mulsd  xmm0,xmm2
  7309bd:	f2 0f 58 44 24 20    	addsd  xmm0,QWORD PTR [rsp+0x20]
  7309c3:	f2 0f 5e c3          	divsd  xmm0,xmm3
  7309c7:	66 0f 29 44 24 40    	movapd XMMWORD PTR [rsp+0x40],xmm0
  7309cd:	66 0f 29 5c 24 10    	movapd XMMWORD PTR [rsp+0x10],xmm3
  7309d3:	e9 8b 00 00 00       	jmp    730a63 <future_backtest::Customer::customer::Account::real_position_update+0x473>
  7309d8:	48 8d 3d 39 15 1b 01 	lea    rdi,[rip+0x11b1539]        # 18e1f18 <anon.d0b8e27bea7bf57269a32e15b6abf5cf.309.llvm.1643563994444475245+0x128>
  7309df:	e9 dc 02 00 00       	jmp    730cc0 <future_backtest::Customer::customer::Account::real_position_update+0x6d0>
  7309e4:	4c 8b 64 24 08       	mov    r12,QWORD PTR [rsp+0x8]
  7309e9:	48 8d 3d 40 15 1b 01 	lea    rdi,[rip+0x11b1540]        # 18e1f30 <anon.d0b8e27bea7bf57269a32e15b6abf5cf.309.llvm.1643563994444475245+0x140>
  7309f0:	e9 cb 02 00 00       	jmp    730cc0 <future_backtest::Customer::customer::Account::real_position_update+0x6d0>
  7309f5:	66 0f 28 f3          	movapd xmm6,xmm3
  7309f9:	66 0f 28 0d 4f 3d b2 	movapd xmm1,XMMWORD PTR [rip+0xffffffffffb23d4f]        # 254750 <anon.1d60bbc5b7a6ca0614a4221d8538e6d9.2.llvm.10718084555993993690+0x30>
  730a00:	ff 
  730a01:	66 0f 28 ea          	movapd xmm5,xmm2
  730a05:	66 0f 54 e9          	andpd  xmm5,xmm1
  730a09:	66 0f 54 cb          	andpd  xmm1,xmm3
  730a0d:	66 0f 2e e9          	ucomisd xmm5,xmm1
  730a11:	f2 0f 58 f2          	addsd  xmm6,xmm2
  730a15:	66 0f 29 74 24 10    	movapd XMMWORD PTR [rsp+0x10],xmm6
  730a1b:	66 0f 28 d4          	movapd xmm2,xmm4
  730a1f:	f2 0f 5c d7          	subsd  xmm2,xmm7
  730a23:	f2 0f 59 d0          	mulsd  xmm2,xmm0
  730a27:	4c 8b 64 24 08       	mov    r12,QWORD PTR [rsp+0x8]
  730a2c:	4c 8b 7c 24 38       	mov    r15,QWORD PTR [rsp+0x38]
  730a31:	48 8b 9c 24 90 00 00 	mov    rbx,QWORD PTR [rsp+0x90]
  730a38:	00 
  730a39:	76 15                	jbe    730a50 <future_backtest::Customer::customer::Account::real_position_update+0x460>
  730a3b:	f2 0f 59 ca          	mulsd  xmm1,xmm2
  730a3f:	66 0f 29 8c 24 b0 00 	movapd XMMWORD PTR [rsp+0xb0],xmm1
  730a46:	00 00 
  730a48:	66 0f 29 7c 24 40    	movapd XMMWORD PTR [rsp+0x40],xmm7
  730a4e:	eb 13                	jmp    730a63 <future_backtest::Customer::customer::Account::real_position_update+0x473>
  730a50:	f2 0f 59 ea          	mulsd  xmm5,xmm2
  730a54:	66 0f 29 ac 24 b0 00 	movapd XMMWORD PTR [rsp+0xb0],xmm5
  730a5b:	00 00 
  730a5d:	66 0f 29 64 24 40    	movapd XMMWORD PTR [rsp+0x40],xmm4
  730a63:	48 8d 15 de 14 1b 01 	lea    rdx,[rip+0x11b14de]        # 18e1f48 <anon.d0b8e27bea7bf57269a32e15b6abf5cf.309.llvm.1643563994444475245+0x158>
  730a6a:	48 8d 7c 24 60       	lea    rdi,[rsp+0x60]
  730a6f:	4c 89 e6             	mov    rsi,r12
  730a72:	ff 15 08 62 27 01    	call   QWORD PTR [rip+0x1276208]        # 19a6c80 <_DYNAMIC+0x480>
  730a78:	48 8d bc 24 30 01 00 	lea    rdi,[rsp+0x130]
  730a7f:	00 
  730a80:	48 8d 54 24 60       	lea    rdx,[rsp+0x60]
  730a85:	48 89 de             	mov    rsi,rbx
  730a88:	0f 28 44 24 40       	movaps xmm0,XMMWORD PTR [rsp+0x40]
  730a8d:	0f 28 4c 24 10       	movaps xmm1,XMMWORD PTR [rsp+0x10]
  730a92:	e8 89 cc 2e 00       	call   a1d720 <hashbrown::map::HashMap<K,V,S,A>::insert>
  730a97:	66 0f 28 15 b1 3c b2 	movapd xmm2,XMMWORD PTR [rip+0xffffffffffb23cb1]        # 254750 <anon.1d60bbc5b7a6ca0614a4221d8538e6d9.2.llvm.10718084555993993690+0x30>
  730a9e:	ff 
  730a9f:	f2 0f 10 0d 91 23 b2 	movsd  xmm1,QWORD PTR [rip+0xffffffffffb22391]        # 252e38 <anon.baa4d3160c6db26b1acb0467a3a6e91d.2061.llvm.14045134056871974489+0x30>
  730aa6:	ff 
  730aa7:	66 0f 28 84 24 00 01 	movapd xmm0,XMMWORD PTR [rsp+0x100]
  730aae:	00 00 
  730ab0:	66 0f 54 c2          	andpd  xmm0,xmm2
  730ab4:	66 0f 29 84 24 90 00 	movapd XMMWORD PTR [rsp+0x90],xmm0
  730abb:	00 00 
  730abd:	66 0f 2e c1          	ucomisd xmm0,xmm1
  730ac1:	0f 86 0e 03 00 00    	jbe    730dd5 <future_backtest::Customer::customer::Account::real_position_update+0x7e5>
  730ac7:	49 83 bf c8 09 00 00 	cmp    QWORD PTR [r15+0x9c8],0x0
  730ace:	00 
  730acf:	0f 84 e4 01 00 00    	je     730cb9 <future_backtest::Customer::customer::Account::real_position_update+0x6c9>
  730ad5:	49 8d bf d0 09 00 00 	lea    rdi,[r15+0x9d0]
  730adc:	4c 89 e6             	mov    rsi,r12
  730adf:	e8 dc 32 0d 00       	call   803dc0 <core::hash::BuildHasher::hash_one>
  730ae4:	48 89 c1             	mov    rcx,rax
  730ae7:	48 c1 e9 39          	shr    rcx,0x39
  730aeb:	4d 8b af b0 09 00 00 	mov    r13,QWORD PTR [r15+0x9b0]
  730af2:	49 8b b7 b8 09 00 00 	mov    rsi,QWORD PTR [r15+0x9b8]
  730af9:	66 0f 6e c1          	movd   xmm0,ecx
  730afd:	66 0f 60 c0          	punpcklbw xmm0,xmm0
  730b01:	f2 0f 70 c0 00       	pshuflw xmm0,xmm0,0x0
  730b06:	66 0f 70 c8 00       	pshufd xmm1,xmm0,0x0
  730b0b:	4d 8d 45 98          	lea    r8,[r13-0x68]
  730b0f:	49 8b 6c 24 08       	mov    rbp,QWORD PTR [r12+0x8]
  730b14:	49 8b 5c 24 10       	mov    rbx,QWORD PTR [r12+0x10]
  730b19:	31 ff                	xor    edi,edi
  730b1b:	66 0f 76 d2          	pcmpeqd xmm2,xmm2
  730b1f:	48 21 f0             	and    rax,rsi
  730b22:	f3 41 0f 6f 5c 05 00 	movdqu xmm3,XMMWORD PTR [r13+rax*1+0x0]
  730b29:	66 0f 6f c3          	movdqa xmm0,xmm3
  730b2d:	66 0f 74 c1          	pcmpeqb xmm0,xmm1
  730b31:	66 44 0f d7 f8       	pmovmskb r15d,xmm0
  730b36:	45 85 ff             	test   r15d,r15d
  730b39:	0f 84 9c 00 00 00    	je     730bdb <future_backtest::Customer::customer::Account::real_position_update+0x5eb>
  730b3f:	48 89 84 24 78 01 00 	mov    QWORD PTR [rsp+0x178],rax
  730b46:	00 
  730b47:	66 0f 7f 8c 24 e0 01 	movdqa XMMWORD PTR [rsp+0x1e0],xmm1
  730b4e:	00 00 
  730b50:	48 89 b4 24 70 01 00 	mov    QWORD PTR [rsp+0x170],rsi
  730b57:	00 
  730b58:	48 89 bc 24 68 01 00 	mov    QWORD PTR [rsp+0x168],rdi
  730b5f:	00 
  730b60:	66 0f 7f 9c 24 d0 01 	movdqa XMMWORD PTR [rsp+0x1d0],xmm3
  730b67:	00 00 
  730b69:	f3 41 0f bc cf       	tzcnt  ecx,r15d
  730b6e:	48 01 c1             	add    rcx,rax
  730b71:	48 21 f1             	and    rcx,rsi
  730b74:	48 f7 d9             	neg    rcx
  730b77:	4c 6b f1 68          	imul   r14,rcx,0x68
  730b7b:	4b 3b 5c 30 10       	cmp    rbx,QWORD PTR [r8+r14*1+0x10]
  730b80:	75 1e                	jne    730ba0 <future_backtest::Customer::customer::Account::real_position_update+0x5b0>
  730b82:	4b 8d 04 30          	lea    rax,[r8+r14*1]
  730b86:	48 8b 70 08          	mov    rsi,QWORD PTR [rax+0x8]
  730b8a:	48 89 ef             	mov    rdi,rbp
  730b8d:	4d 89 c4             	mov    r12,r8
  730b90:	48 89 da             	mov    rdx,rbx
  730b93:	ff 15 1f 63 27 01    	call   QWORD PTR [rip+0x127631f]        # 19a6eb8 <bcmp@GLIBC_2.2.5>
  730b99:	4d 89 e0             	mov    r8,r12
  730b9c:	85 c0                	test   eax,eax
  730b9e:	74 5b                	je     730bfb <future_backtest::Customer::customer::Account::real_position_update+0x60b>
  730ba0:	41 8d 47 ff          	lea    eax,[r15-0x1]
  730ba4:	66 44 21 f8          	and    ax,r15w
  730ba8:	41 89 c7             	mov    r15d,eax
  730bab:	48 8b 84 24 78 01 00 	mov    rax,QWORD PTR [rsp+0x178]
  730bb2:	00 
  730bb3:	66 0f 6f 8c 24 e0 01 	movdqa xmm1,XMMWORD PTR [rsp+0x1e0]
  730bba:	00 00 
  730bbc:	48 8b b4 24 70 01 00 	mov    rsi,QWORD PTR [rsp+0x170]
  730bc3:	00 
  730bc4:	48 8b bc 24 68 01 00 	mov    rdi,QWORD PTR [rsp+0x168]
  730bcb:	00 
  730bcc:	66 0f 76 d2          	pcmpeqd xmm2,xmm2
  730bd0:	66 0f 6f 9c 24 d0 01 	movdqa xmm3,XMMWORD PTR [rsp+0x1d0]
  730bd7:	00 00 
  730bd9:	75 8e                	jne    730b69 <future_backtest::Customer::customer::Account::real_position_update+0x579>
  730bdb:	66 0f 74 da          	pcmpeqb xmm3,xmm2
  730bdf:	66 0f d7 cb          	pmovmskb ecx,xmm3
  730be3:	85 c9                	test   ecx,ecx
  730be5:	0f 85 c9 00 00 00    	jne    730cb4 <future_backtest::Customer::customer::Account::real_position_update+0x6c4>
  730beb:	48 01 f8             	add    rax,rdi
  730bee:	48 83 c0 10          	add    rax,0x10
  730bf2:	48 83 c7 10          	add    rdi,0x10
  730bf6:	e9 24 ff ff ff       	jmp    730b1f <future_backtest::Customer::customer::Account::real_position_update+0x52f>
  730bfb:	4b 8d 04 2e          	lea    rax,[r14+r13*1]
  730bff:	66 0f ef c0          	pxor   xmm0,xmm0
  730c03:	66 0f ef c9          	pxor   xmm1,xmm1
  730c07:	66 0f 28 6c 24 10    	movapd xmm5,XMMWORD PTR [rsp+0x10]
  730c0d:	66 0f c2 cd 02       	cmplepd xmm1,xmm5
  730c12:	f2 0f 10 15 1e 22 b2 	movsd  xmm2,QWORD PTR [rip+0xffffffffffb2221e]        # 252e38 <anon.baa4d3160c6db26b1acb0467a3a6e91d.2061.llvm.14045134056871974489+0x30>
  730c19:	ff 
  730c1a:	66 0f 28 a4 24 d0 00 	movapd xmm4,XMMWORD PTR [rsp+0xd0]
  730c21:	00 00 
  730c23:	66 0f 28 dc          	movapd xmm3,xmm4
  730c27:	66 0f c2 da 01       	cmpltpd xmm3,xmm2
  730c2c:	66 0f 54 d9          	andpd  xmm3,xmm1
  730c30:	66 0f 7e d9          	movd   ecx,xmm3
  730c34:	f6 c1 01             	test   cl,0x1
  730c37:	0f 85 8e 00 00 00    	jne    730ccb <future_backtest::Customer::customer::Account::real_position_update+0x6db>
  730c3d:	66 0f 28 cd          	movapd xmm1,xmm5
  730c41:	66 0f c2 c8 02       	cmplepd xmm1,xmm0
  730c46:	f2 0f 10 15 da 36 b2 	movsd  xmm2,QWORD PTR [rip+0xffffffffffb236da]        # 254328 <anon.baa4d3160c6db26b1acb0467a3a6e91d.693.llvm.14045134056871974489+0x50>
  730c4d:	ff 
  730c4e:	66 0f c2 d4 01       	cmpltpd xmm2,xmm4
  730c53:	66 0f 54 d1          	andpd  xmm2,xmm1
  730c57:	66 0f 7e d1          	movd   ecx,xmm2
  730c5b:	f6 c1 01             	test   cl,0x1
  730c5e:	75 6b                	jne    730ccb <future_backtest::Customer::customer::Account::real_position_update+0x6db>
  730c60:	66 0f 2e 25 d0 21 b2 	ucomisd xmm4,QWORD PTR [rip+0xffffffffffb221d0]        # 252e38 <anon.baa4d3160c6db26b1acb0467a3a6e91d.2061.llvm.14045134056871974489+0x30>
  730c67:	ff 
  730c68:	4c 8b 64 24 08       	mov    r12,QWORD PTR [rsp+0x8]
  730c6d:	4c 8b 7c 24 38       	mov    r15,QWORD PTR [rsp+0x38]
  730c72:	0f 86 bc 00 00 00    	jbe    730d34 <future_backtest::Customer::customer::Account::real_position_update+0x744>
  730c78:	f2 0f 10 05 b8 21 b2 	movsd  xmm0,QWORD PTR [rip+0xffffffffffb221b8]        # 252e38 <anon.baa4d3160c6db26b1acb0467a3a6e91d.2061.llvm.14045134056871974489+0x30>
  730c7f:	ff 
  730c80:	f2 0f 58 c4          	addsd  xmm0,xmm4
  730c84:	66 0f 28 4c 24 10    	movapd xmm1,XMMWORD PTR [rsp+0x10]
  730c8a:	66 0f 2e c8          	ucomisd xmm1,xmm0
  730c8e:	48 8d 54 24 60       	lea    rdx,[rsp+0x60]
  730c93:	0f 87 ce 00 00 00    	ja     730d67 <future_backtest::Customer::customer::Account::real_position_update+0x777>
  730c99:	f2 0f 10 05 87 36 b2 	movsd  xmm0,QWORD PTR [rip+0xffffffffffb23687]        # 254328 <anon.baa4d3160c6db26b1acb0467a3a6e91d.693.llvm.14045134056871974489+0x50>
  730ca0:	ff 
  730ca1:	f2 0f 58 c4          	addsd  xmm0,xmm4
  730ca5:	66 0f 2e c1          	ucomisd xmm0,xmm1
  730ca9:	0f 87 35 07 00 00    	ja     7313e4 <future_backtest::Customer::customer::Account::real_position_update+0xdf4>
  730caf:	e9 82 07 00 00       	jmp    731436 <future_backtest::Customer::customer::Account::real_position_update+0xe46>
  730cb4:	4c 8b 64 24 08       	mov    r12,QWORD PTR [rsp+0x8]
  730cb9:	48 8d 3d a0 12 1b 01 	lea    rdi,[rip+0x11b12a0]        # 18e1f60 <anon.d0b8e27bea7bf57269a32e15b6abf5cf.309.llvm.1643563994444475245+0x170>
  730cc0:	ff 15 e2 62 27 01    	call   QWORD PTR [rip+0x12762e2]        # 19a6fa8 <_DYNAMIC+0x7a8>
  730cc6:	e9 84 09 00 00       	jmp    73164f <future_backtest::Customer::customer::Account::real_position_update+0x105f>
  730ccb:	66 0f 2e e8          	ucomisd xmm5,xmm0
  730ccf:	4c 8b 64 24 08       	mov    r12,QWORD PTR [rsp+0x8]
  730cd4:	4c 8b 7c 24 38       	mov    r15,QWORD PTR [rsp+0x38]
  730cd9:	0f 85 a3 00 00 00    	jne    730d82 <future_backtest::Customer::customer::Account::real_position_update+0x792>
  730cdf:	0f 8a 9d 00 00 00    	jp     730d82 <future_backtest::Customer::customer::Account::real_position_update+0x792>
  730ce5:	4b 8d 0c 2e          	lea    rcx,[r14+r13*1]
  730ce9:	48 83 c1 b0          	add    rcx,0xffffffffffffffb0
  730ced:	66 0f 57 c0          	xorpd  xmm0,xmm0
  730cf1:	66 0f 11 41 20       	movupd XMMWORD PTR [rcx+0x20],xmm0
  730cf6:	66 0f 11 41 10       	movupd XMMWORD PTR [rcx+0x10],xmm0
  730cfb:	66 0f 11 01          	movupd XMMWORD PTR [rcx],xmm0
  730cff:	48 c7 41 30 00 00 00 	mov    QWORD PTR [rcx+0x30],0x0
  730d06:	00 
  730d07:	f2 0f 10 4c 24 58    	movsd  xmm1,QWORD PTR [rsp+0x58]
  730d0d:	f2 0f 11 48 c8       	movsd  QWORD PTR [rax-0x38],xmm1
  730d12:	66 0f 28 84 24 a0 00 	movapd xmm0,XMMWORD PTR [rsp+0xa0]
  730d19:	00 00 
  730d1b:	f2 0f 11 40 f0       	movsd  QWORD PTR [rax-0x10],xmm0
  730d20:	f2 0f 11 48 d0       	movsd  QWORD PTR [rax-0x30],xmm1
  730d25:	f2 0f 11 48 c0       	movsd  QWORD PTR [rax-0x40],xmm1
  730d2a:	f2 0f 11 40 f8       	movsd  QWORD PTR [rax-0x8],xmm0
  730d2f:	e9 94 00 00 00       	jmp    730dc8 <future_backtest::Customer::customer::Account::real_position_update+0x7d8>
  730d34:	f2 0f 10 05 ec 35 b2 	movsd  xmm0,QWORD PTR [rip+0xffffffffffb235ec]        # 254328 <anon.baa4d3160c6db26b1acb0467a3a6e91d.693.llvm.14045134056871974489+0x50>
  730d3b:	ff 
  730d3c:	66 0f 2e c4          	ucomisd xmm0,xmm4
  730d40:	48 8d 54 24 60       	lea    rdx,[rsp+0x60]
  730d45:	0f 86 eb 06 00 00    	jbe    731436 <future_backtest::Customer::customer::Account::real_position_update+0xe46>
  730d4b:	f2 0f 10 05 d5 35 b2 	movsd  xmm0,QWORD PTR [rip+0xffffffffffb235d5]        # 254328 <anon.baa4d3160c6db26b1acb0467a3a6e91d.693.llvm.14045134056871974489+0x50>
  730d52:	ff 
  730d53:	f2 0f 58 c4          	addsd  xmm0,xmm4
  730d57:	66 0f 28 4c 24 10    	movapd xmm1,XMMWORD PTR [rsp+0x10]
  730d5d:	66 0f 2e c1          	ucomisd xmm0,xmm1
  730d61:	0f 86 6b 06 00 00    	jbe    7313d2 <future_backtest::Customer::customer::Account::real_position_update+0xde2>
  730d67:	f2 0f 10 44 24 58    	movsd  xmm0,QWORD PTR [rsp+0x58]
  730d6d:	f2 0f 11 40 b8       	movsd  QWORD PTR [rax-0x48],xmm0
  730d72:	f2 0f 11 40 c0       	movsd  QWORD PTR [rax-0x40],xmm0
  730d77:	66 0f 28 84 24 a0 00 	movapd xmm0,XMMWORD PTR [rsp+0xa0]
  730d7e:	00 00 
  730d80:	eb 41                	jmp    730dc3 <future_backtest::Customer::customer::Account::real_position_update+0x7d3>
  730d82:	48 8d 48 c8          	lea    rcx,[rax-0x38]
  730d86:	66 0f 57 c0          	xorpd  xmm0,xmm0
  730d8a:	66 0f 11 41 20       	movupd XMMWORD PTR [rcx+0x20],xmm0
  730d8f:	66 0f 11 41 10       	movupd XMMWORD PTR [rcx+0x10],xmm0
  730d94:	66 0f 11 01          	movupd XMMWORD PTR [rcx],xmm0
  730d98:	48 c7 41 30 00 00 00 	mov    QWORD PTR [rcx+0x30],0x0
  730d9f:	00 
  730da0:	f2 0f 10 44 24 58    	movsd  xmm0,QWORD PTR [rsp+0x58]
  730da6:	f2 0f 11 40 b0       	movsd  QWORD PTR [rax-0x50],xmm0
  730dab:	f2 0f 11 40 b8       	movsd  QWORD PTR [rax-0x48],xmm0
  730db0:	f2 0f 11 40 c0       	movsd  QWORD PTR [rax-0x40],xmm0
  730db5:	66 0f 28 84 24 a0 00 	movapd xmm0,XMMWORD PTR [rsp+0xa0]
  730dbc:	00 00 
  730dbe:	f2 0f 11 40 d8       	movsd  QWORD PTR [rax-0x28],xmm0
  730dc3:	f2 0f 11 40 e0       	movsd  QWORD PTR [rax-0x20],xmm0
  730dc8:	f2 0f 11 40 e8       	movsd  QWORD PTR [rax-0x18],xmm0
  730dcd:	66 0f 28 15 7b 39 b2 	movapd xmm2,XMMWORD PTR [rip+0xffffffffffb2397b]        # 254750 <anon.1d60bbc5b7a6ca0614a4221d8538e6d9.2.llvm.10718084555993993690+0x30>
  730dd4:	ff 
  730dd5:	66 0f 28 4c 24 20    	movapd xmm1,XMMWORD PTR [rsp+0x20]
  730ddb:	f2 0f 59 8c 24 e0 00 	mulsd  xmm1,QWORD PTR [rsp+0xe0]
  730de2:	00 00 
  730de4:	66 0f 54 ca          	andpd  xmm1,xmm2
  730de8:	f2 41 0f 10 87 78 08 	movsd  xmm0,QWORD PTR [r15+0x878]
  730def:	00 00 
  730df1:	66 0f 29 4c 24 20    	movapd XMMWORD PTR [rsp+0x20],xmm1
  730df7:	f2 0f 58 c1          	addsd  xmm0,xmm1
  730dfb:	f2 41 0f 11 87 78 08 	movsd  QWORD PTR [r15+0x878],xmm0
  730e02:	00 00 
  730e04:	48 8b 84 24 28 01 00 	mov    rax,QWORD PTR [rsp+0x128]
  730e0b:	00 
  730e0c:	48 89 84 24 40 01 00 	mov    QWORD PTR [rsp+0x140],rax
  730e13:	00 
  730e14:	f3 0f 6f 84 24 18 01 	movdqu xmm0,XMMWORD PTR [rsp+0x118]
  730e1b:	00 00 
  730e1d:	66 0f 7f 84 24 30 01 	movdqa XMMWORD PTR [rsp+0x130],xmm0
  730e24:	00 00 
  730e26:	49 8d b7 98 07 00 00 	lea    rsi,[r15+0x798]
  730e2d:	48 8d 7c 24 60       	lea    rdi,[rsp+0x60]
  730e32:	48 8d 94 24 30 01 00 	lea    rdx,[rsp+0x130]
  730e39:	00 
  730e3a:	e8 11 9f 2e 00       	call   a1ad50 <hashbrown::rustc_entry::<impl hashbrown::map::HashMap<K,V,S,A>>::rustc_entry>
  730e3f:	48 8b 54 24 60       	mov    rdx,QWORD PTR [rsp+0x60]
  730e44:	48 8b 44 24 68       	mov    rax,QWORD PTR [rsp+0x68]
  730e49:	48 89 d1             	mov    rcx,rdx
  730e4c:	48 f7 d9             	neg    rcx
  730e4f:	0f 80 b3 00 00 00    	jo     730f08 <future_backtest::Customer::customer::Account::real_position_update+0x918>
  730e55:	48 8b 4c 24 78       	mov    rcx,QWORD PTR [rsp+0x78]
  730e5a:	48 8b bc 24 80 00 00 	mov    rdi,QWORD PTR [rsp+0x80]
  730e61:	00 
  730e62:	48 8b 31             	mov    rsi,QWORD PTR [rcx]
  730e65:	4c 8b 41 08          	mov    r8,QWORD PTR [rcx+0x8]
  730e69:	4d 89 c2             	mov    r10,r8
  730e6c:	49 21 fa             	and    r10,rdi
  730e6f:	f3 42 0f 6f 04 16    	movdqu xmm0,XMMWORD PTR [rsi+r10*1]
  730e75:	66 44 0f d7 d8       	pmovmskb r11d,xmm0
  730e7a:	45 85 db             	test   r11d,r11d
  730e7d:	0f 84 42 07 00 00    	je     7315c5 <future_backtest::Customer::customer::Account::real_position_update+0xfd5>
  730e83:	4c 8b 4c 24 70       	mov    r9,QWORD PTR [rsp+0x70]
  730e88:	f3 45 0f bc db       	tzcnt  r11d,r11d
  730e8d:	4d 01 d3             	add    r11,r10
  730e90:	4d 21 c3             	and    r11,r8
  730e93:	46 0f b6 14 1e       	movzx  r10d,BYTE PTR [rsi+r11*1]
  730e98:	45 84 d2             	test   r10b,r10b
  730e9b:	0f 89 6f 07 00 00    	jns    731610 <future_backtest::Customer::customer::Account::real_position_update+0x1020>
  730ea1:	48 c1 ef 39          	shr    rdi,0x39
  730ea5:	49 8d 5b f0          	lea    rbx,[r11-0x10]
  730ea9:	4c 21 c3             	and    rbx,r8
  730eac:	42 88 3c 1e          	mov    BYTE PTR [rsi+r11*1],dil
  730eb0:	40 88 7c 1e 10       	mov    BYTE PTR [rsi+rbx*1+0x10],dil
  730eb5:	49 f7 db             	neg    r11
  730eb8:	41 80 e2 01          	and    r10b,0x1
  730ebc:	41 0f b6 fa          	movzx  edi,r10b
  730ec0:	48 29 79 10          	sub    QWORD PTR [rcx+0x10],rdi
  730ec4:	4b 8d 3c 5b          	lea    rdi,[r11+r11*2]
  730ec8:	48 c1 e7 05          	shl    rdi,0x5
  730ecc:	48 89 54 3e a0       	mov    QWORD PTR [rsi+rdi*1-0x60],rdx
  730ed1:	48 89 44 3e a8       	mov    QWORD PTR [rsi+rdi*1-0x58],rax
  730ed6:	48 8d 04 3e          	lea    rax,[rsi+rdi*1]
  730eda:	4c 89 4c 3e b0       	mov    QWORD PTR [rsi+rdi*1-0x50],r9
  730edf:	66 0f ef c0          	pxor   xmm0,xmm0
  730ee3:	f3 0f 7f 44 3e b8    	movdqu XMMWORD PTR [rsi+rdi*1-0x48],xmm0
  730ee9:	f3 0f 7f 44 3e c8    	movdqu XMMWORD PTR [rsi+rdi*1-0x38],xmm0
  730eef:	f3 0f 7f 44 3e d8    	movdqu XMMWORD PTR [rsi+rdi*1-0x28],xmm0
  730ef5:	f3 0f 7f 44 3e e8    	movdqu XMMWORD PTR [rsi+rdi*1-0x18],xmm0
  730efb:	48 c7 44 3e f8 00 00 	mov    QWORD PTR [rsi+rdi*1-0x8],0x0
  730f02:	00 00 
  730f04:	48 ff 41 18          	inc    QWORD PTR [rcx+0x18]
  730f08:	f2 0f 10 40 b8       	movsd  xmm0,QWORD PTR [rax-0x48]
  730f0d:	f2 0f 58 44 24 20    	addsd  xmm0,QWORD PTR [rsp+0x20]
  730f13:	f2 0f 11 40 b8       	movsd  QWORD PTR [rax-0x48],xmm0
  730f18:	48 8d 15 89 10 1b 01 	lea    rdx,[rip+0x11b1089]        # 18e1fa8 <anon.d0b8e27bea7bf57269a32e15b6abf5cf.309.llvm.1643563994444475245+0x1b8>
  730f1f:	48 8d bc 24 30 01 00 	lea    rdi,[rsp+0x130]
  730f26:	00 
  730f27:	4c 89 e6             	mov    rsi,r12
  730f2a:	ff 15 50 5d 27 01    	call   QWORD PTR [rip+0x1275d50]        # 19a6c80 <_DYNAMIC+0x480>
  730f30:	48 8d 7c 24 60       	lea    rdi,[rsp+0x60]
  730f35:	48 8d 94 24 30 01 00 	lea    rdx,[rsp+0x130]
  730f3c:	00 
  730f3d:	48 8b b4 24 f8 00 00 	mov    rsi,QWORD PTR [rsp+0xf8]
  730f44:	00 
  730f45:	e8 46 8a 2e 00       	call   a19990 <hashbrown::rustc_entry::<impl hashbrown::map::HashMap<K,V,S,A>>::rustc_entry>
  730f4a:	48 ba 00 00 00 00 00 	movabs rdx,0x8000000000000000
  730f51:	00 00 80 
  730f54:	48 8b 44 24 60       	mov    rax,QWORD PTR [rsp+0x60]
  730f59:	4c 8b 64 24 68       	mov    r12,QWORD PTR [rsp+0x68]
  730f5e:	f3 0f 6f 44 24 68    	movdqu xmm0,XMMWORD PTR [rsp+0x68]
  730f64:	4c 8b 74 24 78       	mov    r14,QWORD PTR [rsp+0x78]
  730f69:	48 8b 8c 24 80 00 00 	mov    rcx,QWORD PTR [rsp+0x80]
  730f70:	00 
  730f71:	66 0f 57 c9          	xorpd  xmm1,xmm1
  730f75:	66 0f 11 8c 24 a8 03 	movupd XMMWORD PTR [rsp+0x3a8],xmm1
  730f7c:	00 00 
  730f7e:	66 0f 11 8c 24 b8 03 	movupd XMMWORD PTR [rsp+0x3b8],xmm1
  730f85:	00 00 
  730f87:	66 0f 11 8c 24 c8 03 	movupd XMMWORD PTR [rsp+0x3c8],xmm1
  730f8e:	00 00 
  730f90:	66 0f 11 8c 24 d8 03 	movupd XMMWORD PTR [rsp+0x3d8],xmm1
  730f97:	00 00 
  730f99:	48 c7 84 24 e8 03 00 	mov    QWORD PTR [rsp+0x3e8],0x0
  730fa0:	00 00 00 00 00 
  730fa5:	66 0f 11 8c 24 70 03 	movupd XMMWORD PTR [rsp+0x370],xmm1
  730fac:	00 00 
  730fae:	48 c7 84 24 80 03 00 	mov    QWORD PTR [rsp+0x380],0x0
  730fb5:	00 00 00 00 00 
  730fba:	66 0f 11 4c 24 68    	movupd XMMWORD PTR [rsp+0x68],xmm1
  730fc0:	48 c7 44 24 78 00 00 	mov    QWORD PTR [rsp+0x78],0x0
  730fc7:	00 00 
  730fc9:	48 c7 84 24 10 02 00 	mov    QWORD PTR [rsp+0x210],0x0
  730fd0:	00 00 00 00 00 
  730fd5:	48 c7 84 24 20 02 00 	mov    QWORD PTR [rsp+0x220],0x0
  730fdc:	00 00 00 00 00 
  730fe1:	48 c7 84 24 30 02 00 	mov    QWORD PTR [rsp+0x230],0x0
  730fe8:	00 00 00 00 00 
  730fed:	48 c7 84 24 40 02 00 	mov    QWORD PTR [rsp+0x240],0x0
  730ff4:	00 00 00 00 00 
  730ff9:	48 c7 84 24 50 02 00 	mov    QWORD PTR [rsp+0x250],0x0
  731000:	00 00 00 00 00 
  731005:	48 c7 84 24 60 02 00 	mov    QWORD PTR [rsp+0x260],0x0
  73100c:	00 00 00 00 00 
  731011:	48 c7 84 24 70 02 00 	mov    QWORD PTR [rsp+0x270],0x0
  731018:	00 00 00 00 00 
  73101d:	48 c7 84 24 80 02 00 	mov    QWORD PTR [rsp+0x280],0x0
  731024:	00 00 00 00 00 
  731029:	48 c7 84 24 90 02 00 	mov    QWORD PTR [rsp+0x290],0x0
  731030:	00 00 00 00 00 
  731035:	48 c7 84 24 a0 02 00 	mov    QWORD PTR [rsp+0x2a0],0x0
  73103c:	00 00 00 00 00 
  731041:	48 c7 84 24 b0 02 00 	mov    QWORD PTR [rsp+0x2b0],0x0
  731048:	00 00 00 00 00 
  73104d:	48 c7 84 24 c0 02 00 	mov    QWORD PTR [rsp+0x2c0],0x0
  731054:	00 00 00 00 00 
  731059:	48 c7 84 24 d0 02 00 	mov    QWORD PTR [rsp+0x2d0],0x0
  731060:	00 00 00 00 00 
  731065:	66 0f 11 8c 24 f0 03 	movupd XMMWORD PTR [rsp+0x3f0],xmm1
  73106c:	00 00 
  73106e:	48 c7 84 24 d8 02 00 	mov    QWORD PTR [rsp+0x2d8],0x8
  731075:	00 08 00 00 00 
  73107a:	66 0f 11 8c 24 f0 02 	movupd XMMWORD PTR [rsp+0x2f0],xmm1
  731081:	00 00 
  731083:	66 0f 11 8c 24 e0 02 	movupd XMMWORD PTR [rsp+0x2e0],xmm1
  73108a:	00 00 
  73108c:	48 c7 84 24 00 03 00 	mov    QWORD PTR [rsp+0x300],0x0
  731093:	00 00 00 00 00 
  731098:	48 c7 84 24 08 03 00 	mov    QWORD PTR [rsp+0x308],0x8
  73109f:	00 08 00 00 00 
  7310a4:	66 0f 11 8c 24 20 03 	movupd XMMWORD PTR [rsp+0x320],xmm1
  7310ab:	00 00 
  7310ad:	66 0f 11 8c 24 10 03 	movupd XMMWORD PTR [rsp+0x310],xmm1
  7310b4:	00 00 
  7310b6:	48 c7 84 24 30 03 00 	mov    QWORD PTR [rsp+0x330],0x0
  7310bd:	00 00 00 00 00 
  7310c2:	48 c7 84 24 38 03 00 	mov    QWORD PTR [rsp+0x338],0x8
  7310c9:	00 08 00 00 00 
  7310ce:	66 0f 11 8c 24 50 03 	movupd XMMWORD PTR [rsp+0x350],xmm1
  7310d5:	00 00 
  7310d7:	66 0f 11 8c 24 40 03 	movupd XMMWORD PTR [rsp+0x340],xmm1
  7310de:	00 00 
  7310e0:	48 c7 84 24 60 03 00 	mov    QWORD PTR [rsp+0x360],0x0
  7310e7:	00 00 00 00 00 
  7310ec:	66 0f 11 8c 24 10 04 	movupd XMMWORD PTR [rsp+0x410],xmm1
  7310f3:	00 00 
  7310f5:	66 0f 11 8c 24 00 04 	movupd XMMWORD PTR [rsp+0x400],xmm1
  7310fc:	00 00 
  7310fe:	48 c7 84 24 68 03 00 	mov    QWORD PTR [rsp+0x368],0x8
  731105:	00 08 00 00 00 
  73110a:	66 0f 10 54 24 60    	movupd xmm2,XMMWORD PTR [rsp+0x60]
  731110:	66 0f 10 5c 24 70    	movupd xmm3,XMMWORD PTR [rsp+0x70]
  731116:	66 0f 11 9c 24 98 03 	movupd XMMWORD PTR [rsp+0x398],xmm3
  73111d:	00 00 
  73111f:	66 0f 11 94 24 88 03 	movupd XMMWORD PTR [rsp+0x388],xmm2
  731126:	00 00 
  731128:	66 0f 11 8c 24 70 04 	movupd XMMWORD PTR [rsp+0x470],xmm1
  73112f:	00 00 
  731131:	66 0f 11 8c 24 60 04 	movupd XMMWORD PTR [rsp+0x460],xmm1
  731138:	00 00 
  73113a:	66 0f 11 8c 24 50 04 	movupd XMMWORD PTR [rsp+0x450],xmm1
  731141:	00 00 
  731143:	66 0f 11 8c 24 40 04 	movupd XMMWORD PTR [rsp+0x440],xmm1
  73114a:	00 00 
  73114c:	66 0f 11 8c 24 30 04 	movupd XMMWORD PTR [rsp+0x430],xmm1
  731153:	00 00 
  731155:	66 0f 11 8c 24 20 04 	movupd XMMWORD PTR [rsp+0x420],xmm1
  73115c:	00 00 
  73115e:	c7 84 24 7f 04 00 00 	mov    DWORD PTR [rsp+0x47f],0x0
  731165:	00 00 00 00 
  731169:	48 39 d0             	cmp    rax,rdx
  73116c:	75 1a                	jne    731188 <future_backtest::Customer::customer::Account::real_position_update+0xb98>
  73116e:	48 8d bc 24 80 03 00 	lea    rdi,[rsp+0x380]
  731175:	00 
  731176:	e8 95 4a ff ff       	call   725c10 <<alloc::collections::btree::map::BTreeMap<K,V,A> as core::ops::drop::Drop>::drop>
  73117b:	48 8b 9c 24 c8 00 00 	mov    rbx,QWORD PTR [rsp+0xc8]
  731182:	00 
  731183:	e9 a2 00 00 00       	jmp    73122a <future_backtest::Customer::customer::Account::real_position_update+0xc3a>
  731188:	49 8b 16             	mov    rdx,QWORD PTR [r14]
  73118b:	49 8b 76 08          	mov    rsi,QWORD PTR [r14+0x8]
  73118f:	48 89 f7             	mov    rdi,rsi
  731192:	48 21 cf             	and    rdi,rcx
  731195:	f3 0f 6f 0c 3a       	movdqu xmm1,XMMWORD PTR [rdx+rdi*1]
  73119a:	66 44 0f d7 c1       	pmovmskb r8d,xmm1
  73119f:	45 85 c0             	test   r8d,r8d
  7311a2:	48 8b 9c 24 c8 00 00 	mov    rbx,QWORD PTR [rsp+0xc8]
  7311a9:	00 
  7311aa:	0f 84 3b 04 00 00    	je     7315eb <future_backtest::Customer::customer::Account::real_position_update+0xffb>
  7311b0:	f3 45 0f bc c0       	tzcnt  r8d,r8d
  7311b5:	49 01 f8             	add    r8,rdi
  7311b8:	49 21 f0             	and    r8,rsi
  7311bb:	42 0f b6 3c 02       	movzx  edi,BYTE PTR [rdx+r8*1]
  7311c0:	40 84 ff             	test   dil,dil
  7311c3:	0f 89 5f 04 00 00    	jns    731628 <future_backtest::Customer::customer::Account::real_position_update+0x1038>
  7311c9:	48 c1 e9 39          	shr    rcx,0x39
  7311cd:	4d 8d 48 f0          	lea    r9,[r8-0x10]
  7311d1:	49 21 f1             	and    r9,rsi
  7311d4:	42 88 0c 02          	mov    BYTE PTR [rdx+r8*1],cl
  7311d8:	42 88 4c 0a 10       	mov    BYTE PTR [rdx+r9*1+0x10],cl
  7311dd:	49 f7 d8             	neg    r8
  7311e0:	49 69 c8 90 02 00 00 	imul   rcx,r8,0x290
  7311e7:	40 80 e7 01          	and    dil,0x1
  7311eb:	40 0f b6 f7          	movzx  esi,dil
  7311ef:	49 29 76 10          	sub    QWORD PTR [r14+0x10],rsi
  7311f3:	4c 8d 24 0a          	lea    r12,[rdx+rcx*1]
  7311f7:	48 89 84 0a 70 fd ff 	mov    QWORD PTR [rdx+rcx*1-0x290],rax
  7311fe:	ff 
  7311ff:	f3 0f 7f 84 0a 78 fd 	movdqu XMMWORD PTR [rdx+rcx*1-0x288],xmm0
  731206:	ff ff 
  731208:	48 8d 3c 0a          	lea    rdi,[rdx+rcx*1]
  73120c:	48 81 c7 88 fd ff ff 	add    rdi,0xfffffffffffffd88
  731213:	48 8d b4 24 10 02 00 	lea    rsi,[rsp+0x210]
  73121a:	00 
  73121b:	ba 78 02 00 00       	mov    edx,0x278
  731220:	ff 15 22 59 27 01    	call   QWORD PTR [rip+0x1275922]        # 19a6b48 <memcpy@GLIBC_2.14>
  731226:	49 ff 46 18          	inc    QWORD PTR [r14+0x18]
  73122a:	f2 41 0f 10 84 24 68 	movsd  xmm0,QWORD PTR [r12-0x98]
  731231:	ff ff ff 
  731234:	f2 0f 58 44 24 20    	addsd  xmm0,QWORD PTR [rsp+0x20]
  73123a:	f2 41 0f 11 84 24 68 	movsd  QWORD PTR [r12-0x98],xmm0
  731241:	ff ff ff 
  731244:	48 8b 4c 24 08       	mov    rcx,QWORD PTR [rsp+0x8]
  731249:	48 8b 41 10          	mov    rax,QWORD PTR [rcx+0x10]
  73124d:	48 89 44 24 70       	mov    QWORD PTR [rsp+0x70],rax
  731252:	66 0f 10 01          	movupd xmm0,XMMWORD PTR [rcx]
  731256:	66 0f 29 44 24 60    	movapd XMMWORD PTR [rsp+0x60],xmm0
  73125c:	48 8d 74 24 60       	lea    rsi,[rsp+0x60]
  731261:	4c 89 ff             	mov    rdi,r15
  731264:	ff 15 be 5f 27 01    	call   QWORD PTR [rip+0x1275fbe]        # 19a7228 <_DYNAMIC+0xa28>
  73126a:	48 85 c0             	test   rax,rax
  73126d:	74 0c                	je     73127b <future_backtest::Customer::customer::Account::real_position_update+0xc8b>
  73126f:	48 89 03             	mov    QWORD PTR [rbx],rax
  731272:	c6 43 20 03          	mov    BYTE PTR [rbx+0x20],0x3
  731276:	e9 42 01 00 00       	jmp    7313bd <future_backtest::Customer::customer::Account::real_position_update+0xdcd>
  73127b:	66 0f 28 8c 24 d0 00 	movapd xmm1,XMMWORD PTR [rsp+0xd0]
  731282:	00 00 
  731284:	66 0f 28 c1          	movapd xmm0,xmm1
  731288:	f2 0f 10 1d a8 1b b2 	movsd  xmm3,QWORD PTR [rip+0xffffffffffb21ba8]        # 252e38 <anon.baa4d3160c6db26b1acb0467a3a6e91d.2061.llvm.14045134056871974489+0x30>
  73128f:	ff 
  731290:	66 0f c2 c3 01       	cmpltpd xmm0,xmm3
  731295:	66 0f 28 54 24 10    	movapd xmm2,XMMWORD PTR [rsp+0x10]
  73129b:	66 0f c2 da 01       	cmpltpd xmm3,xmm2
  7312a0:	66 0f 54 d8          	andpd  xmm3,xmm0
  7312a4:	f2 0f 10 05 7c 30 b2 	movsd  xmm0,QWORD PTR [rip+0xffffffffffb2307c]        # 254328 <anon.baa4d3160c6db26b1acb0467a3a6e91d.693.llvm.14045134056871974489+0x50>
  7312ab:	ff 
  7312ac:	66 0f c2 d0 01       	cmpltpd xmm2,xmm0
  7312b1:	66 0f c2 c1 01       	cmpltpd xmm0,xmm1
  7312b6:	66 0f 54 c2          	andpd  xmm0,xmm2
  7312ba:	66 0f 7e c1          	movd   ecx,xmm0
  7312be:	66 0f 7e d8          	movd   eax,xmm3
  7312c2:	09 c8                	or     eax,ecx
  7312c4:	66 0f 28 84 24 b0 00 	movapd xmm0,XMMWORD PTR [rsp+0xb0]
  7312cb:	00 00 
  7312cd:	f2 0f 59 84 24 e0 00 	mulsd  xmm0,QWORD PTR [rsp+0xe0]
  7312d4:	00 00 
  7312d6:	66 0f 29 84 24 b0 00 	movapd XMMWORD PTR [rsp+0xb0],xmm0
  7312dd:	00 00 
  7312df:	48 8b 8c 24 80 01 00 	mov    rcx,QWORD PTR [rsp+0x180]
  7312e6:	00 
  7312e7:	80 b9 98 02 00 00 00 	cmp    BYTE PTR [rcx+0x298],0x0
  7312ee:	66 0f 28 84 24 90 00 	movapd xmm0,XMMWORD PTR [rsp+0x90]
  7312f5:	00 00 
  7312f7:	75 06                	jne    7312ff <future_backtest::Customer::customer::Account::real_position_update+0xd0f>
  7312f9:	66 0f 28 44 24 20    	movapd xmm0,XMMWORD PTR [rsp+0x20]
  7312ff:	24 01                	and    al,0x1
  731301:	f2 0f 59 81 80 02 00 	mulsd  xmm0,QWORD PTR [rcx+0x280]
  731308:	00 
  731309:	66 0f 28 94 24 a0 00 	movapd xmm2,XMMWORD PTR [rsp+0xa0]
  731310:	00 00 
  731312:	f2 0f 59 94 24 90 00 	mulsd  xmm2,QWORD PTR [rsp+0x90]
  731319:	00 00 
  73131b:	66 0f 28 8c 24 f0 01 	movapd xmm1,XMMWORD PTR [rsp+0x1f0]
  731322:	00 00 
  731324:	66 0f 14 ca          	unpcklpd xmm1,xmm2
  731328:	66 0f 28 54 24 20    	movapd xmm2,XMMWORD PTR [rsp+0x20]
  73132e:	66 0f 14 94 24 e0 00 	unpcklpd xmm2,XMMWORD PTR [rsp+0xe0]
  731335:	00 00 
  731337:	66 0f 59 d1          	mulpd  xmm2,xmm1
  73133b:	66 0f 28 da          	movapd xmm3,xmm2
  73133f:	66 0f 28 ca          	movapd xmm1,xmm2
  731343:	f2 0f 58 c8          	addsd  xmm1,xmm0
  731347:	66 0f 28 94 24 b0 00 	movapd xmm2,XMMWORD PTR [rsp+0xb0]
  73134e:	00 00 
  731350:	f2 0f 5c d1          	subsd  xmm2,xmm1
  731354:	f2 41 0f 10 8f d0 07 	movsd  xmm1,QWORD PTR [r15+0x7d0]
  73135b:	00 00 
  73135d:	66 0f 28 e2          	movapd xmm4,xmm2
  731361:	f2 0f 58 ca          	addsd  xmm1,xmm2
  731365:	f2 41 0f 11 8f d0 07 	movsd  QWORD PTR [r15+0x7d0],xmm1
  73136c:	00 00 
  73136e:	b1 01                	mov    cl,0x1
  731370:	66 0f 28 94 24 d0 00 	movapd xmm2,XMMWORD PTR [rsp+0xd0]
  731377:	00 00 
  731379:	66 0f 2e 15 ff 27 b2 	ucomisd xmm2,QWORD PTR [rip+0xffffffffffb227ff]        # 253b80 <anon.baa4d3160c6db26b1acb0467a3a6e91d.582.llvm.14045134056871974489+0x50>
  731380:	ff 
  731381:	77 26                	ja     7313a9 <future_backtest::Customer::customer::Account::real_position_update+0xdb9>
  731383:	f2 0f 10 0d 8d 13 b2 	movsd  xmm1,QWORD PTR [rip+0xffffffffffb2138d]        # 252718 <anon.baa4d3160c6db26b1acb0467a3a6e91d.552.llvm.14045134056871974489+0x38>
  73138a:	ff 
  73138b:	66 0f 2e ca          	ucomisd xmm1,xmm2
  73138f:	76 04                	jbe    731395 <future_backtest::Customer::customer::Account::real_position_update+0xda5>
  731391:	31 c9                	xor    ecx,ecx
  731393:	eb 14                	jmp    7313a9 <future_backtest::Customer::customer::Account::real_position_update+0xdb9>
  731395:	66 0f 28 8c 24 00 01 	movapd xmm1,XMMWORD PTR [rsp+0x100]
  73139c:	00 00 
  73139e:	66 0f 2e 0d da 27 b2 	ucomisd xmm1,QWORD PTR [rip+0xffffffffffb227da]        # 253b80 <anon.baa4d3160c6db26b1acb0467a3a6e91d.582.llvm.14045134056871974489+0x50>
  7313a5:	ff 
  7313a6:	0f 97 c1             	seta   cl
  7313a9:	f2 0f 11 23          	movsd  QWORD PTR [rbx],xmm4
  7313ad:	f2 0f 11 43 08       	movsd  QWORD PTR [rbx+0x8],xmm0
  7313b2:	66 0f 11 5b 10       	movupd XMMWORD PTR [rbx+0x10],xmm3
  7313b7:	88 4b 20             	mov    BYTE PTR [rbx+0x20],cl
  7313ba:	88 43 21             	mov    BYTE PTR [rbx+0x21],al
  7313bd:	48 89 d8             	mov    rax,rbx
  7313c0:	48 81 c4 88 04 00 00 	add    rsp,0x488
  7313c7:	5b                   	pop    rbx
  7313c8:	41 5c                	pop    r12
  7313ca:	41 5d                	pop    r13
  7313cc:	41 5e                	pop    r14
  7313ce:	41 5f                	pop    r15
  7313d0:	5d                   	pop    rbp
  7313d1:	c3                   	ret    
  7313d2:	f2 0f 10 05 5e 1a b2 	movsd  xmm0,QWORD PTR [rip+0xffffffffffb21a5e]        # 252e38 <anon.baa4d3160c6db26b1acb0467a3a6e91d.2061.llvm.14045134056871974489+0x30>
  7313d9:	ff 
  7313da:	f2 0f 58 c4          	addsd  xmm0,xmm4
  7313de:	66 0f 2e c8          	ucomisd xmm1,xmm0
  7313e2:	76 52                	jbe    731436 <future_backtest::Customer::customer::Account::real_position_update+0xe46>
  7313e4:	f2 0f 10 05 4c 1a b2 	movsd  xmm0,QWORD PTR [rip+0xffffffffffb21a4c]        # 252e38 <anon.baa4d3160c6db26b1acb0467a3a6e91d.2061.llvm.14045134056871974489+0x30>
  7313eb:	ff 
  7313ec:	66 0f 2e 40 c8       	ucomisd xmm0,QWORD PTR [rax-0x38]
  7313f1:	f2 0f 10 4c 24 58    	movsd  xmm1,QWORD PTR [rsp+0x58]
  7313f7:	66 0f 28 15 51 33 b2 	movapd xmm2,XMMWORD PTR [rip+0xffffffffffb23351]        # 254750 <anon.1d60bbc5b7a6ca0614a4221d8538e6d9.2.llvm.10718084555993993690+0x30>
  7313fe:	ff 
  7313ff:	76 13                	jbe    731414 <future_backtest::Customer::customer::Account::real_position_update+0xe24>
  731401:	f2 0f 11 48 c8       	movsd  QWORD PTR [rax-0x38],xmm1
  731406:	66 0f 28 84 24 a0 00 	movapd xmm0,XMMWORD PTR [rsp+0xa0]
  73140d:	00 00 
  73140f:	f2 0f 11 40 f0       	movsd  QWORD PTR [rax-0x10],xmm0
  731414:	f2 0f 11 48 d0       	movsd  QWORD PTR [rax-0x30],xmm1
  731419:	f2 0f 11 48 c0       	movsd  QWORD PTR [rax-0x40],xmm1
  73141e:	66 0f 28 84 24 a0 00 	movapd xmm0,XMMWORD PTR [rsp+0xa0]
  731425:	00 00 
  731427:	f2 0f 11 40 f8       	movsd  QWORD PTR [rax-0x8],xmm0
  73142c:	f2 0f 11 40 e8       	movsd  QWORD PTR [rax-0x18],xmm0
  731431:	e9 9f f9 ff ff       	jmp    730dd5 <future_backtest::Customer::customer::Account::real_position_update+0x7e5>
  731436:	0f 28 84 24 a0 01 00 	movaps xmm0,XMMWORD PTR [rsp+0x1a0]
  73143d:	00 
  73143e:	0f 29 84 24 00 02 00 	movaps XMMWORD PTR [rsp+0x200],xmm0
  731445:	00 
  731446:	0f 28 44 24 40       	movaps xmm0,XMMWORD PTR [rsp+0x40]
  73144b:	f2 0f 11 84 24 b0 01 	movsd  QWORD PTR [rsp+0x1b0],xmm0
  731452:	00 00 
  731454:	0f 28 44 24 10       	movaps xmm0,XMMWORD PTR [rsp+0x10]
  731459:	f2 0f 11 84 24 b8 01 	movsd  QWORD PTR [rsp+0x1b8],xmm0
  731460:	00 00 
  731462:	0f 28 84 24 a0 00 00 	movaps xmm0,XMMWORD PTR [rsp+0xa0]
  731469:	00 
  73146a:	f2 0f 11 84 24 c0 01 	movsd  QWORD PTR [rsp+0x1c0],xmm0
  731471:	00 00 
  731473:	0f 28 84 24 00 01 00 	movaps xmm0,XMMWORD PTR [rsp+0x100]
  73147a:	00 
  73147b:	f2 0f 11 84 24 c8 01 	movsd  QWORD PTR [rsp+0x1c8],xmm0
  731482:	00 00 
  731484:	48 8d 84 24 00 02 00 	lea    rax,[rsp+0x200]
  73148b:	00 
  73148c:	48 89 44 24 60       	mov    QWORD PTR [rsp+0x60],rax
  731491:	48 8d 05 98 bb 1c 00 	lea    rax,[rip+0x1cbb98]        # 8fd030 <<(U,T) as core::fmt::Debug>::fmt>
  731498:	48 89 44 24 68       	mov    QWORD PTR [rsp+0x68],rax
  73149d:	48 8d 8c 24 b0 01 00 	lea    rcx,[rsp+0x1b0]
  7314a4:	00 
  7314a5:	48 89 4c 24 70       	mov    QWORD PTR [rsp+0x70],rcx
  7314aa:	48 89 44 24 78       	mov    QWORD PTR [rsp+0x78],rax
  7314af:	48 8d 8c 24 c0 01 00 	lea    rcx,[rsp+0x1c0]
  7314b6:	00 
  7314b7:	48 89 8c 24 80 00 00 	mov    QWORD PTR [rsp+0x80],rcx
  7314be:	00 
  7314bf:	48 89 84 24 88 00 00 	mov    QWORD PTR [rsp+0x88],rax
  7314c6:	00 
  7314c7:	48 8d 05 aa 0a 1b 01 	lea    rax,[rip+0x11b0aaa]        # 18e1f78 <anon.d0b8e27bea7bf57269a32e15b6abf5cf.309.llvm.1643563994444475245+0x188>
  7314ce:	48 89 84 24 30 01 00 	mov    QWORD PTR [rsp+0x130],rax
  7314d5:	00 
  7314d6:	48 c7 84 24 38 01 00 	mov    QWORD PTR [rsp+0x138],0x3
  7314dd:	00 03 00 00 00 
  7314e2:	48 c7 84 24 50 01 00 	mov    QWORD PTR [rsp+0x150],0x0
  7314e9:	00 00 00 00 00 
  7314ee:	48 89 94 24 40 01 00 	mov    QWORD PTR [rsp+0x140],rdx
  7314f5:	00 
  7314f6:	48 c7 84 24 48 01 00 	mov    QWORD PTR [rsp+0x148],0x3
  7314fd:	00 03 00 00 00 
  731502:	48 8d bc 24 88 01 00 	lea    rdi,[rsp+0x188]
  731509:	00 
  73150a:	48 8d b4 24 30 01 00 	lea    rsi,[rsp+0x130]
  731511:	00 
  731512:	ff 15 68 58 27 01    	call   QWORD PTR [rip+0x1275868]        # 19a6d80 <_DYNAMIC+0x580>
  731518:	4c 8b bc 24 88 01 00 	mov    r15,QWORD PTR [rsp+0x188]
  73151f:	00 
  731520:	4c 8b a4 24 90 01 00 	mov    r12,QWORD PTR [rsp+0x190]
  731527:	00 
  731528:	ff 15 12 55 27 01    	call   QWORD PTR [rip+0x1275512]        # 19a6a40 <_DYNAMIC+0x240>
  73152e:	bf 18 00 00 00       	mov    edi,0x18
  731533:	be 08 00 00 00       	mov    esi,0x8
  731538:	ff 15 da 54 27 01    	call   QWORD PTR [rip+0x12754da]        # 19a6a18 <_DYNAMIC+0x218>
  73153e:	48 85 c0             	test   rax,rax
  731541:	0f 84 f8 00 00 00    	je     73163f <future_backtest::Customer::customer::Account::real_position_update+0x104f>
  731547:	48 8b 8c 24 98 01 00 	mov    rcx,QWORD PTR [rsp+0x198]
  73154e:	00 
  73154f:	48 89 48 10          	mov    QWORD PTR [rax+0x10],rcx
  731553:	66 0f 10 84 24 88 01 	movupd xmm0,XMMWORD PTR [rsp+0x188]
  73155a:	00 00 
  73155c:	66 0f 11 00          	movupd XMMWORD PTR [rax],xmm0
  731560:	48 8d 35 41 09 1b 01 	lea    rsi,[rip+0x11b0941]        # 18e1ea8 <anon.d0b8e27bea7bf57269a32e15b6abf5cf.309.llvm.1643563994444475245+0xb8>
  731567:	48 89 c7             	mov    rdi,rax
  73156a:	4c 8b 64 24 08       	mov    r12,QWORD PTR [rsp+0x8]
  73156f:	e8 9c 69 2e 00       	call   a17f10 <anyhow::error::<impl core::convert::From<E> for anyhow::Error>::from>
  731574:	48 8b 9c 24 c8 00 00 	mov    rbx,QWORD PTR [rsp+0xc8]
  73157b:	00 
  73157c:	48 89 03             	mov    QWORD PTR [rbx],rax
  73157f:	c6 43 20 03          	mov    BYTE PTR [rbx+0x20],0x3
  731583:	48 8b b4 24 18 01 00 	mov    rsi,QWORD PTR [rsp+0x118]
  73158a:	00 
  73158b:	48 85 f6             	test   rsi,rsi
  73158e:	74 13                	je     7315a3 <future_backtest::Customer::customer::Account::real_position_update+0xfb3>
  731590:	48 8b bc 24 20 01 00 	mov    rdi,QWORD PTR [rsp+0x120]
  731597:	00 
  731598:	ba 01 00 00 00       	mov    edx,0x1
  73159d:	ff 15 7d 54 27 01    	call   QWORD PTR [rip+0x127547d]        # 19a6a20 <_DYNAMIC+0x220>
  7315a3:	49 8b 34 24          	mov    rsi,QWORD PTR [r12]
  7315a7:	48 85 f6             	test   rsi,rsi
  7315aa:	0f 84 0d fe ff ff    	je     7313bd <future_backtest::Customer::customer::Account::real_position_update+0xdcd>
  7315b0:	49 8b 7c 24 08       	mov    rdi,QWORD PTR [r12+0x8]
  7315b5:	ba 01 00 00 00       	mov    edx,0x1
  7315ba:	ff 15 60 54 27 01    	call   QWORD PTR [rip+0x1275460]        # 19a6a20 <_DYNAMIC+0x220>
  7315c0:	e9 f8 fd ff ff       	jmp    7313bd <future_backtest::Customer::customer::Account::real_position_update+0xdcd>
  7315c5:	41 b9 10 00 00 00    	mov    r9d,0x10
  7315cb:	4d 01 ca             	add    r10,r9
  7315ce:	4d 21 c2             	and    r10,r8
  7315d1:	f3 42 0f 6f 04 16    	movdqu xmm0,XMMWORD PTR [rsi+r10*1]
  7315d7:	66 44 0f d7 d8       	pmovmskb r11d,xmm0
  7315dc:	49 83 c1 10          	add    r9,0x10
  7315e0:	45 85 db             	test   r11d,r11d
  7315e3:	0f 85 9a f8 ff ff    	jne    730e83 <future_backtest::Customer::customer::Account::real_position_update+0x893>
  7315e9:	eb e0                	jmp    7315cb <future_backtest::Customer::customer::Account::real_position_update+0xfdb>
  7315eb:	41 b9 10 00 00 00    	mov    r9d,0x10
  7315f1:	4c 01 cf             	add    rdi,r9
  7315f4:	48 21 f7             	and    rdi,rsi
  7315f7:	f3 0f 6f 0c 3a       	movdqu xmm1,XMMWORD PTR [rdx+rdi*1]
  7315fc:	66 44 0f d7 c1       	pmovmskb r8d,xmm1
  731601:	49 83 c1 10          	add    r9,0x10
  731605:	45 85 c0             	test   r8d,r8d
  731608:	0f 85 a2 fb ff ff    	jne    7311b0 <future_backtest::Customer::customer::Account::real_position_update+0xbc0>
  73160e:	eb e1                	jmp    7315f1 <future_backtest::Customer::customer::Account::real_position_update+0x1001>
  731610:	66 0f 6f 06          	movdqa xmm0,XMMWORD PTR [rsi]
  731614:	66 44 0f d7 d0       	pmovmskb r10d,xmm0
  731619:	f3 45 0f bc da       	tzcnt  r11d,r10d
  73161e:	46 0f b6 14 1e       	movzx  r10d,BYTE PTR [rsi+r11*1]
  731623:	e9 79 f8 ff ff       	jmp    730ea1 <future_backtest::Customer::customer::Account::real_position_update+0x8b1>
  731628:	66 0f 6f 0a          	movdqa xmm1,XMMWORD PTR [rdx]
  73162c:	66 0f d7 f9          	pmovmskb edi,xmm1
  731630:	f3 44 0f bc c7       	tzcnt  r8d,edi
  731635:	42 0f b6 3c 02       	movzx  edi,BYTE PTR [rdx+r8*1]
  73163a:	e9 8a fb ff ff       	jmp    7311c9 <future_backtest::Customer::customer::Account::real_position_update+0xbd9>
  73163f:	bf 08 00 00 00       	mov    edi,0x8
  731644:	be 18 00 00 00       	mov    esi,0x18
  731649:	ff 15 49 56 27 01    	call   QWORD PTR [rip+0x1275649]        # 19a6c98 <_DYNAMIC+0x498>
  73164f:	0f 0b                	ud2    
  731651:	49 89 c6             	mov    r14,rax
  731654:	4c 8b 64 24 08       	mov    r12,QWORD PTR [rsp+0x8]
  731659:	49 8b 34 24          	mov    rsi,QWORD PTR [r12]
  73165d:	48 85 f6             	test   rsi,rsi
  731660:	74 61                	je     7316c3 <future_backtest::Customer::customer::Account::real_position_update+0x10d3>
  731662:	e9 80 00 00 00       	jmp    7316e7 <future_backtest::Customer::customer::Account::real_position_update+0x10f7>
  731667:	49 89 c6             	mov    r14,rax
  73166a:	49 8b 34 24          	mov    rsi,QWORD PTR [r12]
  73166e:	48 85 f6             	test   rsi,rsi
  731671:	74 50                	je     7316c3 <future_backtest::Customer::customer::Account::real_position_update+0x10d3>
  731673:	eb 72                	jmp    7316e7 <future_backtest::Customer::customer::Account::real_position_update+0x10f7>
  731675:	49 89 c6             	mov    r14,rax
  731678:	49 8b 34 24          	mov    rsi,QWORD PTR [r12]
  73167c:	48 85 f6             	test   rsi,rsi
  73167f:	74 42                	je     7316c3 <future_backtest::Customer::customer::Account::real_position_update+0x10d3>
  731681:	eb 64                	jmp    7316e7 <future_backtest::Customer::customer::Account::real_position_update+0x10f7>
  731683:	49 89 c6             	mov    r14,rax
  731686:	4d 85 ff             	test   r15,r15
  731689:	75 07                	jne    731692 <future_backtest::Customer::customer::Account::real_position_update+0x10a2>
  73168b:	4c 8b 64 24 08       	mov    r12,QWORD PTR [rsp+0x8]
  731690:	eb 1b                	jmp    7316ad <future_backtest::Customer::customer::Account::real_position_update+0x10bd>
  731692:	ba 01 00 00 00       	mov    edx,0x1
  731697:	4c 89 e7             	mov    rdi,r12
  73169a:	4c 89 fe             	mov    rsi,r15
  73169d:	ff 15 7d 53 27 01    	call   QWORD PTR [rip+0x127537d]        # 19a6a20 <_DYNAMIC+0x220>
  7316a3:	4c 8b 64 24 08       	mov    r12,QWORD PTR [rsp+0x8]
  7316a8:	eb 03                	jmp    7316ad <future_backtest::Customer::customer::Account::real_position_update+0x10bd>
  7316aa:	49 89 c6             	mov    r14,rax
  7316ad:	48 8b b4 24 18 01 00 	mov    rsi,QWORD PTR [rsp+0x118]
  7316b4:	00 
  7316b5:	48 85 f6             	test   rsi,rsi
  7316b8:	75 11                	jne    7316cb <future_backtest::Customer::customer::Account::real_position_update+0x10db>
  7316ba:	49 8b 34 24          	mov    rsi,QWORD PTR [r12]
  7316be:	48 85 f6             	test   rsi,rsi
  7316c1:	75 24                	jne    7316e7 <future_backtest::Customer::customer::Account::real_position_update+0x10f7>
  7316c3:	4c 89 f7             	mov    rdi,r14
  7316c6:	e8 b5 bf 1a 01       	call   18dd680 <_Unwind_Resume@plt>
  7316cb:	48 8b bc 24 20 01 00 	mov    rdi,QWORD PTR [rsp+0x120]
  7316d2:	00 
  7316d3:	ba 01 00 00 00       	mov    edx,0x1
  7316d8:	ff 15 42 53 27 01    	call   QWORD PTR [rip+0x1275342]        # 19a6a20 <_DYNAMIC+0x220>
  7316de:	49 8b 34 24          	mov    rsi,QWORD PTR [r12]
  7316e2:	48 85 f6             	test   rsi,rsi
  7316e5:	74 dc                	je     7316c3 <future_backtest::Customer::customer::Account::real_position_update+0x10d3>
  7316e7:	49 8b 7c 24 08       	mov    rdi,QWORD PTR [r12+0x8]
  7316ec:	ba 01 00 00 00       	mov    edx,0x1
  7316f1:	ff 15 29 53 27 01    	call   QWORD PTR [rip+0x1275329]        # 19a6a20 <_DYNAMIC+0x220>
  7316f7:	4c 89 f7             	mov    rdi,r14
  7316fa:	e8 81 bf 1a 01       	call   18dd680 <_Unwind_Resume@plt>
