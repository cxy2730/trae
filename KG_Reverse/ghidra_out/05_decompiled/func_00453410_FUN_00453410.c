// Function: FUN_00453410
// Entry:    00453410
// Size:     116 bytes
// Conv:     unknown
// Signature: undefined FUN_00453410(void)
// Decompiled by Ghidra 12.1.2


undefined4 FUN_00453410(int *param_1)

{
  int iVar1;
  
  if (param_1[0x67] == 0) {
    iVar1 = FUN_00451ef0(param_1);
    if (iVar1 == 0) {
      return 0;
    }
  }
  if (param_1[0x67] == *(int *)(param_1[0x6d] + 0x58) + 0xd0) {
    (**(code **)(*param_1 + 4))(param_1,3);
    param_1[0x67] = 0;
  }
  else {
    iVar1 = (**(code **)(param_1[5] + 0x14))(param_1,*(int *)(param_1[0x6d] + 0x58));
    if (iVar1 == 0) {
      return 0;
    }
  }
  *(uint *)(param_1[0x6d] + 0x58) = *(int *)(param_1[0x6d] + 0x58) + 1U & 7;
  return 1;
}

