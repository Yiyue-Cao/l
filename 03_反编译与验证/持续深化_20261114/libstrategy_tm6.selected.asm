000000000005f7d0 <strategy_tm6::signal_pairs_tree::SignalPairsTree::debug_string>:
   5f7d0:	55                   	push   rbp
   5f7d1:	41 57                	push   r15
   5f7d3:	41 56                	push   r14
   5f7d5:	41 55                	push   r13
   5f7d7:	41 54                	push   r12
   5f7d9:	53                   	push   rbx
   5f7da:	48 81 ec 78 01 00 00 	sub    rsp,0x178
   5f7e1:	48 c7 04 24 00 00 00 	mov    QWORD PTR [rsp],0x0
   5f7e8:	00 
   5f7e9:	48 c7 44 24 08 08 00 	mov    QWORD PTR [rsp+0x8],0x8
   5f7f0:	00 00 
   5f7f2:	48 c7 44 24 10 00 00 	mov    QWORD PTR [rsp+0x10],0x0
   5f7f9:	00 00 
   5f7fb:	48 8b 46 20          	mov    rax,QWORD PTR [rsi+0x20]
   5f7ff:	48 8b 4e 28          	mov    rcx,QWORD PTR [rsi+0x28]
   5f803:	31 d2                	xor    edx,edx
   5f805:	49 89 c0             	mov    r8,rax
   5f808:	48 85 c0             	test   rax,rax
   5f80b:	0f 95 c2             	setne  dl
   5f80e:	74 04                	je     5f814 <strategy_tm6::signal_pairs_tree::SignalPairsTree::debug_string+0x44>
   5f810:	4c 8b 46 30          	mov    r8,QWORD PTR [rsi+0x30]
   5f814:	48 89 94 24 10 01 00 	mov    QWORD PTR [rsp+0x110],rdx
   5f81b:	00 
   5f81c:	48 c7 84 24 18 01 00 	mov    QWORD PTR [rsp+0x118],0x0
   5f823:	00 00 00 00 00 
   5f828:	48 89 84 24 20 01 00 	mov    QWORD PTR [rsp+0x120],rax
   5f82f:	00 
   5f830:	48 89 8c 24 28 01 00 	mov    QWORD PTR [rsp+0x128],rcx
   5f837:	00 
   5f838:	48 89 94 24 30 01 00 	mov    QWORD PTR [rsp+0x130],rdx
   5f83f:	00 
   5f840:	48 c7 84 24 38 01 00 	mov    QWORD PTR [rsp+0x138],0x0
   5f847:	00 00 00 00 00 
   5f84c:	48 89 84 24 40 01 00 	mov    QWORD PTR [rsp+0x140],rax
   5f853:	00 
   5f854:	48 89 8c 24 48 01 00 	mov    QWORD PTR [rsp+0x148],rcx
   5f85b:	00 
   5f85c:	4c 89 84 24 50 01 00 	mov    QWORD PTR [rsp+0x150],r8
   5f863:	00 
   5f864:	48 8b 46 38          	mov    rax,QWORD PTR [rsi+0x38]
   5f868:	48 89 84 24 c8 00 00 	mov    QWORD PTR [rsp+0xc8],rax
   5f86f:	00 
   5f870:	48 85 c0             	test   rax,rax
   5f873:	48 89 bc 24 b8 00 00 	mov    QWORD PTR [rsp+0xb8],rdi
   5f87a:	00 
   5f87b:	0f 84 ee 03 00 00    	je     5fc6f <strategy_tm6::signal_pairs_tree::SignalPairsTree::debug_string+0x49f>
   5f881:	48 8b 46 40          	mov    rax,QWORD PTR [rsi+0x40]
   5f885:	48 89 84 24 c0 00 00 	mov    QWORD PTR [rsp+0xc0],rax
   5f88c:	00 
   5f88d:	4c 8d bc 24 88 00 00 	lea    r15,[rsp+0x88]
   5f894:	00 
   5f895:	4c 8d 6c 24 18       	lea    r13,[rsp+0x18]
   5f89a:	48 8b 2d b7 9a 07 00 	mov    rbp,QWORD PTR [rip+0x79ab7]        # d9358 <_DYNAMIC+0x328>
   5f8a1:	4c 8d 25 48 e1 ff ff 	lea    r12,[rip+0xffffffffffffe148]        # 5d9f0 <<alloc::string::String as core::fmt::Display>::fmt>
   5f8a8:	0f 1f 84 00 00 00 00 	nop    DWORD PTR [rax+rax*1+0x0]
   5f8af:	00 
   5f8b0:	48 8d bc 24 10 01 00 	lea    rdi,[rsp+0x110]
   5f8b7:	00 
   5f8b8:	e8 e3 e4 fe ff       	call   4dda0 <<alloc::collections::btree::map::Iter<K,V> as core::iter::traits::iterator::Iterator>::next>
   5f8bd:	48 85 c0             	test   rax,rax
   5f8c0:	0f 84 bf 03 00 00    	je     5fc85 <strategy_tm6::signal_pairs_tree::SignalPairsTree::debug_string+0x4b5>
   5f8c6:	48 89 d3             	mov    rbx,rdx
   5f8c9:	48 89 44 24 48       	mov    QWORD PTR [rsp+0x48],rax
   5f8ce:	48 8b 08             	mov    rcx,QWORD PTR [rax]
   5f8d1:	48 8b 94 24 c0 00 00 	mov    rdx,QWORD PTR [rsp+0xc0]
   5f8d8:	00 
   5f8d9:	48 8b 84 24 c8 00 00 	mov    rax,QWORD PTR [rsp+0xc8]
   5f8e0:	00 
   5f8e1:	0f b7 b8 c2 01 00 00 	movzx  edi,WORD PTR [rax+0x1c2]
   5f8e8:	41 89 f9             	mov    r9d,edi
   5f8eb:	41 c1 e1 05          	shl    r9d,0x5
   5f8ef:	48 c7 c6 ff ff ff ff 	mov    rsi,0xffffffffffffffff
   5f8f6:	45 31 c0             	xor    r8d,r8d
   5f8f9:	0f 1f 80 00 00 00 00 	nop    DWORD PTR [rax+0x0]
   5f900:	4d 89 ca             	mov    r10,r9
   5f903:	4d 01 c2             	add    r10,r8
   5f906:	74 28                	je     5f930 <strategy_tm6::signal_pairs_tree::SignalPairsTree::debug_string+0x160>
   5f908:	48 3b 8c f0 70 01 00 	cmp    rcx,QWORD PTR [rax+rsi*8+0x170]
   5f90f:	00 
   5f910:	41 0f 97 c2          	seta   r10b
   5f914:	41 80 da 00          	sbb    r10b,0x0
   5f918:	48 ff c6             	inc    rsi
   5f91b:	49 83 c0 e0          	add    r8,0xffffffffffffffe0
   5f91f:	41 80 fa 01          	cmp    r10b,0x1
   5f923:	74 db                	je     5f900 <strategy_tm6::signal_pairs_tree::SignalPairsTree::debug_string+0x130>
   5f925:	41 0f b6 fa          	movzx  edi,r10b
   5f929:	85 ff                	test   edi,edi
   5f92b:	74 23                	je     5f950 <strategy_tm6::signal_pairs_tree::SignalPairsTree::debug_string+0x180>
   5f92d:	eb 04                	jmp    5f933 <strategy_tm6::signal_pairs_tree::SignalPairsTree::debug_string+0x163>
   5f92f:	90                   	nop
   5f930:	48 89 fe             	mov    rsi,rdi
   5f933:	48 83 ea 01          	sub    rdx,0x1
   5f937:	0f 82 0d 04 00 00    	jb     5fd4a <strategy_tm6::signal_pairs_tree::SignalPairsTree::debug_string+0x57a>
   5f93d:	48 8b 84 f0 c8 01 00 	mov    rax,QWORD PTR [rax+rsi*8+0x1c8]
   5f944:	00 
   5f945:	eb 9a                	jmp    5f8e1 <strategy_tm6::signal_pairs_tree::SignalPairsTree::debug_string+0x111>
   5f947:	66 0f 1f 84 00 00 00 	nop    WORD PTR [rax+rax*1+0x0]
   5f94e:	00 00 
   5f950:	4c 29 c0             	sub    rax,r8
   5f953:	48 83 c0 e0          	add    rax,0xffffffffffffffe0
   5f957:	48 89 84 24 d0 00 00 	mov    QWORD PTR [rsp+0xd0],rax
   5f95e:	00 
   5f95f:	48 8d 44 24 48       	lea    rax,[rsp+0x48]
   5f964:	48 89 84 24 88 00 00 	mov    QWORD PTR [rsp+0x88],rax
   5f96b:	00 
   5f96c:	48 8d 05 8d 0f 00 00 	lea    rax,[rip+0xf8d]        # 60900 <<&T as core::fmt::Display>::fmt>
   5f973:	48 89 84 24 90 00 00 	mov    QWORD PTR [rsp+0x90],rax
   5f97a:	00 
   5f97b:	48 8d 84 24 d0 00 00 	lea    rax,[rsp+0xd0]
   5f982:	00 
   5f983:	48 89 84 24 98 00 00 	mov    QWORD PTR [rsp+0x98],rax
   5f98a:	00 
   5f98b:	48 8d 05 be 05 00 00 	lea    rax,[rip+0x5be]        # 5ff50 <<&T as core::fmt::Debug>::fmt>
   5f992:	48 89 84 24 a0 00 00 	mov    QWORD PTR [rsp+0xa0],rax
   5f999:	00 
   5f99a:	48 8d 05 47 4a 07 00 	lea    rax,[rip+0x74a47]        # d43e8 <anon.d4a1fc886ee21fee57a5c323490ee03a.47.llvm.17305594220767975752+0x30>
   5f9a1:	48 89 44 24 18       	mov    QWORD PTR [rsp+0x18],rax
   5f9a6:	48 c7 44 24 20 02 00 	mov    QWORD PTR [rsp+0x20],0x2
   5f9ad:	00 00 
   5f9af:	48 c7 44 24 38 00 00 	mov    QWORD PTR [rsp+0x38],0x0
   5f9b6:	00 00 
   5f9b8:	4c 89 7c 24 28       	mov    QWORD PTR [rsp+0x28],r15
   5f9bd:	48 c7 44 24 30 02 00 	mov    QWORD PTR [rsp+0x30],0x2
   5f9c4:	00 00 
   5f9c6:	48 8d bc 24 e0 00 00 	lea    rdi,[rsp+0xe0]
   5f9cd:	00 
   5f9ce:	4c 89 ee             	mov    rsi,r13
   5f9d1:	ff d5                	call   rbp
   5f9d3:	66 0f 10 84 24 e0 00 	movupd xmm0,XMMWORD PTR [rsp+0xe0]
   5f9da:	00 00 
   5f9dc:	66 0f 29 44 24 50    	movapd XMMWORD PTR [rsp+0x50],xmm0
   5f9e2:	48 8b 84 24 f0 00 00 	mov    rax,QWORD PTR [rsp+0xf0]
   5f9e9:	00 
   5f9ea:	48 89 44 24 60       	mov    QWORD PTR [rsp+0x60],rax
   5f9ef:	48 89 df             	mov    rdi,rbx
   5f9f2:	e8 39 e6 ff ff       	call   5e030 <_ZN12strategy_tm617signal_pairs_tree15SignalPairStats28get_pairs_time_sec_ms_median17h4a9fe67d7a117850E.llvm.17305594220767975752>
   5f9f7:	48 89 84 24 58 01 00 	mov    QWORD PTR [rsp+0x158],rax
   5f9fe:	00 
   5f9ff:	f2 0f 11 84 24 60 01 	movsd  QWORD PTR [rsp+0x160],xmm0
   5fa06:	00 00 
   5fa08:	4c 8b 73 18          	mov    r14,QWORD PTR [rbx+0x18]
   5fa0c:	4d 85 f6             	test   r14,r14
   5fa0f:	0f 84 ab 00 00 00    	je     5fac0 <strategy_tm6::signal_pairs_tree::SignalPairsTree::debug_string+0x2f0>
   5fa15:	48 8b 43 10          	mov    rax,QWORD PTR [rbx+0x10]
   5fa19:	48 8b 0b             	mov    rcx,QWORD PTR [rbx]
   5fa1c:	48 8b 53 08          	mov    rdx,QWORD PTR [rbx+0x8]
   5fa20:	48 39 c8             	cmp    rax,rcx
   5fa23:	48 89 ce             	mov    rsi,rcx
   5fa26:	41 b8 00 00 00 00    	mov    r8d,0x0
   5fa2c:	49 0f 42 f0          	cmovb  rsi,r8
   5fa30:	48 29 f0             	sub    rax,rsi
   5fa33:	48 89 ce             	mov    rsi,rcx
   5fa36:	48 29 c6             	sub    rsi,rax
   5fa39:	4a 8d 3c 30          	lea    rdi,[rax+r14*1]
   5fa3d:	4c 39 f6             	cmp    rsi,r14
   5fa40:	48 0f 42 f9          	cmovb  rdi,rcx
   5fa44:	4c 89 f1             	mov    rcx,r14
   5fa47:	48 29 f1             	sub    rcx,rsi
   5fa4a:	49 0f 42 c8          	cmovb  rcx,r8
   5fa4e:	48 6b c0 68          	imul   rax,rax,0x68
   5fa52:	48 01 d0             	add    rax,rdx
   5fa55:	48 6b f7 68          	imul   rsi,rdi,0x68
   5fa59:	48 01 d6             	add    rsi,rdx
   5fa5c:	48 6b c9 68          	imul   rcx,rcx,0x68
   5fa60:	48 01 d1             	add    rcx,rdx
   5fa63:	48 89 44 24 18       	mov    QWORD PTR [rsp+0x18],rax
   5fa68:	48 89 74 24 20       	mov    QWORD PTR [rsp+0x20],rsi
   5fa6d:	48 89 54 24 28       	mov    QWORD PTR [rsp+0x28],rdx
   5fa72:	48 89 4c 24 30       	mov    QWORD PTR [rsp+0x30],rcx
   5fa77:	4c 89 ef             	mov    rdi,r13
   5fa7a:	f2 0f 10 05 86 7b fb 	movsd  xmm0,QWORD PTR [rip+0xfffffffffffb7b86]        # 17608 <anon.8d7226ba1ba94417efa9e0a1e98803de.1.llvm.16032588982719308145+0x178>
   5fa81:	ff 
   5fa82:	e8 a9 b3 ff ff       	call   5ae30 <<alloc::collections::vec_deque::iter::Iter<T> as core::iter::traits::iterator::Iterator>::fold>
   5fa87:	66 49 0f 6e ce       	movq   xmm1,r14
   5fa8c:	66 0f 62 0d 9c 75 fb 	punpckldq xmm1,XMMWORD PTR [rip+0xfffffffffffb759c]        # 17030 <anon.1907589fa464e488346b0cbfb2429808.2.llvm.14402732174179579021+0x10>
   5fa93:	ff 
   5fa94:	66 0f 5c 0d 74 74 fb 	subpd  xmm1,XMMWORD PTR [rip+0xfffffffffffb7474]        # 16f10 <anon.84b81842f6ece4ef384f96787a9b6679.11.llvm.2651914475104588711+0x383>
   5fa9b:	ff 
   5fa9c:	66 0f 28 d1          	movapd xmm2,xmm1
   5faa0:	66 0f 15 d1          	unpckhpd xmm2,xmm1
   5faa4:	f2 0f 58 d1          	addsd  xmm2,xmm1
   5faa8:	f2 0f 5e c2          	divsd  xmm0,xmm2
   5faac:	b8 01 00 00 00       	mov    eax,0x1
   5fab1:	eb 0f                	jmp    5fac2 <strategy_tm6::signal_pairs_tree::SignalPairsTree::debug_string+0x2f2>
   5fab3:	66 66 66 66 2e 0f 1f 	data16 data16 data16 cs nop WORD PTR [rax+rax*1+0x0]
   5faba:	84 00 00 00 00 00 
   5fac0:	31 c0                	xor    eax,eax
   5fac2:	48 89 84 24 68 01 00 	mov    QWORD PTR [rsp+0x168],rax
   5fac9:	00 
   5faca:	f2 0f 11 84 24 70 01 	movsd  QWORD PTR [rsp+0x170],xmm0
   5fad1:	00 00 
   5fad3:	48 8b 43 18          	mov    rax,QWORD PTR [rbx+0x18]
   5fad7:	48 89 84 24 d8 00 00 	mov    QWORD PTR [rsp+0xd8],rax
   5fade:	00 
   5fadf:	48 8d 84 24 58 01 00 	lea    rax,[rsp+0x158]
   5fae6:	00 
   5fae7:	48 89 44 24 18       	mov    QWORD PTR [rsp+0x18],rax
   5faec:	48 8d 05 2d e0 ff ff 	lea    rax,[rip+0xffffffffffffe02d]        # 5db20 <<core::option::Option<T> as core::fmt::Debug>::fmt>
   5faf3:	48 89 44 24 20       	mov    QWORD PTR [rsp+0x20],rax
   5faf8:	48 8d 8c 24 68 01 00 	lea    rcx,[rsp+0x168]
   5faff:	00 
   5fb00:	48 89 4c 24 28       	mov    QWORD PTR [rsp+0x28],rcx
   5fb05:	48 89 44 24 30       	mov    QWORD PTR [rsp+0x30],rax
   5fb0a:	48 8d 84 24 d8 00 00 	lea    rax,[rsp+0xd8]
   5fb11:	00 
   5fb12:	48 89 44 24 38       	mov    QWORD PTR [rsp+0x38],rax
   5fb17:	48 8b 05 b2 9a 07 00 	mov    rax,QWORD PTR [rip+0x79ab2]        # d95d0 <_DYNAMIC+0x5a0>
   5fb1e:	48 89 44 24 40       	mov    QWORD PTR [rsp+0x40],rax
   5fb23:	48 8d 05 de 48 07 00 	lea    rax,[rip+0x748de]        # d4408 <anon.d4a1fc886ee21fee57a5c323490ee03a.47.llvm.17305594220767975752+0x50>
   5fb2a:	48 89 84 24 88 00 00 	mov    QWORD PTR [rsp+0x88],rax
   5fb31:	00 
   5fb32:	48 c7 84 24 90 00 00 	mov    QWORD PTR [rsp+0x90],0x3
   5fb39:	00 03 00 00 00 
   5fb3e:	48 c7 84 24 a8 00 00 	mov    QWORD PTR [rsp+0xa8],0x0
   5fb45:	00 00 00 00 00 
   5fb4a:	4c 89 ac 24 98 00 00 	mov    QWORD PTR [rsp+0x98],r13
   5fb51:	00 
   5fb52:	48 c7 84 24 a0 00 00 	mov    QWORD PTR [rsp+0xa0],0x3
   5fb59:	00 03 00 00 00 
   5fb5e:	48 8d bc 24 e0 00 00 	lea    rdi,[rsp+0xe0]
   5fb65:	00 
   5fb66:	4c 89 fe             	mov    rsi,r15
   5fb69:	ff d5                	call   rbp
   5fb6b:	66 0f 10 84 24 e0 00 	movupd xmm0,XMMWORD PTR [rsp+0xe0]
   5fb72:	00 00 
   5fb74:	66 0f 29 44 24 70    	movapd XMMWORD PTR [rsp+0x70],xmm0
   5fb7a:	48 8b 84 24 f0 00 00 	mov    rax,QWORD PTR [rsp+0xf0]
   5fb81:	00 
   5fb82:	48 89 84 24 80 00 00 	mov    QWORD PTR [rsp+0x80],rax
   5fb89:	00 
   5fb8a:	48 8d 44 24 50       	lea    rax,[rsp+0x50]
   5fb8f:	48 89 84 24 88 00 00 	mov    QWORD PTR [rsp+0x88],rax
   5fb96:	00 
   5fb97:	4c 89 a4 24 90 00 00 	mov    QWORD PTR [rsp+0x90],r12
   5fb9e:	00 
   5fb9f:	48 8d 44 24 70       	lea    rax,[rsp+0x70]
   5fba4:	48 89 84 24 98 00 00 	mov    QWORD PTR [rsp+0x98],rax
   5fbab:	00 
   5fbac:	4c 89 a4 24 a0 00 00 	mov    QWORD PTR [rsp+0xa0],r12
   5fbb3:	00 
   5fbb4:	48 8d 05 7d 48 07 00 	lea    rax,[rip+0x7487d]        # d4438 <anon.d4a1fc886ee21fee57a5c323490ee03a.47.llvm.17305594220767975752+0x80>
   5fbbb:	48 89 44 24 18       	mov    QWORD PTR [rsp+0x18],rax
   5fbc0:	48 c7 44 24 20 02 00 	mov    QWORD PTR [rsp+0x20],0x2
   5fbc7:	00 00 
   5fbc9:	48 c7 44 24 38 00 00 	mov    QWORD PTR [rsp+0x38],0x0
   5fbd0:	00 00 
   5fbd2:	4c 89 7c 24 28       	mov    QWORD PTR [rsp+0x28],r15
   5fbd7:	48 c7 44 24 30 02 00 	mov    QWORD PTR [rsp+0x30],0x2
   5fbde:	00 00 
   5fbe0:	48 8d bc 24 f8 00 00 	lea    rdi,[rsp+0xf8]
   5fbe7:	00 
   5fbe8:	4c 89 ee             	mov    rsi,r13
   5fbeb:	ff d5                	call   rbp
   5fbed:	48 8b 5c 24 10       	mov    rbx,QWORD PTR [rsp+0x10]
   5fbf2:	48 3b 1c 24          	cmp    rbx,QWORD PTR [rsp]
   5fbf6:	75 10                	jne    5fc08 <strategy_tm6::signal_pairs_tree::SignalPairsTree::debug_string+0x438>
   5fbf8:	48 89 e7             	mov    rdi,rsp
   5fbfb:	48 8d 35 56 48 07 00 	lea    rsi,[rip+0x74856]        # d4458 <anon.d4a1fc886ee21fee57a5c323490ee03a.47.llvm.17305594220767975752+0xa0>
   5fc02:	ff 15 f0 99 07 00    	call   QWORD PTR [rip+0x799f0]        # d95f8 <_DYNAMIC+0x5c8>
   5fc08:	48 8b 44 24 08       	mov    rax,QWORD PTR [rsp+0x8]
   5fc0d:	48 8d 0c 5b          	lea    rcx,[rbx+rbx*2]
   5fc11:	48 8b 94 24 08 01 00 	mov    rdx,QWORD PTR [rsp+0x108]
   5fc18:	00 
   5fc19:	48 89 54 c8 10       	mov    QWORD PTR [rax+rcx*8+0x10],rdx
   5fc1e:	0f 10 84 24 f8 00 00 	movups xmm0,XMMWORD PTR [rsp+0xf8]
   5fc25:	00 
   5fc26:	0f 11 04 c8          	movups XMMWORD PTR [rax+rcx*8],xmm0
   5fc2a:	48 ff c3             	inc    rbx
   5fc2d:	48 89 5c 24 10       	mov    QWORD PTR [rsp+0x10],rbx
   5fc32:	48 8b 74 24 70       	mov    rsi,QWORD PTR [rsp+0x70]
   5fc37:	48 85 f6             	test   rsi,rsi
   5fc3a:	74 10                	je     5fc4c <strategy_tm6::signal_pairs_tree::SignalPairsTree::debug_string+0x47c>
   5fc3c:	48 8b 7c 24 78       	mov    rdi,QWORD PTR [rsp+0x78]
   5fc41:	ba 01 00 00 00       	mov    edx,0x1
   5fc46:	ff 15 ec 95 07 00    	call   QWORD PTR [rip+0x795ec]        # d9238 <_DYNAMIC+0x208>
   5fc4c:	48 8b 74 24 50       	mov    rsi,QWORD PTR [rsp+0x50]
   5fc51:	48 85 f6             	test   rsi,rsi
   5fc54:	0f 84 56 fc ff ff    	je     5f8b0 <strategy_tm6::signal_pairs_tree::SignalPairsTree::debug_string+0xe0>
   5fc5a:	48 8b 7c 24 58       	mov    rdi,QWORD PTR [rsp+0x58]
   5fc5f:	ba 01 00 00 00       	mov    edx,0x1
   5fc64:	ff 15 ce 95 07 00    	call   QWORD PTR [rip+0x795ce]        # d9238 <_DYNAMIC+0x208>
   5fc6a:	e9 41 fc ff ff       	jmp    5f8b0 <strategy_tm6::signal_pairs_tree::SignalPairsTree::debug_string+0xe0>
   5fc6f:	48 8d bc 24 10 01 00 	lea    rdi,[rsp+0x110]
   5fc76:	00 
   5fc77:	e8 24 e1 fe ff       	call   4dda0 <<alloc::collections::btree::map::Iter<K,V> as core::iter::traits::iterator::Iterator>::next>
   5fc7c:	48 85 c0             	test   rax,rax
   5fc7f:	0f 85 c0 00 00 00    	jne    5fd45 <strategy_tm6::signal_pairs_tree::SignalPairsTree::debug_string+0x575>
   5fc85:	48 8b 74 24 08       	mov    rsi,QWORD PTR [rsp+0x8]
   5fc8a:	48 8b 54 24 10       	mov    rdx,QWORD PTR [rsp+0x10]
   5fc8f:	48 8d 0d d1 88 fb ff 	lea    rcx,[rip+0xfffffffffffb88d1]        # 18567 <anon.d4a1fc886ee21fee57a5c323490ee03a.6.llvm.17305594220767975752+0x20>
   5fc96:	48 8d bc 24 10 01 00 	lea    rdi,[rsp+0x110]
   5fc9d:	00 
   5fc9e:	41 b8 01 00 00 00    	mov    r8d,0x1
   5fca4:	e8 57 12 00 00       	call   60f00 <alloc::str::join_generic_copy>
   5fca9:	48 8b 84 24 20 01 00 	mov    rax,QWORD PTR [rsp+0x120]
   5fcb0:	00 
   5fcb1:	4c 8b a4 24 b8 00 00 	mov    r12,QWORD PTR [rsp+0xb8]
   5fcb8:	00 
   5fcb9:	49 89 44 24 10       	mov    QWORD PTR [r12+0x10],rax
   5fcbe:	0f 10 84 24 10 01 00 	movups xmm0,XMMWORD PTR [rsp+0x110]
   5fcc5:	00 
   5fcc6:	41 0f 11 04 24       	movups XMMWORD PTR [r12],xmm0
   5fccb:	48 8b 5c 24 10       	mov    rbx,QWORD PTR [rsp+0x10]
   5fcd0:	48 85 db             	test   rbx,rbx
   5fcd3:	74 3a                	je     5fd0f <strategy_tm6::signal_pairs_tree::SignalPairsTree::debug_string+0x53f>
   5fcd5:	4c 8b 74 24 08       	mov    r14,QWORD PTR [rsp+0x8]
   5fcda:	49 83 c6 08          	add    r14,0x8
   5fcde:	4c 8b 3d 53 95 07 00 	mov    r15,QWORD PTR [rip+0x79553]        # d9238 <_DYNAMIC+0x208>
   5fce5:	eb 12                	jmp    5fcf9 <strategy_tm6::signal_pairs_tree::SignalPairsTree::debug_string+0x529>
   5fce7:	66 0f 1f 84 00 00 00 	nop    WORD PTR [rax+rax*1+0x0]
   5fcee:	00 00 
   5fcf0:	49 83 c6 18          	add    r14,0x18
   5fcf4:	48 ff cb             	dec    rbx
   5fcf7:	74 16                	je     5fd0f <strategy_tm6::signal_pairs_tree::SignalPairsTree::debug_string+0x53f>
   5fcf9:	49 8b 76 f8          	mov    rsi,QWORD PTR [r14-0x8]
   5fcfd:	48 85 f6             	test   rsi,rsi
   5fd00:	74 ee                	je     5fcf0 <strategy_tm6::signal_pairs_tree::SignalPairsTree::debug_string+0x520>
   5fd02:	49 8b 3e             	mov    rdi,QWORD PTR [r14]
   5fd05:	ba 01 00 00 00       	mov    edx,0x1
   5fd0a:	41 ff d7             	call   r15
   5fd0d:	eb e1                	jmp    5fcf0 <strategy_tm6::signal_pairs_tree::SignalPairsTree::debug_string+0x520>
   5fd0f:	48 8b 04 24          	mov    rax,QWORD PTR [rsp]
   5fd13:	48 85 c0             	test   rax,rax
   5fd16:	74 18                	je     5fd30 <strategy_tm6::signal_pairs_tree::SignalPairsTree::debug_string+0x560>
   5fd18:	48 8b 7c 24 08       	mov    rdi,QWORD PTR [rsp+0x8]
   5fd1d:	48 c1 e0 03          	shl    rax,0x3
   5fd21:	48 8d 34 40          	lea    rsi,[rax+rax*2]
   5fd25:	ba 08 00 00 00       	mov    edx,0x8
   5fd2a:	ff 15 08 95 07 00    	call   QWORD PTR [rip+0x79508]        # d9238 <_DYNAMIC+0x208>
   5fd30:	4c 89 e0             	mov    rax,r12
   5fd33:	48 81 c4 78 01 00 00 	add    rsp,0x178
   5fd3a:	5b                   	pop    rbx
   5fd3b:	41 5c                	pop    r12
   5fd3d:	41 5d                	pop    r13
   5fd3f:	41 5e                	pop    r14
   5fd41:	41 5f                	pop    r15
   5fd43:	5d                   	pop    rbp
   5fd44:	c3                   	ret    
   5fd45:	48 89 44 24 48       	mov    QWORD PTR [rsp+0x48],rax
   5fd4a:	48 8d 3d 7f 46 07 00 	lea    rdi,[rip+0x7467f]        # d43d0 <anon.d4a1fc886ee21fee57a5c323490ee03a.47.llvm.17305594220767975752+0x18>
   5fd51:	ff 15 61 95 07 00    	call   QWORD PTR [rip+0x79561]        # d92b8 <_DYNAMIC+0x288>
   5fd57:	0f 0b                	ud2    
   5fd59:	eb 46                	jmp    5fda1 <strategy_tm6::signal_pairs_tree::SignalPairsTree::debug_string+0x5d1>
   5fd5b:	48 89 c3             	mov    rbx,rax
   5fd5e:	48 8b b4 24 f8 00 00 	mov    rsi,QWORD PTR [rsp+0xf8]
   5fd65:	00 
   5fd66:	48 85 f6             	test   rsi,rsi
   5fd69:	74 18                	je     5fd83 <strategy_tm6::signal_pairs_tree::SignalPairsTree::debug_string+0x5b3>
   5fd6b:	48 8b bc 24 00 01 00 	mov    rdi,QWORD PTR [rsp+0x100]
   5fd72:	00 
   5fd73:	ba 01 00 00 00       	mov    edx,0x1
   5fd78:	ff 15 ba 94 07 00    	call   QWORD PTR [rip+0x794ba]        # d9238 <_DYNAMIC+0x208>
   5fd7e:	eb 03                	jmp    5fd83 <strategy_tm6::signal_pairs_tree::SignalPairsTree::debug_string+0x5b3>
   5fd80:	48 89 c3             	mov    rbx,rax
   5fd83:	48 8b 74 24 70       	mov    rsi,QWORD PTR [rsp+0x70]
   5fd88:	48 85 f6             	test   rsi,rsi
   5fd8b:	74 2a                	je     5fdb7 <strategy_tm6::signal_pairs_tree::SignalPairsTree::debug_string+0x5e7>
   5fd8d:	48 8b 7c 24 78       	mov    rdi,QWORD PTR [rsp+0x78]
   5fd92:	ba 01 00 00 00       	mov    edx,0x1
   5fd97:	ff 15 9b 94 07 00    	call   QWORD PTR [rip+0x7949b]        # d9238 <_DYNAMIC+0x208>
   5fd9d:	eb 18                	jmp    5fdb7 <strategy_tm6::signal_pairs_tree::SignalPairsTree::debug_string+0x5e7>
   5fd9f:	eb 00                	jmp    5fda1 <strategy_tm6::signal_pairs_tree::SignalPairsTree::debug_string+0x5d1>
   5fda1:	48 89 c3             	mov    rbx,rax
   5fda4:	48 89 e7             	mov    rdi,rsp
   5fda7:	e8 84 db ff ff       	call   5d930 <_ZN4core3ptr65drop_in_place$LT$alloc..vec..Vec$LT$alloc..string..String$GT$$GT$17he0df01c539bd5511E.llvm.17305594220767975752>
   5fdac:	48 89 df             	mov    rdi,rbx
   5fdaf:	e8 bc 23 07 00       	call   d2170 <_Unwind_Resume@plt>
   5fdb4:	48 89 c3             	mov    rbx,rax
   5fdb7:	48 8b 74 24 50       	mov    rsi,QWORD PTR [rsp+0x50]
   5fdbc:	48 85 f6             	test   rsi,rsi
   5fdbf:	74 10                	je     5fdd1 <strategy_tm6::signal_pairs_tree::SignalPairsTree::debug_string+0x601>
   5fdc1:	48 8b 7c 24 58       	mov    rdi,QWORD PTR [rsp+0x58]
   5fdc6:	ba 01 00 00 00       	mov    edx,0x1
   5fdcb:	ff 15 67 94 07 00    	call   QWORD PTR [rip+0x79467]        # d9238 <_DYNAMIC+0x208>
   5fdd1:	48 89 e7             	mov    rdi,rsp
   5fdd4:	e8 57 db ff ff       	call   5d930 <_ZN4core3ptr65drop_in_place$LT$alloc..vec..Vec$LT$alloc..string..String$GT$$GT$17he0df01c539bd5511E.llvm.17305594220767975752>
   5fdd9:	48 89 df             	mov    rdi,rbx
   5fddc:	e8 8f 23 07 00       	call   d2170 <_Unwind_Resume@plt>
   5fde1:	cc                   	int3   
   5fde2:	cc                   	int3   
   5fde3:	cc                   	int3   
   5fde4:	cc                   	int3   
   5fde5:	cc                   	int3   
   5fde6:	cc                   	int3   
   5fde7:	cc                   	int3   
   5fde8:	cc                   	int3   
   5fde9:	cc                   	int3   
   5fdea:	cc                   	int3   
   5fdeb:	cc                   	int3   
   5fdec:	cc                   	int3   
   5fded:	cc                   	int3   
   5fdee:	cc                   	int3   
   5fdef:	cc                   	int3   

