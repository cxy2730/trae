// Function: FUN_00450bb0
// Entry:    00450bb0
// Size:     56 bytes
// Conv:     unknown
// Signature: undefined FUN_00450bb0(void)
// Decompiled by Ghidra 12.1.2


void FUN_00450bb0(int param_1,int param_2,undefined4 *param_3)

{
  if (((param_1 != 0) && (param_2 != 0)) && (param_3 != (undefined4 *)0x0)) {
    *(undefined4 *)(param_2 + 0x94) = *param_3;
    *(undefined1 *)(param_2 + 0x98) = *(undefined1 *)(param_3 + 1);
    *(uint *)(param_2 + 8) = *(uint *)(param_2 + 8) | 2;
  }
  return;
}

