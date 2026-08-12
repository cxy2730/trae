// Function: FUN_0041cc10
// Entry:    0041cc10
// Size:     38 bytes
// Conv:     unknown
// Signature: undefined FUN_0041cc10(void)
// Decompiled by Ghidra 12.1.2


int FUN_0041cc10(int param_1)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = 0;
  if (0 < DAT_02fab724) {
    piVar2 = &DAT_02fab6e8;
    do {
      if (*piVar2 == param_1) {
        return iVar1;
      }
      iVar1 = iVar1 + 1;
      piVar2 = piVar2 + 1;
    } while (iVar1 < DAT_02fab724);
  }
  return param_1;
}

