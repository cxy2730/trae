// Function: FUN_00447700
// Entry:    00447700
// Size:     102 bytes
// Conv:     unknown
// Signature: undefined FUN_00447700(void)
// Decompiled by Ghidra 12.1.2


void FUN_00447700(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x214);
  *(undefined1 *)(param_1 + 0x211) = 0;
  *(undefined1 *)(param_1 + 0x210) = 1;
  if (iVar1 != 0) {
    *(undefined4 *)(param_1 + 0x214) = 0;
    FUN_00446d20(param_1,iVar1);
  }
  iVar1 = *(int *)(param_1 + 0x218);
  if (iVar1 != 0) {
    *(undefined4 *)(param_1 + 0x218) = 0;
    FUN_00446d20(param_1,iVar1);
  }
  iVar1 = *(int *)(param_1 + 0x21c);
  if (iVar1 != 0) {
    *(undefined4 *)(param_1 + 0x21c) = 0;
    FUN_00446d20(param_1,iVar1);
  }
  return;
}

