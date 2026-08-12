// Function: FUN_0040ee60
// Entry:    0040ee60
// Size:     65 bytes
// Conv:     unknown
// Signature: undefined FUN_0040ee60(void)
// Decompiled by Ghidra 12.1.2


int FUN_0040ee60(undefined4 param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = FUN_00406cf0(param_2 + 0x18);
  iVar1 = param_2 + 0x18 + iVar1;
  iVar2 = FUN_00406cf0(iVar1);
  iVar3 = *(int *)(iVar1 + 0x1c + iVar2);
  iVar2 = iVar1 + 0x1c + iVar2;
  iVar2 = *(int *)(iVar2 + 4 + iVar3 * 4) + iVar2 + 8 + iVar3 * 4;
  iVar3 = FUN_00406cf0(iVar2);
  return iVar2 + iVar3 + 0x24 + *(int *)(iVar2 + 0xc + iVar3) * 8;
}

