000000000003b000 <strategy_comm5::Comm5Params::signal_mode>:
   3b000:	48 83 fe 03          	cmp    $0x3,%rsi
   3b004:	75 31                	jne    3b037 <strategy_comm5::Comm5Params::signal_mode+0x37>
   3b006:	0f b7 07             	movzwl (%rdi),%eax
   3b009:	35 50 56 00 00       	xor    $0x5650,%eax
   3b00e:	0f b6 4f 02          	movzbl 0x2(%rdi),%ecx
   3b012:	83 f1 32             	xor    $0x32,%ecx
   3b015:	66 09 c1             	or     %ax,%cx
   3b018:	74 20                	je     3b03a <strategy_comm5::Comm5Params::signal_mode+0x3a>
   3b01a:	0f b7 07             	movzwl (%rdi),%eax
   3b01d:	35 50 56 00 00       	xor    $0x5650,%eax
   3b022:	0f b6 4f 02          	movzbl 0x2(%rdi),%ecx
   3b026:	83 f1 34             	xor    $0x34,%ecx
   3b029:	09 c1                	or     %eax,%ecx
   3b02b:	31 c0                	xor    %eax,%eax
   3b02d:	66 85 c9             	test   %cx,%cx
   3b030:	0f 94 c0             	sete   %al
   3b033:	8d 04 40             	lea    (%rax,%rax,2),%eax
   3b036:	c3                   	ret    
   3b037:	31 c0                	xor    %eax,%eax
   3b039:	c3                   	ret    
   3b03a:	b0 01                	mov    $0x1,%al
   3b03c:	c3                   	ret    
   3b03d:	cc                   	int3   
   3b03e:	cc                   	int3   
   3b03f:	cc                   	int3   
