// Function: FUN_004756b0
// Entry:    004756b0
// Size:     91 bytes
// Conv:     unknown
// Signature: undefined FUN_004756b0(void)
// Decompiled by Ghidra 12.1.2


undefined4 __thiscall FUN_004756b0(int param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  
  FUN_0046bae0();
  uVar1 = *(uint *)(param_1 + 0x14);
  uVar2 = *(int *)(param_1 + 0x1c) + param_2;
  *(uint *)(param_1 + 0x1c) = uVar2;
  if (uVar1 < uVar2) {
    FUN_00483180(*(int *)(param_1 + 0x2c),*(int *)(param_1 + 0x2c) + uVar1,uVar2 - uVar1);
  }
  *(undefined4 *)(param_1 + 0x24) = 0;
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + param_2;
  *(uint *)(param_1 + 0x1c) = *(uint *)(param_1 + 0x1c) % *(uint *)(param_1 + 0x14);
  FUN_0046baf0();
  return 0;
}

