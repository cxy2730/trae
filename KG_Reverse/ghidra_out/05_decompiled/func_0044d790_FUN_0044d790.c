// Function: FUN_0044d790
// Entry:    0044d790
// Size:     198 bytes
// Conv:     unknown
// Signature: undefined FUN_0044d790(void)
// Decompiled by Ghidra 12.1.2


void FUN_0044d790(int *param_1,int param_2)

{
  char *pcVar1;
  int iVar2;
  char *pcVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  int iVar6;
  
  iVar6 = *param_1;
  if ((char)param_1[2] == '\x06') {
    if (*(char *)((int)param_1 + 9) == '\b') {
      param_2 = param_1[1] + param_2;
      if (iVar6 != 0) {
        do {
          pcVar1 = (char *)(param_2 + -1);
          pcVar3 = (char *)(param_2 + -1);
          param_2 = param_2 + -4;
          iVar6 = iVar6 + -1;
          *pcVar3 = -1 - *pcVar1;
        } while (iVar6 != 0);
        return;
      }
    }
    else {
      param_2 = param_1[1] + param_2;
      if (iVar6 != 0) {
        do {
          *(char *)(param_2 + -1) = -1 - *(char *)(param_2 + -1);
          iVar6 = iVar6 + -1;
          *(char *)(param_2 + -2) = -1 - *(char *)(param_2 + -2);
          param_2 = param_2 + -8;
        } while (iVar6 != 0);
        return;
      }
    }
  }
  else if ((char)param_1[2] == '\x04') {
    if (*(char *)((int)param_1 + 9) == '\b') {
      puVar4 = (undefined1 *)(param_1[1] + param_2);
      puVar5 = puVar4;
      if (iVar6 != 0) {
        do {
          pcVar1 = puVar4 + -1;
          puVar4 = puVar4 + -2;
          puVar5[-1] = -1 - *pcVar1;
          iVar6 = iVar6 + -1;
          puVar5[-2] = *puVar4;
          puVar5 = puVar5 + -2;
        } while (iVar6 != 0);
        return;
      }
    }
    else {
      iVar2 = param_1[1] + param_2;
      for (; iVar6 != 0; iVar6 = iVar6 + -1) {
        *(char *)(iVar2 + -1) = -1 - *(char *)(iVar2 + -1);
        *(char *)(iVar2 + -2) = -1 - *(char *)(iVar2 + -2);
        iVar2 = iVar2 + -4;
      }
    }
  }
  return;
}

