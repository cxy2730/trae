// Function: FUN_0048606b
// Entry:    0048606b
// Size:     52 bytes
// Conv:     unknown
// Signature: undefined FUN_0048606b(void)
// Decompiled by Ghidra 12.1.2


undefined4 FUN_0048606b(void)

{
  LPVOID pvVar1;
  int unaff_EBP;
  int unaff_ESI;
  
  if (unaff_ESI == 0) {
    unaff_ESI = 1;
  }
  pvVar1 = HeapReAlloc(DAT_03014ea4,0x10,*(LPVOID *)(unaff_EBP + 8),unaff_ESI + 0xfU & 0xfffffff0);
  *(LPVOID *)(unaff_EBP + -0x1c) = pvVar1;
  ExceptionList = *(void **)(unaff_EBP + -0x10);
  return *(undefined4 *)(unaff_EBP + -0x1c);
}

