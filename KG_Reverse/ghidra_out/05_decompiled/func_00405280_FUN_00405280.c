// Function: FUN_00405280
// Entry:    00405280
// Size:     183 bytes
// Conv:     unknown
// Signature: undefined FUN_00405280(void)
// Decompiled by Ghidra 12.1.2


int * FUN_00405280(int *param_1,uint *param_2)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  char *pcVar4;
  
  uVar3 = param_1[2];
  if (0x80000101 < uVar3) {
    if (uVar3 < 0x80000402) {
      if (uVar3 == 0x80000401) goto switchD_0040529e_caseD_80000008;
      if (uVar3 == 0x80000201) {
        *param_2 = 2;
        return param_1;
      }
      if (uVar3 != 0x80000301) {
        return (int *)0x0;
      }
    }
    else if (uVar3 != 0x80000501) {
      if (uVar3 != 0x80000601) {
        return (int *)0x0;
      }
      goto switchD_0040529e_caseD_80000003;
    }
switchD_0040529e_caseD_80000002:
    *param_2 = 4;
    return param_1;
  }
  if (uVar3 == 0x80000101) {
    *param_2 = 1;
    return param_1;
  }
  switch(uVar3) {
  case 0x80000002:
  case 0x80000006:
    goto switchD_0040529e_caseD_80000002;
  case 0x80000003:
switchD_0040529e_caseD_80000003:
    *param_2 = 8;
    return param_1;
  case 0x80000004:
    uVar3 = 0xffffffff;
    pcVar4 = (char *)*param_1;
    do {
      if (uVar3 == 0) break;
      uVar3 = uVar3 - 1;
      cVar1 = *pcVar4;
      pcVar4 = pcVar4 + 1;
    } while (cVar1 != '\0');
    *param_2 = ~uVar3;
    return (int *)*param_1;
  case 0x80000005:
    iVar2 = *param_1;
    *param_2 = *(uint *)(iVar2 + 4);
    return (int *)(iVar2 + 8);
  default:
    return (int *)0x0;
  case 0x80000008:
switchD_0040529e_caseD_80000008:
    *param_2 = 8;
    return param_1;
  }
}

