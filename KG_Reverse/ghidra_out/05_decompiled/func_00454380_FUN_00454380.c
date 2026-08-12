// Function: FUN_00454380
// Entry:    00454380
// Size:     52 bytes
// Conv:     unknown
// Signature: undefined FUN_00454380(void)
// Decompiled by Ghidra 12.1.2


void FUN_00454380(int param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)(*(code *)**(undefined4 **)(param_1 + 4))(param_1,1,0x1c);
  *(undefined4 **)(param_1 + 0x1a0) = puVar1;
  *puVar1 = FUN_00454610;
  puVar1[1] = &LAB_00454770;
  puVar1[2] = 0;
  FUN_004543c0(param_1);
  return;
}

