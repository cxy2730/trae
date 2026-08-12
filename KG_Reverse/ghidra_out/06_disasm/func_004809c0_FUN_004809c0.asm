; Function: FUN_004809c0
; Entry:    004809c0
; Size:     1176 bytes

004809c0  SUB ESP,0x60
004809c3  MOV ECX,dword ptr [ESP + 0x64]
004809c7  PUSH EBX
004809c8  PUSH EBP
004809c9  MOV EBP,0x30114a4
004809ce  SUB EBP,ECX
004809d0  PUSH ESI
004809d1  MOV dword ptr [ESP + 0x10],EBP
004809d5  LEA EBP,[ESP + 0x24]
004809d9  SUB EBP,ECX
004809db  PUSH EDI
004809dc  MOV dword ptr [ESP + 0x18],EBP
004809e0  LEA EBP,[ESP + 0x3c]
004809e4  SUB EBP,ECX
004809e6  MOV EDI,0x3011480
004809eb  MOV dword ptr [ESP + 0x1c],EBP
004809ef  LEA EBP,[ESP + 0x4c]
004809f3  SUB EBP,ECX
004809f5  MOV EBX,0x30114e0
004809fa  MOV dword ptr [ESP + 0x20],EBP
004809fe  LEA EBP,[ESP + 0x60]
00480a02  XOR EDX,EDX
00480a04  SUB EDI,ECX
00480a06  SUB EBX,ECX
00480a08  SUB EBP,ECX
00480a0a  MOV EAX,ECX
00480a0c  LEA ESI,[ECX + 0x20]
00480a0f  MOV dword ptr [ESP + 0x24],EBP
00480a13  FLD float ptr [EDI + EAX*0x1]
00480a16  FMUL float ptr [EAX]
00480a18  FLD float ptr [ESI + 0x24]
00480a1b  FMUL float ptr [EDX + 0x30114c4]
00480a21  MOV EBP,dword ptr [ESP + 0x14]
00480a25  SUB EDX,0x4
00480a28  SUB ESI,0x4
00480a2b  ADD EAX,0x4
00480a2e  FLD ST0
00480a30  FADD ST0,ST2
00480a32  CMP EDX,-0x10
00480a35  FSTP float ptr [ESP + 0x74]
00480a39  FXCH
00480a3b  FSUB ST0,ST1
00480a3d  FMUL float ptr [EBX + EAX*0x1 + -0x4]
00480a41  FXCH
00480a43  FSTP ST0
00480a45  FLD float ptr [ESI + 0x4]
00480a48  FMUL float ptr [EDX + 0x30114a4]
00480a4e  FLD float ptr [EAX + EBP*0x1 + -0x4]
00480a52  FMUL float ptr [EAX + 0x20]
00480a55  MOV EBP,dword ptr [ESP + 0x18]
00480a59  FLD ST0
00480a5b  FADD ST0,ST2
00480a5d  FSTP float ptr [ESP + 0x10]
00480a61  FXCH
00480a63  FSUB ST0,ST1
00480a65  FMUL float ptr [EDX + 0x3011504]
00480a6b  FXCH
00480a6d  FSTP ST0
00480a6f  FLD float ptr [ESP + 0x10]
00480a73  FADD float ptr [ESP + 0x74]
00480a77  FSTP float ptr [EAX + EBP*0x1 + -0x4]
00480a7b  FLD float ptr [ESP + 0x74]
00480a7f  FSUB float ptr [ESP + 0x10]
00480a83  MOV EBP,dword ptr [ESP + 0x1c]
00480a87  FSTP float ptr [EAX + EBP*0x1 + -0x4]
00480a8b  MOV EBP,dword ptr [ESP + 0x20]
00480a8f  FLD ST0
00480a91  FADD ST0,ST2
00480a93  FSTP float ptr [EAX + EBP*0x1 + -0x4]
00480a97  MOV EBP,dword ptr [ESP + 0x24]
00480a9b  FXCH
00480a9d  FSUB ST0,ST1
00480a9f  FSTP float ptr [EAX + EBP*0x1 + -0x4]
00480aa3  FSTP ST0
00480aa5  JG 0x00480a13
00480aab  FLD float ptr [0x03011490]
00480ab1  FMUL float ptr [ECX + 0x10]
00480ab4  FLD float ptr [0x030114b4]
00480aba  FMUL float ptr [ECX + 0x34]
00480abd  FLD ST0
00480abf  FADD ST0,ST2
00480ac1  FSTP float ptr [ESP + 0x38]
00480ac5  FXCH
00480ac7  FSUB ST0,ST1
00480ac9  FMUL float ptr [0x030114f0]
00480acf  FXCH
00480ad1  FSTP ST0
00480ad3  FLD float ptr [ESP + 0x38]
00480ad7  FADD float ptr [ESP + 0x34]
00480adb  FADD float ptr [ESP + 0x30]
00480adf  FADD float ptr [ESP + 0x2c]
00480ae3  FADD float ptr [ESP + 0x28]
00480ae7  FMUL float ptr [0x02f9a8b8]
00480aed  FST float ptr [ECX]
00480aef  FLD ST1
00480af1  FADD float ptr [ESP + 0x58]
00480af5  FADD float ptr [ESP + 0x54]
00480af9  FADD float ptr [ESP + 0x50]
00480afd  FADD float ptr [ESP + 0x4c]
00480b01  FMUL float ptr [0x02f9a8b8]
00480b07  FST float ptr [ECX + 0x4]
00480b0a  FLD float ptr [0x0301153c]
00480b10  FMUL float ptr [ESP + 0x48]
00480b14  FLD float ptr [0x03011538]
00480b1a  FMUL float ptr [ESP + 0x44]
00480b1e  FADDP
00480b20  FLD float ptr [0x03011534]
00480b26  FMUL float ptr [ESP + 0x40]
00480b2a  FADDP
00480b2c  FLD float ptr [0x03011530]
00480b32  FMUL float ptr [ESP + 0x3c]
00480b36  FADDP
00480b38  FSTP float ptr [ECX + 0x8]
00480b3b  FLD float ptr [0x0301153c]
00480b41  FMUL float ptr [ESP + 0x6c]
00480b45  FLD float ptr [0x03011538]
00480b4b  FMUL float ptr [ESP + 0x68]
00480b4f  FADDP
00480b51  FLD float ptr [0x03011534]
00480b57  FMUL float ptr [ESP + 0x64]
00480b5b  FADDP
00480b5d  FLD float ptr [0x03011530]
00480b63  FMUL float ptr [ESP + 0x60]
00480b67  FADDP
00480b69  FSUB ST0,ST1
00480b6b  FSTP float ptr [ECX + 0xc]
00480b6e  FSUBRP
00480b70  FST float ptr [ECX + 0x4]
00480b73  FSUBR float ptr [ECX + 0x8]
00480b76  FST float ptr [ECX + 0x8]
00480b79  FLD float ptr [0x0301154c]
00480b7f  FMUL float ptr [ESP + 0x34]
00480b83  FLD float ptr [0x03011548]
00480b89  FMUL float ptr [ESP + 0x30]
00480b8d  FADDP
00480b8f  FLD float ptr [0x03011544]
00480b95  FMUL float ptr [ESP + 0x2c]
00480b99  FADDP
00480b9b  FLD float ptr [0x03011540]
00480ba1  FMUL float ptr [ESP + 0x28]
00480ba5  FADDP
00480ba7  FSUB float ptr [ESP + 0x38]
00480bab  FSTP float ptr [ECX + 0x10]
00480bae  FLD float ptr [0x0301154c]
00480bb4  FMUL float ptr [ESP + 0x58]
00480bb8  FLD float ptr [0x03011548]
00480bbe  FMUL float ptr [ESP + 0x54]
00480bc2  FADDP
00480bc4  FLD float ptr [0x03011544]
00480bca  FMUL float ptr [ESP + 0x50]
00480bce  FADDP
00480bd0  FLD float ptr [0x03011540]
00480bd6  FMUL float ptr [ESP + 0x4c]
00480bda  FADDP
00480bdc  FSUB ST0,ST2
00480bde  FSUB float ptr [ECX + 0xc]
00480be1  FSTP float ptr [ECX + 0x14]
00480be4  FSUBR float ptr [ECX + 0xc]
00480be7  FST float ptr [ECX + 0xc]
00480bea  FSUBR float ptr [ECX + 0x10]
00480bed  FST float ptr [ECX + 0x10]
00480bf0  FLD float ptr [ESP + 0x3c]
00480bf4  FSUB float ptr [ESP + 0x44]
00480bf8  FSUB float ptr [ESP + 0x48]
00480bfc  FMUL float ptr [0x03011550]
00480c02  FSTP float ptr [ECX + 0x18]
00480c05  FLD float ptr [ESP + 0x60]
00480c09  FSUB float ptr [ESP + 0x68]
00480c0d  FSUB float ptr [ESP + 0x6c]
00480c11  FMUL float ptr [0x03011550]
00480c17  FSUB float ptr [ECX + 0x14]
00480c1a  FSTP float ptr [ECX + 0x1c]
00480c1d  FSUBR float ptr [ECX + 0x14]
00480c20  FST float ptr [ECX + 0x14]
00480c23  FSUBR float ptr [ECX + 0x18]
00480c26  FST float ptr [ECX + 0x18]
00480c29  FLD float ptr [0x0301156c]
00480c2f  FMUL float ptr [ESP + 0x34]
00480c33  FLD float ptr [0x03011568]
00480c39  FMUL float ptr [ESP + 0x30]
00480c3d  FADDP
00480c3f  FLD float ptr [0x03011564]
00480c45  FMUL float ptr [ESP + 0x2c]
00480c49  FADDP
00480c4b  FLD float ptr [0x03011560]
00480c51  FMUL float ptr [ESP + 0x28]
00480c55  FADDP
00480c57  FADD float ptr [ESP + 0x38]
00480c5b  FSTP float ptr [ECX + 0x20]
00480c5e  FLD float ptr [0x0301156c]
00480c64  FMUL float ptr [ESP + 0x58]
00480c68  FLD float ptr [0x03011568]
00480c6e  FMUL float ptr [ESP + 0x54]
00480c72  FADDP
00480c74  FLD float ptr [0x03011564]
00480c7a  FMUL float ptr [ESP + 0x50]
00480c7e  FADDP
00480c80  FLD float ptr [0x03011560]
00480c86  FMUL float ptr [ESP + 0x4c]
00480c8a  FADDP
00480c8c  FADD ST0,ST2
00480c8e  FSUB float ptr [ECX + 0x1c]
00480c91  FSTP float ptr [ECX + 0x24]
00480c94  FSUBR float ptr [ECX + 0x1c]
00480c97  FST float ptr [ECX + 0x1c]
00480c9a  FSUBR float ptr [ECX + 0x20]
00480c9d  FST float ptr [ECX + 0x20]
00480ca0  FLD float ptr [0x0301157c]
00480ca6  FMUL float ptr [ESP + 0x48]
00480caa  FLD float ptr [0x03011578]
00480cb0  FMUL float ptr [ESP + 0x44]
00480cb4  FADDP
00480cb6  FLD float ptr [0x03011574]
00480cbc  FMUL float ptr [ESP + 0x40]
00480cc0  FADDP
00480cc2  FLD float ptr [0x03011570]
00480cc8  FMUL float ptr [ESP + 0x3c]
00480ccc  FADDP
00480cce  FSTP float ptr [ECX + 0x28]
00480cd1  FLD float ptr [0x0301157c]
00480cd7  FMUL float ptr [ESP + 0x6c]
00480cdb  FLD float ptr [0x03011578]
00480ce1  FMUL float ptr [ESP + 0x68]
00480ce5  FADDP
00480ce7  FLD float ptr [0x03011574]
00480ced  FMUL float ptr [ESP + 0x64]
00480cf1  FADDP
00480cf3  FLD float ptr [0x03011570]
00480cf9  FMUL float ptr [ESP + 0x60]
00480cfd  FADDP
00480cff  FSUB float ptr [ECX + 0x24]
00480d02  FSTP float ptr [ECX + 0x2c]
00480d05  FSUBR float ptr [ECX + 0x24]
00480d08  FST float ptr [ECX + 0x24]
00480d0b  FSUBR float ptr [ECX + 0x28]
00480d0e  FST float ptr [ECX + 0x28]
00480d11  FLD float ptr [ESP + 0x58]
00480d15  FADD float ptr [ESP + 0x54]
00480d19  FADD float ptr [ESP + 0x4c]
00480d1d  FMUL float ptr [0x02f9a8b8]
00480d23  FSUB float ptr [ESP + 0x50]
00480d27  FSUB ST0,ST2
00480d29  FSUB float ptr [ECX + 0x2c]
00480d2c  FSTP float ptr [ECX + 0x34]
00480d2f  FSUBR float ptr [ECX + 0x2c]
00480d32  FST float ptr [ECX + 0x2c]
00480d35  FLD float ptr [ESP + 0x34]
00480d39  FADD float ptr [ESP + 0x30]
00480d3d  FADD float ptr [ESP + 0x28]
00480d41  FMUL float ptr [0x02f9a8b8]
00480d47  FSUB float ptr [ESP + 0x2c]
00480d4b  FSUB float ptr [ESP + 0x38]
00480d4f  FSUBRP
00480d51  FST float ptr [ECX + 0x30]
00480d54  FLD float ptr [0x0301159c]
00480d5a  FMUL float ptr [ESP + 0x48]
00480d5e  FLD float ptr [0x03011598]
00480d64  FMUL float ptr [ESP + 0x44]
00480d68  FADDP
00480d6a  FLD float ptr [0x03011594]
00480d70  FMUL float ptr [ESP + 0x40]
00480d74  FADDP
00480d76  FLD float ptr [0x03011590]
00480d7c  FMUL float ptr [ESP + 0x3c]
00480d80  FADDP
00480d82  FSTP float ptr [ECX + 0x38]
00480d85  FLD float ptr [0x0301159c]
00480d8b  FMUL float ptr [ESP + 0x6c]
00480d8f  FLD float ptr [0x03011598]
00480d95  FMUL float ptr [ESP + 0x68]
00480d99  FADDP
00480d9b  FLD float ptr [0x03011594]
00480da1  FMUL float ptr [ESP + 0x64]
00480da5  FADDP
00480da7  FLD float ptr [0x03011590]
00480dad  FMUL float ptr [ESP + 0x60]
00480db1  FADDP
00480db3  FSUB float ptr [ECX + 0x34]
00480db6  FSTP float ptr [ECX + 0x3c]
00480db9  FSUBR float ptr [ECX + 0x34]
00480dbc  FST float ptr [ECX + 0x34]
00480dbf  FSUBR float ptr [ECX + 0x38]
00480dc2  FST float ptr [ESP + 0x74]
00480dc6  FSTP float ptr [ECX + 0x38]
00480dc9  FLD float ptr [0x030115ac]
00480dcf  FMUL float ptr [ESP + 0x34]
00480dd3  FLD float ptr [0x030115a8]
00480dd9  FMUL float ptr [ESP + 0x30]
00480ddd  FADDP
00480ddf  FLD float ptr [0x030115a4]
00480de5  FMUL float ptr [ESP + 0x2c]
00480de9  FADDP
00480deb  FLD float ptr [0x030115a0]
00480df1  FMUL float ptr [ESP + 0x28]
00480df5  FADDP
00480df7  FADD float ptr [ESP + 0x38]
00480dfb  FSTP float ptr [ECX + 0x40]
00480dfe  FLD float ptr [0x030115ac]
00480e04  FMUL float ptr [ESP + 0x58]
00480e08  FLD float ptr [0x030115a8]
00480e0e  FMUL float ptr [ESP + 0x54]
00480e12  FADDP
00480e14  FLD float ptr [0x030115a4]
00480e1a  FMUL float ptr [ESP + 0x50]
00480e1e  FADDP
00480e20  FLD float ptr [0x030115a0]
00480e26  FMUL float ptr [ESP + 0x4c]
00480e2a  FADDP
00480e2c  FADD ST0,ST1
00480e2e  FSUB float ptr [ECX + 0x3c]
00480e31  FSTP float ptr [ECX + 0x44]
00480e34  FSTP ST0
00480e36  FLD float ptr [ECX + 0x3c]
00480e39  FSUB float ptr [ESP + 0x74]
00480e3d  POP EDI
00480e3e  POP ESI
00480e3f  POP EBP
00480e40  POP EBX
00480e41  FST float ptr [ECX + 0x3c]
00480e44  FSUBR float ptr [ECX + 0x40]
00480e47  FST float ptr [ECX + 0x40]
00480e4a  FLD float ptr [ECX + 0x44]
00480e4d  FSUB ST0,ST1
00480e4f  FSTP float ptr [ECX + 0x44]
00480e52  FSTP ST0
00480e54  ADD ESP,0x60
00480e57  RET
