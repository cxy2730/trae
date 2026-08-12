// Function: FUN_0041d190
// Entry:    0041d190
// Size:     69 bytes
// Conv:     unknown
// Signature: undefined FUN_0041d190(void)
// Decompiled by Ghidra 12.1.2


BOOL FUN_0041d190(LPCSTR param_1)

{
  char *pcVar1;
  char cVar2;
  BOOL BVar3;
  
  cVar2 = *param_1;
  while (cVar2 == ' ') {
    pcVar1 = param_1 + 1;
    param_1 = param_1 + 1;
    cVar2 = *pcVar1;
  }
  if ((*param_1 != '\0') &&
     ((param_1[1] != ':' || ((param_1[2] != '\0' && ((param_1[2] != '\\' || (param_1[3] != '\0')))))
      ))) {
    FUN_0041d0c0(param_1);
    BVar3 = RemoveDirectoryA(param_1);
    return BVar3;
  }
  return 0;
}

