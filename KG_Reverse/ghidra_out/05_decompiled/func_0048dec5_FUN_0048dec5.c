// Function: FUN_0048dec5
// Entry:    0048dec5
// Size:     26 bytes
// Conv:     unknown
// Signature: undefined FUN_0048dec5(void)
// Decompiled by Ghidra 12.1.2


uint FUN_0048dec5(undefined4 *param_1)

{
  int *piVar1;
  byte bVar2;
  uint uVar3;
  
  piVar1 = param_1 + 1;
  *piVar1 = *piVar1 + -1;
  if (-1 < *piVar1) {
    bVar2 = *(byte *)*param_1;
    *param_1 = (byte *)*param_1 + 1;
    return (uint)bVar2;
  }
  uVar3 = FUN_0048c863(param_1);
  return uVar3;
}

