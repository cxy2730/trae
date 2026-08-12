// Function: FUN_00412490
// Entry:    00412490
// Size:     106 bytes
// Conv:     unknown
// Signature: undefined FUN_00412490(void)
// Decompiled by Ghidra 12.1.2


void __thiscall FUN_00412490(int param_1,int param_2)

{
  int iVar1;
  
  if (((param_2 != 0) && (*(uint *)(param_1 + 0x1fc) != 0)) && (*(int *)(param_1 + 500) != 0)) {
    iVar1 = FUN_00406d80(*(int *)(param_1 + 500),*(uint *)(param_1 + 0x1fc) >> 2,param_2);
    if (iVar1 != -1) {
      iVar1 = iVar1 * 4;
      FUN_00406b50(iVar1,4);
      FUN_00406b50(iVar1,4);
      FUN_00406b50(iVar1,4);
    }
  }
  return;
}

