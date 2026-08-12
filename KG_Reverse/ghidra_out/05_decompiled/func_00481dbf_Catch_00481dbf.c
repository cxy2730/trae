// Function: Catch@00481dbf
// Entry:    00481dbf
// Size:     22 bytes
// Conv:     unknown
// Signature: undefined Catch@00481dbf(void)
// Decompiled by Ghidra 12.1.2


void Catch_00481dbf(undefined4 *param_1)

{
  int extraout_ECX;
  int unaff_EBP;
  
  LeaveCriticalSection((LPCRITICAL_SECTION)(*(int *)(unaff_EBP + -0x14) + 0x10));
  __CxxThrowException_8(0,0);
  if (param_1 != (undefined4 *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)(extraout_ECX + 0x10));
    *param_1 = *(undefined4 *)(extraout_ECX + 0xc);
    *(undefined4 **)(extraout_ECX + 0xc) = param_1;
    LeaveCriticalSection((LPCRITICAL_SECTION)(extraout_ECX + 0x10));
  }
  return;
}

