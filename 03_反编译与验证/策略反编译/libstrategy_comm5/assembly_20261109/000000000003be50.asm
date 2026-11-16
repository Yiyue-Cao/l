000000000003be50 <strategy_comm5::live_pending_counts>:
   3be50:	55                   	push   %rbp
   3be51:	41 57                	push   %r15
   3be53:	41 56                	push   %r14
   3be55:	41 55                	push   %r13
   3be57:	41 54                	push   %r12
   3be59:	53                   	push   %rbx
   3be5a:	48 81 ec 98 00 00 00 	sub    $0x98,%rsp
   3be61:	4c 89 c3             	mov    %r8,%rbx
   3be64:	49 89 cc             	mov    %rcx,%r12
   3be67:	49 89 d6             	mov    %rdx,%r14
   3be6a:	49 89 f7             	mov    %rsi,%r15
   3be6d:	49 89 fd             	mov    %rdi,%r13
   3be70:	48 8d bc 24 80 00 00 	lea    0x80(%rsp),%rdi
   3be77:	00 
   3be78:	4c 89 ee             	mov    %r13,%rsi
   3be7b:	4c 89 fa             	mov    %r15,%rdx
   3be7e:	4c 89 f1             	mov    %r14,%rcx
   3be81:	ff 15 b1 7e 0c 00    	call   *0xc7eb1(%rip)        # 103d38 <_DYNAMIC+0x2d8>
   3be87:	48 8d 7c 24 68       	lea    0x68(%rsp),%rdi
   3be8c:	4c 89 ee             	mov    %r13,%rsi
   3be8f:	4c 89 fa             	mov    %r15,%rdx
   3be92:	4c 89 f1             	mov    %r14,%rcx
   3be95:	ff 15 bd 7e 0c 00    	call   *0xc7ebd(%rip)        # 103d58 <_DYNAMIC+0x2f8>
   3be9b:	48 8b 94 24 80 00 00 	mov    0x80(%rsp),%rdx
   3bea2:	00 
   3bea3:	48 8b 8c 24 88 00 00 	mov    0x88(%rsp),%rcx
   3beaa:	00 
   3beab:	48 8b 84 24 90 00 00 	mov    0x90(%rsp),%rax
   3beb2:	00 
   3beb3:	48 6b f0 58          	imul   $0x58,%rax,%rsi
   3beb7:	48 01 ce             	add    %rcx,%rsi
   3beba:	48 89 74 24 10       	mov    %rsi,0x10(%rsp)
   3bebf:	48 85 c0             	test   %rax,%rax
   3bec2:	48 89 4c 24 48       	mov    %rcx,0x48(%rsp)
   3bec7:	48 89 54 24 50       	mov    %rdx,0x50(%rsp)
   3becc:	0f 84 ce 01 00 00    	je     3c0a0 <strategy_comm5::live_pending_counts+0x250>
   3bed2:	4c 8b 7c 24 70       	mov    0x70(%rsp),%r15
   3bed7:	48 8b 44 24 78       	mov    0x78(%rsp),%rax
   3bedc:	48 85 db             	test   %rbx,%rbx
   3bedf:	0f 84 ce 01 00 00    	je     3c0b3 <strategy_comm5::live_pending_counts+0x263>
   3bee5:	48 c1 e3 03          	shl    $0x3,%rbx
   3bee9:	4c 8d 2c 5b          	lea    (%rbx,%rbx,2),%r13
   3beed:	48 89 44 24 58       	mov    %rax,0x58(%rsp)
   3bef2:	48 8d 04 c5 00 00 00 	lea    0x0(,%rax,8),%rax
   3bef9:	00 
   3befa:	48 8d 04 40          	lea    (%rax,%rax,2),%rax
   3befe:	48 89 44 24 38       	mov    %rax,0x38(%rsp)
   3bf03:	31 ed                	xor    %ebp,%ebp
   3bf05:	48 89 c8             	mov    %rcx,%rax
   3bf08:	48 c7 44 24 08 00 00 	movq   $0x0,0x8(%rsp)
   3bf0f:	00 00 
   3bf11:	eb 2f                	jmp    3bf42 <strategy_comm5::live_pending_counts+0xf2>
   3bf13:	66 66 66 66 2e 0f 1f 	data16 data16 data16 cs nopw 0x0(%rax,%rax,1)
   3bf1a:	84 00 00 00 00 00 
   3bf20:	48 8b 44 24 60       	mov    0x60(%rsp),%rax
   3bf25:	48 01 c5             	add    %rax,%rbp
   3bf28:	34 01                	xor    $0x1,%al
   3bf2a:	0f b6 c0             	movzbl %al,%eax
   3bf2d:	48 01 44 24 08       	add    %rax,0x8(%rsp)
   3bf32:	48 8b 44 24 18       	mov    0x18(%rsp),%rax
   3bf37:	48 3b 44 24 10       	cmp    0x10(%rsp),%rax
   3bf3c:	0f 84 c4 03 00 00    	je     3c306 <strategy_comm5::live_pending_counts+0x4b6>
   3bf42:	48 89 6c 24 40       	mov    %rbp,0x40(%rsp)
   3bf47:	48 8d 48 58          	lea    0x58(%rax),%rcx
   3bf4b:	48 89 4c 24 18       	mov    %rcx,0x18(%rsp)
   3bf50:	48 8b 10             	mov    (%rax),%rdx
   3bf53:	48 b9 00 00 00 00 00 	movabs $0x8000000000000000,%rcx
   3bf5a:	00 00 80 
   3bf5d:	48 39 ca             	cmp    %rcx,%rdx
   3bf60:	0f 84 9a 02 00 00    	je     3c200 <strategy_comm5::live_pending_counts+0x3b0>
   3bf66:	48 89 54 24 30       	mov    %rdx,0x30(%rsp)
   3bf6b:	48 8b 58 08          	mov    0x8(%rax),%rbx
   3bf6f:	4c 8b 70 10          	mov    0x10(%rax),%r14
   3bf73:	48 8b 48 18          	mov    0x18(%rax),%rcx
   3bf77:	48 89 4c 24 28       	mov    %rcx,0x28(%rsp)
   3bf7c:	48 8b 48 20          	mov    0x20(%rax),%rcx
   3bf80:	48 89 4c 24 20       	mov    %rcx,0x20(%rsp)
   3bf85:	0f b6 40 50          	movzbl 0x50(%rax),%eax
   3bf89:	48 89 44 24 60       	mov    %rax,0x60(%rsp)
   3bf8e:	31 ed                	xor    %ebp,%ebp
   3bf90:	eb 17                	jmp    3bfa9 <strategy_comm5::live_pending_counts+0x159>
   3bf92:	66 66 66 66 66 2e 0f 	data16 data16 data16 data16 cs nopw 0x0(%rax,%rax,1)
   3bf99:	1f 84 00 00 00 00 00 
   3bfa0:	48 83 c5 18          	add    $0x18,%rbp
   3bfa4:	49 39 ed             	cmp    %rbp,%r13
   3bfa7:	74 27                	je     3bfd0 <strategy_comm5::live_pending_counts+0x180>
   3bfa9:	4d 39 74 2c 10       	cmp    %r14,0x10(%r12,%rbp,1)
   3bfae:	75 f0                	jne    3bfa0 <strategy_comm5::live_pending_counts+0x150>
   3bfb0:	49 8b 7c 2c 08       	mov    0x8(%r12,%rbp,1),%rdi
   3bfb5:	48 89 de             	mov    %rbx,%rsi
   3bfb8:	4c 89 f2             	mov    %r14,%rdx
   3bfbb:	ff 15 67 7d 0c 00    	call   *0xc7d67(%rip)        # 103d28 <bcmp@GLIBC_2.2.5>
   3bfc1:	85 c0                	test   %eax,%eax
   3bfc3:	75 db                	jne    3bfa0 <strategy_comm5::live_pending_counts+0x150>
   3bfc5:	eb 40                	jmp    3c007 <strategy_comm5::live_pending_counts+0x1b7>
   3bfc7:	66 0f 1f 84 00 00 00 	nopw   0x0(%rax,%rax,1)
   3bfce:	00 00 
   3bfd0:	48 83 7c 24 58 00    	cmpq   $0x0,0x58(%rsp)
   3bfd6:	0f 84 84 00 00 00    	je     3c060 <strategy_comm5::live_pending_counts+0x210>
   3bfdc:	31 ed                	xor    %ebp,%ebp
   3bfde:	eb 0b                	jmp    3bfeb <strategy_comm5::live_pending_counts+0x19b>
   3bfe0:	48 83 c5 18          	add    $0x18,%rbp
   3bfe4:	48 39 6c 24 38       	cmp    %rbp,0x38(%rsp)
   3bfe9:	74 75                	je     3c060 <strategy_comm5::live_pending_counts+0x210>
   3bfeb:	4d 39 74 2f 10       	cmp    %r14,0x10(%r15,%rbp,1)
   3bff0:	75 ee                	jne    3bfe0 <strategy_comm5::live_pending_counts+0x190>
   3bff2:	49 8b 7c 2f 08       	mov    0x8(%r15,%rbp,1),%rdi
   3bff7:	48 89 de             	mov    %rbx,%rsi
   3bffa:	4c 89 f2             	mov    %r14,%rdx
   3bffd:	ff 15 25 7d 0c 00    	call   *0xc7d25(%rip)        # 103d28 <bcmp@GLIBC_2.2.5>
   3c003:	85 c0                	test   %eax,%eax
   3c005:	75 d9                	jne    3bfe0 <strategy_comm5::live_pending_counts+0x190>
   3c007:	48 8b 74 24 30       	mov    0x30(%rsp),%rsi
   3c00c:	48 85 f6             	test   %rsi,%rsi
   3c00f:	74 0e                	je     3c01f <strategy_comm5::live_pending_counts+0x1cf>
   3c011:	ba 01 00 00 00       	mov    $0x1,%edx
   3c016:	48 89 df             	mov    %rbx,%rdi
   3c019:	ff 15 59 7c 0c 00    	call   *0xc7c59(%rip)        # 103c78 <_DYNAMIC+0x218>
   3c01f:	48 8b 74 24 28       	mov    0x28(%rsp),%rsi
   3c024:	48 85 f6             	test   %rsi,%rsi
   3c027:	48 8b 6c 24 40       	mov    0x40(%rsp),%rbp
   3c02c:	74 10                	je     3c03e <strategy_comm5::live_pending_counts+0x1ee>
   3c02e:	ba 01 00 00 00       	mov    $0x1,%edx
   3c033:	48 8b 7c 24 20       	mov    0x20(%rsp),%rdi
   3c038:	ff 15 3a 7c 0c 00    	call   *0xc7c3a(%rip)        # 103c78 <_DYNAMIC+0x218>
   3c03e:	48 8b 4c 24 18       	mov    0x18(%rsp),%rcx
   3c043:	48 89 c8             	mov    %rcx,%rax
   3c046:	48 3b 4c 24 10       	cmp    0x10(%rsp),%rcx
   3c04b:	0f 85 f6 fe ff ff    	jne    3bf47 <strategy_comm5::live_pending_counts+0xf7>
   3c051:	e9 b1 01 00 00       	jmp    3c207 <strategy_comm5::live_pending_counts+0x3b7>
   3c056:	66 2e 0f 1f 84 00 00 	cs nopw 0x0(%rax,%rax,1)
   3c05d:	00 00 00 
   3c060:	48 8b 74 24 30       	mov    0x30(%rsp),%rsi
   3c065:	48 85 f6             	test   %rsi,%rsi
   3c068:	74 0e                	je     3c078 <strategy_comm5::live_pending_counts+0x228>
   3c06a:	ba 01 00 00 00       	mov    $0x1,%edx
   3c06f:	48 89 df             	mov    %rbx,%rdi
   3c072:	ff 15 00 7c 0c 00    	call   *0xc7c00(%rip)        # 103c78 <_DYNAMIC+0x218>
   3c078:	48 8b 74 24 28       	mov    0x28(%rsp),%rsi
   3c07d:	48 85 f6             	test   %rsi,%rsi
   3c080:	48 8b 6c 24 40       	mov    0x40(%rsp),%rbp
   3c085:	0f 84 95 fe ff ff    	je     3bf20 <strategy_comm5::live_pending_counts+0xd0>
   3c08b:	ba 01 00 00 00       	mov    $0x1,%edx
   3c090:	48 8b 7c 24 20       	mov    0x20(%rsp),%rdi
   3c095:	ff 15 dd 7b 0c 00    	call   *0xc7bdd(%rip)        # 103c78 <_DYNAMIC+0x218>
   3c09b:	e9 80 fe ff ff       	jmp    3bf20 <strategy_comm5::live_pending_counts+0xd0>
   3c0a0:	48 c7 44 24 08 00 00 	movq   $0x0,0x8(%rsp)
   3c0a7:	00 00 
   3c0a9:	49 89 cd             	mov    %rcx,%r13
   3c0ac:	31 ed                	xor    %ebp,%ebp
   3c0ae:	e9 57 01 00 00       	jmp    3c20a <strategy_comm5::live_pending_counts+0x3ba>
   3c0b3:	48 85 c0             	test   %rax,%rax
   3c0b6:	0f 84 bd 01 00 00    	je     3c279 <strategy_comm5::live_pending_counts+0x429>
   3c0bc:	48 c1 e0 03          	shl    $0x3,%rax
   3c0c0:	48 8d 1c 40          	lea    (%rax,%rax,2),%rbx
   3c0c4:	31 ed                	xor    %ebp,%ebp
   3c0c6:	49 89 ce             	mov    %rcx,%r14
   3c0c9:	48 c7 44 24 08 00 00 	movq   $0x0,0x8(%rsp)
   3c0d0:	00 00 
   3c0d2:	eb 29                	jmp    3c0fd <strategy_comm5::live_pending_counts+0x2ad>
   3c0d4:	66 66 66 2e 0f 1f 84 	data16 data16 cs nopw 0x0(%rax,%rax,1)
   3c0db:	00 00 00 00 00 
   3c0e0:	48 8b 44 24 30       	mov    0x30(%rsp),%rax
   3c0e5:	48 01 c5             	add    %rax,%rbp
   3c0e8:	34 01                	xor    $0x1,%al
   3c0ea:	0f b6 c0             	movzbl %al,%eax
   3c0ed:	48 01 44 24 08       	add    %rax,0x8(%rsp)
   3c0f2:	4c 3b 74 24 10       	cmp    0x10(%rsp),%r14
   3c0f7:	0f 84 09 02 00 00    	je     3c306 <strategy_comm5::live_pending_counts+0x4b6>
   3c0fd:	4c 89 f0             	mov    %r14,%rax
   3c100:	4c 8d 68 58          	lea    0x58(%rax),%r13
   3c104:	48 8b 10             	mov    (%rax),%rdx
   3c107:	48 b9 00 00 00 00 00 	movabs $0x8000000000000000,%rcx
   3c10e:	00 00 80 
   3c111:	48 39 ca             	cmp    %rcx,%rdx
   3c114:	0f 84 f0 00 00 00    	je     3c20a <strategy_comm5::live_pending_counts+0x3ba>
   3c11a:	48 89 54 24 28       	mov    %rdx,0x28(%rsp)
   3c11f:	4c 89 6c 24 18       	mov    %r13,0x18(%rsp)
   3c124:	4c 8b 60 08          	mov    0x8(%rax),%r12
   3c128:	4c 8b 68 10          	mov    0x10(%rax),%r13
   3c12c:	48 8b 48 18          	mov    0x18(%rax),%rcx
   3c130:	48 89 4c 24 38       	mov    %rcx,0x38(%rsp)
   3c135:	48 8b 48 20          	mov    0x20(%rax),%rcx
   3c139:	48 89 4c 24 20       	mov    %rcx,0x20(%rsp)
   3c13e:	0f b6 40 50          	movzbl 0x50(%rax),%eax
   3c142:	48 89 44 24 30       	mov    %rax,0x30(%rsp)
   3c147:	45 31 f6             	xor    %r14d,%r14d
   3c14a:	eb 0d                	jmp    3c159 <strategy_comm5::live_pending_counts+0x309>
   3c14c:	0f 1f 40 00          	nopl   0x0(%rax)
   3c150:	49 83 c6 18          	add    $0x18,%r14
   3c154:	4c 39 f3             	cmp    %r14,%rbx
   3c157:	74 67                	je     3c1c0 <strategy_comm5::live_pending_counts+0x370>
   3c159:	4f 39 6c 37 10       	cmp    %r13,0x10(%r15,%r14,1)
   3c15e:	75 f0                	jne    3c150 <strategy_comm5::live_pending_counts+0x300>
   3c160:	4b 8b 7c 37 08       	mov    0x8(%r15,%r14,1),%rdi
   3c165:	4c 89 e6             	mov    %r12,%rsi
   3c168:	4c 89 ea             	mov    %r13,%rdx
   3c16b:	ff 15 b7 7b 0c 00    	call   *0xc7bb7(%rip)        # 103d28 <bcmp@GLIBC_2.2.5>
   3c171:	85 c0                	test   %eax,%eax
   3c173:	75 db                	jne    3c150 <strategy_comm5::live_pending_counts+0x300>
   3c175:	48 8b 74 24 28       	mov    0x28(%rsp),%rsi
   3c17a:	48 85 f6             	test   %rsi,%rsi
   3c17d:	74 0e                	je     3c18d <strategy_comm5::live_pending_counts+0x33d>
   3c17f:	ba 01 00 00 00       	mov    $0x1,%edx
   3c184:	4c 89 e7             	mov    %r12,%rdi
   3c187:	ff 15 eb 7a 0c 00    	call   *0xc7aeb(%rip)        # 103c78 <_DYNAMIC+0x218>
   3c18d:	48 8b 74 24 38       	mov    0x38(%rsp),%rsi
   3c192:	48 85 f6             	test   %rsi,%rsi
   3c195:	4c 8b 6c 24 18       	mov    0x18(%rsp),%r13
   3c19a:	74 10                	je     3c1ac <strategy_comm5::live_pending_counts+0x35c>
   3c19c:	ba 01 00 00 00       	mov    $0x1,%edx
   3c1a1:	48 8b 7c 24 20       	mov    0x20(%rsp),%rdi
   3c1a6:	ff 15 cc 7a 0c 00    	call   *0xc7acc(%rip)        # 103c78 <_DYNAMIC+0x218>
   3c1ac:	4c 89 e8             	mov    %r13,%rax
   3c1af:	4c 3b 6c 24 10       	cmp    0x10(%rsp),%r13
   3c1b4:	0f 85 46 ff ff ff    	jne    3c100 <strategy_comm5::live_pending_counts+0x2b0>
   3c1ba:	eb 4e                	jmp    3c20a <strategy_comm5::live_pending_counts+0x3ba>
   3c1bc:	0f 1f 40 00          	nopl   0x0(%rax)
   3c1c0:	48 8b 74 24 28       	mov    0x28(%rsp),%rsi
   3c1c5:	48 85 f6             	test   %rsi,%rsi
   3c1c8:	74 0e                	je     3c1d8 <strategy_comm5::live_pending_counts+0x388>
   3c1ca:	ba 01 00 00 00       	mov    $0x1,%edx
   3c1cf:	4c 89 e7             	mov    %r12,%rdi
   3c1d2:	ff 15 a0 7a 0c 00    	call   *0xc7aa0(%rip)        # 103c78 <_DYNAMIC+0x218>
   3c1d8:	48 8b 74 24 38       	mov    0x38(%rsp),%rsi
   3c1dd:	48 85 f6             	test   %rsi,%rsi
   3c1e0:	4c 8b 74 24 18       	mov    0x18(%rsp),%r14
   3c1e5:	0f 84 f5 fe ff ff    	je     3c0e0 <strategy_comm5::live_pending_counts+0x290>
   3c1eb:	ba 01 00 00 00       	mov    $0x1,%edx
   3c1f0:	48 8b 7c 24 20       	mov    0x20(%rsp),%rdi
   3c1f5:	ff 15 7d 7a 0c 00    	call   *0xc7a7d(%rip)        # 103c78 <_DYNAMIC+0x218>
   3c1fb:	e9 e0 fe ff ff       	jmp    3c0e0 <strategy_comm5::live_pending_counts+0x290>
   3c200:	4c 8b 6c 24 18       	mov    0x18(%rsp),%r13
   3c205:	eb 03                	jmp    3c20a <strategy_comm5::live_pending_counts+0x3ba>
   3c207:	49 89 cd             	mov    %rcx,%r13
   3c20a:	48 8b 74 24 10       	mov    0x10(%rsp),%rsi
   3c20f:	48 89 f0             	mov    %rsi,%rax
   3c212:	4c 29 e8             	sub    %r13,%rax
   3c215:	48 b9 a3 8b 2e ba e8 	movabs $0x2e8ba2e8ba2e8ba3,%rcx
   3c21c:	a2 8b 2e 
   3c21f:	48 f7 e1             	mul    %rcx
   3c222:	4c 39 ee             	cmp    %r13,%rsi
   3c225:	0f 84 db 00 00 00    	je     3c306 <strategy_comm5::live_pending_counts+0x4b6>
   3c22b:	48 89 d3             	mov    %rdx,%rbx
   3c22e:	48 c1 eb 04          	shr    $0x4,%rbx
   3c232:	49 83 c5 20          	add    $0x20,%r13
   3c236:	4c 8b 35 3b 7a 0c 00 	mov    0xc7a3b(%rip),%r14        # 103c78 <_DYNAMIC+0x218>
   3c23d:	eb 0e                	jmp    3c24d <strategy_comm5::live_pending_counts+0x3fd>
   3c23f:	90                   	nop
   3c240:	49 83 c5 58          	add    $0x58,%r13
   3c244:	48 ff cb             	dec    %rbx
   3c247:	0f 84 b9 00 00 00    	je     3c306 <strategy_comm5::live_pending_counts+0x4b6>
   3c24d:	49 8b 75 e0          	mov    -0x20(%r13),%rsi
   3c251:	48 85 f6             	test   %rsi,%rsi
   3c254:	74 0c                	je     3c262 <strategy_comm5::live_pending_counts+0x412>
   3c256:	49 8b 7d e8          	mov    -0x18(%r13),%rdi
   3c25a:	ba 01 00 00 00       	mov    $0x1,%edx
   3c25f:	41 ff d6             	call   *%r14
   3c262:	49 8b 75 f8          	mov    -0x8(%r13),%rsi
   3c266:	48 85 f6             	test   %rsi,%rsi
   3c269:	74 d5                	je     3c240 <strategy_comm5::live_pending_counts+0x3f0>
   3c26b:	49 8b 7d 00          	mov    0x0(%r13),%rdi
   3c26f:	ba 01 00 00 00       	mov    $0x1,%edx
   3c274:	41 ff d6             	call   *%r14
   3c277:	eb c7                	jmp    3c240 <strategy_comm5::live_pending_counts+0x3f0>
   3c279:	4c 8d 69 58          	lea    0x58(%rcx),%r13
   3c27d:	31 ed                	xor    %ebp,%ebp
   3c27f:	4c 8b 3d f2 79 0c 00 	mov    0xc79f2(%rip),%r15        # 103c78 <_DYNAMIC+0x218>
   3c286:	48 c7 44 24 08 00 00 	movq   $0x0,0x8(%rsp)
   3c28d:	00 00 
   3c28f:	eb 32                	jmp    3c2c3 <strategy_comm5::live_pending_counts+0x473>
   3c291:	66 66 66 66 66 66 2e 	data16 data16 data16 data16 data16 cs nopw 0x0(%rax,%rax,1)
   3c298:	0f 1f 84 00 00 00 00 
   3c29f:	00 
   3c2a0:	49 8d 45 a8          	lea    -0x58(%r13),%rax
   3c2a4:	4c 01 e5             	add    %r12,%rbp
   3c2a7:	41 80 f4 01          	xor    $0x1,%r12b
   3c2ab:	41 0f b6 cc          	movzbl %r12b,%ecx
   3c2af:	48 01 4c 24 08       	add    %rcx,0x8(%rsp)
   3c2b4:	49 83 c5 58          	add    $0x58,%r13
   3c2b8:	48 83 c0 58          	add    $0x58,%rax
   3c2bc:	48 3b 44 24 10       	cmp    0x10(%rsp),%rax
   3c2c1:	74 43                	je     3c306 <strategy_comm5::live_pending_counts+0x4b6>
   3c2c3:	49 8b 75 a8          	mov    -0x58(%r13),%rsi
   3c2c7:	49 8b 5d c0          	mov    -0x40(%r13),%rbx
   3c2cb:	4d 8b 75 c8          	mov    -0x38(%r13),%r14
   3c2cf:	45 0f b6 65 f8       	movzbl -0x8(%r13),%r12d
   3c2d4:	48 85 f6             	test   %rsi,%rsi
   3c2d7:	74 18                	je     3c2f1 <strategy_comm5::live_pending_counts+0x4a1>
   3c2d9:	48 89 f0             	mov    %rsi,%rax
   3c2dc:	48 f7 d8             	neg    %rax
   3c2df:	0f 80 25 ff ff ff    	jo     3c20a <strategy_comm5::live_pending_counts+0x3ba>
   3c2e5:	49 8b 7d b0          	mov    -0x50(%r13),%rdi
   3c2e9:	ba 01 00 00 00       	mov    $0x1,%edx
   3c2ee:	41 ff d7             	call   *%r15
   3c2f1:	48 85 db             	test   %rbx,%rbx
   3c2f4:	74 aa                	je     3c2a0 <strategy_comm5::live_pending_counts+0x450>
   3c2f6:	ba 01 00 00 00       	mov    $0x1,%edx
   3c2fb:	4c 89 f7             	mov    %r14,%rdi
   3c2fe:	48 89 de             	mov    %rbx,%rsi
   3c301:	41 ff d7             	call   *%r15
   3c304:	eb 9a                	jmp    3c2a0 <strategy_comm5::live_pending_counts+0x450>
   3c306:	48 8b 44 24 50       	mov    0x50(%rsp),%rax
   3c30b:	48 85 c0             	test   %rax,%rax
   3c30e:	74 14                	je     3c324 <strategy_comm5::live_pending_counts+0x4d4>
   3c310:	48 6b f0 58          	imul   $0x58,%rax,%rsi
   3c314:	ba 08 00 00 00       	mov    $0x8,%edx
   3c319:	48 8b 7c 24 48       	mov    0x48(%rsp),%rdi
   3c31e:	ff 15 54 79 0c 00    	call   *0xc7954(%rip)        # 103c78 <_DYNAMIC+0x218>
   3c324:	48 8b 5c 24 70       	mov    0x70(%rsp),%rbx
   3c329:	4c 8b 74 24 78       	mov    0x78(%rsp),%r14
   3c32e:	4d 85 f6             	test   %r14,%r14
   3c331:	74 2c                	je     3c35f <strategy_comm5::live_pending_counts+0x50f>
   3c333:	4c 8d 7b 08          	lea    0x8(%rbx),%r15
   3c337:	4c 8b 25 3a 79 0c 00 	mov    0xc793a(%rip),%r12        # 103c78 <_DYNAMIC+0x218>
   3c33e:	eb 09                	jmp    3c349 <strategy_comm5::live_pending_counts+0x4f9>
   3c340:	49 83 c7 18          	add    $0x18,%r15
   3c344:	49 ff ce             	dec    %r14
   3c347:	74 16                	je     3c35f <strategy_comm5::live_pending_counts+0x50f>
   3c349:	49 8b 77 f8          	mov    -0x8(%r15),%rsi
   3c34d:	48 85 f6             	test   %rsi,%rsi
   3c350:	74 ee                	je     3c340 <strategy_comm5::live_pending_counts+0x4f0>
   3c352:	49 8b 3f             	mov    (%r15),%rdi
   3c355:	ba 01 00 00 00       	mov    $0x1,%edx
   3c35a:	41 ff d4             	call   *%r12
   3c35d:	eb e1                	jmp    3c340 <strategy_comm5::live_pending_counts+0x4f0>
   3c35f:	48 8b 44 24 68       	mov    0x68(%rsp),%rax
   3c364:	48 85 c0             	test   %rax,%rax
   3c367:	74 16                	je     3c37f <strategy_comm5::live_pending_counts+0x52f>
   3c369:	48 c1 e0 03          	shl    $0x3,%rax
   3c36d:	48 8d 34 40          	lea    (%rax,%rax,2),%rsi
   3c371:	ba 08 00 00 00       	mov    $0x8,%edx
   3c376:	48 89 df             	mov    %rbx,%rdi
   3c379:	ff 15 f9 78 0c 00    	call   *0xc78f9(%rip)        # 103c78 <_DYNAMIC+0x218>
   3c37f:	48 89 e8             	mov    %rbp,%rax
   3c382:	48 8b 54 24 08       	mov    0x8(%rsp),%rdx
   3c387:	48 81 c4 98 00 00 00 	add    $0x98,%rsp
   3c38e:	5b                   	pop    %rbx
   3c38f:	41 5c                	pop    %r12
   3c391:	41 5d                	pop    %r13
   3c393:	41 5e                	pop    %r14
   3c395:	41 5f                	pop    %r15
   3c397:	5d                   	pop    %rbp
   3c398:	c3                   	ret    
   3c399:	48 89 c3             	mov    %rax,%rbx
   3c39c:	48 8d bc 24 80 00 00 	lea    0x80(%rsp),%rdi
   3c3a3:	00 
   3c3a4:	e8 77 e3 ff ff       	call   3a720 <core::ptr::drop_in_place<alloc::vec::Vec<future_backtest_sdk::types::PendingOrder>>>
   3c3a9:	48 89 df             	mov    %rbx,%rdi
   3c3ac:	e8 cf 01 0c 00       	call   fc580 <_Unwind_Resume@plt>
   3c3b1:	cc                   	int3   
   3c3b2:	cc                   	int3   
   3c3b3:	cc                   	int3   
   3c3b4:	cc                   	int3   
   3c3b5:	cc                   	int3   
   3c3b6:	cc                   	int3   
   3c3b7:	cc                   	int3   
   3c3b8:	cc                   	int3   
   3c3b9:	cc                   	int3   
   3c3ba:	cc                   	int3   
   3c3bb:	cc                   	int3   
   3c3bc:	cc                   	int3   
   3c3bd:	cc                   	int3   
   3c3be:	cc                   	int3   
   3c3bf:	cc                   	int3   
