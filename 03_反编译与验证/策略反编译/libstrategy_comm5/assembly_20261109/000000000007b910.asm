000000000007b910 <strategy_comm5::__fb_plugin_impl::on_depth>:
   7b910:	41 56                	push   %r14
   7b912:	53                   	push   %rbx
   7b913:	48 81 ec 98 01 00 00 	sub    $0x198,%rsp
   7b91a:	49 89 d6             	mov    %rdx,%r14
   7b91d:	48 89 fb             	mov    %rdi,%rbx
   7b920:	48 8d bc 24 90 00 00 	lea    0x90(%rsp),%rdi
   7b927:	00 
   7b928:	ff 15 ea 86 08 00    	call   *0x886ea(%rip)        # 104018 <_DYNAMIC+0x5b8>
   7b92e:	4c 89 b4 24 80 00 00 	mov    %r14,0x80(%rsp)
   7b935:	00 
   7b936:	48 c7 84 24 88 00 00 	movq   $0x0,0x88(%rsp)
   7b93d:	00 00 00 00 00 
   7b942:	48 b8 00 00 00 00 00 	movabs $0x8000000000000000,%rax
   7b949:	00 00 80 
   7b94c:	48 89 44 24 50       	mov    %rax,0x50(%rsp)
   7b951:	48 89 44 24 68       	mov    %rax,0x68(%rsp)
   7b956:	48 8d b4 24 90 00 00 	lea    0x90(%rsp),%rsi
   7b95d:	00 
   7b95e:	48 8d 54 24 50       	lea    0x50(%rsp),%rdx
   7b963:	48 89 df             	mov    %rbx,%rdi
   7b966:	e8 15 8f fc ff       	call   44880 <<strategy_comm5::StrategyComm5 as future_backtest_sdk::plugin::StrategyPlugin>::on_depth>
   7b96b:	48 85 c0             	test   %rax,%rax
   7b96e:	74 69                	je     7b9d9 <strategy_comm5::__fb_plugin_impl::on_depth+0xc9>
   7b970:	48 89 44 24 08       	mov    %rax,0x8(%rsp)
   7b975:	48 8d 44 24 08       	lea    0x8(%rsp),%rax
   7b97a:	48 89 44 24 10       	mov    %rax,0x10(%rsp)
   7b97f:	48 8b 05 6a 86 08 00 	mov    0x8866a(%rip),%rax        # 103ff0 <_DYNAMIC+0x590>
   7b986:	48 89 44 24 18       	mov    %rax,0x18(%rsp)
   7b98b:	48 8d 05 c6 2d 08 00 	lea    0x82dc6(%rip),%rax        # fe758 <anon.bebec81cbc1f308c0c8f86f4fc1fc7f5.26.llvm.975649267649338698+0x90>
   7b992:	48 89 44 24 20       	mov    %rax,0x20(%rsp)
   7b997:	48 c7 44 24 28 02 00 	movq   $0x2,0x28(%rsp)
   7b99e:	00 00 
   7b9a0:	48 c7 44 24 40 00 00 	movq   $0x0,0x40(%rsp)
   7b9a7:	00 00 
   7b9a9:	48 8d 44 24 10       	lea    0x10(%rsp),%rax
   7b9ae:	48 89 44 24 30       	mov    %rax,0x30(%rsp)
   7b9b3:	48 c7 44 24 38 01 00 	movq   $0x1,0x38(%rsp)
   7b9ba:	00 00 
   7b9bc:	48 8d 7c 24 20       	lea    0x20(%rsp),%rdi
   7b9c1:	ff 15 31 86 08 00    	call   *0x88631(%rip)        # 103ff8 <_DYNAMIC+0x598>
   7b9c7:	48 8d 7c 24 08       	lea    0x8(%rsp),%rdi
   7b9cc:	ff 15 2e 86 08 00    	call   *0x8862e(%rip)        # 104000 <_DYNAMIC+0x5a0>
   7b9d2:	bb ff ff ff ff       	mov    $0xffffffff,%ebx
   7b9d7:	eb 02                	jmp    7b9db <strategy_comm5::__fb_plugin_impl::on_depth+0xcb>
   7b9d9:	31 db                	xor    %ebx,%ebx
   7b9db:	48 8d 7c 24 50       	lea    0x50(%rsp),%rdi
   7b9e0:	e8 4b ee ff ff       	call   7a830 <core::ptr::drop_in_place<future_backtest_sdk::context::StrategyContext>>
   7b9e5:	48 8b b4 24 b0 00 00 	mov    0xb0(%rsp),%rsi
   7b9ec:	00 
   7b9ed:	48 85 f6             	test   %rsi,%rsi
   7b9f0:	74 13                	je     7ba05 <strategy_comm5::__fb_plugin_impl::on_depth+0xf5>
   7b9f2:	48 8b bc 24 b8 00 00 	mov    0xb8(%rsp),%rdi
   7b9f9:	00 
   7b9fa:	ba 01 00 00 00       	mov    $0x1,%edx
   7b9ff:	ff 15 73 82 08 00    	call   *0x88273(%rip)        # 103c78 <_DYNAMIC+0x218>
   7ba05:	89 d8                	mov    %ebx,%eax
   7ba07:	48 81 c4 98 01 00 00 	add    $0x198,%rsp
   7ba0e:	5b                   	pop    %rbx
   7ba0f:	41 5e                	pop    %r14
   7ba11:	c3                   	ret    
   7ba12:	48 8d 7c 24 08       	lea    0x8(%rsp),%rdi
   7ba17:	ff 15 e3 85 08 00    	call   *0x885e3(%rip)        # 104000 <_DYNAMIC+0x5a0>
   7ba1d:	eb 0c                	jmp    7ba2b <strategy_comm5::__fb_plugin_impl::on_depth+0x11b>
   7ba1f:	ff 15 2b 83 08 00    	call   *0x8832b(%rip)        # 103d50 <_DYNAMIC+0x2f0>
   7ba25:	ff 15 dd 85 08 00    	call   *0x885dd(%rip)        # 104008 <_DYNAMIC+0x5a8>
   7ba2b:	48 8d 7c 24 50       	lea    0x50(%rsp),%rdi
   7ba30:	e8 fb ed ff ff       	call   7a830 <core::ptr::drop_in_place<future_backtest_sdk::context::StrategyContext>>
   7ba35:	48 8b bc 24 b0 00 00 	mov    0xb0(%rsp),%rdi
   7ba3c:	00 
   7ba3d:	48 8b b4 24 b8 00 00 	mov    0xb8(%rsp),%rsi
   7ba44:	00 
   7ba45:	e8 c6 ed ff ff       	call   7a810 <core::ptr::drop_in_place<future_backtest_sdk::types::MarketDepth>>
   7ba4a:	ff 15 b8 85 08 00    	call   *0x885b8(%rip)        # 104008 <_DYNAMIC+0x5a8>
