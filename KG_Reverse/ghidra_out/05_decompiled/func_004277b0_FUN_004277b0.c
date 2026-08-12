// Function: FUN_004277b0
// Entry:    004277b0
// Size:     40 bytes
// Conv:     unknown
// Signature: undefined FUN_004277b0(void)
// Decompiled by Ghidra 12.1.2


undefined4 __thiscall FUN_004277b0(int param_1,int param_2)

{
  int iVar1;
  
  if ((*(int **)(param_1 + 0xc) != (int *)0x0) && (-1 < param_2)) {
    iVar1 = (**(code **)(**(int **)(param_1 + 0xc) + 0x10))();
    if (param_2 < iVar1) {
      return 1;
    }
  }
  return 0;
}

