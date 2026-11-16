000000000005cb00 <<strategy_comm5::_::<impl serde_core::de::Deserialize for strategy_comm5::PhaseParams>::deserialize::__Visitor as serde_core::de::Visitor>::visit_map>:
   5cb00:	55                   	push   %rbp
   5cb01:	41 57                	push   %r15
   5cb03:	41 56                	push   %r14
   5cb05:	41 55                	push   %r13
   5cb07:	41 54                	push   %r12
   5cb09:	53                   	push   %rbx
   5cb0a:	48 81 ec 58 01 00 00 	sub    $0x158,%rsp
   5cb11:	48 89 7c 24 10       	mov    %rdi,0x10(%rsp)
   5cb16:	48 b9 01 00 00 00 00 	movabs $0x8000000000000001,%rcx
   5cb1d:	00 00 80 
   5cb20:	83 3e 02             	cmpl   $0x2,(%rsi)
   5cb23:	0f 85 d6 02 00 00    	jne    5cdff <<strategy_comm5::_::<impl serde_core::de::Deserialize for strategy_comm5::PhaseParams>::deserialize::__Visitor as serde_core::de::Visitor>::visit_map+0x2ff>
   5cb29:	c6 44 24 0f 03       	movb   $0x3,0xf(%rsp)
   5cb2e:	b8 02 00 00 00       	mov    $0x2,%eax
   5cb33:	48 89 84 24 c8 00 00 	mov    %rax,0xc8(%rsp)
   5cb3a:	00 
   5cb3b:	48 89 4c 24 78       	mov    %rcx,0x78(%rsp)
   5cb40:	b8 02 00 00 00       	mov    $0x2,%eax
   5cb45:	48 89 84 24 b0 00 00 	mov    %rax,0xb0(%rsp)
   5cb4c:	00 
   5cb4d:	48 89 84 24 c0 00 00 	mov    %rax,0xc0(%rsp)
   5cb54:	00 
   5cb55:	48 89 84 24 b8 00 00 	mov    %rax,0xb8(%rsp)
   5cb5c:	00 
   5cb5d:	48 89 84 24 a8 00 00 	mov    %rax,0xa8(%rsp)
   5cb64:	00 
   5cb65:	48 89 84 24 a0 00 00 	mov    %rax,0xa0(%rsp)
   5cb6c:	00 
   5cb6d:	48 89 84 24 98 00 00 	mov    %rax,0x98(%rsp)
   5cb74:	00 
   5cb75:	48 89 84 24 90 00 00 	mov    %rax,0x90(%rsp)
   5cb7c:	00 
   5cb7d:	48 89 84 24 88 00 00 	mov    %rax,0x88(%rsp)
   5cb84:	00 
   5cb85:	48 89 84 24 80 00 00 	mov    %rax,0x80(%rsp)
   5cb8c:	00 
   5cb8d:	41 be 02 00 00 00    	mov    $0x2,%r14d
   5cb93:	41 bf 02 00 00 00    	mov    $0x2,%r15d
   5cb99:	41 bd 02 00 00 00    	mov    $0x2,%r13d
   5cb9f:	31 c9                	xor    %ecx,%ecx
   5cba1:	49 83 fd 02          	cmp    $0x2,%r13
   5cba5:	4c 0f 44 e9          	cmove  %rcx,%r13
   5cba9:	4c 89 ac 24 48 01 00 	mov    %r13,0x148(%rsp)
   5cbb0:	00 
   5cbb1:	4d 89 fd             	mov    %r15,%r13
   5cbb4:	49 83 ff 02          	cmp    $0x2,%r15
   5cbb8:	4c 0f 44 e9          	cmove  %rcx,%r13
   5cbbc:	49 83 fe 02          	cmp    $0x2,%r14
   5cbc0:	4c 0f 44 f1          	cmove  %rcx,%r14
   5cbc4:	4c 89 b4 24 50 01 00 	mov    %r14,0x150(%rsp)
   5cbcb:	00 
   5cbcc:	4c 8b 7c 24 10       	mov    0x10(%rsp),%r15
   5cbd1:	4c 8b b4 24 80 00 00 	mov    0x80(%rsp),%r14
   5cbd8:	00 
   5cbd9:	49 83 fe 02          	cmp    $0x2,%r14
   5cbdd:	4c 0f 44 f1          	cmove  %rcx,%r14
   5cbe1:	48 8b ac 24 88 00 00 	mov    0x88(%rsp),%rbp
   5cbe8:	00 
   5cbe9:	48 83 fd 02          	cmp    $0x2,%rbp
   5cbed:	48 0f 44 e9          	cmove  %rcx,%rbp
   5cbf1:	4c 8b a4 24 90 00 00 	mov    0x90(%rsp),%r12
   5cbf8:	00 
   5cbf9:	49 83 fc 02          	cmp    $0x2,%r12
   5cbfd:	4c 0f 44 e1          	cmove  %rcx,%r12
   5cc01:	48 8b 9c 24 98 00 00 	mov    0x98(%rsp),%rbx
   5cc08:	00 
   5cc09:	48 83 fb 02          	cmp    $0x2,%rbx
   5cc0d:	48 0f 44 d9          	cmove  %rcx,%rbx
   5cc11:	4c 8b 9c 24 a0 00 00 	mov    0xa0(%rsp),%r11
   5cc18:	00 
   5cc19:	49 83 fb 02          	cmp    $0x2,%r11
   5cc1d:	4c 0f 44 d9          	cmove  %rcx,%r11
   5cc21:	0f b6 44 24 0f       	movzbl 0xf(%rsp),%eax
   5cc26:	3c 03                	cmp    $0x3,%al
   5cc28:	0f b6 d0             	movzbl %al,%edx
   5cc2b:	b8 02 00 00 00       	mov    $0x2,%eax
   5cc30:	0f 45 c2             	cmovne %edx,%eax
   5cc33:	4c 8b 94 24 a8 00 00 	mov    0xa8(%rsp),%r10
   5cc3a:	00 
   5cc3b:	49 83 fa 02          	cmp    $0x2,%r10
   5cc3f:	4c 0f 44 d1          	cmove  %rcx,%r10
   5cc43:	4c 8b 84 24 b8 00 00 	mov    0xb8(%rsp),%r8
   5cc4a:	00 
   5cc4b:	49 83 f8 02          	cmp    $0x2,%r8
   5cc4f:	4c 0f 44 c1          	cmove  %rcx,%r8
   5cc53:	48 8b bc 24 c0 00 00 	mov    0xc0(%rsp),%rdi
   5cc5a:	00 
   5cc5b:	48 83 ff 02          	cmp    $0x2,%rdi
   5cc5f:	48 0f 44 f9          	cmove  %rcx,%rdi
   5cc63:	4c 8b 8c 24 b0 00 00 	mov    0xb0(%rsp),%r9
   5cc6a:	00 
   5cc6b:	49 83 f9 02          	cmp    $0x2,%r9
   5cc6f:	4c 0f 44 c9          	cmove  %rcx,%r9
   5cc73:	48 8b b4 24 c8 00 00 	mov    0xc8(%rsp),%rsi
   5cc7a:	00 
   5cc7b:	48 83 fe 02          	cmp    $0x2,%rsi
   5cc7f:	48 0f 44 f1          	cmove  %rcx,%rsi
   5cc83:	48 8b 54 24 78       	mov    0x78(%rsp),%rdx
   5cc88:	48 b9 01 00 00 00 00 	movabs $0x8000000000000001,%rcx
   5cc8f:	00 00 80 
   5cc92:	48 39 ca             	cmp    %rcx,%rdx
   5cc95:	48 8d 49 ff          	lea    -0x1(%rcx),%rcx
   5cc99:	48 0f 45 ca          	cmovne %rdx,%rcx
   5cc9d:	48 8b 94 24 48 01 00 	mov    0x148(%rsp),%rdx
   5cca4:	00 
   5cca5:	49 89 17             	mov    %rdx,(%r15)
   5cca8:	f2 0f 10 84 24 d8 00 	movsd  0xd8(%rsp),%xmm0
   5ccaf:	00 00 
   5ccb1:	f2 41 0f 11 47 08    	movsd  %xmm0,0x8(%r15)
   5ccb7:	4d 89 6f 10          	mov    %r13,0x10(%r15)
   5ccbb:	f2 0f 10 84 24 e0 00 	movsd  0xe0(%rsp),%xmm0
   5ccc2:	00 00 
   5ccc4:	f2 41 0f 11 47 18    	movsd  %xmm0,0x18(%r15)
   5ccca:	48 8b 94 24 50 01 00 	mov    0x150(%rsp),%rdx
   5ccd1:	00 
   5ccd2:	49 89 57 20          	mov    %rdx,0x20(%r15)
   5ccd6:	f2 0f 10 84 24 e8 00 	movsd  0xe8(%rsp),%xmm0
   5ccdd:	00 00 
   5ccdf:	f2 41 0f 11 47 28    	movsd  %xmm0,0x28(%r15)
   5cce5:	4d 89 77 30          	mov    %r14,0x30(%r15)
   5cce9:	f2 0f 10 84 24 f0 00 	movsd  0xf0(%rsp),%xmm0
   5ccf0:	00 00 
   5ccf2:	f2 41 0f 11 47 38    	movsd  %xmm0,0x38(%r15)
   5ccf8:	49 89 6f 40          	mov    %rbp,0x40(%r15)
   5ccfc:	f2 0f 10 84 24 f8 00 	movsd  0xf8(%rsp),%xmm0
   5cd03:	00 00 
   5cd05:	f2 41 0f 11 47 48    	movsd  %xmm0,0x48(%r15)
   5cd0b:	4d 89 67 50          	mov    %r12,0x50(%r15)
   5cd0f:	f2 0f 10 84 24 00 01 	movsd  0x100(%rsp),%xmm0
   5cd16:	00 00 
   5cd18:	f2 41 0f 11 47 58    	movsd  %xmm0,0x58(%r15)
   5cd1e:	49 89 5f 60          	mov    %rbx,0x60(%r15)
   5cd22:	f2 0f 10 84 24 08 01 	movsd  0x108(%rsp),%xmm0
   5cd29:	00 00 
   5cd2b:	f2 41 0f 11 47 68    	movsd  %xmm0,0x68(%r15)
   5cd31:	4d 89 5f 70          	mov    %r11,0x70(%r15)
   5cd35:	f2 0f 10 84 24 10 01 	movsd  0x110(%rsp),%xmm0
   5cd3c:	00 00 
   5cd3e:	f2 41 0f 11 47 78    	movsd  %xmm0,0x78(%r15)
   5cd44:	4d 89 97 80 00 00 00 	mov    %r10,0x80(%r15)
   5cd4b:	f2 0f 10 84 24 18 01 	movsd  0x118(%rsp),%xmm0
   5cd52:	00 00 
   5cd54:	f2 41 0f 11 87 88 00 	movsd  %xmm0,0x88(%r15)
   5cd5b:	00 00 
   5cd5d:	4d 89 87 90 00 00 00 	mov    %r8,0x90(%r15)
   5cd64:	f2 0f 10 84 24 20 01 	movsd  0x120(%rsp),%xmm0
   5cd6b:	00 00 
   5cd6d:	f2 41 0f 11 87 98 00 	movsd  %xmm0,0x98(%r15)
   5cd74:	00 00 
   5cd76:	49 89 bf a0 00 00 00 	mov    %rdi,0xa0(%r15)
   5cd7d:	f2 0f 10 84 24 30 01 	movsd  0x130(%rsp),%xmm0
   5cd84:	00 00 
   5cd86:	f2 41 0f 11 87 a8 00 	movsd  %xmm0,0xa8(%r15)
   5cd8d:	00 00 
   5cd8f:	4d 89 8f b0 00 00 00 	mov    %r9,0xb0(%r15)
   5cd96:	f2 0f 10 84 24 38 01 	movsd  0x138(%rsp),%xmm0
   5cd9d:	00 00 
   5cd9f:	f2 41 0f 11 87 b8 00 	movsd  %xmm0,0xb8(%r15)
   5cda6:	00 00 
   5cda8:	49 89 b7 c0 00 00 00 	mov    %rsi,0xc0(%r15)
   5cdaf:	f2 0f 10 84 24 40 01 	movsd  0x140(%rsp),%xmm0
   5cdb6:	00 00 
   5cdb8:	f2 41 0f 11 87 c8 00 	movsd  %xmm0,0xc8(%r15)
   5cdbf:	00 00 
   5cdc1:	49 89 8f d0 00 00 00 	mov    %rcx,0xd0(%r15)
   5cdc8:	48 8b 8c 24 d0 00 00 	mov    0xd0(%rsp),%rcx
   5cdcf:	00 
   5cdd0:	49 89 8f d8 00 00 00 	mov    %rcx,0xd8(%r15)
   5cdd7:	48 8b 8c 24 28 01 00 	mov    0x128(%rsp),%rcx
   5cdde:	00 
   5cddf:	49 89 8f e0 00 00 00 	mov    %rcx,0xe0(%r15)
   5cde6:	41 88 87 e8 00 00 00 	mov    %al,0xe8(%r15)
   5cded:	48 81 c4 58 01 00 00 	add    $0x158,%rsp
   5cdf4:	5b                   	pop    %rbx
   5cdf5:	41 5c                	pop    %r12
   5cdf7:	41 5d                	pop    %r13
   5cdf9:	41 5e                	pop    %r14
   5cdfb:	41 5f                	pop    %r15
   5cdfd:	5d                   	pop    %rbp
   5cdfe:	c3                   	ret    
   5cdff:	49 89 f4             	mov    %rsi,%r12
   5ce02:	c6 44 24 0f 03       	movb   $0x3,0xf(%rsp)
   5ce07:	41 bd 02 00 00 00    	mov    $0x2,%r13d
   5ce0d:	48 8d 6c 24 18       	lea    0x18(%rsp),%rbp
   5ce12:	48 8d 1d 5b cf fb ff 	lea    -0x430a5(%rip),%rbx        # 19d74 <anon.8868ba55c3fc5525a110cabbb60004d5.195.llvm.6579149275953927878+0x4d6>
   5ce19:	41 bf 02 00 00 00    	mov    $0x2,%r15d
   5ce1f:	41 be 02 00 00 00    	mov    $0x2,%r14d
   5ce25:	b8 02 00 00 00       	mov    $0x2,%eax
   5ce2a:	48 89 84 24 80 00 00 	mov    %rax,0x80(%rsp)
   5ce31:	00 
   5ce32:	48 89 84 24 88 00 00 	mov    %rax,0x88(%rsp)
   5ce39:	00 
   5ce3a:	48 89 84 24 90 00 00 	mov    %rax,0x90(%rsp)
   5ce41:	00 
   5ce42:	48 89 84 24 98 00 00 	mov    %rax,0x98(%rsp)
   5ce49:	00 
   5ce4a:	48 89 84 24 a0 00 00 	mov    %rax,0xa0(%rsp)
   5ce51:	00 
   5ce52:	48 89 84 24 a8 00 00 	mov    %rax,0xa8(%rsp)
   5ce59:	00 
   5ce5a:	48 89 84 24 b8 00 00 	mov    %rax,0xb8(%rsp)
   5ce61:	00 
   5ce62:	48 89 84 24 c0 00 00 	mov    %rax,0xc0(%rsp)
   5ce69:	00 
   5ce6a:	48 89 84 24 b0 00 00 	mov    %rax,0xb0(%rsp)
   5ce71:	00 
   5ce72:	48 89 84 24 c8 00 00 	mov    %rax,0xc8(%rsp)
   5ce79:	00 
   5ce7a:	48 89 4c 24 78       	mov    %rcx,0x78(%rsp)
   5ce7f:	eb 1a                	jmp    5ce9b <<strategy_comm5::_::<impl serde_core::de::Deserialize for strategy_comm5::PhaseParams>::deserialize::__Visitor as serde_core::de::Visitor>::visit_map+0x39b>
   5ce81:	66 66 66 66 66 66 2e 	data16 data16 data16 data16 data16 cs nopw 0x0(%rax,%rax,1)
   5ce88:	0f 1f 84 00 00 00 00 
   5ce8f:	00 
   5ce90:	41 83 3c 24 02       	cmpl   $0x2,(%r12)
   5ce95:	0f 84 04 fd ff ff    	je     5cb9f <<strategy_comm5::_::<impl serde_core::de::Deserialize for strategy_comm5::PhaseParams>::deserialize::__Visitor as serde_core::de::Visitor>::visit_map+0x9f>
   5ce9b:	ba 18 00 00 00       	mov    $0x18,%edx
   5cea0:	48 89 ef             	mov    %rbp,%rdi
   5cea3:	48 8d 35 10 e0 fb ff 	lea    -0x41ff0(%rip),%rsi        # 1aeba <anon.f8fdc7844e54bdce0bd72b118f1760df.24.llvm.12406105305166711053>
   5ceaa:	e8 f1 89 fe ff       	call   458a0 <<strategy_comm5::_::<impl serde_core::de::Deserialize for strategy_comm5::PhaseParams>::deserialize::__FieldVisitor as serde_core::de::Visitor>::visit_str>
   5ceaf:	48 8b 4c 24 18       	mov    0x18(%rsp),%rcx
   5ceb4:	0f b6 44 24 20       	movzbl 0x20(%rsp),%eax
   5ceb9:	48 83 f9 02          	cmp    $0x2,%rcx
   5cebd:	0f 85 9b 04 00 00    	jne    5d35e <<strategy_comm5::_::<impl serde_core::de::Deserialize for strategy_comm5::PhaseParams>::deserialize::__Visitor as serde_core::de::Visitor>::visit_map+0x85e>
   5cec3:	0f b6 c0             	movzbl %al,%eax
   5cec6:	89 c0                	mov    %eax,%eax
   5cec8:	48 63 04 83          	movslq (%rbx,%rax,4),%rax
   5cecc:	48 01 d8             	add    %rbx,%rax
   5cecf:	ff e0                	jmp    *%rax
   5ced1:	49 83 fd 02          	cmp    $0x2,%r13
   5ced5:	0f 85 52 0a 00 00    	jne    5d92d <<strategy_comm5::_::<impl serde_core::de::Deserialize for strategy_comm5::PhaseParams>::deserialize::__Visitor as serde_core::de::Visitor>::visit_map+0xe2d>
   5cedb:	48 89 ef             	mov    %rbp,%rdi
   5cede:	4c 89 e6             	mov    %r12,%rsi
   5cee1:	e8 ea 8f 02 00       	call   85ed0 <<toml_edit::de::datetime::DatetimeDeserializer as serde_core::de::MapAccess>::next_value_seed>
   5cee6:	48 8b 44 24 18       	mov    0x18(%rsp),%rax
   5ceeb:	4c 8b 6c 24 20       	mov    0x20(%rsp),%r13
   5cef0:	f2 0f 10 44 24 28    	movsd  0x28(%rsp),%xmm0
   5cef6:	f2 0f 11 84 24 d8 00 	movsd  %xmm0,0xd8(%rsp)
   5cefd:	00 00 
   5ceff:	48 83 f8 02          	cmp    $0x2,%rax
   5cf03:	74 8b                	je     5ce90 <<strategy_comm5::_::<impl serde_core::de::Deserialize for strategy_comm5::PhaseParams>::deserialize::__Visitor as serde_core::de::Visitor>::visit_map+0x390>
   5cf05:	e9 8e 06 00 00       	jmp    5d598 <<strategy_comm5::_::<impl serde_core::de::Deserialize for strategy_comm5::PhaseParams>::deserialize::__Visitor as serde_core::de::Visitor>::visit_map+0xa98>
   5cf0a:	48 b8 01 00 00 00 00 	movabs $0x8000000000000001,%rax
   5cf11:	00 00 80 
   5cf14:	48 39 44 24 78       	cmp    %rax,0x78(%rsp)
   5cf19:	0f 85 7a 0a 00 00    	jne    5d999 <<strategy_comm5::_::<impl serde_core::de::Deserialize for strategy_comm5::PhaseParams>::deserialize::__Visitor as serde_core::de::Visitor>::visit_map+0xe99>
   5cf1f:	48 89 44 24 78       	mov    %rax,0x78(%rsp)
   5cf24:	48 89 ef             	mov    %rbp,%rdi
   5cf27:	4c 89 e6             	mov    %r12,%rsi
   5cf2a:	e8 21 8e 02 00       	call   85d50 <<toml_edit::de::datetime::DatetimeDeserializer as serde_core::de::MapAccess>::next_value_seed>
   5cf2f:	48 8b 44 24 18       	mov    0x18(%rsp),%rax
   5cf34:	48 8b 4c 24 20       	mov    0x20(%rsp),%rcx
   5cf39:	48 89 4c 24 78       	mov    %rcx,0x78(%rsp)
   5cf3e:	48 8b 4c 24 28       	mov    0x28(%rsp),%rcx
   5cf43:	48 89 8c 24 d0 00 00 	mov    %rcx,0xd0(%rsp)
   5cf4a:	00 
   5cf4b:	48 8b 4c 24 30       	mov    0x30(%rsp),%rcx
   5cf50:	48 89 8c 24 28 01 00 	mov    %rcx,0x128(%rsp)
   5cf57:	00 
   5cf58:	48 83 f8 02          	cmp    $0x2,%rax
   5cf5c:	0f 84 2e ff ff ff    	je     5ce90 <<strategy_comm5::_::<impl serde_core::de::Deserialize for strategy_comm5::PhaseParams>::deserialize::__Visitor as serde_core::de::Visitor>::visit_map+0x390>
   5cf62:	e9 49 08 00 00       	jmp    5d7b0 <<strategy_comm5::_::<impl serde_core::de::Deserialize for strategy_comm5::PhaseParams>::deserialize::__Visitor as serde_core::de::Visitor>::visit_map+0xcb0>
   5cf67:	48 83 bc 24 c0 00 00 	cmpq   $0x2,0xc0(%rsp)
   5cf6e:	00 02 
   5cf70:	0f 85 83 0a 00 00    	jne    5d9f9 <<strategy_comm5::_::<impl serde_core::de::Deserialize for strategy_comm5::PhaseParams>::deserialize::__Visitor as serde_core::de::Visitor>::visit_map+0xef9>
   5cf76:	48 89 ef             	mov    %rbp,%rdi
   5cf79:	4c 89 e6             	mov    %r12,%rsi
   5cf7c:	e8 4f 8f 02 00       	call   85ed0 <<toml_edit::de::datetime::DatetimeDeserializer as serde_core::de::MapAccess>::next_value_seed>
   5cf81:	48 8b 44 24 18       	mov    0x18(%rsp),%rax
   5cf86:	48 8b 4c 24 20       	mov    0x20(%rsp),%rcx
   5cf8b:	48 89 8c 24 c0 00 00 	mov    %rcx,0xc0(%rsp)
   5cf92:	00 
   5cf93:	f2 0f 10 44 24 28    	movsd  0x28(%rsp),%xmm0
   5cf99:	f2 0f 11 84 24 30 01 	movsd  %xmm0,0x130(%rsp)
   5cfa0:	00 00 
   5cfa2:	48 83 f8 02          	cmp    $0x2,%rax
   5cfa6:	0f 84 e4 fe ff ff    	je     5ce90 <<strategy_comm5::_::<impl serde_core::de::Deserialize for strategy_comm5::PhaseParams>::deserialize::__Visitor as serde_core::de::Visitor>::visit_map+0x390>
   5cfac:	e9 57 04 00 00       	jmp    5d408 <<strategy_comm5::_::<impl serde_core::de::Deserialize for strategy_comm5::PhaseParams>::deserialize::__Visitor as serde_core::de::Visitor>::visit_map+0x908>
   5cfb1:	48 83 bc 24 88 00 00 	cmpq   $0x2,0x88(%rsp)
   5cfb8:	00 02 
   5cfba:	0f 85 f1 09 00 00    	jne    5d9b1 <<strategy_comm5::_::<impl serde_core::de::Deserialize for strategy_comm5::PhaseParams>::deserialize::__Visitor as serde_core::de::Visitor>::visit_map+0xeb1>
   5cfc0:	48 89 ef             	mov    %rbp,%rdi
   5cfc3:	4c 89 e6             	mov    %r12,%rsi
   5cfc6:	e8 05 8f 02 00       	call   85ed0 <<toml_edit::de::datetime::DatetimeDeserializer as serde_core::de::MapAccess>::next_value_seed>
   5cfcb:	48 8b 44 24 18       	mov    0x18(%rsp),%rax
   5cfd0:	48 8b 4c 24 20       	mov    0x20(%rsp),%rcx
   5cfd5:	48 89 8c 24 88 00 00 	mov    %rcx,0x88(%rsp)
   5cfdc:	00 
   5cfdd:	f2 0f 10 44 24 28    	movsd  0x28(%rsp),%xmm0
   5cfe3:	f2 0f 11 84 24 f8 00 	movsd  %xmm0,0xf8(%rsp)
   5cfea:	00 00 
   5cfec:	48 83 f8 02          	cmp    $0x2,%rax
   5cff0:	0f 84 9a fe ff ff    	je     5ce90 <<strategy_comm5::_::<impl serde_core::de::Deserialize for strategy_comm5::PhaseParams>::deserialize::__Visitor as serde_core::de::Visitor>::visit_map+0x390>
   5cff6:	e9 65 07 00 00       	jmp    5d760 <<strategy_comm5::_::<impl serde_core::de::Deserialize for strategy_comm5::PhaseParams>::deserialize::__Visitor as serde_core::de::Visitor>::visit_map+0xc60>
   5cffb:	48 83 bc 24 b0 00 00 	cmpq   $0x2,0xb0(%rsp)
   5d002:	00 02 
   5d004:	0f 85 d2 08 00 00    	jne    5d8dc <<strategy_comm5::_::<impl serde_core::de::Deserialize for strategy_comm5::PhaseParams>::deserialize::__Visitor as serde_core::de::Visitor>::visit_map+0xddc>
   5d00a:	48 89 ef             	mov    %rbp,%rdi
   5d00d:	4c 89 e6             	mov    %r12,%rsi
   5d010:	e8 bb 8e 02 00       	call   85ed0 <<toml_edit::de::datetime::DatetimeDeserializer as serde_core::de::MapAccess>::next_value_seed>
   5d015:	48 8b 44 24 18       	mov    0x18(%rsp),%rax
   5d01a:	48 8b 4c 24 20       	mov    0x20(%rsp),%rcx
   5d01f:	48 89 8c 24 b0 00 00 	mov    %rcx,0xb0(%rsp)
   5d026:	00 
   5d027:	f2 0f 10 44 24 28    	movsd  0x28(%rsp),%xmm0
   5d02d:	f2 0f 11 84 24 38 01 	movsd  %xmm0,0x138(%rsp)
   5d034:	00 00 
   5d036:	48 83 f8 02          	cmp    $0x2,%rax
   5d03a:	0f 84 50 fe ff ff    	je     5ce90 <<strategy_comm5::_::<impl serde_core::de::Deserialize for strategy_comm5::PhaseParams>::deserialize::__Visitor as serde_core::de::Visitor>::visit_map+0x390>
   5d040:	e9 cb 06 00 00       	jmp    5d710 <<strategy_comm5::_::<impl serde_core::de::Deserialize for strategy_comm5::PhaseParams>::deserialize::__Visitor as serde_core::de::Visitor>::visit_map+0xc10>
   5d045:	48 83 bc 24 a8 00 00 	cmpq   $0x2,0xa8(%rsp)
   5d04c:	00 02 
   5d04e:	0f 85 75 09 00 00    	jne    5d9c9 <<strategy_comm5::_::<impl serde_core::de::Deserialize for strategy_comm5::PhaseParams>::deserialize::__Visitor as serde_core::de::Visitor>::visit_map+0xec9>
   5d054:	48 89 ef             	mov    %rbp,%rdi
   5d057:	4c 89 e6             	mov    %r12,%rsi
   5d05a:	e8 71 8e 02 00       	call   85ed0 <<toml_edit::de::datetime::DatetimeDeserializer as serde_core::de::MapAccess>::next_value_seed>
   5d05f:	48 8b 44 24 18       	mov    0x18(%rsp),%rax
   5d064:	48 8b 4c 24 20       	mov    0x20(%rsp),%rcx
   5d069:	48 89 8c 24 a8 00 00 	mov    %rcx,0xa8(%rsp)
   5d070:	00 
   5d071:	f2 0f 10 44 24 28    	movsd  0x28(%rsp),%xmm0
   5d077:	f2 0f 11 84 24 18 01 	movsd  %xmm0,0x118(%rsp)
   5d07e:	00 00 
   5d080:	48 83 f8 02          	cmp    $0x2,%rax
   5d084:	0f 84 06 fe ff ff    	je     5ce90 <<strategy_comm5::_::<impl serde_core::de::Deserialize for strategy_comm5::PhaseParams>::deserialize::__Visitor as serde_core::de::Visitor>::visit_map+0x390>
   5d08a:	e9 b9 04 00 00       	jmp    5d548 <<strategy_comm5::_::<impl serde_core::de::Deserialize for strategy_comm5::PhaseParams>::deserialize::__Visitor as serde_core::de::Visitor>::visit_map+0xa48>
   5d08f:	49 83 fe 02          	cmp    $0x2,%r14
   5d093:	0f 85 ca 08 00 00    	jne    5d963 <<strategy_comm5::_::<impl serde_core::de::Deserialize for strategy_comm5::PhaseParams>::deserialize::__Visitor as serde_core::de::Visitor>::visit_map+0xe63>
   5d099:	48 89 ef             	mov    %rbp,%rdi
   5d09c:	4c 89 e6             	mov    %r12,%rsi
   5d09f:	e8 2c 8e 02 00       	call   85ed0 <<toml_edit::de::datetime::DatetimeDeserializer as serde_core::de::MapAccess>::next_value_seed>
   5d0a4:	48 8b 44 24 18       	mov    0x18(%rsp),%rax
   5d0a9:	4c 8b 74 24 20       	mov    0x20(%rsp),%r14
   5d0ae:	f2 0f 10 44 24 28    	movsd  0x28(%rsp),%xmm0
   5d0b4:	f2 0f 11 84 24 e8 00 	movsd  %xmm0,0xe8(%rsp)
   5d0bb:	00 00 
   5d0bd:	48 83 f8 02          	cmp    $0x2,%rax
   5d0c1:	0f 84 c9 fd ff ff    	je     5ce90 <<strategy_comm5::_::<impl serde_core::de::Deserialize for strategy_comm5::PhaseParams>::deserialize::__Visitor as serde_core::de::Visitor>::visit_map+0x390>
   5d0c7:	e9 fc 05 00 00       	jmp    5d6c8 <<strategy_comm5::_::<impl serde_core::de::Deserialize for strategy_comm5::PhaseParams>::deserialize::__Visitor as serde_core::de::Visitor>::visit_map+0xbc8>
   5d0cc:	48 89 ef             	mov    %rbp,%rdi
   5d0cf:	4c 89 e6             	mov    %r12,%rsi
   5d0d2:	e8 39 83 02 00       	call   85410 <<toml_edit::de::datetime::DatetimeDeserializer as serde_core::de::MapAccess>::next_value_seed>
   5d0d7:	48 8b 44 24 18       	mov    0x18(%rsp),%rax
   5d0dc:	48 83 f8 02          	cmp    $0x2,%rax
   5d0e0:	0f 84 aa fd ff ff    	je     5ce90 <<strategy_comm5::_::<impl serde_core::de::Deserialize for strategy_comm5::PhaseParams>::deserialize::__Visitor as serde_core::de::Visitor>::visit_map+0x390>
   5d0e6:	e9 d9 02 00 00       	jmp    5d3c4 <<strategy_comm5::_::<impl serde_core::de::Deserialize for strategy_comm5::PhaseParams>::deserialize::__Visitor as serde_core::de::Visitor>::visit_map+0x8c4>
   5d0eb:	48 83 bc 24 80 00 00 	cmpq   $0x2,0x80(%rsp)
   5d0f2:	00 02 
   5d0f4:	0f 85 18 08 00 00    	jne    5d912 <<strategy_comm5::_::<impl serde_core::de::Deserialize for strategy_comm5::PhaseParams>::deserialize::__Visitor as serde_core::de::Visitor>::visit_map+0xe12>
   5d0fa:	48 89 ef             	mov    %rbp,%rdi
   5d0fd:	4c 89 e6             	mov    %r12,%rsi
   5d100:	e8 cb 8d 02 00       	call   85ed0 <<toml_edit::de::datetime::DatetimeDeserializer as serde_core::de::MapAccess>::next_value_seed>
   5d105:	48 8b 44 24 18       	mov    0x18(%rsp),%rax
   5d10a:	48 8b 4c 24 20       	mov    0x20(%rsp),%rcx
   5d10f:	48 89 8c 24 80 00 00 	mov    %rcx,0x80(%rsp)
   5d116:	00 
   5d117:	f2 0f 10 44 24 28    	movsd  0x28(%rsp),%xmm0
   5d11d:	f2 0f 11 84 24 f0 00 	movsd  %xmm0,0xf0(%rsp)
   5d124:	00 00 
   5d126:	48 83 f8 02          	cmp    $0x2,%rax
   5d12a:	0f 84 60 fd ff ff    	je     5ce90 <<strategy_comm5::_::<impl serde_core::de::Deserialize for strategy_comm5::PhaseParams>::deserialize::__Visitor as serde_core::de::Visitor>::visit_map+0x390>
   5d130:	e9 43 05 00 00       	jmp    5d678 <<strategy_comm5::_::<impl serde_core::de::Deserialize for strategy_comm5::PhaseParams>::deserialize::__Visitor as serde_core::de::Visitor>::visit_map+0xb78>
   5d135:	48 83 bc 24 a0 00 00 	cmpq   $0x2,0xa0(%rsp)
   5d13c:	00 02 
   5d13e:	0f 85 9d 08 00 00    	jne    5d9e1 <<strategy_comm5::_::<impl serde_core::de::Deserialize for strategy_comm5::PhaseParams>::deserialize::__Visitor as serde_core::de::Visitor>::visit_map+0xee1>
   5d144:	48 89 ef             	mov    %rbp,%rdi
   5d147:	4c 89 e6             	mov    %r12,%rsi
   5d14a:	e8 81 8d 02 00       	call   85ed0 <<toml_edit::de::datetime::DatetimeDeserializer as serde_core::de::MapAccess>::next_value_seed>
   5d14f:	48 8b 44 24 18       	mov    0x18(%rsp),%rax
   5d154:	48 8b 4c 24 20       	mov    0x20(%rsp),%rcx
   5d159:	48 89 8c 24 a0 00 00 	mov    %rcx,0xa0(%rsp)
   5d160:	00 
   5d161:	f2 0f 10 44 24 28    	movsd  0x28(%rsp),%xmm0
   5d167:	f2 0f 11 84 24 10 01 	movsd  %xmm0,0x110(%rsp)
   5d16e:	00 00 
   5d170:	48 83 f8 02          	cmp    $0x2,%rax
   5d174:	0f 84 16 fd ff ff    	je     5ce90 <<strategy_comm5::_::<impl serde_core::de::Deserialize for strategy_comm5::PhaseParams>::deserialize::__Visitor as serde_core::de::Visitor>::visit_map+0x390>
   5d17a:	e9 8b 06 00 00       	jmp    5d80a <<strategy_comm5::_::<impl serde_core::de::Deserialize for strategy_comm5::PhaseParams>::deserialize::__Visitor as serde_core::de::Visitor>::visit_map+0xd0a>
   5d17f:	49 83 ff 02          	cmp    $0x2,%r15
   5d183:	0f 85 6e 07 00 00    	jne    5d8f7 <<strategy_comm5::_::<impl serde_core::de::Deserialize for strategy_comm5::PhaseParams>::deserialize::__Visitor as serde_core::de::Visitor>::visit_map+0xdf7>
   5d189:	48 89 ef             	mov    %rbp,%rdi
   5d18c:	4c 89 e6             	mov    %r12,%rsi
   5d18f:	e8 3c 8d 02 00       	call   85ed0 <<toml_edit::de::datetime::DatetimeDeserializer as serde_core::de::MapAccess>::next_value_seed>
   5d194:	48 8b 44 24 18       	mov    0x18(%rsp),%rax
   5d199:	4c 8b 7c 24 20       	mov    0x20(%rsp),%r15
   5d19e:	f2 0f 10 44 24 28    	movsd  0x28(%rsp),%xmm0
   5d1a4:	f2 0f 11 84 24 e0 00 	movsd  %xmm0,0xe0(%rsp)
   5d1ab:	00 00 
   5d1ad:	48 83 f8 02          	cmp    $0x2,%rax
   5d1b1:	0f 84 d9 fc ff ff    	je     5ce90 <<strategy_comm5::_::<impl serde_core::de::Deserialize for strategy_comm5::PhaseParams>::deserialize::__Visitor as serde_core::de::Visitor>::visit_map+0x390>
   5d1b7:	e9 24 04 00 00       	jmp    5d5e0 <<strategy_comm5::_::<impl serde_core::de::Deserialize for strategy_comm5::PhaseParams>::deserialize::__Visitor as serde_core::de::Visitor>::visit_map+0xae0>
   5d1bc:	48 83 bc 24 90 00 00 	cmpq   $0x2,0x90(%rsp)
   5d1c3:	00 02 
   5d1c5:	0f 85 b3 07 00 00    	jne    5d97e <<strategy_comm5::_::<impl serde_core::de::Deserialize for strategy_comm5::PhaseParams>::deserialize::__Visitor as serde_core::de::Visitor>::visit_map+0xe7e>
   5d1cb:	48 89 ef             	mov    %rbp,%rdi
   5d1ce:	4c 89 e6             	mov    %r12,%rsi
   5d1d1:	e8 fa 8c 02 00       	call   85ed0 <<toml_edit::de::datetime::DatetimeDeserializer as serde_core::de::MapAccess>::next_value_seed>
   5d1d6:	48 8b 44 24 18       	mov    0x18(%rsp),%rax
   5d1db:	48 8b 4c 24 20       	mov    0x20(%rsp),%rcx
   5d1e0:	48 89 8c 24 90 00 00 	mov    %rcx,0x90(%rsp)
   5d1e7:	00 
   5d1e8:	f2 0f 10 44 24 28    	movsd  0x28(%rsp),%xmm0
   5d1ee:	f2 0f 11 84 24 00 01 	movsd  %xmm0,0x100(%rsp)
   5d1f5:	00 00 
   5d1f7:	48 83 f8 02          	cmp    $0x2,%rax
   5d1fb:	0f 84 8f fc ff ff    	je     5ce90 <<strategy_comm5::_::<impl serde_core::de::Deserialize for strategy_comm5::PhaseParams>::deserialize::__Visitor as serde_core::de::Visitor>::visit_map+0x390>
   5d201:	e9 a2 02 00 00       	jmp    5d4a8 <<strategy_comm5::_::<impl serde_core::de::Deserialize for strategy_comm5::PhaseParams>::deserialize::__Visitor as serde_core::de::Visitor>::visit_map+0x9a8>
   5d206:	48 83 bc 24 c8 00 00 	cmpq   $0x2,0xc8(%rsp)
   5d20d:	00 02 
   5d20f:	0f 85 fc 07 00 00    	jne    5da11 <<strategy_comm5::_::<impl serde_core::de::Deserialize for strategy_comm5::PhaseParams>::deserialize::__Visitor as serde_core::de::Visitor>::visit_map+0xf11>
   5d215:	48 89 ef             	mov    %rbp,%rdi
   5d218:	4c 89 e6             	mov    %r12,%rsi
   5d21b:	e8 b0 8c 02 00       	call   85ed0 <<toml_edit::de::datetime::DatetimeDeserializer as serde_core::de::MapAccess>::next_value_seed>
   5d220:	48 8b 44 24 18       	mov    0x18(%rsp),%rax
   5d225:	48 8b 4c 24 20       	mov    0x20(%rsp),%rcx
   5d22a:	48 89 8c 24 c8 00 00 	mov    %rcx,0xc8(%rsp)
   5d231:	00 
   5d232:	f2 0f 10 44 24 28    	movsd  0x28(%rsp),%xmm0
   5d238:	f2 0f 11 84 24 40 01 	movsd  %xmm0,0x140(%rsp)
   5d23f:	00 00 
   5d241:	48 83 f8 02          	cmp    $0x2,%rax
   5d245:	0f 84 45 fc ff ff    	je     5ce90 <<strategy_comm5::_::<impl serde_core::de::Deserialize for strategy_comm5::PhaseParams>::deserialize::__Visitor as serde_core::de::Visitor>::visit_map+0x390>
   5d24b:	e9 08 02 00 00       	jmp    5d458 <<strategy_comm5::_::<impl serde_core::de::Deserialize for strategy_comm5::PhaseParams>::deserialize::__Visitor as serde_core::de::Visitor>::visit_map+0x958>
   5d250:	48 83 bc 24 98 00 00 	cmpq   $0x2,0x98(%rsp)
   5d257:	00 02 
   5d259:	0f 85 e9 06 00 00    	jne    5d948 <<strategy_comm5::_::<impl serde_core::de::Deserialize for strategy_comm5::PhaseParams>::deserialize::__Visitor as serde_core::de::Visitor>::visit_map+0xe48>
   5d25f:	48 89 ef             	mov    %rbp,%rdi
   5d262:	4c 89 e6             	mov    %r12,%rsi
   5d265:	e8 66 8c 02 00       	call   85ed0 <<toml_edit::de::datetime::DatetimeDeserializer as serde_core::de::MapAccess>::next_value_seed>
   5d26a:	48 8b 44 24 18       	mov    0x18(%rsp),%rax
   5d26f:	48 8b 4c 24 20       	mov    0x20(%rsp),%rcx
   5d274:	48 89 8c 24 98 00 00 	mov    %rcx,0x98(%rsp)
   5d27b:	00 
   5d27c:	f2 0f 10 44 24 28    	movsd  0x28(%rsp),%xmm0
   5d282:	f2 0f 11 84 24 08 01 	movsd  %xmm0,0x108(%rsp)
   5d289:	00 00 
   5d28b:	48 83 f8 02          	cmp    $0x2,%rax
   5d28f:	0f 84 fb fb ff ff    	je     5ce90 <<strategy_comm5::_::<impl serde_core::de::Deserialize for strategy_comm5::PhaseParams>::deserialize::__Visitor as serde_core::de::Visitor>::visit_map+0x390>
   5d295:	e9 8e 03 00 00       	jmp    5d628 <<strategy_comm5::_::<impl serde_core::de::Deserialize for strategy_comm5::PhaseParams>::deserialize::__Visitor as serde_core::de::Visitor>::visit_map+0xb28>
   5d29a:	48 83 bc 24 b8 00 00 	cmpq   $0x2,0xb8(%rsp)
   5d2a1:	00 02 
   5d2a3:	0f 85 fd 05 00 00    	jne    5d8a6 <<strategy_comm5::_::<impl serde_core::de::Deserialize for strategy_comm5::PhaseParams>::deserialize::__Visitor as serde_core::de::Visitor>::visit_map+0xda6>
   5d2a9:	48 89 ef             	mov    %rbp,%rdi
   5d2ac:	4c 89 e6             	mov    %r12,%rsi
   5d2af:	e8 1c 8c 02 00       	call   85ed0 <<toml_edit::de::datetime::DatetimeDeserializer as serde_core::de::MapAccess>::next_value_seed>
   5d2b4:	48 8b 44 24 18       	mov    0x18(%rsp),%rax
   5d2b9:	48 8b 4c 24 20       	mov    0x20(%rsp),%rcx
   5d2be:	48 89 8c 24 b8 00 00 	mov    %rcx,0xb8(%rsp)
   5d2c5:	00 
   5d2c6:	f2 0f 10 44 24 28    	movsd  0x28(%rsp),%xmm0
   5d2cc:	f2 0f 11 84 24 20 01 	movsd  %xmm0,0x120(%rsp)
   5d2d3:	00 00 
   5d2d5:	48 83 f8 02          	cmp    $0x2,%rax
   5d2d9:	0f 84 b1 fb ff ff    	je     5ce90 <<strategy_comm5::_::<impl serde_core::de::Deserialize for strategy_comm5::PhaseParams>::deserialize::__Visitor as serde_core::de::Visitor>::visit_map+0x390>
   5d2df:	e9 14 02 00 00       	jmp    5d4f8 <<strategy_comm5::_::<impl serde_core::de::Deserialize for strategy_comm5::PhaseParams>::deserialize::__Visitor as serde_core::de::Visitor>::visit_map+0x9f8>
   5d2e4:	80 7c 24 0f 03       	cmpb   $0x3,0xf(%rsp)
   5d2e9:	0f 85 d2 05 00 00    	jne    5d8c1 <<strategy_comm5::_::<impl serde_core::de::Deserialize for strategy_comm5::PhaseParams>::deserialize::__Visitor as serde_core::de::Visitor>::visit_map+0xdc1>
   5d2ef:	48 89 ef             	mov    %rbp,%rdi
   5d2f2:	4c 89 e6             	mov    %r12,%rsi
   5d2f5:	e8 f6 84 02 00       	call   857f0 <<toml_edit::de::datetime::DatetimeDeserializer as serde_core::de::MapAccess>::next_value_seed>
   5d2fa:	48 8b 44 24 18       	mov    0x18(%rsp),%rax
   5d2ff:	0f b6 4c 24 20       	movzbl 0x20(%rsp),%ecx
   5d304:	88 4c 24 0f          	mov    %cl,0xf(%rsp)
   5d308:	48 83 f8 02          	cmp    $0x2,%rax
   5d30c:	0f 84 7e fb ff ff    	je     5ce90 <<strategy_comm5::_::<impl serde_core::de::Deserialize for strategy_comm5::PhaseParams>::deserialize::__Visitor as serde_core::de::Visitor>::visit_map+0x390>
   5d312:	48 8b 4c 24 70       	mov    0x70(%rsp),%rcx
   5d317:	48 8b 54 24 10       	mov    0x10(%rsp),%rdx
   5d31c:	48 89 4a 60          	mov    %rcx,0x60(%rdx)
   5d320:	0f 10 44 24 61       	movups 0x61(%rsp),%xmm0
   5d325:	0f 11 42 51          	movups %xmm0,0x51(%rdx)
   5d329:	0f 10 44 24 21       	movups 0x21(%rsp),%xmm0
   5d32e:	0f 10 4c 24 31       	movups 0x31(%rsp),%xmm1
   5d333:	0f 10 54 24 41       	movups 0x41(%rsp),%xmm2
   5d338:	0f 10 5c 24 51       	movups 0x51(%rsp),%xmm3
   5d33d:	0f 11 5a 41          	movups %xmm3,0x41(%rdx)
   5d341:	0f 11 52 31          	movups %xmm2,0x31(%rdx)
   5d345:	0f 11 4a 21          	movups %xmm1,0x21(%rdx)
   5d349:	0f 11 42 11          	movups %xmm0,0x11(%rdx)
   5d34d:	48 89 42 08          	mov    %rax,0x8(%rdx)
   5d351:	0f b6 44 24 0f       	movzbl 0xf(%rsp),%eax
   5d356:	88 42 10             	mov    %al,0x10(%rdx)
   5d359:	e9 fc 04 00 00       	jmp    5d85a <<strategy_comm5::_::<impl serde_core::de::Deserialize for strategy_comm5::PhaseParams>::deserialize::__Visitor as serde_core::de::Visitor>::visit_map+0xd5a>
   5d35e:	48 8b 54 24 70       	mov    0x70(%rsp),%rdx
   5d363:	48 8b 74 24 10       	mov    0x10(%rsp),%rsi
   5d368:	48 89 56 60          	mov    %rdx,0x60(%rsi)
   5d36c:	0f 10 44 24 61       	movups 0x61(%rsp),%xmm0
   5d371:	0f 11 46 51          	movups %xmm0,0x51(%rsi)
   5d375:	0f 10 44 24 21       	movups 0x21(%rsp),%xmm0
   5d37a:	0f 10 4c 24 31       	movups 0x31(%rsp),%xmm1
   5d37f:	0f 10 54 24 41       	movups 0x41(%rsp),%xmm2
   5d384:	0f 10 5c 24 51       	movups 0x51(%rsp),%xmm3
   5d389:	0f 11 5e 41          	movups %xmm3,0x41(%rsi)
   5d38d:	0f 11 56 31          	movups %xmm2,0x31(%rsi)
   5d391:	0f 11 4e 21          	movups %xmm1,0x21(%rsi)
   5d395:	0f 11 46 11          	movups %xmm0,0x11(%rsi)
   5d399:	48 89 4e 08          	mov    %rcx,0x8(%rsi)
   5d39d:	88 46 10             	mov    %al,0x10(%rsi)
   5d3a0:	48 c7 06 02 00 00 00 	movq   $0x2,(%rsi)
   5d3a7:	48 b8 02 00 00 00 00 	movabs $0x8000000000000002,%rax
   5d3ae:	00 00 80 
   5d3b1:	48 8b 74 24 78       	mov    0x78(%rsp),%rsi
   5d3b6:	48 39 c6             	cmp    %rax,%rsi
   5d3b9:	0f 8c 2e fa ff ff    	jl     5cded <<strategy_comm5::_::<impl serde_core::de::Deserialize for strategy_comm5::PhaseParams>::deserialize::__Visitor as serde_core::de::Visitor>::visit_map+0x2ed>
   5d3bf:	e9 b5 04 00 00       	jmp    5d879 <<strategy_comm5::_::<impl serde_core::de::Deserialize for strategy_comm5::PhaseParams>::deserialize::__Visitor as serde_core::de::Visitor>::visit_map+0xd79>
   5d3c4:	48 8b 4c 24 70       	mov    0x70(%rsp),%rcx
   5d3c9:	48 8b 54 24 10       	mov    0x10(%rsp),%rdx
   5d3ce:	48 89 4a 60          	mov    %rcx,0x60(%rdx)
   5d3d2:	0f 10 44 24 60       	movups 0x60(%rsp),%xmm0
   5d3d7:	0f 11 42 50          	movups %xmm0,0x50(%rdx)
   5d3db:	0f 10 44 24 20       	movups 0x20(%rsp),%xmm0
   5d3e0:	0f 10 4c 24 30       	movups 0x30(%rsp),%xmm1
   5d3e5:	0f 10 54 24 40       	movups 0x40(%rsp),%xmm2
   5d3ea:	0f 10 5c 24 50       	movups 0x50(%rsp),%xmm3
   5d3ef:	0f 11 5a 40          	movups %xmm3,0x40(%rdx)
   5d3f3:	0f 11 52 30          	movups %xmm2,0x30(%rdx)
   5d3f7:	0f 11 4a 20          	movups %xmm1,0x20(%rdx)
   5d3fb:	0f 11 42 10          	movups %xmm0,0x10(%rdx)
   5d3ff:	48 89 42 08          	mov    %rax,0x8(%rdx)
   5d403:	e9 52 04 00 00       	jmp    5d85a <<strategy_comm5::_::<impl serde_core::de::Deserialize for strategy_comm5::PhaseParams>::deserialize::__Visitor as serde_core::de::Visitor>::visit_map+0xd5a>
   5d408:	48 8b 4c 24 70       	mov    0x70(%rsp),%rcx
   5d40d:	48 8b 54 24 10       	mov    0x10(%rsp),%rdx
   5d412:	48 89 4a 60          	mov    %rcx,0x60(%rdx)
   5d416:	0f 10 44 24 30       	movups 0x30(%rsp),%xmm0
   5d41b:	0f 10 4c 24 40       	movups 0x40(%rsp),%xmm1
   5d420:	0f 10 54 24 50       	movups 0x50(%rsp),%xmm2
   5d425:	0f 10 5c 24 60       	movups 0x60(%rsp),%xmm3
   5d42a:	0f 11 5a 50          	movups %xmm3,0x50(%rdx)
   5d42e:	0f 11 52 40          	movups %xmm2,0x40(%rdx)
   5d432:	0f 11 4a 30          	movups %xmm1,0x30(%rdx)
   5d436:	0f 11 42 20          	movups %xmm0,0x20(%rdx)
   5d43a:	48 89 42 08          	mov    %rax,0x8(%rdx)
   5d43e:	48 8b 84 24 c0 00 00 	mov    0xc0(%rsp),%rax
   5d445:	00 
   5d446:	48 89 42 10          	mov    %rax,0x10(%rdx)
   5d44a:	f2 0f 10 84 24 30 01 	movsd  0x130(%rsp),%xmm0
   5d451:	00 00 
   5d453:	e9 fd 03 00 00       	jmp    5d855 <<strategy_comm5::_::<impl serde_core::de::Deserialize for strategy_comm5::PhaseParams>::deserialize::__Visitor as serde_core::de::Visitor>::visit_map+0xd55>
   5d458:	48 8b 4c 24 70       	mov    0x70(%rsp),%rcx
   5d45d:	48 8b 54 24 10       	mov    0x10(%rsp),%rdx
   5d462:	48 89 4a 60          	mov    %rcx,0x60(%rdx)
   5d466:	0f 10 44 24 30       	movups 0x30(%rsp),%xmm0
   5d46b:	0f 10 4c 24 40       	movups 0x40(%rsp),%xmm1
   5d470:	0f 10 54 24 50       	movups 0x50(%rsp),%xmm2
   5d475:	0f 10 5c 24 60       	movups 0x60(%rsp),%xmm3
   5d47a:	0f 11 5a 50          	movups %xmm3,0x50(%rdx)
   5d47e:	0f 11 52 40          	movups %xmm2,0x40(%rdx)
   5d482:	0f 11 4a 30          	movups %xmm1,0x30(%rdx)
   5d486:	0f 11 42 20          	movups %xmm0,0x20(%rdx)
   5d48a:	48 89 42 08          	mov    %rax,0x8(%rdx)
   5d48e:	48 8b 84 24 c8 00 00 	mov    0xc8(%rsp),%rax
   5d495:	00 
   5d496:	48 89 42 10          	mov    %rax,0x10(%rdx)
   5d49a:	f2 0f 10 84 24 40 01 	movsd  0x140(%rsp),%xmm0
   5d4a1:	00 00 
   5d4a3:	e9 ad 03 00 00       	jmp    5d855 <<strategy_comm5::_::<impl serde_core::de::Deserialize for strategy_comm5::PhaseParams>::deserialize::__Visitor as serde_core::de::Visitor>::visit_map+0xd55>
   5d4a8:	48 8b 4c 24 70       	mov    0x70(%rsp),%rcx
   5d4ad:	48 8b 54 24 10       	mov    0x10(%rsp),%rdx
   5d4b2:	48 89 4a 60          	mov    %rcx,0x60(%rdx)
   5d4b6:	0f 10 44 24 30       	movups 0x30(%rsp),%xmm0
   5d4bb:	0f 10 4c 24 40       	movups 0x40(%rsp),%xmm1
   5d4c0:	0f 10 54 24 50       	movups 0x50(%rsp),%xmm2
   5d4c5:	0f 10 5c 24 60       	movups 0x60(%rsp),%xmm3
   5d4ca:	0f 11 5a 50          	movups %xmm3,0x50(%rdx)
   5d4ce:	0f 11 52 40          	movups %xmm2,0x40(%rdx)
   5d4d2:	0f 11 4a 30          	movups %xmm1,0x30(%rdx)
   5d4d6:	0f 11 42 20          	movups %xmm0,0x20(%rdx)
   5d4da:	48 89 42 08          	mov    %rax,0x8(%rdx)
   5d4de:	48 8b 84 24 90 00 00 	mov    0x90(%rsp),%rax
   5d4e5:	00 
   5d4e6:	48 89 42 10          	mov    %rax,0x10(%rdx)
   5d4ea:	f2 0f 10 84 24 00 01 	movsd  0x100(%rsp),%xmm0
   5d4f1:	00 00 
   5d4f3:	e9 5d 03 00 00       	jmp    5d855 <<strategy_comm5::_::<impl serde_core::de::Deserialize for strategy_comm5::PhaseParams>::deserialize::__Visitor as serde_core::de::Visitor>::visit_map+0xd55>
   5d4f8:	48 8b 4c 24 70       	mov    0x70(%rsp),%rcx
   5d4fd:	48 8b 54 24 10       	mov    0x10(%rsp),%rdx
   5d502:	48 89 4a 60          	mov    %rcx,0x60(%rdx)
   5d506:	0f 10 44 24 30       	movups 0x30(%rsp),%xmm0
   5d50b:	0f 10 4c 24 40       	movups 0x40(%rsp),%xmm1
   5d510:	0f 10 54 24 50       	movups 0x50(%rsp),%xmm2
   5d515:	0f 10 5c 24 60       	movups 0x60(%rsp),%xmm3
   5d51a:	0f 11 5a 50          	movups %xmm3,0x50(%rdx)
   5d51e:	0f 11 52 40          	movups %xmm2,0x40(%rdx)
   5d522:	0f 11 4a 30          	movups %xmm1,0x30(%rdx)
   5d526:	0f 11 42 20          	movups %xmm0,0x20(%rdx)
   5d52a:	48 89 42 08          	mov    %rax,0x8(%rdx)
   5d52e:	48 8b 84 24 b8 00 00 	mov    0xb8(%rsp),%rax
   5d535:	00 
   5d536:	48 89 42 10          	mov    %rax,0x10(%rdx)
   5d53a:	f2 0f 10 84 24 20 01 	movsd  0x120(%rsp),%xmm0
   5d541:	00 00 
   5d543:	e9 0d 03 00 00       	jmp    5d855 <<strategy_comm5::_::<impl serde_core::de::Deserialize for strategy_comm5::PhaseParams>::deserialize::__Visitor as serde_core::de::Visitor>::visit_map+0xd55>
   5d548:	48 8b 4c 24 70       	mov    0x70(%rsp),%rcx
   5d54d:	48 8b 54 24 10       	mov    0x10(%rsp),%rdx
   5d552:	48 89 4a 60          	mov    %rcx,0x60(%rdx)
   5d556:	0f 10 44 24 30       	movups 0x30(%rsp),%xmm0
   5d55b:	0f 10 4c 24 40       	movups 0x40(%rsp),%xmm1
   5d560:	0f 10 54 24 50       	movups 0x50(%rsp),%xmm2
   5d565:	0f 10 5c 24 60       	movups 0x60(%rsp),%xmm3
   5d56a:	0f 11 5a 50          	movups %xmm3,0x50(%rdx)
   5d56e:	0f 11 52 40          	movups %xmm2,0x40(%rdx)
   5d572:	0f 11 4a 30          	movups %xmm1,0x30(%rdx)
   5d576:	0f 11 42 20          	movups %xmm0,0x20(%rdx)
   5d57a:	48 89 42 08          	mov    %rax,0x8(%rdx)
   5d57e:	48 8b 84 24 a8 00 00 	mov    0xa8(%rsp),%rax
   5d585:	00 
   5d586:	48 89 42 10          	mov    %rax,0x10(%rdx)
   5d58a:	f2 0f 10 84 24 18 01 	movsd  0x118(%rsp),%xmm0
   5d591:	00 00 
   5d593:	e9 bd 02 00 00       	jmp    5d855 <<strategy_comm5::_::<impl serde_core::de::Deserialize for strategy_comm5::PhaseParams>::deserialize::__Visitor as serde_core::de::Visitor>::visit_map+0xd55>
   5d598:	48 8b 4c 24 70       	mov    0x70(%rsp),%rcx
   5d59d:	48 8b 54 24 10       	mov    0x10(%rsp),%rdx
   5d5a2:	48 89 4a 60          	mov    %rcx,0x60(%rdx)
   5d5a6:	0f 10 44 24 30       	movups 0x30(%rsp),%xmm0
   5d5ab:	0f 10 4c 24 40       	movups 0x40(%rsp),%xmm1
   5d5b0:	0f 10 54 24 50       	movups 0x50(%rsp),%xmm2
   5d5b5:	0f 10 5c 24 60       	movups 0x60(%rsp),%xmm3
   5d5ba:	0f 11 5a 50          	movups %xmm3,0x50(%rdx)
   5d5be:	0f 11 52 40          	movups %xmm2,0x40(%rdx)
   5d5c2:	0f 11 4a 30          	movups %xmm1,0x30(%rdx)
   5d5c6:	0f 11 42 20          	movups %xmm0,0x20(%rdx)
   5d5ca:	48 89 42 08          	mov    %rax,0x8(%rdx)
   5d5ce:	4c 89 6a 10          	mov    %r13,0x10(%rdx)
   5d5d2:	f2 0f 10 84 24 d8 00 	movsd  0xd8(%rsp),%xmm0
   5d5d9:	00 00 
   5d5db:	e9 75 02 00 00       	jmp    5d855 <<strategy_comm5::_::<impl serde_core::de::Deserialize for strategy_comm5::PhaseParams>::deserialize::__Visitor as serde_core::de::Visitor>::visit_map+0xd55>
   5d5e0:	48 8b 4c 24 70       	mov    0x70(%rsp),%rcx
   5d5e5:	48 8b 54 24 10       	mov    0x10(%rsp),%rdx
   5d5ea:	48 89 4a 60          	mov    %rcx,0x60(%rdx)
   5d5ee:	0f 10 44 24 30       	movups 0x30(%rsp),%xmm0
   5d5f3:	0f 10 4c 24 40       	movups 0x40(%rsp),%xmm1
   5d5f8:	0f 10 54 24 50       	movups 0x50(%rsp),%xmm2
   5d5fd:	0f 10 5c 24 60       	movups 0x60(%rsp),%xmm3
   5d602:	0f 11 5a 50          	movups %xmm3,0x50(%rdx)
   5d606:	0f 11 52 40          	movups %xmm2,0x40(%rdx)
   5d60a:	0f 11 4a 30          	movups %xmm1,0x30(%rdx)
   5d60e:	0f 11 42 20          	movups %xmm0,0x20(%rdx)
   5d612:	48 89 42 08          	mov    %rax,0x8(%rdx)
   5d616:	4c 89 7a 10          	mov    %r15,0x10(%rdx)
   5d61a:	f2 0f 10 84 24 e0 00 	movsd  0xe0(%rsp),%xmm0
   5d621:	00 00 
   5d623:	e9 2d 02 00 00       	jmp    5d855 <<strategy_comm5::_::<impl serde_core::de::Deserialize for strategy_comm5::PhaseParams>::deserialize::__Visitor as serde_core::de::Visitor>::visit_map+0xd55>
   5d628:	48 8b 4c 24 70       	mov    0x70(%rsp),%rcx
   5d62d:	48 8b 54 24 10       	mov    0x10(%rsp),%rdx
   5d632:	48 89 4a 60          	mov    %rcx,0x60(%rdx)
   5d636:	0f 10 44 24 30       	movups 0x30(%rsp),%xmm0
   5d63b:	0f 10 4c 24 40       	movups 0x40(%rsp),%xmm1
   5d640:	0f 10 54 24 50       	movups 0x50(%rsp),%xmm2
   5d645:	0f 10 5c 24 60       	movups 0x60(%rsp),%xmm3
   5d64a:	0f 11 5a 50          	movups %xmm3,0x50(%rdx)
   5d64e:	0f 11 52 40          	movups %xmm2,0x40(%rdx)
   5d652:	0f 11 4a 30          	movups %xmm1,0x30(%rdx)
   5d656:	0f 11 42 20          	movups %xmm0,0x20(%rdx)
   5d65a:	48 89 42 08          	mov    %rax,0x8(%rdx)
   5d65e:	48 8b 84 24 98 00 00 	mov    0x98(%rsp),%rax
   5d665:	00 
   5d666:	48 89 42 10          	mov    %rax,0x10(%rdx)
   5d66a:	f2 0f 10 84 24 08 01 	movsd  0x108(%rsp),%xmm0
   5d671:	00 00 
   5d673:	e9 dd 01 00 00       	jmp    5d855 <<strategy_comm5::_::<impl serde_core::de::Deserialize for strategy_comm5::PhaseParams>::deserialize::__Visitor as serde_core::de::Visitor>::visit_map+0xd55>
   5d678:	48 8b 4c 24 70       	mov    0x70(%rsp),%rcx
   5d67d:	48 8b 54 24 10       	mov    0x10(%rsp),%rdx
   5d682:	48 89 4a 60          	mov    %rcx,0x60(%rdx)
   5d686:	0f 10 44 24 30       	movups 0x30(%rsp),%xmm0
   5d68b:	0f 10 4c 24 40       	movups 0x40(%rsp),%xmm1
   5d690:	0f 10 54 24 50       	movups 0x50(%rsp),%xmm2
   5d695:	0f 10 5c 24 60       	movups 0x60(%rsp),%xmm3
   5d69a:	0f 11 5a 50          	movups %xmm3,0x50(%rdx)
   5d69e:	0f 11 52 40          	movups %xmm2,0x40(%rdx)
   5d6a2:	0f 11 4a 30          	movups %xmm1,0x30(%rdx)
   5d6a6:	0f 11 42 20          	movups %xmm0,0x20(%rdx)
   5d6aa:	48 89 42 08          	mov    %rax,0x8(%rdx)
   5d6ae:	48 8b 84 24 80 00 00 	mov    0x80(%rsp),%rax
   5d6b5:	00 
   5d6b6:	48 89 42 10          	mov    %rax,0x10(%rdx)
   5d6ba:	f2 0f 10 84 24 f0 00 	movsd  0xf0(%rsp),%xmm0
   5d6c1:	00 00 
   5d6c3:	e9 8d 01 00 00       	jmp    5d855 <<strategy_comm5::_::<impl serde_core::de::Deserialize for strategy_comm5::PhaseParams>::deserialize::__Visitor as serde_core::de::Visitor>::visit_map+0xd55>
   5d6c8:	48 8b 4c 24 70       	mov    0x70(%rsp),%rcx
   5d6cd:	48 8b 54 24 10       	mov    0x10(%rsp),%rdx
   5d6d2:	48 89 4a 60          	mov    %rcx,0x60(%rdx)
   5d6d6:	0f 10 44 24 30       	movups 0x30(%rsp),%xmm0
   5d6db:	0f 10 4c 24 40       	movups 0x40(%rsp),%xmm1
   5d6e0:	0f 10 54 24 50       	movups 0x50(%rsp),%xmm2
   5d6e5:	0f 10 5c 24 60       	movups 0x60(%rsp),%xmm3
   5d6ea:	0f 11 5a 50          	movups %xmm3,0x50(%rdx)
   5d6ee:	0f 11 52 40          	movups %xmm2,0x40(%rdx)
   5d6f2:	0f 11 4a 30          	movups %xmm1,0x30(%rdx)
   5d6f6:	0f 11 42 20          	movups %xmm0,0x20(%rdx)
   5d6fa:	48 89 42 08          	mov    %rax,0x8(%rdx)
   5d6fe:	4c 89 72 10          	mov    %r14,0x10(%rdx)
   5d702:	f2 0f 10 84 24 e8 00 	movsd  0xe8(%rsp),%xmm0
   5d709:	00 00 
   5d70b:	e9 45 01 00 00       	jmp    5d855 <<strategy_comm5::_::<impl serde_core::de::Deserialize for strategy_comm5::PhaseParams>::deserialize::__Visitor as serde_core::de::Visitor>::visit_map+0xd55>
   5d710:	48 8b 4c 24 70       	mov    0x70(%rsp),%rcx
   5d715:	48 8b 54 24 10       	mov    0x10(%rsp),%rdx
   5d71a:	48 89 4a 60          	mov    %rcx,0x60(%rdx)
   5d71e:	0f 10 44 24 30       	movups 0x30(%rsp),%xmm0
   5d723:	0f 10 4c 24 40       	movups 0x40(%rsp),%xmm1
   5d728:	0f 10 54 24 50       	movups 0x50(%rsp),%xmm2
   5d72d:	0f 10 5c 24 60       	movups 0x60(%rsp),%xmm3
   5d732:	0f 11 5a 50          	movups %xmm3,0x50(%rdx)
   5d736:	0f 11 52 40          	movups %xmm2,0x40(%rdx)
   5d73a:	0f 11 4a 30          	movups %xmm1,0x30(%rdx)
   5d73e:	0f 11 42 20          	movups %xmm0,0x20(%rdx)
   5d742:	48 89 42 08          	mov    %rax,0x8(%rdx)
   5d746:	48 8b 84 24 b0 00 00 	mov    0xb0(%rsp),%rax
   5d74d:	00 
   5d74e:	48 89 42 10          	mov    %rax,0x10(%rdx)
   5d752:	f2 0f 10 84 24 38 01 	movsd  0x138(%rsp),%xmm0
   5d759:	00 00 
   5d75b:	e9 f5 00 00 00       	jmp    5d855 <<strategy_comm5::_::<impl serde_core::de::Deserialize for strategy_comm5::PhaseParams>::deserialize::__Visitor as serde_core::de::Visitor>::visit_map+0xd55>
   5d760:	48 8b 4c 24 70       	mov    0x70(%rsp),%rcx
   5d765:	48 8b 54 24 10       	mov    0x10(%rsp),%rdx
   5d76a:	48 89 4a 60          	mov    %rcx,0x60(%rdx)
   5d76e:	0f 10 44 24 30       	movups 0x30(%rsp),%xmm0
   5d773:	0f 10 4c 24 40       	movups 0x40(%rsp),%xmm1
   5d778:	0f 10 54 24 50       	movups 0x50(%rsp),%xmm2
   5d77d:	0f 10 5c 24 60       	movups 0x60(%rsp),%xmm3
   5d782:	0f 11 5a 50          	movups %xmm3,0x50(%rdx)
   5d786:	0f 11 52 40          	movups %xmm2,0x40(%rdx)
   5d78a:	0f 11 4a 30          	movups %xmm1,0x30(%rdx)
   5d78e:	0f 11 42 20          	movups %xmm0,0x20(%rdx)
   5d792:	48 89 42 08          	mov    %rax,0x8(%rdx)
   5d796:	48 8b 84 24 88 00 00 	mov    0x88(%rsp),%rax
   5d79d:	00 
   5d79e:	48 89 42 10          	mov    %rax,0x10(%rdx)
   5d7a2:	f2 0f 10 84 24 f8 00 	movsd  0xf8(%rsp),%xmm0
   5d7a9:	00 00 
   5d7ab:	e9 a5 00 00 00       	jmp    5d855 <<strategy_comm5::_::<impl serde_core::de::Deserialize for strategy_comm5::PhaseParams>::deserialize::__Visitor as serde_core::de::Visitor>::visit_map+0xd55>
   5d7b0:	0f 10 44 24 38       	movups 0x38(%rsp),%xmm0
   5d7b5:	0f 10 4c 24 48       	movups 0x48(%rsp),%xmm1
   5d7ba:	0f 10 54 24 58       	movups 0x58(%rsp),%xmm2
   5d7bf:	0f 10 5c 24 68       	movups 0x68(%rsp),%xmm3
   5d7c4:	48 8b 54 24 10       	mov    0x10(%rsp),%rdx
   5d7c9:	0f 11 5a 58          	movups %xmm3,0x58(%rdx)
   5d7cd:	0f 11 52 48          	movups %xmm2,0x48(%rdx)
   5d7d1:	0f 11 4a 38          	movups %xmm1,0x38(%rdx)
   5d7d5:	0f 11 42 28          	movups %xmm0,0x28(%rdx)
   5d7d9:	48 8b 4c 24 78       	mov    0x78(%rsp),%rcx
   5d7de:	48 89 4a 10          	mov    %rcx,0x10(%rdx)
   5d7e2:	48 8b 8c 24 d0 00 00 	mov    0xd0(%rsp),%rcx
   5d7e9:	00 
   5d7ea:	48 89 4a 18          	mov    %rcx,0x18(%rdx)
   5d7ee:	48 8b 8c 24 28 01 00 	mov    0x128(%rsp),%rcx
   5d7f5:	00 
   5d7f6:	48 89 4a 20          	mov    %rcx,0x20(%rdx)
   5d7fa:	48 89 42 08          	mov    %rax,0x8(%rdx)
   5d7fe:	48 c7 02 02 00 00 00 	movq   $0x2,(%rdx)
   5d805:	e9 e3 f5 ff ff       	jmp    5cded <<strategy_comm5::_::<impl serde_core::de::Deserialize for strategy_comm5::PhaseParams>::deserialize::__Visitor as serde_core::de::Visitor>::visit_map+0x2ed>
   5d80a:	48 8b 4c 24 70       	mov    0x70(%rsp),%rcx
   5d80f:	48 8b 54 24 10       	mov    0x10(%rsp),%rdx
   5d814:	48 89 4a 60          	mov    %rcx,0x60(%rdx)
   5d818:	0f 10 44 24 30       	movups 0x30(%rsp),%xmm0
   5d81d:	0f 10 4c 24 40       	movups 0x40(%rsp),%xmm1
   5d822:	0f 10 54 24 50       	movups 0x50(%rsp),%xmm2
   5d827:	0f 10 5c 24 60       	movups 0x60(%rsp),%xmm3
   5d82c:	0f 11 5a 50          	movups %xmm3,0x50(%rdx)
   5d830:	0f 11 52 40          	movups %xmm2,0x40(%rdx)
   5d834:	0f 11 4a 30          	movups %xmm1,0x30(%rdx)
   5d838:	0f 11 42 20          	movups %xmm0,0x20(%rdx)
   5d83c:	48 89 42 08          	mov    %rax,0x8(%rdx)
   5d840:	48 8b 84 24 a0 00 00 	mov    0xa0(%rsp),%rax
   5d847:	00 
   5d848:	48 89 42 10          	mov    %rax,0x10(%rdx)
   5d84c:	f2 0f 10 84 24 10 01 	movsd  0x110(%rsp),%xmm0
   5d853:	00 00 
   5d855:	f2 0f 11 42 18       	movsd  %xmm0,0x18(%rdx)
   5d85a:	48 c7 02 02 00 00 00 	movq   $0x2,(%rdx)
   5d861:	48 b8 02 00 00 00 00 	movabs $0x8000000000000002,%rax
   5d868:	00 00 80 
   5d86b:	48 8b 74 24 78       	mov    0x78(%rsp),%rsi
   5d870:	48 39 c6             	cmp    %rax,%rsi
   5d873:	0f 8c 74 f5 ff ff    	jl     5cded <<strategy_comm5::_::<impl serde_core::de::Deserialize for strategy_comm5::PhaseParams>::deserialize::__Visitor as serde_core::de::Visitor>::visit_map+0x2ed>
   5d879:	48 85 f6             	test   %rsi,%rsi
   5d87c:	0f 84 6b f5 ff ff    	je     5cded <<strategy_comm5::_::<impl serde_core::de::Deserialize for strategy_comm5::PhaseParams>::deserialize::__Visitor as serde_core::de::Visitor>::visit_map+0x2ed>
   5d882:	ba 01 00 00 00       	mov    $0x1,%edx
   5d887:	48 8b bc 24 d0 00 00 	mov    0xd0(%rsp),%rdi
   5d88e:	00 
   5d88f:	48 81 c4 58 01 00 00 	add    $0x158,%rsp
   5d896:	5b                   	pop    %rbx
   5d897:	41 5c                	pop    %r12
   5d899:	41 5d                	pop    %r13
   5d89b:	41 5e                	pop    %r14
   5d89d:	41 5f                	pop    %r15
   5d89f:	5d                   	pop    %rbp
   5d8a0:	ff 25 d2 63 0a 00    	jmp    *0xa63d2(%rip)        # 103c78 <_DYNAMIC+0x218>
   5d8a6:	48 8d 35 9c c5 fb ff 	lea    -0x43a64(%rip),%rsi        # 19e49 <anon.8868ba55c3fc5525a110cabbb60004d5.195.llvm.6579149275953927878+0x5ab>
   5d8ad:	48 8d 7c 24 18       	lea    0x18(%rsp),%rdi
   5d8b2:	ba 0d 00 00 00       	mov    $0xd,%edx
   5d8b7:	e8 74 c6 01 00       	call   79f30 <serde_core::de::Error::duplicate_field>
   5d8bc:	e9 66 01 00 00       	jmp    5da27 <<strategy_comm5::_::<impl serde_core::de::Deserialize for strategy_comm5::PhaseParams>::deserialize::__Visitor as serde_core::de::Visitor>::visit_map+0xf27>
   5d8c1:	48 8d 35 5d c5 fb ff 	lea    -0x43aa3(%rip),%rsi        # 19e25 <anon.8868ba55c3fc5525a110cabbb60004d5.195.llvm.6579149275953927878+0x587>
   5d8c8:	48 8d 7c 24 18       	lea    0x18(%rsp),%rdi
   5d8cd:	ba 16 00 00 00       	mov    $0x16,%edx
   5d8d2:	e8 59 c6 01 00       	call   79f30 <serde_core::de::Error::duplicate_field>
   5d8d7:	e9 4b 01 00 00       	jmp    5da27 <<strategy_comm5::_::<impl serde_core::de::Deserialize for strategy_comm5::PhaseParams>::deserialize::__Visitor as serde_core::de::Visitor>::visit_map+0xf27>
   5d8dc:	48 8d 35 21 c5 fb ff 	lea    -0x43adf(%rip),%rsi        # 19e04 <anon.8868ba55c3fc5525a110cabbb60004d5.195.llvm.6579149275953927878+0x566>
   5d8e3:	48 8d 7c 24 18       	lea    0x18(%rsp),%rdi
   5d8e8:	ba 13 00 00 00       	mov    $0x13,%edx
   5d8ed:	e8 3e c6 01 00       	call   79f30 <serde_core::de::Error::duplicate_field>
   5d8f2:	e9 30 01 00 00       	jmp    5da27 <<strategy_comm5::_::<impl serde_core::de::Deserialize for strategy_comm5::PhaseParams>::deserialize::__Visitor as serde_core::de::Visitor>::visit_map+0xf27>
   5d8f7:	48 8d 35 38 c6 fb ff 	lea    -0x439c8(%rip),%rsi        # 19f36 <anon.8868ba55c3fc5525a110cabbb60004d5.195.llvm.6579149275953927878+0x698>
   5d8fe:	48 8d 7c 24 18       	lea    0x18(%rsp),%rdi
   5d903:	ba 14 00 00 00       	mov    $0x14,%edx
   5d908:	e8 23 c6 01 00       	call   79f30 <serde_core::de::Error::duplicate_field>
   5d90d:	e9 15 01 00 00       	jmp    5da27 <<strategy_comm5::_::<impl serde_core::de::Deserialize for strategy_comm5::PhaseParams>::deserialize::__Visitor as serde_core::de::Visitor>::visit_map+0xf27>
   5d912:	48 8d 35 45 c6 fb ff 	lea    -0x439bb(%rip),%rsi        # 19f5e <anon.8868ba55c3fc5525a110cabbb60004d5.195.llvm.6579149275953927878+0x6c0>
   5d919:	48 8d 7c 24 18       	lea    0x18(%rsp),%rdi
   5d91e:	ba 15 00 00 00       	mov    $0x15,%edx
   5d923:	e8 08 c6 01 00       	call   79f30 <serde_core::de::Error::duplicate_field>
   5d928:	e9 fa 00 00 00       	jmp    5da27 <<strategy_comm5::_::<impl serde_core::de::Deserialize for strategy_comm5::PhaseParams>::deserialize::__Visitor as serde_core::de::Visitor>::visit_map+0xf27>
   5d92d:	48 8d 35 ef c5 fb ff 	lea    -0x43a11(%rip),%rsi        # 19f23 <anon.8868ba55c3fc5525a110cabbb60004d5.195.llvm.6579149275953927878+0x685>
   5d934:	48 8d 7c 24 18       	lea    0x18(%rsp),%rdi
   5d939:	ba 13 00 00 00       	mov    $0x13,%edx
   5d93e:	e8 ed c5 01 00       	call   79f30 <serde_core::de::Error::duplicate_field>
   5d943:	e9 df 00 00 00       	jmp    5da27 <<strategy_comm5::_::<impl serde_core::de::Deserialize for strategy_comm5::PhaseParams>::deserialize::__Visitor as serde_core::de::Visitor>::visit_map+0xf27>
   5d948:	48 8d 35 64 c5 fb ff 	lea    -0x43a9c(%rip),%rsi        # 19eb3 <anon.8868ba55c3fc5525a110cabbb60004d5.195.llvm.6579149275953927878+0x615>
   5d94f:	48 8d 7c 24 18       	lea    0x18(%rsp),%rdi
   5d954:	ba 12 00 00 00       	mov    $0x12,%edx
   5d959:	e8 d2 c5 01 00       	call   79f30 <serde_core::de::Error::duplicate_field>
   5d95e:	e9 c4 00 00 00       	jmp    5da27 <<strategy_comm5::_::<impl serde_core::de::Deserialize for strategy_comm5::PhaseParams>::deserialize::__Visitor as serde_core::de::Visitor>::visit_map+0xf27>
   5d963:	48 8d 35 e0 c5 fb ff 	lea    -0x43a20(%rip),%rsi        # 19f4a <anon.8868ba55c3fc5525a110cabbb60004d5.195.llvm.6579149275953927878+0x6ac>
   5d96a:	48 8d 7c 24 18       	lea    0x18(%rsp),%rdi
   5d96f:	ba 14 00 00 00       	mov    $0x14,%edx
   5d974:	e8 b7 c5 01 00       	call   79f30 <serde_core::de::Error::duplicate_field>
   5d979:	e9 a9 00 00 00       	jmp    5da27 <<strategy_comm5::_::<impl serde_core::de::Deserialize for strategy_comm5::PhaseParams>::deserialize::__Visitor as serde_core::de::Visitor>::visit_map+0xf27>
   5d97e:	48 8d 35 64 c5 fb ff 	lea    -0x43a9c(%rip),%rsi        # 19ee9 <anon.8868ba55c3fc5525a110cabbb60004d5.195.llvm.6579149275953927878+0x64b>
   5d985:	48 8d 7c 24 18       	lea    0x18(%rsp),%rdi
   5d98a:	ba 12 00 00 00       	mov    $0x12,%edx
   5d98f:	e8 9c c5 01 00       	call   79f30 <serde_core::de::Error::duplicate_field>
   5d994:	e9 8e 00 00 00       	jmp    5da27 <<strategy_comm5::_::<impl serde_core::de::Deserialize for strategy_comm5::PhaseParams>::deserialize::__Visitor as serde_core::de::Visitor>::visit_map+0xf27>
   5d999:	48 8d 35 e3 c6 fb ff 	lea    -0x4391d(%rip),%rsi        # 1a083 <anon.8868ba55c3fc5525a110cabbb60004d5.195.llvm.6579149275953927878+0x7e5>
   5d9a0:	48 8d 7c 24 18       	lea    0x18(%rsp),%rdi
   5d9a5:	ba 0a 00 00 00       	mov    $0xa,%edx
   5d9aa:	e8 81 c5 01 00       	call   79f30 <serde_core::de::Error::duplicate_field>
   5d9af:	eb 76                	jmp    5da27 <<strategy_comm5::_::<impl serde_core::de::Deserialize for strategy_comm5::PhaseParams>::deserialize::__Visitor as serde_core::de::Visitor>::visit_map+0xf27>
   5d9b1:	48 8d 35 1f c5 fb ff 	lea    -0x43ae1(%rip),%rsi        # 19ed7 <anon.8868ba55c3fc5525a110cabbb60004d5.195.llvm.6579149275953927878+0x639>
   5d9b8:	48 8d 7c 24 18       	lea    0x18(%rsp),%rdi
   5d9bd:	ba 12 00 00 00       	mov    $0x12,%edx
   5d9c2:	e8 69 c5 01 00       	call   79f30 <serde_core::de::Error::duplicate_field>
   5d9c7:	eb 5e                	jmp    5da27 <<strategy_comm5::_::<impl serde_core::de::Deserialize for strategy_comm5::PhaseParams>::deserialize::__Visitor as serde_core::de::Visitor>::visit_map+0xf27>
   5d9c9:	48 8d 35 6b c4 fb ff 	lea    -0x43b95(%rip),%rsi        # 19e3b <anon.8868ba55c3fc5525a110cabbb60004d5.195.llvm.6579149275953927878+0x59d>
   5d9d0:	48 8d 7c 24 18       	lea    0x18(%rsp),%rdi
   5d9d5:	ba 0e 00 00 00       	mov    $0xe,%edx
   5d9da:	e8 51 c5 01 00       	call   79f30 <serde_core::de::Error::duplicate_field>
   5d9df:	eb 46                	jmp    5da27 <<strategy_comm5::_::<impl serde_core::de::Deserialize for strategy_comm5::PhaseParams>::deserialize::__Visitor as serde_core::de::Visitor>::visit_map+0xf27>
   5d9e1:	48 8d 35 dd c4 fb ff 	lea    -0x43b23(%rip),%rsi        # 19ec5 <anon.8868ba55c3fc5525a110cabbb60004d5.195.llvm.6579149275953927878+0x627>
   5d9e8:	48 8d 7c 24 18       	lea    0x18(%rsp),%rdi
   5d9ed:	ba 12 00 00 00       	mov    $0x12,%edx
   5d9f2:	e8 39 c5 01 00       	call   79f30 <serde_core::de::Error::duplicate_field>
   5d9f7:	eb 2e                	jmp    5da27 <<strategy_comm5::_::<impl serde_core::de::Deserialize for strategy_comm5::PhaseParams>::deserialize::__Visitor as serde_core::de::Visitor>::visit_map+0xf27>
   5d9f9:	48 8d 35 56 c4 fb ff 	lea    -0x43baa(%rip),%rsi        # 19e56 <anon.8868ba55c3fc5525a110cabbb60004d5.195.llvm.6579149275953927878+0x5b8>
   5da00:	48 8d 7c 24 18       	lea    0x18(%rsp),%rdi
   5da05:	ba 19 00 00 00       	mov    $0x19,%edx
   5da0a:	e8 21 c5 01 00       	call   79f30 <serde_core::de::Error::duplicate_field>
   5da0f:	eb 16                	jmp    5da27 <<strategy_comm5::_::<impl serde_core::de::Deserialize for strategy_comm5::PhaseParams>::deserialize::__Visitor as serde_core::de::Visitor>::visit_map+0xf27>
   5da11:	48 8d 35 ff c3 fb ff 	lea    -0x43c01(%rip),%rsi        # 19e17 <anon.8868ba55c3fc5525a110cabbb60004d5.195.llvm.6579149275953927878+0x579>
   5da18:	48 8d 7c 24 18       	lea    0x18(%rsp),%rdi
   5da1d:	ba 0e 00 00 00       	mov    $0xe,%edx
   5da22:	e8 09 c5 01 00       	call   79f30 <serde_core::de::Error::duplicate_field>
   5da27:	0f 10 44 24 68       	movups 0x68(%rsp),%xmm0
   5da2c:	48 8b 44 24 10       	mov    0x10(%rsp),%rax
   5da31:	0f 11 40 58          	movups %xmm0,0x58(%rax)
   5da35:	0f 10 44 24 58       	movups 0x58(%rsp),%xmm0
   5da3a:	0f 11 40 48          	movups %xmm0,0x48(%rax)
   5da3e:	0f 10 44 24 18       	movups 0x18(%rsp),%xmm0
   5da43:	0f 10 4c 24 28       	movups 0x28(%rsp),%xmm1
   5da48:	0f 10 54 24 38       	movups 0x38(%rsp),%xmm2
   5da4d:	0f 10 5c 24 48       	movups 0x48(%rsp),%xmm3
   5da52:	0f 11 58 38          	movups %xmm3,0x38(%rax)
   5da56:	0f 11 50 28          	movups %xmm2,0x28(%rax)
   5da5a:	0f 11 48 18          	movups %xmm1,0x18(%rax)
   5da5e:	0f 11 40 08          	movups %xmm0,0x8(%rax)
   5da62:	48 c7 00 02 00 00 00 	movq   $0x2,(%rax)
   5da69:	48 b8 02 00 00 00 00 	movabs $0x8000000000000002,%rax
   5da70:	00 00 80 
   5da73:	48 8b 74 24 78       	mov    0x78(%rsp),%rsi
   5da78:	48 39 c6             	cmp    %rax,%rsi
   5da7b:	0f 8c 6c f3 ff ff    	jl     5cded <<strategy_comm5::_::<impl serde_core::de::Deserialize for strategy_comm5::PhaseParams>::deserialize::__Visitor as serde_core::de::Visitor>::visit_map+0x2ed>
   5da81:	e9 f3 fd ff ff       	jmp    5d879 <<strategy_comm5::_::<impl serde_core::de::Deserialize for strategy_comm5::PhaseParams>::deserialize::__Visitor as serde_core::de::Visitor>::visit_map+0xd79>
   5da86:	eb 00                	jmp    5da88 <<strategy_comm5::_::<impl serde_core::de::Deserialize for strategy_comm5::PhaseParams>::deserialize::__Visitor as serde_core::de::Visitor>::visit_map+0xf88>
   5da88:	49 89 c7             	mov    %rax,%r15
   5da8b:	48 b8 02 00 00 00 00 	movabs $0x8000000000000002,%rax
   5da92:	00 00 80 
   5da95:	48 39 44 24 78       	cmp    %rax,0x78(%rsp)
   5da9a:	7c 08                	jl     5daa4 <<strategy_comm5::_::<impl serde_core::de::Deserialize for strategy_comm5::PhaseParams>::deserialize::__Visitor as serde_core::de::Visitor>::visit_map+0xfa4>
   5da9c:	48 83 7c 24 78 00    	cmpq   $0x0,0x78(%rsp)
   5daa2:	75 08                	jne    5daac <<strategy_comm5::_::<impl serde_core::de::Deserialize for strategy_comm5::PhaseParams>::deserialize::__Visitor as serde_core::de::Visitor>::visit_map+0xfac>
   5daa4:	4c 89 ff             	mov    %r15,%rdi
   5daa7:	e8 d4 ea 09 00       	call   fc580 <_Unwind_Resume@plt>
   5daac:	ba 01 00 00 00       	mov    $0x1,%edx
   5dab1:	48 8b bc 24 d0 00 00 	mov    0xd0(%rsp),%rdi
   5dab8:	00 
   5dab9:	48 8b 74 24 78       	mov    0x78(%rsp),%rsi
   5dabe:	ff 15 b4 61 0a 00    	call   *0xa61b4(%rip)        # 103c78 <_DYNAMIC+0x218>
   5dac4:	4c 89 ff             	mov    %r15,%rdi
   5dac7:	e8 b4 ea 09 00       	call   fc580 <_Unwind_Resume@plt>
   5dacc:	cc                   	int3   
   5dacd:	cc                   	int3   
   5dace:	cc                   	int3   
   5dacf:	cc                   	int3   
