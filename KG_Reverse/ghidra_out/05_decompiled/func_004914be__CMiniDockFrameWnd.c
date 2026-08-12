// Function: ~CMiniDockFrameWnd
// Entry:    004914be
// Size:     56 bytes
// Conv:     __thiscall
// Signature: void ~CMiniDockFrameWnd(CMiniDockFrameWnd * this)
// Decompiled by Ghidra 12.1.2


/* Library Function - Single Match
    public: virtual __thiscall CMiniDockFrameWnd::~CMiniDockFrameWnd(void)
   
   Library: Visual Studio 2003 Release */

void __thiscall CMiniDockFrameWnd::~CMiniDockFrameWnd(CMiniDockFrameWnd *this)

{
  CDialog *this_00;
  int unaff_EBP;
  
  FUN_004858b8();
  *(CDialog **)(unaff_EBP + -0x10) = this_00;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  FUN_004931d6();
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  CDialog::~CDialog(this_00);
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}

