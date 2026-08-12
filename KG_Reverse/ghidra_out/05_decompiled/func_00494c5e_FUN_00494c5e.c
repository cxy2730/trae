// Function: FUN_00494c5e
// Entry:    00494c5e
// Size:     75 bytes
// Conv:     unknown
// Signature: undefined FUN_00494c5e(void)
// Decompiled by Ghidra 12.1.2


LRESULT FUN_00494c5e(HWND param_1,UINT param_2,WPARAM param_3,LPARAM param_4)

{
  int iVar1;
  LRESULT LVar2;
  
  if (param_2 == 0x360) {
    LVar2 = 1;
  }
  else {
    iVar1 = FUN_00494bd9(param_1);
    if ((iVar1 == 0) || (*(HWND *)(iVar1 + 0x1c) != param_1)) {
      LVar2 = DefWindowProcA(param_1,param_2,param_3,param_4);
    }
    else {
      LVar2 = FUN_004949e7(iVar1,param_1,param_2,param_3,param_4);
    }
  }
  return LVar2;
}

