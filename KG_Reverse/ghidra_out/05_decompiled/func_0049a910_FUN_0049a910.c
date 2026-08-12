// Function: FUN_0049a910
// Entry:    0049a910
// Size:     43 bytes
// Conv:     unknown
// Signature: undefined FUN_0049a910(void)
// Decompiled by Ghidra 12.1.2


void __thiscall FUN_0049a910(int param_1,undefined4 param_2,uint param_3,int param_4)

{
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(int *)(param_1 + 0x10) = param_4;
  *(undefined4 *)(param_1 + 0x24) = 0;
  *(uint *)(param_1 + 0x18) = param_3;
  *(uint *)(param_1 + 0x1c) = ~-(uint)(param_4 != 0) & param_3;
  *(undefined4 *)(param_1 + 0x20) = param_2;
  return;
}

