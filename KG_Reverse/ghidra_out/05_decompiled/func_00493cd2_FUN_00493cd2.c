// Function: FUN_00493cd2
// Entry:    00493cd2
// Size:     198 bytes
// Conv:     unknown
// Signature: undefined FUN_00493cd2(void)
// Decompiled by Ghidra 12.1.2


void FUN_00493cd2(LPCSTR param_1)

{
  char cVar1;
  char *lpString1;
  LPSTR pCVar2;
  CHAR CVar3;
  
  lpString1 = (char *)FUN_004935ba(0x104);
  _memset(lpString1,0,0x104);
  lstrcpynA(lpString1,param_1,0x104);
  CVar3 = *lpString1;
  pCVar2 = lpString1;
  while ((CVar3 != '\0' &&
         (((CVar3 != '\\' && (CVar3 != '/')) || ((pCVar2[1] != '\\' && (pCVar2[1] != '/'))))))) {
    pCVar2 = (LPSTR)FUN_004859c8(pCVar2);
    CVar3 = *pCVar2;
  }
  if (*pCVar2 == '\0') {
    CVar3 = *lpString1;
    while (((CVar3 != '\0' && (CVar3 != '\\')) && (CVar3 != '/'))) {
      lpString1 = (char *)FUN_004859c8(lpString1);
      CVar3 = *lpString1;
    }
  }
  else {
    for (lpString1 = pCVar2 + 2;
        ((cVar1 = *lpString1, cVar1 != '\0' && (cVar1 != '\\')) && (cVar1 != '/'));
        lpString1 = (char *)FUN_004859c8(lpString1)) {
    }
    if (*lpString1 == '\0') goto LAB_00493d53;
    do {
      lpString1 = (char *)FUN_004859c8(lpString1);
LAB_00493d53:
      cVar1 = *lpString1;
    } while (((cVar1 != '\0') && (cVar1 != '\\')) && (cVar1 != '/'));
  }
  if (*lpString1 != '\0') {
    lpString1[1] = '\0';
  }
  FUN_00493609(0xffffffff);
  return;
}

