// Function: FUN_0049ce27
// Entry:    0049ce27
// Size:     234 bytes
// Conv:     unknown
// Signature: undefined FUN_0049ce27(void)
// Decompiled by Ghidra 12.1.2


CWinThread * FUN_0049ce27(void)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  HANDLE pvVar4;
  DWORD DVar5;
  CWinThread *this;
  int unaff_EBP;
  
  FUN_004858b8();
  *(CWinThread **)(unaff_EBP + -0x10) = this;
  CWinThread::CWinThread(this);
  *(undefined ***)this = &PTR_LAB_02f9bfd8;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  if (*(int *)(unaff_EBP + 8) == 0) {
    *(undefined4 *)(this + 0x78) = 0;
  }
  else {
    uVar1 = FUN_00485551(*(undefined4 *)(unaff_EBP + 8));
    *(undefined4 *)(this + 0x78) = uVar1;
  }
  iVar2 = FUN_0049c724();
  iVar3 = FUN_0049ccac(&LAB_0049c796);
  *(CWinThread **)(iVar3 + 4) = this;
  pvVar4 = GetCurrentThread();
  *(HANDLE *)(this + 0x28) = pvVar4;
  DVar5 = GetCurrentThreadId();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  *(DWORD *)(this + 0x2c) = DVar5;
  *(CWinThread **)(iVar2 + 4) = this;
  *(undefined4 *)(this + 0x68) = 0;
  *(undefined4 *)(this + 0x8c) = 0;
  *(undefined4 *)(this + 0x90) = 0;
  *(undefined4 *)(this + 0x7c) = 0;
  *(undefined4 *)(this + 0x88) = 0;
  *(undefined4 *)(this + 0xa8) = 0;
  *(undefined4 *)(this + 0x80) = 0;
  *(undefined2 *)(this + 0xb2) = 0;
  *(undefined2 *)(this + 0xb0) = 0;
  *(undefined4 *)(this + 0x70) = 0;
  *(undefined4 *)(this + 0xac) = 0;
  *(undefined4 *)(this + 0xa0) = 0;
  *(undefined4 *)(this + 0xa4) = 0;
  *(undefined4 *)(this + 0x94) = 0;
  *(undefined4 *)(this + 0x98) = 0;
  *(undefined4 *)(this + 0xb4) = 0;
  *(undefined4 *)(this + 0xbc) = 0;
  *(undefined4 *)(this + 0x84) = 0;
  *(undefined4 *)(this + 0xb8) = 0x200;
  return this;
}

