# future_backtest::Customer::customer::Account::real_position_update
# ELF 0000000000687910 bytes 4367
  687910:	55                   	push   rbp
  687911:	41 57                	push   r15
  687913:	41 56                	push   r14
  687915:	41 55                	push   r13
  687917:	41 54                	push   r12
  687919:	53                   	push   rbx
  68791a:	48 81 ec 88 04 00 00 	sub    rsp,0x488
  687921:	66 0f 7f 9c 24 f0 01 	movdqa XMMWORD PTR [rsp+0x1f0],xmm3
  687928:	00 00 
  68792a:	66 0f 7f 94 24 00 01 	movdqa XMMWORD PTR [rsp+0x100],xmm2
  687931:	00 00 
  687933:	66 0f 7f 8c 24 a0 00 	movdqa XMMWORD PTR [rsp+0xa0],xmm1
  68793a:	00 00 
  68793c:	49 89 cc             	mov    r12,rcx
  68793f:	66 0f d6 44 24 58    	movq   QWORD PTR [rsp+0x58],xmm0
  687945:	48 89 94 24 80 01 00 	mov    QWORD PTR [rsp+0x180],rdx
  68794c:	00 
  68794d:	49 89 f7             	mov    r15,rsi
  687950:	48 89 fb             	mov    rbx,rdi
  687953:	48 8d bc 24 18 01 00 	lea    rdi,[rsp+0x118]
  68795a:	00 
  68795b:	48 89 ce             	mov    rsi,rcx
  68795e:	ff 15 7c 49 27 01    	call   QWORD PTR [rip+0x127497c]        # 18fc2e0 <_DYNAMIC+0x9e0>
  687964:	48 89 9c 24 c8 00 00 	mov    QWORD PTR [rsp+0xc8],rbx
  68796b:	00 
  68796c:	49 83 bf 80 07 00 00 	cmp    QWORD PTR [r15+0x780],0x0
  687973:	00 
  687974:	0f 84 7e 03 00 00    	je     687cf8 <future_backtest::Customer::customer::Account::real_position_update+0x3e8>
  68797a:	49 8d bf 88 07 00 00 	lea    rdi,[r15+0x788]
  687981:	4c 89 e6             	mov    rsi,r12
  687984:	e8 57 37 0d 00       	call   75b0e0 <core::hash::BuildHasher::hash_one>
  687989:	49 8d bf 68 07 00 00 	lea    rdi,[r15+0x768]
  687990:	48 89 c1             	mov    rcx,rax
  687993:	48 c1 e9 39          	shr    rcx,0x39
  687997:	4d 8b b7 68 07 00 00 	mov    r14,QWORD PTR [r15+0x768]
  68799e:	4c 89 7c 24 38       	mov    QWORD PTR [rsp+0x38],r15
  6879a3:	4d 8b 87 70 07 00 00 	mov    r8,QWORD PTR [r15+0x770]
  6879aa:	66 0f 6e c1          	movd   xmm0,ecx
  6879ae:	66 0f 60 c0          	punpcklbw xmm0,xmm0
  6879b2:	f2 0f 70 c0 00       	pshuflw xmm0,xmm0,0x0
  6879b7:	66 0f 70 c8 00       	pshufd xmm1,xmm0,0x0
  6879bc:	4d 8d ae 70 fd ff ff 	lea    r13,[r14-0x290]
  6879c3:	49 8b 5c 24 08       	mov    rbx,QWORD PTR [r12+0x8]
  6879c8:	49 8b 6c 24 10       	mov    rbp,QWORD PTR [r12+0x10]
  6879cd:	45 31 c9             	xor    r9d,r9d
  6879d0:	66 0f 76 d2          	pcmpeqd xmm2,xmm2
  6879d4:	4c 21 c0             	and    rax,r8
  6879d7:	f3 41 0f 6f 1c 06    	movdqu xmm3,XMMWORD PTR [r14+rax*1]
  6879dd:	66 0f 6f c3          	movdqa xmm0,xmm3
  6879e1:	66 0f 74 c1          	pcmpeqb xmm0,xmm1
  6879e5:	66 44 0f d7 f8       	pmovmskb r15d,xmm0
  6879ea:	45 85 ff             	test   r15d,r15d
  6879ed:	0f 84 ad 00 00 00    	je     687aa0 <future_backtest::Customer::customer::Account::real_position_update+0x190>
  6879f3:	48 89 44 24 20       	mov    QWORD PTR [rsp+0x20],rax
  6879f8:	4c 89 64 24 08       	mov    QWORD PTR [rsp+0x8],r12
  6879fd:	48 89 bc 24 f8 00 00 	mov    QWORD PTR [rsp+0xf8],rdi
  687a04:	00 
  687a05:	66 0f 7f 8c 24 e0 00 	movdqa XMMWORD PTR [rsp+0xe0],xmm1
  687a0c:	00 00 
  687a0e:	4c 89 44 24 10       	mov    QWORD PTR [rsp+0x10],r8
  687a13:	4c 89 4c 24 40       	mov    QWORD PTR [rsp+0x40],r9
  687a18:	66 0f 7f 9c 24 90 00 	movdqa XMMWORD PTR [rsp+0x90],xmm3
  687a1f:	00 00 
  687a21:	f3 41 0f bc cf       	tzcnt  ecx,r15d
  687a26:	48 01 c1             	add    rcx,rax
  687a29:	4c 21 c1             	and    rcx,r8
  687a2c:	48 f7 d9             	neg    rcx
  687a2f:	4c 69 e1 90 02 00 00 	imul   r12,rcx,0x290
  687a36:	4b 3b 6c 25 10       	cmp    rbp,QWORD PTR [r13+r12*1+0x10]
  687a3b:	75 18                	jne    687a55 <future_backtest::Customer::customer::Account::real_position_update+0x145>
  687a3d:	4b 8d 04 2c          	lea    rax,[r12+r13*1]
  687a41:	48 8b 70 08          	mov    rsi,QWORD PTR [rax+0x8]
  687a45:	48 89 df             	mov    rdi,rbx
  687a48:	48 89 ea             	mov    rdx,rbp
  687a4b:	ff 15 af 44 27 01    	call   QWORD PTR [rip+0x12744af]        # 18fbf00 <bcmp@GLIBC_2.2.5>
  687a51:	85 c0                	test   eax,eax
  687a53:	74 6b                	je     687ac0 <future_backtest::Customer::customer::Account::real_position_update+0x1b0>
  687a55:	41 8d 47 ff          	lea    eax,[r15-0x1]
  687a59:	66 44 21 f8          	and    ax,r15w
  687a5d:	41 89 c7             	mov    r15d,eax
  687a60:	48 8b 44 24 20       	mov    rax,QWORD PTR [rsp+0x20]
  687a65:	4c 8b 64 24 08       	mov    r12,QWORD PTR [rsp+0x8]
  687a6a:	48 8b bc 24 f8 00 00 	mov    rdi,QWORD PTR [rsp+0xf8]
  687a71:	00 
  687a72:	66 0f 6f 8c 24 e0 00 	movdqa xmm1,XMMWORD PTR [rsp+0xe0]
  687a79:	00 00 
  687a7b:	4c 8b 44 24 10       	mov    r8,QWORD PTR [rsp+0x10]
  687a80:	4c 8b 4c 24 40       	mov    r9,QWORD PTR [rsp+0x40]
  687a85:	66 0f 76 d2          	pcmpeqd xmm2,xmm2
  687a89:	66 0f 6f 9c 24 90 00 	movdqa xmm3,XMMWORD PTR [rsp+0x90]
  687a90:	00 00 
  687a92:	75 8d                	jne    687a21 <future_backtest::Customer::customer::Account::real_position_update+0x111>
  687a94:	66 66 66 2e 0f 1f 84 	data16 data16 cs nop WORD PTR [rax+rax*1+0x0]
  687a9b:	00 00 00 00 00 
  687aa0:	66 0f 74 da          	pcmpeqb xmm3,xmm2
  687aa4:	66 0f d7 cb          	pmovmskb ecx,xmm3
  687aa8:	85 c9                	test   ecx,ecx
  687aaa:	0f 85 48 02 00 00    	jne    687cf8 <future_backtest::Customer::customer::Account::real_position_update+0x3e8>
  687ab0:	4c 01 c8             	add    rax,r9
  687ab3:	48 83 c0 10          	add    rax,0x10
  687ab7:	49 83 c1 10          	add    r9,0x10
  687abb:	e9 14 ff ff ff       	jmp    6879d4 <future_backtest::Customer::customer::Account::real_position_update+0xc4>
  687ac0:	48 8b 5c 24 38       	mov    rbx,QWORD PTR [rsp+0x38]
  687ac5:	48 83 bb 98 09 00 00 	cmp    QWORD PTR [rbx+0x998],0x0
  687acc:	00 
  687acd:	0f 84 31 02 00 00    	je     687d04 <future_backtest::Customer::customer::Account::real_position_update+0x3f4>
  687ad3:	f2 43 0f 10 44 26 d8 	movsd  xmm0,QWORD PTR [r14+r12*1-0x28]
  687ada:	0f 29 84 24 e0 00 00 	movaps XMMWORD PTR [rsp+0xe0],xmm0
  687ae1:	00 
  687ae2:	48 8d bb a0 09 00 00 	lea    rdi,[rbx+0x9a0]
  687ae9:	4c 8b 64 24 08       	mov    r12,QWORD PTR [rsp+0x8]
  687aee:	4c 89 e6             	mov    rsi,r12
  687af1:	e8 ea 35 0d 00       	call   75b0e0 <core::hash::BuildHasher::hash_one>
  687af6:	49 89 c5             	mov    r13,rax
  687af9:	48 8d 8b 80 09 00 00 	lea    rcx,[rbx+0x980]
  687b00:	48 c1 e8 39          	shr    rax,0x39
  687b04:	4c 8b bb 80 09 00 00 	mov    r15,QWORD PTR [rbx+0x980]
  687b0b:	48 8b b3 88 09 00 00 	mov    rsi,QWORD PTR [rbx+0x988]
  687b12:	66 0f 6e c0          	movd   xmm0,eax
  687b16:	66 0f 60 c0          	punpcklbw xmm0,xmm0
  687b1a:	f2 0f 70 c0 00       	pshuflw xmm0,xmm0,0x0
  687b1f:	66 0f 70 c8 00       	pshufd xmm1,xmm0,0x0
  687b24:	4d 8d 47 d8          	lea    r8,[r15-0x28]
  687b28:	49 8b 5c 24 08       	mov    rbx,QWORD PTR [r12+0x8]
  687b2d:	49 8b 6c 24 10       	mov    rbp,QWORD PTR [r12+0x10]
  687b32:	45 31 c9             	xor    r9d,r9d
  687b35:	66 0f 76 d2          	pcmpeqd xmm2,xmm2
  687b39:	49 21 f5             	and    r13,rsi
  687b3c:	f3 43 0f 6f 1c 2f    	movdqu xmm3,XMMWORD PTR [r15+r13*1]
  687b42:	66 0f 6f c3          	movdqa xmm0,xmm3
  687b46:	66 0f 74 c1          	pcmpeqb xmm0,xmm1
  687b4a:	66 0f d7 c0          	pmovmskb eax,xmm0
  687b4e:	85 c0                	test   eax,eax
  687b50:	0f 84 9a 00 00 00    	je     687bf0 <future_backtest::Customer::customer::Account::real_position_update+0x2e0>
  687b56:	48 89 8c 24 90 00 00 	mov    QWORD PTR [rsp+0x90],rcx
  687b5d:	00 
  687b5e:	66 0f 7f 4c 24 10    	movdqa XMMWORD PTR [rsp+0x10],xmm1
  687b64:	48 89 74 24 40       	mov    QWORD PTR [rsp+0x40],rsi
  687b69:	4c 89 8c 24 d0 00 00 	mov    QWORD PTR [rsp+0xd0],r9
  687b70:	00 
  687b71:	66 0f 7f 9c 24 b0 00 	movdqa XMMWORD PTR [rsp+0xb0],xmm3
  687b78:	00 00 
  687b7a:	48 89 44 24 20       	mov    QWORD PTR [rsp+0x20],rax
  687b7f:	f3 0f bc c0          	tzcnt  eax,eax
  687b83:	4c 01 e8             	add    rax,r13
  687b86:	48 21 f0             	and    rax,rsi
  687b89:	48 f7 d8             	neg    rax
  687b8c:	4c 8d 34 80          	lea    r14,[rax+rax*4]
  687b90:	4b 3b 6c f0 10       	cmp    rbp,QWORD PTR [r8+r14*8+0x10]
  687b95:	75 1e                	jne    687bb5 <future_backtest::Customer::customer::Account::real_position_update+0x2a5>
  687b97:	4b 8d 04 f0          	lea    rax,[r8+r14*8]
  687b9b:	48 8b 70 08          	mov    rsi,QWORD PTR [rax+0x8]
  687b9f:	48 89 df             	mov    rdi,rbx
  687ba2:	4d 89 c4             	mov    r12,r8
  687ba5:	48 89 ea             	mov    rdx,rbp
  687ba8:	ff 15 52 43 27 01    	call   QWORD PTR [rip+0x1274352]        # 18fbf00 <bcmp@GLIBC_2.2.5>
  687bae:	4d 89 e0             	mov    r8,r12
  687bb1:	85 c0                	test   eax,eax
  687bb3:	74 5b                	je     687c10 <future_backtest::Customer::customer::Account::real_position_update+0x300>
  687bb5:	48 8b 4c 24 20       	mov    rcx,QWORD PTR [rsp+0x20]
  687bba:	8d 41 ff             	lea    eax,[rcx-0x1]
  687bbd:	66 21 c8             	and    ax,cx
  687bc0:	48 8b 8c 24 90 00 00 	mov    rcx,QWORD PTR [rsp+0x90]
  687bc7:	00 
  687bc8:	66 0f 6f 4c 24 10    	movdqa xmm1,XMMWORD PTR [rsp+0x10]
  687bce:	48 8b 74 24 40       	mov    rsi,QWORD PTR [rsp+0x40]
  687bd3:	4c 8b 8c 24 d0 00 00 	mov    r9,QWORD PTR [rsp+0xd0]
  687bda:	00 
  687bdb:	66 0f 76 d2          	pcmpeqd xmm2,xmm2
  687bdf:	66 0f 6f 9c 24 b0 00 	movdqa xmm3,XMMWORD PTR [rsp+0xb0]
  687be6:	00 00 
  687be8:	75 90                	jne    687b7a <future_backtest::Customer::customer::Account::real_position_update+0x26a>
  687bea:	66 0f 1f 44 00 00    	nop    WORD PTR [rax+rax*1+0x0]
  687bf0:	66 0f 74 da          	pcmpeqb xmm3,xmm2
  687bf4:	66 0f d7 c3          	pmovmskb eax,xmm3
  687bf8:	85 c0                	test   eax,eax
  687bfa:	0f 85 04 01 00 00    	jne    687d04 <future_backtest::Customer::customer::Account::real_position_update+0x3f4>
  687c00:	4d 01 cd             	add    r13,r9
  687c03:	49 83 c5 10          	add    r13,0x10
  687c07:	49 83 c1 10          	add    r9,0x10
  687c0b:	e9 29 ff ff ff       	jmp    687b39 <future_backtest::Customer::customer::Account::real_position_update+0x229>
  687c10:	66 43 0f 10 7c f7 f0 	movupd xmm7,XMMWORD PTR [r15+r14*8-0x10]
  687c17:	66 0f 28 c7          	movapd xmm0,xmm7
  687c1b:	66 0f 28 9c 24 00 01 	movapd xmm3,XMMWORD PTR [rsp+0x100]
  687c22:	00 00 
  687c24:	f2 0f 10 c3          	movsd  xmm0,xmm3
  687c28:	66 0f ef c9          	pxor   xmm1,xmm1
  687c2c:	66 0f c2 c8 03       	cmpunordpd xmm1,xmm0
  687c31:	66 0f 54 05 d7 c3 bc 	andpd  xmm0,XMMWORD PTR [rip+0xffffffffffbcc3d7]        # 254010 <anon.5057d08616aaadbca204640f1da5e907.358.llvm.15565010581497186374+0x270>
  687c38:	ff 
  687c39:	66 0f 56 05 cf b8 bc 	orpd   xmm0,XMMWORD PTR [rip+0xffffffffffbcb8cf]        # 253510 <anon.9e9e544ad4926f811181c12baef12ac8.35.llvm.4094939851438509727+0x240>
  687c40:	ff 
  687c41:	66 0f 28 d1          	movapd xmm2,xmm1
  687c45:	66 0f 55 d0          	andnpd xmm2,xmm0
  687c49:	66 0f 54 0d 0f a0 bc 	andpd  xmm1,XMMWORD PTR [rip+0xffffffffffbca00f]        # 251c60 <anon.609a31ba814f1e4156e50677fc366a7f.902.llvm.5215769359700358943+0x240>
  687c50:	ff 
  687c51:	66 0f 56 ca          	orpd   xmm1,xmm2
  687c55:	66 0f 70 c1 ee       	pshufd xmm0,xmm1,0xee
  687c5a:	f2 0f 59 c8          	mulsd  xmm1,xmm0
  687c5e:	66 0f 2e 0d 1a d6 bc 	ucomisd xmm1,QWORD PTR [rip+0xffffffffffbcd61a]        # 255280 <anon.baa4d3160c6db26b1acb0467a3a6e91d.552.llvm.14045134056871974489+0x40>
  687c65:	ff 
  687c66:	66 0f 28 d7          	movapd xmm2,xmm7
  687c6a:	66 0f 15 d7          	unpckhpd xmm2,xmm7
  687c6e:	66 0f 28 a4 24 a0 00 	movapd xmm4,XMMWORD PTR [rsp+0xa0]
  687c75:	00 00 
  687c77:	66 0f 28 cc          	movapd xmm1,xmm4
  687c7b:	f2 0f 59 cb          	mulsd  xmm1,xmm3
  687c7f:	66 0f 29 4c 24 20    	movapd XMMWORD PTR [rsp+0x20],xmm1
  687c85:	66 0f 29 94 24 d0 00 	movapd XMMWORD PTR [rsp+0xd0],xmm2
  687c8c:	00 00 
  687c8e:	66 0f 29 bc 24 a0 01 	movapd XMMWORD PTR [rsp+0x1a0],xmm7
  687c95:	00 00 
  687c97:	75 02                	jne    687c9b <future_backtest::Customer::customer::Account::real_position_update+0x38b>
  687c99:	7b 7a                	jnp    687d15 <future_backtest::Customer::customer::Account::real_position_update+0x405>
  687c9b:	f2 0f 58 da          	addsd  xmm3,xmm2
  687c9f:	66 0f 57 c9          	xorpd  xmm1,xmm1
  687ca3:	66 0f 57 c0          	xorpd  xmm0,xmm0
  687ca7:	66 0f 29 84 24 b0 00 	movapd XMMWORD PTR [rsp+0xb0],xmm0
  687cae:	00 00 
  687cb0:	66 0f 2e d9          	ucomisd xmm3,xmm1
  687cb4:	66 0f 29 44 24 40    	movapd XMMWORD PTR [rsp+0x40],xmm0
  687cba:	4c 8b 64 24 08       	mov    r12,QWORD PTR [rsp+0x8]
  687cbf:	4c 8b 7c 24 38       	mov    r15,QWORD PTR [rsp+0x38]
  687cc4:	48 8b 9c 24 90 00 00 	mov    rbx,QWORD PTR [rsp+0x90]
  687ccb:	00 
  687ccc:	75 02                	jne    687cd0 <future_backtest::Customer::customer::Account::real_position_update+0x3c0>
  687cce:	7b 1d                	jnp    687ced <future_backtest::Customer::customer::Account::real_position_update+0x3dd>
  687cd0:	66 0f 28 84 24 a0 01 	movapd xmm0,XMMWORD PTR [rsp+0x1a0]
  687cd7:	00 00 
  687cd9:	f2 0f 59 c2          	mulsd  xmm0,xmm2
  687cdd:	f2 0f 58 44 24 20    	addsd  xmm0,QWORD PTR [rsp+0x20]
  687ce3:	f2 0f 5e c3          	divsd  xmm0,xmm3
  687ce7:	66 0f 29 44 24 40    	movapd XMMWORD PTR [rsp+0x40],xmm0
  687ced:	66 0f 29 5c 24 10    	movapd XMMWORD PTR [rsp+0x10],xmm3
  687cf3:	e9 8b 00 00 00       	jmp    687d83 <future_backtest::Customer::customer::Account::real_position_update+0x473>
  687cf8:	48 8d 3d 11 f3 1a 01 	lea    rdi,[rip+0x11af311]        # 1837010 <anon.d0b8e27bea7bf57269a32e15b6abf5cf.309.llvm.1643563994444475245+0x128>
  687cff:	e9 dc 02 00 00       	jmp    687fe0 <future_backtest::Customer::customer::Account::real_position_update+0x6d0>
  687d04:	4c 8b 64 24 08       	mov    r12,QWORD PTR [rsp+0x8]
  687d09:	48 8d 3d 18 f3 1a 01 	lea    rdi,[rip+0x11af318]        # 1837028 <anon.d0b8e27bea7bf57269a32e15b6abf5cf.309.llvm.1643563994444475245+0x140>
  687d10:	e9 cb 02 00 00       	jmp    687fe0 <future_backtest::Customer::customer::Account::real_position_update+0x6d0>
  687d15:	66 0f 28 f3          	movapd xmm6,xmm3
  687d19:	66 0f 28 0d ef 7b bc 	movapd xmm1,XMMWORD PTR [rip+0xffffffffffbc7bef]        # 24f910 <anon.23a7bc9302e079b368ad5af617974320.28.llvm.9485200918992093105+0x10>
  687d20:	ff 
  687d21:	66 0f 28 ea          	movapd xmm5,xmm2
  687d25:	66 0f 54 e9          	andpd  xmm5,xmm1
  687d29:	66 0f 54 cb          	andpd  xmm1,xmm3
  687d2d:	66 0f 2e e9          	ucomisd xmm5,xmm1
  687d31:	f2 0f 58 f2          	addsd  xmm6,xmm2
  687d35:	66 0f 29 74 24 10    	movapd XMMWORD PTR [rsp+0x10],xmm6
  687d3b:	66 0f 28 d4          	movapd xmm2,xmm4
  687d3f:	f2 0f 5c d7          	subsd  xmm2,xmm7
  687d43:	f2 0f 59 d0          	mulsd  xmm2,xmm0
  687d47:	4c 8b 64 24 08       	mov    r12,QWORD PTR [rsp+0x8]
  687d4c:	4c 8b 7c 24 38       	mov    r15,QWORD PTR [rsp+0x38]
  687d51:	48 8b 9c 24 90 00 00 	mov    rbx,QWORD PTR [rsp+0x90]
  687d58:	00 
  687d59:	76 15                	jbe    687d70 <future_backtest::Customer::customer::Account::real_position_update+0x460>
  687d5b:	f2 0f 59 ca          	mulsd  xmm1,xmm2
  687d5f:	66 0f 29 8c 24 b0 00 	movapd XMMWORD PTR [rsp+0xb0],xmm1
  687d66:	00 00 
  687d68:	66 0f 29 7c 24 40    	movapd XMMWORD PTR [rsp+0x40],xmm7
  687d6e:	eb 13                	jmp    687d83 <future_backtest::Customer::customer::Account::real_position_update+0x473>
  687d70:	f2 0f 59 ea          	mulsd  xmm5,xmm2
  687d74:	66 0f 29 ac 24 b0 00 	movapd XMMWORD PTR [rsp+0xb0],xmm5
  687d7b:	00 00 
  687d7d:	66 0f 29 64 24 40    	movapd XMMWORD PTR [rsp+0x40],xmm4
  687d83:	48 8d 15 b6 f2 1a 01 	lea    rdx,[rip+0x11af2b6]        # 1837040 <anon.d0b8e27bea7bf57269a32e15b6abf5cf.309.llvm.1643563994444475245+0x158>
  687d8a:	48 8d 7c 24 60       	lea    rdi,[rsp+0x60]
  687d8f:	4c 89 e6             	mov    rsi,r12
  687d92:	ff 15 a0 42 27 01    	call   QWORD PTR [rip+0x12742a0]        # 18fc038 <_DYNAMIC+0x738>
  687d98:	48 8d bc 24 30 01 00 	lea    rdi,[rsp+0x130]
  687d9f:	00 
  687da0:	48 8d 54 24 60       	lea    rdx,[rsp+0x60]
  687da5:	48 89 de             	mov    rsi,rbx
  687da8:	0f 28 44 24 40       	movaps xmm0,XMMWORD PTR [rsp+0x40]
  687dad:	0f 28 4c 24 10       	movaps xmm1,XMMWORD PTR [rsp+0x10]
  687db2:	e8 89 cc 2e 00       	call   974a40 <hashbrown::map::HashMap<K,V,S,A>::insert>
  687db7:	66 0f 28 15 51 7b bc 	movapd xmm2,XMMWORD PTR [rip+0xffffffffffbc7b51]        # 24f910 <anon.23a7bc9302e079b368ad5af617974320.28.llvm.9485200918992093105+0x10>
  687dbe:	ff 
  687dbf:	f2 0f 10 0d d1 db bc 	movsd  xmm1,QWORD PTR [rip+0xffffffffffbcdbd1]        # 255998 <anon.baa4d3160c6db26b1acb0467a3a6e91d.2061.llvm.14045134056871974489+0x30>
  687dc6:	ff 
  687dc7:	66 0f 28 84 24 00 01 	movapd xmm0,XMMWORD PTR [rsp+0x100]
  687dce:	00 00 
  687dd0:	66 0f 54 c2          	andpd  xmm0,xmm2
  687dd4:	66 0f 29 84 24 90 00 	movapd XMMWORD PTR [rsp+0x90],xmm0
  687ddb:	00 00 
  687ddd:	66 0f 2e c1          	ucomisd xmm0,xmm1
  687de1:	0f 86 0e 03 00 00    	jbe    6880f5 <future_backtest::Customer::customer::Account::real_position_update+0x7e5>
  687de7:	49 83 bf c8 09 00 00 	cmp    QWORD PTR [r15+0x9c8],0x0
  687dee:	00 
  687def:	0f 84 e4 01 00 00    	je     687fd9 <future_backtest::Customer::customer::Account::real_position_update+0x6c9>
  687df5:	49 8d bf d0 09 00 00 	lea    rdi,[r15+0x9d0]
  687dfc:	4c 89 e6             	mov    rsi,r12
  687dff:	e8 dc 32 0d 00       	call   75b0e0 <core::hash::BuildHasher::hash_one>
  687e04:	48 89 c1             	mov    rcx,rax
  687e07:	48 c1 e9 39          	shr    rcx,0x39
  687e0b:	4d 8b af b0 09 00 00 	mov    r13,QWORD PTR [r15+0x9b0]
  687e12:	49 8b b7 b8 09 00 00 	mov    rsi,QWORD PTR [r15+0x9b8]
  687e19:	66 0f 6e c1          	movd   xmm0,ecx
  687e1d:	66 0f 60 c0          	punpcklbw xmm0,xmm0
  687e21:	f2 0f 70 c0 00       	pshuflw xmm0,xmm0,0x0
  687e26:	66 0f 70 c8 00       	pshufd xmm1,xmm0,0x0
  687e2b:	4d 8d 45 98          	lea    r8,[r13-0x68]
  687e2f:	49 8b 6c 24 08       	mov    rbp,QWORD PTR [r12+0x8]
  687e34:	49 8b 5c 24 10       	mov    rbx,QWORD PTR [r12+0x10]
  687e39:	31 ff                	xor    edi,edi
  687e3b:	66 0f 76 d2          	pcmpeqd xmm2,xmm2
  687e3f:	48 21 f0             	and    rax,rsi
  687e42:	f3 41 0f 6f 5c 05 00 	movdqu xmm3,XMMWORD PTR [r13+rax*1+0x0]
  687e49:	66 0f 6f c3          	movdqa xmm0,xmm3
  687e4d:	66 0f 74 c1          	pcmpeqb xmm0,xmm1
  687e51:	66 44 0f d7 f8       	pmovmskb r15d,xmm0
  687e56:	45 85 ff             	test   r15d,r15d
  687e59:	0f 84 9c 00 00 00    	je     687efb <future_backtest::Customer::customer::Account::real_position_update+0x5eb>
  687e5f:	48 89 84 24 78 01 00 	mov    QWORD PTR [rsp+0x178],rax
  687e66:	00 
  687e67:	66 0f 7f 8c 24 e0 01 	movdqa XMMWORD PTR [rsp+0x1e0],xmm1
  687e6e:	00 00 
  687e70:	48 89 b4 24 70 01 00 	mov    QWORD PTR [rsp+0x170],rsi
  687e77:	00 
  687e78:	48 89 bc 24 68 01 00 	mov    QWORD PTR [rsp+0x168],rdi
  687e7f:	00 
  687e80:	66 0f 7f 9c 24 d0 01 	movdqa XMMWORD PTR [rsp+0x1d0],xmm3
  687e87:	00 00 
  687e89:	f3 41 0f bc cf       	tzcnt  ecx,r15d
  687e8e:	48 01 c1             	add    rcx,rax
  687e91:	48 21 f1             	and    rcx,rsi
  687e94:	48 f7 d9             	neg    rcx
  687e97:	4c 6b f1 68          	imul   r14,rcx,0x68
  687e9b:	4b 3b 5c 30 10       	cmp    rbx,QWORD PTR [r8+r14*1+0x10]
  687ea0:	75 1e                	jne    687ec0 <future_backtest::Customer::customer::Account::real_position_update+0x5b0>
  687ea2:	4b 8d 04 30          	lea    rax,[r8+r14*1]
  687ea6:	48 8b 70 08          	mov    rsi,QWORD PTR [rax+0x8]
  687eaa:	48 89 ef             	mov    rdi,rbp
  687ead:	4d 89 c4             	mov    r12,r8
  687eb0:	48 89 da             	mov    rdx,rbx
  687eb3:	ff 15 47 40 27 01    	call   QWORD PTR [rip+0x1274047]        # 18fbf00 <bcmp@GLIBC_2.2.5>
  687eb9:	4d 89 e0             	mov    r8,r12
  687ebc:	85 c0                	test   eax,eax
  687ebe:	74 5b                	je     687f1b <future_backtest::Customer::customer::Account::real_position_update+0x60b>
  687ec0:	41 8d 47 ff          	lea    eax,[r15-0x1]
  687ec4:	66 44 21 f8          	and    ax,r15w
  687ec8:	41 89 c7             	mov    r15d,eax
  687ecb:	48 8b 84 24 78 01 00 	mov    rax,QWORD PTR [rsp+0x178]
  687ed2:	00 
  687ed3:	66 0f 6f 8c 24 e0 01 	movdqa xmm1,XMMWORD PTR [rsp+0x1e0]
  687eda:	00 00 
  687edc:	48 8b b4 24 70 01 00 	mov    rsi,QWORD PTR [rsp+0x170]
  687ee3:	00 
  687ee4:	48 8b bc 24 68 01 00 	mov    rdi,QWORD PTR [rsp+0x168]
  687eeb:	00 
  687eec:	66 0f 76 d2          	pcmpeqd xmm2,xmm2
  687ef0:	66 0f 6f 9c 24 d0 01 	movdqa xmm3,XMMWORD PTR [rsp+0x1d0]
  687ef7:	00 00 
  687ef9:	75 8e                	jne    687e89 <future_backtest::Customer::customer::Account::real_position_update+0x579>
  687efb:	66 0f 74 da          	pcmpeqb xmm3,xmm2
  687eff:	66 0f d7 cb          	pmovmskb ecx,xmm3
  687f03:	85 c9                	test   ecx,ecx
  687f05:	0f 85 c9 00 00 00    	jne    687fd4 <future_backtest::Customer::customer::Account::real_position_update+0x6c4>
  687f0b:	48 01 f8             	add    rax,rdi
  687f0e:	48 83 c0 10          	add    rax,0x10
  687f12:	48 83 c7 10          	add    rdi,0x10
  687f16:	e9 24 ff ff ff       	jmp    687e3f <future_backtest::Customer::customer::Account::real_position_update+0x52f>
  687f1b:	4b 8d 04 2e          	lea    rax,[r14+r13*1]
  687f1f:	66 0f ef c0          	pxor   xmm0,xmm0
  687f23:	66 0f ef c9          	pxor   xmm1,xmm1
  687f27:	66 0f 28 6c 24 10    	movapd xmm5,XMMWORD PTR [rsp+0x10]
  687f2d:	66 0f c2 cd 02       	cmplepd xmm1,xmm5
  687f32:	f2 0f 10 15 5e da bc 	movsd  xmm2,QWORD PTR [rip+0xffffffffffbcda5e]        # 255998 <anon.baa4d3160c6db26b1acb0467a3a6e91d.2061.llvm.14045134056871974489+0x30>
  687f39:	ff 
  687f3a:	66 0f 28 a4 24 d0 00 	movapd xmm4,XMMWORD PTR [rsp+0xd0]
  687f41:	00 00 
  687f43:	66 0f 28 dc          	movapd xmm3,xmm4
  687f47:	66 0f c2 da 01       	cmpltpd xmm3,xmm2
  687f4c:	66 0f 54 d9          	andpd  xmm3,xmm1
  687f50:	66 0f 7e d9          	movd   ecx,xmm3
  687f54:	f6 c1 01             	test   cl,0x1
  687f57:	0f 85 8e 00 00 00    	jne    687feb <future_backtest::Customer::customer::Account::real_position_update+0x6db>
  687f5d:	66 0f 28 cd          	movapd xmm1,xmm5
  687f61:	66 0f c2 c8 02       	cmplepd xmm1,xmm0
  687f66:	f2 0f 10 15 12 ef bc 	movsd  xmm2,QWORD PTR [rip+0xffffffffffbcef12]        # 256e80 <anon.baa4d3160c6db26b1acb0467a3a6e91d.693.llvm.14045134056871974489+0x50>
  687f6d:	ff 
  687f6e:	66 0f c2 d4 01       	cmpltpd xmm2,xmm4
  687f73:	66 0f 54 d1          	andpd  xmm2,xmm1
  687f77:	66 0f 7e d1          	movd   ecx,xmm2
  687f7b:	f6 c1 01             	test   cl,0x1
  687f7e:	75 6b                	jne    687feb <future_backtest::Customer::customer::Account::real_position_update+0x6db>
  687f80:	66 0f 2e 25 10 da bc 	ucomisd xmm4,QWORD PTR [rip+0xffffffffffbcda10]        # 255998 <anon.baa4d3160c6db26b1acb0467a3a6e91d.2061.llvm.14045134056871974489+0x30>
  687f87:	ff 
  687f88:	4c 8b 64 24 08       	mov    r12,QWORD PTR [rsp+0x8]
  687f8d:	4c 8b 7c 24 38       	mov    r15,QWORD PTR [rsp+0x38]
  687f92:	0f 86 bc 00 00 00    	jbe    688054 <future_backtest::Customer::customer::Account::real_position_update+0x744>
  687f98:	f2 0f 10 05 f8 d9 bc 	movsd  xmm0,QWORD PTR [rip+0xffffffffffbcd9f8]        # 255998 <anon.baa4d3160c6db26b1acb0467a3a6e91d.2061.llvm.14045134056871974489+0x30>
  687f9f:	ff 
  687fa0:	f2 0f 58 c4          	addsd  xmm0,xmm4
  687fa4:	66 0f 28 4c 24 10    	movapd xmm1,XMMWORD PTR [rsp+0x10]
  687faa:	66 0f 2e c8          	ucomisd xmm1,xmm0
  687fae:	48 8d 54 24 60       	lea    rdx,[rsp+0x60]
  687fb3:	0f 87 ce 00 00 00    	ja     688087 <future_backtest::Customer::customer::Account::real_position_update+0x777>
  687fb9:	f2 0f 10 05 bf ee bc 	movsd  xmm0,QWORD PTR [rip+0xffffffffffbceebf]        # 256e80 <anon.baa4d3160c6db26b1acb0467a3a6e91d.693.llvm.14045134056871974489+0x50>
  687fc0:	ff 
  687fc1:	f2 0f 58 c4          	addsd  xmm0,xmm4
  687fc5:	66 0f 2e c1          	ucomisd xmm0,xmm1
  687fc9:	0f 87 35 07 00 00    	ja     688704 <future_backtest::Customer::customer::Account::real_position_update+0xdf4>
  687fcf:	e9 82 07 00 00       	jmp    688756 <future_backtest::Customer::customer::Account::real_position_update+0xe46>
  687fd4:	4c 8b 64 24 08       	mov    r12,QWORD PTR [rsp+0x8]
  687fd9:	48 8d 3d 78 f0 1a 01 	lea    rdi,[rip+0x11af078]        # 1837058 <anon.d0b8e27bea7bf57269a32e15b6abf5cf.309.llvm.1643563994444475245+0x170>
  687fe0:	ff 15 ca 3e 27 01    	call   QWORD PTR [rip+0x1273eca]        # 18fbeb0 <_DYNAMIC+0x5b0>
  687fe6:	e9 84 09 00 00       	jmp    68896f <future_backtest::Customer::customer::Account::real_position_update+0x105f>
  687feb:	66 0f 2e e8          	ucomisd xmm5,xmm0
  687fef:	4c 8b 64 24 08       	mov    r12,QWORD PTR [rsp+0x8]
  687ff4:	4c 8b 7c 24 38       	mov    r15,QWORD PTR [rsp+0x38]
  687ff9:	0f 85 a3 00 00 00    	jne    6880a2 <future_backtest::Customer::customer::Account::real_position_update+0x792>
  687fff:	0f 8a 9d 00 00 00    	jp     6880a2 <future_backtest::Customer::customer::Account::real_position_update+0x792>
  688005:	4b 8d 0c 2e          	lea    rcx,[r14+r13*1]
  688009:	48 83 c1 b0          	add    rcx,0xffffffffffffffb0
  68800d:	66 0f 57 c0          	xorpd  xmm0,xmm0
  688011:	66 0f 11 41 20       	movupd XMMWORD PTR [rcx+0x20],xmm0
  688016:	66 0f 11 41 10       	movupd XMMWORD PTR [rcx+0x10],xmm0
  68801b:	66 0f 11 01          	movupd XMMWORD PTR [rcx],xmm0
  68801f:	48 c7 41 30 00 00 00 	mov    QWORD PTR [rcx+0x30],0x0
  688026:	00 
  688027:	f2 0f 10 4c 24 58    	movsd  xmm1,QWORD PTR [rsp+0x58]
  68802d:	f2 0f 11 48 c8       	movsd  QWORD PTR [rax-0x38],xmm1
  688032:	66 0f 28 84 24 a0 00 	movapd xmm0,XMMWORD PTR [rsp+0xa0]
  688039:	00 00 
  68803b:	f2 0f 11 40 f0       	movsd  QWORD PTR [rax-0x10],xmm0
  688040:	f2 0f 11 48 d0       	movsd  QWORD PTR [rax-0x30],xmm1
  688045:	f2 0f 11 48 c0       	movsd  QWORD PTR [rax-0x40],xmm1
  68804a:	f2 0f 11 40 f8       	movsd  QWORD PTR [rax-0x8],xmm0
  68804f:	e9 94 00 00 00       	jmp    6880e8 <future_backtest::Customer::customer::Account::real_position_update+0x7d8>
  688054:	f2 0f 10 05 24 ee bc 	movsd  xmm0,QWORD PTR [rip+0xffffffffffbcee24]        # 256e80 <anon.baa4d3160c6db26b1acb0467a3a6e91d.693.llvm.14045134056871974489+0x50>
  68805b:	ff 
  68805c:	66 0f 2e c4          	ucomisd xmm0,xmm4
  688060:	48 8d 54 24 60       	lea    rdx,[rsp+0x60]
  688065:	0f 86 eb 06 00 00    	jbe    688756 <future_backtest::Customer::customer::Account::real_position_update+0xe46>
  68806b:	f2 0f 10 05 0d ee bc 	movsd  xmm0,QWORD PTR [rip+0xffffffffffbcee0d]        # 256e80 <anon.baa4d3160c6db26b1acb0467a3a6e91d.693.llvm.14045134056871974489+0x50>
  688072:	ff 
  688073:	f2 0f 58 c4          	addsd  xmm0,xmm4
  688077:	66 0f 28 4c 24 10    	movapd xmm1,XMMWORD PTR [rsp+0x10]
  68807d:	66 0f 2e c1          	ucomisd xmm0,xmm1
  688081:	0f 86 6b 06 00 00    	jbe    6886f2 <future_backtest::Customer::customer::Account::real_position_update+0xde2>
  688087:	f2 0f 10 44 24 58    	movsd  xmm0,QWORD PTR [rsp+0x58]
  68808d:	f2 0f 11 40 b8       	movsd  QWORD PTR [rax-0x48],xmm0
  688092:	f2 0f 11 40 c0       	movsd  QWORD PTR [rax-0x40],xmm0
  688097:	66 0f 28 84 24 a0 00 	movapd xmm0,XMMWORD PTR [rsp+0xa0]
  68809e:	00 00 
  6880a0:	eb 41                	jmp    6880e3 <future_backtest::Customer::customer::Account::real_position_update+0x7d3>
  6880a2:	48 8d 48 c8          	lea    rcx,[rax-0x38]
  6880a6:	66 0f 57 c0          	xorpd  xmm0,xmm0
  6880aa:	66 0f 11 41 20       	movupd XMMWORD PTR [rcx+0x20],xmm0
  6880af:	66 0f 11 41 10       	movupd XMMWORD PTR [rcx+0x10],xmm0
  6880b4:	66 0f 11 01          	movupd XMMWORD PTR [rcx],xmm0
  6880b8:	48 c7 41 30 00 00 00 	mov    QWORD PTR [rcx+0x30],0x0
  6880bf:	00 
  6880c0:	f2 0f 10 44 24 58    	movsd  xmm0,QWORD PTR [rsp+0x58]
  6880c6:	f2 0f 11 40 b0       	movsd  QWORD PTR [rax-0x50],xmm0
  6880cb:	f2 0f 11 40 b8       	movsd  QWORD PTR [rax-0x48],xmm0
  6880d0:	f2 0f 11 40 c0       	movsd  QWORD PTR [rax-0x40],xmm0
  6880d5:	66 0f 28 84 24 a0 00 	movapd xmm0,XMMWORD PTR [rsp+0xa0]
  6880dc:	00 00 
  6880de:	f2 0f 11 40 d8       	movsd  QWORD PTR [rax-0x28],xmm0
  6880e3:	f2 0f 11 40 e0       	movsd  QWORD PTR [rax-0x20],xmm0
  6880e8:	f2 0f 11 40 e8       	movsd  QWORD PTR [rax-0x18],xmm0
  6880ed:	66 0f 28 15 1b 78 bc 	movapd xmm2,XMMWORD PTR [rip+0xffffffffffbc781b]        # 24f910 <anon.23a7bc9302e079b368ad5af617974320.28.llvm.9485200918992093105+0x10>
  6880f4:	ff 
  6880f5:	66 0f 28 4c 24 20    	movapd xmm1,XMMWORD PTR [rsp+0x20]
  6880fb:	f2 0f 59 8c 24 e0 00 	mulsd  xmm1,QWORD PTR [rsp+0xe0]
  688102:	00 00 
  688104:	66 0f 54 ca          	andpd  xmm1,xmm2
  688108:	f2 41 0f 10 87 78 08 	movsd  xmm0,QWORD PTR [r15+0x878]
  68810f:	00 00 
  688111:	66 0f 29 4c 24 20    	movapd XMMWORD PTR [rsp+0x20],xmm1
  688117:	f2 0f 58 c1          	addsd  xmm0,xmm1
  68811b:	f2 41 0f 11 87 78 08 	movsd  QWORD PTR [r15+0x878],xmm0
  688122:	00 00 
  688124:	48 8b 84 24 28 01 00 	mov    rax,QWORD PTR [rsp+0x128]
  68812b:	00 
  68812c:	48 89 84 24 40 01 00 	mov    QWORD PTR [rsp+0x140],rax
  688133:	00 
  688134:	f3 0f 6f 84 24 18 01 	movdqu xmm0,XMMWORD PTR [rsp+0x118]
  68813b:	00 00 
  68813d:	66 0f 7f 84 24 30 01 	movdqa XMMWORD PTR [rsp+0x130],xmm0
  688144:	00 00 
  688146:	49 8d b7 98 07 00 00 	lea    rsi,[r15+0x798]
  68814d:	48 8d 7c 24 60       	lea    rdi,[rsp+0x60]
  688152:	48 8d 94 24 30 01 00 	lea    rdx,[rsp+0x130]
  688159:	00 
  68815a:	e8 11 9f 2e 00       	call   972070 <hashbrown::rustc_entry::<impl hashbrown::map::HashMap<K,V,S,A>>::rustc_entry>
  68815f:	48 8b 54 24 60       	mov    rdx,QWORD PTR [rsp+0x60]
  688164:	48 8b 44 24 68       	mov    rax,QWORD PTR [rsp+0x68]
  688169:	48 89 d1             	mov    rcx,rdx
  68816c:	48 f7 d9             	neg    rcx
  68816f:	0f 80 b3 00 00 00    	jo     688228 <future_backtest::Customer::customer::Account::real_position_update+0x918>
  688175:	48 8b 4c 24 78       	mov    rcx,QWORD PTR [rsp+0x78]
  68817a:	48 8b bc 24 80 00 00 	mov    rdi,QWORD PTR [rsp+0x80]
  688181:	00 
  688182:	48 8b 31             	mov    rsi,QWORD PTR [rcx]
  688185:	4c 8b 41 08          	mov    r8,QWORD PTR [rcx+0x8]
  688189:	4d 89 c2             	mov    r10,r8
  68818c:	49 21 fa             	and    r10,rdi
  68818f:	f3 42 0f 6f 04 16    	movdqu xmm0,XMMWORD PTR [rsi+r10*1]
  688195:	66 44 0f d7 d8       	pmovmskb r11d,xmm0
  68819a:	45 85 db             	test   r11d,r11d
  68819d:	0f 84 42 07 00 00    	je     6888e5 <future_backtest::Customer::customer::Account::real_position_update+0xfd5>
  6881a3:	4c 8b 4c 24 70       	mov    r9,QWORD PTR [rsp+0x70]
  6881a8:	f3 45 0f bc db       	tzcnt  r11d,r11d
  6881ad:	4d 01 d3             	add    r11,r10
  6881b0:	4d 21 c3             	and    r11,r8
  6881b3:	46 0f b6 14 1e       	movzx  r10d,BYTE PTR [rsi+r11*1]
  6881b8:	45 84 d2             	test   r10b,r10b
  6881bb:	0f 89 6f 07 00 00    	jns    688930 <future_backtest::Customer::customer::Account::real_position_update+0x1020>
  6881c1:	48 c1 ef 39          	shr    rdi,0x39
  6881c5:	49 8d 5b f0          	lea    rbx,[r11-0x10]
  6881c9:	4c 21 c3             	and    rbx,r8
  6881cc:	42 88 3c 1e          	mov    BYTE PTR [rsi+r11*1],dil
  6881d0:	40 88 7c 1e 10       	mov    BYTE PTR [rsi+rbx*1+0x10],dil
  6881d5:	49 f7 db             	neg    r11
  6881d8:	41 80 e2 01          	and    r10b,0x1
  6881dc:	41 0f b6 fa          	movzx  edi,r10b
  6881e0:	48 29 79 10          	sub    QWORD PTR [rcx+0x10],rdi
  6881e4:	4b 8d 3c 5b          	lea    rdi,[r11+r11*2]
  6881e8:	48 c1 e7 05          	shl    rdi,0x5
  6881ec:	48 89 54 3e a0       	mov    QWORD PTR [rsi+rdi*1-0x60],rdx
  6881f1:	48 89 44 3e a8       	mov    QWORD PTR [rsi+rdi*1-0x58],rax
  6881f6:	48 8d 04 3e          	lea    rax,[rsi+rdi*1]
  6881fa:	4c 89 4c 3e b0       	mov    QWORD PTR [rsi+rdi*1-0x50],r9
  6881ff:	66 0f ef c0          	pxor   xmm0,xmm0
  688203:	f3 0f 7f 44 3e b8    	movdqu XMMWORD PTR [rsi+rdi*1-0x48],xmm0
  688209:	f3 0f 7f 44 3e c8    	movdqu XMMWORD PTR [rsi+rdi*1-0x38],xmm0
  68820f:	f3 0f 7f 44 3e d8    	movdqu XMMWORD PTR [rsi+rdi*1-0x28],xmm0
  688215:	f3 0f 7f 44 3e e8    	movdqu XMMWORD PTR [rsi+rdi*1-0x18],xmm0
  68821b:	48 c7 44 3e f8 00 00 	mov    QWORD PTR [rsi+rdi*1-0x8],0x0
  688222:	00 00 
  688224:	48 ff 41 18          	inc    QWORD PTR [rcx+0x18]
  688228:	f2 0f 10 40 b8       	movsd  xmm0,QWORD PTR [rax-0x48]
  68822d:	f2 0f 58 44 24 20    	addsd  xmm0,QWORD PTR [rsp+0x20]
  688233:	f2 0f 11 40 b8       	movsd  QWORD PTR [rax-0x48],xmm0
  688238:	48 8d 15 61 ee 1a 01 	lea    rdx,[rip+0x11aee61]        # 18370a0 <anon.d0b8e27bea7bf57269a32e15b6abf5cf.309.llvm.1643563994444475245+0x1b8>
  68823f:	48 8d bc 24 30 01 00 	lea    rdi,[rsp+0x130]
  688246:	00 
  688247:	4c 89 e6             	mov    rsi,r12
  68824a:	ff 15 e8 3d 27 01    	call   QWORD PTR [rip+0x1273de8]        # 18fc038 <_DYNAMIC+0x738>
  688250:	48 8d 7c 24 60       	lea    rdi,[rsp+0x60]
  688255:	48 8d 94 24 30 01 00 	lea    rdx,[rsp+0x130]
  68825c:	00 
  68825d:	48 8b b4 24 f8 00 00 	mov    rsi,QWORD PTR [rsp+0xf8]
  688264:	00 
  688265:	e8 46 8a 2e 00       	call   970cb0 <hashbrown::rustc_entry::<impl hashbrown::map::HashMap<K,V,S,A>>::rustc_entry>
  68826a:	48 ba 00 00 00 00 00 	movabs rdx,0x8000000000000000
  688271:	00 00 80 
  688274:	48 8b 44 24 60       	mov    rax,QWORD PTR [rsp+0x60]
  688279:	4c 8b 64 24 68       	mov    r12,QWORD PTR [rsp+0x68]
  68827e:	f3 0f 6f 44 24 68    	movdqu xmm0,XMMWORD PTR [rsp+0x68]
  688284:	4c 8b 74 24 78       	mov    r14,QWORD PTR [rsp+0x78]
  688289:	48 8b 8c 24 80 00 00 	mov    rcx,QWORD PTR [rsp+0x80]
  688290:	00 
  688291:	66 0f 57 c9          	xorpd  xmm1,xmm1
  688295:	66 0f 11 8c 24 a8 03 	movupd XMMWORD PTR [rsp+0x3a8],xmm1
  68829c:	00 00 
  68829e:	66 0f 11 8c 24 b8 03 	movupd XMMWORD PTR [rsp+0x3b8],xmm1
  6882a5:	00 00 
  6882a7:	66 0f 11 8c 24 c8 03 	movupd XMMWORD PTR [rsp+0x3c8],xmm1
  6882ae:	00 00 
  6882b0:	66 0f 11 8c 24 d8 03 	movupd XMMWORD PTR [rsp+0x3d8],xmm1
  6882b7:	00 00 
  6882b9:	48 c7 84 24 e8 03 00 	mov    QWORD PTR [rsp+0x3e8],0x0
  6882c0:	00 00 00 00 00 
  6882c5:	66 0f 11 8c 24 70 03 	movupd XMMWORD PTR [rsp+0x370],xmm1
  6882cc:	00 00 
  6882ce:	48 c7 84 24 80 03 00 	mov    QWORD PTR [rsp+0x380],0x0
  6882d5:	00 00 00 00 00 
  6882da:	66 0f 11 4c 24 68    	movupd XMMWORD PTR [rsp+0x68],xmm1
  6882e0:	48 c7 44 24 78 00 00 	mov    QWORD PTR [rsp+0x78],0x0
  6882e7:	00 00 
  6882e9:	48 c7 84 24 10 02 00 	mov    QWORD PTR [rsp+0x210],0x0
  6882f0:	00 00 00 00 00 
  6882f5:	48 c7 84 24 20 02 00 	mov    QWORD PTR [rsp+0x220],0x0
  6882fc:	00 00 00 00 00 
  688301:	48 c7 84 24 30 02 00 	mov    QWORD PTR [rsp+0x230],0x0
  688308:	00 00 00 00 00 
  68830d:	48 c7 84 24 40 02 00 	mov    QWORD PTR [rsp+0x240],0x0
  688314:	00 00 00 00 00 
  688319:	48 c7 84 24 50 02 00 	mov    QWORD PTR [rsp+0x250],0x0
  688320:	00 00 00 00 00 
  688325:	48 c7 84 24 60 02 00 	mov    QWORD PTR [rsp+0x260],0x0
  68832c:	00 00 00 00 00 
  688331:	48 c7 84 24 70 02 00 	mov    QWORD PTR [rsp+0x270],0x0
  688338:	00 00 00 00 00 
  68833d:	48 c7 84 24 80 02 00 	mov    QWORD PTR [rsp+0x280],0x0
  688344:	00 00 00 00 00 
  688349:	48 c7 84 24 90 02 00 	mov    QWORD PTR [rsp+0x290],0x0
  688350:	00 00 00 00 00 
  688355:	48 c7 84 24 a0 02 00 	mov    QWORD PTR [rsp+0x2a0],0x0
  68835c:	00 00 00 00 00 
  688361:	48 c7 84 24 b0 02 00 	mov    QWORD PTR [rsp+0x2b0],0x0
  688368:	00 00 00 00 00 
  68836d:	48 c7 84 24 c0 02 00 	mov    QWORD PTR [rsp+0x2c0],0x0
  688374:	00 00 00 00 00 
  688379:	48 c7 84 24 d0 02 00 	mov    QWORD PTR [rsp+0x2d0],0x0
  688380:	00 00 00 00 00 
  688385:	66 0f 11 8c 24 f0 03 	movupd XMMWORD PTR [rsp+0x3f0],xmm1
  68838c:	00 00 
  68838e:	48 c7 84 24 d8 02 00 	mov    QWORD PTR [rsp+0x2d8],0x8
  688395:	00 08 00 00 00 
  68839a:	66 0f 11 8c 24 f0 02 	movupd XMMWORD PTR [rsp+0x2f0],xmm1
  6883a1:	00 00 
  6883a3:	66 0f 11 8c 24 e0 02 	movupd XMMWORD PTR [rsp+0x2e0],xmm1
  6883aa:	00 00 
  6883ac:	48 c7 84 24 00 03 00 	mov    QWORD PTR [rsp+0x300],0x0
  6883b3:	00 00 00 00 00 
  6883b8:	48 c7 84 24 08 03 00 	mov    QWORD PTR [rsp+0x308],0x8
  6883bf:	00 08 00 00 00 
  6883c4:	66 0f 11 8c 24 20 03 	movupd XMMWORD PTR [rsp+0x320],xmm1
  6883cb:	00 00 
  6883cd:	66 0f 11 8c 24 10 03 	movupd XMMWORD PTR [rsp+0x310],xmm1
  6883d4:	00 00 
  6883d6:	48 c7 84 24 30 03 00 	mov    QWORD PTR [rsp+0x330],0x0
  6883dd:	00 00 00 00 00 
  6883e2:	48 c7 84 24 38 03 00 	mov    QWORD PTR [rsp+0x338],0x8
  6883e9:	00 08 00 00 00 
  6883ee:	66 0f 11 8c 24 50 03 	movupd XMMWORD PTR [rsp+0x350],xmm1
  6883f5:	00 00 
  6883f7:	66 0f 11 8c 24 40 03 	movupd XMMWORD PTR [rsp+0x340],xmm1
  6883fe:	00 00 
  688400:	48 c7 84 24 60 03 00 	mov    QWORD PTR [rsp+0x360],0x0
  688407:	00 00 00 00 00 
  68840c:	66 0f 11 8c 24 10 04 	movupd XMMWORD PTR [rsp+0x410],xmm1
  688413:	00 00 
  688415:	66 0f 11 8c 24 00 04 	movupd XMMWORD PTR [rsp+0x400],xmm1
  68841c:	00 00 
  68841e:	48 c7 84 24 68 03 00 	mov    QWORD PTR [rsp+0x368],0x8
  688425:	00 08 00 00 00 
  68842a:	66 0f 10 54 24 60    	movupd xmm2,XMMWORD PTR [rsp+0x60]
  688430:	66 0f 10 5c 24 70    	movupd xmm3,XMMWORD PTR [rsp+0x70]
  688436:	66 0f 11 9c 24 98 03 	movupd XMMWORD PTR [rsp+0x398],xmm3
  68843d:	00 00 
  68843f:	66 0f 11 94 24 88 03 	movupd XMMWORD PTR [rsp+0x388],xmm2
  688446:	00 00 
  688448:	66 0f 11 8c 24 70 04 	movupd XMMWORD PTR [rsp+0x470],xmm1
  68844f:	00 00 
  688451:	66 0f 11 8c 24 60 04 	movupd XMMWORD PTR [rsp+0x460],xmm1
  688458:	00 00 
  68845a:	66 0f 11 8c 24 50 04 	movupd XMMWORD PTR [rsp+0x450],xmm1
  688461:	00 00 
  688463:	66 0f 11 8c 24 40 04 	movupd XMMWORD PTR [rsp+0x440],xmm1
  68846a:	00 00 
  68846c:	66 0f 11 8c 24 30 04 	movupd XMMWORD PTR [rsp+0x430],xmm1
  688473:	00 00 
  688475:	66 0f 11 8c 24 20 04 	movupd XMMWORD PTR [rsp+0x420],xmm1
  68847c:	00 00 
  68847e:	c7 84 24 7f 04 00 00 	mov    DWORD PTR [rsp+0x47f],0x0
  688485:	00 00 00 00 
  688489:	48 39 d0             	cmp    rax,rdx
  68848c:	75 1a                	jne    6884a8 <future_backtest::Customer::customer::Account::real_position_update+0xb98>
  68848e:	48 8d bc 24 80 03 00 	lea    rdi,[rsp+0x380]
  688495:	00 
  688496:	e8 95 4a ff ff       	call   67cf30 <<alloc::collections::btree::map::BTreeMap<K,V,A> as core::ops::drop::Drop>::drop>
  68849b:	48 8b 9c 24 c8 00 00 	mov    rbx,QWORD PTR [rsp+0xc8]
  6884a2:	00 
  6884a3:	e9 a2 00 00 00       	jmp    68854a <future_backtest::Customer::customer::Account::real_position_update+0xc3a>
  6884a8:	49 8b 16             	mov    rdx,QWORD PTR [r14]
  6884ab:	49 8b 76 08          	mov    rsi,QWORD PTR [r14+0x8]
  6884af:	48 89 f7             	mov    rdi,rsi
  6884b2:	48 21 cf             	and    rdi,rcx
  6884b5:	f3 0f 6f 0c 3a       	movdqu xmm1,XMMWORD PTR [rdx+rdi*1]
  6884ba:	66 44 0f d7 c1       	pmovmskb r8d,xmm1
  6884bf:	45 85 c0             	test   r8d,r8d
  6884c2:	48 8b 9c 24 c8 00 00 	mov    rbx,QWORD PTR [rsp+0xc8]
  6884c9:	00 
  6884ca:	0f 84 3b 04 00 00    	je     68890b <future_backtest::Customer::customer::Account::real_position_update+0xffb>
  6884d0:	f3 45 0f bc c0       	tzcnt  r8d,r8d
  6884d5:	49 01 f8             	add    r8,rdi
  6884d8:	49 21 f0             	and    r8,rsi
  6884db:	42 0f b6 3c 02       	movzx  edi,BYTE PTR [rdx+r8*1]
  6884e0:	40 84 ff             	test   dil,dil
  6884e3:	0f 89 5f 04 00 00    	jns    688948 <future_backtest::Customer::customer::Account::real_position_update+0x1038>
  6884e9:	48 c1 e9 39          	shr    rcx,0x39
  6884ed:	4d 8d 48 f0          	lea    r9,[r8-0x10]
  6884f1:	49 21 f1             	and    r9,rsi
  6884f4:	42 88 0c 02          	mov    BYTE PTR [rdx+r8*1],cl
  6884f8:	42 88 4c 0a 10       	mov    BYTE PTR [rdx+r9*1+0x10],cl
  6884fd:	49 f7 d8             	neg    r8
  688500:	49 69 c8 90 02 00 00 	imul   rcx,r8,0x290
  688507:	40 80 e7 01          	and    dil,0x1
  68850b:	40 0f b6 f7          	movzx  esi,dil
  68850f:	49 29 76 10          	sub    QWORD PTR [r14+0x10],rsi
  688513:	4c 8d 24 0a          	lea    r12,[rdx+rcx*1]
  688517:	48 89 84 0a 70 fd ff 	mov    QWORD PTR [rdx+rcx*1-0x290],rax
  68851e:	ff 
  68851f:	f3 0f 7f 84 0a 78 fd 	movdqu XMMWORD PTR [rdx+rcx*1-0x288],xmm0
  688526:	ff ff 
  688528:	48 8d 3c 0a          	lea    rdi,[rdx+rcx*1]
  68852c:	48 81 c7 88 fd ff ff 	add    rdi,0xfffffffffffffd88
  688533:	48 8d b4 24 10 02 00 	lea    rsi,[rsp+0x210]
  68853a:	00 
  68853b:	ba 78 02 00 00       	mov    edx,0x278
  688540:	ff 15 b2 39 27 01    	call   QWORD PTR [rip+0x12739b2]        # 18fbef8 <memcpy@GLIBC_2.14>
  688546:	49 ff 46 18          	inc    QWORD PTR [r14+0x18]
  68854a:	f2 41 0f 10 84 24 68 	movsd  xmm0,QWORD PTR [r12-0x98]
  688551:	ff ff ff 
  688554:	f2 0f 58 44 24 20    	addsd  xmm0,QWORD PTR [rsp+0x20]
  68855a:	f2 41 0f 11 84 24 68 	movsd  QWORD PTR [r12-0x98],xmm0
  688561:	ff ff ff 
  688564:	48 8b 4c 24 08       	mov    rcx,QWORD PTR [rsp+0x8]
  688569:	48 8b 41 10          	mov    rax,QWORD PTR [rcx+0x10]
  68856d:	48 89 44 24 70       	mov    QWORD PTR [rsp+0x70],rax
  688572:	66 0f 10 01          	movupd xmm0,XMMWORD PTR [rcx]
  688576:	66 0f 29 44 24 60    	movapd XMMWORD PTR [rsp+0x60],xmm0
  68857c:	48 8d 74 24 60       	lea    rsi,[rsp+0x60]
  688581:	4c 89 ff             	mov    rdi,r15
  688584:	ff 15 b6 38 27 01    	call   QWORD PTR [rip+0x12738b6]        # 18fbe40 <_DYNAMIC+0x540>
  68858a:	48 85 c0             	test   rax,rax
  68858d:	74 0c                	je     68859b <future_backtest::Customer::customer::Account::real_position_update+0xc8b>
  68858f:	48 89 03             	mov    QWORD PTR [rbx],rax
  688592:	c6 43 20 03          	mov    BYTE PTR [rbx+0x20],0x3
  688596:	e9 42 01 00 00       	jmp    6886dd <future_backtest::Customer::customer::Account::real_position_update+0xdcd>
  68859b:	66 0f 28 8c 24 d0 00 	movapd xmm1,XMMWORD PTR [rsp+0xd0]
  6885a2:	00 00 
  6885a4:	66 0f 28 c1          	movapd xmm0,xmm1
  6885a8:	f2 0f 10 1d e8 d3 bc 	movsd  xmm3,QWORD PTR [rip+0xffffffffffbcd3e8]        # 255998 <anon.baa4d3160c6db26b1acb0467a3a6e91d.2061.llvm.14045134056871974489+0x30>
  6885af:	ff 
  6885b0:	66 0f c2 c3 01       	cmpltpd xmm0,xmm3
  6885b5:	66 0f 28 54 24 10    	movapd xmm2,XMMWORD PTR [rsp+0x10]
  6885bb:	66 0f c2 da 01       	cmpltpd xmm3,xmm2
  6885c0:	66 0f 54 d8          	andpd  xmm3,xmm0
  6885c4:	f2 0f 10 05 b4 e8 bc 	movsd  xmm0,QWORD PTR [rip+0xffffffffffbce8b4]        # 256e80 <anon.baa4d3160c6db26b1acb0467a3a6e91d.693.llvm.14045134056871974489+0x50>
  6885cb:	ff 
  6885cc:	66 0f c2 d0 01       	cmpltpd xmm2,xmm0
  6885d1:	66 0f c2 c1 01       	cmpltpd xmm0,xmm1
  6885d6:	66 0f 54 c2          	andpd  xmm0,xmm2
  6885da:	66 0f 7e c1          	movd   ecx,xmm0
  6885de:	66 0f 7e d8          	movd   eax,xmm3
  6885e2:	09 c8                	or     eax,ecx
  6885e4:	66 0f 28 84 24 b0 00 	movapd xmm0,XMMWORD PTR [rsp+0xb0]
  6885eb:	00 00 
  6885ed:	f2 0f 59 84 24 e0 00 	mulsd  xmm0,QWORD PTR [rsp+0xe0]
  6885f4:	00 00 
  6885f6:	66 0f 29 84 24 b0 00 	movapd XMMWORD PTR [rsp+0xb0],xmm0
  6885fd:	00 00 
  6885ff:	48 8b 8c 24 80 01 00 	mov    rcx,QWORD PTR [rsp+0x180]
  688606:	00 
  688607:	80 b9 98 02 00 00 00 	cmp    BYTE PTR [rcx+0x298],0x0
  68860e:	66 0f 28 84 24 90 00 	movapd xmm0,XMMWORD PTR [rsp+0x90]
  688615:	00 00 
  688617:	75 06                	jne    68861f <future_backtest::Customer::customer::Account::real_position_update+0xd0f>
  688619:	66 0f 28 44 24 20    	movapd xmm0,XMMWORD PTR [rsp+0x20]
  68861f:	24 01                	and    al,0x1
  688621:	f2 0f 59 81 80 02 00 	mulsd  xmm0,QWORD PTR [rcx+0x280]
  688628:	00 
  688629:	66 0f 28 94 24 a0 00 	movapd xmm2,XMMWORD PTR [rsp+0xa0]
  688630:	00 00 
  688632:	f2 0f 59 94 24 90 00 	mulsd  xmm2,QWORD PTR [rsp+0x90]
  688639:	00 00 
  68863b:	66 0f 28 8c 24 f0 01 	movapd xmm1,XMMWORD PTR [rsp+0x1f0]
  688642:	00 00 
  688644:	66 0f 14 ca          	unpcklpd xmm1,xmm2
  688648:	66 0f 28 54 24 20    	movapd xmm2,XMMWORD PTR [rsp+0x20]
  68864e:	66 0f 14 94 24 e0 00 	unpcklpd xmm2,XMMWORD PTR [rsp+0xe0]
  688655:	00 00 
  688657:	66 0f 59 d1          	mulpd  xmm2,xmm1
  68865b:	66 0f 28 da          	movapd xmm3,xmm2
  68865f:	66 0f 28 ca          	movapd xmm1,xmm2
  688663:	f2 0f 58 c8          	addsd  xmm1,xmm0
  688667:	66 0f 28 94 24 b0 00 	movapd xmm2,XMMWORD PTR [rsp+0xb0]
  68866e:	00 00 
  688670:	f2 0f 5c d1          	subsd  xmm2,xmm1
  688674:	f2 41 0f 10 8f d0 07 	movsd  xmm1,QWORD PTR [r15+0x7d0]
  68867b:	00 00 
  68867d:	66 0f 28 e2          	movapd xmm4,xmm2
  688681:	f2 0f 58 ca          	addsd  xmm1,xmm2
  688685:	f2 41 0f 11 8f d0 07 	movsd  QWORD PTR [r15+0x7d0],xmm1
  68868c:	00 00 
  68868e:	b1 01                	mov    cl,0x1
  688690:	66 0f 28 94 24 d0 00 	movapd xmm2,XMMWORD PTR [rsp+0xd0]
  688697:	00 00 
  688699:	66 0f 2e 15 37 e0 bc 	ucomisd xmm2,QWORD PTR [rip+0xffffffffffbce037]        # 2566d8 <anon.baa4d3160c6db26b1acb0467a3a6e91d.582.llvm.14045134056871974489+0x48>
  6886a0:	ff 
  6886a1:	77 26                	ja     6886c9 <future_backtest::Customer::customer::Account::real_position_update+0xdb9>
  6886a3:	f2 0f 10 0d cd cb bc 	movsd  xmm1,QWORD PTR [rip+0xffffffffffbccbcd]        # 255278 <anon.baa4d3160c6db26b1acb0467a3a6e91d.552.llvm.14045134056871974489+0x38>
  6886aa:	ff 
  6886ab:	66 0f 2e ca          	ucomisd xmm1,xmm2
  6886af:	76 04                	jbe    6886b5 <future_backtest::Customer::customer::Account::real_position_update+0xda5>
  6886b1:	31 c9                	xor    ecx,ecx
  6886b3:	eb 14                	jmp    6886c9 <future_backtest::Customer::customer::Account::real_position_update+0xdb9>
  6886b5:	66 0f 28 8c 24 00 01 	movapd xmm1,XMMWORD PTR [rsp+0x100]
  6886bc:	00 00 
  6886be:	66 0f 2e 0d 12 e0 bc 	ucomisd xmm1,QWORD PTR [rip+0xffffffffffbce012]        # 2566d8 <anon.baa4d3160c6db26b1acb0467a3a6e91d.582.llvm.14045134056871974489+0x48>
  6886c5:	ff 
  6886c6:	0f 97 c1             	seta   cl
  6886c9:	f2 0f 11 23          	movsd  QWORD PTR [rbx],xmm4
  6886cd:	f2 0f 11 43 08       	movsd  QWORD PTR [rbx+0x8],xmm0
  6886d2:	66 0f 11 5b 10       	movupd XMMWORD PTR [rbx+0x10],xmm3
  6886d7:	88 4b 20             	mov    BYTE PTR [rbx+0x20],cl
  6886da:	88 43 21             	mov    BYTE PTR [rbx+0x21],al
  6886dd:	48 89 d8             	mov    rax,rbx
  6886e0:	48 81 c4 88 04 00 00 	add    rsp,0x488
  6886e7:	5b                   	pop    rbx
  6886e8:	41 5c                	pop    r12
  6886ea:	41 5d                	pop    r13
  6886ec:	41 5e                	pop    r14
  6886ee:	41 5f                	pop    r15
  6886f0:	5d                   	pop    rbp
  6886f1:	c3                   	ret    
  6886f2:	f2 0f 10 05 9e d2 bc 	movsd  xmm0,QWORD PTR [rip+0xffffffffffbcd29e]        # 255998 <anon.baa4d3160c6db26b1acb0467a3a6e91d.2061.llvm.14045134056871974489+0x30>
  6886f9:	ff 
  6886fa:	f2 0f 58 c4          	addsd  xmm0,xmm4
  6886fe:	66 0f 2e c8          	ucomisd xmm1,xmm0
  688702:	76 52                	jbe    688756 <future_backtest::Customer::customer::Account::real_position_update+0xe46>
  688704:	f2 0f 10 05 8c d2 bc 	movsd  xmm0,QWORD PTR [rip+0xffffffffffbcd28c]        # 255998 <anon.baa4d3160c6db26b1acb0467a3a6e91d.2061.llvm.14045134056871974489+0x30>
  68870b:	ff 
  68870c:	66 0f 2e 40 c8       	ucomisd xmm0,QWORD PTR [rax-0x38]
  688711:	f2 0f 10 4c 24 58    	movsd  xmm1,QWORD PTR [rsp+0x58]
  688717:	66 0f 28 15 f1 71 bc 	movapd xmm2,XMMWORD PTR [rip+0xffffffffffbc71f1]        # 24f910 <anon.23a7bc9302e079b368ad5af617974320.28.llvm.9485200918992093105+0x10>
  68871e:	ff 
  68871f:	76 13                	jbe    688734 <future_backtest::Customer::customer::Account::real_position_update+0xe24>
  688721:	f2 0f 11 48 c8       	movsd  QWORD PTR [rax-0x38],xmm1
  688726:	66 0f 28 84 24 a0 00 	movapd xmm0,XMMWORD PTR [rsp+0xa0]
  68872d:	00 00 
  68872f:	f2 0f 11 40 f0       	movsd  QWORD PTR [rax-0x10],xmm0
  688734:	f2 0f 11 48 d0       	movsd  QWORD PTR [rax-0x30],xmm1
  688739:	f2 0f 11 48 c0       	movsd  QWORD PTR [rax-0x40],xmm1
  68873e:	66 0f 28 84 24 a0 00 	movapd xmm0,XMMWORD PTR [rsp+0xa0]
  688745:	00 00 
  688747:	f2 0f 11 40 f8       	movsd  QWORD PTR [rax-0x8],xmm0
  68874c:	f2 0f 11 40 e8       	movsd  QWORD PTR [rax-0x18],xmm0
  688751:	e9 9f f9 ff ff       	jmp    6880f5 <future_backtest::Customer::customer::Account::real_position_update+0x7e5>
  688756:	0f 28 84 24 a0 01 00 	movaps xmm0,XMMWORD PTR [rsp+0x1a0]
  68875d:	00 
  68875e:	0f 29 84 24 00 02 00 	movaps XMMWORD PTR [rsp+0x200],xmm0
  688765:	00 
  688766:	0f 28 44 24 40       	movaps xmm0,XMMWORD PTR [rsp+0x40]
  68876b:	f2 0f 11 84 24 b0 01 	movsd  QWORD PTR [rsp+0x1b0],xmm0
  688772:	00 00 
  688774:	0f 28 44 24 10       	movaps xmm0,XMMWORD PTR [rsp+0x10]
  688779:	f2 0f 11 84 24 b8 01 	movsd  QWORD PTR [rsp+0x1b8],xmm0
  688780:	00 00 
  688782:	0f 28 84 24 a0 00 00 	movaps xmm0,XMMWORD PTR [rsp+0xa0]
  688789:	00 
  68878a:	f2 0f 11 84 24 c0 01 	movsd  QWORD PTR [rsp+0x1c0],xmm0
  688791:	00 00 
  688793:	0f 28 84 24 00 01 00 	movaps xmm0,XMMWORD PTR [rsp+0x100]
  68879a:	00 
  68879b:	f2 0f 11 84 24 c8 01 	movsd  QWORD PTR [rsp+0x1c8],xmm0
  6887a2:	00 00 
  6887a4:	48 8d 84 24 00 02 00 	lea    rax,[rsp+0x200]
  6887ab:	00 
  6887ac:	48 89 44 24 60       	mov    QWORD PTR [rsp+0x60],rax
  6887b1:	48 8d 05 98 bb 1c 00 	lea    rax,[rip+0x1cbb98]        # 854350 <<(U,T) as core::fmt::Debug>::fmt>
  6887b8:	48 89 44 24 68       	mov    QWORD PTR [rsp+0x68],rax
  6887bd:	48 8d 8c 24 b0 01 00 	lea    rcx,[rsp+0x1b0]
  6887c4:	00 
  6887c5:	48 89 4c 24 70       	mov    QWORD PTR [rsp+0x70],rcx
  6887ca:	48 89 44 24 78       	mov    QWORD PTR [rsp+0x78],rax
  6887cf:	48 8d 8c 24 c0 01 00 	lea    rcx,[rsp+0x1c0]
  6887d6:	00 
  6887d7:	48 89 8c 24 80 00 00 	mov    QWORD PTR [rsp+0x80],rcx
  6887de:	00 
  6887df:	48 89 84 24 88 00 00 	mov    QWORD PTR [rsp+0x88],rax
  6887e6:	00 
  6887e7:	48 8d 05 82 e8 1a 01 	lea    rax,[rip+0x11ae882]        # 1837070 <anon.d0b8e27bea7bf57269a32e15b6abf5cf.309.llvm.1643563994444475245+0x188>
  6887ee:	48 89 84 24 30 01 00 	mov    QWORD PTR [rsp+0x130],rax
  6887f5:	00 
  6887f6:	48 c7 84 24 38 01 00 	mov    QWORD PTR [rsp+0x138],0x3
  6887fd:	00 03 00 00 00 
  688802:	48 c7 84 24 50 01 00 	mov    QWORD PTR [rsp+0x150],0x0
  688809:	00 00 00 00 00 
  68880e:	48 89 94 24 40 01 00 	mov    QWORD PTR [rsp+0x140],rdx
  688815:	00 
  688816:	48 c7 84 24 48 01 00 	mov    QWORD PTR [rsp+0x148],0x3
  68881d:	00 03 00 00 00 
  688822:	48 8d bc 24 88 01 00 	lea    rdi,[rsp+0x188]
  688829:	00 
  68882a:	48 8d b4 24 30 01 00 	lea    rsi,[rsp+0x130]
  688831:	00 
  688832:	ff 15 20 38 27 01    	call   QWORD PTR [rip+0x1273820]        # 18fc058 <_DYNAMIC+0x758>
  688838:	4c 8b bc 24 88 01 00 	mov    r15,QWORD PTR [rsp+0x188]
  68883f:	00 
  688840:	4c 8b a4 24 90 01 00 	mov    r12,QWORD PTR [rsp+0x190]
  688847:	00 
  688848:	ff 15 f2 32 27 01    	call   QWORD PTR [rip+0x12732f2]        # 18fbb40 <_DYNAMIC+0x240>
  68884e:	bf 18 00 00 00       	mov    edi,0x18
  688853:	be 08 00 00 00       	mov    esi,0x8
  688858:	ff 15 ba 32 27 01    	call   QWORD PTR [rip+0x12732ba]        # 18fbb18 <_DYNAMIC+0x218>
  68885e:	48 85 c0             	test   rax,rax
  688861:	0f 84 f8 00 00 00    	je     68895f <future_backtest::Customer::customer::Account::real_position_update+0x104f>
  688867:	48 8b 8c 24 98 01 00 	mov    rcx,QWORD PTR [rsp+0x198]
  68886e:	00 
  68886f:	48 89 48 10          	mov    QWORD PTR [rax+0x10],rcx
  688873:	66 0f 10 84 24 88 01 	movupd xmm0,XMMWORD PTR [rsp+0x188]
  68887a:	00 00 
  68887c:	66 0f 11 00          	movupd XMMWORD PTR [rax],xmm0
  688880:	48 8d 35 19 e7 1a 01 	lea    rsi,[rip+0x11ae719]        # 1836fa0 <anon.d0b8e27bea7bf57269a32e15b6abf5cf.309.llvm.1643563994444475245+0xb8>
  688887:	48 89 c7             	mov    rdi,rax
  68888a:	4c 8b 64 24 08       	mov    r12,QWORD PTR [rsp+0x8]
  68888f:	e8 9c 69 2e 00       	call   96f230 <anyhow::error::<impl core::convert::From<E> for anyhow::Error>::from>
  688894:	48 8b 9c 24 c8 00 00 	mov    rbx,QWORD PTR [rsp+0xc8]
  68889b:	00 
  68889c:	48 89 03             	mov    QWORD PTR [rbx],rax
  68889f:	c6 43 20 03          	mov    BYTE PTR [rbx+0x20],0x3
  6888a3:	48 8b b4 24 18 01 00 	mov    rsi,QWORD PTR [rsp+0x118]
  6888aa:	00 
  6888ab:	48 85 f6             	test   rsi,rsi
  6888ae:	74 13                	je     6888c3 <future_backtest::Customer::customer::Account::real_position_update+0xfb3>
  6888b0:	48 8b bc 24 20 01 00 	mov    rdi,QWORD PTR [rsp+0x120]
  6888b7:	00 
  6888b8:	ba 01 00 00 00       	mov    edx,0x1
  6888bd:	ff 15 5d 32 27 01    	call   QWORD PTR [rip+0x127325d]        # 18fbb20 <_DYNAMIC+0x220>
  6888c3:	49 8b 34 24          	mov    rsi,QWORD PTR [r12]
  6888c7:	48 85 f6             	test   rsi,rsi
  6888ca:	0f 84 0d fe ff ff    	je     6886dd <future_backtest::Customer::customer::Account::real_position_update+0xdcd>
  6888d0:	49 8b 7c 24 08       	mov    rdi,QWORD PTR [r12+0x8]
  6888d5:	ba 01 00 00 00       	mov    edx,0x1
  6888da:	ff 15 40 32 27 01    	call   QWORD PTR [rip+0x1273240]        # 18fbb20 <_DYNAMIC+0x220>
  6888e0:	e9 f8 fd ff ff       	jmp    6886dd <future_backtest::Customer::customer::Account::real_position_update+0xdcd>
  6888e5:	41 b9 10 00 00 00    	mov    r9d,0x10
  6888eb:	4d 01 ca             	add    r10,r9
  6888ee:	4d 21 c2             	and    r10,r8
  6888f1:	f3 42 0f 6f 04 16    	movdqu xmm0,XMMWORD PTR [rsi+r10*1]
  6888f7:	66 44 0f d7 d8       	pmovmskb r11d,xmm0
  6888fc:	49 83 c1 10          	add    r9,0x10
  688900:	45 85 db             	test   r11d,r11d
  688903:	0f 85 9a f8 ff ff    	jne    6881a3 <future_backtest::Customer::customer::Account::real_position_update+0x893>
  688909:	eb e0                	jmp    6888eb <future_backtest::Customer::customer::Account::real_position_update+0xfdb>
  68890b:	41 b9 10 00 00 00    	mov    r9d,0x10
  688911:	4c 01 cf             	add    rdi,r9
  688914:	48 21 f7             	and    rdi,rsi
  688917:	f3 0f 6f 0c 3a       	movdqu xmm1,XMMWORD PTR [rdx+rdi*1]
  68891c:	66 44 0f d7 c1       	pmovmskb r8d,xmm1
  688921:	49 83 c1 10          	add    r9,0x10
  688925:	45 85 c0             	test   r8d,r8d
  688928:	0f 85 a2 fb ff ff    	jne    6884d0 <future_backtest::Customer::customer::Account::real_position_update+0xbc0>
  68892e:	eb e1                	jmp    688911 <future_backtest::Customer::customer::Account::real_position_update+0x1001>
  688930:	66 0f 6f 06          	movdqa xmm0,XMMWORD PTR [rsi]
  688934:	66 44 0f d7 d0       	pmovmskb r10d,xmm0
  688939:	f3 45 0f bc da       	tzcnt  r11d,r10d
  68893e:	46 0f b6 14 1e       	movzx  r10d,BYTE PTR [rsi+r11*1]
  688943:	e9 79 f8 ff ff       	jmp    6881c1 <future_backtest::Customer::customer::Account::real_position_update+0x8b1>
  688948:	66 0f 6f 0a          	movdqa xmm1,XMMWORD PTR [rdx]
  68894c:	66 0f d7 f9          	pmovmskb edi,xmm1
  688950:	f3 44 0f bc c7       	tzcnt  r8d,edi
  688955:	42 0f b6 3c 02       	movzx  edi,BYTE PTR [rdx+r8*1]
  68895a:	e9 8a fb ff ff       	jmp    6884e9 <future_backtest::Customer::customer::Account::real_position_update+0xbd9>
  68895f:	bf 08 00 00 00       	mov    edi,0x8
  688964:	be 18 00 00 00       	mov    esi,0x18
  688969:	ff 15 01 36 27 01    	call   QWORD PTR [rip+0x1273601]        # 18fbf70 <_DYNAMIC+0x670>
  68896f:	0f 0b                	ud2    
  688971:	49 89 c6             	mov    r14,rax
  688974:	4c 8b 64 24 08       	mov    r12,QWORD PTR [rsp+0x8]
  688979:	49 8b 34 24          	mov    rsi,QWORD PTR [r12]
  68897d:	48 85 f6             	test   rsi,rsi
  688980:	74 61                	je     6889e3 <future_backtest::Customer::customer::Account::real_position_update+0x10d3>
  688982:	e9 80 00 00 00       	jmp    688a07 <future_backtest::Customer::customer::Account::real_position_update+0x10f7>
  688987:	49 89 c6             	mov    r14,rax
  68898a:	49 8b 34 24          	mov    rsi,QWORD PTR [r12]
  68898e:	48 85 f6             	test   rsi,rsi
  688991:	74 50                	je     6889e3 <future_backtest::Customer::customer::Account::real_position_update+0x10d3>
  688993:	eb 72                	jmp    688a07 <future_backtest::Customer::customer::Account::real_position_update+0x10f7>
  688995:	49 89 c6             	mov    r14,rax
  688998:	49 8b 34 24          	mov    rsi,QWORD PTR [r12]
  68899c:	48 85 f6             	test   rsi,rsi
  68899f:	74 42                	je     6889e3 <future_backtest::Customer::customer::Account::real_position_update+0x10d3>
  6889a1:	eb 64                	jmp    688a07 <future_backtest::Customer::customer::Account::real_position_update+0x10f7>
  6889a3:	49 89 c6             	mov    r14,rax
  6889a6:	4d 85 ff             	test   r15,r15
  6889a9:	75 07                	jne    6889b2 <future_backtest::Customer::customer::Account::real_position_update+0x10a2>
  6889ab:	4c 8b 64 24 08       	mov    r12,QWORD PTR [rsp+0x8]
  6889b0:	eb 1b                	jmp    6889cd <future_backtest::Customer::customer::Account::real_position_update+0x10bd>
  6889b2:	ba 01 00 00 00       	mov    edx,0x1
  6889b7:	4c 89 e7             	mov    rdi,r12
  6889ba:	4c 89 fe             	mov    rsi,r15
  6889bd:	ff 15 5d 31 27 01    	call   QWORD PTR [rip+0x127315d]        # 18fbb20 <_DYNAMIC+0x220>
  6889c3:	4c 8b 64 24 08       	mov    r12,QWORD PTR [rsp+0x8]
  6889c8:	eb 03                	jmp    6889cd <future_backtest::Customer::customer::Account::real_position_update+0x10bd>
  6889ca:	49 89 c6             	mov    r14,rax
  6889cd:	48 8b b4 24 18 01 00 	mov    rsi,QWORD PTR [rsp+0x118]
  6889d4:	00 
  6889d5:	48 85 f6             	test   rsi,rsi
  6889d8:	75 11                	jne    6889eb <future_backtest::Customer::customer::Account::real_position_update+0x10db>
  6889da:	49 8b 34 24          	mov    rsi,QWORD PTR [r12]
  6889de:	48 85 f6             	test   rsi,rsi
  6889e1:	75 24                	jne    688a07 <future_backtest::Customer::customer::Account::real_position_update+0x10f7>
  6889e3:	4c 89 f7             	mov    rdi,r14
  6889e6:	e8 85 bf 1a 01       	call   1834970 <_Unwind_Resume@plt>
  6889eb:	48 8b bc 24 20 01 00 	mov    rdi,QWORD PTR [rsp+0x120]
  6889f2:	00 
  6889f3:	ba 01 00 00 00       	mov    edx,0x1
  6889f8:	ff 15 22 31 27 01    	call   QWORD PTR [rip+0x1273122]        # 18fbb20 <_DYNAMIC+0x220>
  6889fe:	49 8b 34 24          	mov    rsi,QWORD PTR [r12]
  688a02:	48 85 f6             	test   rsi,rsi
  688a05:	74 dc                	je     6889e3 <future_backtest::Customer::customer::Account::real_position_update+0x10d3>
  688a07:	49 8b 7c 24 08       	mov    rdi,QWORD PTR [r12+0x8]
  688a0c:	ba 01 00 00 00       	mov    edx,0x1
  688a11:	ff 15 09 31 27 01    	call   QWORD PTR [rip+0x1273109]        # 18fbb20 <_DYNAMIC+0x220>
  688a17:	4c 89 f7             	mov    rdi,r14
  688a1a:	e8 51 bf 1a 01       	call   1834970 <_Unwind_Resume@plt>
