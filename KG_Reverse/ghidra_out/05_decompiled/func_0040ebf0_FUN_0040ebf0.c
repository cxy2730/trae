// Function: FUN_0040ebf0
// Entry:    0040ebf0
// Size:     54 bytes
// Conv:     unknown
// Signature: undefined FUN_0040ebf0(void)
// Decompiled by Ghidra 12.1.2


undefined4 __thiscall FUN_0040ebf0(int param_1,int param_2,undefined4 *param_3)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = *(uint *)(param_1 + 0x18) >> 3;
  if (param_2 < (int)uVar1) {
    if (*(int *)(param_1 + 0x18) == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = *(int *)(param_1 + 0x10);
    }
    *param_3 = *(undefined4 *)(iVar2 + (uVar1 + param_2) * 4);
    return 1;
  }
  return 0;
}

