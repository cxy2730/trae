// Function: FUN_00451880
// Entry:    00451880
// Size:     74 bytes
// Conv:     unknown
// Signature: undefined FUN_00451880(void)
// Decompiled by Ghidra 12.1.2


void FUN_00451880(int param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)(*(code *)**(undefined4 **)(param_1 + 4))(param_1,0,0x1c);
  *(undefined4 **)(param_1 + 0x1b0) = puVar1;
  *puVar1 = FUN_00451b50;
  puVar1[1] = FUN_00451dc0;
  puVar1[2] = FUN_004518d0;
  puVar1[3] = &LAB_00451b30;
  puVar1[4] = 0;
  puVar1[5] = 0;
  puVar1[6] = 1;
  return;
}

