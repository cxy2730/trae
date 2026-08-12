// Function: FUN_00475390
// Entry:    00475390
// Size:     54 bytes
// Conv:     unknown
// Signature: undefined FUN_00475390(void)
// Decompiled by Ghidra 12.1.2


void __fastcall FUN_00475390(undefined4 *param_1)

{
  int iVar1;
  
  *param_1 = &PTR_FUN_02f9a05c;
  *(undefined1 *)(param_1 + 2) = 1;
  if (param_1[0xb] != 0) {
    FUN_00492f40(param_1[0xb]);
  }
  iVar1 = param_1[1];
  if (iVar1 != 0) {
    FUN_0046bad0();
    FUN_00492f40(iVar1);
  }
  return;
}

