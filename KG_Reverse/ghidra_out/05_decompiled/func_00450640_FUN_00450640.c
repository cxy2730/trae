// Function: FUN_00450640
// Entry:    00450640
// Size:     56 bytes
// Conv:     unknown
// Signature: undefined FUN_00450640(void)
// Decompiled by Ghidra 12.1.2


void FUN_00450640(int param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined1 param_5)

{
  if ((param_1 != 0) && (param_2 != 0)) {
    *(undefined4 *)(param_2 + 0xb4) = param_3;
    *(undefined1 *)(param_2 + 0xbc) = param_5;
    *(undefined4 *)(param_2 + 0xb8) = param_4;
    *(uint *)(param_2 + 8) = *(uint *)(param_2 + 8) | 0x100;
  }
  return;
}

