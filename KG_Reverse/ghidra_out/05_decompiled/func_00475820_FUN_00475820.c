// Function: FUN_00475820
// Entry:    00475820
// Size:     57 bytes
// Conv:     unknown
// Signature: undefined FUN_00475820(void)
// Decompiled by Ghidra 12.1.2


undefined4 __thiscall FUN_00475820(int param_1,int param_2)

{
  FUN_0046bae0();
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) - param_2;
  *(uint *)(param_1 + 0x18) = (uint)(*(int *)(param_1 + 0x18) + param_2) % *(uint *)(param_1 + 0x14)
  ;
  FUN_0046baf0();
  return 0;
}

