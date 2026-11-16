0000000000071900 <core::ptr::drop_in_place<strategy_comm5::signal_trigger::TsQuantileCalculator>>:
   71900:	48 8b 0f             	mov    (%rdi),%rcx
   71903:	48 85 c9             	test   %rcx,%rcx
   71906:	74 22                	je     7192a <core::ptr::drop_in_place<strategy_comm5::signal_trigger::TsQuantileCalculator>+0x2a>
   71908:	53                   	push   %rbx
   71909:	48 8b 47 08          	mov    0x8(%rdi),%rax
   7190d:	48 c1 e1 03          	shl    $0x3,%rcx
   71911:	48 8d 34 49          	lea    (%rcx,%rcx,2),%rsi
   71915:	ba 08 00 00 00       	mov    $0x8,%edx
   7191a:	48 89 fb             	mov    %rdi,%rbx
   7191d:	48 89 c7             	mov    %rax,%rdi
   71920:	ff 15 52 23 09 00    	call   *0x92352(%rip)        # 103c78 <_DYNAMIC+0x218>
   71926:	48 89 df             	mov    %rbx,%rdi
   71929:	5b                   	pop    %rbx
   7192a:	48 83 c7 20          	add    $0x20,%rdi
   7192e:	e9 ad 05 00 00       	jmp    71ee0 <<alloc::collections::btree::map::BTreeMap<K,V,A> as core::ops::drop::Drop>::drop>
   71933:	cc                   	int3   
   71934:	cc                   	int3   
   71935:	cc                   	int3   
   71936:	cc                   	int3   
   71937:	cc                   	int3   
   71938:	cc                   	int3   
   71939:	cc                   	int3   
   7193a:	cc                   	int3   
   7193b:	cc                   	int3   
   7193c:	cc                   	int3   
   7193d:	cc                   	int3   
   7193e:	cc                   	int3   
   7193f:	cc                   	int3   
