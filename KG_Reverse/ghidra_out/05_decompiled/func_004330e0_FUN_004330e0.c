// Function: FUN_004330e0
// Entry:    004330e0
// Size:     81 bytes
// Conv:     unknown
// Signature: undefined FUN_004330e0(void)
// Decompiled by Ghidra 12.1.2


int __thiscall FUN_004330e0(int param_1,undefined4 *param_2,int param_3)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x34) < 1) {
    *param_2 = *(undefined4 *)(param_1 + 0x30);
    *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + 1;
    iVar1 = 0;
  }
  else {
    iVar1 = FUN_00431c90(*(undefined4 *)(param_1 + 0x38),param_3);
    if (iVar1 == 0) {
      *param_2 = *(undefined4 *)(param_1 + 0x38);
      *(undefined4 *)(param_1 + 0x38) = *(undefined4 *)(param_3 + 8);
      *(int *)(param_1 + 0x34) = *(int *)(param_1 + 0x34) + -1;
      return 0;
    }
  }
  return iVar1;
}

