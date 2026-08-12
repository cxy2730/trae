; Function: FUN_0040fa80
; Entry:    0040fa80
; Size:     812 bytes

0040fa80  PUSH -0x1
0040fa82  PUSH 0x49e57a
0040fa87  MOV EAX,FS:[0x0]
0040fa8d  PUSH EAX
0040fa8e  MOV dword ptr FS:[0x0],ESP
0040fa95  PUSH ECX
0040fa96  PUSH EBX
0040fa97  PUSH ESI
0040fa98  PUSH EDI
0040fa99  XOR EDI,EDI
0040fa9b  MOV ESI,ECX
0040fa9d  PUSH EDI
0040fa9e  MOV dword ptr [ESP + 0x10],ESI
0040faa2  CALL 0x0049ce27
0040faa7  MOV EAX,[0x02fd8088]
0040faac  MOV dword ptr [ESP + 0x18],EDI
0040fab0  MOV dword ptr [ESI + 0xd0],EAX
0040fab6  MOV ECX,dword ptr [0x02fd8088]
0040fabc  MOV dword ptr [ESI + 0xd4],ECX
0040fac2  MOV EDX,dword ptr [0x02fd8088]
0040fac8  MOV dword ptr [ESI + 0xd8],EDX
0040face  LEA ECX,[ESI + 0xdc]
0040fad4  MOV byte ptr [ESP + 0x18],0x3
0040fad9  CALL 0x004923a5
0040fade  LEA ECX,[ESI + 0xf0]
0040fae4  MOV byte ptr [ESP + 0x18],0x4
0040fae9  CALL 0x004923a5
0040faee  LEA ECX,[ESI + 0x10c]
0040faf4  CALL 0x004062a0
0040faf9  MOV dword ptr [ESI + 0x108],EDI
0040faff  MOV dword ptr [ESI + 0x104],0x2f95648
0040fb09  LEA EBX,[ESI + 0x120]
0040fb0f  MOV ECX,EBX
0040fb11  CALL 0x004062a0
0040fb16  MOV dword ptr [EBX],0x2f954b0
0040fb1c  LEA EBX,[ESI + 0x134]
0040fb22  MOV ECX,EBX
0040fb24  CALL 0x004062a0
0040fb29  MOV dword ptr [EBX],0x2f954b0
0040fb2f  LEA EBX,[ESI + 0x148]
0040fb35  MOV ECX,EBX
0040fb37  CALL 0x004062a0
0040fb3c  MOV dword ptr [EBX],0x2f954b0
0040fb42  LEA EBX,[ESI + 0x15c]
0040fb48  MOV ECX,EBX
0040fb4a  CALL 0x004062a0
0040fb4f  MOV dword ptr [EBX],0x2f954b0
0040fb55  LEA EBX,[ESI + 0x170]
0040fb5b  MOV ECX,EBX
0040fb5d  CALL 0x004062a0
0040fb62  MOV dword ptr [EBX],0x2f954b0
0040fb68  LEA EBX,[ESI + 0x184]
0040fb6e  MOV ECX,EBX
0040fb70  CALL 0x004062a0
0040fb75  MOV dword ptr [EBX],0x2f954b0
0040fb7b  LEA EBX,[ESI + 0x1a0]
0040fb81  MOV ECX,EBX
0040fb83  CALL 0x004062a0
0040fb88  MOV dword ptr [EBX],0x2f954b0
0040fb8e  LEA ECX,[ESI + 0x1b4]
0040fb94  MOV byte ptr [ESP + 0x18],0xd
0040fb99  CALL 0x004923a5
0040fb9e  MOV EAX,[0x02fd8088]
0040fba3  MOV dword ptr [ESI + 0x1cc],EAX
0040fba9  MOV ECX,dword ptr [0x02fd8088]
0040fbaf  MOV dword ptr [ESI + 0x1d0],ECX
0040fbb5  LEA EBX,[ESI + 0x1ec]
0040fbbb  MOV ECX,EBX
0040fbbd  CALL 0x004062a0
0040fbc2  MOV dword ptr [EBX],0x2f954b0
0040fbc8  LEA EBX,[ESI + 0x200]
0040fbce  MOV ECX,EBX
0040fbd0  CALL 0x004062a0
0040fbd5  MOV dword ptr [EBX],0x2f954b0
0040fbdb  LEA EBX,[ESI + 0x214]
0040fbe1  MOV ECX,EBX
0040fbe3  CALL 0x004062a0
0040fbe8  MOV dword ptr [EBX],0x2f954b0
0040fbee  LEA EBX,[ESI + 0x22c]
0040fbf4  MOV ECX,EBX
0040fbf6  CALL 0x004062a0
0040fbfb  MOV dword ptr [EBX],0x2f954b0
0040fc01  LEA ECX,[ESI + 0x240]
0040fc07  CALL 0x004062a0
0040fc0c  LEA ECX,[ESI + 0x254]
0040fc12  CALL 0x004062a0
0040fc17  LEA ECX,[ESI + 0x268]
0040fc1d  CALL 0x004062a0
0040fc22  LEA ECX,[ESI + 0x290]
0040fc28  CALL 0x004062a0
0040fc2d  LEA ECX,[ESI + 0x2a4]
0040fc33  MOV byte ptr [ESP + 0x18],0x18
0040fc38  CALL 0x00424ce0
0040fc3d  LEA ECX,[ESI + 0x354]
0040fc43  MOV byte ptr [ESP + 0x18],0x19
0040fc48  CALL 0x00430b50
0040fc4d  MOV EBX,0x2f95644
0040fc52  MOV dword ptr [ESI + 0x374],EDI
0040fc58  MOV dword ptr [ESI + 0x370],EBX
0040fc5e  MOV dword ptr [ESI + 0x378],EDI
0040fc64  MOV dword ptr [ESI + 0x37c],EDI
0040fc6a  MOV dword ptr [ESI + 0x384],EBX
0040fc70  MOV dword ptr [ESI + 0x388],EDI
0040fc76  MOV dword ptr [ESI + 0x38c],EDI
0040fc7c  MOV dword ptr [ESI + 0x390],EDI
0040fc82  LEA ECX,[ESI + 0x394]
0040fc88  MOV byte ptr [ESP + 0x18],0x1c
0040fc8d  CALL 0x004272b0
0040fc92  LEA ECX,[ESI + 0x3a4]
0040fc98  MOV byte ptr [ESP + 0x18],0x1d
0040fc9d  CALL 0x0049222c
0040fca2  MOV dword ptr [ESI + 0x3b8],EBX
0040fca8  MOV dword ptr [ESI + 0x3bc],EDI
0040fcae  MOV dword ptr [ESI + 0x3c0],EDI
0040fcb4  MOV dword ptr [ESI + 0x3c4],EDI
0040fcba  LEA EBX,[ESI + 0x3c8]
0040fcc0  MOV byte ptr [ESP + 0x18],0x1f
0040fcc5  MOV ECX,EBX
0040fcc7  CALL 0x00494787
0040fccc  MOV dword ptr [EBX],0x2f9558c
0040fcd2  LEA EBX,[ESI + 0x410]
0040fcd8  MOV ECX,EBX
0040fcda  CALL 0x004062a0
0040fcdf  MOV dword ptr [EBX],0x2f954b0
0040fce5  MOV dword ptr [ESI],0x2f954f0
0040fceb  MOV dword ptr [ESI + 0x108],ESI
0040fcf1  MOV dword ptr [ESI + 0x19c],EDI
0040fcf7  MOV dword ptr [ESI + 0x198],EDI
0040fcfd  MOV dword ptr [ESI + 0x428],EDI
0040fd03  MOV dword ptr [ESI + 0x424],EDI
0040fd09  MOV dword ptr [ESI + 0x1d4],EDI
0040fd0f  MOV dword ptr [ESI + 0x1d8],EDI
0040fd15  MOV dword ptr [ESI + 0x1e0],EDI
0040fd1b  MOV dword ptr [ESI + 0x1dc],EDI
0040fd21  MOV dword ptr [ESI + 0x1e8],EDI
0040fd27  MOV dword ptr [ESI + 0x1e4],EDI
0040fd2d  PUSH 0x2fe8cd0
0040fd32  MOV dword ptr [ESI + 0x280],EDI
0040fd38  MOV dword ptr [ESI + 0x27c],EDI
0040fd3e  MOV dword ptr [ESI + 0x284],EDI
0040fd44  MOV dword ptr [ESI + 0x28c],EDI
0040fd4a  MOV dword ptr [ESI + 0x288],EDI
0040fd50  MOV dword ptr [ESI + 0x380],EDI
0040fd56  MOV dword ptr [ESI + 0x3a0],EDI
0040fd5c  MOV dword ptr [ESI + 0x404],EDI
0040fd62  MOV dword ptr [ESI + 0x408],EDI
0040fd68  MOV dword ptr [ESI + 0x40c],EDI
0040fd6e  MOV dword ptr [ESI + 0xc4],EDI
0040fd74  MOV dword ptr [ESI + 0xc8],EDI
0040fd7a  MOV dword ptr [ESI + 0xcc],EDI
0040fd80  MOV dword ptr [ESI + 0x228],EDI
0040fd86  MOV dword ptr [ESI + 0x42c],EDI
0040fd8c  MOV dword ptr [ESI + 0x1c8],EDI
0040fd92  CALL dword ptr [0x004a22c8]
0040fd98  MOV ECX,dword ptr [ESP + 0x10]
0040fd9c  MOV EAX,ESI
0040fd9e  POP EDI
0040fd9f  POP ESI
0040fda0  POP EBX
0040fda1  MOV dword ptr FS:[0x0],ECX
0040fda8  ADD ESP,0x10
0040fdab  RET
