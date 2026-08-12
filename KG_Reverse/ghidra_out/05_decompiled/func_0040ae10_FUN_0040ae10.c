// Function: FUN_0040ae10
// Entry:    0040ae10
// Size:     456 bytes
// Conv:     unknown
// Signature: undefined FUN_0040ae10(void)
// Decompiled by Ghidra 12.1.2


bool __thiscall FUN_0040ae10(int param_1,UINT param_2)

{
  HINSTANCE pHVar1;
  int iVar2;
  CHAR *lpString1;
  undefined4 local_218;
  CHAR local_214 [520];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_0049e09b;
  local_c = ExceptionList;
  local_218 = PTR_DAT_02fd8088;
  local_4 = 0;
  if (*(int *)(param_1 + 0x44) == 0) {
    if (*(int *)(*(int *)(param_1 + 0x48) + -8) == 0) {
      local_4 = 0xffffffff;
      ExceptionList = &local_c;
      FUN_004931d6();
      ExceptionList = local_c;
      return false;
    }
    ExceptionList = &local_c;
    FUN_00493313(s_mailto__02faacf0);
    FUN_004935a2(param_1 + 0x48);
  }
  else {
    ExceptionList = &local_c;
    FUN_004932c3(param_1 + 0x4c);
    if (*(int *)(local_218 + -8) == 0) {
      local_4 = 0xffffffff;
      FUN_004931d6();
      ExceptionList = local_c;
      return false;
    }
  }
  pHVar1 = ShellExecuteA((HWND)0x0,&DAT_02faace8,local_218,(LPCSTR)0x0,(LPCSTR)0x0,param_2);
  if ((pHVar1 < (HINSTANCE)0x21) &&
     (iVar2 = FUN_0040ada0(0x80000000,&DAT_02faace0,local_214), iVar2 == 0)) {
    lstrcatA(local_214,s__shell_open_command_02faaccc);
    iVar2 = FUN_0040ada0(0x80000000,local_214,local_214);
    if (iVar2 == 0) {
      lpString1 = (CHAR *)FUN_00483e40(local_214,&DAT_02faacc4);
      if ((lpString1 == (LPSTR)0x0) &&
         (lpString1 = (CHAR *)FUN_00483dc0(local_214,&DAT_02faacc0), lpString1 == (LPSTR)0x0)) {
        iVar2 = lstrlenA(local_214);
        lpString1 = local_214 + iVar2 + -1;
      }
      else {
        *lpString1 = '\0';
      }
      lstrcatA(lpString1,&DAT_02faacbc);
      lstrcatA(lpString1,local_218);
      pHVar1 = (HINSTANCE)WinExec(local_214,param_2);
    }
  }
  local_4 = 0xffffffff;
  FUN_004931d6();
  ExceptionList = local_c;
  return 0x20 < (int)pHVar1;
}

