// Function: ~CDialog
// Entry:    00493f68
// Size:     62 bytes
// Conv:     __thiscall
// Signature: void ~CDialog(CDialog * this)
// Decompiled by Ghidra 12.1.2


/* Library Function - Single Match
    public: virtual __thiscall CDialog::~CDialog(void)
   
   Library: Visual Studio 2003 Release */

void __thiscall CDialog::~CDialog(CDialog *this)

{
  CWnd *this_00;
  int unaff_EBP;
  
  FUN_004858b8();
  *(CWnd **)(unaff_EBP + -0x10) = this_00;
  *(undefined ***)this_00 = &PTR_LAB_02f9b19c;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  if (*(int *)(this_00 + 0x1c) != 0) {
    FUN_004953fe();
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  CWnd::~CWnd(this_00);
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}

