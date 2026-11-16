000000000007a980 <core::ptr::drop_in_place<core::option::Option<strategy_comm5::Comm5Params>>>:
   7a980:	41 56                	push   %r14
   7a982:	53                   	push   %rbx
   7a983:	50                   	push   %rax
   7a984:	83 3f 02             	cmpl   $0x2,(%rdi)
   7a987:	0f 84 71 01 00 00    	je     7aafe <core::ptr::drop_in_place<core::option::Option<strategy_comm5::Comm5Params>>+0x17e>
   7a98d:	48 89 fb             	mov    %rdi,%rbx
   7a990:	48 8b b7 10 03 00 00 	mov    0x310(%rdi),%rsi
   7a997:	48 85 f6             	test   %rsi,%rsi
   7a99a:	74 12                	je     7a9ae <core::ptr::drop_in_place<core::option::Option<strategy_comm5::Comm5Params>>+0x2e>
   7a99c:	48 8b bb 18 03 00 00 	mov    0x318(%rbx),%rdi
   7a9a3:	ba 01 00 00 00       	mov    $0x1,%edx
   7a9a8:	ff 15 ca 92 08 00    	call   *0x892ca(%rip)        # 103c78 <_DYNAMIC+0x218>
   7a9ae:	48 8b b3 28 03 00 00 	mov    0x328(%rbx),%rsi
   7a9b5:	48 85 f6             	test   %rsi,%rsi
   7a9b8:	74 12                	je     7a9cc <core::ptr::drop_in_place<core::option::Option<strategy_comm5::Comm5Params>>+0x4c>
   7a9ba:	48 8b bb 30 03 00 00 	mov    0x330(%rbx),%rdi
   7a9c1:	ba 01 00 00 00       	mov    $0x1,%edx
   7a9c6:	ff 15 ac 92 08 00    	call   *0x892ac(%rip)        # 103c78 <_DYNAMIC+0x218>
   7a9cc:	48 8b b3 40 03 00 00 	mov    0x340(%rbx),%rsi
   7a9d3:	48 85 f6             	test   %rsi,%rsi
   7a9d6:	74 16                	je     7a9ee <core::ptr::drop_in_place<core::option::Option<strategy_comm5::Comm5Params>>+0x6e>
   7a9d8:	48 8b bb 48 03 00 00 	mov    0x348(%rbx),%rdi
   7a9df:	48 c1 e6 03          	shl    $0x3,%rsi
   7a9e3:	ba 08 00 00 00       	mov    $0x8,%edx
   7a9e8:	ff 15 8a 92 08 00    	call   *0x8928a(%rip)        # 103c78 <_DYNAMIC+0x218>
   7a9ee:	48 8b b3 58 03 00 00 	mov    0x358(%rbx),%rsi
   7a9f5:	48 85 f6             	test   %rsi,%rsi
   7a9f8:	74 12                	je     7aa0c <core::ptr::drop_in_place<core::option::Option<strategy_comm5::Comm5Params>>+0x8c>
   7a9fa:	48 8b bb 60 03 00 00 	mov    0x360(%rbx),%rdi
   7aa01:	ba 01 00 00 00       	mov    $0x1,%edx
   7aa06:	ff 15 6c 92 08 00    	call   *0x8926c(%rip)        # 103c78 <_DYNAMIC+0x218>
   7aa0c:	48 8b b3 70 03 00 00 	mov    0x370(%rbx),%rsi
   7aa13:	48 85 f6             	test   %rsi,%rsi
   7aa16:	74 12                	je     7aa2a <core::ptr::drop_in_place<core::option::Option<strategy_comm5::Comm5Params>>+0xaa>
   7aa18:	48 8b bb 78 03 00 00 	mov    0x378(%rbx),%rdi
   7aa1f:	ba 01 00 00 00       	mov    $0x1,%edx
   7aa24:	ff 15 4e 92 08 00    	call   *0x8924e(%rip)        # 103c78 <_DYNAMIC+0x218>
   7aa2a:	48 8b b3 88 03 00 00 	mov    0x388(%rbx),%rsi
   7aa31:	48 85 f6             	test   %rsi,%rsi
   7aa34:	74 12                	je     7aa48 <core::ptr::drop_in_place<core::option::Option<strategy_comm5::Comm5Params>>+0xc8>
   7aa36:	48 8b bb 90 03 00 00 	mov    0x390(%rbx),%rdi
   7aa3d:	ba 01 00 00 00       	mov    $0x1,%edx
   7aa42:	ff 15 30 92 08 00    	call   *0x89230(%rip)        # 103c78 <_DYNAMIC+0x218>
   7aa48:	49 be 00 00 00 00 00 	movabs $0x8000000000000000,%r14
   7aa4f:	00 00 80 
   7aa52:	48 8b b3 10 01 00 00 	mov    0x110(%rbx),%rsi
   7aa59:	48 89 f0             	mov    %rsi,%rax
   7aa5c:	48 f7 d8             	neg    %rax
   7aa5f:	70 14                	jo     7aa75 <core::ptr::drop_in_place<core::option::Option<strategy_comm5::Comm5Params>>+0xf5>
   7aa61:	73 12                	jae    7aa75 <core::ptr::drop_in_place<core::option::Option<strategy_comm5::Comm5Params>>+0xf5>
   7aa63:	48 8b bb 18 01 00 00 	mov    0x118(%rbx),%rdi
   7aa6a:	ba 01 00 00 00       	mov    $0x1,%edx
   7aa6f:	ff 15 03 92 08 00    	call   *0x89203(%rip)        # 103c78 <_DYNAMIC+0x218>
   7aa75:	48 8b b3 00 02 00 00 	mov    0x200(%rbx),%rsi
   7aa7c:	4c 39 f6             	cmp    %r14,%rsi
   7aa7f:	74 17                	je     7aa98 <core::ptr::drop_in_place<core::option::Option<strategy_comm5::Comm5Params>>+0x118>
   7aa81:	48 85 f6             	test   %rsi,%rsi
   7aa84:	74 12                	je     7aa98 <core::ptr::drop_in_place<core::option::Option<strategy_comm5::Comm5Params>>+0x118>
   7aa86:	48 8b bb 08 02 00 00 	mov    0x208(%rbx),%rdi
   7aa8d:	ba 01 00 00 00       	mov    $0x1,%edx
   7aa92:	ff 15 e0 91 08 00    	call   *0x891e0(%rip)        # 103c78 <_DYNAMIC+0x218>
   7aa98:	48 8b b3 f0 02 00 00 	mov    0x2f0(%rbx),%rsi
   7aa9f:	4c 39 f6             	cmp    %r14,%rsi
   7aaa2:	74 17                	je     7aabb <core::ptr::drop_in_place<core::option::Option<strategy_comm5::Comm5Params>>+0x13b>
   7aaa4:	48 85 f6             	test   %rsi,%rsi
   7aaa7:	74 12                	je     7aabb <core::ptr::drop_in_place<core::option::Option<strategy_comm5::Comm5Params>>+0x13b>
   7aaa9:	48 8b bb f8 02 00 00 	mov    0x2f8(%rbx),%rdi
   7aab0:	ba 01 00 00 00       	mov    $0x1,%edx
   7aab5:	ff 15 bd 91 08 00    	call   *0x891bd(%rip)        # 103c78 <_DYNAMIC+0x218>
   7aabb:	48 8b b3 a0 03 00 00 	mov    0x3a0(%rbx),%rsi
   7aac2:	48 85 f6             	test   %rsi,%rsi
   7aac5:	74 12                	je     7aad9 <core::ptr::drop_in_place<core::option::Option<strategy_comm5::Comm5Params>>+0x159>
   7aac7:	48 8b bb a8 03 00 00 	mov    0x3a8(%rbx),%rdi
   7aace:	ba 01 00 00 00       	mov    $0x1,%edx
   7aad3:	ff 15 9f 91 08 00    	call   *0x8919f(%rip)        # 103c78 <_DYNAMIC+0x218>
   7aad9:	48 8b b3 b8 03 00 00 	mov    0x3b8(%rbx),%rsi
   7aae0:	48 85 f6             	test   %rsi,%rsi
   7aae3:	74 19                	je     7aafe <core::ptr::drop_in_place<core::option::Option<strategy_comm5::Comm5Params>>+0x17e>
   7aae5:	48 8b bb c0 03 00 00 	mov    0x3c0(%rbx),%rdi
   7aaec:	ba 01 00 00 00       	mov    $0x1,%edx
   7aaf1:	48 83 c4 08          	add    $0x8,%rsp
   7aaf5:	5b                   	pop    %rbx
   7aaf6:	41 5e                	pop    %r14
   7aaf8:	ff 25 7a 91 08 00    	jmp    *0x8917a(%rip)        # 103c78 <_DYNAMIC+0x218>
   7aafe:	48 83 c4 08          	add    $0x8,%rsp
   7ab02:	5b                   	pop    %rbx
   7ab03:	41 5e                	pop    %r14
   7ab05:	c3                   	ret    
   7ab06:	cc                   	int3   
   7ab07:	cc                   	int3   
   7ab08:	cc                   	int3   
   7ab09:	cc                   	int3   
   7ab0a:	cc                   	int3   
   7ab0b:	cc                   	int3   
   7ab0c:	cc                   	int3   
   7ab0d:	cc                   	int3   
   7ab0e:	cc                   	int3   
   7ab0f:	cc                   	int3   
