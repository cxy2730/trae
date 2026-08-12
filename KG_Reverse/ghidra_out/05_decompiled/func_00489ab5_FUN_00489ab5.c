// Function: FUN_00489ab5
// Entry:    00489ab5
// Size:     21 bytes
// Conv:     unknown
// Signature: undefined FUN_00489ab5(void)
// Decompiled by Ghidra 12.1.2


void FUN_00489ab5(int param_1)

{
  LeaveCriticalSection(*(LPCRITICAL_SECTION *)(&DAT_02fd97e0 + param_1 * 4));
  return;
}

