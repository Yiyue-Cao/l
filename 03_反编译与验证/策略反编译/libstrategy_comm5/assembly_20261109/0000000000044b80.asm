0000000000044b80 <strategy_comm5::place>:
   44b80:	66 0f 57 c9          	xorpd  %xmm1,%xmm1
   44b84:	66 0f 2e c1          	ucomisd %xmm1,%xmm0
   44b88:	76 0b                	jbe    44b95 <strategy_comm5::place+0x15>
   44b8a:	ba 01 00 00 00       	mov    $0x1,%edx
   44b8f:	ff 25 4b f3 0b 00    	jmp    *0xbf34b(%rip)        # 103ee0 <_DYNAMIC+0x480>
   44b95:	ff 25 4d f3 0b 00    	jmp    *0xbf34d(%rip)        # 103ee8 <_DYNAMIC+0x488>
   44b9b:	cc                   	int3   
   44b9c:	cc                   	int3   
   44b9d:	cc                   	int3   
   44b9e:	cc                   	int3   
   44b9f:	cc                   	int3   
