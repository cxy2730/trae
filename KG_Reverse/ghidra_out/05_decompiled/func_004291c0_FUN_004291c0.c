// Function: FUN_004291c0
// Entry:    004291c0
// Size:     257 bytes
// Conv:     unknown
// Signature: undefined FUN_004291c0(void)
// Decompiled by Ghidra 12.1.2


int __thiscall FUN_004291c0(int param_1,byte *param_2)

{
  byte bVar1;
  byte *pbVar2;
  int iVar3;
  byte *pbVar4;
  int iVar5;
  byte *pbVar6;
  int iVar7;
  bool bVar8;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  pbVar2 = param_2;
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_0049fbd8;
  local_c = ExceptionList;
  iVar7 = 0;
  if (((*(int **)(param_1 + 0xc) != (int *)0x0) && (param_2 != (byte *)0x0)) && (*param_2 != 0)) {
    ExceptionList = &local_c;
    iVar3 = (**(code **)(**(int **)(param_1 + 0xc) + 0x10))();
    if (((char)*pbVar2 < '0') || ('9' < (char)*pbVar2)) {
      param_2 = PTR_DAT_02fd8088;
      uStack_4 = 0;
      if (0 < iVar3) {
        do {
          (**(code **)(**(int **)(param_1 + 0xc) + 100))(iVar7,&param_2);
          pbVar4 = param_2;
          pbVar6 = pbVar2;
          do {
            bVar1 = *pbVar4;
            bVar8 = bVar1 < *pbVar6;
            if (bVar1 != *pbVar6) {
LAB_00429271:
              iVar5 = (1 - (uint)bVar8) - (uint)(bVar8 != 0);
              goto LAB_00429276;
            }
            if (bVar1 == 0) break;
            bVar1 = pbVar4[1];
            bVar8 = bVar1 < pbVar6[1];
            if (bVar1 != pbVar6[1]) goto LAB_00429271;
            pbVar4 = pbVar4 + 2;
            pbVar6 = pbVar6 + 2;
          } while (bVar1 != 0);
          iVar5 = 0;
LAB_00429276:
          if (iVar5 == 0) {
            uStack_4 = 0xffffffff;
            FUN_004931d6();
            ExceptionList = local_c;
            return iVar7;
          }
          iVar7 = iVar7 + 1;
        } while (iVar7 < iVar3);
      }
      uStack_4 = 0xffffffff;
      FUN_004931d6();
    }
    else {
      iVar7 = FUN_00482c94(pbVar2);
      iVar7 = iVar7 + -1;
      if ((-1 < iVar7) && (iVar7 < iVar3)) {
        ExceptionList = local_c;
        return iVar7;
      }
    }
  }
  ExceptionList = local_c;
  return -1;
}

