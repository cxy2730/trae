// Function: FUN_0049bf95
// Entry:    0049bf95
// Size:     15 bytes
// Conv:     unknown
// Signature: undefined FUN_0049bf95(void)
// Decompiled by Ghidra 12.1.2


undefined4 __fastcall FUN_0049bf95(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)(param_1 + 0x2c);
  *(undefined4 *)(param_1 + 0x2c) = 0;
  *(undefined4 *)(param_1 + 0x20) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  return uVar1;
}

