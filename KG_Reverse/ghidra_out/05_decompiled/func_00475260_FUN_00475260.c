// Function: FUN_00475260
// Entry:    00475260
// Size:     103 bytes
// Conv:     unknown
// Signature: undefined FUN_00475260(void)
// Decompiled by Ghidra 12.1.2


int FUN_00475260(int param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  iVar1 = (*(byte *)(param_1 + 2) >> 1 & 1) * param_4 + param_3;
  while( true ) {
    if (param_2 < iVar1) {
      return iVar3;
    }
    iVar2 = FUN_00475230(param_1,iVar1 + param_1);
    if (iVar2 == 0) break;
    iVar3 = iVar3 + 1;
    iVar1 = iVar1 + (*(byte *)(param_1 + 2 + iVar1) >> 1 & 1) * param_4 + param_3;
  }
  return -iVar3;
}

