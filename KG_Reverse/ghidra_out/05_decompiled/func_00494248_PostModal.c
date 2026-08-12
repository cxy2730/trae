// Function: PostModal
// Entry:    00494248
// Size:     66 bytes
// Conv:     __thiscall
// Signature: void PostModal(CDialog * this)
// Decompiled by Ghidra 12.1.2


/* Library Function - Single Match
    protected: void __thiscall CDialog::PostModal(void)
   
   Library: Visual Studio 2008 Release */

void __thiscall CDialog::PostModal(CDialog *this)

{
  BOOL BVar1;
  int iVar2;
  
  FUN_004950cc();
  CWnd::Detach((CWnd *)this);
  BVar1 = IsWindow(*(HWND *)(this + 0x54));
  if (BVar1 != 0) {
    EnableWindow(*(HWND *)(this + 0x54),1);
  }
  *(undefined4 *)(this + 0x54) = 0;
  iVar2 = FUN_0049c724();
  if (*(int *)(iVar2 + 4) != 0) {
    FUN_0049ac1a(1);
  }
  return;
}

