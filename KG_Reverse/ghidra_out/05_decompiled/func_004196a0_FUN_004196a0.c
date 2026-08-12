// Function: FUN_004196a0
// Entry:    004196a0
// Size:     41 bytes
// Conv:     unknown
// Signature: undefined FUN_004196a0(void)
// Decompiled by Ghidra 12.1.2


int FUN_004196a0(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_00406cf0(param_1 + 0x18);
  iVar1 = param_1 + 0x18 + iVar1;
  iVar2 = FUN_00406cf0(iVar1);
  return iVar1 + iVar2 + 0x20 + *(int *)(iVar1 + 0x1c + iVar2) * 4;
}

