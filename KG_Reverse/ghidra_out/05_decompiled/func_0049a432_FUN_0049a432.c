// Function: FUN_0049a432
// Entry:    0049a432
// Size:     194 bytes
// Conv:     unknown
// Signature: undefined FUN_0049a432(void)
// Decompiled by Ghidra 12.1.2


void __thiscall FUN_0049a432(uint param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  
  uVar1 = *(uint *)(param_1 + 0x24);
  uVar6 = *(int *)(param_1 + 0x28) - uVar1;
  uVar2 = param_2 + uVar6;
  uVar8 = param_1;
  if (*(int *)(param_1 + 8) == 0) {
    uVar3 = *(uint *)(param_1 + 0x2c);
    if (uVar3 < uVar1) {
      if (0 < (int)uVar6) {
        FUN_00483180(uVar3,uVar1,uVar6);
        uVar3 = *(uint *)(param_1 + 0x2c);
        *(uint *)(param_1 + 0x24) = uVar3;
        *(int *)(param_1 + 0x28) = uVar3 + uVar6;
      }
      iVar5 = *(int *)(param_1 + 0x1c) - uVar6;
      iVar7 = uVar6 + uVar3;
      uVar8 = uVar6;
      do {
        iVar4 = (**(code **)(**(int **)(param_1 + 0x20) + 0x34))(iVar7,iVar5);
        uVar8 = uVar8 + iVar4;
        iVar7 = iVar7 + iVar4;
        iVar5 = iVar5 - iVar4;
        if ((iVar4 == 0) || (iVar5 == 0)) break;
      } while (uVar8 < param_2);
      *(int *)(param_1 + 0x24) = *(int *)(param_1 + 0x2c);
      *(uint *)(param_1 + 0x28) = *(int *)(param_1 + 0x2c) + uVar8;
    }
  }
  else {
    if (uVar6 != 0) {
      (**(code **)(**(int **)(param_1 + 0x20) + 0x28))(-uVar6,1);
    }
    (**(code **)(**(int **)(param_1 + 0x20) + 0x50))
              (0,*(undefined4 *)(param_1 + 0x1c),(undefined4 *)(param_1 + 0x2c),
               (int *)(param_1 + 0x28));
    *(undefined4 *)(param_1 + 0x24) = *(undefined4 *)(param_1 + 0x2c);
  }
  if ((uint)(*(int *)(param_1 + 0x28) - *(int *)(param_1 + 0x24)) < uVar2) {
    FUN_0049a5f2(3,0,uVar2,uVar8);
  }
  return;
}

