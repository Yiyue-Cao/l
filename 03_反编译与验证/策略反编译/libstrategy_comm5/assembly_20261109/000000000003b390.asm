000000000003b390 <strategy_comm5::xs_inst_of>:
   3b390:	48 89 f8             	mov    %rdi,%rax
   3b393:	48 01 fe             	add    %rdi,%rsi
   3b396:	eb 14                	jmp    3b3ac <strategy_comm5::xs_inst_of+0x1c>
   3b398:	0f 1f 84 00 00 00 00 	nopl   0x0(%rax,%rax,1)
   3b39f:	00 
   3b3a0:	48 8d 71 ff          	lea    -0x1(%rcx),%rsi
   3b3a4:	83 c2 c6             	add    $0xffffffc6,%edx
   3b3a7:	83 fa f5             	cmp    $0xfffffff5,%edx
   3b3aa:	76 6a                	jbe    3b416 <strategy_comm5::xs_inst_of+0x86>
   3b3ac:	48 39 f0             	cmp    %rsi,%rax
   3b3af:	74 6a                	je     3b41b <strategy_comm5::xs_inst_of+0x8b>
   3b3b1:	48 89 f1             	mov    %rsi,%rcx
   3b3b4:	0f be 56 ff          	movsbl -0x1(%rsi),%edx
   3b3b8:	85 d2                	test   %edx,%edx
   3b3ba:	79 e4                	jns    3b3a0 <strategy_comm5::xs_inst_of+0x10>
   3b3bc:	0f b6 79 fe          	movzbl -0x2(%rcx),%edi
   3b3c0:	40 80 ff c0          	cmp    $0xc0,%dil
   3b3c4:	7d 25                	jge    3b3eb <strategy_comm5::xs_inst_of+0x5b>
   3b3c6:	44 0f b6 41 fd       	movzbl -0x3(%rcx),%r8d
   3b3cb:	41 80 f8 c0          	cmp    $0xc0,%r8b
   3b3cf:	7d 23                	jge    3b3f4 <strategy_comm5::xs_inst_of+0x64>
   3b3d1:	48 8d 71 fc          	lea    -0x4(%rcx),%rsi
   3b3d5:	44 0f b6 49 fc       	movzbl -0x4(%rcx),%r9d
   3b3da:	41 83 e1 07          	and    $0x7,%r9d
   3b3de:	41 c1 e1 06          	shl    $0x6,%r9d
   3b3e2:	41 83 e0 3f          	and    $0x3f,%r8d
   3b3e6:	45 09 c8             	or     %r9d,%r8d
   3b3e9:	eb 11                	jmp    3b3fc <strategy_comm5::xs_inst_of+0x6c>
   3b3eb:	48 8d 71 fe          	lea    -0x2(%rcx),%rsi
   3b3ef:	83 e7 1f             	and    $0x1f,%edi
   3b3f2:	eb 12                	jmp    3b406 <strategy_comm5::xs_inst_of+0x76>
   3b3f4:	48 8d 71 fd          	lea    -0x3(%rcx),%rsi
   3b3f8:	41 83 e0 0f          	and    $0xf,%r8d
   3b3fc:	41 c1 e0 06          	shl    $0x6,%r8d
   3b400:	83 e7 3f             	and    $0x3f,%edi
   3b403:	44 09 c7             	or     %r8d,%edi
   3b406:	c1 e7 06             	shl    $0x6,%edi
   3b409:	83 e2 3f             	and    $0x3f,%edx
   3b40c:	09 fa                	or     %edi,%edx
   3b40e:	83 c2 c6             	add    $0xffffffc6,%edx
   3b411:	83 fa f5             	cmp    $0xfffffff5,%edx
   3b414:	77 96                	ja     3b3ac <strategy_comm5::xs_inst_of+0x1c>
   3b416:	48 29 c1             	sub    %rax,%rcx
   3b419:	eb 10                	jmp    3b42b <strategy_comm5::xs_inst_of+0x9b>
   3b41b:	31 c9                	xor    %ecx,%ecx
   3b41d:	eb 0c                	jmp    3b42b <strategy_comm5::xs_inst_of+0x9b>
   3b41f:	90                   	nop
   3b420:	48 ff c9             	dec    %rcx
   3b423:	48 29 c1             	sub    %rax,%rcx
   3b426:	83 fe 5f             	cmp    $0x5f,%esi
   3b429:	75 6e                	jne    3b499 <strategy_comm5::xs_inst_of+0x109>
   3b42b:	48 89 ca             	mov    %rcx,%rdx
   3b42e:	48 85 c9             	test   %rcx,%rcx
   3b431:	74 66                	je     3b499 <strategy_comm5::xs_inst_of+0x109>
   3b433:	48 8d 0c 10          	lea    (%rax,%rdx,1),%rcx
   3b437:	0f be 71 ff          	movsbl -0x1(%rcx),%esi
   3b43b:	85 f6                	test   %esi,%esi
   3b43d:	79 e1                	jns    3b420 <strategy_comm5::xs_inst_of+0x90>
   3b43f:	0f b6 79 fe          	movzbl -0x2(%rcx),%edi
   3b443:	40 80 ff c0          	cmp    $0xc0,%dil
   3b447:	7d 25                	jge    3b46e <strategy_comm5::xs_inst_of+0xde>
   3b449:	44 0f b6 41 fd       	movzbl -0x3(%rcx),%r8d
   3b44e:	41 80 f8 c0          	cmp    $0xc0,%r8b
   3b452:	7d 23                	jge    3b477 <strategy_comm5::xs_inst_of+0xe7>
   3b454:	44 0f b6 49 fc       	movzbl -0x4(%rcx),%r9d
   3b459:	48 83 c1 fc          	add    $0xfffffffffffffffc,%rcx
   3b45d:	41 83 e1 07          	and    $0x7,%r9d
   3b461:	41 c1 e1 06          	shl    $0x6,%r9d
   3b465:	41 83 e0 3f          	and    $0x3f,%r8d
   3b469:	45 09 c8             	or     %r9d,%r8d
   3b46c:	eb 11                	jmp    3b47f <strategy_comm5::xs_inst_of+0xef>
   3b46e:	48 83 c1 fe          	add    $0xfffffffffffffffe,%rcx
   3b472:	83 e7 1f             	and    $0x1f,%edi
   3b475:	eb 12                	jmp    3b489 <strategy_comm5::xs_inst_of+0xf9>
   3b477:	48 83 c1 fd          	add    $0xfffffffffffffffd,%rcx
   3b47b:	41 83 e0 0f          	and    $0xf,%r8d
   3b47f:	41 c1 e0 06          	shl    $0x6,%r8d
   3b483:	83 e7 3f             	and    $0x3f,%edi
   3b486:	44 09 c7             	or     %r8d,%edi
   3b489:	c1 e7 06             	shl    $0x6,%edi
   3b48c:	83 e6 3f             	and    $0x3f,%esi
   3b48f:	09 fe                	or     %edi,%esi
   3b491:	48 29 c1             	sub    %rax,%rcx
   3b494:	83 fe 5f             	cmp    $0x5f,%esi
   3b497:	74 92                	je     3b42b <strategy_comm5::xs_inst_of+0x9b>
   3b499:	c3                   	ret    
   3b49a:	cc                   	int3   
   3b49b:	cc                   	int3   
   3b49c:	cc                   	int3   
   3b49d:	cc                   	int3   
   3b49e:	cc                   	int3   
   3b49f:	cc                   	int3   
