// Function: FUN_00408280
// Entry:    00408280
// Size:     40 bytes
// Conv:     unknown
// Signature: undefined FUN_00408280(void)
// Decompiled by Ghidra 12.1.2


LRESULT __fastcall FUN_00408280(int param_1)

{
  LRESULT LVar1;
  
  if ((*(int *)(param_1 + 0x80) == 0) && (*(int *)(param_1 + 0x74) == 1)) {
    return *(LRESULT *)(param_1 + 0x70);
  }
  LVar1 = SendMessageA(*(HWND *)(param_1 + 0x1c),0x130b,0,0);
  return LVar1;
}

