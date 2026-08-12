// Function: FUN_00429f10
// Entry:    00429f10
// Size:     262 bytes
// Conv:     unknown
// Signature: undefined FUN_00429f10(void)
// Decompiled by Ghidra 12.1.2


void __thiscall
FUN_00429f10(int *param_1,int param_2,int param_3,int param_4,int param_5,int param_6)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined1 local_48 [60];
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  iVar1 = param_2;
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0049fcc8;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  if (*(uint *)(param_2 + 0x28) < *(int *)(param_2 + 0x24) + 4U) {
    ExceptionList = &pvStack_c;
    FUN_0049a3b6();
  }
  **(int **)(param_2 + 0x24) = param_5;
  iVar3 = *(int *)(param_2 + 0x24);
  *(int *)(param_2 + 0x24) = iVar3 + 4;
  if (*(uint *)(param_2 + 0x28) < iVar3 + 8U) {
    FUN_0049a3b6();
  }
  **(int **)(param_2 + 0x24) = param_6;
  *(int *)(param_2 + 0x24) = *(int *)(param_2 + 0x24) + 4;
  FUN_00429700();
  local_4 = 0;
  param_2 = 0;
  if (0 < param_5) {
    do {
      iVar3 = 0;
      if (0 < param_6) {
        do {
          iVar4 = iVar3 + param_4;
          iVar2 = (**(code **)(*param_1 + 0x20))(local_48,param_2 + param_3,iVar4,1);
          if (iVar2 == 0) {
            FUN_0049a5f2(iVar4,0,1);
          }
          else {
            FUN_00429a00(iVar1);
          }
          iVar3 = iVar3 + 1;
        } while (iVar3 < param_6);
      }
      param_2 = param_2 + 1;
    } while (param_2 < param_5);
  }
  local_4 = 0xffffffff;
  thunk_FUN_00429740();
  ExceptionList = pvStack_c;
  return;
}

