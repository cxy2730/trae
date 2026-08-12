// Function: FUN_00450470
// Entry:    00450470
// Size:     63 bytes
// Conv:     unknown
// Signature: undefined FUN_00450470(void)
// Decompiled by Ghidra 12.1.2


void FUN_00450470(int param_1,int param_2,undefined4 *param_3)

{
  if (((param_1 != 0) && (param_2 != 0)) && (param_3 != (undefined4 *)0x0)) {
    *(undefined4 *)(param_2 + 0xaa) = *param_3;
    *(undefined4 *)(param_2 + 0xae) = param_3[1];
    *(undefined2 *)(param_2 + 0xb2) = *(undefined2 *)(param_3 + 2);
    *(uint *)(param_2 + 8) = *(uint *)(param_2 + 8) | 0x20;
  }
  return;
}

