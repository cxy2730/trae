// Function: FUN_0041b7c0
// Entry:    0041b7c0
// Size:     48 bytes
// Conv:     unknown
// Signature: undefined FUN_0041b7c0(void)
// Decompiled by Ghidra 12.1.2


void FUN_0041b7c0(LPVOID param_1)

{
  int iVar1;
  
  if (param_1 != (LPVOID)0x0) {
    iVar1 = FUN_00415c20(param_1);
    if (iVar1 == 0) {
      HeapFree(DAT_02fe863c,0,param_1);
    }
  }
  return;
}

