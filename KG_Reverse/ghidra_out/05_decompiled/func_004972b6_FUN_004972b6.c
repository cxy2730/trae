// Function: FUN_004972b6
// Entry:    004972b6
// Size:     31 bytes
// Conv:     unknown
// Signature: undefined FUN_004972b6(void)
// Decompiled by Ghidra 12.1.2


undefined4 __fastcall FUN_004972b6(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x90);
  if (((iVar1 != 0) && (iVar1 != 0xe002)) && (iVar1 != 0xe001)) {
    return 1;
  }
  return 0;
}

