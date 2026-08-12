// Function: entry
// Entry:    00481e65
// Size:     253 bytes
// Conv:     unknown
// Signature: undefined entry(void)
// Decompiled by Ghidra 12.1.2


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void entry(void)

{
  DWORD DVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  HMODULE pHVar5;
  undefined4 uVar6;
  _STARTUPINFOA local_60;
  undefined1 *local_1c;
  undefined4 *local_18;
  void *pvStack_14;
  undefined1 *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_02f9c9e8;
  puStack_10 = &LAB_00485274;
  pvStack_14 = ExceptionList;
  local_1c = &stack0xffffff88;
  ExceptionList = &pvStack_14;
  DVar1 = GetVersion();
  _DAT_03010fcc = DVar1 >> 8 & 0xff;
  _DAT_03010fc8 = DVar1 & 0xff;
  _DAT_03010fc4 = _DAT_03010fc8 * 0x100 + _DAT_03010fcc;
  _DAT_03010fc0 = DVar1 >> 0x10;
  iVar2 = FUN_00487396(1);
  if (iVar2 == 0) {
    FUN_00481f92(0x1c);
  }
  iVar2 = FUN_00487153();
  if (iVar2 == 0) {
    FUN_00481f92(0x10);
  }
  local_8 = 0;
  FUN_00486f97();
  DAT_03016204 = GetCommandLineA();
  DAT_03010f38 = FUN_00486e65();
  FUN_00486c18();
  FUN_00486b5f();
  FUN_00485e1b();
  local_60.dwFlags = 0;
  GetStartupInfoA(&local_60);
  uVar3 = FUN_00486b07();
  if ((local_60.dwFlags & 1) == 0) {
    uVar4 = 10;
  }
  else {
    uVar4 = (uint)local_60.wShowWindow;
  }
  uVar6 = 0;
  pHVar5 = GetModuleHandleA((LPCSTR)0x0);
  uVar3 = FUN_00490d7c(pHVar5,uVar6,uVar3,uVar4);
  FUN_00485e48(uVar3);
  FUN_0048698f(*(undefined4 *)*local_18,local_18);
  return;
}

