// Function: FUN_0041b870
// Entry:    0041b870
// Size:     77 bytes
// Conv:     unknown
// Signature: undefined FUN_0041b870(void)
// Decompiled by Ghidra 12.1.2


int FUN_0041b870(char *param_1,byte param_2)

{
  int iVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  char *pcVar6;
  
  uVar3 = 0xffffffff;
  pcVar6 = param_1;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar2 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar2 != '\0');
  iVar5 = -1;
  iVar4 = 0;
  if (0 < (int)(~uVar3 - 1)) {
    do {
      if ((param_1[iVar4] & 0x80U) == 0x80) {
        iVar1 = iVar4 + 1;
        iVar4 = iVar4 + 1;
        if (param_1[iVar1] == '\0') {
          return iVar5;
        }
      }
      else if (param_1[iVar4] == param_2) {
        iVar5 = iVar4;
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < (int)(~uVar3 - 1));
  }
  return iVar5;
}

