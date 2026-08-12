// Function: FUN_00469ea0
// Entry:    00469ea0
// Size:     99 bytes
// Conv:     unknown
// Signature: undefined FUN_00469ea0(void)
// Decompiled by Ghidra 12.1.2


int __thiscall FUN_00469ea0(int param_1,int param_2,uint param_3)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined4 *puVar4;
  
  if ((int)param_3 < 1) {
    return *(int *)(param_1 + 8);
  }
  iVar1 = *(int *)(param_1 + 8);
  iVar2 = FUN_00469d00(iVar1 + param_3);
  if (iVar2 == 0) {
    return -1;
  }
  if (param_2 != 0) {
    FUN_00483180((undefined4 *)(iVar2 + iVar1),param_2,param_3);
    return iVar1;
  }
  puVar4 = (undefined4 *)(iVar2 + iVar1);
  for (uVar3 = param_3 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  for (param_3 = param_3 & 3; param_3 != 0; param_3 = param_3 - 1) {
    *(undefined1 *)puVar4 = 0;
    puVar4 = (undefined4 *)((int)puVar4 + 1);
  }
  return iVar1;
}

