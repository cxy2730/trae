// Function: FUN_0049a326
// Entry:    0049a326
// Size:     144 bytes
// Conv:     unknown
// Signature: undefined FUN_0049a326(void)
// Decompiled by Ghidra 12.1.2


void __thiscall FUN_0049a326(int param_1,int param_2,uint param_3)

{
  uint uVar1;
  int iVar2;
  
  if (param_3 != 0) {
    uVar1 = *(int *)(param_1 + 0x28) - *(int *)(param_1 + 0x24);
    if (param_3 < uVar1) {
      uVar1 = param_3;
    }
    FUN_00485580(*(int *)(param_1 + 0x24),param_2,uVar1);
    *(int *)(param_1 + 0x24) = *(int *)(param_1 + 0x24) + uVar1;
    param_3 = param_3 - uVar1;
    if (param_3 != 0) {
      FUN_0049a3b6();
      iVar2 = param_3 - param_3 % *(uint *)(param_1 + 0x1c);
      (**(code **)(**(int **)(param_1 + 0x20) + 0x38))(param_2 + uVar1,iVar2);
      if (*(int *)(param_1 + 8) != 0) {
        (**(code **)(**(int **)(param_1 + 0x20) + 0x50))
                  (1,*(undefined4 *)(param_1 + 0x1c),(undefined4 *)(param_1 + 0x2c),param_1 + 0x28);
        *(undefined4 *)(param_1 + 0x24) = *(undefined4 *)(param_1 + 0x2c);
      }
      FUN_00485580(*(undefined4 *)(param_1 + 0x24),param_2 + uVar1 + iVar2,param_3 - iVar2);
      *(int *)(param_1 + 0x24) = *(int *)(param_1 + 0x24) + (param_3 - iVar2);
    }
  }
  return;
}

