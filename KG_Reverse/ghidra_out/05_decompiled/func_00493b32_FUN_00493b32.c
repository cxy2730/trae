// Function: FUN_00493b32
// Entry:    00493b32
// Size:     32 bytes
// Conv:     unknown
// Signature: undefined FUN_00493b32(void)
// Decompiled by Ghidra 12.1.2


void __fastcall FUN_00493b32(int param_1)

{
  if (*(HANDLE *)(param_1 + 4) != (HANDLE)0xffffffff) {
    CloseHandle(*(HANDLE *)(param_1 + 4));
    *(undefined4 *)(param_1 + 4) = 0xffffffff;
  }
  FUN_00493161();
  return;
}

