// Function: FUN_004390c0
// Entry:    004390c0
// Size:     57 bytes
// Conv:     unknown
// Signature: undefined FUN_004390c0(void)
// Decompiled by Ghidra 12.1.2


undefined4 __thiscall FUN_004390c0(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = FUN_00437e30(param_2,param_3);
  if (iVar1 == 0) {
    return 0;
  }
  if (*(int *)(param_1 + 0xe0) != 0) {
    *(undefined4 *)(param_1 + 200) = 0;
  }
  return 1;
}

