// Function: FID_conflict:~CClientDC
// Entry:    00499be7
// Size:     66 bytes
// Conv:     unknown
// Signature: undefined FID_conflict:~CClientDC(void)
// Decompiled by Ghidra 12.1.2


/* Library Function - Multiple Matches With Different Base Names
    public: virtual __thiscall CClientDC::~CClientDC(void)
    public: virtual __thiscall CWindowDC::~CWindowDC(void)
   
   Library: Visual Studio 2003 Release */

void FID_conflict__CClientDC(void)

{
  HDC__ *hDC;
  CDC *this;
  int unaff_EBP;
  
  FUN_004858b8();
  *(CDC **)(unaff_EBP + -0x10) = this;
  *(undefined ***)this = &PTR_LAB_02f9ae40;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  hDC = CDC::Detach(this);
  ReleaseDC(*(HWND *)(this + 0x10),hDC);
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_0049935b();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}

