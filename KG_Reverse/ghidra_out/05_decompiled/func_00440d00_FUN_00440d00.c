// Function: FUN_00440d00
// Entry:    00440d00
// Size:     86 bytes
// Conv:     unknown
// Signature: undefined FUN_00440d00(void)
// Decompiled by Ghidra 12.1.2


void FUN_00440d00(undefined4 *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  uVar2 = *(undefined4 *)(**(int **)*param_1 + 0x2dc);
  iVar1 = FUN_0043e590(uVar2);
  if (iVar1 == 0) {
    param_1[8] = 4;
    return;
  }
  iVar1 = FUN_00440b90(uVar2);
  if (iVar1 != 0) {
    param_1[8] = 3;
    uVar2 = FUN_0043e540(uVar2);
    param_1[9] = uVar2;
    return;
  }
  param_1[8] = 1;
  return;
}

