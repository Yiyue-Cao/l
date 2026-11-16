000000000007ba50 <strategy_comm5::__fb_plugin_impl::on_finish>:
   7ba50:	53                   	push   %rbx
   7ba51:	48 81 ec 90 00 00 00 	sub    $0x90,%rsp
   7ba58:	48 89 b4 24 80 00 00 	mov    %rsi,0x80(%rsp)
   7ba5f:	00 
   7ba60:	48 c7 84 24 88 00 00 	movq   $0x0,0x88(%rsp)
   7ba67:	00 00 00 00 00 
   7ba6c:	48 b8 00 00 00 00 00 	movabs $0x8000000000000000,%rax
   7ba73:	00 00 80 
   7ba76:	48 89 44 24 50       	mov    %rax,0x50(%rsp)
   7ba7b:	48 89 44 24 68       	mov    %rax,0x68(%rsp)
   7ba80:	48 8d 74 24 50       	lea    0x50(%rsp),%rsi
   7ba85:	e8 d6 8f fc ff       	call   44a60 <<strategy_comm5::StrategyComm5 as future_backtest_sdk::plugin::StrategyPlugin>::on_finish>
   7ba8a:	48 85 c0             	test   %rax,%rax
   7ba8d:	74 69                	je     7baf8 <strategy_comm5::__fb_plugin_impl::on_finish+0xa8>
   7ba8f:	48 89 44 24 08       	mov    %rax,0x8(%rsp)
   7ba94:	48 8d 44 24 08       	lea    0x8(%rsp),%rax
   7ba99:	48 89 44 24 10       	mov    %rax,0x10(%rsp)
   7ba9e:	48 8b 05 4b 85 08 00 	mov    0x8854b(%rip),%rax        # 103ff0 <_DYNAMIC+0x590>
   7baa5:	48 89 44 24 18       	mov    %rax,0x18(%rsp)
   7baaa:	48 8d 05 c7 2c 08 00 	lea    0x82cc7(%rip),%rax        # fe778 <anon.bebec81cbc1f308c0c8f86f4fc1fc7f5.26.llvm.975649267649338698+0xb0>
   7bab1:	48 89 44 24 20       	mov    %rax,0x20(%rsp)
   7bab6:	48 c7 44 24 28 02 00 	movq   $0x2,0x28(%rsp)
   7babd:	00 00 
   7babf:	48 c7 44 24 40 00 00 	movq   $0x0,0x40(%rsp)
   7bac6:	00 00 
   7bac8:	48 8d 44 24 10       	lea    0x10(%rsp),%rax
   7bacd:	48 89 44 24 30       	mov    %rax,0x30(%rsp)
   7bad2:	48 c7 44 24 38 01 00 	movq   $0x1,0x38(%rsp)
   7bad9:	00 00 
   7badb:	48 8d 7c 24 20       	lea    0x20(%rsp),%rdi
   7bae0:	ff 15 12 85 08 00    	call   *0x88512(%rip)        # 103ff8 <_DYNAMIC+0x598>
   7bae6:	48 8d 7c 24 08       	lea    0x8(%rsp),%rdi
   7baeb:	ff 15 0f 85 08 00    	call   *0x8850f(%rip)        # 104000 <_DYNAMIC+0x5a0>
   7baf1:	bb ff ff ff ff       	mov    $0xffffffff,%ebx
   7baf6:	eb 02                	jmp    7bafa <strategy_comm5::__fb_plugin_impl::on_finish+0xaa>
   7baf8:	31 db                	xor    %ebx,%ebx
   7bafa:	48 8d 7c 24 50       	lea    0x50(%rsp),%rdi
   7baff:	e8 2c ed ff ff       	call   7a830 <core::ptr::drop_in_place<future_backtest_sdk::context::StrategyContext>>
   7bb04:	89 d8                	mov    %ebx,%eax
   7bb06:	48 81 c4 90 00 00 00 	add    $0x90,%rsp
   7bb0d:	5b                   	pop    %rbx
   7bb0e:	c3                   	ret    
   7bb0f:	48 8d 7c 24 08       	lea    0x8(%rsp),%rdi
   7bb14:	ff 15 e6 84 08 00    	call   *0x884e6(%rip)        # 104000 <_DYNAMIC+0x5a0>
   7bb1a:	eb 06                	jmp    7bb22 <strategy_comm5::__fb_plugin_impl::on_finish+0xd2>
   7bb1c:	ff 15 2e 82 08 00    	call   *0x8822e(%rip)        # 103d50 <_DYNAMIC+0x2f0>
   7bb22:	48 8d 7c 24 50       	lea    0x50(%rsp),%rdi
   7bb27:	e8 04 ed ff ff       	call   7a830 <core::ptr::drop_in_place<future_backtest_sdk::context::StrategyContext>>
   7bb2c:	ff 15 d6 84 08 00    	call   *0x884d6(%rip)        # 104008 <_DYNAMIC+0x5a8>
   7bb32:	cc                   	int3   
   7bb33:	cc                   	int3   
   7bb34:	cc                   	int3   
   7bb35:	cc                   	int3   
   7bb36:	cc                   	int3   
   7bb37:	cc                   	int3   
   7bb38:	cc                   	int3   
   7bb39:	cc                   	int3   
   7bb3a:	cc                   	int3   
   7bb3b:	cc                   	int3   
   7bb3c:	cc                   	int3   
   7bb3d:	cc                   	int3   
   7bb3e:	cc                   	int3   
   7bb3f:	cc                   	int3   
