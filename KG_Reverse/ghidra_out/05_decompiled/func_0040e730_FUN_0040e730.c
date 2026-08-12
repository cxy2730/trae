// Function: FUN_0040e730
// Entry:    0040e730
// Size:     68 bytes
// Conv:     unknown
// Signature: undefined FUN_0040e730(void)
// Decompiled by Ghidra 12.1.2


undefined4 * __thiscall FUN_0040e730(int param_1,int param_2,undefined4 *param_3)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  
  if (param_2 < *(int *)(param_1 + 4)) {
    if (*(int *)(param_1 + 0x18) == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = *(int *)(param_1 + 0x10);
    }
    iVar1 = *(int *)(param_1 + 4) * 4;
    iVar2 = iVar1 + iVar2;
    puVar3 = (undefined4 *)(*(int *)(iVar2 + param_2 * 4) + iVar1 + iVar2);
    if (param_3 != (undefined4 *)0x0) {
      *param_3 = *puVar3;
    }
    return puVar3 + 1;
  }
  return (undefined4 *)0x0;
}

