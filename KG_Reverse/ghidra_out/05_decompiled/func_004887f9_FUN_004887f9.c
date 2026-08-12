// Function: FUN_004887f9
// Entry:    004887f9
// Size:     37 bytes
// Conv:     unknown
// Signature: undefined FUN_004887f9(void)
// Decompiled by Ghidra 12.1.2


undefined4 FUN_004887f9(int param_1)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = 0;
  piVar1 = &DAT_02fd9560;
  do {
    if (*piVar1 == param_1) {
      return *(undefined4 *)(iVar2 * 8 + 0x2fd9564);
    }
    piVar1 = piVar1 + 2;
    iVar2 = iVar2 + 1;
  } while ((int)piVar1 < 0x2fd9638);
  return 0;
}

