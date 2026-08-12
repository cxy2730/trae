// Function: FUN_00430a70
// Entry:    00430a70
// Size:     40 bytes
// Conv:     unknown
// Signature: undefined FUN_00430a70(void)
// Decompiled by Ghidra 12.1.2


undefined * FUN_00430a70(int param_1)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = 0;
  piVar1 = &DAT_02fb0410;
  do {
    if (*piVar1 == param_1) {
      return *(undefined **)(iVar2 * 8 + 0x2fb0414);
    }
    piVar1 = piVar1 + 2;
    iVar2 = iVar2 + 1;
  } while ((int)piVar1 < 0x2fb0698);
  return &DAT_02fb0e80;
}

