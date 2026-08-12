// Function: FUN_00481d0a
// Entry:    00481d0a
// Size:     20 bytes
// Conv:     unknown
// Signature: undefined FUN_00481d0a(void)
// Decompiled by Ghidra 12.1.2


void __fastcall FUN_00481d0a(int param_1)

{
  FUN_00481d1e();
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x10));
  return;
}

