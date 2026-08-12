// Function: FUN_004973e5
// Entry:    004973e5
// Size:     51 bytes
// Conv:     unknown
// Signature: undefined FUN_004973e5(void)
// Decompiled by Ghidra 12.1.2


void __thiscall FUN_004973e5(int param_1,LPMSG param_2)

{
  int iVar1;
  
  if ((*(byte *)(param_1 + 0x25) & 1) == 0) {
    IsDialogMessageA(*(HWND *)(param_1 + 0x1c),param_2);
  }
  else {
    iVar1 = FUN_0049c724();
    (**(code **)(**(int **)(iVar1 + 0x1038) + 0x24))(param_1,param_2);
  }
  return;
}

