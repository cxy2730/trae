// Function: FUN_0048bf51
// Entry:    0048bf51
// Size:     42 bytes
// Conv:     unknown
// Signature: undefined FUN_0048bf51(void)
// Decompiled by Ghidra 12.1.2


void FUN_0048bf51(int param_1,undefined4 *param_2)

{
  if ((param_1 != 0) && ((*(byte *)((int)param_2 + 0xd) & 0x10) != 0)) {
    FUN_00484552(param_2);
    *(byte *)((int)param_2 + 0xd) = *(byte *)((int)param_2 + 0xd) & 0xee;
    param_2[6] = 0;
    *param_2 = 0;
    param_2[2] = 0;
  }
  return;
}

