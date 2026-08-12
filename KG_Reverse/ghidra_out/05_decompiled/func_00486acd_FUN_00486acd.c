// Function: FUN_00486acd
// Entry:    00486acd
// Size:     58 bytes
// Conv:     unknown
// Signature: undefined FUN_00486acd(void)
// Decompiled by Ghidra 12.1.2


int * FUN_00486acd(int param_1,int *param_2)

{
  int *piVar1;
  
  piVar1 = param_2;
  if (*param_2 != param_1) {
    do {
      piVar1 = piVar1 + 3;
      if (param_2 + DAT_02fd93f4 * 3 <= piVar1) break;
    } while (*piVar1 != param_1);
  }
  if ((param_2 + DAT_02fd93f4 * 3 <= piVar1) || (*piVar1 != param_1)) {
    piVar1 = (int *)0x0;
  }
  return piVar1;
}

