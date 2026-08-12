// Function: FUN_00463f60
// Entry:    00463f60
// Size:     44 bytes
// Conv:     unknown
// Signature: undefined FUN_00463f60(void)
// Decompiled by Ghidra 12.1.2


int FUN_00463f60(int *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_2 + 0x10);
  if (iVar1 == 0) {
    if ((*(uint *)(param_2 + 0x24) & 0x40) != 0) {
      return *(int *)(*param_1 + 0x20);
    }
    if ((*(uint *)(param_2 + 0x24) & 0x80) != 0) {
      iVar1 = *(int *)(*param_1 + 0x24);
    }
  }
  return iVar1;
}

