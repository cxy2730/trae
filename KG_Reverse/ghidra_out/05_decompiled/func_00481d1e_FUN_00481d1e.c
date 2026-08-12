// Function: FUN_00481d1e
// Entry:    00481d1e
// Size:     40 bytes
// Conv:     unknown
// Signature: undefined FUN_00481d1e(void)
// Decompiled by Ghidra 12.1.2


void __fastcall FUN_00481d1e(int param_1)

{
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x10));
  FUN_00492a20();
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x10));
  return;
}

