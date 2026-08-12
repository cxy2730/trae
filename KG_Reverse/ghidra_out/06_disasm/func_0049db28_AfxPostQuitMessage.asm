; Function: AfxPostQuitMessage
; Entry:    0049db28
; Size:     35 bytes

0049db28  CALL 0x00497f17
0049db2d  TEST EAX,EAX
0049db2f  JZ 0x0049db3e
0049db31  MOV EAX,dword ptr [EAX + 0x54]
0049db34  TEST EAX,EAX
0049db36  JZ 0x0049db3e
0049db38  PUSH 0x1
0049db3a  PUSH 0x1
0049db3c  CALL EAX
0049db3e  PUSH dword ptr [ESP + 0x4]
0049db42  CALL dword ptr [0x004a2430]
0049db48  RET 0x4
