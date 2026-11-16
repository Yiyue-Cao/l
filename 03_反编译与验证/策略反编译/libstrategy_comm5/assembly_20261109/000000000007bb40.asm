000000000007bb40 <strategy_comm5::__fb_plugin_impl::on_order>:
   7bb40:	55                   	push   %rbp
   7bb41:	41 57                	push   %r15
   7bb43:	41 56                	push   %r14
   7bb45:	41 55                	push   %r13
   7bb47:	41 54                	push   %r12
   7bb49:	53                   	push   %rbx
   7bb4a:	48 83 ec 78          	sub    $0x78,%rsp
   7bb4e:	48 89 54 24 58       	mov    %rdx,0x58(%rsp)
   7bb53:	48 89 f5             	mov    %rsi,%rbp
   7bb56:	48 8b 5e 18          	mov    0x18(%rsi),%rbx
   7bb5a:	b8 01 00 00 00       	mov    $0x1,%eax
   7bb5f:	48 85 db             	test   %rbx,%rbx
   7bb62:	74 55                	je     7bbb9 <strategy_comm5::__fb_plugin_impl::on_order+0x79>
   7bb64:	48 89 44 24 08       	mov    %rax,0x8(%rsp)
   7bb69:	48 89 df             	mov    %rbx,%rdi
   7bb6c:	ff 15 ae 84 08 00    	call   *0x884ae(%rip)        # 104020 <strlen@GLIBC_2.2.5>
   7bb72:	48 8d 50 01          	lea    0x1(%rax),%rdx
   7bb76:	48 8d 7c 24 18       	lea    0x18(%rsp),%rdi
   7bb7b:	48 89 de             	mov    %rbx,%rsi
   7bb7e:	ff 15 a4 84 08 00    	call   *0x884a4(%rip)        # 104028 <_DYNAMIC+0x5c8>
   7bb84:	44 0f b6 64 24 18    	movzbl 0x18(%rsp),%r12d
   7bb8a:	4c 8b 7c 24 28       	mov    0x28(%rsp),%r15
   7bb8f:	45 31 ed             	xor    %r13d,%r13d
   7bb92:	45 84 e4             	test   %r12b,%r12b
   7bb95:	4d 89 fe             	mov    %r15,%r14
   7bb98:	4d 0f 45 f5          	cmovne %r13,%r14
   7bb9c:	4d 85 f6             	test   %r14,%r14
   7bb9f:	79 2b                	jns    7bbcc <strategy_comm5::__fb_plugin_impl::on_order+0x8c>
   7bba1:	48 8d 15 08 2b 08 00 	lea    0x82b08(%rip),%rdx        # fe6b0 <anon.bebec81cbc1f308c0c8f86f4fc1fc7f5.25.llvm.975649267649338698>
   7bba8:	4c 89 ef             	mov    %r13,%rdi
   7bbab:	4c 89 f6             	mov    %r14,%rsi
   7bbae:	ff 15 24 81 08 00    	call   *0x88124(%rip)        # 103cd8 <_DYNAMIC+0x278>
   7bbb4:	e9 33 01 00 00       	jmp    7bcec <strategy_comm5::__fb_plugin_impl::on_order+0x1ac>
   7bbb9:	48 89 44 24 08       	mov    %rax,0x8(%rsp)
   7bbbe:	45 31 ff             	xor    %r15d,%r15d
   7bbc1:	41 bd 01 00 00 00    	mov    $0x1,%r13d
   7bbc7:	45 31 f6             	xor    %r14d,%r14d
   7bbca:	eb 55                	jmp    7bc21 <strategy_comm5::__fb_plugin_impl::on_order+0xe1>
   7bbcc:	48 8b 5c 24 20       	mov    0x20(%rsp),%rbx
   7bbd1:	b8 01 00 00 00       	mov    $0x1,%eax
   7bbd6:	74 29                	je     7bc01 <strategy_comm5::__fb_plugin_impl::on_order+0xc1>
   7bbd8:	ff 15 ba 80 08 00    	call   *0x880ba(%rip)        # 103c98 <_DYNAMIC+0x238>
   7bbde:	41 bd 01 00 00 00    	mov    $0x1,%r13d
   7bbe4:	be 01 00 00 00       	mov    $0x1,%esi
   7bbe9:	4c 89 f7             	mov    %r14,%rdi
   7bbec:	ff 15 7e 80 08 00    	call   *0x8807e(%rip)        # 103c70 <_DYNAMIC+0x210>
   7bbf2:	48 85 c0             	test   %rax,%rax
   7bbf5:	74 aa                	je     7bba1 <strategy_comm5::__fb_plugin_impl::on_order+0x61>
   7bbf7:	49 89 c5             	mov    %rax,%r13
   7bbfa:	b8 01 00 00 00       	mov    $0x1,%eax
   7bbff:	eb 09                	jmp    7bc0a <strategy_comm5::__fb_plugin_impl::on_order+0xca>
   7bc01:	45 31 ff             	xor    %r15d,%r15d
   7bc04:	41 bd 01 00 00 00    	mov    $0x1,%r13d
   7bc0a:	41 f6 c4 01          	test   $0x1,%r12b
   7bc0e:	48 0f 45 d8          	cmovne %rax,%rbx
   7bc12:	4c 89 ef             	mov    %r13,%rdi
   7bc15:	48 89 de             	mov    %rbx,%rsi
   7bc18:	4c 89 f2             	mov    %r14,%rdx
   7bc1b:	ff 15 a7 80 08 00    	call   *0x880a7(%rip)        # 103cc8 <memcpy@GLIBC_2.14>
   7bc21:	4c 89 7c 24 60       	mov    %r15,0x60(%rsp)
   7bc26:	4c 89 6c 24 68       	mov    %r13,0x68(%rsp)
   7bc2b:	4c 89 74 24 70       	mov    %r14,0x70(%rsp)
   7bc30:	48 8b 5d 20          	mov    0x20(%rbp),%rbx
   7bc34:	48 85 db             	test   %rbx,%rbx
   7bc37:	4c 89 6c 24 10       	mov    %r13,0x10(%rsp)
   7bc3c:	74 4e                	je     7bc8c <strategy_comm5::__fb_plugin_impl::on_order+0x14c>
   7bc3e:	48 89 df             	mov    %rbx,%rdi
   7bc41:	ff 15 d9 83 08 00    	call   *0x883d9(%rip)        # 104020 <strlen@GLIBC_2.2.5>
   7bc47:	48 8d 50 01          	lea    0x1(%rax),%rdx
   7bc4b:	48 8d 7c 24 18       	lea    0x18(%rsp),%rdi
   7bc50:	48 89 de             	mov    %rbx,%rsi
   7bc53:	ff 15 cf 83 08 00    	call   *0x883cf(%rip)        # 104028 <_DYNAMIC+0x5c8>
   7bc59:	44 0f b6 6c 24 18    	movzbl 0x18(%rsp),%r13d
   7bc5f:	4c 8b 74 24 28       	mov    0x28(%rsp),%r14
   7bc64:	45 31 e4             	xor    %r12d,%r12d
   7bc67:	45 84 ed             	test   %r13b,%r13b
   7bc6a:	4c 89 34 24          	mov    %r14,(%rsp)
   7bc6e:	4d 0f 45 f4          	cmovne %r12,%r14
   7bc72:	4d 85 f6             	test   %r14,%r14
   7bc75:	79 77                	jns    7bcee <strategy_comm5::__fb_plugin_impl::on_order+0x1ae>
   7bc77:	48 8d 15 32 2a 08 00 	lea    0x82a32(%rip),%rdx        # fe6b0 <anon.bebec81cbc1f308c0c8f86f4fc1fc7f5.25.llvm.975649267649338698>
   7bc7e:	4c 89 e7             	mov    %r12,%rdi
   7bc81:	4c 89 f6             	mov    %r14,%rsi
   7bc84:	ff 15 4e 80 08 00    	call   *0x8804e(%rip)        # 103cd8 <_DYNAMIC+0x278>
   7bc8a:	eb 60                	jmp    7bcec <strategy_comm5::__fb_plugin_impl::on_order+0x1ac>
   7bc8c:	48 c7 04 24 00 00 00 	movq   $0x0,(%rsp)
   7bc93:	00 
   7bc94:	48 8b 5d 28          	mov    0x28(%rbp),%rbx
   7bc98:	48 85 db             	test   %rbx,%rbx
   7bc9b:	0f 84 f3 00 00 00    	je     7bd94 <strategy_comm5::__fb_plugin_impl::on_order+0x254>
   7bca1:	48 89 df             	mov    %rbx,%rdi
   7bca4:	ff 15 76 83 08 00    	call   *0x88376(%rip)        # 104020 <strlen@GLIBC_2.2.5>
   7bcaa:	48 8d 50 01          	lea    0x1(%rax),%rdx
   7bcae:	48 8d 7c 24 18       	lea    0x18(%rsp),%rdi
   7bcb3:	48 89 de             	mov    %rbx,%rsi
   7bcb6:	ff 15 6c 83 08 00    	call   *0x8836c(%rip)        # 104028 <_DYNAMIC+0x5c8>
   7bcbc:	44 0f b6 6c 24 18    	movzbl 0x18(%rsp),%r13d
   7bcc2:	48 8b 5c 24 28       	mov    0x28(%rsp),%rbx
   7bcc7:	45 31 e4             	xor    %r12d,%r12d
   7bcca:	45 84 ed             	test   %r13b,%r13b
   7bccd:	48 89 dd             	mov    %rbx,%rbp
   7bcd0:	49 0f 45 ec          	cmovne %r12,%rbp
   7bcd4:	48 85 ed             	test   %rbp,%rbp
   7bcd7:	79 4e                	jns    7bd27 <strategy_comm5::__fb_plugin_impl::on_order+0x1e7>
   7bcd9:	48 8d 15 d0 29 08 00 	lea    0x829d0(%rip),%rdx        # fe6b0 <anon.bebec81cbc1f308c0c8f86f4fc1fc7f5.25.llvm.975649267649338698>
   7bce0:	4c 89 e7             	mov    %r12,%rdi
   7bce3:	48 89 ee             	mov    %rbp,%rsi
   7bce6:	ff 15 ec 7f 08 00    	call   *0x87fec(%rip)        # 103cd8 <_DYNAMIC+0x278>
   7bcec:	0f 0b                	ud2    
   7bcee:	48 8b 5c 24 20       	mov    0x20(%rsp),%rbx
   7bcf3:	b8 01 00 00 00       	mov    $0x1,%eax
   7bcf8:	74 62                	je     7bd5c <strategy_comm5::__fb_plugin_impl::on_order+0x21c>
   7bcfa:	ff 15 98 7f 08 00    	call   *0x87f98(%rip)        # 103c98 <_DYNAMIC+0x238>
   7bd00:	41 bc 01 00 00 00    	mov    $0x1,%r12d
   7bd06:	be 01 00 00 00       	mov    $0x1,%esi
   7bd0b:	4c 89 f7             	mov    %r14,%rdi
   7bd0e:	ff 15 5c 7f 08 00    	call   *0x87f5c(%rip)        # 103c70 <_DYNAMIC+0x210>
   7bd14:	48 85 c0             	test   %rax,%rax
   7bd17:	0f 84 5a ff ff ff    	je     7bc77 <strategy_comm5::__fb_plugin_impl::on_order+0x137>
   7bd1d:	48 89 c7             	mov    %rax,%rdi
   7bd20:	b8 01 00 00 00       	mov    $0x1,%eax
   7bd25:	eb 42                	jmp    7bd69 <strategy_comm5::__fb_plugin_impl::on_order+0x229>
   7bd27:	4c 8b 74 24 20       	mov    0x20(%rsp),%r14
   7bd2c:	b8 01 00 00 00       	mov    $0x1,%eax
   7bd31:	74 6b                	je     7bd9e <strategy_comm5::__fb_plugin_impl::on_order+0x25e>
   7bd33:	ff 15 5f 7f 08 00    	call   *0x87f5f(%rip)        # 103c98 <_DYNAMIC+0x238>
   7bd39:	41 bc 01 00 00 00    	mov    $0x1,%r12d
   7bd3f:	be 01 00 00 00       	mov    $0x1,%esi
   7bd44:	48 89 ef             	mov    %rbp,%rdi
   7bd47:	ff 15 23 7f 08 00    	call   *0x87f23(%rip)        # 103c70 <_DYNAMIC+0x210>
   7bd4d:	48 85 c0             	test   %rax,%rax
   7bd50:	74 87                	je     7bcd9 <strategy_comm5::__fb_plugin_impl::on_order+0x199>
   7bd52:	49 89 c4             	mov    %rax,%r12
   7bd55:	b8 01 00 00 00       	mov    $0x1,%eax
   7bd5a:	eb 4a                	jmp    7bda6 <strategy_comm5::__fb_plugin_impl::on_order+0x266>
   7bd5c:	48 c7 04 24 00 00 00 	movq   $0x0,(%rsp)
   7bd63:	00 
   7bd64:	bf 01 00 00 00       	mov    $0x1,%edi
   7bd69:	41 f6 c5 01          	test   $0x1,%r13b
   7bd6d:	48 0f 45 d8          	cmovne %rax,%rbx
   7bd71:	48 89 7c 24 08       	mov    %rdi,0x8(%rsp)
   7bd76:	48 89 de             	mov    %rbx,%rsi
   7bd79:	4c 89 f2             	mov    %r14,%rdx
   7bd7c:	ff 15 46 7f 08 00    	call   *0x87f46(%rip)        # 103cc8 <memcpy@GLIBC_2.14>
   7bd82:	4c 8b 6c 24 10       	mov    0x10(%rsp),%r13
   7bd87:	48 8b 5d 28          	mov    0x28(%rbp),%rbx
   7bd8b:	48 85 db             	test   %rbx,%rbx
   7bd8e:	0f 85 0d ff ff ff    	jne    7bca1 <strategy_comm5::__fb_plugin_impl::on_order+0x161>
   7bd94:	41 bc 01 00 00 00    	mov    $0x1,%r12d
   7bd9a:	31 db                	xor    %ebx,%ebx
   7bd9c:	eb 24                	jmp    7bdc2 <strategy_comm5::__fb_plugin_impl::on_order+0x282>
   7bd9e:	31 db                	xor    %ebx,%ebx
   7bda0:	41 bc 01 00 00 00    	mov    $0x1,%r12d
   7bda6:	41 f6 c5 01          	test   $0x1,%r13b
   7bdaa:	4c 0f 45 f0          	cmovne %rax,%r14
   7bdae:	4c 89 e7             	mov    %r12,%rdi
   7bdb1:	4c 89 f6             	mov    %r14,%rsi
   7bdb4:	48 89 ea             	mov    %rbp,%rdx
   7bdb7:	ff 15 0b 7f 08 00    	call   *0x87f0b(%rip)        # 103cc8 <memcpy@GLIBC_2.14>
   7bdbd:	4c 8b 6c 24 10       	mov    0x10(%rsp),%r13
   7bdc2:	48 8b 44 24 58       	mov    0x58(%rsp),%rax
   7bdc7:	48 89 44 24 48       	mov    %rax,0x48(%rsp)
   7bdcc:	48 c7 44 24 50 00 00 	movq   $0x0,0x50(%rsp)
   7bdd3:	00 00 
   7bdd5:	48 b8 00 00 00 00 00 	movabs $0x8000000000000000,%rax
   7bddc:	00 00 80 
   7bddf:	48 89 44 24 18       	mov    %rax,0x18(%rsp)
   7bde4:	48 89 44 24 30       	mov    %rax,0x30(%rsp)
   7bde9:	48 8d 7c 24 18       	lea    0x18(%rsp),%rdi
   7bdee:	e8 3d ea ff ff       	call   7a830 <core::ptr::drop_in_place<future_backtest_sdk::context::StrategyContext>>
   7bdf3:	4d 85 ff             	test   %r15,%r15
   7bdf6:	74 11                	je     7be09 <strategy_comm5::__fb_plugin_impl::on_order+0x2c9>
   7bdf8:	ba 01 00 00 00       	mov    $0x1,%edx
   7bdfd:	4c 89 ef             	mov    %r13,%rdi
   7be00:	4c 89 fe             	mov    %r15,%rsi
   7be03:	ff 15 6f 7e 08 00    	call   *0x87e6f(%rip)        # 103c78 <_DYNAMIC+0x218>
   7be09:	48 8b 34 24          	mov    (%rsp),%rsi
   7be0d:	48 85 f6             	test   %rsi,%rsi
   7be10:	74 10                	je     7be22 <strategy_comm5::__fb_plugin_impl::on_order+0x2e2>
   7be12:	ba 01 00 00 00       	mov    $0x1,%edx
   7be17:	48 8b 7c 24 08       	mov    0x8(%rsp),%rdi
   7be1c:	ff 15 56 7e 08 00    	call   *0x87e56(%rip)        # 103c78 <_DYNAMIC+0x218>
   7be22:	48 85 db             	test   %rbx,%rbx
   7be25:	74 11                	je     7be38 <strategy_comm5::__fb_plugin_impl::on_order+0x2f8>
   7be27:	ba 01 00 00 00       	mov    $0x1,%edx
   7be2c:	4c 89 e7             	mov    %r12,%rdi
   7be2f:	48 89 de             	mov    %rbx,%rsi
   7be32:	ff 15 40 7e 08 00    	call   *0x87e40(%rip)        # 103c78 <_DYNAMIC+0x218>
   7be38:	31 c0                	xor    %eax,%eax
   7be3a:	48 83 c4 78          	add    $0x78,%rsp
   7be3e:	5b                   	pop    %rbx
   7be3f:	41 5c                	pop    %r12
   7be41:	41 5d                	pop    %r13
   7be43:	41 5e                	pop    %r14
   7be45:	41 5f                	pop    %r15
   7be47:	5d                   	pop    %rbp
   7be48:	c3                   	ret    
   7be49:	48 8b 34 24          	mov    (%rsp),%rsi
   7be4d:	48 85 f6             	test   %rsi,%rsi
   7be50:	74 10                	je     7be62 <strategy_comm5::__fb_plugin_impl::on_order+0x322>
   7be52:	ba 01 00 00 00       	mov    $0x1,%edx
   7be57:	48 8b 7c 24 08       	mov    0x8(%rsp),%rdi
   7be5c:	ff 15 16 7e 08 00    	call   *0x87e16(%rip)        # 103c78 <_DYNAMIC+0x218>
   7be62:	48 8d 7c 24 60       	lea    0x60(%rsp),%rdi
   7be67:	e8 b4 e5 ff ff       	call   7a420 <_ZN4core3ptr42drop_in_place$LT$alloc..string..String$GT$17h33f984ec36173dd5E.llvm.975649267649338698>
   7be6c:	ff 15 96 81 08 00    	call   *0x88196(%rip)        # 104008 <_DYNAMIC+0x5a8>
   7be72:	48 8d 7c 24 60       	lea    0x60(%rsp),%rdi
   7be77:	e8 a4 e5 ff ff       	call   7a420 <_ZN4core3ptr42drop_in_place$LT$alloc..string..String$GT$17h33f984ec36173dd5E.llvm.975649267649338698>
   7be7c:	ff 15 86 81 08 00    	call   *0x88186(%rip)        # 104008 <_DYNAMIC+0x5a8>
   7be82:	ff 15 80 81 08 00    	call   *0x88180(%rip)        # 104008 <_DYNAMIC+0x5a8>
   7be88:	cc                   	int3   
   7be89:	cc                   	int3   
   7be8a:	cc                   	int3   
   7be8b:	cc                   	int3   
   7be8c:	cc                   	int3   
   7be8d:	cc                   	int3   
   7be8e:	cc                   	int3   
   7be8f:	cc                   	int3   
