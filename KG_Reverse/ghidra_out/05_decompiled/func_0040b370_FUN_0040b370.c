// Function: FUN_0040b370
// Entry:    0040b370
// Size:     38 bytes
// Conv:     unknown
// Signature: undefined FUN_0040b370(void)
// Decompiled by Ghidra 12.1.2


void __fastcall FUN_0040b370(int param_1)

{
  FUN_004952bc();
  if (*(int *)(param_1 + 0x50) == 1) {
    KillTimer(*(HWND *)(param_1 + 0x1c),1000);
    *(undefined4 *)(param_1 + 0x50) = 0;
  }
  return;
}

