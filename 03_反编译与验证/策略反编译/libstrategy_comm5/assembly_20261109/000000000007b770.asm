000000000007b770 <strategy_comm5::__fb_plugin_impl::on_signal>:
   7b770:	41 56                	push   %r14
   7b772:	53                   	push   %rbx
   7b773:	48 81 ec 28 01 00 00 	sub    $0x128,%rsp
   7b77a:	49 89 d6             	mov    %rdx,%r14
   7b77d:	48 89 fb             	mov    %rdi,%rbx
   7b780:	48 8d bc 24 90 00 00 	lea    0x90(%rsp),%rdi
   7b787:	00 
   7b788:	ff 15 82 88 08 00    	call   *0x88882(%rip)        # 104010 <_DYNAMIC+0x5b0>
   7b78e:	4c 89 b4 24 80 00 00 	mov    %r14,0x80(%rsp)
   7b795:	00 
   7b796:	48 c7 84 24 88 00 00 	movq   $0x0,0x88(%rsp)
   7b79d:	00 00 00 00 00 
   7b7a2:	48 b8 00 00 00 00 00 	movabs $0x8000000000000000,%rax
   7b7a9:	00 00 80 
   7b7ac:	48 89 44 24 50       	mov    %rax,0x50(%rsp)
   7b7b1:	48 89 44 24 68       	mov    %rax,0x68(%rsp)
   7b7b6:	48 8d b4 24 90 00 00 	lea    0x90(%rsp),%rsi
   7b7bd:	00 
   7b7be:	48 8d 54 24 50       	lea    0x50(%rsp),%rdx
   7b7c3:	48 89 df             	mov    %rbx,%rdi
   7b7c6:	e8 45 3b fc ff       	call   3f310 <<strategy_comm5::StrategyComm5 as future_backtest_sdk::plugin::StrategyPlugin>::on_signal>
   7b7cb:	48 85 c0             	test   %rax,%rax
   7b7ce:	74 69                	je     7b839 <strategy_comm5::__fb_plugin_impl::on_signal+0xc9>
   7b7d0:	48 89 44 24 08       	mov    %rax,0x8(%rsp)
   7b7d5:	48 8d 44 24 08       	lea    0x8(%rsp),%rax
   7b7da:	48 89 44 24 10       	mov    %rax,0x10(%rsp)
   7b7df:	48 8b 05 0a 88 08 00 	mov    0x8880a(%rip),%rax        # 103ff0 <_DYNAMIC+0x590>
   7b7e6:	48 89 44 24 18       	mov    %rax,0x18(%rsp)
   7b7eb:	48 8d 05 46 2f 08 00 	lea    0x82f46(%rip),%rax        # fe738 <anon.bebec81cbc1f308c0c8f86f4fc1fc7f5.26.llvm.975649267649338698+0x70>
   7b7f2:	48 89 44 24 20       	mov    %rax,0x20(%rsp)
   7b7f7:	48 c7 44 24 28 02 00 	movq   $0x2,0x28(%rsp)
   7b7fe:	00 00 
   7b800:	48 c7 44 24 40 00 00 	movq   $0x0,0x40(%rsp)
   7b807:	00 00 
   7b809:	48 8d 44 24 10       	lea    0x10(%rsp),%rax
   7b80e:	48 89 44 24 30       	mov    %rax,0x30(%rsp)
   7b813:	48 c7 44 24 38 01 00 	movq   $0x1,0x38(%rsp)
   7b81a:	00 00 
   7b81c:	48 8d 7c 24 20       	lea    0x20(%rsp),%rdi
   7b821:	ff 15 d1 87 08 00    	call   *0x887d1(%rip)        # 103ff8 <_DYNAMIC+0x598>
   7b827:	48 8d 7c 24 08       	lea    0x8(%rsp),%rdi
   7b82c:	ff 15 ce 87 08 00    	call   *0x887ce(%rip)        # 104000 <_DYNAMIC+0x5a0>
   7b832:	bb ff ff ff ff       	mov    $0xffffffff,%ebx
   7b837:	eb 02                	jmp    7b83b <strategy_comm5::__fb_plugin_impl::on_signal+0xcb>
   7b839:	31 db                	xor    %ebx,%ebx
   7b83b:	48 8d 7c 24 50       	lea    0x50(%rsp),%rdi
   7b840:	e8 eb ef ff ff       	call   7a830 <core::ptr::drop_in_place<future_backtest_sdk::context::StrategyContext>>
   7b845:	48 8b b4 24 90 00 00 	mov    0x90(%rsp),%rsi
   7b84c:	00 
   7b84d:	48 85 f6             	test   %rsi,%rsi
   7b850:	74 13                	je     7b865 <strategy_comm5::__fb_plugin_impl::on_signal+0xf5>
   7b852:	48 8b bc 24 98 00 00 	mov    0x98(%rsp),%rdi
   7b859:	00 
   7b85a:	ba 01 00 00 00       	mov    $0x1,%edx
   7b85f:	ff 15 13 84 08 00    	call   *0x88413(%rip)        # 103c78 <_DYNAMIC+0x218>
   7b865:	48 8b b4 24 a8 00 00 	mov    0xa8(%rsp),%rsi
   7b86c:	00 
   7b86d:	48 85 f6             	test   %rsi,%rsi
   7b870:	74 13                	je     7b885 <strategy_comm5::__fb_plugin_impl::on_signal+0x115>
   7b872:	48 8b bc 24 b0 00 00 	mov    0xb0(%rsp),%rdi
   7b879:	00 
   7b87a:	ba 01 00 00 00       	mov    $0x1,%edx
   7b87f:	ff 15 f3 83 08 00    	call   *0x883f3(%rip)        # 103c78 <_DYNAMIC+0x218>
   7b885:	48 8b b4 24 c0 00 00 	mov    0xc0(%rsp),%rsi
   7b88c:	00 
   7b88d:	48 85 f6             	test   %rsi,%rsi
   7b890:	74 13                	je     7b8a5 <strategy_comm5::__fb_plugin_impl::on_signal+0x135>
   7b892:	48 8b bc 24 c8 00 00 	mov    0xc8(%rsp),%rdi
   7b899:	00 
   7b89a:	ba 01 00 00 00       	mov    $0x1,%edx
   7b89f:	ff 15 d3 83 08 00    	call   *0x883d3(%rip)        # 103c78 <_DYNAMIC+0x218>
   7b8a5:	48 8b b4 24 d8 00 00 	mov    0xd8(%rsp),%rsi
   7b8ac:	00 
   7b8ad:	48 85 f6             	test   %rsi,%rsi
   7b8b0:	74 13                	je     7b8c5 <strategy_comm5::__fb_plugin_impl::on_signal+0x155>
   7b8b2:	48 8b bc 24 e0 00 00 	mov    0xe0(%rsp),%rdi
   7b8b9:	00 
   7b8ba:	ba 01 00 00 00       	mov    $0x1,%edx
   7b8bf:	ff 15 b3 83 08 00    	call   *0x883b3(%rip)        # 103c78 <_DYNAMIC+0x218>
   7b8c5:	89 d8                	mov    %ebx,%eax
   7b8c7:	48 81 c4 28 01 00 00 	add    $0x128,%rsp
   7b8ce:	5b                   	pop    %rbx
   7b8cf:	41 5e                	pop    %r14
   7b8d1:	c3                   	ret    
   7b8d2:	48 8d 7c 24 08       	lea    0x8(%rsp),%rdi
   7b8d7:	ff 15 23 87 08 00    	call   *0x88723(%rip)        # 104000 <_DYNAMIC+0x5a0>
   7b8dd:	eb 0c                	jmp    7b8eb <strategy_comm5::__fb_plugin_impl::on_signal+0x17b>
   7b8df:	ff 15 6b 84 08 00    	call   *0x8846b(%rip)        # 103d50 <_DYNAMIC+0x2f0>
   7b8e5:	ff 15 1d 87 08 00    	call   *0x8871d(%rip)        # 104008 <_DYNAMIC+0x5a8>
   7b8eb:	48 8d 7c 24 50       	lea    0x50(%rsp),%rdi
   7b8f0:	e8 3b ef ff ff       	call   7a830 <core::ptr::drop_in_place<future_backtest_sdk::context::StrategyContext>>
   7b8f5:	48 8d bc 24 90 00 00 	lea    0x90(%rsp),%rdi
   7b8fc:	00 
   7b8fd:	e8 9e ee ff ff       	call   7a7a0 <core::ptr::drop_in_place<future_backtest_sdk::types::Signal>>
   7b902:	ff 15 00 87 08 00    	call   *0x88700(%rip)        # 104008 <_DYNAMIC+0x5a8>
   7b908:	cc                   	int3   
   7b909:	cc                   	int3   
   7b90a:	cc                   	int3   
   7b90b:	cc                   	int3   
   7b90c:	cc                   	int3   
   7b90d:	cc                   	int3   
   7b90e:	cc                   	int3   
   7b90f:	cc                   	int3   
