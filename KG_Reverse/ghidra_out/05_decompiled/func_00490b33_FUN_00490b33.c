// Function: FUN_00490b33
// Entry:    00490b33
// Size:     57 bytes
// Conv:     unknown
// Signature: undefined FUN_00490b33(void)
// Decompiled by Ghidra 12.1.2


uint __fastcall FUN_00490b33(uint param_1)

{
  int iVar1;
  
  FUN_00490b84();
  iVar1 = *(int *)(param_1 + 4);
  if ((iVar1 != 0) && (iVar1 != -1)) {
    *(int *)(param_1 + 4) = iVar1 + -1;
  }
  iVar1 = *(int *)(param_1 + 4);
  FUN_00490c20();
  return ~-(uint)(iVar1 != 0) & param_1;
}

