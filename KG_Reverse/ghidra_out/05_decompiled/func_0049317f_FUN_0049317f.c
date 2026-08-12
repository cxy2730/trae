// Function: FUN_0049317f
// Entry:    0049317f
// Size:     46 bytes
// Conv:     unknown
// Signature: undefined FUN_0049317f(void)
// Decompiled by Ghidra 12.1.2


void __fastcall FUN_0049317f(int *param_1)

{
  int iVar1;
  
  iVar1 = *param_1;
  if (1 < *(int *)(iVar1 + -0xc)) {
    FUN_0049310d();
    FUN_00493043(*(undefined4 *)(iVar1 + -8));
    FUN_00485580(*param_1,iVar1,*(int *)(iVar1 + -8) + 1);
  }
  return;
}

