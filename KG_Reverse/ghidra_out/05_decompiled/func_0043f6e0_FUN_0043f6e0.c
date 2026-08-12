// Function: FUN_0043f6e0
// Entry:    0043f6e0
// Size:     215 bytes
// Conv:     unknown
// Signature: undefined FUN_0043f6e0(void)
// Decompiled by Ghidra 12.1.2


void FUN_0043f6e0(int param_1)

{
  uint uVar1;
  
  FUN_0043e700(param_1);
  FUN_00446d20(param_1,*(undefined4 *)(param_1 + 0x27c));
  FUN_00446d20(param_1,*(undefined4 *)(param_1 + 0x2c8));
  FUN_00446d20(param_1,*(undefined4 *)(param_1 + 0x2b8));
  FUN_00446d20(param_1,*(undefined4 *)(param_1 + 0x208));
  FUN_00446d20(param_1,*(undefined4 *)(param_1 + 0x20c));
  if ((*(uint *)(param_1 + 0x248) & 0x1000) != 0) {
    FUN_0043c270(param_1,*(undefined4 *)(param_1 + 0x144));
  }
  uVar1 = *(uint *)(param_1 + 0x248);
  *(uint *)(param_1 + 0x248) = uVar1 & 0xffffefff;
  if ((uVar1 & 0x2000) != 0) {
    FUN_00446d20(param_1,*(undefined4 *)(param_1 + 0x1b4));
  }
  *(uint *)(param_1 + 0x248) = *(uint *)(param_1 + 0x248) & 0xffffdfff;
  FUN_00446f30(param_1 + 0x84);
  FUN_00446d20(param_1,*(undefined4 *)(param_1 + 0x1dc));
  FUN_00446d20(param_1,*(undefined4 *)(param_1 + 0x2a8));
  FUN_00446d20(param_1,*(undefined4 *)(param_1 + 0x25c));
  return;
}

