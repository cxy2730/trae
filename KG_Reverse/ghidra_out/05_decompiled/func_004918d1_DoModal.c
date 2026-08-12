// Function: DoModal
// Entry:    004918d1
// Size:     44 bytes
// Conv:     unknown
// Signature: undefined DoModal(void)
// Decompiled by Ghidra 12.1.2


/* Library Function - Multiple Matches With Same Base Name
    public: virtual int __thiscall CColorDialog::DoModal(void)
    public: virtual int __thiscall CPageSetupDialog::DoModal(void)
   
   Library: Visual Studio 2008 Release */

BOOL __fastcall DoModal(CDialog *param_1)

{
  HWND__ *pHVar1;
  BOOL BVar2;
  
  pHVar1 = CDialog::PreModal(param_1);
  *(HWND__ **)(param_1 + 0x60) = pHVar1;
  BVar2 = ChooseColorA((LPCHOOSECOLORA)(param_1 + 0x5c));
  CDialog::PostModal(param_1);
  if (BVar2 == 0) {
    BVar2 = 2;
  }
  return BVar2;
}

