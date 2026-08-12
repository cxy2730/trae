// Function: FUN_00481dd5
// Entry:    00481dd5
// Size:     44 bytes
// Conv:     unknown
// Signature: undefined FUN_00481dd5(void)
// Decompiled by Ghidra 12.1.2


void __thiscall FUN_00481dd5(int param_1,undefined4 *param_2)

{
  if (param_2 != (undefined4 *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x10));
    *param_2 = *(undefined4 *)(param_1 + 0xc);
    *(undefined4 **)(param_1 + 0xc) = param_2;
    LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x10));
  }
  return;
}

