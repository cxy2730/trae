// Function: FUN_0044ffd0
// Entry:    0044ffd0
// Size:     47 bytes
// Conv:     unknown
// Signature: undefined FUN_0044ffd0(void)
// Decompiled by Ghidra 12.1.2


void FUN_0044ffd0(int *param_1,undefined1 *param_2)

{
  undefined1 uVar1;
  int iVar2;
  
  if (*(char *)((int)param_1 + 9) == '\x10') {
    for (iVar2 = (uint)*(byte *)((int)param_1 + 10) * *param_1; iVar2 != 0; iVar2 = iVar2 + -1) {
      uVar1 = *param_2;
      *param_2 = param_2[1];
      param_2[1] = uVar1;
      param_2 = param_2 + 2;
    }
  }
  return;
}

