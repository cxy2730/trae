// Function: FUN_0041b0d0
// Entry:    0041b0d0
// Size:     162 bytes
// Conv:     unknown
// Signature: undefined FUN_0041b0d0(void)
// Decompiled by Ghidra 12.1.2


void __fastcall FUN_0041b0d0(int param_1)

{
  if (*(int *)(param_1 + 0x284) == 1) {
    *(undefined4 *)(param_1 + 0x284) = 2;
    do {
    } while (*(int *)(param_1 + 0x284) != 0);
    if (*(int *)(param_1 + 0x28c) != 0) {
      WaitForSingleObject(*(HANDLE *)(param_1 + 0x28c),0xffffffff);
    }
  }
  if (*(int *)(param_1 + 0x28c) != 0) {
    CloseHandle(*(HANDLE *)(param_1 + 0x28c));
    *(undefined4 *)(param_1 + 0x28c) = 0;
  }
  if (*(int *)(param_1 + 0x2a0) != 0) {
    FUN_00424e70();
  }
  FUN_004112c0();
  return;
}

