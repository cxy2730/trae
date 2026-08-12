// Function: FUN_00427720
// Entry:    00427720
// Size:     36 bytes
// Conv:     unknown
// Signature: undefined FUN_00427720(void)
// Decompiled by Ghidra 12.1.2


int __thiscall FUN_00427720(int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = 0;
  if (0 < *(int *)(param_1 + 0x14)) {
    piVar2 = *(int **)(param_1 + 0x10);
    do {
      if (*piVar2 == param_2) {
        return iVar1;
      }
      iVar1 = iVar1 + 1;
      piVar2 = piVar2 + 1;
    } while (iVar1 < *(int *)(param_1 + 0x14));
  }
  return -1;
}

