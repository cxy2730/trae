// Function: FUN_00430a20
// Entry:    00430a20
// Size:     71 bytes
// Conv:     unknown
// Signature: undefined FUN_00430a20(void)
// Decompiled by Ghidra 12.1.2


void FUN_00430a20(int *param_1)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)*param_1;
  iVar2 = param_1[1];
  if (piVar1 != (int *)0x0) {
    if (iVar2 != 0) {
      (**(code **)(*piVar1 + 0x48))(piVar1,iVar2);
      param_1[1] = 0;
    }
    (**(code **)(*piVar1 + 8))(piVar1);
    *param_1 = 0;
    return;
  }
  if (iVar2 != 0) {
    FUN_0041b7c0(iVar2);
    param_1[1] = 0;
  }
  return;
}