000000000005f570 <strategy_tm6::signal_pairs_tree::SignalPairsTree::find_nearest_pair_median_threshold>:
   5f570:	55                   	push   rbp
   5f571:	41 57                	push   r15
   5f573:	41 56                	push   r14
   5f575:	41 54                	push   r12
   5f577:	53                   	push   rbx
   5f578:	48 83 ec 60          	sub    rsp,0x60
   5f57c:	f2 0f 11 44 24 08    	movsd  QWORD PTR [rsp+0x8],xmm0
   5f582:	4c 8b 7e 20          	mov    r15,QWORD PTR [rsi+0x20]
   5f586:	4d 85 ff             	test   r15,r15
   5f589:	0f 84 27 02 00 00    	je     5f7b6 <strategy_tm6::signal_pairs_tree::SignalPairsTree::find_nearest_pair_median_threshold+0x246>
   5f58f:	49 89 f6             	mov    r14,rsi
   5f592:	48 89 fb             	mov    rbx,rdi
   5f595:	4c 8b 66 28          	mov    r12,QWORD PTR [rsi+0x28]
   5f599:	31 c0                	xor    eax,eax
   5f59b:	4c 89 e1             	mov    rcx,r12
   5f59e:	4c 89 ff             	mov    rdi,r15
   5f5a1:	44 0f b7 87 8a 05 00 	movzx  r8d,WORD PTR [rdi+0x58a]
   5f5a8:	00 
   5f5a9:	4d 6b c8 78          	imul   r9,r8,0x78
   5f5ad:	48 c7 c2 ff ff ff ff 	mov    rdx,0xffffffffffffffff
   5f5b4:	31 f6                	xor    esi,esi
   5f5b6:	66 2e 0f 1f 84 00 00 	cs nop WORD PTR [rax+rax*1+0x0]
   5f5bd:	00 00 00 
   5f5c0:	4d 89 ca             	mov    r10,r9
   5f5c3:	49 01 f2             	add    r10,rsi
   5f5c6:	74 28                	je     5f5f0 <strategy_tm6::signal_pairs_tree::SignalPairsTree::find_nearest_pair_median_threshold+0x80>
   5f5c8:	48 3b 44 d7 10       	cmp    rax,QWORD PTR [rdi+rdx*8+0x10]
   5f5cd:	41 0f 97 c2          	seta   r10b
   5f5d1:	41 80 da 00          	sbb    r10b,0x0
   5f5d5:	48 ff c2             	inc    rdx
   5f5d8:	48 83 c6 88          	add    rsi,0xffffffffffffff88
   5f5dc:	41 80 fa 01          	cmp    r10b,0x1
   5f5e0:	74 de                	je     5f5c0 <strategy_tm6::signal_pairs_tree::SignalPairsTree::find_nearest_pair_median_threshold+0x50>
   5f5e2:	45 0f b6 c2          	movzx  r8d,r10b
   5f5e6:	45 85 c0             	test   r8d,r8d
   5f5e9:	74 1c                	je     5f607 <strategy_tm6::signal_pairs_tree::SignalPairsTree::find_nearest_pair_median_threshold+0x97>
   5f5eb:	eb 06                	jmp    5f5f3 <strategy_tm6::signal_pairs_tree::SignalPairsTree::find_nearest_pair_median_threshold+0x83>
   5f5ed:	0f 1f 00             	nop    DWORD PTR [rax]
   5f5f0:	4c 89 c2             	mov    rdx,r8
   5f5f3:	48 83 e9 01          	sub    rcx,0x1
   5f5f7:	0f 82 b9 01 00 00    	jb     5f7b6 <strategy_tm6::signal_pairs_tree::SignalPairsTree::find_nearest_pair_median_threshold+0x246>
   5f5fd:	48 8b bc d7 90 05 00 	mov    rdi,QWORD PTR [rdi+rdx*8+0x590]
   5f604:	00 
   5f605:	eb 9a                	jmp    5f5a1 <strategy_tm6::signal_pairs_tree::SignalPairsTree::find_nearest_pair_median_threshold+0x31>
   5f607:	48 29 f7             	sub    rdi,rsi
   5f60a:	48 83 c7 e8          	add    rdi,0xffffffffffffffe8
   5f60e:	e8 1d ea ff ff       	call   5e030 <_ZN12strategy_tm617signal_pairs_tree15SignalPairStats28get_pairs_time_sec_ms_median17h4a9fe67d7a117850E.llvm.17305594220767975752>
   5f613:	48 83 f8 01          	cmp    rax,0x1
   5f617:	0f 85 33 01 00 00    	jne    5f750 <strategy_tm6::signal_pairs_tree::SignalPairsTree::find_nearest_pair_median_threshold+0x1e0>
   5f61d:	49 8b 46 30          	mov    rax,QWORD PTR [r14+0x30]
   5f621:	48 c7 44 24 10 01 00 	mov    QWORD PTR [rsp+0x10],0x1
   5f628:	00 00 
   5f62a:	48 c7 44 24 18 00 00 	mov    QWORD PTR [rsp+0x18],0x0
   5f631:	00 00 
   5f633:	4c 89 7c 24 20       	mov    QWORD PTR [rsp+0x20],r15
   5f638:	4c 89 64 24 28       	mov    QWORD PTR [rsp+0x28],r12
   5f63d:	48 c7 44 24 30 01 00 	mov    QWORD PTR [rsp+0x30],0x1
   5f644:	00 00 
   5f646:	48 c7 44 24 38 00 00 	mov    QWORD PTR [rsp+0x38],0x0
   5f64d:	00 00 
   5f64f:	4c 89 7c 24 40       	mov    QWORD PTR [rsp+0x40],r15
   5f654:	4c 89 64 24 48       	mov    QWORD PTR [rsp+0x48],r12
   5f659:	48 89 44 24 50       	mov    QWORD PTR [rsp+0x50],rax
   5f65e:	48 8d 7c 24 10       	lea    rdi,[rsp+0x10]
   5f663:	e8 38 e7 fe ff       	call   4dda0 <<alloc::collections::btree::map::Iter<K,V> as core::iter::traits::iterator::Iterator>::next>
   5f668:	48 85 c0             	test   rax,rax
   5f66b:	0f 84 df 00 00 00    	je     5f750 <strategy_tm6::signal_pairs_tree::SignalPairsTree::find_nearest_pair_median_threshold+0x1e0>
   5f671:	49 89 c4             	mov    r12,rax
   5f674:	f2 0f 10 05 04 7f fb 	movsd  xmm0,QWORD PTR [rip+0xfffffffffffb7f04]        # 17580 <anon.8d7226ba1ba94417efa9e0a1e98803de.1.llvm.16032588982719308145+0xf0>
   5f67b:	ff 
   5f67c:	f2 0f 11 04 24       	movsd  QWORD PTR [rsp],xmm0
   5f681:	bd ff ff ff ff       	mov    ebp,0xffffffff
   5f686:	4c 8d 7c 24 10       	lea    r15,[rsp+0x10]
   5f68b:	eb 13                	jmp    5f6a0 <strategy_tm6::signal_pairs_tree::SignalPairsTree::find_nearest_pair_median_threshold+0x130>
   5f68d:	0f 1f 00             	nop    DWORD PTR [rax]
   5f690:	4c 89 ff             	mov    rdi,r15
   5f693:	e8 08 e7 fe ff       	call   4dda0 <<alloc::collections::btree::map::Iter<K,V> as core::iter::traits::iterator::Iterator>::next>
   5f698:	49 89 c4             	mov    r12,rax
   5f69b:	48 85 c0             	test   rax,rax
   5f69e:	74 30                	je     5f6d0 <strategy_tm6::signal_pairs_tree::SignalPairsTree::find_nearest_pair_median_threshold+0x160>
   5f6a0:	48 89 d7             	mov    rdi,rdx
   5f6a3:	e8 88 e9 ff ff       	call   5e030 <_ZN12strategy_tm617signal_pairs_tree15SignalPairStats28get_pairs_time_sec_ms_median17h4a9fe67d7a117850E.llvm.17305594220767975752>
   5f6a8:	a8 01                	test   al,0x1
   5f6aa:	74 e4                	je     5f690 <strategy_tm6::signal_pairs_tree::SignalPairsTree::find_nearest_pair_median_threshold+0x120>
   5f6ac:	f2 0f 5c 44 24 08    	subsd  xmm0,QWORD PTR [rsp+0x8]
   5f6b2:	66 0f 54 05 76 78 fb 	andpd  xmm0,XMMWORD PTR [rip+0xfffffffffffb7876]        # 16f30 <anon.84b81842f6ece4ef384f96787a9b6679.11.llvm.2651914475104588711+0x3a3>
   5f6b9:	ff 
   5f6ba:	f2 0f 10 0c 24       	movsd  xmm1,QWORD PTR [rsp]
   5f6bf:	66 0f 2e c8          	ucomisd xmm1,xmm0
   5f6c3:	76 cb                	jbe    5f690 <strategy_tm6::signal_pairs_tree::SignalPairsTree::find_nearest_pair_median_threshold+0x120>
   5f6c5:	41 8b 2c 24          	mov    ebp,DWORD PTR [r12]
   5f6c9:	f2 0f 11 04 24       	movsd  QWORD PTR [rsp],xmm0
   5f6ce:	eb c0                	jmp    5f690 <strategy_tm6::signal_pairs_tree::SignalPairsTree::find_nearest_pair_median_threshold+0x120>
   5f6d0:	83 fd ff             	cmp    ebp,0xffffffff
   5f6d3:	74 7b                	je     5f750 <strategy_tm6::signal_pairs_tree::SignalPairsTree::find_nearest_pair_median_threshold+0x1e0>
   5f6d5:	48 63 c5             	movsxd rax,ebp
   5f6d8:	49 8b 56 38          	mov    rdx,QWORD PTR [r14+0x38]
   5f6dc:	48 85 d2             	test   rdx,rdx
   5f6df:	0f 84 bc 00 00 00    	je     5f7a1 <strategy_tm6::signal_pairs_tree::SignalPairsTree::find_nearest_pair_median_threshold+0x231>
   5f6e5:	49 8b 76 40          	mov    rsi,QWORD PTR [r14+0x40]
   5f6e9:	31 c9                	xor    ecx,ecx
   5f6eb:	44 0f b7 82 c2 01 00 	movzx  r8d,WORD PTR [rdx+0x1c2]
   5f6f2:	00 
   5f6f3:	45 89 c2             	mov    r10d,r8d
   5f6f6:	41 c1 e2 03          	shl    r10d,0x3
   5f6fa:	48 c7 c7 ff ff ff ff 	mov    rdi,0xffffffffffffffff
   5f701:	45 31 c9             	xor    r9d,r9d
   5f704:	66 66 66 2e 0f 1f 84 	data16 data16 cs nop WORD PTR [rax+rax*1+0x0]
   5f70b:	00 00 00 00 00 
   5f710:	4d 39 ca             	cmp    r10,r9
   5f713:	74 28                	je     5f73d <strategy_tm6::signal_pairs_tree::SignalPairsTree::find_nearest_pair_median_threshold+0x1cd>
   5f715:	4a 3b 84 0a 68 01 00 	cmp    rax,QWORD PTR [rdx+r9*1+0x168]
   5f71c:	00 
   5f71d:	41 0f 97 c3          	seta   r11b
   5f721:	41 80 db 00          	sbb    r11b,0x0
   5f725:	49 83 c1 08          	add    r9,0x8
   5f729:	48 ff c7             	inc    rdi
   5f72c:	41 80 fb 01          	cmp    r11b,0x1
   5f730:	74 de                	je     5f710 <strategy_tm6::signal_pairs_tree::SignalPairsTree::find_nearest_pair_median_threshold+0x1a0>
   5f732:	45 0f b6 c3          	movzx  r8d,r11b
   5f736:	45 85 c0             	test   r8d,r8d
   5f739:	74 45                	je     5f780 <strategy_tm6::signal_pairs_tree::SignalPairsTree::find_nearest_pair_median_threshold+0x210>
   5f73b:	eb 03                	jmp    5f740 <strategy_tm6::signal_pairs_tree::SignalPairsTree::find_nearest_pair_median_threshold+0x1d0>
   5f73d:	4c 89 c7             	mov    rdi,r8
   5f740:	48 83 ee 01          	sub    rsi,0x1
   5f744:	72 5d                	jb     5f7a3 <strategy_tm6::signal_pairs_tree::SignalPairsTree::find_nearest_pair_median_threshold+0x233>
   5f746:	48 8b 94 fa c8 01 00 	mov    rdx,QWORD PTR [rdx+rdi*8+0x1c8]
   5f74d:	00 
   5f74e:	eb 9b                	jmp    5f6eb <strategy_tm6::signal_pairs_tree::SignalPairsTree::find_nearest_pair_median_threshold+0x17b>
   5f750:	48 c7 03 00 00 00 00 	mov    QWORD PTR [rbx],0x0
   5f757:	48 c7 43 08 01 00 00 	mov    QWORD PTR [rbx+0x8],0x1
   5f75e:	00 
   5f75f:	41 0f 10 06          	movups xmm0,XMMWORD PTR [r14]
   5f763:	41 0f 10 4e 10       	movups xmm1,XMMWORD PTR [r14+0x10]
   5f768:	0f 11 43 10          	movups XMMWORD PTR [rbx+0x10],xmm0
   5f76c:	0f 11 4b 20          	movups XMMWORD PTR [rbx+0x20],xmm1
   5f770:	48 89 d8             	mov    rax,rbx
   5f773:	48 83 c4 60          	add    rsp,0x60
   5f777:	5b                   	pop    rbx
   5f778:	41 5c                	pop    r12
   5f77a:	41 5e                	pop    r14
   5f77c:	41 5f                	pop    r15
   5f77e:	5d                   	pop    rbp
   5f77f:	c3                   	ret    
   5f780:	66 42 0f 10 44 8a e0 	movupd xmm0,XMMWORD PTR [rdx+r9*4-0x20]
   5f787:	66 42 0f 10 4c 8a f0 	movupd xmm1,XMMWORD PTR [rdx+r9*4-0x10]
   5f78e:	66 0f 29 4c 24 20    	movapd XMMWORD PTR [rsp+0x20],xmm1
   5f794:	66 0f 29 44 24 10    	movapd XMMWORD PTR [rsp+0x10],xmm0
   5f79a:	b9 01 00 00 00       	mov    ecx,0x1
   5f79f:	eb 02                	jmp    5f7a3 <strategy_tm6::signal_pairs_tree::SignalPairsTree::find_nearest_pair_median_threshold+0x233>
   5f7a1:	31 c9                	xor    ecx,ecx
   5f7a3:	48 89 03             	mov    QWORD PTR [rbx],rax
   5f7a6:	48 89 4b 08          	mov    QWORD PTR [rbx+0x8],rcx
   5f7aa:	0f 28 44 24 10       	movaps xmm0,XMMWORD PTR [rsp+0x10]
   5f7af:	0f 28 4c 24 20       	movaps xmm1,XMMWORD PTR [rsp+0x20]
   5f7b4:	eb b2                	jmp    5f768 <strategy_tm6::signal_pairs_tree::SignalPairsTree::find_nearest_pair_median_threshold+0x1f8>
   5f7b6:	48 8d 3d fb 4b 07 00 	lea    rdi,[rip+0x74bfb]        # d43b8 <anon.d4a1fc886ee21fee57a5c323490ee03a.47.llvm.17305594220767975752>
   5f7bd:	ff 15 f5 9a 07 00    	call   QWORD PTR [rip+0x79af5]        # d92b8 <_DYNAMIC+0x288>
   5f7c3:	cc                   	int3   
   5f7c4:	cc                   	int3   
   5f7c5:	cc                   	int3   
   5f7c6:	cc                   	int3   
   5f7c7:	cc                   	int3   
   5f7c8:	cc                   	int3   
   5f7c9:	cc                   	int3   
   5f7ca:	cc                   	int3   
   5f7cb:	cc                   	int3   
   5f7cc:	cc                   	int3   
   5f7cd:	cc                   	int3   
   5f7ce:	cc                   	int3   
   5f7cf:	cc                   	int3   

