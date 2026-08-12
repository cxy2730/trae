// Function: FUN_00450a80
// Entry:    00450a80
// Size:     56 bytes
// Conv:     unknown
// Signature: undefined FUN_00450a80(void)
// Decompiled by Ghidra 12.1.2


void FUN_00450a80(int param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined1 param_5)

{
  if ((param_1 != 0) && (param_2 != 0)) {
    *(undefined4 *)(param_2 + 0xc0) = param_3;
    *(undefined1 *)(param_2 + 200) = param_5;
    *(undefined4 *)(param_2 + 0xc4) = param_4;
    *(uint *)(param_2 + 8) = *(uint *)(param_2 + 8) | 0x80;
  }
  return;
}

