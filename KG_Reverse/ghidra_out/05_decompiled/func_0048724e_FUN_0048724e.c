// Function: FUN_0048724e
// Entry:    0048724e
// Size:     328 bytes
// Conv:     unknown
// Signature: undefined FUN_0048724e(void)
// Decompiled by Ghidra 12.1.2


int FUN_0048724e(void)

{
  char cVar1;
  BOOL BVar2;
  DWORD DVar3;
  int iVar4;
  char *pcVar5;
  byte unaff_BL;
  char local_1230 [4240];
  char local_1a0 [260];
  DWORD local_9c;
  uint local_98;
  DWORD local_8c;
  CHAR aCStackY_18 [4];
  
  FUN_004835e0();
  local_9c = 0x94;
  BVar2 = GetVersionExA((LPOSVERSIONINFOA)&local_9c);
  if (((BVar2 == 0) || (local_8c != 2)) || (local_98 < 5)) {
    aCStackY_18[0] = -0x58;
    aCStackY_18[1] = 'r';
    aCStackY_18[2] = 'H';
    aCStackY_18[3] = '\0';
    DVar3 = GetEnvironmentVariableA("__MSVCRT_HEAP_SELECT",local_1230,0x1090);
    if (DVar3 != 0) {
      pcVar5 = local_1230;
      while (local_1230[0] != '\0') {
        cVar1 = *pcVar5;
        if (('`' < cVar1) && (cVar1 < '{')) {
          *pcVar5 = cVar1 + -0x20;
        }
        pcVar5 = pcVar5 + 1;
        local_1230[0] = *pcVar5;
      }
      aCStackY_18[0] = -0x1a;
      aCStackY_18[1] = 'r';
      aCStackY_18[2] = 'H';
      aCStackY_18[3] = '\0';
      iVar4 = _strncmp("__GLOBAL_HEAP_SELECTED",local_1230,0x16);
      if (iVar4 == 0) {
        pcVar5 = local_1230;
      }
      else {
        builtin_memcpy(aCStackY_18,"\bsH",4);
        GetModuleFileNameA((HMODULE)0x0,local_1a0,0x104);
        pcVar5 = local_1a0;
        while (local_1a0[0] != '\0') {
          cVar1 = *pcVar5;
          if (('`' < cVar1) && (cVar1 < '{')) {
            *pcVar5 = cVar1 + -0x20;
          }
          pcVar5 = pcVar5 + 1;
          local_1a0[0] = *pcVar5;
        }
        pcVar5 = (char *)FUN_00483dc0();
      }
      if ((pcVar5 != (char *)0x0) && (iVar4 = FUN_00483ed0(), iVar4 != 0)) {
        pcVar5 = (char *)(iVar4 + 1);
        cVar1 = *pcVar5;
        while (cVar1 != '\0') {
          if (*pcVar5 == ';') {
            *pcVar5 = '\0';
          }
          else {
            pcVar5 = pcVar5 + 1;
          }
          cVar1 = *pcVar5;
        }
        builtin_memcpy(aCStackY_18,"nsH",4);
        iVar4 = FUN_0048618d();
        if (iVar4 == 2) {
          return 2;
        }
        if (iVar4 == 3) {
          return 3;
        }
        if (iVar4 == 1) {
          return 1;
        }
      }
    }
    FUN_00487221();
    iVar4 = 3 - (uint)(unaff_BL < 6);
  }
  else {
    iVar4 = 1;
  }
  return iVar4;
}

