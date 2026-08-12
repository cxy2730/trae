// Function: FUN_0040e9e0
// Entry:    0040e9e0
// Size:     235 bytes
// Conv:     unknown
// Signature: undefined FUN_0040e9e0(void)
// Decompiled by Ghidra 12.1.2


void __thiscall
FUN_0040e9e0(int param_1,int param_2,undefined4 param_3,undefined4 param_4,int param_5)

{
  int iVar1;
  int iVar2;
  int local_4;
  
  if (param_2 < 0) {
    param_2 = 0;
  }
  local_4 = param_1;
  if (*(int *)(param_1 + 4) <= param_2) {
    FUN_0040e970(param_3,param_4,param_5);
    return;
  }
  *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 1;
  FUN_00406930(param_2 * 4,&param_3,4);
  iVar2 = (*(int *)(param_1 + 4) + param_2) * 4;
  if (*(int *)(param_1 + 0x18) == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = *(int *)(param_1 + 0x10);
  }
  local_4 = *(int *)(iVar1 + iVar2);
  FUN_00406930(iVar2,&local_4,4);
  iVar1 = local_4 + *(int *)(param_1 + 4) * 8;
  FUN_00406930(iVar1,&param_5,4);
  FUN_00406930(iVar1 + 4,param_4,param_5);
  if (*(int *)(param_1 + 0x18) == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = *(int *)(param_1 + 0x10);
  }
  FUN_0041c510(iVar1 + 4 + iVar2,(*(int *)(param_1 + 4) - param_2) + -1,param_5 + 4);
  return;
}

