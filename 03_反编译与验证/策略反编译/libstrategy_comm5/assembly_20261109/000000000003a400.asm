000000000003a400 <core::ptr::drop_in_place<strategy_comm5::Comm5Params>>:
   3a400:	41 56                	push   %r14
   3a402:	53                   	push   %rbx
   3a403:	50                   	push   %rax
   3a404:	48 89 fb             	mov    %rdi,%rbx
   3a407:	48 8b b7 10 03 00 00 	mov    0x310(%rdi),%rsi
   3a40e:	48 85 f6             	test   %rsi,%rsi
   3a411:	74 12                	je     3a425 <core::ptr::drop_in_place<strategy_comm5::Comm5Params>+0x25>
   3a413:	48 8b bb 18 03 00 00 	mov    0x318(%rbx),%rdi
   3a41a:	ba 01 00 00 00       	mov    $0x1,%edx
   3a41f:	ff 15 53 98 0c 00    	call   *0xc9853(%rip)        # 103c78 <_DYNAMIC+0x218>
   3a425:	48 8b b3 28 03 00 00 	mov    0x328(%rbx),%rsi
   3a42c:	48 85 f6             	test   %rsi,%rsi
   3a42f:	74 12                	je     3a443 <core::ptr::drop_in_place<strategy_comm5::Comm5Params>+0x43>
   3a431:	48 8b bb 30 03 00 00 	mov    0x330(%rbx),%rdi
   3a438:	ba 01 00 00 00       	mov    $0x1,%edx
   3a43d:	ff 15 35 98 0c 00    	call   *0xc9835(%rip)        # 103c78 <_DYNAMIC+0x218>
   3a443:	48 8b b3 40 03 00 00 	mov    0x340(%rbx),%rsi
   3a44a:	48 85 f6             	test   %rsi,%rsi
   3a44d:	74 16                	je     3a465 <core::ptr::drop_in_place<strategy_comm5::Comm5Params>+0x65>
   3a44f:	48 8b bb 48 03 00 00 	mov    0x348(%rbx),%rdi
   3a456:	48 c1 e6 03          	shl    $0x3,%rsi
   3a45a:	ba 08 00 00 00       	mov    $0x8,%edx
   3a45f:	ff 15 13 98 0c 00    	call   *0xc9813(%rip)        # 103c78 <_DYNAMIC+0x218>
   3a465:	48 8b b3 58 03 00 00 	mov    0x358(%rbx),%rsi
   3a46c:	48 85 f6             	test   %rsi,%rsi
   3a46f:	74 12                	je     3a483 <core::ptr::drop_in_place<strategy_comm5::Comm5Params>+0x83>
   3a471:	48 8b bb 60 03 00 00 	mov    0x360(%rbx),%rdi
   3a478:	ba 01 00 00 00       	mov    $0x1,%edx
   3a47d:	ff 15 f5 97 0c 00    	call   *0xc97f5(%rip)        # 103c78 <_DYNAMIC+0x218>
   3a483:	48 8b b3 70 03 00 00 	mov    0x370(%rbx),%rsi
   3a48a:	48 85 f6             	test   %rsi,%rsi
   3a48d:	74 12                	je     3a4a1 <core::ptr::drop_in_place<strategy_comm5::Comm5Params>+0xa1>
   3a48f:	48 8b bb 78 03 00 00 	mov    0x378(%rbx),%rdi
   3a496:	ba 01 00 00 00       	mov    $0x1,%edx
   3a49b:	ff 15 d7 97 0c 00    	call   *0xc97d7(%rip)        # 103c78 <_DYNAMIC+0x218>
   3a4a1:	48 8b b3 88 03 00 00 	mov    0x388(%rbx),%rsi
   3a4a8:	48 85 f6             	test   %rsi,%rsi
   3a4ab:	74 12                	je     3a4bf <core::ptr::drop_in_place<strategy_comm5::Comm5Params>+0xbf>
   3a4ad:	48 8b bb 90 03 00 00 	mov    0x390(%rbx),%rdi
   3a4b4:	ba 01 00 00 00       	mov    $0x1,%edx
   3a4b9:	ff 15 b9 97 0c 00    	call   *0xc97b9(%rip)        # 103c78 <_DYNAMIC+0x218>
   3a4bf:	49 be 00 00 00 00 00 	movabs $0x8000000000000000,%r14
   3a4c6:	00 00 80 
   3a4c9:	48 8b b3 10 01 00 00 	mov    0x110(%rbx),%rsi
   3a4d0:	48 89 f0             	mov    %rsi,%rax
   3a4d3:	48 f7 d8             	neg    %rax
   3a4d6:	70 14                	jo     3a4ec <core::ptr::drop_in_place<strategy_comm5::Comm5Params>+0xec>
   3a4d8:	73 12                	jae    3a4ec <core::ptr::drop_in_place<strategy_comm5::Comm5Params>+0xec>
   3a4da:	48 8b bb 18 01 00 00 	mov    0x118(%rbx),%rdi
   3a4e1:	ba 01 00 00 00       	mov    $0x1,%edx
   3a4e6:	ff 15 8c 97 0c 00    	call   *0xc978c(%rip)        # 103c78 <_DYNAMIC+0x218>
   3a4ec:	48 8b b3 00 02 00 00 	mov    0x200(%rbx),%rsi
   3a4f3:	4c 39 f6             	cmp    %r14,%rsi
   3a4f6:	74 17                	je     3a50f <core::ptr::drop_in_place<strategy_comm5::Comm5Params>+0x10f>
   3a4f8:	48 85 f6             	test   %rsi,%rsi
   3a4fb:	74 12                	je     3a50f <core::ptr::drop_in_place<strategy_comm5::Comm5Params>+0x10f>
   3a4fd:	48 8b bb 08 02 00 00 	mov    0x208(%rbx),%rdi
   3a504:	ba 01 00 00 00       	mov    $0x1,%edx
   3a509:	ff 15 69 97 0c 00    	call   *0xc9769(%rip)        # 103c78 <_DYNAMIC+0x218>
   3a50f:	48 8b b3 f0 02 00 00 	mov    0x2f0(%rbx),%rsi
   3a516:	4c 39 f6             	cmp    %r14,%rsi
   3a519:	74 17                	je     3a532 <core::ptr::drop_in_place<strategy_comm5::Comm5Params>+0x132>
   3a51b:	48 85 f6             	test   %rsi,%rsi
   3a51e:	74 12                	je     3a532 <core::ptr::drop_in_place<strategy_comm5::Comm5Params>+0x132>
   3a520:	48 8b bb f8 02 00 00 	mov    0x2f8(%rbx),%rdi
   3a527:	ba 01 00 00 00       	mov    $0x1,%edx
   3a52c:	ff 15 46 97 0c 00    	call   *0xc9746(%rip)        # 103c78 <_DYNAMIC+0x218>
   3a532:	48 8b b3 a0 03 00 00 	mov    0x3a0(%rbx),%rsi
   3a539:	48 85 f6             	test   %rsi,%rsi
   3a53c:	74 12                	je     3a550 <core::ptr::drop_in_place<strategy_comm5::Comm5Params>+0x150>
   3a53e:	48 8b bb a8 03 00 00 	mov    0x3a8(%rbx),%rdi
   3a545:	ba 01 00 00 00       	mov    $0x1,%edx
   3a54a:	ff 15 28 97 0c 00    	call   *0xc9728(%rip)        # 103c78 <_DYNAMIC+0x218>
   3a550:	48 8b b3 b8 03 00 00 	mov    0x3b8(%rbx),%rsi
   3a557:	48 85 f6             	test   %rsi,%rsi
   3a55a:	74 19                	je     3a575 <core::ptr::drop_in_place<strategy_comm5::Comm5Params>+0x175>
   3a55c:	48 8b bb c0 03 00 00 	mov    0x3c0(%rbx),%rdi
   3a563:	ba 01 00 00 00       	mov    $0x1,%edx
   3a568:	48 83 c4 08          	add    $0x8,%rsp
   3a56c:	5b                   	pop    %rbx
   3a56d:	41 5e                	pop    %r14
   3a56f:	ff 25 03 97 0c 00    	jmp    *0xc9703(%rip)        # 103c78 <_DYNAMIC+0x218>
   3a575:	48 83 c4 08          	add    $0x8,%rsp
   3a579:	5b                   	pop    %rbx
   3a57a:	41 5e                	pop    %r14
   3a57c:	c3                   	ret    
   3a57d:	cc                   	int3   
   3a57e:	cc                   	int3   
   3a57f:	cc                   	int3   
