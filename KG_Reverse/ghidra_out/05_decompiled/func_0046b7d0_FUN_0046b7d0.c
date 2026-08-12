// Function: FUN_0046b7d0
// Entry:    0046b7d0
// Size:     469 bytes
// Conv:     unknown
// Signature: undefined FUN_0046b7d0(void)
// Decompiled by Ghidra 12.1.2


void __thiscall FUN_0046b7d0(int param_1,undefined4 param_2,char *param_3,int param_4)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  uint uVar5;
  uint uVar6;
  undefined4 uVar7;
  char *pcVar8;
  char *pcVar9;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_004a1231;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  if (*(int *)(param_1 + 8) == 2) {
    ExceptionList = &local_c;
    FUN_0046b790();
  }
  uVar7 = 0;
  if (param_3 == (char *)0x0) {
LAB_0046b819:
    if ((*(char **)(param_1 + 0x20) != (char *)0x0) && (**(char **)(param_1 + 0x20) != '\0')) {
      if (*(int *)(param_1 + 0x234) == 0) {
        iVar2 = FUN_00492f17(0x158);
        local_4 = 0;
        if (iVar2 != 0) {
          uVar7 = FUN_0046d730(param_1);
        }
        local_4 = 0xffffffff;
        iVar2 = FUN_00492f17(0x80);
        local_4 = 1;
        if (iVar2 == 0) {
          piVar3 = (int *)0x0;
        }
        else {
          piVar3 = (int *)FUN_0046cf00(param_1);
        }
        local_4 = 0xffffffff;
        iVar2 = FUN_00492f17(0xb4);
        local_4 = 2;
        if (iVar2 == 0) {
          piVar4 = (int *)0x0;
        }
        else {
          piVar4 = (int *)FUN_0046be30(param_1,param_2);
        }
        local_4 = 0xffffffff;
        (**(code **)(*piVar4 + 0x28))(uVar7);
        (**(code **)(*piVar4 + 0x2c))(piVar3);
        (**(code **)(*piVar3 + 0x2c))(uVar7);
        (**(code **)(*piVar3 + 0x28))(piVar4);
        iVar2 = (**(code **)(*piVar3 + 0x30))(*(undefined4 *)(param_1 + 0x20),puStack_8);
        if (iVar2 == 0) {
          *(int **)(param_1 + 0x234) = piVar3;
        }
        else if (piVar3 != (int *)0x0) {
          (**(code **)*piVar3)(1);
        }
      }
      if (*(int *)(param_1 + 0x234) != 0) {
        *(undefined4 *)(param_1 + 0x30) = param_2;
        if ((param_3 != (char *)0x0) && (param_3 != (char *)(param_1 + 0x34))) {
          uVar5 = 0xffffffff;
          do {
            pcVar8 = param_3;
            if (uVar5 == 0) break;
            uVar5 = uVar5 - 1;
            pcVar8 = param_3 + 1;
            cVar1 = *param_3;
            param_3 = pcVar8;
          } while (cVar1 != '\0');
          uVar5 = ~uVar5;
          pcVar8 = pcVar8 + -uVar5;
          pcVar9 = (char *)(param_1 + 0x34);
          for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
            *(undefined4 *)pcVar9 = *(undefined4 *)pcVar8;
            pcVar8 = pcVar8 + 4;
            pcVar9 = pcVar9 + 4;
          }
          for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
            *pcVar9 = *pcVar8;
            pcVar8 = pcVar8 + 1;
            pcVar9 = pcVar9 + 1;
          }
        }
        if (param_4 != 0) {
          FUN_0046bcb0(param_4);
        }
        (**(code **)(**(int **)(param_1 + 0x234) + 8))();
        FUN_0046b770(2);
        ExceptionList = local_c;
        return;
      }
      *(undefined4 *)(param_1 + 0x30) = 0;
      goto LAB_0046b98c;
    }
  }
  else {
    uVar5 = 0xffffffff;
    pcVar8 = param_3;
    do {
      if (uVar5 == 0) break;
      uVar5 = uVar5 - 1;
      cVar1 = *pcVar8;
      pcVar8 = pcVar8 + 1;
    } while (cVar1 != '\0');
    if (~uVar5 - 1 < 0x200) goto LAB_0046b819;
  }
  *(undefined4 *)(param_1 + 0x30) = 0;
LAB_0046b98c:
  *(undefined1 *)(param_1 + 0x34) = 0;
  ExceptionList = local_c;
  return;
}

