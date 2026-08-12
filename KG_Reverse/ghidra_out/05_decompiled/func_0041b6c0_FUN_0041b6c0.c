// Function: FUN_0041b6c0
// Entry:    0041b6c0
// Size:     51 bytes
// Conv:     unknown
// Signature: undefined FUN_0041b6c0(void)
// Decompiled by Ghidra 12.1.2


LPVOID FUN_0041b6c0(SIZE_T param_1)

{
  LPVOID pvVar1;
  
  pvVar1 = HeapAlloc(DAT_02fe863c,0,param_1);
  if (pvVar1 == (LPVOID)0x0) {
    FUN_00412f50(param_1);
  }
  return pvVar1;
}

