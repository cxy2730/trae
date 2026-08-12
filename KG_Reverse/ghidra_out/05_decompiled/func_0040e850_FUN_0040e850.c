// Function: FUN_0040e850
// Entry:    0040e850
// Size:     139 bytes
// Conv:     unknown
// Signature: undefined FUN_0040e850(void)
// Decompiled by Ghidra 12.1.2


void __thiscall
FUN_0040e850(int param_1,int param_2,int param_3,int param_4,undefined4 param_5,int param_6)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  if (*(int *)(param_1 + 0x18) == 0) {
    iVar4 = 0;
  }
  else {
    iVar4 = *(int *)(param_1 + 0x10);
  }
  iVar2 = *(int *)(param_1 + 4);
  iVar3 = *(int *)(iVar4 + (iVar2 + param_2) * 4);
  iVar1 = iVar3 + iVar2 * 8;
  if (param_4 == -1) {
    param_4 = *(int *)(iVar1 + iVar4);
    param_3 = 0;
  }
  *(int *)(iVar1 + iVar4) = *(int *)(iVar1 + iVar4) + (param_6 - param_4);
  FUN_00406a30(iVar1 + 4 + param_3,param_4,param_5,param_6);
  if (*(int *)(param_1 + 0x18) == 0) {
    iVar4 = 0;
  }
  else {
    iVar4 = *(int *)(param_1 + 0x10);
  }
  FUN_0041c490(iVar4 + iVar2 * 4,iVar2,iVar3 + 1,param_6 - param_4);
  return;
}

