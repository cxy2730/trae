// Function: FUN_0046cb10
// Entry:    0046cb10
// Size:     314 bytes
// Conv:     unknown
// Signature: undefined FUN_0046cb10(void)
// Decompiled by Ghidra 12.1.2


uint __thiscall FUN_0046cb10(int param_1,undefined4 *param_2,int param_3,char param_4)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  
  if (*(int *)(param_1 + 0xa4) != 0) {
    uVar2 = FUN_00492f17(param_3);
    *param_2 = uVar2;
    *(undefined4 *)(param_1 + 0xa8) = uVar2;
    iVar3 = FUN_0048465b(*param_2,1,param_3,*(undefined4 *)(param_1 + 0xa4));
    return -(uint)(iVar3 != param_3) & 0x21;
  }
  if (((*(int **)(param_1 + 0x2c) != (int *)0x0) && (*(int *)(param_1 + 0x18) != 0)) &&
     ((cVar1 = (**(code **)(**(int **)(param_1 + 0x2c) + 0x40))(), cVar1 == '\0' ||
      (*(int *)(param_1 + 0x7c) < 1)))) {
    uVar4 = FUN_0046cc50(param_2,param_3);
    return uVar4;
  }
  iVar3 = (**(code **)(**(int **)(param_1 + 0x18) + 0x18))();
  iVar5 = (**(code **)(**(int **)(param_1 + 0x14) + 0x18))();
  if (((0x5a < iVar5) && (0x5a < iVar3)) &&
     (cVar1 = (**(code **)(**(int **)(param_1 + 0x2c) + 0x44))(), cVar1 != '\0')) {
    (**(code **)(**(int **)(param_1 + 0x18) + 0x14))();
  }
  iVar3 = *(int *)(param_1 + 0x7c) * *(int *)(param_1 + 0x3c) * 1000;
  uVar4 = (int)(iVar3 + (iVar3 >> 0x1f & 0x1fffU)) >> 0xd;
  if (*(uint *)(param_1 + 0x40) < uVar4) {
    uVar4 = (int)*(uint *)(param_1 + 0x40) / 2;
  }
  if (((param_4 != '\0') && (iVar5 < 1)) && (*(uint *)(*(int *)(param_1 + 0x18) + 0xc) < uVar4 >> 1)
     ) {
    cVar1 = *(char *)(param_1 + 0x1d);
    while (cVar1 == '\0') {
      Sleep(1000);
      if ((uVar4 <= (uint)(*(int **)(param_1 + 0x18))[3]) ||
         (iVar3 = (**(code **)(**(int **)(param_1 + 0x18) + 0x18))(), 0x5a < iVar3)) break;
      cVar1 = *(char *)(param_1 + 0x1d);
    }
  }
  uVar4 = FUN_0046cc50(param_2,param_3);
  return uVar4;
}

