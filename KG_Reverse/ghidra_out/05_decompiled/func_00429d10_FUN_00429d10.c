// Function: FUN_00429d10
// Entry:    00429d10
// Size:     508 bytes
// Conv:     unknown
// Signature: undefined FUN_00429d10(void)
// Decompiled by Ghidra 12.1.2


void __thiscall
FUN_00429d10(int *param_1,int param_2,int param_3,int param_4,int param_5,int *param_6,int *param_7,
            undefined4 param_8,undefined4 param_9,int param_10)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  int iStack_44;
  undefined1 auStack_40 [52];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_0049fca8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  if (*(uint *)(param_2 + 0x28) < *(int *)(param_2 + 0x24) + 4U) {
    ExceptionList = &local_c;
    FUN_0049a432((*(int *)(param_2 + 0x24) - *(uint *)(param_2 + 0x28)) + 4);
  }
  piVar1 = *(int **)(param_2 + 0x24);
  iVar2 = *piVar1;
  *(int **)(param_2 + 0x24) = piVar1 + 1;
  if (*(int **)(param_2 + 0x28) < piVar1 + 2) {
    FUN_0049a432((int)(piVar1 + 1) + (4 - (int)*(int **)(param_2 + 0x28)));
  }
  iVar9 = **(int **)(param_2 + 0x24);
  *(int **)(param_2 + 0x24) = *(int **)(param_2 + 0x24) + 1;
  if (param_6 != (int *)0x0) {
    *param_6 = iVar2;
  }
  if (param_7 != (int *)0x0) {
    *param_7 = iVar9;
  }
  if ((0 < iVar2) && (0 < iVar9)) {
    iVar3 = (**(code **)(*param_1 + 8))();
    iVar4 = (**(code **)(*param_1 + 0x10))();
    iVar5 = iVar2 + param_3;
    iVar9 = iVar9 + param_4;
    iVar6 = iVar4;
    if ((param_5 == 0) && ((iVar3 < iVar5 || (iVar4 < iVar9)))) {
      FUN_0049a5f2();
      iVar6 = param_4;
    }
    if ((iVar3 < iVar5) &&
       (iVar5 = (**(code **)(*param_1 + 0x78))(iVar3,iVar5 - iVar3), iVar6 = iVar4, iVar5 == 0)) {
      FUN_0049a5f2(iVar3,0,1);
    }
    if ((iVar6 < iVar9) && (iVar9 = (**(code **)(*param_1 + 0x7c))(iVar6,iVar9 - iVar6), iVar9 == 0)
       ) {
      FUN_0049a5f2(iVar6,0,1);
    }
    FUN_00429700();
    uStack_4 = 0;
    param_6 = (int *)0x0;
    if (0 < iVar2) {
      do {
        param_5 = 0;
        iVar9 = (int)param_6;
        if (0 < iStack_44) {
          do {
            uVar7 = FUN_00429c70(param_3,iVar9);
            FUN_00429a00(param_4);
            uVar8 = FUN_004297e0();
            FUN_004299f0(uVar8 & 0xffc3ffff | uVar7 & 0x3c0000);
            if (((param_10 == 0) || ((uVar7 & 0x8000000) == 0)) &&
               (iVar5 = (**(code **)(*param_1 + 0x2c))(param_3,iVar9,auStack_40), iVar5 == 0)) {
              FUN_0049a5f2(1,0);
              goto LAB_00429ee6;
            }
            param_5 = param_5 + 1;
            iVar9 = iVar9 + 1;
          } while (param_5 < iStack_44);
        }
        param_6 = (int *)((int)param_6 + 1);
        param_3 = param_3 + 1;
      } while ((int)param_6 < iVar2);
    }
LAB_00429ee6:
    uStack_4 = 0xffffffff;
    thunk_FUN_00429740();
  }
  ExceptionList = local_c;
  return;
}