000000000005e1d0 <strategy_tm6::signal_pairs_tree::SignalPairsTree::new>:
   5e1d0:	55                   	push   rbp
   5e1d1:	41 57                	push   r15
   5e1d3:	41 56                	push   r14
   5e1d5:	41 55                	push   r13
   5e1d7:	41 54                	push   r12
   5e1d9:	53                   	push   rbx
   5e1da:	48 81 ec c8 01 00 00 	sub    rsp,0x1c8
   5e1e1:	f2 0f 11 44 24 28    	movsd  QWORD PTR [rsp+0x28],xmm0
   5e1e7:	49 89 d5             	mov    r13,rdx
   5e1ea:	49 89 f6             	mov    r14,rsi
   5e1ed:	48 89 fd             	mov    rbp,rdi
   5e1f0:	48 c7 44 24 30 00 00 	mov    QWORD PTR [rsp+0x30],0x0
   5e1f7:	00 00 
   5e1f9:	48 c7 44 24 40 00 00 	mov    QWORD PTR [rsp+0x40],0x0
   5e200:	00 00 
   5e202:	48 c7 44 24 48 00 00 	mov    QWORD PTR [rsp+0x48],0x0
   5e209:	00 00 
   5e20b:	48 c7 44 24 58 00 00 	mov    QWORD PTR [rsp+0x58],0x0
   5e212:	00 00 
   5e214:	0f 10 06             	movups xmm0,XMMWORD PTR [rsi]
   5e217:	0f 10 4e 10          	movups xmm1,XMMWORD PTR [rsi+0x10]
   5e21b:	0f 29 8c 24 90 00 00 	movaps XMMWORD PTR [rsp+0x90],xmm1
   5e222:	00 
   5e223:	0f 29 84 24 80 00 00 	movaps XMMWORD PTR [rsp+0x80],xmm0
   5e22a:	00 
   5e22b:	48 8d bc 24 20 01 00 	lea    rdi,[rsp+0x120]
   5e232:	00 
   5e233:	48 8d 74 24 48       	lea    rsi,[rsp+0x48]
   5e238:	48 8d 8c 24 80 00 00 	lea    rcx,[rsp+0x80]
   5e23f:	00 
   5e240:	31 d2                	xor    edx,edx
   5e242:	4c 89 2c 24          	mov    QWORD PTR [rsp],r13
   5e246:	e8 a5 07 ff ff       	call   4e9f0 <alloc::collections::btree::map::BTreeMap<K,V,A>::insert>
   5e24b:	48 c7 84 24 80 00 00 	mov    QWORD PTR [rsp+0x80],0x0
   5e252:	00 00 00 00 00 
   5e257:	48 c7 84 24 88 00 00 	mov    QWORD PTR [rsp+0x88],0x8
   5e25e:	00 08 00 00 00 
   5e263:	0f 57 c0             	xorps  xmm0,xmm0
   5e266:	0f 11 84 24 90 00 00 	movups XMMWORD PTR [rsp+0x90],xmm0
   5e26d:	00 
   5e26e:	f2 0f 10 44 24 28    	movsd  xmm0,QWORD PTR [rsp+0x28]
   5e274:	f2 0f 11 84 24 a0 00 	movsd  QWORD PTR [rsp+0xa0],xmm0
   5e27b:	00 00 
   5e27d:	66 48 8d 3d 73 b2 07 	data16 lea rdi,[rip+0x7b273]        # d94f8 <_DYNAMIC+0x4c8>
   5e284:	00 
   5e285:	66 66 48 e8 f3 3e 07 	data16 data16 rex.W call d2180 <__tls_get_addr@plt>
   5e28c:	00 
   5e28d:	48 89 c3             	mov    rbx,rax
   5e290:	80 78 10 01          	cmp    BYTE PTR [rax+0x10],0x1
   5e294:	0f 85 2a 05 00 00    	jne    5e7c4 <strategy_tm6::signal_pairs_tree::SignalPairsTree::new+0x5f4>
   5e29a:	48 8b 03             	mov    rax,QWORD PTR [rbx]
   5e29d:	48 8b 53 08          	mov    rdx,QWORD PTR [rbx+0x8]
   5e2a1:	48 8d 48 01          	lea    rcx,[rax+0x1]
   5e2a5:	48 89 5c 24 20       	mov    QWORD PTR [rsp+0x20],rbx
   5e2aa:	48 89 0b             	mov    QWORD PTR [rbx],rcx
   5e2ad:	41 0f 10 06          	movups xmm0,XMMWORD PTR [r14]
   5e2b1:	41 0f 10 4e 10       	movups xmm1,XMMWORD PTR [r14+0x10]
   5e2b6:	0f 11 8c 24 88 01 00 	movups XMMWORD PTR [rsp+0x188],xmm1
   5e2bd:	00 
   5e2be:	0f 11 84 24 78 01 00 	movups XMMWORD PTR [rsp+0x178],xmm0
   5e2c5:	00 
   5e2c6:	0f 10 84 24 80 00 00 	movups xmm0,XMMWORD PTR [rsp+0x80]
   5e2cd:	00 
   5e2ce:	0f 10 8c 24 90 00 00 	movups xmm1,XMMWORD PTR [rsp+0x90]
   5e2d5:	00 
   5e2d6:	0f 29 84 24 20 01 00 	movaps XMMWORD PTR [rsp+0x120],xmm0
   5e2dd:	00 
   5e2de:	0f 29 8c 24 30 01 00 	movaps XMMWORD PTR [rsp+0x130],xmm1
   5e2e5:	00 
   5e2e6:	48 8b 8c 24 a0 00 00 	mov    rcx,QWORD PTR [rsp+0xa0]
   5e2ed:	00 
   5e2ee:	48 89 8c 24 40 01 00 	mov    QWORD PTR [rsp+0x140],rcx
   5e2f5:	00 
   5e2f6:	0f 10 05 93 5f 07 00 	movups xmm0,XMMWORD PTR [rip+0x75f93]        # d4290 <anon.d4a1fc886ee21fee57a5c323490ee03a.27.llvm.17305594220767975752+0x30>
   5e2fd:	0f 11 84 24 48 01 00 	movups XMMWORD PTR [rsp+0x148],xmm0
   5e304:	00 
   5e305:	0f 10 05 94 5f 07 00 	movups xmm0,XMMWORD PTR [rip+0x75f94]        # d42a0 <anon.d4a1fc886ee21fee57a5c323490ee03a.27.llvm.17305594220767975752+0x40>
   5e30c:	0f 11 84 24 58 01 00 	movups XMMWORD PTR [rsp+0x158],xmm0
   5e313:	00 
   5e314:	48 89 84 24 68 01 00 	mov    QWORD PTR [rsp+0x168],rax
   5e31b:	00 
   5e31c:	48 89 94 24 70 01 00 	mov    QWORD PTR [rsp+0x170],rdx
   5e323:	00 
   5e324:	48 8d bc 24 80 00 00 	lea    rdi,[rsp+0x80]
   5e32b:	00 
   5e32c:	48 8d 74 24 30       	lea    rsi,[rsp+0x30]
   5e331:	48 8d 8c 24 20 01 00 	lea    rcx,[rsp+0x120]
   5e338:	00 
   5e339:	31 d2                	xor    edx,edx
   5e33b:	e8 00 0a ff ff       	call   4ed40 <alloc::collections::btree::map::BTreeMap<K,V,A>::insert>
   5e340:	48 8b 9c 24 80 00 00 	mov    rbx,QWORD PTR [rsp+0x80]
   5e347:	00 
   5e348:	48 89 d8             	mov    rax,rbx
   5e34b:	48 f7 d8             	neg    rax
   5e34e:	48 89 6c 24 68       	mov    QWORD PTR [rsp+0x68],rbp
   5e353:	4c 89 74 24 60       	mov    QWORD PTR [rsp+0x60],r14
   5e358:	0f 80 ca 00 00 00    	jo     5e428 <strategy_tm6::signal_pairs_tree::SignalPairsTree::new+0x258>
   5e35e:	4c 8b bc 24 98 00 00 	mov    r15,QWORD PTR [rsp+0x98]
   5e365:	00 
   5e366:	4d 85 ff             	test   r15,r15
   5e369:	0f 84 90 00 00 00    	je     5e3ff <strategy_tm6::signal_pairs_tree::SignalPairsTree::new+0x22f>
   5e36f:	4c 8b b4 24 88 00 00 	mov    r14,QWORD PTR [rsp+0x88]
   5e376:	00 
   5e377:	48 8b 84 24 90 00 00 	mov    rax,QWORD PTR [rsp+0x90]
   5e37e:	00 
   5e37f:	31 d2                	xor    edx,edx
   5e381:	48 39 d8             	cmp    rax,rbx
   5e384:	48 89 d9             	mov    rcx,rbx
   5e387:	48 0f 42 ca          	cmovb  rcx,rdx
   5e38b:	48 89 c6             	mov    rsi,rax
   5e38e:	48 29 ce             	sub    rsi,rcx
   5e391:	48 89 df             	mov    rdi,rbx
   5e394:	48 29 f7             	sub    rdi,rsi
   5e397:	4a 8d 2c 3e          	lea    rbp,[rsi+r15*1]
   5e39b:	4c 89 7c 24 08       	mov    QWORD PTR [rsp+0x8],r15
   5e3a0:	48 89 7c 24 10       	mov    QWORD PTR [rsp+0x10],rdi
   5e3a5:	49 29 ff             	sub    r15,rdi
   5e3a8:	4c 0f 42 fa          	cmovb  r15,rdx
   5e3ac:	48 0f 47 eb          	cmova  rbp,rbx
   5e3b0:	48 29 f5             	sub    rbp,rsi
   5e3b3:	0f 85 c5 03 00 00    	jne    5e77e <strategy_tm6::signal_pairs_tree::SignalPairsTree::new+0x5ae>
   5e3b9:	48 8b 44 24 10       	mov    rax,QWORD PTR [rsp+0x10]
   5e3be:	48 3b 44 24 08       	cmp    rax,QWORD PTR [rsp+0x8]
   5e3c3:	4c 8b 2c 24          	mov    r13,QWORD PTR [rsp]
   5e3c7:	73 36                	jae    5e3ff <strategy_tm6::signal_pairs_tree::SignalPairsTree::new+0x22f>
   5e3c9:	49 83 c6 50          	add    r14,0x50
   5e3cd:	4c 8b 25 64 ae 07 00 	mov    r12,QWORD PTR [rip+0x7ae64]        # d9238 <_DYNAMIC+0x208>
   5e3d4:	eb 13                	jmp    5e3e9 <strategy_tm6::signal_pairs_tree::SignalPairsTree::new+0x219>
   5e3d6:	66 2e 0f 1f 84 00 00 	cs nop WORD PTR [rax+rax*1+0x0]
   5e3dd:	00 00 00 
   5e3e0:	49 83 c6 68          	add    r14,0x68
   5e3e4:	49 ff cf             	dec    r15
   5e3e7:	74 16                	je     5e3ff <strategy_tm6::signal_pairs_tree::SignalPairsTree::new+0x22f>
   5e3e9:	49 8b 76 f8          	mov    rsi,QWORD PTR [r14-0x8]
   5e3ed:	48 85 f6             	test   rsi,rsi
   5e3f0:	74 ee                	je     5e3e0 <strategy_tm6::signal_pairs_tree::SignalPairsTree::new+0x210>
   5e3f2:	49 8b 3e             	mov    rdi,QWORD PTR [r14]
   5e3f5:	ba 01 00 00 00       	mov    edx,0x1
   5e3fa:	41 ff d4             	call   r12
   5e3fd:	eb e1                	jmp    5e3e0 <strategy_tm6::signal_pairs_tree::SignalPairsTree::new+0x210>
   5e3ff:	48 85 db             	test   rbx,rbx
   5e402:	74 17                	je     5e41b <strategy_tm6::signal_pairs_tree::SignalPairsTree::new+0x24b>
   5e404:	48 8b bc 24 88 00 00 	mov    rdi,QWORD PTR [rsp+0x88]
   5e40b:	00 
   5e40c:	48 6b f3 68          	imul   rsi,rbx,0x68
   5e410:	ba 08 00 00 00       	mov    edx,0x8
   5e415:	ff 15 1d ae 07 00    	call   QWORD PTR [rip+0x7ae1d]        # d9238 <_DYNAMIC+0x208>
   5e41b:	48 8d bc 24 a8 00 00 	lea    rdi,[rsp+0xa8]
   5e422:	00 
   5e423:	e8 38 73 fe ff       	call   45760 <<hashbrown::raw::RawTable<T,A> as core::ops::drop::Drop>::drop>
   5e428:	49 8b 45 08          	mov    rax,QWORD PTR [r13+0x8]
   5e42c:	48 89 44 24 18       	mov    QWORD PTR [rsp+0x18],rax
   5e431:	4d 8b 6d 10          	mov    r13,QWORD PTR [r13+0x10]
   5e435:	4d 85 ed             	test   r13,r13
   5e438:	48 8b 5c 24 20       	mov    rbx,QWORD PTR [rsp+0x20]
   5e43d:	0f 84 ca 02 00 00    	je     5e70d <strategy_tm6::signal_pairs_tree::SignalPairsTree::new+0x53d>
   5e443:	49 be 00 00 00 00 00 	movabs r14,0x8000000000000000
   5e44a:	00 00 80 
   5e44d:	49 c1 e5 05          	shl    r13,0x5
   5e451:	4c 8b 7c 24 18       	mov    r15,QWORD PTR [rsp+0x18]
   5e456:	4d 01 fd             	add    r13,r15
   5e459:	4c 8d a4 24 08 01 00 	lea    r12,[rsp+0x108]
   5e460:	00 
   5e461:	31 ed                	xor    ebp,ebp
   5e463:	4c 89 6c 24 70       	mov    QWORD PTR [rsp+0x70],r13
   5e468:	eb 32                	jmp    5e49c <strategy_tm6::signal_pairs_tree::SignalPairsTree::new+0x2cc>
   5e46a:	66 0f 1f 44 00 00    	nop    WORD PTR [rax+rax*1+0x0]
   5e470:	48 8d bc 24 a8 00 00 	lea    rdi,[rsp+0xa8]
   5e477:	00 
   5e478:	e8 e3 72 fe ff       	call   45760 <<hashbrown::raw::RawTable<T,A> as core::ops::drop::Drop>::drop>
   5e47d:	49 be 00 00 00 00 00 	movabs r14,0x8000000000000000
   5e484:	00 00 80 
   5e487:	4c 8d a4 24 08 01 00 	lea    r12,[rsp+0x108]
   5e48e:	00 
   5e48f:	49 83 c7 20          	add    r15,0x20
   5e493:	4d 39 ef             	cmp    r15,r13
   5e496:	0f 84 71 02 00 00    	je     5e70d <strategy_tm6::signal_pairs_tree::SignalPairsTree::new+0x53d>
   5e49c:	48 ff c5             	inc    rbp
   5e49f:	41 0f 10 07          	movups xmm0,XMMWORD PTR [r15]
   5e4a3:	41 0f 10 4f 10       	movups xmm1,XMMWORD PTR [r15+0x10]
   5e4a8:	0f 29 8c 24 90 00 00 	movaps XMMWORD PTR [rsp+0x90],xmm1
   5e4af:	00 
   5e4b0:	0f 29 84 24 80 00 00 	movaps XMMWORD PTR [rsp+0x80],xmm0
   5e4b7:	00 
   5e4b8:	48 8d bc 24 20 01 00 	lea    rdi,[rsp+0x120]
   5e4bf:	00 
   5e4c0:	48 8d 74 24 48       	lea    rsi,[rsp+0x48]
   5e4c5:	48 89 ea             	mov    rdx,rbp
   5e4c8:	48 8d 8c 24 80 00 00 	lea    rcx,[rsp+0x80]
   5e4cf:	00 
   5e4d0:	e8 1b 05 ff ff       	call   4e9f0 <alloc::collections::btree::map::BTreeMap<K,V,A>::insert>
   5e4d5:	41 0f 10 07          	movups xmm0,XMMWORD PTR [r15]
   5e4d9:	41 0f 10 4f 10       	movups xmm1,XMMWORD PTR [r15+0x10]
   5e4de:	0f 29 8c 24 b0 01 00 	movaps XMMWORD PTR [rsp+0x1b0],xmm1
   5e4e5:	00 
   5e4e6:	0f 29 84 24 a0 01 00 	movaps XMMWORD PTR [rsp+0x1a0],xmm0
   5e4ed:	00 
   5e4ee:	48 c7 84 24 f8 00 00 	mov    QWORD PTR [rsp+0xf8],0x0
   5e4f5:	00 00 00 00 00 
   5e4fa:	48 c7 84 24 00 01 00 	mov    QWORD PTR [rsp+0x100],0x8
   5e501:	00 08 00 00 00 
   5e506:	0f 57 c0             	xorps  xmm0,xmm0
   5e509:	41 0f 11 04 24       	movups XMMWORD PTR [r12],xmm0
   5e50e:	f2 0f 10 44 24 28    	movsd  xmm0,QWORD PTR [rsp+0x28]
   5e514:	f2 0f 11 84 24 18 01 	movsd  QWORD PTR [rsp+0x118],xmm0
   5e51b:	00 00 
   5e51d:	80 7b 10 01          	cmp    BYTE PTR [rbx+0x10],0x1
   5e521:	0f 85 d0 01 00 00    	jne    5e6f7 <strategy_tm6::signal_pairs_tree::SignalPairsTree::new+0x527>
   5e527:	48 8b 03             	mov    rax,QWORD PTR [rbx]
   5e52a:	48 8b 53 08          	mov    rdx,QWORD PTR [rbx+0x8]
   5e52e:	48 8d 48 01          	lea    rcx,[rax+0x1]
   5e532:	48 89 0b             	mov    QWORD PTR [rbx],rcx
   5e535:	0f 28 84 24 a0 01 00 	movaps xmm0,XMMWORD PTR [rsp+0x1a0]
   5e53c:	00 
   5e53d:	0f 28 8c 24 b0 01 00 	movaps xmm1,XMMWORD PTR [rsp+0x1b0]
   5e544:	00 
   5e545:	48 8d b4 24 78 01 00 	lea    rsi,[rsp+0x178]
   5e54c:	00 
   5e54d:	0f 11 4e 10          	movups XMMWORD PTR [rsi+0x10],xmm1
   5e551:	0f 11 06             	movups XMMWORD PTR [rsi],xmm0
   5e554:	0f 10 84 24 f8 00 00 	movups xmm0,XMMWORD PTR [rsp+0xf8]
   5e55b:	00 
   5e55c:	0f 10 8c 24 08 01 00 	movups xmm1,XMMWORD PTR [rsp+0x108]
   5e563:	00 
   5e564:	0f 29 84 24 20 01 00 	movaps XMMWORD PTR [rsp+0x120],xmm0
   5e56b:	00 
   5e56c:	0f 29 8c 24 30 01 00 	movaps XMMWORD PTR [rsp+0x130],xmm1
   5e573:	00 
   5e574:	48 8b 8c 24 18 01 00 	mov    rcx,QWORD PTR [rsp+0x118]
   5e57b:	00 
   5e57c:	48 89 8c 24 40 01 00 	mov    QWORD PTR [rsp+0x140],rcx
   5e583:	00 
   5e584:	0f 10 05 15 5d 07 00 	movups xmm0,XMMWORD PTR [rip+0x75d15]        # d42a0 <anon.d4a1fc886ee21fee57a5c323490ee03a.27.llvm.17305594220767975752+0x40>
   5e58b:	0f 11 46 e0          	movups XMMWORD PTR [rsi-0x20],xmm0
   5e58f:	0f 10 05 fa 5c 07 00 	movups xmm0,XMMWORD PTR [rip+0x75cfa]        # d4290 <anon.d4a1fc886ee21fee57a5c323490ee03a.27.llvm.17305594220767975752+0x30>
   5e596:	0f 11 46 d0          	movups XMMWORD PTR [rsi-0x30],xmm0
   5e59a:	48 89 84 24 68 01 00 	mov    QWORD PTR [rsp+0x168],rax
   5e5a1:	00 
   5e5a2:	48 89 94 24 70 01 00 	mov    QWORD PTR [rsp+0x170],rdx
   5e5a9:	00 
   5e5aa:	48 8d bc 24 80 00 00 	lea    rdi,[rsp+0x80]
   5e5b1:	00 
   5e5b2:	48 8d 74 24 30       	lea    rsi,[rsp+0x30]
   5e5b7:	48 89 ea             	mov    rdx,rbp
   5e5ba:	48 8d 8c 24 20 01 00 	lea    rcx,[rsp+0x120]
   5e5c1:	00 
   5e5c2:	e8 79 07 ff ff       	call   4ed40 <alloc::collections::btree::map::BTreeMap<K,V,A>::insert>
   5e5c7:	48 8b 84 24 80 00 00 	mov    rax,QWORD PTR [rsp+0x80]
   5e5ce:	00 
   5e5cf:	48 89 44 24 08       	mov    QWORD PTR [rsp+0x8],rax
   5e5d4:	4c 39 f0             	cmp    rax,r14
   5e5d7:	0f 84 b2 fe ff ff    	je     5e48f <strategy_tm6::signal_pairs_tree::SignalPairsTree::new+0x2bf>
   5e5dd:	4c 8b a4 24 98 00 00 	mov    r12,QWORD PTR [rsp+0x98]
   5e5e4:	00 
   5e5e5:	4d 85 e4             	test   r12,r12
   5e5e8:	0f 84 a2 00 00 00    	je     5e690 <strategy_tm6::signal_pairs_tree::SignalPairsTree::new+0x4c0>
   5e5ee:	4c 8b b4 24 88 00 00 	mov    r14,QWORD PTR [rsp+0x88]
   5e5f5:	00 
   5e5f6:	48 8b 84 24 90 00 00 	mov    rax,QWORD PTR [rsp+0x90]
   5e5fd:	00 
   5e5fe:	48 8b 7c 24 08       	mov    rdi,QWORD PTR [rsp+0x8]
   5e603:	48 39 f8             	cmp    rax,rdi
   5e606:	48 89 f9             	mov    rcx,rdi
   5e609:	be 00 00 00 00       	mov    esi,0x0
   5e60e:	48 0f 42 ce          	cmovb  rcx,rsi
   5e612:	48 89 c2             	mov    rdx,rax
   5e615:	48 29 ca             	sub    rdx,rcx
   5e618:	49 89 f8             	mov    r8,rdi
   5e61b:	49 29 d0             	sub    r8,rdx
   5e61e:	4a 8d 1c 22          	lea    rbx,[rdx+r12*1]
   5e622:	4c 89 64 24 10       	mov    QWORD PTR [rsp+0x10],r12
   5e627:	4c 89 44 24 78       	mov    QWORD PTR [rsp+0x78],r8
   5e62c:	4d 29 c4             	sub    r12,r8
   5e62f:	4c 0f 42 e6          	cmovb  r12,rsi
   5e633:	48 0f 47 df          	cmova  rbx,rdi
   5e637:	48 29 d3             	sub    rbx,rdx
   5e63a:	75 7e                	jne    5e6ba <strategy_tm6::signal_pairs_tree::SignalPairsTree::new+0x4ea>
   5e63c:	48 8b 44 24 78       	mov    rax,QWORD PTR [rsp+0x78]
   5e641:	48 3b 44 24 10       	cmp    rax,QWORD PTR [rsp+0x10]
   5e646:	48 8b 5c 24 20       	mov    rbx,QWORD PTR [rsp+0x20]
   5e64b:	4c 8b 6c 24 70       	mov    r13,QWORD PTR [rsp+0x70]
   5e650:	73 3e                	jae    5e690 <strategy_tm6::signal_pairs_tree::SignalPairsTree::new+0x4c0>
   5e652:	49 83 c6 50          	add    r14,0x50
   5e656:	eb 11                	jmp    5e669 <strategy_tm6::signal_pairs_tree::SignalPairsTree::new+0x499>
   5e658:	0f 1f 84 00 00 00 00 	nop    DWORD PTR [rax+rax*1+0x0]
   5e65f:	00 
   5e660:	49 83 c6 68          	add    r14,0x68
   5e664:	49 ff cc             	dec    r12
   5e667:	74 27                	je     5e690 <strategy_tm6::signal_pairs_tree::SignalPairsTree::new+0x4c0>
   5e669:	49 8b 76 f8          	mov    rsi,QWORD PTR [r14-0x8]
   5e66d:	48 85 f6             	test   rsi,rsi
   5e670:	74 ee                	je     5e660 <strategy_tm6::signal_pairs_tree::SignalPairsTree::new+0x490>
   5e672:	49 8b 3e             	mov    rdi,QWORD PTR [r14]
   5e675:	ba 01 00 00 00       	mov    edx,0x1
   5e67a:	ff 15 b8 ab 07 00    	call   QWORD PTR [rip+0x7abb8]        # d9238 <_DYNAMIC+0x208>
   5e680:	eb de                	jmp    5e660 <strategy_tm6::signal_pairs_tree::SignalPairsTree::new+0x490>
   5e682:	66 66 66 66 66 2e 0f 	data16 data16 data16 data16 cs nop WORD PTR [rax+rax*1+0x0]
   5e689:	1f 84 00 00 00 00 00 
   5e690:	48 8b 44 24 08       	mov    rax,QWORD PTR [rsp+0x8]
   5e695:	48 85 c0             	test   rax,rax
   5e698:	0f 84 d2 fd ff ff    	je     5e470 <strategy_tm6::signal_pairs_tree::SignalPairsTree::new+0x2a0>
   5e69e:	48 8b bc 24 88 00 00 	mov    rdi,QWORD PTR [rsp+0x88]
   5e6a5:	00 
   5e6a6:	48 6b f0 68          	imul   rsi,rax,0x68
   5e6aa:	ba 08 00 00 00       	mov    edx,0x8
   5e6af:	ff 15 83 ab 07 00    	call   QWORD PTR [rip+0x7ab83]        # d9238 <_DYNAMIC+0x208>
   5e6b5:	e9 b6 fd ff ff       	jmp    5e470 <strategy_tm6::signal_pairs_tree::SignalPairsTree::new+0x2a0>
   5e6ba:	48 6b c0 68          	imul   rax,rax,0x68
   5e6be:	48 6b c9 68          	imul   rcx,rcx,0x68
   5e6c2:	48 29 c8             	sub    rax,rcx
   5e6c5:	4d 8d 2c 06          	lea    r13,[r14+rax*1]
   5e6c9:	49 83 c5 50          	add    r13,0x50
   5e6cd:	eb 0e                	jmp    5e6dd <strategy_tm6::signal_pairs_tree::SignalPairsTree::new+0x50d>
   5e6cf:	90                   	nop
   5e6d0:	49 83 c5 68          	add    r13,0x68
   5e6d4:	48 ff cb             	dec    rbx
   5e6d7:	0f 84 5f ff ff ff    	je     5e63c <strategy_tm6::signal_pairs_tree::SignalPairsTree::new+0x46c>
   5e6dd:	49 8b 75 f8          	mov    rsi,QWORD PTR [r13-0x8]
   5e6e1:	48 85 f6             	test   rsi,rsi
   5e6e4:	74 ea                	je     5e6d0 <strategy_tm6::signal_pairs_tree::SignalPairsTree::new+0x500>
   5e6e6:	49 8b 7d 00          	mov    rdi,QWORD PTR [r13+0x0]
   5e6ea:	ba 01 00 00 00       	mov    edx,0x1
   5e6ef:	ff 15 43 ab 07 00    	call   QWORD PTR [rip+0x7ab43]        # d9238 <_DYNAMIC+0x208>
   5e6f5:	eb d9                	jmp    5e6d0 <strategy_tm6::signal_pairs_tree::SignalPairsTree::new+0x500>
   5e6f7:	ff 15 0b ae 07 00    	call   QWORD PTR [rip+0x7ae0b]        # d9508 <_DYNAMIC+0x4d8>
   5e6fd:	48 89 03             	mov    QWORD PTR [rbx],rax
   5e700:	48 89 53 08          	mov    QWORD PTR [rbx+0x8],rdx
   5e704:	c6 43 10 01          	mov    BYTE PTR [rbx+0x10],0x1
   5e708:	e9 21 fe ff ff       	jmp    5e52e <strategy_tm6::signal_pairs_tree::SignalPairsTree::new+0x35e>
   5e70d:	48 8b 44 24 40       	mov    rax,QWORD PTR [rsp+0x40]
   5e712:	48 8b 5c 24 68       	mov    rbx,QWORD PTR [rsp+0x68]
   5e717:	48 89 43 30          	mov    QWORD PTR [rbx+0x30],rax
   5e71b:	0f 10 44 24 30       	movups xmm0,XMMWORD PTR [rsp+0x30]
   5e720:	0f 11 43 20          	movups XMMWORD PTR [rbx+0x20],xmm0
   5e724:	0f 10 44 24 48       	movups xmm0,XMMWORD PTR [rsp+0x48]
   5e729:	0f 11 43 38          	movups XMMWORD PTR [rbx+0x38],xmm0
   5e72d:	48 8b 44 24 58       	mov    rax,QWORD PTR [rsp+0x58]
   5e732:	48 89 43 48          	mov    QWORD PTR [rbx+0x48],rax
   5e736:	48 8b 44 24 60       	mov    rax,QWORD PTR [rsp+0x60]
   5e73b:	0f 10 00             	movups xmm0,XMMWORD PTR [rax]
   5e73e:	0f 10 48 10          	movups xmm1,XMMWORD PTR [rax+0x10]
   5e742:	0f 11 03             	movups XMMWORD PTR [rbx],xmm0
   5e745:	0f 11 4b 10          	movups XMMWORD PTR [rbx+0x10],xmm1
   5e749:	48 8b 04 24          	mov    rax,QWORD PTR [rsp]
   5e74d:	48 8b 30             	mov    rsi,QWORD PTR [rax]
   5e750:	48 85 f6             	test   rsi,rsi
   5e753:	74 14                	je     5e769 <strategy_tm6::signal_pairs_tree::SignalPairsTree::new+0x599>
   5e755:	48 c1 e6 05          	shl    rsi,0x5
   5e759:	ba 08 00 00 00       	mov    edx,0x8
   5e75e:	48 8b 7c 24 18       	mov    rdi,QWORD PTR [rsp+0x18]
   5e763:	ff 15 cf aa 07 00    	call   QWORD PTR [rip+0x7aacf]        # d9238 <_DYNAMIC+0x208>
   5e769:	48 89 d8             	mov    rax,rbx
   5e76c:	48 81 c4 c8 01 00 00 	add    rsp,0x1c8
   5e773:	5b                   	pop    rbx
   5e774:	41 5c                	pop    r12
   5e776:	41 5d                	pop    r13
   5e778:	41 5e                	pop    r14
   5e77a:	41 5f                	pop    r15
   5e77c:	5d                   	pop    rbp
   5e77d:	c3                   	ret    
   5e77e:	48 6b c0 68          	imul   rax,rax,0x68
   5e782:	48 6b c9 68          	imul   rcx,rcx,0x68
   5e786:	48 29 c8             	sub    rax,rcx
   5e789:	4e 8d 2c 30          	lea    r13,[rax+r14*1]
   5e78d:	49 83 c5 50          	add    r13,0x50
   5e791:	4c 8b 25 a0 aa 07 00 	mov    r12,QWORD PTR [rip+0x7aaa0]        # d9238 <_DYNAMIC+0x208>
   5e798:	eb 13                	jmp    5e7ad <strategy_tm6::signal_pairs_tree::SignalPairsTree::new+0x5dd>
   5e79a:	66 0f 1f 44 00 00    	nop    WORD PTR [rax+rax*1+0x0]
   5e7a0:	49 83 c5 68          	add    r13,0x68
   5e7a4:	48 ff cd             	dec    rbp
   5e7a7:	0f 84 0c fc ff ff    	je     5e3b9 <strategy_tm6::signal_pairs_tree::SignalPairsTree::new+0x1e9>
   5e7ad:	49 8b 75 f8          	mov    rsi,QWORD PTR [r13-0x8]
   5e7b1:	48 85 f6             	test   rsi,rsi
   5e7b4:	74 ea                	je     5e7a0 <strategy_tm6::signal_pairs_tree::SignalPairsTree::new+0x5d0>
   5e7b6:	49 8b 7d 00          	mov    rdi,QWORD PTR [r13+0x0]
   5e7ba:	ba 01 00 00 00       	mov    edx,0x1
   5e7bf:	41 ff d4             	call   r12
   5e7c2:	eb dc                	jmp    5e7a0 <strategy_tm6::signal_pairs_tree::SignalPairsTree::new+0x5d0>
   5e7c4:	ff 15 3e ad 07 00    	call   QWORD PTR [rip+0x7ad3e]        # d9508 <_DYNAMIC+0x4d8>
   5e7ca:	48 89 03             	mov    QWORD PTR [rbx],rax
   5e7cd:	48 89 53 08          	mov    QWORD PTR [rbx+0x8],rdx
   5e7d1:	c6 43 10 01          	mov    BYTE PTR [rbx+0x10],0x1
   5e7d5:	e9 c7 fa ff ff       	jmp    5e2a1 <strategy_tm6::signal_pairs_tree::SignalPairsTree::new+0xd1>
   5e7da:	48 89 c3             	mov    rbx,rax
   5e7dd:	48 8d bc 24 80 00 00 	lea    rdi,[rsp+0x80]
   5e7e4:	00 
   5e7e5:	e8 36 ef ff ff       	call   5d720 <core::ptr::drop_in_place<strategy_tm6::signal_pairs_tree::RollingmsQueue<strategy_tm6::signal_pairs_tree::SignalPair>>>
   5e7ea:	eb 17                	jmp    5e803 <strategy_tm6::signal_pairs_tree::SignalPairsTree::new+0x633>
   5e7ec:	48 89 c3             	mov    rbx,rax
   5e7ef:	48 8d bc 24 f8 00 00 	lea    rdi,[rsp+0xf8]
   5e7f6:	00 
   5e7f7:	e8 24 ef ff ff       	call   5d720 <core::ptr::drop_in_place<strategy_tm6::signal_pairs_tree::RollingmsQueue<strategy_tm6::signal_pairs_tree::SignalPair>>>
   5e7fc:	eb 05                	jmp    5e803 <strategy_tm6::signal_pairs_tree::SignalPairsTree::new+0x633>
   5e7fe:	eb 00                	jmp    5e800 <strategy_tm6::signal_pairs_tree::SignalPairsTree::new+0x630>
   5e800:	48 89 c3             	mov    rbx,rax
   5e803:	48 8d 7c 24 48       	lea    rdi,[rsp+0x48]
   5e808:	e8 d3 0d ff ff       	call   4f5e0 <<alloc::collections::btree::map::BTreeMap<K,V,A> as core::ops::drop::Drop>::drop>
   5e80d:	48 8d 7c 24 30       	lea    rdi,[rsp+0x30]
   5e812:	e8 e9 0b ff ff       	call   4f400 <<alloc::collections::btree::map::BTreeMap<K,V,A> as core::ops::drop::Drop>::drop>
   5e817:	48 8b 04 24          	mov    rax,QWORD PTR [rsp]
   5e81b:	48 8b 30             	mov    rsi,QWORD PTR [rax]
   5e81e:	48 85 f6             	test   rsi,rsi
   5e821:	74 17                	je     5e83a <strategy_tm6::signal_pairs_tree::SignalPairsTree::new+0x66a>
   5e823:	48 8b 04 24          	mov    rax,QWORD PTR [rsp]
   5e827:	48 8b 78 08          	mov    rdi,QWORD PTR [rax+0x8]
   5e82b:	48 c1 e6 05          	shl    rsi,0x5
   5e82f:	ba 08 00 00 00       	mov    edx,0x8
   5e834:	ff 15 fe a9 07 00    	call   QWORD PTR [rip+0x7a9fe]        # d9238 <_DYNAMIC+0x208>
   5e83a:	48 89 df             	mov    rdi,rbx
   5e83d:	e8 2e 39 07 00       	call   d2170 <_Unwind_Resume@plt>
   5e842:	ff 15 48 aa 07 00    	call   QWORD PTR [rip+0x7aa48]        # d9290 <_DYNAMIC+0x260>
   5e848:	cc                   	int3   
   5e849:	cc                   	int3   
   5e84a:	cc                   	int3   
   5e84b:	cc                   	int3   
   5e84c:	cc                   	int3   
   5e84d:	cc                   	int3   
   5e84e:	cc                   	int3   
   5e84f:	cc                   	int3   

