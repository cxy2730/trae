// Function: FUN_0040b310
// Entry:    0040b310
// Size:     64 bytes
// Conv:     unknown
// Signature: undefined FUN_0040b310(void)
// Decompiled by Ghidra 12.1.2


undefined4 __fastcall FUN_0040b310(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_00494b19();
  if (iVar1 == -1) {
    return 0xffffffff;
  }
  if ((0 < (int)*(UINT *)(param_1 + 0x40)) && (*(int *)(param_1 + 0x4c) == 0)) {
    SetTimer(*(HWND *)(param_1 + 0x1c),1000,*(UINT *)(param_1 + 0x40),(TIMERPROC)0x0);
    *(undefined4 *)(param_1 + 0x50) = 1;
  }
  return 0;
}

