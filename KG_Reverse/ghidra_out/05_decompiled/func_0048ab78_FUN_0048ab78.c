// Function: FUN_0048ab78
// Entry:    0048ab78
// Size:     43 bytes
// Conv:     unknown
// Signature: undefined FUN_0048ab78(void)
// Decompiled by Ghidra 12.1.2


int FUN_0048ab78(char *param_1,int param_2)

{
  char *pcVar1;
  int iVar2;
  
  iVar2 = param_2;
  for (pcVar1 = param_1; (iVar2 != 0 && (iVar2 = iVar2 + -1, *pcVar1 != '\0')); pcVar1 = pcVar1 + 1)
  {
  }
  if (*pcVar1 != '\0') {
    return param_2;
  }
  return (int)pcVar1 - (int)param_1;
}

