// Function: FUN_0049dba4
// Entry:    0049dba4
// Size:     181 bytes
// Conv:     unknown
// Signature: undefined FUN_0049dba4(void)
// Decompiled by Ghidra 12.1.2


void FUN_0049dba4(void)

{
  code *pcVar1;
  int iVar2;
  undefined1 *puVar3;
  int iVar4;
  LPCSTR lpClassName;
  
  iVar2 = FUN_0049c724();
  FUN_0049d98a(1);
  lpClassName = (LPCSTR)(iVar2 + 0x34);
  while (*lpClassName != '\0') {
    puVar3 = (undefined1 *)FUN_004858d7(lpClassName,10);
    *puVar3 = 0;
    iVar4 = FUN_0049c724();
    UnregisterClassA(lpClassName,*(HINSTANCE *)(iVar4 + 8));
    lpClassName = puVar3 + 1;
  }
  *(LPCSTR)(iVar2 + 0x34) = '\0';
  FUN_0049d9fa(1);
  iVar2 = FUN_0049c724();
  if ((*(int *)(iVar2 + 4) != 0) &&
     (pcVar1 = *(code **)(*(int *)(iVar2 + 4) + 0x54), pcVar1 != (code *)0x0)) {
    (*pcVar1)(1,0);
  }
  iVar2 = FUN_0049c4f2();
  if (*(int **)(iVar2 + 0xcc) != (int *)0x0) {
    iVar4 = (**(code **)(**(int **)(iVar2 + 0xcc) + 0xb8))();
    if (iVar4 != 0) {
      *(undefined4 *)(iVar2 + 0xcc) = 0;
    }
  }
  iVar4 = FUN_0049c724();
  if (*(char *)(iVar4 + 0x14) == '\0') {
    if (*(HHOOK *)(iVar2 + 0x30) != (HHOOK)0x0) {
      UnhookWindowsHookEx(*(HHOOK *)(iVar2 + 0x30));
      *(undefined4 *)(iVar2 + 0x30) = 0;
    }
    if (*(HHOOK *)(iVar2 + 0x2c) != (HHOOK)0x0) {
      UnhookWindowsHookEx(*(HHOOK *)(iVar2 + 0x2c));
      *(undefined4 *)(iVar2 + 0x2c) = 0;
    }
  }
  return;
}

