000000000003b150 <strategy_comm5::Comm5Params::effective>:
   3b150:	0f b6 c2             	movzbl %dl,%eax
   3b153:	48 69 c8 f0 00 00 00 	imul   $0xf0,%rax,%rcx
   3b15a:	48 8d 04 0e          	lea    (%rsi,%rcx,1),%rax
   3b15e:	31 d2                	xor    %edx,%edx
   3b160:	48 3b 94 0e 10 01 00 	cmp    0x110(%rsi,%rcx,1),%rdx
   3b167:	00 
   3b168:	71 1e                	jno    3b188 <strategy_comm5::Comm5Params::effective+0x38>
   3b16a:	48 8b 8e 60 03 00 00 	mov    0x360(%rsi),%rcx
   3b171:	48 8b 96 68 03 00 00 	mov    0x368(%rsi),%rdx
   3b178:	48 83 fa 05          	cmp    $0x5,%rdx
   3b17c:	74 2f                	je     3b1ad <strategy_comm5::Comm5Params::effective+0x5d>
   3b17e:	48 83 fa 04          	cmp    $0x4,%rdx
   3b182:	74 1e                	je     3b1a2 <strategy_comm5::Comm5Params::effective+0x52>
   3b184:	31 c9                	xor    %ecx,%ecx
   3b186:	eb 3a                	jmp    3b1c2 <strategy_comm5::Comm5Params::effective+0x72>
   3b188:	48 8b 88 18 01 00 00 	mov    0x118(%rax),%rcx
   3b18f:	48 8b 90 20 01 00 00 	mov    0x120(%rax),%rdx
   3b196:	48 83 fa 05          	cmp    $0x5,%rdx
   3b19a:	74 11                	je     3b1ad <strategy_comm5::Comm5Params::effective+0x5d>
   3b19c:	48 83 fa 04          	cmp    $0x4,%rdx
   3b1a0:	75 e2                	jne    3b184 <strategy_comm5::Comm5Params::effective+0x34>
   3b1a2:	81 39 73 6b 69 70    	cmpl   $0x70696b73,(%rcx)
   3b1a8:	0f 94 c1             	sete   %cl
   3b1ab:	eb 15                	jmp    3b1c2 <strategy_comm5::Comm5Params::effective+0x72>
   3b1ad:	ba 6d 61 6b 65       	mov    $0x656b616d,%edx
   3b1b2:	33 11                	xor    (%rcx),%edx
   3b1b4:	0f b6 49 04          	movzbl 0x4(%rcx),%ecx
   3b1b8:	83 f1 72             	xor    $0x72,%ecx
   3b1bb:	09 d1                	or     %edx,%ecx
   3b1bd:	0f 94 c1             	sete   %cl
   3b1c0:	00 c9                	add    %cl,%cl
   3b1c2:	48 8d 50 48          	lea    0x48(%rax),%rdx
   3b1c6:	4c 8d 86 68 04 00 00 	lea    0x468(%rsi),%r8
   3b1cd:	80 78 40 00          	cmpb   $0x0,0x40(%rax)
   3b1d1:	4c 0f 45 c2          	cmovne %rdx,%r8
   3b1d5:	f2 41 0f 10 00       	movsd  (%r8),%xmm0
   3b1da:	48 8d 50 58          	lea    0x58(%rax),%rdx
   3b1de:	80 78 50 00          	cmpb   $0x0,0x50(%rax)
   3b1e2:	4c 8d 86 70 04 00 00 	lea    0x470(%rsi),%r8
   3b1e9:	4c 0f 45 c2          	cmovne %rdx,%r8
   3b1ed:	f2 41 0f 10 08       	movsd  (%r8),%xmm1
   3b1f2:	48 8d 50 68          	lea    0x68(%rax),%rdx
   3b1f6:	4c 8d 86 78 04 00 00 	lea    0x478(%rsi),%r8
   3b1fd:	80 78 60 00          	cmpb   $0x0,0x60(%rax)
   3b201:	4c 0f 45 c2          	cmovne %rdx,%r8
   3b205:	48 8d 50 78          	lea    0x78(%rax),%rdx
   3b209:	4c 8d 8e 80 04 00 00 	lea    0x480(%rsi),%r9
   3b210:	80 78 70 00          	cmpb   $0x0,0x70(%rax)
   3b214:	4c 0f 45 ca          	cmovne %rdx,%r9
   3b218:	f2 41 0f 10 10       	movsd  (%r8),%xmm2
   3b21d:	f2 41 0f 10 19       	movsd  (%r9),%xmm3
   3b222:	48 8d 90 88 00 00 00 	lea    0x88(%rax),%rdx
   3b229:	4c 8d 86 48 04 00 00 	lea    0x448(%rsi),%r8
   3b230:	80 b8 80 00 00 00 00 	cmpb   $0x0,0x80(%rax)
   3b237:	4c 0f 45 c2          	cmovne %rdx,%r8
   3b23b:	f2 41 0f 10 20       	movsd  (%r8),%xmm4
   3b240:	48 8d 90 98 00 00 00 	lea    0x98(%rax),%rdx
   3b247:	80 b8 90 00 00 00 00 	cmpb   $0x0,0x90(%rax)
   3b24e:	4c 8d 86 50 04 00 00 	lea    0x450(%rsi),%r8
   3b255:	4c 0f 45 c2          	cmovne %rdx,%r8
   3b259:	f2 41 0f 10 28       	movsd  (%r8),%xmm5
   3b25e:	48 8d 90 a8 00 00 00 	lea    0xa8(%rax),%rdx
   3b265:	4c 8d 86 38 04 00 00 	lea    0x438(%rsi),%r8
   3b26c:	80 b8 a0 00 00 00 00 	cmpb   $0x0,0xa0(%rax)
   3b273:	4c 0f 45 c2          	cmovne %rdx,%r8
   3b277:	48 8d 90 b8 00 00 00 	lea    0xb8(%rax),%rdx
   3b27e:	4c 8d 8e 40 04 00 00 	lea    0x440(%rsi),%r9
   3b285:	80 b8 b0 00 00 00 00 	cmpb   $0x0,0xb0(%rax)
   3b28c:	4c 0f 45 ca          	cmovne %rdx,%r9
   3b290:	f2 41 0f 10 30       	movsd  (%r8),%xmm6
   3b295:	f2 41 0f 10 39       	movsd  (%r9),%xmm7
   3b29a:	8b 90 28 01 00 00    	mov    0x128(%rax),%edx
   3b2a0:	80 fa 02             	cmp    $0x2,%dl
   3b2a3:	75 06                	jne    3b2ab <strategy_comm5::Comm5Params::effective+0x15b>
   3b2a5:	8b 96 60 05 00 00    	mov    0x560(%rsi),%edx
   3b2ab:	4c 8d 80 c8 00 00 00 	lea    0xc8(%rax),%r8
   3b2b2:	4c 8d 8e 08 04 00 00 	lea    0x408(%rsi),%r9
   3b2b9:	80 b8 c0 00 00 00 00 	cmpb   $0x0,0xc0(%rax)
   3b2c0:	4d 0f 45 c8          	cmovne %r8,%r9
   3b2c4:	f2 45 0f 10 01       	movsd  (%r9),%xmm8
   3b2c9:	4c 8d 80 d8 00 00 00 	lea    0xd8(%rax),%r8
   3b2d0:	80 b8 d0 00 00 00 00 	cmpb   $0x0,0xd0(%rax)
   3b2d7:	4c 8d 8e 10 04 00 00 	lea    0x410(%rsi),%r9
   3b2de:	4d 0f 45 c8          	cmovne %r8,%r9
   3b2e2:	f2 45 0f 10 09       	movsd  (%r9),%xmm9
   3b2e7:	4c 8d 80 e8 00 00 00 	lea    0xe8(%rax),%r8
   3b2ee:	4c 8d 8e 18 04 00 00 	lea    0x418(%rsi),%r9
   3b2f5:	80 b8 e0 00 00 00 00 	cmpb   $0x0,0xe0(%rax)
   3b2fc:	4d 0f 45 c8          	cmovne %r8,%r9
   3b300:	4c 8d 80 f8 00 00 00 	lea    0xf8(%rax),%r8
   3b307:	4c 8d 96 f8 03 00 00 	lea    0x3f8(%rsi),%r10
   3b30e:	80 b8 f0 00 00 00 00 	cmpb   $0x0,0xf0(%rax)
   3b315:	4d 0f 45 d0          	cmovne %r8,%r10
   3b319:	f2 45 0f 10 11       	movsd  (%r9),%xmm10
   3b31e:	f2 45 0f 10 1a       	movsd  (%r10),%xmm11
   3b323:	4c 8d 80 08 01 00 00 	lea    0x108(%rax),%r8
   3b32a:	48 81 c6 00 04 00 00 	add    $0x400,%rsi
   3b331:	80 b8 00 01 00 00 00 	cmpb   $0x0,0x100(%rax)
   3b338:	49 0f 45 f0          	cmovne %r8,%rsi
   3b33c:	f2 44 0f 10 26       	movsd  (%rsi),%xmm12
   3b341:	f2 0f 11 07          	movsd  %xmm0,(%rdi)
   3b345:	f2 0f 11 4f 08       	movsd  %xmm1,0x8(%rdi)
   3b34a:	f2 0f 11 57 10       	movsd  %xmm2,0x10(%rdi)
   3b34f:	f2 0f 11 5f 18       	movsd  %xmm3,0x18(%rdi)
   3b354:	f2 0f 11 67 20       	movsd  %xmm4,0x20(%rdi)
   3b359:	f2 0f 11 6f 28       	movsd  %xmm5,0x28(%rdi)
   3b35e:	f2 0f 11 77 30       	movsd  %xmm6,0x30(%rdi)
   3b363:	f2 0f 11 7f 38       	movsd  %xmm7,0x38(%rdi)
   3b368:	88 57 69             	mov    %dl,0x69(%rdi)
   3b36b:	f2 44 0f 11 47 40    	movsd  %xmm8,0x40(%rdi)
   3b371:	f2 44 0f 11 4f 48    	movsd  %xmm9,0x48(%rdi)
   3b377:	f2 44 0f 11 57 50    	movsd  %xmm10,0x50(%rdi)
   3b37d:	f2 44 0f 11 5f 58    	movsd  %xmm11,0x58(%rdi)
   3b383:	f2 44 0f 11 67 60    	movsd  %xmm12,0x60(%rdi)
   3b389:	88 4f 68             	mov    %cl,0x68(%rdi)
   3b38c:	c3                   	ret    
   3b38d:	cc                   	int3   
   3b38e:	cc                   	int3   
   3b38f:	cc                   	int3   
