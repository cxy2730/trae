// Function: FUN_004937a6
// Entry:    004937a6
// Size:     30 bytes
// Conv:     unknown
// Signature: undefined FUN_004937a6(void)
// Decompiled by Ghidra 12.1.2


void FUN_004937a6(void)

{
  int *piVar1;
  int *piVar2;
  
  piVar2 = (int *)FUN_0049377e();
  piVar1 = (int *)*piVar2;
  if (piVar1[1] != 0) {
    FUN_00493701();
  }
  *piVar2 = *piVar1;
  return;
}

