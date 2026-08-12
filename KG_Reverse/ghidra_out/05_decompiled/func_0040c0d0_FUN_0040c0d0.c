// Function: FUN_0040c0d0
// Entry:    0040c0d0
// Size:     87 bytes
// Conv:     unknown
// Signature: undefined FUN_0040c0d0(void)
// Decompiled by Ghidra 12.1.2


void __fastcall FUN_0040c0d0(int param_1)

{
  LRESULT LVar1;
  int iVar2;
  int iVar3;
  
  *(undefined4 *)(param_1 + 0xc4) = 0xffffffff;
  if (*(int *)(param_1 + 0x58) == 1) {
    LVar1 = SendMessageA(*(HWND *)(param_1 + 0x1c),0x18b,0,0);
    if ((LVar1 != -1) && (iVar3 = 0, 0 < LVar1)) {
      while( true ) {
        iVar2 = FUN_0049b4df(iVar3);
        if (iVar2 == 1) break;
        iVar3 = iVar3 + 1;
        if (LVar1 <= iVar3) {
          return;
        }
      }
      *(int *)(param_1 + 0xc4) = iVar3;
    }
  }
  return;
}

