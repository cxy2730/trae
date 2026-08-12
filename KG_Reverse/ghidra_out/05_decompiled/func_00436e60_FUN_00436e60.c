// Function: FUN_00436e60
// Entry:    00436e60
// Size:     65 bytes
// Conv:     unknown
// Signature: undefined FUN_00436e60(void)
// Decompiled by Ghidra 12.1.2


void FUN_00436e60(HWND param_1,undefined4 param_2)

{
  int iVar1;
  LRESULT LVar2;
  
  iVar1 = FUN_00494b40(0);
  if (iVar1 == 0) {
    return;
  }
  iVar1 = FUN_00492b65(param_1);
  if (iVar1 == 0) {
    LVar2 = SendMessageA(param_1,0x8002,0,0);
    if (LVar2 == 0) {
      return;
    }
  }
  FUN_00496437(param_2);
  return;
}

