// Function: FUN_004943ea
// Entry:    004943ea
// Size:     35 bytes
// Conv:     unknown
// Signature: undefined FUN_004943ea(void)
// Decompiled by Ghidra 12.1.2


void __thiscall FUN_004943ea(int *param_1,INT_PTR param_2)

{
  if ((*(byte *)(param_1 + 9) & 0x18) != 0) {
    (**(code **)(*param_1 + 0x74))(param_2);
  }
  EndDialog((HWND)param_1[7],param_2);
  return;
}

