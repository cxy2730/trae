// Function: FUN_00429540
// Entry:    00429540
// Size:     115 bytes
// Conv:     unknown
// Signature: undefined FUN_00429540(void)
// Decompiled by Ghidra 12.1.2


void __fastcall FUN_00429540(LPRECT param_1)

{
  SetRect(param_1,0xe6,0xe6,0xe6,0xe6);
  param_1[1].left = 0;
  param_1[1].top = 1;
  param_1[2].bottom = 0;
  param_1[1].right = 1;
  param_1[1].bottom = 0;
  FUN_00493161();
  param_1[2].top = 0;
  param_1[2].right = 0;
  param_1[3].left = 0;
  param_1[3].top = 1;
  param_1[3].right = 0;
  FUN_00493161();
  FUN_004064a0();
  *(undefined2 *)&param_1[5].top = 0;
  param_1[5].right = 0;
  *(undefined2 *)((int)&param_1[5].top + 2) = 1;
  param_1[5].bottom = 100;
  return;
}

