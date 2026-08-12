// Function: FUN_0047bba0
// Entry:    0047bba0
// Size:     70 bytes
// Conv:     unknown
// Signature: undefined FUN_0047bba0(void)
// Decompiled by Ghidra 12.1.2


void FUN_0047bba0(int param_1,int param_2,int *param_3)

{
  int *piVar1;
  int *piVar2;
  
  if (0 < param_1) {
    piVar1 = (int *)(param_2 + 4);
    piVar2 = param_3;
    do {
      *piVar2 = *piVar1 + piVar1[-1];
      piVar2 = piVar2 + 2;
      *(int *)((int)param_3 + (-8 - param_2) + (int)(piVar1 + 2)) =
           (piVar1[-1] - *piVar1) * DAT_0300d454 >> 10;
      param_1 = param_1 + -1;
      piVar1 = piVar1 + 2;
    } while (param_1 != 0);
  }
  return;
}

