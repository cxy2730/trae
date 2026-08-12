// Function: FUN_00402233
// Entry:    00402233
// Size:     22 bytes
// Conv:     unknown
// Signature: undefined FUN_00402233(void)
// Decompiled by Ghidra 12.1.2


undefined4 FUN_00402233(int param_1,int param_2,undefined1 param_3)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)(param_1 + param_2);
  *(undefined1 *)(param_1 + param_2) = param_3;
  return uVar1;
}

