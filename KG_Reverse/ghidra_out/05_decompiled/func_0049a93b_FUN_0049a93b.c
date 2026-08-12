// Function: FUN_0049a93b
// Entry:    0049a93b
// Size:     18 bytes
// Conv:     unknown
// Signature: undefined FUN_0049a93b(void)
// Decompiled by Ghidra 12.1.2


undefined4 __fastcall FUN_0049a93b(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)(param_1 + 0x20);
  *(undefined4 *)(param_1 + 0x20) = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  return uVar1;
}

