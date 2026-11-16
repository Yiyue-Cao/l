000000000007b680 <strategy_comm5::__fb_plugin_impl::on_begin>:
   7b680:	53                   	push   %rbx
   7b681:	48 81 ec 90 00 00 00 	sub    $0x90,%rsp
   7b688:	48 89 b4 24 80 00 00 	mov    %rsi,0x80(%rsp)
   7b68f:	00 
   7b690:	48 c7 84 24 88 00 00 	movq   $0x0,0x88(%rsp)
   7b697:	00 00 00 00 00 
   7b69c:	48 b8 00 00 00 00 00 	movabs $0x8000000000000000,%rax
   7b6a3:	00 00 80 
   7b6a6:	48 89 44 24 50       	mov    %rax,0x50(%rsp)
   7b6ab:	48 89 44 24 68       	mov    %rax,0x68(%rsp)
   7b6b0:	48 8d 74 24 50       	lea    0x50(%rsp),%rsi
   7b6b5:	e8 e6 11 fc ff       	call   3c8a0 <<strategy_comm5::StrategyComm5 as future_backtest_sdk::plugin::StrategyPlugin>::on_begin>
   7b6ba:	48 85 c0             	test   %rax,%rax
   7b6bd:	74 69                	je     7b728 <strategy_comm5::__fb_plugin_impl::on_begin+0xa8>
   7b6bf:	48 89 44 24 08       	mov    %rax,0x8(%rsp)
   7b6c4:	48 8d 44 24 08       	lea    0x8(%rsp),%rax
   7b6c9:	48 89 44 24 10       	mov    %rax,0x10(%rsp)
   7b6ce:	48 8b 05 1b 89 08 00 	mov    0x8891b(%rip),%rax        # 103ff0 <_DYNAMIC+0x590>
   7b6d5:	48 89 44 24 18       	mov    %rax,0x18(%rsp)
   7b6da:	48 8d 05 37 30 08 00 	lea    0x83037(%rip),%rax        # fe718 <anon.bebec81cbc1f308c0c8f86f4fc1fc7f5.26.llvm.975649267649338698+0x50>
   7b6e1:	48 89 44 24 20       	mov    %rax,0x20(%rsp)
   7b6e6:	48 c7 44 24 28 02 00 	movq   $0x2,0x28(%rsp)
   7b6ed:	00 00 
   7b6ef:	48 c7 44 24 40 00 00 	movq   $0x0,0x40(%rsp)
   7b6f6:	00 00 
   7b6f8:	48 8d 44 24 10       	lea    0x10(%rsp),%rax
   7b6fd:	48 89 44 24 30       	mov    %rax,0x30(%rsp)
   7b702:	48 c7 44 24 38 01 00 	movq   $0x1,0x38(%rsp)
   7b709:	00 00 
   7b70b:	48 8d 7c 24 20       	lea    0x20(%rsp),%rdi
   7b710:	ff 15 e2 88 08 00    	call   *0x888e2(%rip)        # 103ff8 <_DYNAMIC+0x598>
   7b716:	48 8d 7c 24 08       	lea    0x8(%rsp),%rdi
   7b71b:	ff 15 df 88 08 00    	call   *0x888df(%rip)        # 104000 <_DYNAMIC+0x5a0>
   7b721:	bb ff ff ff ff       	mov    $0xffffffff,%ebx
   7b726:	eb 02                	jmp    7b72a <strategy_comm5::__fb_plugin_impl::on_begin+0xaa>
   7b728:	31 db                	xor    %ebx,%ebx
   7b72a:	48 8d 7c 24 50       	lea    0x50(%rsp),%rdi
   7b72f:	e8 fc f0 ff ff       	call   7a830 <core::ptr::drop_in_place<future_backtest_sdk::context::StrategyContext>>
   7b734:	89 d8                	mov    %ebx,%eax
   7b736:	48 81 c4 90 00 00 00 	add    $0x90,%rsp
   7b73d:	5b                   	pop    %rbx
   7b73e:	c3                   	ret    
   7b73f:	48 8d 7c 24 08       	lea    0x8(%rsp),%rdi
   7b744:	ff 15 b6 88 08 00    	call   *0x888b6(%rip)        # 104000 <_DYNAMIC+0x5a0>
   7b74a:	eb 06                	jmp    7b752 <strategy_comm5::__fb_plugin_impl::on_begin+0xd2>
   7b74c:	ff 15 fe 85 08 00    	call   *0x885fe(%rip)        # 103d50 <_DYNAMIC+0x2f0>
   7b752:	48 8d 7c 24 50       	lea    0x50(%rsp),%rdi
   7b757:	e8 d4 f0 ff ff       	call   7a830 <core::ptr::drop_in_place<future_backtest_sdk::context::StrategyContext>>
   7b75c:	ff 15 a6 88 08 00    	call   *0x888a6(%rip)        # 104008 <_DYNAMIC+0x5a8>
   7b762:	cc                   	int3   
   7b763:	cc                   	int3   
   7b764:	cc                   	int3   
   7b765:	cc                   	int3   
   7b766:	cc                   	int3   
   7b767:	cc                   	int3   
   7b768:	cc                   	int3   
   7b769:	cc                   	int3   
   7b76a:	cc                   	int3   
   7b76b:	cc                   	int3   
   7b76c:	cc                   	int3   
   7b76d:	cc                   	int3   
   7b76e:	cc                   	int3   
   7b76f:	cc                   	int3   
