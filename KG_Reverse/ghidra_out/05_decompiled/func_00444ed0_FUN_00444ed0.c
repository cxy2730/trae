// Function: FUN_00444ed0
// Entry:    00444ed0
// Size:     109 bytes
// Conv:     unknown
// Signature: undefined FUN_00444ed0(void)
// Decompiled by Ghidra 12.1.2


void __thiscall FUN_00444ed0(int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  
  if (param_2 != -1) {
    if ((param_2 == -0x1000000) && (*(int *)(*(int *)(param_1 + 0x58) + -8) != 0)) {
      *(undefined4 *)(param_1 + 0x54) = 0xfffffffd;
      return;
    }
    iVar1 = 0;
    if (0 < *(int *)(param_1 + 0x3c)) {
      piVar2 = &DAT_02fb21a4;
      do {
        if (*piVar2 == param_2) {
          *(int *)(param_1 + 0x54) = iVar1;
          return;
        }
        iVar1 = iVar1 + 1;
        piVar2 = piVar2 + 2;
      } while (iVar1 < *(int *)(param_1 + 0x3c));
    }
    if (*(int *)(*(int *)(param_1 + 0x5c) + -8) != 0) {
      *(undefined4 *)(param_1 + 0x54) = 0xfffffffe;
      return;
    }
  }
  *(undefined4 *)(param_1 + 0x54) = 0xffffffff;
  return;
}

