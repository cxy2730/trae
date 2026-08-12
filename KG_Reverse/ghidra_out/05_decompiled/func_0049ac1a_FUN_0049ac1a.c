// Function: FUN_0049ac1a
// Entry:    0049ac1a
// Size:     46 bytes
// Conv:     unknown
// Signature: undefined FUN_0049ac1a(void)
// Decompiled by Ghidra 12.1.2


void FUN_0049ac1a(undefined4 param_1)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)FUN_00481913();
  if (piVar1 != (int *)0x0) {
    iVar2 = (**(code **)(*piVar1 + 0xb0))();
    if ((iVar2 != 0) && ((int *)piVar1[0x1a] != (int *)0x0)) {
      (**(code **)(*(int *)piVar1[0x1a] + 100))(param_1);
    }
  }
  return;
}

