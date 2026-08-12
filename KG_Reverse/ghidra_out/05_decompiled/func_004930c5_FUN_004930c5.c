// Function: FUN_004930c5
// Entry:    004930c5
// Size:     72 bytes
// Conv:     unknown
// Signature: undefined FUN_004930c5(void)
// Decompiled by Ghidra 12.1.2


void __fastcall FUN_004930c5(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 8);
  if ((((iVar1 != 0x40) && (iVar1 != 0x80)) && (iVar1 != 0x100)) && (iVar1 != 0x200)) {
    FUN_00492f40(param_1);
    return;
  }
  FUN_00481dd5(param_1);
  return;
}

