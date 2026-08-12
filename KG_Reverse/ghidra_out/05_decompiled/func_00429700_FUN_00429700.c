// Function: FUN_00429700
// Entry:    00429700
// Size:     45 bytes
// Conv:     unknown
// Signature: undefined FUN_00429700(void)
// Decompiled by Ghidra 12.1.2


void __fastcall FUN_00429700(undefined4 *param_1)

{
  *param_1 = 1;
  param_1[1] = 0;
  param_1[2] = 0xff000000;
  *(undefined1 *)(param_1 + 3) = 0;
  *(undefined2 *)(param_1 + 0xb) = 0x28;
  *(undefined2 *)((int)param_1 + 0x2e) = 9;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  return;
}

