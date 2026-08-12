// Function: FUN_004754d0
// Entry:    004754d0
// Size:     27 bytes
// Conv:     unknown
// Signature: undefined FUN_004754d0(void)
// Decompiled by Ghidra 12.1.2


void __thiscall FUN_004754d0(int param_1,uint *param_2)

{
  uint uVar1;
  
  uVar1 = *param_2;
  if ((uint)(*(int *)(param_1 + 0x2c) + *(int *)(param_1 + 0x14)) <= uVar1) {
    uVar1 = uVar1 - *(int *)(param_1 + 0x14);
  }
  *param_2 = uVar1;
  return;
}

