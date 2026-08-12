// Function: FUN_0045f330
// Entry:    0045f330
// Size:     124 bytes
// Conv:     unknown
// Signature: undefined FUN_0045f330(void)
// Decompiled by Ghidra 12.1.2


void FUN_0045f330(int param_1)

{
  int iVar1;
  
  if (8 < *(int *)(param_1 + 0x16b4)) {
    *(undefined1 *)(*(int *)(param_1 + 8) + *(int *)(param_1 + 0x14)) =
         *(undefined1 *)(param_1 + 0x16b0);
    iVar1 = *(int *)(param_1 + 0x14) + 1;
    *(int *)(param_1 + 0x14) = iVar1;
    *(undefined1 *)(*(int *)(param_1 + 8) + iVar1) = *(undefined1 *)(param_1 + 0x16b1);
    *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
    *(undefined2 *)(param_1 + 0x16b0) = 0;
    *(undefined4 *)(param_1 + 0x16b4) = 0;
    return;
  }
  if (0 < *(int *)(param_1 + 0x16b4)) {
    *(undefined1 *)(*(int *)(param_1 + 8) + *(int *)(param_1 + 0x14)) =
         *(undefined1 *)(param_1 + 0x16b0);
    *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
  }
  *(undefined2 *)(param_1 + 0x16b0) = 0;
  *(undefined4 *)(param_1 + 0x16b4) = 0;
  return;
}

