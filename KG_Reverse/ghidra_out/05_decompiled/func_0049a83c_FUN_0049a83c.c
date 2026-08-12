// Function: FUN_0049a83c
// Entry:    0049a83c
// Size:     54 bytes
// Conv:     unknown
// Signature: undefined FUN_0049a83c(void)
// Decompiled by Ghidra 12.1.2


void FUN_0049a83c(HGLOBAL param_1)

{
  UINT UVar1;
  uint uVar2;
  
  if (param_1 != (HGLOBAL)0x0) {
    UVar1 = GlobalFlags(param_1);
    for (uVar2 = UVar1 & 0xff; uVar2 != 0; uVar2 = uVar2 - 1) {
      GlobalUnlock(param_1);
    }
    GlobalFree(param_1);
  }
  return;
}

