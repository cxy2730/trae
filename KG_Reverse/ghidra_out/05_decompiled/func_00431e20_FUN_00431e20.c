// Function: FUN_00431e20
// Entry:    00431e20
// Size:     185 bytes
// Conv:     unknown
// Signature: undefined FUN_00431e20(void)
// Decompiled by Ghidra 12.1.2


int __thiscall FUN_00431e20(int param_1,undefined4 param_2,undefined4 *param_3)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  undefined4 *puVar5;
  
  if (0 < *(int *)(param_1 + 0x1d8)) {
    iVar1 = FUN_00406c00(param_1 + 0x1dc,*(int *)(param_1 + 0x1d8),param_2);
    if (iVar1 != -1) {
      *(undefined1 *)(iVar1 + 0x224 + param_1) = 1;
      if (*(int *)(param_1 + 0x248) == 0) {
        iVar4 = 0;
      }
      else {
        iVar4 = *(int *)(param_1 + 0x240);
      }
      uVar3 = *(uint *)(*(int *)(param_1 + 4) + 8);
      puVar5 = (undefined4 *)(uVar3 * iVar1 + iVar4);
      for (uVar2 = uVar3 >> 2; uVar2 != 0; uVar2 = uVar2 - 1) {
        *puVar5 = *param_3;
        param_3 = param_3 + 1;
        puVar5 = puVar5 + 1;
      }
      for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
        *(undefined1 *)puVar5 = *(undefined1 *)param_3;
        param_3 = (undefined4 *)((int)param_3 + 1);
        puVar5 = (undefined4 *)((int)puVar5 + 1);
      }
      return 0;
    }
  }
  iVar1 = FUN_00431b50();
  if (iVar1 == 0) {
    *(undefined4 *)(param_1 + 0x1dc + *(int *)(param_1 + 0x1d8) * 4) = param_2;
    *(undefined1 *)(param_1 + 0x224 + *(int *)(param_1 + 0x1d8)) = 1;
    FUN_004069d0(param_3,*(undefined4 *)(*(int *)(param_1 + 4) + 8));
    *(int *)(param_1 + 0x1d8) = *(int *)(param_1 + 0x1d8) + 1;
  }
  return iVar1;
}

