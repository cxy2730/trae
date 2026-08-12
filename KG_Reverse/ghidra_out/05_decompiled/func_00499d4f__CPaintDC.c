// Function: ~CPaintDC
// Entry:    00499d4f
// Size:     71 bytes
// Conv:     __thiscall
// Signature: void ~CPaintDC(CPaintDC * this)
// Decompiled by Ghidra 12.1.2


/* Library Function - Single Match
    public: virtual __thiscall CPaintDC::~CPaintDC(void)
   
   Library: Visual Studio 2003 Release */

void __thiscall CPaintDC::~CPaintDC(CPaintDC *this)

{
  CDC *this_00;
  int unaff_EBP;
  
  FUN_004858b8();
  *(CDC **)(unaff_EBP + -0x10) = this_00;
  *(undefined ***)this_00 = &PTR_LAB_02f9af30;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  EndPaint(*(HWND *)(this_00 + 0x10),(PAINTSTRUCT *)(this_00 + 0x14));
  CDC::Detach(this_00);
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_0049935b();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}

