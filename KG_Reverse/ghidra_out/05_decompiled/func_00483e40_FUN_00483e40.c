// Function: FUN_00483e40
// Entry:    00483e40
// Size:     118 bytes
// Conv:     unknown
// Signature: undefined FUN_00483e40(void)
// Decompiled by Ghidra 12.1.2


char * FUN_00483e40(char *param_1,char *param_2)

{
  char *pcVar1;
  size_t sVar2;
  size_t sVar3;
  char *pcVar4;
  
  if (DAT_03014fdc == 0) {
    pcVar1 = (char *)FUN_00483dc0(param_1,param_2);
  }
  else {
    sVar2 = _strlen(param_2);
    sVar3 = _strlen(param_1);
    pcVar1 = param_1 + (sVar3 - sVar2);
    for (; (*param_1 != '\0' && (param_1 <= pcVar1)); param_1 = (char *)FUN_004859c8(param_1)) {
      pcVar4 = param_2;
      if (*param_1 != '\0') {
        do {
          if ((*pcVar4 == '\0') || (pcVar4[(int)param_1 - (int)param_2] != *pcVar4)) break;
          pcVar4 = pcVar4 + 1;
        } while (pcVar4[(int)param_1 - (int)param_2] != '\0');
      }
      if (*pcVar4 == '\0') {
        return param_1;
      }
    }
    pcVar1 = (char *)0x0;
  }
  return pcVar1;
}

