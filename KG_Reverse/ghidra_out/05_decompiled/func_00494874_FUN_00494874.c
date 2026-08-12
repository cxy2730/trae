// Function: FUN_00494874
// Entry:    00494874
// Size:     35 bytes
// Conv:     unknown
// Signature: undefined FUN_00494874(void)
// Decompiled by Ghidra 12.1.2


void FUN_00494874(int param_1,LPRECT param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  
  GetWindowRect(*(HWND *)(param_1 + 0x1c),param_2);
  uVar1 = FUN_00497418();
  *param_3 = uVar1;
  return;
}

