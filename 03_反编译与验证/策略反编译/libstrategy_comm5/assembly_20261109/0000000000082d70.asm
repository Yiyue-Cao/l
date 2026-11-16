0000000000082d70 <strategy_comm5::signal_trigger::SignalTrigger::windows_std_trigger>:
   82d70:	41 56                	push   %r14
   82d72:	53                   	push   %rbx
   82d73:	48 83 ec 78          	sub    $0x78,%rsp
   82d77:	f2 0f 11 44 24 08    	movsd  %xmm0,0x8(%rsp)
   82d7d:	48 89 fb             	mov    %rdi,%rbx
   82d80:	48 8b 06             	mov    (%rsi),%rax
   82d83:	48 8b 4e 08          	mov    0x8(%rsi),%rcx
   82d87:	48 8d 4c 08 01       	lea    0x1(%rax,%rcx,1),%rcx
   82d8c:	66 0f 6f 00          	movdqa (%rax),%xmm0
   82d90:	66 0f d7 d0          	pmovmskb %xmm0,%edx
   82d94:	f7 d2                	not    %edx
   82d96:	48 8b 7e 18          	mov    0x18(%rsi),%rdi
   82d9a:	48 c7 04 24 00 00 00 	movq   $0x0,(%rsp)
   82da1:	00 
   82da2:	48 89 44 24 40       	mov    %rax,0x40(%rsp)
   82da7:	48 83 c0 10          	add    $0x10,%rax
   82dab:	48 89 44 24 48       	mov    %rax,0x48(%rsp)
   82db0:	48 89 4c 24 50       	mov    %rcx,0x50(%rsp)
   82db5:	66 89 54 24 58       	mov    %dx,0x58(%rsp)
   82dba:	48 89 7c 24 60       	mov    %rdi,0x60(%rsp)
   82dbf:	48 89 74 24 68       	mov    %rsi,0x68(%rsp)
   82dc4:	48 89 e0             	mov    %rsp,%rax
   82dc7:	48 89 44 24 70       	mov    %rax,0x70(%rsp)
   82dcc:	48 8d 15 fd bd 07 00 	lea    0x7bdfd(%rip),%rdx        # febd0 <anon.f8fdc7844e54bdce0bd72b118f1760df.5.llvm.12406105305166711053>
   82dd3:	48 8d 7c 24 10       	lea    0x10(%rsp),%rdi
   82dd8:	48 8d 74 24 40       	lea    0x40(%rsp),%rsi
   82ddd:	e8 be 5b 00 00       	call   889a0 <<alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter>
   82de2:	4c 8b 34 24          	mov    (%rsp),%r14
   82de6:	4d 85 f6             	test   %r14,%r14
   82de9:	74 1c                	je     82e07 <strategy_comm5::signal_trigger::SignalTrigger::windows_std_trigger+0x97>
   82deb:	48 8b 74 24 10       	mov    0x10(%rsp),%rsi
   82df0:	48 85 f6             	test   %rsi,%rsi
   82df3:	74 24                	je     82e19 <strategy_comm5::signal_trigger::SignalTrigger::windows_std_trigger+0xa9>
   82df5:	48 8b 7c 24 18       	mov    0x18(%rsp),%rdi
   82dfa:	ba 01 00 00 00       	mov    $0x1,%edx
   82dff:	ff 15 73 0e 08 00    	call   *0x80e73(%rip)        # 103c78 <_DYNAMIC+0x218>
   82e05:	eb 12                	jmp    82e19 <strategy_comm5::signal_trigger::SignalTrigger::windows_std_trigger+0xa9>
   82e07:	48 8b 44 24 10       	mov    0x10(%rsp),%rax
   82e0c:	4c 8b 74 24 18       	mov    0x18(%rsp),%r14
   82e11:	48 89 c1             	mov    %rax,%rcx
   82e14:	48 f7 d9             	neg    %rcx
   82e17:	71 13                	jno    82e2c <strategy_comm5::signal_trigger::SignalTrigger::windows_std_trigger+0xbc>
   82e19:	4c 89 73 08          	mov    %r14,0x8(%rbx)
   82e1d:	b0 05                	mov    $0x5,%al
   82e1f:	88 03                	mov    %al,(%rbx)
   82e21:	48 89 d8             	mov    %rbx,%rax
   82e24:	48 83 c4 78          	add    $0x78,%rsp
   82e28:	5b                   	pop    %rbx
   82e29:	41 5e                	pop    %r14
   82e2b:	c3                   	ret    
   82e2c:	48 8b 4c 24 20       	mov    0x20(%rsp),%rcx
   82e31:	48 89 44 24 28       	mov    %rax,0x28(%rsp)
   82e36:	4c 89 74 24 30       	mov    %r14,0x30(%rsp)
   82e3b:	48 89 4c 24 38       	mov    %rcx,0x38(%rsp)
   82e40:	48 8d 7c 24 28       	lea    0x28(%rsp),%rdi
   82e45:	f3 0f 7e 44 24 08    	movq   0x8(%rsp),%xmm0
   82e4b:	e8 50 0b 00 00       	call   839a0 <_ZN14strategy_comm514signal_trigger17enum_rate_counter17hb51fcb9e7a9a6c40E.llvm.1301231569978033549>
   82e50:	66 0f d6 43 08       	movq   %xmm0,0x8(%rbx)
   82e55:	eb c8                	jmp    82e1f <strategy_comm5::signal_trigger::SignalTrigger::windows_std_trigger+0xaf>
   82e57:	48 89 c3             	mov    %rax,%rbx
   82e5a:	48 83 3c 24 00       	cmpq   $0x0,(%rsp)
   82e5f:	74 09                	je     82e6a <strategy_comm5::signal_trigger::SignalTrigger::windows_std_trigger+0xfa>
   82e61:	48 89 e7             	mov    %rsp,%rdi
   82e64:	ff 15 96 11 08 00    	call   *0x81196(%rip)        # 104000 <_DYNAMIC+0x5a0>
   82e6a:	48 89 df             	mov    %rbx,%rdi
   82e6d:	e8 0e 97 07 00       	call   fc580 <_Unwind_Resume@plt>
   82e72:	ff 15 d8 0e 08 00    	call   *0x80ed8(%rip)        # 103d50 <_DYNAMIC+0x2f0>
   82e78:	cc                   	int3   
   82e79:	cc                   	int3   
   82e7a:	cc                   	int3   
   82e7b:	cc                   	int3   
   82e7c:	cc                   	int3   
   82e7d:	cc                   	int3   
   82e7e:	cc                   	int3   
   82e7f:	cc                   	int3   