000000000005e850 <strategy_tm6::signal_pairs_tree::SignalPairsTree::update>:
   5e850:	55                   	push   rbp
   5e851:	41 57                	push   r15
   5e853:	41 56                	push   r14
   5e855:	41 55                	push   r13
   5e857:	41 54                	push   r12
   5e859:	53                   	push   rbx
   5e85a:	48 81 ec a8 01 00 00 	sub    rsp,0x1a8
   5e861:	66 0f d6 4c 24 08    	movq   QWORD PTR [rsp+0x8],xmm1
   5e867:	66 0f d6 44 24 10    	movq   QWORD PTR [rsp+0x10],xmm0
   5e86d:	49 89 f4             	mov    r12,rsi
   5e870:	48 8b 47 20          	mov    rax,QWORD PTR [rdi+0x20]
   5e874:	48 8b 57 30          	mov    rdx,QWORD PTR [rdi+0x30]
   5e878:	48 85 c0             	test   rax,rax
   5e87b:	0f 95 c1             	setne  cl
   5e87e:	48 89 94 24 18 01 00 	mov    QWORD PTR [rsp+0x118],rdx
   5e885:	00 
   5e886:	48 85 d2             	test   rdx,rdx
   5e889:	0f 95 c2             	setne  dl
   5e88c:	20 ca                	and    dl,cl
   5e88e:	80 fa 01             	cmp    dl,0x1
   5e891:	0f 85 ee 0b 00 00    	jne    5f485 <strategy_tm6::signal_pairs_tree::SignalPairsTree::update+0xc35>
   5e897:	45 31 ed             	xor    r13d,r13d
   5e89a:	48 85 c0             	test   rax,rax
   5e89d:	41 0f 95 c5          	setne  r13b
   5e8a1:	4c 8b 7f 28          	mov    r15,QWORD PTR [rdi+0x28]
   5e8a5:	45 31 f6             	xor    r14d,r14d
   5e8a8:	4c 89 24 24          	mov    QWORD PTR [rsp],r12
   5e8ac:	4d 85 f6             	test   r14,r14
   5e8af:	75 3f                	jne    5e8f0 <strategy_tm6::signal_pairs_tree::SignalPairsTree::update+0xa0>
   5e8b1:	41 f6 c5 01          	test   r13b,0x1
   5e8b5:	74 39                	je     5e8f0 <strategy_tm6::signal_pairs_tree::SignalPairsTree::update+0xa0>
   5e8b7:	41 bd 01 00 00 00    	mov    r13d,0x1
   5e8bd:	4d 85 ff             	test   r15,r15
   5e8c0:	74 4d                	je     5e90f <strategy_tm6::signal_pairs_tree::SignalPairsTree::update+0xbf>
   5e8c2:	4c 89 f9             	mov    rcx,r15
   5e8c5:	49 89 c6             	mov    r14,rax
   5e8c8:	48 83 e1 07          	and    rcx,0x7
   5e8cc:	74 46                	je     5e914 <strategy_tm6::signal_pairs_tree::SignalPairsTree::update+0xc4>
   5e8ce:	31 d2                	xor    edx,edx
   5e8d0:	4d 8b b6 90 05 00 00 	mov    r14,QWORD PTR [r14+0x590]
   5e8d7:	48 ff c2             	inc    rdx
   5e8da:	48 39 d1             	cmp    rcx,rdx
   5e8dd:	75 f1                	jne    5e8d0 <strategy_tm6::signal_pairs_tree::SignalPairsTree::update+0x80>
   5e8df:	4c 89 f8             	mov    rax,r15
   5e8e2:	48 29 d0             	sub    rax,rdx
   5e8e5:	49 83 ff 08          	cmp    r15,0x8
   5e8e9:	73 35                	jae    5e920 <strategy_tm6::signal_pairs_tree::SignalPairsTree::update+0xd0>
   5e8eb:	eb 71                	jmp    5e95e <strategy_tm6::signal_pairs_tree::SignalPairsTree::update+0x10e>
   5e8ed:	0f 1f 00             	nop    DWORD PTR [rax]
   5e8f0:	41 f6 c5 01          	test   r13b,0x1
   5e8f4:	0f 84 c5 0b 00 00    	je     5f4bf <strategy_tm6::signal_pairs_tree::SignalPairsTree::update+0xc6f>
   5e8fa:	41 0f b7 8e 8a 05 00 	movzx  ecx,WORD PTR [r14+0x58a]
   5e901:	00 
   5e902:	49 39 cf             	cmp    r15,rcx
   5e905:	73 69                	jae    5e970 <strategy_tm6::signal_pairs_tree::SignalPairsTree::update+0x120>
   5e907:	4c 89 f3             	mov    rbx,r14
   5e90a:	e9 85 00 00 00       	jmp    5e994 <strategy_tm6::signal_pairs_tree::SignalPairsTree::update+0x144>
   5e90f:	49 89 c6             	mov    r14,rax
   5e912:	eb 4a                	jmp    5e95e <strategy_tm6::signal_pairs_tree::SignalPairsTree::update+0x10e>
   5e914:	4c 89 f8             	mov    rax,r15
   5e917:	49 83 ff 08          	cmp    r15,0x8
   5e91b:	72 41                	jb     5e95e <strategy_tm6::signal_pairs_tree::SignalPairsTree::update+0x10e>
   5e91d:	0f 1f 00             	nop    DWORD PTR [rax]
   5e920:	49 8b 8e 90 05 00 00 	mov    rcx,QWORD PTR [r14+0x590]
   5e927:	48 8b 89 90 05 00 00 	mov    rcx,QWORD PTR [rcx+0x590]
   5e92e:	48 8b 89 90 05 00 00 	mov    rcx,QWORD PTR [rcx+0x590]
   5e935:	48 8b 89 90 05 00 00 	mov    rcx,QWORD PTR [rcx+0x590]
   5e93c:	48 8b 89 90 05 00 00 	mov    rcx,QWORD PTR [rcx+0x590]
   5e943:	48 8b 89 90 05 00 00 	mov    rcx,QWORD PTR [rcx+0x590]
   5e94a:	48 8b 89 90 05 00 00 	mov    rcx,QWORD PTR [rcx+0x590]
   5e951:	4c 8b b1 90 05 00 00 	mov    r14,QWORD PTR [rcx+0x590]
   5e958:	48 83 c0 f8          	add    rax,0xfffffffffffffff8
   5e95c:	75 c2                	jne    5e920 <strategy_tm6::signal_pairs_tree::SignalPairsTree::update+0xd0>
   5e95e:	31 c0                	xor    eax,eax
   5e960:	45 31 ff             	xor    r15d,r15d
   5e963:	41 0f b7 8e 8a 05 00 	movzx  ecx,WORD PTR [r14+0x58a]
   5e96a:	00 
   5e96b:	49 39 cf             	cmp    r15,rcx
   5e96e:	72 97                	jb     5e907 <strategy_tm6::signal_pairs_tree::SignalPairsTree::update+0xb7>
   5e970:	49 8b 1e             	mov    rbx,QWORD PTR [r14]
   5e973:	48 85 db             	test   rbx,rbx
   5e976:	0f 84 52 0b 00 00    	je     5f4ce <strategy_tm6::signal_pairs_tree::SignalPairsTree::update+0xc7e>
   5e97c:	48 ff c0             	inc    rax
   5e97f:	45 0f b7 be 88 05 00 	movzx  r15d,WORD PTR [r14+0x588]
   5e986:	00 
   5e987:	49 89 de             	mov    r14,rbx
   5e98a:	66 44 3b bb 8a 05 00 	cmp    r15w,WORD PTR [rbx+0x58a]
   5e991:	00 
   5e992:	73 dc                	jae    5e970 <strategy_tm6::signal_pairs_tree::SignalPairsTree::update+0x120>
   5e994:	49 8d 4f 01          	lea    rcx,[r15+0x1]
   5e998:	48 85 c0             	test   rax,rax
   5e99b:	0f 84 8f 00 00 00    	je     5ea30 <strategy_tm6::signal_pairs_tree::SignalPairsTree::update+0x1e0>
   5e9a1:	48 8d 0c cb          	lea    rcx,[rbx+rcx*8]
   5e9a5:	48 81 c1 90 05 00 00 	add    rcx,0x590
   5e9ac:	48 89 c2             	mov    rdx,rax
   5e9af:	48 83 e2 07          	and    rdx,0x7
   5e9b3:	0f 84 b7 06 00 00    	je     5f070 <strategy_tm6::signal_pairs_tree::SignalPairsTree::update+0x820>
   5e9b9:	31 f6                	xor    esi,esi
   5e9bb:	0f 1f 44 00 00       	nop    DWORD PTR [rax+rax*1+0x0]
   5e9c0:	4c 8b 31             	mov    r14,QWORD PTR [rcx]
   5e9c3:	49 8d 8e 90 05 00 00 	lea    rcx,[r14+0x590]
   5e9ca:	48 ff c6             	inc    rsi
   5e9cd:	48 39 f2             	cmp    rdx,rsi
   5e9d0:	75 ee                	jne    5e9c0 <strategy_tm6::signal_pairs_tree::SignalPairsTree::update+0x170>
   5e9d2:	48 89 c2             	mov    rdx,rax
   5e9d5:	48 29 f2             	sub    rdx,rsi
   5e9d8:	48 83 f8 08          	cmp    rax,0x8
   5e9dc:	72 43                	jb     5ea21 <strategy_tm6::signal_pairs_tree::SignalPairsTree::update+0x1d1>
   5e9de:	66 90                	xchg   ax,ax
   5e9e0:	48 8b 01             	mov    rax,QWORD PTR [rcx]
   5e9e3:	48 8b 80 90 05 00 00 	mov    rax,QWORD PTR [rax+0x590]
   5e9ea:	48 8b 80 90 05 00 00 	mov    rax,QWORD PTR [rax+0x590]
   5e9f1:	48 8b 80 90 05 00 00 	mov    rax,QWORD PTR [rax+0x590]
   5e9f8:	48 8b 80 90 05 00 00 	mov    rax,QWORD PTR [rax+0x590]
   5e9ff:	48 8b 80 90 05 00 00 	mov    rax,QWORD PTR [rax+0x590]
   5ea06:	48 8b 80 90 05 00 00 	mov    rax,QWORD PTR [rax+0x590]
   5ea0d:	4c 8b b0 90 05 00 00 	mov    r14,QWORD PTR [rax+0x590]
   5ea14:	49 8d 8e 90 05 00 00 	lea    rcx,[r14+0x590]
   5ea1b:	48 83 c2 f8          	add    rdx,0xfffffffffffffff8
   5ea1f:	75 bf                	jne    5e9e0 <strategy_tm6::signal_pairs_tree::SignalPairsTree::update+0x190>
   5ea21:	31 c9                	xor    ecx,ecx
   5ea23:	eb 0e                	jmp    5ea33 <strategy_tm6::signal_pairs_tree::SignalPairsTree::update+0x1e3>
   5ea25:	66 66 2e 0f 1f 84 00 	data16 cs nop WORD PTR [rax+rax*1+0x0]
   5ea2c:	00 00 00 00 
   5ea30:	49 89 de             	mov    r14,rbx
   5ea33:	48 89 8c 24 c8 00 00 	mov    QWORD PTR [rsp+0xc8],rcx
   5ea3a:	00 
   5ea3b:	4c 89 ac 24 c0 00 00 	mov    QWORD PTR [rsp+0xc0],r13
   5ea42:	00 
   5ea43:	48 8d 7c 24 18       	lea    rdi,[rsp+0x18]
   5ea48:	4c 89 e6             	mov    rsi,r12
   5ea4b:	48 8d 15 4e 59 07 00 	lea    rdx,[rip+0x7594e]        # d43a0 <anon.d4a1fc886ee21fee57a5c323490ee03a.27.llvm.17305594220767975752+0x140>
   5ea52:	ff 15 58 a9 07 00    	call   QWORD PTR [rip+0x7a958]        # d93b0 <_DYNAMIC+0x380>
   5ea58:	49 6b c7 78          	imul   rax,r15,0x78
   5ea5c:	4c 8d 3c 03          	lea    r15,[rbx+rax*1]
   5ea60:	49 83 c7 60          	add    r15,0x60
   5ea64:	49 8d 47 28          	lea    rax,[r15+0x28]
   5ea68:	48 89 44 24 38       	mov    QWORD PTR [rsp+0x38],rax
   5ea6d:	49 83 7f 40 00       	cmp    QWORD PTR [r15+0x40],0x0
   5ea72:	4c 89 7c 24 40       	mov    QWORD PTR [rsp+0x40],r15
   5ea77:	0f 84 13 01 00 00    	je     5eb90 <strategy_tm6::signal_pairs_tree::SignalPairsTree::update+0x340>
   5ea7d:	49 8d 7f 48          	lea    rdi,[r15+0x48]
   5ea81:	48 8d 74 24 18       	lea    rsi,[rsp+0x18]
   5ea86:	e8 b5 7e ff ff       	call   56940 <core::hash::BuildHasher::hash_one>
   5ea8b:	48 89 c1             	mov    rcx,rax
   5ea8e:	48 c1 e9 39          	shr    rcx,0x39
   5ea92:	49 8b 5f 28          	mov    rbx,QWORD PTR [r15+0x28]
   5ea96:	49 8b 77 30          	mov    rsi,QWORD PTR [r15+0x30]
   5ea9a:	66 0f 6e c1          	movd   xmm0,ecx
   5ea9e:	66 0f 60 c0          	punpcklbw xmm0,xmm0
   5eaa2:	f2 0f 70 c0 00       	pshuflw xmm0,xmm0,0x0
   5eaa7:	66 0f 70 c8 00       	pshufd xmm1,xmm0,0x0
   5eaac:	48 8d 6b 88          	lea    rbp,[rbx-0x78]
   5eab0:	4c 8b 6c 24 20       	mov    r13,QWORD PTR [rsp+0x20]
   5eab5:	4c 8b 7c 24 28       	mov    r15,QWORD PTR [rsp+0x28]
   5eaba:	31 ff                	xor    edi,edi
   5eabc:	48 21 f0             	and    rax,rsi
   5eabf:	f3 0f 6f 14 03       	movdqu xmm2,XMMWORD PTR [rbx+rax*1]
   5eac4:	66 0f 6f c2          	movdqa xmm0,xmm2
   5eac8:	66 0f 74 c1          	pcmpeqb xmm0,xmm1
   5eacc:	66 44 0f d7 e0       	pmovmskb r12d,xmm0
   5ead1:	45 85 e4             	test   r12d,r12d
   5ead4:	0f 84 96 00 00 00    	je     5eb70 <strategy_tm6::signal_pairs_tree::SignalPairsTree::update+0x320>
   5eada:	48 89 44 24 30       	mov    QWORD PTR [rsp+0x30],rax
   5eadf:	66 0f 7f 8c 24 00 01 	movdqa XMMWORD PTR [rsp+0x100],xmm1
   5eae6:	00 00 
   5eae8:	48 89 b4 24 f0 00 00 	mov    QWORD PTR [rsp+0xf0],rsi
   5eaef:	00 
   5eaf0:	48 89 bc 24 e0 00 00 	mov    QWORD PTR [rsp+0xe0],rdi
   5eaf7:	00 
   5eaf8:	66 0f 7f 94 24 d0 00 	movdqa XMMWORD PTR [rsp+0xd0],xmm2
   5eaff:	00 00 
   5eb01:	f3 41 0f bc cc       	tzcnt  ecx,r12d
   5eb06:	48 01 c1             	add    rcx,rax
   5eb09:	48 21 f1             	and    rcx,rsi
   5eb0c:	48 f7 d9             	neg    rcx
   5eb0f:	48 6b c1 78          	imul   rax,rcx,0x78
   5eb13:	4c 3b 7c 05 10       	cmp    r15,QWORD PTR [rbp+rax*1+0x10]
   5eb18:	75 1b                	jne    5eb35 <strategy_tm6::signal_pairs_tree::SignalPairsTree::update+0x2e5>
   5eb1a:	48 01 e8             	add    rax,rbp
   5eb1d:	48 8b 70 08          	mov    rsi,QWORD PTR [rax+0x8]
   5eb21:	4c 89 ef             	mov    rdi,r13
   5eb24:	4c 89 fa             	mov    rdx,r15
   5eb27:	ff 15 4b a8 07 00    	call   QWORD PTR [rip+0x7a84b]        # d9378 <bcmp@GLIBC_2.2.5>
   5eb2d:	85 c0                	test   eax,eax
   5eb2f:	0f 84 cb 00 00 00    	je     5ec00 <strategy_tm6::signal_pairs_tree::SignalPairsTree::update+0x3b0>
   5eb35:	41 8d 44 24 ff       	lea    eax,[r12-0x1]
   5eb3a:	66 44 21 e0          	and    ax,r12w
   5eb3e:	41 89 c4             	mov    r12d,eax
   5eb41:	48 8b 44 24 30       	mov    rax,QWORD PTR [rsp+0x30]
   5eb46:	66 0f 6f 8c 24 00 01 	movdqa xmm1,XMMWORD PTR [rsp+0x100]
   5eb4d:	00 00 
   5eb4f:	48 8b b4 24 f0 00 00 	mov    rsi,QWORD PTR [rsp+0xf0]
   5eb56:	00 
   5eb57:	48 8b bc 24 e0 00 00 	mov    rdi,QWORD PTR [rsp+0xe0]
   5eb5e:	00 
   5eb5f:	66 0f 6f 94 24 d0 00 	movdqa xmm2,XMMWORD PTR [rsp+0xd0]
   5eb66:	00 00 
   5eb68:	75 97                	jne    5eb01 <strategy_tm6::signal_pairs_tree::SignalPairsTree::update+0x2b1>
   5eb6a:	66 0f 1f 44 00 00    	nop    WORD PTR [rax+rax*1+0x0]
   5eb70:	66 0f 74 15 d8 83 fb 	pcmpeqb xmm2,XMMWORD PTR [rip+0xfffffffffffb83d8]        # 16f50 <anon.1716677ce335e42ffcebf7b090067291.0.llvm.9466522774482311751>
   5eb77:	ff 
   5eb78:	66 0f d7 ca          	pmovmskb ecx,xmm2
   5eb7c:	85 c9                	test   ecx,ecx
   5eb7e:	75 10                	jne    5eb90 <strategy_tm6::signal_pairs_tree::SignalPairsTree::update+0x340>
   5eb80:	48 01 f8             	add    rax,rdi
   5eb83:	48 83 c0 10          	add    rax,0x10
   5eb87:	48 83 c7 10          	add    rdi,0x10
   5eb8b:	e9 2c ff ff ff       	jmp    5eabc <strategy_tm6::signal_pairs_tree::SignalPairsTree::update+0x26c>
   5eb90:	48 8d 7c 24 48       	lea    rdi,[rsp+0x48]
   5eb95:	48 8d 74 24 18       	lea    rsi,[rsp+0x18]
   5eb9a:	48 8d 15 0f 57 07 00 	lea    rdx,[rip+0x7570f]        # d42b0 <anon.d4a1fc886ee21fee57a5c323490ee03a.27.llvm.17305594220767975752+0x50>
   5eba1:	ff 15 09 a8 07 00    	call   QWORD PTR [rip+0x7a809]        # d93b0 <_DYNAMIC+0x380>
   5eba7:	48 c7 44 24 60 02 00 	mov    QWORD PTR [rsp+0x60],0x2
   5ebae:	00 00 
   5ebb0:	48 8d bc 24 20 01 00 	lea    rdi,[rsp+0x120]
   5ebb7:	00 
   5ebb8:	48 8b 74 24 38       	mov    rsi,QWORD PTR [rsp+0x38]
   5ebbd:	48 8d 54 24 48       	lea    rdx,[rsp+0x48]
   5ebc2:	48 8d 4c 24 60       	lea    rcx,[rsp+0x60]
   5ebc7:	e8 44 19 00 00       	call   60510 <hashbrown::map::HashMap<K,V,S,A>::insert>
   5ebcc:	83 bc 24 20 01 00 00 	cmp    DWORD PTR [rsp+0x120],0x1
   5ebd3:	01 
   5ebd4:	77 2a                	ja     5ec00 <strategy_tm6::signal_pairs_tree::SignalPairsTree::update+0x3b0>
   5ebd6:	48 8b b4 24 60 01 00 	mov    rsi,QWORD PTR [rsp+0x160]
   5ebdd:	00 
   5ebde:	48 85 f6             	test   rsi,rsi
   5ebe1:	74 1d                	je     5ec00 <strategy_tm6::signal_pairs_tree::SignalPairsTree::update+0x3b0>
   5ebe3:	48 8b bc 24 68 01 00 	mov    rdi,QWORD PTR [rsp+0x168]
   5ebea:	00 
   5ebeb:	ba 01 00 00 00       	mov    edx,0x1
   5ebf0:	ff 15 42 a6 07 00    	call   QWORD PTR [rip+0x7a642]        # d9238 <_DYNAMIC+0x208>
   5ebf6:	66 2e 0f 1f 84 00 00 	cs nop WORD PTR [rax+rax*1+0x0]
   5ebfd:	00 00 00 
   5ec00:	48 8b 5c 24 40       	mov    rbx,QWORD PTR [rsp+0x40]
   5ec05:	48 83 7b 40 00       	cmp    QWORD PTR [rbx+0x40],0x0
   5ec0a:	0f 84 a0 08 00 00    	je     5f4b0 <strategy_tm6::signal_pairs_tree::SignalPairsTree::update+0xc60>
   5ec10:	48 8d 7b 48          	lea    rdi,[rbx+0x48]
   5ec14:	48 89 7c 24 30       	mov    QWORD PTR [rsp+0x30],rdi
   5ec19:	48 8d 74 24 18       	lea    rsi,[rsp+0x18]
   5ec1e:	e8 1d 7d ff ff       	call   56940 <core::hash::BuildHasher::hash_one>
   5ec23:	49 89 c5             	mov    r13,rax
   5ec26:	48 ff 8c 24 18 01 00 	dec    QWORD PTR [rsp+0x118]
   5ec2d:	00 
   5ec2e:	48 c1 e8 39          	shr    rax,0x39
   5ec32:	48 8b 6b 28          	mov    rbp,QWORD PTR [rbx+0x28]
   5ec36:	48 8b 73 30          	mov    rsi,QWORD PTR [rbx+0x30]
   5ec3a:	66 0f 6e c0          	movd   xmm0,eax
   5ec3e:	66 0f 60 c0          	punpcklbw xmm0,xmm0
   5ec42:	f2 0f 70 c0 00       	pshuflw xmm0,xmm0,0x0
   5ec47:	66 0f 70 c8 00       	pshufd xmm1,xmm0,0x0
   5ec4c:	48 8d 4d 88          	lea    rcx,[rbp-0x78]
   5ec50:	48 8b 7c 24 20       	mov    rdi,QWORD PTR [rsp+0x20]
   5ec55:	48 8b 5c 24 28       	mov    rbx,QWORD PTR [rsp+0x28]
   5ec5a:	45 31 c0             	xor    r8d,r8d
   5ec5d:	49 21 f5             	and    r13,rsi
   5ec60:	f3 42 0f 6f 54 2d 00 	movdqu xmm2,XMMWORD PTR [rbp+r13*1+0x0]
   5ec67:	66 0f 6f c2          	movdqa xmm0,xmm2
   5ec6b:	66 0f 74 c1          	pcmpeqb xmm0,xmm1
   5ec6f:	66 0f d7 c0          	pmovmskb eax,xmm0
   5ec73:	85 c0                	test   eax,eax
   5ec75:	0f 84 b5 00 00 00    	je     5ed30 <strategy_tm6::signal_pairs_tree::SignalPairsTree::update+0x4e0>
   5ec7b:	66 0f 7f 8c 24 e0 00 	movdqa XMMWORD PTR [rsp+0xe0],xmm1
   5ec82:	00 00 
   5ec84:	48 89 b4 24 d0 00 00 	mov    QWORD PTR [rsp+0xd0],rsi
   5ec8b:	00 
   5ec8c:	4c 89 84 24 80 01 00 	mov    QWORD PTR [rsp+0x180],r8
   5ec93:	00 
   5ec94:	66 0f 7f 94 24 90 01 	movdqa XMMWORD PTR [rsp+0x190],xmm2
   5ec9b:	00 00 
   5ec9d:	48 89 84 24 f0 00 00 	mov    QWORD PTR [rsp+0xf0],rax
   5eca4:	00 
   5eca5:	f3 0f bc c0          	tzcnt  eax,eax
   5eca9:	4c 01 e8             	add    rax,r13
   5ecac:	48 21 f0             	and    rax,rsi
   5ecaf:	48 f7 d8             	neg    rax
   5ecb2:	4c 6b f8 78          	imul   r15,rax,0x78
   5ecb6:	4a 3b 5c 39 10       	cmp    rbx,QWORD PTR [rcx+r15*1+0x10]
   5ecbb:	75 31                	jne    5ecee <strategy_tm6::signal_pairs_tree::SignalPairsTree::update+0x49e>
   5ecbd:	4a 8d 04 39          	lea    rax,[rcx+r15*1]
   5ecc1:	48 8b 70 08          	mov    rsi,QWORD PTR [rax+0x8]
   5ecc5:	49 89 fc             	mov    r12,rdi
   5ecc8:	48 89 da             	mov    rdx,rbx
   5eccb:	48 89 ac 24 00 01 00 	mov    QWORD PTR [rsp+0x100],rbp
   5ecd2:	00 
   5ecd3:	48 89 cd             	mov    rbp,rcx
   5ecd6:	ff 15 9c a6 07 00    	call   QWORD PTR [rip+0x7a69c]        # d9378 <bcmp@GLIBC_2.2.5>
   5ecdc:	4c 89 e7             	mov    rdi,r12
   5ecdf:	48 89 e9             	mov    rcx,rbp
   5ece2:	48 8b ac 24 00 01 00 	mov    rbp,QWORD PTR [rsp+0x100]
   5ece9:	00 
   5ecea:	85 c0                	test   eax,eax
   5ecec:	74 72                	je     5ed60 <strategy_tm6::signal_pairs_tree::SignalPairsTree::update+0x510>
   5ecee:	48 8b b4 24 f0 00 00 	mov    rsi,QWORD PTR [rsp+0xf0]
   5ecf5:	00 
   5ecf6:	8d 46 ff             	lea    eax,[rsi-0x1]
   5ecf9:	66 21 f0             	and    ax,si
   5ecfc:	66 0f 6f 8c 24 e0 00 	movdqa xmm1,XMMWORD PTR [rsp+0xe0]
   5ed03:	00 00 
   5ed05:	48 8b b4 24 d0 00 00 	mov    rsi,QWORD PTR [rsp+0xd0]
   5ed0c:	00 
   5ed0d:	4c 8b 84 24 80 01 00 	mov    r8,QWORD PTR [rsp+0x180]
   5ed14:	00 
   5ed15:	66 0f 6f 94 24 90 01 	movdqa xmm2,XMMWORD PTR [rsp+0x190]
   5ed1c:	00 00 
   5ed1e:	0f 85 79 ff ff ff    	jne    5ec9d <strategy_tm6::signal_pairs_tree::SignalPairsTree::update+0x44d>
   5ed24:	66 66 66 2e 0f 1f 84 	data16 data16 cs nop WORD PTR [rax+rax*1+0x0]
   5ed2b:	00 00 00 00 00 
   5ed30:	66 0f 74 15 18 82 fb 	pcmpeqb xmm2,XMMWORD PTR [rip+0xfffffffffffb8218]        # 16f50 <anon.1716677ce335e42ffcebf7b090067291.0.llvm.9466522774482311751>
   5ed37:	ff 
   5ed38:	66 0f d7 c2          	pmovmskb eax,xmm2
   5ed3c:	85 c0                	test   eax,eax
   5ed3e:	4c 8b 64 24 40       	mov    r12,QWORD PTR [rsp+0x40]
   5ed43:	75 2c                	jne    5ed71 <strategy_tm6::signal_pairs_tree::SignalPairsTree::update+0x521>
   5ed45:	4d 01 c5             	add    r13,r8
   5ed48:	49 83 c5 10          	add    r13,0x10
   5ed4c:	49 83 c0 10          	add    r8,0x10
   5ed50:	e9 08 ff ff ff       	jmp    5ec5d <strategy_tm6::signal_pairs_tree::SignalPairsTree::update+0x40d>
   5ed55:	66 66 2e 0f 1f 84 00 	data16 cs nop WORD PTR [rax+rax*1+0x0]
   5ed5c:	00 00 00 00 
   5ed60:	42 83 7c 3d a0 02    	cmp    DWORD PTR [rbp+r15*1-0x60],0x2
   5ed66:	4c 8b 64 24 40       	mov    r12,QWORD PTR [rsp+0x40]
   5ed6b:	0f 85 4f 02 00 00    	jne    5efc0 <strategy_tm6::signal_pairs_tree::SignalPairsTree::update+0x770>
   5ed71:	49 83 7c 24 40 00    	cmp    QWORD PTR [r12+0x40],0x0
   5ed77:	0f 84 33 07 00 00    	je     5f4b0 <strategy_tm6::signal_pairs_tree::SignalPairsTree::update+0xc60>
   5ed7d:	48 8b 7c 24 30       	mov    rdi,QWORD PTR [rsp+0x30]
   5ed82:	48 8d 74 24 18       	lea    rsi,[rsp+0x18]
   5ed87:	e8 b4 7b ff ff       	call   56940 <core::hash::BuildHasher::hash_one>
   5ed8c:	48 89 c1             	mov    rcx,rax
   5ed8f:	48 c1 e9 39          	shr    rcx,0x39
   5ed93:	49 8b 5c 24 28       	mov    rbx,QWORD PTR [r12+0x28]
   5ed98:	49 8b 74 24 30       	mov    rsi,QWORD PTR [r12+0x30]
   5ed9d:	66 0f 6e c1          	movd   xmm0,ecx
   5eda1:	66 0f 60 c0          	punpcklbw xmm0,xmm0
   5eda5:	f2 0f 70 c0 00       	pshuflw xmm0,xmm0,0x0
   5edaa:	66 0f 70 c8 00       	pshufd xmm1,xmm0,0x0
   5edaf:	4c 8d 7b 88          	lea    r15,[rbx-0x78]
   5edb3:	48 8b 6c 24 20       	mov    rbp,QWORD PTR [rsp+0x20]
   5edb8:	4c 8b 6c 24 28       	mov    r13,QWORD PTR [rsp+0x28]
   5edbd:	45 31 c0             	xor    r8d,r8d
   5edc0:	48 21 f0             	and    rax,rsi
   5edc3:	f3 0f 6f 14 03       	movdqu xmm2,XMMWORD PTR [rbx+rax*1]
   5edc8:	66 0f 6f c2          	movdqa xmm0,xmm2
   5edcc:	66 0f 74 c1          	pcmpeqb xmm0,xmm1
   5edd0:	66 0f d7 c8          	pmovmskb ecx,xmm0
   5edd4:	85 c9                	test   ecx,ecx
   5edd6:	0f 84 a4 00 00 00    	je     5ee80 <strategy_tm6::signal_pairs_tree::SignalPairsTree::update+0x630>
   5eddc:	48 89 84 24 00 01 00 	mov    QWORD PTR [rsp+0x100],rax
   5ede3:	00 
   5ede4:	66 0f 7f 8c 24 f0 00 	movdqa XMMWORD PTR [rsp+0xf0],xmm1
   5edeb:	00 00 
   5eded:	48 89 b4 24 e0 00 00 	mov    QWORD PTR [rsp+0xe0],rsi
   5edf4:	00 
   5edf5:	4c 89 84 24 d0 00 00 	mov    QWORD PTR [rsp+0xd0],r8
   5edfc:	00 
   5edfd:	66 0f 7f 94 24 80 01 	movdqa XMMWORD PTR [rsp+0x180],xmm2
   5ee04:	00 00 
   5ee06:	48 89 4c 24 30       	mov    QWORD PTR [rsp+0x30],rcx
   5ee0b:	f3 0f bc c9          	tzcnt  ecx,ecx
   5ee0f:	48 01 c1             	add    rcx,rax
   5ee12:	48 21 f1             	and    rcx,rsi
   5ee15:	48 f7 d9             	neg    rcx
   5ee18:	4c 6b e1 78          	imul   r12,rcx,0x78
   5ee1c:	4f 3b 6c 27 10       	cmp    r13,QWORD PTR [r15+r12*1+0x10]
   5ee21:	75 18                	jne    5ee3b <strategy_tm6::signal_pairs_tree::SignalPairsTree::update+0x5eb>
   5ee23:	4b 8d 04 27          	lea    rax,[r15+r12*1]
   5ee27:	48 8b 70 08          	mov    rsi,QWORD PTR [rax+0x8]
   5ee2b:	48 89 ef             	mov    rdi,rbp
   5ee2e:	4c 89 ea             	mov    rdx,r13
   5ee31:	ff 15 41 a5 07 00    	call   QWORD PTR [rip+0x7a541]        # d9378 <bcmp@GLIBC_2.2.5>
   5ee37:	85 c0                	test   eax,eax
   5ee39:	74 75                	je     5eeb0 <strategy_tm6::signal_pairs_tree::SignalPairsTree::update+0x660>
   5ee3b:	48 8b 4c 24 30       	mov    rcx,QWORD PTR [rsp+0x30]
   5ee40:	8d 41 ff             	lea    eax,[rcx-0x1]
   5ee43:	66 21 c8             	and    ax,cx
   5ee46:	89 c1                	mov    ecx,eax
   5ee48:	48 8b 84 24 00 01 00 	mov    rax,QWORD PTR [rsp+0x100]
   5ee4f:	00 
   5ee50:	66 0f 6f 8c 24 f0 00 	movdqa xmm1,XMMWORD PTR [rsp+0xf0]
   5ee57:	00 00 
   5ee59:	48 8b b4 24 e0 00 00 	mov    rsi,QWORD PTR [rsp+0xe0]
   5ee60:	00 
   5ee61:	4c 8b 84 24 d0 00 00 	mov    r8,QWORD PTR [rsp+0xd0]
   5ee68:	00 
   5ee69:	66 0f 6f 94 24 80 01 	movdqa xmm2,XMMWORD PTR [rsp+0x180]
   5ee70:	00 00 
   5ee72:	75 92                	jne    5ee06 <strategy_tm6::signal_pairs_tree::SignalPairsTree::update+0x5b6>
   5ee74:	66 66 66 2e 0f 1f 84 	data16 data16 cs nop WORD PTR [rax+rax*1+0x0]
   5ee7b:	00 00 00 00 00 
   5ee80:	66 0f 74 15 c8 80 fb 	pcmpeqb xmm2,XMMWORD PTR [rip+0xfffffffffffb80c8]        # 16f50 <anon.1716677ce335e42ffcebf7b090067291.0.llvm.9466522774482311751>
   5ee87:	ff 
   5ee88:	66 0f d7 ca          	pmovmskb ecx,xmm2
   5ee8c:	85 c9                	test   ecx,ecx
   5ee8e:	0f 85 1c 06 00 00    	jne    5f4b0 <strategy_tm6::signal_pairs_tree::SignalPairsTree::update+0xc60>
   5ee94:	4c 01 c0             	add    rax,r8
   5ee97:	48 83 c0 10          	add    rax,0x10
   5ee9b:	49 83 c0 10          	add    r8,0x10
   5ee9f:	e9 1c ff ff ff       	jmp    5edc0 <strategy_tm6::signal_pairs_tree::SignalPairsTree::update+0x570>
   5eea4:	66 66 66 2e 0f 1f 84 	data16 data16 cs nop WORD PTR [rax+rax*1+0x0]
   5eeab:	00 00 00 00 00 
   5eeb0:	42 83 7c 23 a0 02    	cmp    DWORD PTR [rbx+r12*1-0x60],0x2
   5eeb6:	4c 8b 24 24          	mov    r12,QWORD PTR [rsp]
   5eeba:	4c 8b ac 24 c0 00 00 	mov    r13,QWORD PTR [rsp+0xc0]
   5eec1:	00 
   5eec2:	4c 8b bc 24 c8 00 00 	mov    r15,QWORD PTR [rsp+0xc8]
   5eec9:	00 
   5eeca:	0f 85 50 03 00 00    	jne    5f220 <strategy_tm6::signal_pairs_tree::SignalPairsTree::update+0x9d0>
   5eed0:	f2 0f 10 4c 24 08    	movsd  xmm1,QWORD PTR [rsp+0x8]
   5eed6:	48 8b 44 24 40       	mov    rax,QWORD PTR [rsp+0x40]
   5eedb:	66 0f 2e 48 58       	ucomisd xmm1,QWORD PTR [rax+0x58]
   5eee0:	0f 83 3a 02 00 00    	jae    5f120 <strategy_tm6::signal_pairs_tree::SignalPairsTree::update+0x8d0>
   5eee6:	f2 0f 10 40 68       	movsd  xmm0,QWORD PTR [rax+0x68]
   5eeeb:	66 0f 2e c1          	ucomisd xmm0,xmm1
   5eeef:	0f 82 2b 03 00 00    	jb     5f220 <strategy_tm6::signal_pairs_tree::SignalPairsTree::update+0x9d0>
   5eef5:	48 8d 7c 24 48       	lea    rdi,[rsp+0x48]
   5eefa:	48 8d 74 24 18       	lea    rsi,[rsp+0x18]
   5eeff:	48 8d 15 22 54 07 00 	lea    rdx,[rip+0x75422]        # d4328 <anon.d4a1fc886ee21fee57a5c323490ee03a.27.llvm.17305594220767975752+0xc8>
   5ef06:	ff 15 a4 a4 07 00    	call   QWORD PTR [rip+0x7a4a4]        # d93b0 <_DYNAMIC+0x380>
   5ef0c:	48 8d 9c 24 20 01 00 	lea    rbx,[rsp+0x120]
   5ef13:	00 
   5ef14:	48 89 df             	mov    rdi,rbx
   5ef17:	48 8d 74 24 18       	lea    rsi,[rsp+0x18]
   5ef1c:	48 8d 15 1d 54 07 00 	lea    rdx,[rip+0x7541d]        # d4340 <anon.d4a1fc886ee21fee57a5c323490ee03a.27.llvm.17305594220767975752+0xe0>
   5ef23:	ff 15 87 a4 07 00    	call   QWORD PTR [rip+0x7a487]        # d93b0 <_DYNAMIC+0x380>
   5ef29:	48 8b 84 24 30 01 00 	mov    rax,QWORD PTR [rsp+0x130]
   5ef30:	00 
   5ef31:	48 8d 8c 24 a0 00 00 	lea    rcx,[rsp+0xa0]
   5ef38:	00 
   5ef39:	48 89 41 10          	mov    QWORD PTR [rcx+0x10],rax
   5ef3d:	0f 10 84 24 20 01 00 	movups xmm0,XMMWORD PTR [rsp+0x120]
   5ef44:	00 
   5ef45:	0f 11 01             	movups XMMWORD PTR [rcx],xmm0
   5ef48:	48 c7 44 24 60 01 00 	mov    QWORD PTR [rsp+0x60],0x1
   5ef4f:	00 00 
   5ef51:	f2 0f 10 44 24 10    	movsd  xmm0,QWORD PTR [rsp+0x10]
   5ef57:	f2 0f 11 44 24 68    	movsd  QWORD PTR [rsp+0x68],xmm0
   5ef5d:	48 c7 44 24 70 00 00 	mov    QWORD PTR [rsp+0x70],0x0
   5ef64:	00 00 
   5ef66:	48 c7 84 24 80 00 00 	mov    QWORD PTR [rsp+0x80],0x1
   5ef6d:	00 01 00 00 00 
   5ef72:	f3 0f 7e 44 24 08    	movq   xmm0,QWORD PTR [rsp+0x8]
   5ef78:	66 0f d6 84 24 88 00 	movq   QWORD PTR [rsp+0x88],xmm0
   5ef7f:	00 00 
   5ef81:	48 c7 84 24 90 00 00 	mov    QWORD PTR [rsp+0x90],0x0
   5ef88:	00 00 00 00 00 
   5ef8d:	66 c7 84 24 b8 00 00 	mov    WORD PTR [rsp+0xb8],0x1
   5ef94:	00 01 00 
   5ef97:	48 89 df             	mov    rdi,rbx
   5ef9a:	48 8b 74 24 38       	mov    rsi,QWORD PTR [rsp+0x38]
   5ef9f:	48 8d 54 24 48       	lea    rdx,[rsp+0x48]
   5efa4:	48 8d 4c 24 60       	lea    rcx,[rsp+0x60]
   5efa9:	e8 62 15 00 00       	call   60510 <hashbrown::map::HashMap<K,V,S,A>::insert>
   5efae:	4c 8b bc 24 c8 00 00 	mov    r15,QWORD PTR [rsp+0xc8]
   5efb5:	00 
   5efb6:	e9 26 02 00 00       	jmp    5f1e1 <strategy_tm6::signal_pairs_tree::SignalPairsTree::update+0x991>
   5efbb:	0f 1f 44 00 00       	nop    DWORD PTR [rax+rax*1+0x0]
   5efc0:	4c 01 fd             	add    rbp,r15
   5efc3:	80 7d f8 01          	cmp    BYTE PTR [rbp-0x8],0x1
   5efc7:	0f 85 b5 00 00 00    	jne    5f082 <strategy_tm6::signal_pairs_tree::SignalPairsTree::update+0x832>
   5efcd:	f2 0f 10 44 24 08    	movsd  xmm0,QWORD PTR [rsp+0x8]
   5efd3:	66 41 0f 2e 44 24 70 	ucomisd xmm0,QWORD PTR [r12+0x70]
   5efda:	0f 82 91 fd ff ff    	jb     5ed71 <strategy_tm6::signal_pairs_tree::SignalPairsTree::update+0x521>
   5efe0:	48 c7 45 b0 01 00 00 	mov    QWORD PTR [rbp-0x50],0x1
   5efe7:	00 
   5efe8:	f2 0f 10 44 24 10    	movsd  xmm0,QWORD PTR [rsp+0x10]
   5efee:	f2 0f 11 45 b8       	movsd  QWORD PTR [rbp-0x48],xmm0
   5eff3:	48 c7 45 d0 01 00 00 	mov    QWORD PTR [rbp-0x30],0x1
   5effa:	00 
   5effb:	f3 0f 7e 44 24 08    	movq   xmm0,QWORD PTR [rsp+0x8]
   5f001:	66 0f d6 45 d8       	movq   QWORD PTR [rbp-0x28],xmm0
   5f006:	c6 45 f9 01          	mov    BYTE PTR [rbp-0x7],0x1
   5f00a:	48 8d 75 e0          	lea    rsi,[rbp-0x20]
   5f00e:	48 8d bc 24 20 01 00 	lea    rdi,[rsp+0x120]
   5f015:	00 
   5f016:	48 8d 15 ab 52 07 00 	lea    rdx,[rip+0x752ab]        # d42c8 <anon.d4a1fc886ee21fee57a5c323490ee03a.27.llvm.17305594220767975752+0x68>
   5f01d:	ff 15 8d a3 07 00    	call   QWORD PTR [rip+0x7a38d]        # d93b0 <_DYNAMIC+0x380>
   5f023:	48 8b 45 a0          	mov    rax,QWORD PTR [rbp-0x60]
   5f027:	48 83 f8 01          	cmp    rax,0x1
   5f02b:	0f 85 22 02 00 00    	jne    5f253 <strategy_tm6::signal_pairs_tree::SignalPairsTree::update+0xa03>
   5f031:	f2 0f 10 45 a8       	movsd  xmm0,QWORD PTR [rbp-0x58]
   5f036:	48 8b 4d b0          	mov    rcx,QWORD PTR [rbp-0x50]
   5f03a:	48 83 f9 01          	cmp    rcx,0x1
   5f03e:	0f 84 1f 02 00 00    	je     5f263 <strategy_tm6::signal_pairs_tree::SignalPairsTree::update+0xa13>
   5f044:	31 c9                	xor    ecx,ecx
   5f046:	48 8b 55 c0          	mov    rdx,QWORD PTR [rbp-0x40]
   5f04a:	48 83 fa 01          	cmp    rdx,0x1
   5f04e:	0f 84 22 02 00 00    	je     5f276 <strategy_tm6::signal_pairs_tree::SignalPairsTree::update+0xa26>
   5f054:	31 d2                	xor    edx,edx
   5f056:	48 8b 75 d0          	mov    rsi,QWORD PTR [rbp-0x30]
   5f05a:	48 83 fe 01          	cmp    rsi,0x1
   5f05e:	0f 84 25 02 00 00    	je     5f289 <strategy_tm6::signal_pairs_tree::SignalPairsTree::update+0xa39>
   5f064:	31 f6                	xor    esi,esi
   5f066:	e9 23 02 00 00       	jmp    5f28e <strategy_tm6::signal_pairs_tree::SignalPairsTree::update+0xa3e>
   5f06b:	0f 1f 44 00 00       	nop    DWORD PTR [rax+rax*1+0x0]
   5f070:	48 89 c2             	mov    rdx,rax
   5f073:	48 83 f8 08          	cmp    rax,0x8
   5f077:	0f 83 63 f9 ff ff    	jae    5e9e0 <strategy_tm6::signal_pairs_tree::SignalPairsTree::update+0x190>
   5f07d:	e9 9f f9 ff ff       	jmp    5ea21 <strategy_tm6::signal_pairs_tree::SignalPairsTree::update+0x1d1>
   5f082:	f2 41 0f 10 44 24 60 	movsd  xmm0,QWORD PTR [r12+0x60]
   5f089:	66 0f 2e 44 24 08    	ucomisd xmm0,QWORD PTR [rsp+0x8]
   5f08f:	0f 82 dc fc ff ff    	jb     5ed71 <strategy_tm6::signal_pairs_tree::SignalPairsTree::update+0x521>
   5f095:	48 c7 45 b0 01 00 00 	mov    QWORD PTR [rbp-0x50],0x1
   5f09c:	00 
   5f09d:	f2 0f 10 44 24 10    	movsd  xmm0,QWORD PTR [rsp+0x10]
   5f0a3:	f2 0f 11 45 b8       	movsd  QWORD PTR [rbp-0x48],xmm0
   5f0a8:	48 c7 45 d0 01 00 00 	mov    QWORD PTR [rbp-0x30],0x1
   5f0af:	00 
   5f0b0:	f3 0f 7e 44 24 08    	movq   xmm0,QWORD PTR [rsp+0x8]
   5f0b6:	66 0f d6 45 d8       	movq   QWORD PTR [rbp-0x28],xmm0
   5f0bb:	c6 45 f9 01          	mov    BYTE PTR [rbp-0x7],0x1
   5f0bf:	48 8d 75 e0          	lea    rsi,[rbp-0x20]
   5f0c3:	48 8d bc 24 20 01 00 	lea    rdi,[rsp+0x120]
   5f0ca:	00 
   5f0cb:	48 8d 15 f6 51 07 00 	lea    rdx,[rip+0x751f6]        # d42c8 <anon.d4a1fc886ee21fee57a5c323490ee03a.27.llvm.17305594220767975752+0x68>
   5f0d2:	ff 15 d8 a2 07 00    	call   QWORD PTR [rip+0x7a2d8]        # d93b0 <_DYNAMIC+0x380>
   5f0d8:	48 8b 45 a0          	mov    rax,QWORD PTR [rbp-0x60]
   5f0dc:	48 83 f8 01          	cmp    rax,0x1
   5f0e0:	0f 85 6d 02 00 00    	jne    5f353 <strategy_tm6::signal_pairs_tree::SignalPairsTree::update+0xb03>
   5f0e6:	f2 0f 10 45 a8       	movsd  xmm0,QWORD PTR [rbp-0x58]
   5f0eb:	48 8b 4d b0          	mov    rcx,QWORD PTR [rbp-0x50]
   5f0ef:	48 83 f9 01          	cmp    rcx,0x1
   5f0f3:	0f 84 6a 02 00 00    	je     5f363 <strategy_tm6::signal_pairs_tree::SignalPairsTree::update+0xb13>
   5f0f9:	31 c9                	xor    ecx,ecx
   5f0fb:	48 8b 55 c0          	mov    rdx,QWORD PTR [rbp-0x40]
   5f0ff:	48 83 fa 01          	cmp    rdx,0x1
   5f103:	0f 84 6d 02 00 00    	je     5f376 <strategy_tm6::signal_pairs_tree::SignalPairsTree::update+0xb26>
   5f109:	31 d2                	xor    edx,edx
   5f10b:	48 8b 75 d0          	mov    rsi,QWORD PTR [rbp-0x30]
   5f10f:	48 83 fe 01          	cmp    rsi,0x1
   5f113:	0f 84 70 02 00 00    	je     5f389 <strategy_tm6::signal_pairs_tree::SignalPairsTree::update+0xb39>
   5f119:	31 f6                	xor    esi,esi
   5f11b:	e9 6e 02 00 00       	jmp    5f38e <strategy_tm6::signal_pairs_tree::SignalPairsTree::update+0xb3e>
   5f120:	48 8d 7c 24 48       	lea    rdi,[rsp+0x48]
   5f125:	48 8d 74 24 18       	lea    rsi,[rsp+0x18]
   5f12a:	48 8d 15 27 52 07 00 	lea    rdx,[rip+0x75227]        # d4358 <anon.d4a1fc886ee21fee57a5c323490ee03a.27.llvm.17305594220767975752+0xf8>
   5f131:	ff 15 79 a2 07 00    	call   QWORD PTR [rip+0x7a279]        # d93b0 <_DYNAMIC+0x380>
   5f137:	48 8d 9c 24 20 01 00 	lea    rbx,[rsp+0x120]
   5f13e:	00 
   5f13f:	48 89 df             	mov    rdi,rbx
   5f142:	48 8d 74 24 18       	lea    rsi,[rsp+0x18]
   5f147:	48 8d 15 22 52 07 00 	lea    rdx,[rip+0x75222]        # d4370 <anon.d4a1fc886ee21fee57a5c323490ee03a.27.llvm.17305594220767975752+0x110>
   5f14e:	ff 15 5c a2 07 00    	call   QWORD PTR [rip+0x7a25c]        # d93b0 <_DYNAMIC+0x380>
   5f154:	48 8b 84 24 30 01 00 	mov    rax,QWORD PTR [rsp+0x130]
   5f15b:	00 
   5f15c:	48 8d 8c 24 a0 00 00 	lea    rcx,[rsp+0xa0]
   5f163:	00 
   5f164:	48 89 41 10          	mov    QWORD PTR [rcx+0x10],rax
   5f168:	0f 10 84 24 20 01 00 	movups xmm0,XMMWORD PTR [rsp+0x120]
   5f16f:	00 
   5f170:	0f 11 01             	movups XMMWORD PTR [rcx],xmm0
   5f173:	48 c7 44 24 60 01 00 	mov    QWORD PTR [rsp+0x60],0x1
   5f17a:	00 00 
   5f17c:	f2 0f 10 44 24 10    	movsd  xmm0,QWORD PTR [rsp+0x10]
   5f182:	f2 0f 11 44 24 68    	movsd  QWORD PTR [rsp+0x68],xmm0
   5f188:	48 c7 44 24 70 00 00 	mov    QWORD PTR [rsp+0x70],0x0
   5f18f:	00 00 
   5f191:	48 c7 84 24 80 00 00 	mov    QWORD PTR [rsp+0x80],0x1
   5f198:	00 01 00 00 00 
   5f19d:	f3 0f 7e 44 24 08    	movq   xmm0,QWORD PTR [rsp+0x8]
   5f1a3:	66 0f d6 84 24 88 00 	movq   QWORD PTR [rsp+0x88],xmm0
   5f1aa:	00 00 
   5f1ac:	48 c7 84 24 90 00 00 	mov    QWORD PTR [rsp+0x90],0x0
   5f1b3:	00 00 00 00 00 
   5f1b8:	66 c7 84 24 b8 00 00 	mov    WORD PTR [rsp+0xb8],0x0
   5f1bf:	00 00 00 
   5f1c2:	48 89 df             	mov    rdi,rbx
   5f1c5:	48 8b 74 24 38       	mov    rsi,QWORD PTR [rsp+0x38]
   5f1ca:	48 8d 54 24 48       	lea    rdx,[rsp+0x48]
   5f1cf:	48 8d 4c 24 60       	lea    rcx,[rsp+0x60]
   5f1d4:	e8 37 13 00 00       	call   60510 <hashbrown::map::HashMap<K,V,S,A>::insert>
   5f1d9:	4c 8b bc 24 c8 00 00 	mov    r15,QWORD PTR [rsp+0xc8]
   5f1e0:	00 
   5f1e1:	83 bc 24 20 01 00 00 	cmp    DWORD PTR [rsp+0x120],0x1
   5f1e8:	01 
   5f1e9:	4c 8b 24 24          	mov    r12,QWORD PTR [rsp]
   5f1ed:	4c 8b ac 24 c0 00 00 	mov    r13,QWORD PTR [rsp+0xc0]
   5f1f4:	00 
   5f1f5:	77 29                	ja     5f220 <strategy_tm6::signal_pairs_tree::SignalPairsTree::update+0x9d0>
   5f1f7:	48 8b b4 24 60 01 00 	mov    rsi,QWORD PTR [rsp+0x160]
   5f1fe:	00 
   5f1ff:	48 85 f6             	test   rsi,rsi
   5f202:	74 1c                	je     5f220 <strategy_tm6::signal_pairs_tree::SignalPairsTree::update+0x9d0>
   5f204:	48 8b bc 24 68 01 00 	mov    rdi,QWORD PTR [rsp+0x168]
   5f20b:	00 
   5f20c:	ba 01 00 00 00       	mov    edx,0x1
   5f211:	ff 15 21 a0 07 00    	call   QWORD PTR [rip+0x7a021]        # d9238 <_DYNAMIC+0x208>
   5f217:	66 0f 1f 84 00 00 00 	nop    WORD PTR [rax+rax*1+0x0]
   5f21e:	00 00 
   5f220:	48 8b 74 24 18       	mov    rsi,QWORD PTR [rsp+0x18]
   5f225:	48 85 f6             	test   rsi,rsi
   5f228:	74 10                	je     5f23a <strategy_tm6::signal_pairs_tree::SignalPairsTree::update+0x9ea>
   5f22a:	48 8b 7c 24 20       	mov    rdi,QWORD PTR [rsp+0x20]
   5f22f:	ba 01 00 00 00       	mov    edx,0x1
   5f234:	ff 15 fe 9f 07 00    	call   QWORD PTR [rip+0x79ffe]        # d9238 <_DYNAMIC+0x208>
   5f23a:	b8 00 00 00 00       	mov    eax,0x0
   5f23f:	48 83 bc 24 18 01 00 	cmp    QWORD PTR [rsp+0x118],0x0
   5f246:	00 00 
   5f248:	0f 85 5e f6 ff ff    	jne    5e8ac <strategy_tm6::signal_pairs_tree::SignalPairsTree::update+0x5c>
   5f24e:	e9 32 02 00 00       	jmp    5f485 <strategy_tm6::signal_pairs_tree::SignalPairsTree::update+0xc35>
   5f253:	31 c0                	xor    eax,eax
   5f255:	48 8b 4d b0          	mov    rcx,QWORD PTR [rbp-0x50]
   5f259:	48 83 f9 01          	cmp    rcx,0x1
   5f25d:	0f 85 e1 fd ff ff    	jne    5f044 <strategy_tm6::signal_pairs_tree::SignalPairsTree::update+0x7f4>
   5f263:	f3 0f 7e 4d b8       	movq   xmm1,QWORD PTR [rbp-0x48]
   5f268:	48 8b 55 c0          	mov    rdx,QWORD PTR [rbp-0x40]
   5f26c:	48 83 fa 01          	cmp    rdx,0x1
   5f270:	0f 85 de fd ff ff    	jne    5f054 <strategy_tm6::signal_pairs_tree::SignalPairsTree::update+0x804>
   5f276:	f3 0f 7e 55 c8       	movq   xmm2,QWORD PTR [rbp-0x38]
   5f27b:	48 8b 75 d0          	mov    rsi,QWORD PTR [rbp-0x30]
   5f27f:	48 83 fe 01          	cmp    rsi,0x1
   5f283:	0f 85 db fd ff ff    	jne    5f064 <strategy_tm6::signal_pairs_tree::SignalPairsTree::update+0x814>
   5f289:	f2 0f 10 5d d8       	movsd  xmm3,QWORD PTR [rbp-0x28]
   5f28e:	0f b6 7d f8          	movzx  edi,BYTE PTR [rbp-0x8]
   5f292:	44 0f b6 45 f9       	movzx  r8d,BYTE PTR [rbp-0x7]
   5f297:	4c 8b 8c 24 30 01 00 	mov    r9,QWORD PTR [rsp+0x130]
   5f29e:	00 
   5f29f:	4c 8d 94 24 a0 00 00 	lea    r10,[rsp+0xa0]
   5f2a6:	00 
   5f2a7:	4d 89 4a 10          	mov    QWORD PTR [r10+0x10],r9
   5f2ab:	0f 10 a4 24 20 01 00 	movups xmm4,XMMWORD PTR [rsp+0x120]
   5f2b2:	00 
   5f2b3:	41 0f 11 22          	movups XMMWORD PTR [r10],xmm4
   5f2b7:	40 88 bc 24 b8 00 00 	mov    BYTE PTR [rsp+0xb8],dil
   5f2be:	00 
   5f2bf:	48 89 44 24 60       	mov    QWORD PTR [rsp+0x60],rax
   5f2c4:	f2 0f 11 44 24 68    	movsd  QWORD PTR [rsp+0x68],xmm0
   5f2ca:	48 89 4c 24 70       	mov    QWORD PTR [rsp+0x70],rcx
   5f2cf:	66 0f d6 4c 24 78    	movq   QWORD PTR [rsp+0x78],xmm1
   5f2d5:	48 89 94 24 80 00 00 	mov    QWORD PTR [rsp+0x80],rdx
   5f2dc:	00 
   5f2dd:	66 0f d6 94 24 88 00 	movq   QWORD PTR [rsp+0x88],xmm2
   5f2e4:	00 00 
   5f2e6:	48 89 b4 24 90 00 00 	mov    QWORD PTR [rsp+0x90],rsi
   5f2ed:	00 
   5f2ee:	f2 0f 11 9c 24 98 00 	movsd  QWORD PTR [rsp+0x98],xmm3
   5f2f5:	00 00 
   5f2f7:	44 88 84 24 b9 00 00 	mov    BYTE PTR [rsp+0xb9],r8b
   5f2fe:	00 
   5f2ff:	4c 89 e7             	mov    rdi,r12
   5f302:	f3 0f 7e 44 24 10    	movq   xmm0,QWORD PTR [rsp+0x10]
   5f308:	48 8d 74 24 60       	lea    rsi,[rsp+0x60]
   5f30d:	e8 8e eb ff ff       	call   5dea0 <strategy_tm6::signal_pairs_tree::RollingmsQueue<T>::update>
   5f312:	48 8d 7c 24 48       	lea    rdi,[rsp+0x48]
   5f317:	48 8d 74 24 18       	lea    rsi,[rsp+0x18]
   5f31c:	48 8d 15 d5 4f 07 00 	lea    rdx,[rip+0x74fd5]        # d42f8 <anon.d4a1fc886ee21fee57a5c323490ee03a.27.llvm.17305594220767975752+0x98>
   5f323:	ff 15 87 a0 07 00    	call   QWORD PTR [rip+0x7a087]        # d93b0 <_DYNAMIC+0x380>
   5f329:	48 c7 44 24 60 02 00 	mov    QWORD PTR [rsp+0x60],0x2
   5f330:	00 00 
   5f332:	48 8d bc 24 20 01 00 	lea    rdi,[rsp+0x120]
   5f339:	00 
   5f33a:	48 8b 74 24 38       	mov    rsi,QWORD PTR [rsp+0x38]
   5f33f:	48 8d 54 24 48       	lea    rdx,[rsp+0x48]
   5f344:	48 8d 4c 24 60       	lea    rcx,[rsp+0x60]
   5f349:	e8 c2 11 00 00       	call   60510 <hashbrown::map::HashMap<K,V,S,A>::insert>
   5f34e:	e9 fb 00 00 00       	jmp    5f44e <strategy_tm6::signal_pairs_tree::SignalPairsTree::update+0xbfe>
   5f353:	31 c0                	xor    eax,eax
   5f355:	48 8b 4d b0          	mov    rcx,QWORD PTR [rbp-0x50]
   5f359:	48 83 f9 01          	cmp    rcx,0x1
   5f35d:	0f 85 96 fd ff ff    	jne    5f0f9 <strategy_tm6::signal_pairs_tree::SignalPairsTree::update+0x8a9>
   5f363:	f3 0f 7e 4d b8       	movq   xmm1,QWORD PTR [rbp-0x48]
   5f368:	48 8b 55 c0          	mov    rdx,QWORD PTR [rbp-0x40]
   5f36c:	48 83 fa 01          	cmp    rdx,0x1
   5f370:	0f 85 93 fd ff ff    	jne    5f109 <strategy_tm6::signal_pairs_tree::SignalPairsTree::update+0x8b9>
   5f376:	f3 0f 7e 55 c8       	movq   xmm2,QWORD PTR [rbp-0x38]
   5f37b:	48 8b 75 d0          	mov    rsi,QWORD PTR [rbp-0x30]
   5f37f:	48 83 fe 01          	cmp    rsi,0x1
   5f383:	0f 85 90 fd ff ff    	jne    5f119 <strategy_tm6::signal_pairs_tree::SignalPairsTree::update+0x8c9>
   5f389:	f2 0f 10 5d d8       	movsd  xmm3,QWORD PTR [rbp-0x28]
   5f38e:	0f b6 7d f8          	movzx  edi,BYTE PTR [rbp-0x8]
   5f392:	44 0f b6 45 f9       	movzx  r8d,BYTE PTR [rbp-0x7]
   5f397:	4c 8b 8c 24 30 01 00 	mov    r9,QWORD PTR [rsp+0x130]
   5f39e:	00 
   5f39f:	4c 8d 94 24 a0 00 00 	lea    r10,[rsp+0xa0]
   5f3a6:	00 
   5f3a7:	4d 89 4a 10          	mov    QWORD PTR [r10+0x10],r9
   5f3ab:	0f 10 a4 24 20 01 00 	movups xmm4,XMMWORD PTR [rsp+0x120]
   5f3b2:	00 
   5f3b3:	41 0f 11 22          	movups XMMWORD PTR [r10],xmm4
   5f3b7:	40 88 bc 24 b8 00 00 	mov    BYTE PTR [rsp+0xb8],dil
   5f3be:	00 
   5f3bf:	48 89 44 24 60       	mov    QWORD PTR [rsp+0x60],rax
   5f3c4:	f2 0f 11 44 24 68    	movsd  QWORD PTR [rsp+0x68],xmm0
   5f3ca:	48 89 4c 24 70       	mov    QWORD PTR [rsp+0x70],rcx
   5f3cf:	66 0f d6 4c 24 78    	movq   QWORD PTR [rsp+0x78],xmm1
   5f3d5:	48 89 94 24 80 00 00 	mov    QWORD PTR [rsp+0x80],rdx
   5f3dc:	00 
   5f3dd:	66 0f d6 94 24 88 00 	movq   QWORD PTR [rsp+0x88],xmm2
   5f3e4:	00 00 
   5f3e6:	48 89 b4 24 90 00 00 	mov    QWORD PTR [rsp+0x90],rsi
   5f3ed:	00 
   5f3ee:	f2 0f 11 9c 24 98 00 	movsd  QWORD PTR [rsp+0x98],xmm3
   5f3f5:	00 00 
   5f3f7:	44 88 84 24 b9 00 00 	mov    BYTE PTR [rsp+0xb9],r8b
   5f3fe:	00 
   5f3ff:	4c 89 e7             	mov    rdi,r12
   5f402:	f3 0f 7e 44 24 10    	movq   xmm0,QWORD PTR [rsp+0x10]
   5f408:	48 8d 74 24 60       	lea    rsi,[rsp+0x60]
   5f40d:	e8 8e ea ff ff       	call   5dea0 <strategy_tm6::signal_pairs_tree::RollingmsQueue<T>::update>
   5f412:	48 8d 7c 24 48       	lea    rdi,[rsp+0x48]
   5f417:	48 8d 74 24 18       	lea    rsi,[rsp+0x18]
   5f41c:	48 8d 15 bd 4e 07 00 	lea    rdx,[rip+0x74ebd]        # d42e0 <anon.d4a1fc886ee21fee57a5c323490ee03a.27.llvm.17305594220767975752+0x80>
   5f423:	ff 15 87 9f 07 00    	call   QWORD PTR [rip+0x79f87]        # d93b0 <_DYNAMIC+0x380>
   5f429:	48 c7 44 24 60 02 00 	mov    QWORD PTR [rsp+0x60],0x2
   5f430:	00 00 
   5f432:	48 8d bc 24 20 01 00 	lea    rdi,[rsp+0x120]
   5f439:	00 
   5f43a:	48 8b 74 24 38       	mov    rsi,QWORD PTR [rsp+0x38]
   5f43f:	48 8d 54 24 48       	lea    rdx,[rsp+0x48]
   5f444:	48 8d 4c 24 60       	lea    rcx,[rsp+0x60]
   5f449:	e8 c2 10 00 00       	call   60510 <hashbrown::map::HashMap<K,V,S,A>::insert>
   5f44e:	83 bc 24 20 01 00 00 	cmp    DWORD PTR [rsp+0x120],0x1
   5f455:	01 
   5f456:	0f 87 15 f9 ff ff    	ja     5ed71 <strategy_tm6::signal_pairs_tree::SignalPairsTree::update+0x521>
   5f45c:	48 8b b4 24 60 01 00 	mov    rsi,QWORD PTR [rsp+0x160]
   5f463:	00 
   5f464:	48 85 f6             	test   rsi,rsi
   5f467:	0f 84 04 f9 ff ff    	je     5ed71 <strategy_tm6::signal_pairs_tree::SignalPairsTree::update+0x521>
   5f46d:	48 8b bc 24 68 01 00 	mov    rdi,QWORD PTR [rsp+0x168]
   5f474:	00 
   5f475:	ba 01 00 00 00       	mov    edx,0x1
   5f47a:	ff 15 b8 9d 07 00    	call   QWORD PTR [rip+0x79db8]        # d9238 <_DYNAMIC+0x208>
   5f480:	e9 ec f8 ff ff       	jmp    5ed71 <strategy_tm6::signal_pairs_tree::SignalPairsTree::update+0x521>
   5f485:	49 8b 34 24          	mov    rsi,QWORD PTR [r12]
   5f489:	48 85 f6             	test   rsi,rsi
   5f48c:	74 10                	je     5f49e <strategy_tm6::signal_pairs_tree::SignalPairsTree::update+0xc4e>
   5f48e:	49 8b 7c 24 08       	mov    rdi,QWORD PTR [r12+0x8]
   5f493:	ba 01 00 00 00       	mov    edx,0x1
   5f498:	ff 15 9a 9d 07 00    	call   QWORD PTR [rip+0x79d9a]        # d9238 <_DYNAMIC+0x208>
   5f49e:	48 81 c4 a8 01 00 00 	add    rsp,0x1a8
   5f4a5:	5b                   	pop    rbx
   5f4a6:	41 5c                	pop    r12
   5f4a8:	41 5d                	pop    r13
   5f4aa:	41 5e                	pop    r14
   5f4ac:	41 5f                	pop    r15
   5f4ae:	5d                   	pop    rbp
   5f4af:	c3                   	ret    
   5f4b0:	48 8d 3d 59 4e 07 00 	lea    rdi,[rip+0x74e59]        # d4310 <anon.d4a1fc886ee21fee57a5c323490ee03a.27.llvm.17305594220767975752+0xb0>
   5f4b7:	ff 15 fb 9d 07 00    	call   QWORD PTR [rip+0x79dfb]        # d92b8 <_DYNAMIC+0x288>
   5f4bd:	eb 1c                	jmp    5f4db <strategy_tm6::signal_pairs_tree::SignalPairsTree::update+0xc8b>
   5f4bf:	48 8d 3d 62 4d 07 00 	lea    rdi,[rip+0x74d62]        # d4228 <anon.d4a1fc886ee21fee57a5c323490ee03a.9.llvm.17305594220767975752+0x80>
   5f4c6:	ff 15 ec 9d 07 00    	call   QWORD PTR [rip+0x79dec]        # d92b8 <_DYNAMIC+0x288>
   5f4cc:	eb 0d                	jmp    5f4db <strategy_tm6::signal_pairs_tree::SignalPairsTree::update+0xc8b>
   5f4ce:	48 8d 3d 3b 4d 07 00 	lea    rdi,[rip+0x74d3b]        # d4210 <anon.d4a1fc886ee21fee57a5c323490ee03a.9.llvm.17305594220767975752+0x68>
   5f4d5:	ff 15 dd 9d 07 00    	call   QWORD PTR [rip+0x79ddd]        # d92b8 <_DYNAMIC+0x288>
   5f4db:	0f 0b                	ud2    
   5f4dd:	eb 49                	jmp    5f528 <strategy_tm6::signal_pairs_tree::SignalPairsTree::update+0xcd8>
   5f4df:	eb 02                	jmp    5f4e3 <strategy_tm6::signal_pairs_tree::SignalPairsTree::update+0xc93>
   5f4e1:	eb 45                	jmp    5f528 <strategy_tm6::signal_pairs_tree::SignalPairsTree::update+0xcd8>
   5f4e3:	49 89 c6             	mov    r14,rax
   5f4e6:	48 8b 74 24 48       	mov    rsi,QWORD PTR [rsp+0x48]
   5f4eb:	48 85 f6             	test   rsi,rsi
   5f4ee:	74 3b                	je     5f52b <strategy_tm6::signal_pairs_tree::SignalPairsTree::update+0xcdb>
   5f4f0:	48 8b 7c 24 50       	mov    rdi,QWORD PTR [rsp+0x50]
   5f4f5:	ba 01 00 00 00       	mov    edx,0x1
   5f4fa:	ff 15 38 9d 07 00    	call   QWORD PTR [rip+0x79d38]        # d9238 <_DYNAMIC+0x208>
   5f500:	eb 29                	jmp    5f52b <strategy_tm6::signal_pairs_tree::SignalPairsTree::update+0xcdb>
   5f502:	49 89 c6             	mov    r14,rax
   5f505:	4c 8b 24 24          	mov    r12,QWORD PTR [rsp]
   5f509:	eb 3e                	jmp    5f549 <strategy_tm6::signal_pairs_tree::SignalPairsTree::update+0xcf9>
   5f50b:	eb 1b                	jmp    5f528 <strategy_tm6::signal_pairs_tree::SignalPairsTree::update+0xcd8>
   5f50d:	49 89 c6             	mov    r14,rax
   5f510:	48 8d 7c 24 60       	lea    rdi,[rsp+0x60]
   5f515:	ff 15 a5 9d 07 00    	call   QWORD PTR [rip+0x79da5]        # d92c0 <_DYNAMIC+0x290>
   5f51b:	eb 2c                	jmp    5f549 <strategy_tm6::signal_pairs_tree::SignalPairsTree::update+0xcf9>
   5f51d:	ff 15 6d 9d 07 00    	call   QWORD PTR [rip+0x79d6d]        # d9290 <_DYNAMIC+0x260>
   5f523:	49 89 c6             	mov    r14,rax
   5f526:	eb 21                	jmp    5f549 <strategy_tm6::signal_pairs_tree::SignalPairsTree::update+0xcf9>
   5f528:	49 89 c6             	mov    r14,rax
   5f52b:	4c 8b 24 24          	mov    r12,QWORD PTR [rsp]
   5f52f:	48 8b 74 24 18       	mov    rsi,QWORD PTR [rsp+0x18]
   5f534:	48 85 f6             	test   rsi,rsi
   5f537:	74 10                	je     5f549 <strategy_tm6::signal_pairs_tree::SignalPairsTree::update+0xcf9>
   5f539:	48 8b 7c 24 20       	mov    rdi,QWORD PTR [rsp+0x20]
   5f53e:	ba 01 00 00 00       	mov    edx,0x1
   5f543:	ff 15 ef 9c 07 00    	call   QWORD PTR [rip+0x79cef]        # d9238 <_DYNAMIC+0x208>
   5f549:	49 8b 34 24          	mov    rsi,QWORD PTR [r12]
   5f54d:	48 85 f6             	test   rsi,rsi
   5f550:	74 10                	je     5f562 <strategy_tm6::signal_pairs_tree::SignalPairsTree::update+0xd12>
   5f552:	49 8b 7c 24 08       	mov    rdi,QWORD PTR [r12+0x8]
   5f557:	ba 01 00 00 00       	mov    edx,0x1
   5f55c:	ff 15 d6 9c 07 00    	call   QWORD PTR [rip+0x79cd6]        # d9238 <_DYNAMIC+0x208>
   5f562:	4c 89 f7             	mov    rdi,r14
   5f565:	e8 06 2c 07 00       	call   d2170 <_Unwind_Resume@plt>
   5f56a:	cc                   	int3   
   5f56b:	cc                   	int3   
   5f56c:	cc                   	int3   
   5f56d:	cc                   	int3   
   5f56e:	cc                   	int3   
   5f56f:	cc                   	int3   