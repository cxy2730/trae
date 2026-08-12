// Function: FUN_00497f2c
// Entry:    00497f2c
// Size:     95 bytes
// Conv:     unknown
// Signature: undefined FUN_00497f2c(void)
// Decompiled by Ghidra 12.1.2


void FUN_00497f2c(void)

{
  int iVar1;
  DWORD dwThreadId;
  HHOOK pHVar2;
  int iVar3;
  
  iVar1 = FUN_0049c724();
  if (*(char *)(iVar1 + 0x14) == '\0') {
    iVar1 = FUN_0049c4f2();
    dwThreadId = GetCurrentThreadId();
    pHVar2 = SetWindowsHookExA(-1,(HOOKPROC)&LAB_00498284,(HINSTANCE)0x0,dwThreadId);
    *(HHOOK *)(iVar1 + 0x30) = pHVar2;
    iVar1 = FUN_0049cd41(&LAB_0049c3a6);
    if (*(int *)(iVar1 + 0x14) != 0) {
      iVar3 = FUN_0049c724();
      (**(code **)(iVar1 + 0x14))(*(undefined4 *)(iVar3 + 8));
    }
    FUN_0049ccac(&LAB_0049d365);
  }
  return;
}

