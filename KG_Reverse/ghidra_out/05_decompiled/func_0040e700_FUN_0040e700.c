// Function: FUN_0040e700
// Entry:    0040e700
// Size:     45 bytes
// Conv:     unknown
// Signature: undefined FUN_0040e700(void)
// Decompiled by Ghidra 12.1.2


void __thiscall FUN_0040e700(int param_1,int param_2)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 4);
  *(undefined4 *)(param_2 + 4) = uVar1;
  uVar1 = *(undefined4 *)(param_1 + 0x1c);
  *(undefined4 *)(param_1 + 0x1c) = *(undefined4 *)(param_2 + 0x1c);
  *(undefined4 *)(param_2 + 0x1c) = uVar1;
  FUN_004065e0(param_2 + 8);
  return;
}

