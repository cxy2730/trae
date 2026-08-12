// Function: FUN_0046a590
// Entry:    0046a590
// Size:     314 bytes
// Conv:     unknown
// Signature: undefined FUN_0046a590(void)
// Decompiled by Ghidra 12.1.2


BOOL FUN_0046a590(LPCSTR param_1,DWORD param_2)

{
  DWORD DVar1;
  HWND hWnd;
  undefined4 uVar2;
  int iVar3;
  BOOL BVar4;
  HANDLE hProcess;
  int local_13c;
  DWORD local_138;
  undefined1 auStack_134 [8];
  DWORD DStack_12c;
  undefined1 auStack_110 [260];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_004a115b;
  local_c = ExceptionList;
  local_138 = 0;
  ExceptionList = &local_c;
  FUN_00493244(param_1);
  DVar1 = param_2;
  if (param_2 == 0) {
    if (*(int *)(local_13c + -8) == 0) {
      local_4 = 0xffffffff;
      FUN_004931d6();
      ExceptionList = local_c;
      return 0;
    }
    hWnd = FindWindowA((LPCSTR)0x0,param_1);
    if (hWnd == (HWND)0x0) {
      uVar2 = CreateToolhelp32Snapshot(2,0);
      local_13c = 0x128;
      iVar3 = Process32First(uVar2,&local_13c);
      while ((DVar1 = local_138, iVar3 != 0 &&
             (iVar3 = FUN_00482e73(local_13c,auStack_110), DVar1 = DStack_12c, iVar3 != 0))) {
        iVar3 = Process32Next(uVar2,auStack_134);
      }
    }
    else {
      GetWindowThreadProcessId(hWnd,&local_138);
      DVar1 = local_138;
    }
  }
  local_138 = DVar1;
  if (local_138 == 0) {
    local_4 = 0xffffffff;
    FUN_004931d6();
    BVar4 = 0;
  }
  else {
    hProcess = OpenProcess(1,0,local_138);
    BVar4 = TerminateProcess(hProcess,0);
    local_4 = 0xffffffff;
    FUN_004931d6();
  }
  ExceptionList = local_c;
  return BVar4;
}

