// Function: PreModal
// Entry:    0049420e
// Size:     58 bytes
// Conv:     __thiscall
// Signature: HWND__ * PreModal(CDialog * this)
// Decompiled by Ghidra 12.1.2


/* Library Function - Single Match
    protected: struct HWND__ * __thiscall CDialog::PreModal(void)
   
   Libraries: Visual Studio 2005 Release, Visual Studio 2008 Release */

HWND__ * __thiscall CDialog::PreModal(CDialog *this)

{
  int iVar1;
  undefined4 uVar2;
  HWND__ *pHVar3;
  
  iVar1 = FUN_0049c724();
  if (*(int *)(iVar1 + 4) != 0) {
    FUN_0049ac1a(0);
  }
  uVar2 = 0;
  if (*(int *)(this + 0x50) != 0) {
    uVar2 = *(undefined4 *)(*(int *)(this + 0x50) + 0x1c);
  }
  pHVar3 = (HWND__ *)FUN_0049adc0(uVar2,this + 0x54);
  FUN_00495080(this);
  return pHVar3;
}

